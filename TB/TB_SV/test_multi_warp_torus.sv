//=============================================================================
// TEST: Multi-Warp Parallel Torus (512-Thread SIMT)
//=============================================================================
// DESCRIPTION:
//   Stress tests the GPU core by running 16 warps in parallel.
//   Total 512 active threads (16 Warps * 32 Threads/Warp).
//
// OBJECTIVES:
//   1. High Occupancy: Saturates the SM with 16 active warps.
//   2. Mapping: 
//      - WarpID (0-15) -> Theta index (Ring cross-section)
//      - ThreadID (0-31) -> Phi index (Tube segments)
//      - Each thread calculates exactly ONE vertex.
//   3. Hardware Stress: Verifies MSHR, LSU, and Global Memory arbitrations
//      under heavy contention from multiple warps.
//=============================================================================

import simt_pkg::*;

module test_multi_warp_torus;
    // DUT signals
    logic clk;
    logic rst_n;
    
    // Instantiate DUT
    streaming_multiprocessor dut (
        .clk(clk),
        .rst_n(rst_n),
        .done()
    );
    
    // Clock generation
    initial clk = 0;
    always #5 clk = ~clk; // 100MHz
    
    // Simulation control
    integer cycle;
    integer max_cycles = 1000000;
    integer pc;
    
    // Framebuffer parameters
    parameter FB_WIDTH = 64;
    parameter FB_HEIGHT = 64;
    parameter FB_BASE = 32'h2000; 
    parameter FB_SIZE = (FB_WIDTH * FB_HEIGHT) / 8;
    
    // Helper to write a 32-bit word to mock_memory
    task automatic write_mem_word(input logic [31:0] addr, input logic [31:0] data);
        integer line_idx;
        integer word_offset;
        line_idx = addr >> 7;
        word_offset = (addr >> 2) & 31;
        dut.dut_memory.mem[line_idx][word_offset*32 +: 32] = data;
    endtask
    
    // Helper: Encode 64-bit instruction
    function logic [63:0] encode_inst(
        logic [7:0] op,
        logic [7:0] rd,
        logic [7:0] rs1,
        logic [7:0] rs2,
        logic [7:0] rs3,
        logic [3:0] pred,
        logic [19:0] imm
    );
        return {op, rd, rs1, rs2, pred, rs3, imm};
    endfunction
    
    initial begin
        $display("========================================");
        $display("TEST: Multi-Warp Torus (512 Threads)");
        $display("========================================");
        
        // Reset
        rst_n = 0;
        cycle = 0;
        repeat(10) @(posedge clk);
        rst_n = 1;
        repeat(5) @(posedge clk);
        
        // Clear framebuffer
        for (int i = 0; i < FB_SIZE; i += 4) begin
            write_mem_word(FB_BASE + i, 32'h0);
        end
        
        // ASSEMBLY PROGRAM: Multi-Warp Torus
        // Register map:
        // R15: Dynamic Angle (X/Y)
        // R20: Constant 0
        // R21: Cosine(30) Static
        // R22: Sine(30) Static
        // R2: FB Base (0x2000)
        // R23: r=8
        // R24: R=16
        // R25: phi (calculated from TID)
        // R26: theta_idx (PRE-INITIALIZED PER WARP)
        // R28: theta (calculated from R26)
        // R30: TID
        
        pc = 0;
        // Constants in prog_mem[0..15]
        for (int w = 0; w < 16; w++) begin
            integer wpc = 0;
            integer ser_start;
            dut.prog_mem[w][wpc++] = encode_inst(OP_MOV, 2, 20, 0, 0, 4'h7, 20'h2000); // R2 = FB Base
            dut.prog_mem[w][wpc++] = encode_inst(OP_MOV, 23, 20, 0, 0, 4'h7, 20'd8); // r
            dut.prog_mem[w][wpc++] = encode_inst(OP_MOV, 24, 20, 0, 0, 4'h7, 20'd16); // R
            
            // phi_idx = TID
            dut.prog_mem[w][wpc++] = encode_inst(OP_TID, 30, 0, 0, 0, 4'h7, 20'h0);
            // phi = TID * (2^16 / 32) = TID * 2048 (SHL 11)
            dut.prog_mem[w][wpc++] = encode_inst(OP_SHL, 25, 30, 20, 0, 4'h7, 20'd11);
            dut.prog_mem[w][wpc++] = encode_inst(OP_SFU_COS, 29, 25, 20, 0, 4'h7, 20'd0); // R29 = cos(phi)
            dut.prog_mem[w][wpc++] = encode_inst(OP_SFU_SIN, 19, 25, 20, 0, 4'h7, 20'd0); // R19 = sin(phi)
            
            // theta assigned via R26 (Pre-initialized)
            // theta = theta_idx * (2^16 / 16) = theta_idx * 4096 (SHL 12)
            dut.prog_mem[w][wpc++] = encode_inst(OP_SHL, 28, 26, 20, 0, 4'h7, 20'd12);
            dut.prog_mem[w][wpc++] = encode_inst(OP_SFU_COS, 14, 28, 20, 0, 4'h7, 20'd0); // R14 = cos(theta)
            dut.prog_mem[w][wpc++] = encode_inst(OP_SFU_SIN, 13, 28, 20, 0, 4'h7, 20'd0); // R13 = sin(theta)
            
            // x = (R + r*cos(theta)) * cos(phi)
            dut.prog_mem[w][wpc++] = encode_inst(OP_MUL, 5, 14, 23, 0, 4'h7, 20'd0); // r*cos(theta)
            dut.prog_mem[w][wpc++] = encode_inst(OP_SHA, 5, 5, 20, 0, 4'h7, 20'd15);
            dut.prog_mem[w][wpc++] = encode_inst(OP_ADD, 5, 5, 24, 0, 4'h7, 20'd0);  // R + ...
            dut.prog_mem[w][wpc++] = encode_inst(OP_MUL, 6, 5, 29, 0, 4'h7, 20'd0);  
            dut.prog_mem[w][wpc++] = encode_inst(OP_SHA, 3, 6, 20, 0, 4'h7, 20'd15); // R3 = x
            
            // y = (R + r*cos(theta)) * sin(phi)
            dut.prog_mem[w][wpc++] = encode_inst(OP_MUL, 7, 5, 19, 0, 4'h7, 20'd0);
            dut.prog_mem[w][wpc++] = encode_inst(OP_SHA, 4, 7, 20, 0, 4'h7, 20'd15); // R4 = y
            
            // z = r*sin(theta)
            dut.prog_mem[w][wpc++] = encode_inst(OP_MUL, 8, 13, 23, 0, 4'h7, 20'd0); // r*sin(theta)
            dut.prog_mem[w][wpc++] = encode_inst(OP_SHA, 18, 8, 20, 0, 4'h7, 20'd15);// R18 = z
            
            // Rotate around Y-axis (dynamic angle in R15)
            dut.prog_mem[w][wpc++] = encode_inst(OP_SFU_COS, 16, 15, 20, 0, 4'h7, 20'd0);
            dut.prog_mem[w][wpc++] = encode_inst(OP_SFU_SIN, 17, 15, 20, 0, 4'h7, 20'd0);
            dut.prog_mem[w][wpc++] = encode_inst(OP_MUL, 5, 3, 16, 0, 4'h7, 20'd0);
            dut.prog_mem[w][wpc++] = encode_inst(OP_MUL, 6, 18, 17, 0, 4'h7, 20'd0);
            dut.prog_mem[w][wpc++] = encode_inst(OP_ADD, 7, 5, 6, 0, 4'h7, 20'd0);
            dut.prog_mem[w][wpc++] = encode_inst(OP_SHA, 7, 7, 20, 0, 4'h7, 20'd15); // x'
            dut.prog_mem[w][wpc++] = encode_inst(OP_MUL, 8, 18, 16, 0, 4'h7, 20'd0);
            dut.prog_mem[w][wpc++] = encode_inst(OP_MUL, 9, 3, 17, 0, 4'h7, 20'd0);
            dut.prog_mem[w][wpc++] = encode_inst(OP_SUB, 10, 8, 9, 0, 4'h7, 20'd0);
            dut.prog_mem[w][wpc++] = encode_inst(OP_SHA, 10, 10, 20, 0, 4'h7, 20'd15); // z'
            
            // Rotate around X-axis (static 30 deg in R21/R22)
            dut.prog_mem[w][wpc++] = encode_inst(OP_MUL, 5, 4, 21, 0, 4'h7, 20'd0);
            dut.prog_mem[w][wpc++] = encode_inst(OP_MUL, 6, 10, 22, 0, 4'h7, 20'd0);
            dut.prog_mem[w][wpc++] = encode_inst(OP_SUB, 11, 5, 6, 0, 4'h7, 20'd0);
            dut.prog_mem[w][wpc++] = encode_inst(OP_SHA, 11, 11, 20, 0, 4'h7, 20'd15); // y''
            dut.prog_mem[w][wpc++] = encode_inst(OP_MUL, 8, 4, 22, 0, 4'h7, 20'd0);
            dut.prog_mem[w][wpc++] = encode_inst(OP_MUL, 9, 10, 21, 0, 4'h7, 20'd0);
            dut.prog_mem[w][wpc++] = encode_inst(OP_ADD, 12, 8, 9, 0, 4'h7, 20'd0);
            dut.prog_mem[w][wpc++] = encode_inst(OP_SHA, 12, 12, 20, 0, 4'h7, 20'd15); // z''
            
            // Perspective Projection
            dut.prog_mem[w][wpc++] = encode_inst(OP_ADD, 12, 12, 20, 0, 4'h7, 20'd128); // z_cam
            dut.prog_mem[w][wpc++] = encode_inst(OP_SHL, 5, 7, 20, 0, 4'h7, 20'd7);     // x' * 128
            dut.prog_mem[w][wpc++] = encode_inst(OP_IDIV, 3, 5, 12, 0, 4'h7, 20'd0);   // x_proj
            dut.prog_mem[w][wpc++] = encode_inst(OP_ADD, 3, 3, 20, 0, 4'h7, 20'd32);   // x_scr
            dut.prog_mem[w][wpc++] = encode_inst(OP_SHL, 6, 11, 20, 0, 4'h7, 20'd7);    // y'' * 128
            dut.prog_mem[w][wpc++] = encode_inst(OP_IDIV, 4, 6, 12, 0, 4'h7, 20'd0);   // y_proj
            dut.prog_mem[w][wpc++] = encode_inst(OP_ADD, 4, 4, 20, 0, 4'h7, 20'd32);   // y_scr
            
            // Framebuffer Address calculation
            dut.prog_mem[w][wpc++] = encode_inst(OP_SHL, 5, 4, 20, 0, 4'h7, 20'd3); // y << 3
            dut.prog_mem[w][wpc++] = encode_inst(OP_SHR, 6, 3, 20, 0, 4'h7, 20'd5); // x >> 5
            dut.prog_mem[w][wpc++] = encode_inst(OP_SHL, 7, 6, 20, 0, 4'h7, 20'd2); // R6 << 2
            dut.prog_mem[w][wpc++] = encode_inst(OP_ADD, 8, 5, 7, 0, 4'h7, 20'd0);
            dut.prog_mem[w][wpc++] = encode_inst(OP_ADD, 9, 2, 8, 0, 4'h7, 20'd0);  // R9 = Byte Address
            dut.prog_mem[w][wpc++] = encode_inst(OP_AND, 10, 3, 20, 0, 4'h7, 20'd31);
            dut.prog_mem[w][wpc++] = encode_inst(OP_MOV, 11, 20, 0, 0, 4'h7, 20'd1);
            dut.prog_mem[w][wpc++] = encode_inst(OP_SHL, 12, 11, 10, 0, 4'h7, 20'd0); // R12 = Bit Mask
            
            // Serialization within warp (32 threads)
            dut.prog_mem[w][wpc++] = encode_inst(OP_MOV, 31, 20, 0, 0, 4'h7, 20'd0); // k = 0
            dut.prog_mem[w][wpc++] = encode_inst(OP_MOV, 1, 20, 0, 0, 4'h7, 20'd32); // limit = 32
            ser_start = wpc;
            dut.prog_mem[w][wpc++] = encode_inst(OP_ISETP, 5, 30, 31, 0, 4'h7, 20'd0); // TID == k
            dut.prog_mem[w][wpc++] = encode_inst(OP_LDR, 13, 9, 20, 0, 4'h5, 20'd0); 
            dut.prog_mem[w][wpc++] = encode_inst(OP_OR, 14, 13, 12, 0, 4'h5, 20'd0);
            dut.prog_mem[w][wpc++] = encode_inst(OP_STR, 0, 9, 14, 0, 4'h5, 20'd0); 
            dut.prog_mem[w][wpc++] = encode_inst(OP_ADD, 31, 31, 20, 0, 4'h7, 20'd1); // k++
            dut.prog_mem[w][wpc++] = encode_inst(OP_BNE, 0, 31, 1, 0, 4'h7, 20'($signed(ser_start - wpc)));
            
            dut.prog_mem[w][wpc++] = encode_inst(OP_BAR, 0, 0, 0, 0, 4'h7, 20'd0);
            dut.prog_mem[w][wpc++] = encode_inst(OP_EXIT, 0, 0, 0, 0, 4'h7, 20'd0);
        end

        // Multi-frame Animation Loop
        begin
            int active_warps;
            real angle_x_rad;
            integer cos_x_fixed, sin_x_fixed;

            for (int frame = 0; frame < 60; frame++) begin
                $display("--- Generating Multi-Warp Torus Frame %02d/60 ---", frame + 1);
                
                cycle = 0;
                rst_n = 0;
                repeat(10) @(posedge clk);
                rst_n = 1;
                repeat(5) @(posedge clk);
                
                repeat(5) @(posedge clk);

                // Calculate Dynamic X-Axis Rotation (Matches Reference)
                angle_x_rad = -1.0 * real'(frame) * 6.0 * 3.14159 / 180.0;
                cos_x_fixed = int'($cos(angle_x_rad) * 32768.0);
                sin_x_fixed = int'($sin(angle_x_rad) * 32768.0);
                
                // Initialization: Set register constants for ALL 16 warps
                for (int w = 0; w < 16; w++) begin
                    for (int t = 0; t < 32; t++) begin
                        dut.oc_inst.rf_bank_phys[0][t][w][5] = 32'h0; // R20 = 0
                        // Hand-patching R15 (angle) for each warp:
                        dut.oc_inst.rf_bank_phys[3][t][w][3] = (32'h10000 - (frame * 32'h0444)) & 32'hFFFF; // R15
                        // R26 = theta_idx = w
                        dut.oc_inst.rf_bank_phys[2][t][w][6] = w; // R26
                        // Dynamic X-Axis Rotation (R21/R22)
                        dut.oc_inst.rf_bank_phys[1][t][w][5] = cos_x_fixed; // R21 = cos(angle)
                        dut.oc_inst.rf_bank_phys[2][t][w][5] = sin_x_fixed; // R22 = sin(angle)
                    end
                    
                    dut.warp_state[w] = W_READY;
                    dut.warp_pc[w] = 0;
                    dut.warp_active_mask[w] = 32'hFFFFFFFF;
                end
                
                // Clear FB
                for (int i = 0; i < FB_SIZE; i += 4) write_mem_word(FB_BASE + i, 32'h0);
                
                // Wait for all 16 warps to exit
                do begin
                    @(posedge clk);
                    cycle++;
                    active_warps = 0;
                    for (int w=0; w<16; w++) if (dut.warp_state[w] != W_EXIT) active_warps++;
                end while (active_warps > 0 && cycle < max_cycles);
                
                if (cycle >= max_cycles) begin
                    $display("ERROR: Simulation timed out at cycle %0d", cycle);
                    for (int w=0; w<16; w++) begin
                        $display("  Warp %0d: State=%s PC=%h MSHR=%0d ReplayValid=%b", 
                                 w, dut.warp_state[w].name(), dut.warp_pc[w], dut.mshr_count[w], dut.replay_queue[w].valid);
                    end
                    $finish;
                end
                
                save_framebuffer_ppm($sformatf("multi_warp_torus_frame_%03d.ppm", frame));
            end
        end
        
        $display("Multi-Warp Torus Animation complete. Total cycles: %0d", cycle);
        $finish;
    end

    task save_framebuffer_ppm(string filename);
        integer fd;
        logic [7:0] fb_byte;
        logic pixel;
        integer y, x;
        integer byte_addr, line_idx, line_byte_offset, bit_pos;
        fd = $fopen(filename, "w");
        $fwrite(fd, "P1\n%0d %0d\n", FB_WIDTH, FB_HEIGHT);
        for (y = 0; y < FB_HEIGHT; y++) begin
            for (x = 0; x < FB_WIDTH; x++) begin
                byte_addr = FB_BASE + (y * 8) + (x / 8);
                line_idx = byte_addr >> 7;
                line_byte_offset = byte_addr & 127;
                bit_pos = x % 8;
                fb_byte = (dut.dut_memory.mem[line_idx] >> (line_byte_offset * 8)) & 8'hFF;
                pixel = (fb_byte >> bit_pos) & 1'b1;
                $fwrite(fd, "%0d ", pixel);
            end
            $fwrite(fd, "\n");
        end
        $fclose(fd);
    endtask

    // ========================================================================
    // INSTRUMENTATION LOGGING
    // ========================================================================
    integer log_fd;
    
    final begin
        if (log_fd) $fclose(log_fd);
    end

        initial begin
        log_fd = $fopen("multi_warp_utilization.csv", "w");
        $fwrite(log_fd, "Cycle,ALU_Active,SFU_Active,LSU_Active,Active_Warps\n");
        
        forever begin
            @(posedge clk);
            if (rst_n) begin
                 logic alu_active, sfu_active, lsu_active;
                 int aw;
                 
                 // ALU Retired: Valid writeback from ALU pipeline
                 // Note: This misses control flow (BRA/BAR) that doesn't writeback, 
                 // but captures all compute.
                 alu_active = dut.alu_wb.valid;
                 
                 // SFU Retired: Valid writeback from FPU/SFU pipeline
                 sfu_active = dut.fpu_wb.valid;
                 
                 // LSU Retired: 
                 // 1. Loads Retiring (Memory Response writing back)
                 // 2. Stores Issuing (LSU Request valid AND is Store)
                 lsu_active = dut.mem_resp_wb.valid | 
                              (dut.lsu_mem.valid && dut.lsu_mem.op == OP_STR);
                 
                 // Count Active Warps
                 aw = 0;
                 for(int i=0; i<16; i++) begin
                     if(dut.warp_state[i] != W_IDLE) aw++;
                 end
                 
                 $fwrite(log_fd, "%0d,%0d,%0d,%0d,%0d\n", cycle, alu_active, sfu_active, lsu_active, aw);
            end
        end
    end

endmodule

//=============================================================================
// TEST: High-Density Parallel Parametric Torus (32-Thread SIMT)
//=============================================================================
// DESCRIPTION:
//   This is one of the most sophisticated stress-test for the GPU Core. It verifies
//   the architecture's ability to handle high-throughput compute and complex
//   memory serialization under maximum occupancy.
//
// OBJECTIVES:
//   1. SIMT Saturation: Runs 32 active threads (full warp) continuously.
//   2. Geometry: Generates a 512-vertex Torus (Donut) mesh.
//      - 32 Parallel Threads generate the "Tube" segments (Phi angle).
//      - 16 Serial Loop iterations generate the "Ring" cross-section (Theta).
//   3. Compute Intensity: Heavy usage of SFU (Sine/Cosine) and ALU pipelines.
//   4. Hazard Handling: Critical verification of the Hardware Predicate Scoreboard.
//      - Uses `ISETP` followed immediately by Predicated `LDR`/`STR`.
//      - Verifies that RTL automatically stalls to prevent RAW hazards.
//   5. Atomic Rasterization: Implements software mutexes (serialization loop)
//      to handle Read-Modify-Write contention on the Framebuffer.
//   6. Dynamic Runtime: Patches instruction memory on-the-fly to create a 
//      complex "Diagonal Tumble" rotation animation (dynamic X/Y axes).
//
// CONFIGURATION:
//   - Threads: 32 (Mask 0xFFFFFFFF)
//   - Vertices: 512 (32x16 mesh)
//   - Animation: 60 Frames, Clockwise Diagonal Tumble
//=============================================================================

import simt_pkg::*;

module test_parallel_torus;
    // DUT signals
    logic clk;
    logic rst_n;
    
    // Instantiate DUT
    streaming_multiprocessor dut (
        .clk(clk),
        .rst_n(rst_n)
    );
    
    // Clock generation
    initial clk = 0;
    always #5 clk = ~clk; // 100MHz
    
    // Simulation control
    integer cycle;
    integer max_cycles = 200000;
    integer pc;
    integer loop_start_pc;
    integer main_loop_start;
    integer ser_loop_start;
    
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
        $display("TEST: Parallel Torus (Donut) SIMT");
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
        
        // ASSEMBLY PROGRAM: High-Density Parallel Torus
        pc = 0;
        // R20 = 0 (Constant source)
        for (int t=0; t<32; t++)
             dut.oc_inst.rf_bank_phys[0][t][0][5] = 32'h0; 

        // Setup Constants
        // R21 = cos(45) = 0.707 = 0x5A82
        // R22 = sin(45) = 0.707 = 0x5A82
        dut.prog_mem[0][pc++] = encode_inst(OP_MOV, 21, 20, 0, 0, 4'h7, 20'h5A82);
        dut.prog_mem[0][pc++] = encode_inst(OP_MOV, 22, 20, 0, 0, 4'h7, 20'h5A82);
        dut.prog_mem[0][pc++] = encode_inst(OP_MOV, 2, 20, 0, 0, 4'h7, 20'h2000); // R2 = FB Base
        
        // Torus Constants: r=8, R=16
        dut.prog_mem[0][pc++] = encode_inst(OP_MOV, 23, 20, 0, 0, 4'h7, 20'd8); // r
        dut.prog_mem[0][pc++] = encode_inst(OP_MOV, 24, 20, 0, 0, 4'h7, 20'd16); // R

        // [PARALLEL] phi_idx = TID (0-31)
        dut.prog_mem[0][pc++] = encode_inst(OP_TID, 30, 0, 0, 0, 4'h7, 20'h0);
        
        // phi = TID * (2^16 / 32) = TID * 2048 (SHL 11) -> R25
        dut.prog_mem[0][pc++] = encode_inst(OP_SHL, 25, 30, 20, 0, 4'h7, 20'd11);
        dut.prog_mem[0][pc++] = encode_inst(OP_SFU_COS, 29, 25, 20, 0, 4'h7, 20'd0); // R29 = cos(phi)
        dut.prog_mem[0][pc++] = encode_inst(OP_SFU_SIN, 19, 25, 20, 0, 4'h7, 20'd0); // R19 = sin(phi)

        // THETA LOOP: theta_idx = 0 to 15
        dut.prog_mem[0][pc++] = encode_inst(OP_MOV, 26, 20, 0, 0, 4'h7, 20'd0); // R26 (theta_idx) = 0
        dut.prog_mem[0][pc++] = encode_inst(OP_MOV, 27, 20, 0, 0, 4'h7, 20'd16); // limit = 16
        
        main_loop_start = pc;
        // theta = theta_idx * (2^16 / 16) = theta_idx * 4096 (SHL 12) -> R28
        dut.prog_mem[0][pc++] = encode_inst(OP_SHL, 28, 26, 20, 0, 4'h7, 20'd12);
        
        // Parametric Math
        // R27 = cos(theta), R28 = - (temp for calculation) ... wait, reusing registers carefully
        // R28 is theta value. 
        // Let's use R14 for cos(theta), R13 for sin(theta) - wait, check conflicting regs.
        // R1-R24 are safe. R25=Phi, R29=cos(phi), R19=sin(phi), R26=theta_idx, R27=limit(16), R30=TID.
        
        dut.prog_mem[0][pc++] = encode_inst(OP_SFU_COS, 14, 28, 20, 0, 4'h7, 20'd0); // R14 = cos(theta)
        dut.prog_mem[0][pc++] = encode_inst(OP_SFU_SIN, 13, 28, 20, 0, 4'h7, 20'd0); // R13 = sin(theta)

        // x = (R + r*cos(theta)) * cos(phi)
        // y = (R + r*cos(theta)) * sin(phi)
        // z = r*sin(theta)
        
        dut.prog_mem[0][pc++] = encode_inst(OP_MUL, 5, 14, 23, 0, 4'h7, 20'd0); // r*cos(theta)
        dut.prog_mem[0][pc++] = encode_inst(OP_SHA, 5, 5, 20, 0, 4'h7, 20'd15);
        dut.prog_mem[0][pc++] = encode_inst(OP_ADD, 5, 5, 24, 0, 4'h7, 20'd0);  // R + ... (dist)
        
        dut.prog_mem[0][pc++] = encode_inst(OP_MUL, 6, 5, 29, 0, 4'h7, 20'd0);  
        dut.prog_mem[0][pc++] = encode_inst(OP_SHA, 3, 6, 20, 0, 4'h7, 20'd15); // R3 = x
        
        dut.prog_mem[0][pc++] = encode_inst(OP_MUL, 7, 5, 19, 0, 4'h7, 20'd0);
        dut.prog_mem[0][pc++] = encode_inst(OP_SHA, 4, 7, 20, 0, 4'h7, 20'd15); // R4 = y
        
        dut.prog_mem[0][pc++] = encode_inst(OP_MUL, 8, 13, 23, 0, 4'h7, 20'd0); // r*sin(theta)
        dut.prog_mem[0][pc++] = encode_inst(OP_SHA, 18, 8, 20, 0, 4'h7, 20'd15);// R18 = z

        // 1. Rotate around Y-axis (dynamic angle θ from R15)
        // x' = x*cos(θ) + z*sin(θ)
        // z' = z*cos(θ) - x*sin(θ)
        dut.prog_mem[0][pc++] = encode_inst(OP_SFU_COS, 16, 15, 20, 0, 4'h7, 20'd0);
        dut.prog_mem[0][pc++] = encode_inst(OP_SFU_SIN, 17, 15, 20, 0, 4'h7, 20'd0);

        dut.prog_mem[0][pc++] = encode_inst(OP_MUL, 5, 3, 16, 0, 4'h7, 20'd0);
        dut.prog_mem[0][pc++] = encode_inst(OP_MUL, 6, 18, 17, 0, 4'h7, 20'd0);
        dut.prog_mem[0][pc++] = encode_inst(OP_ADD, 7, 5, 6, 0, 4'h7, 20'd0);
        dut.prog_mem[0][pc++] = encode_inst(OP_SHA, 7, 7, 20, 0, 4'h7, 20'd15); // R7 = x'

        dut.prog_mem[0][pc++] = encode_inst(OP_MUL, 8, 18, 16, 0, 4'h7, 20'd0);
        dut.prog_mem[0][pc++] = encode_inst(OP_MUL, 9, 3, 17, 0, 4'h7, 20'd0);
        dut.prog_mem[0][pc++] = encode_inst(OP_SUB, 10, 8, 9, 0, 4'h7, 20'd0);
        dut.prog_mem[0][pc++] = encode_inst(OP_SHA, 10, 10, 20, 0, 4'h7, 20'd15); // R10 = z'

        // 2. Rotate around X-axis (static 30 deg)
        // y'' = y*cos(30) - z'*sin(30)
        // z'' = y*sin(30) + z'*cos(30)
        dut.prog_mem[0][pc++] = encode_inst(OP_MUL, 5, 4, 21, 0, 4'h7, 20'd0);
        dut.prog_mem[0][pc++] = encode_inst(OP_MUL, 6, 10, 22, 0, 4'h7, 20'd0);
        dut.prog_mem[0][pc++] = encode_inst(OP_SUB, 11, 5, 6, 0, 4'h7, 20'd0);
        dut.prog_mem[0][pc++] = encode_inst(OP_SHA, 11, 11, 20, 0, 4'h7, 20'd15); // R11 = y''

        dut.prog_mem[0][pc++] = encode_inst(OP_MUL, 8, 4, 22, 0, 4'h7, 20'd0);
        dut.prog_mem[0][pc++] = encode_inst(OP_MUL, 9, 10, 21, 0, 4'h7, 20'd0);
        dut.prog_mem[0][pc++] = encode_inst(OP_ADD, 12, 8, 9, 0, 4'h7, 20'd0);
        dut.prog_mem[0][pc++] = encode_inst(OP_SHA, 12, 12, 20, 0, 4'h7, 20'd15); // R12 = z''

        // 3. Perspective Projection
        dut.prog_mem[0][pc++] = encode_inst(OP_ADD, 12, 12, 20, 0, 4'h7, 20'd128); // z_cam = z'' + 128
        dut.prog_mem[0][pc++] = encode_inst(OP_SHL, 5, 7, 20, 0, 4'h7, 20'd7);     // x' * 128
        dut.prog_mem[0][pc++] = encode_inst(OP_IDIV, 3, 5, 12, 0, 4'h7, 20'd0);   // x_proj
        dut.prog_mem[0][pc++] = encode_inst(OP_ADD, 3, 3, 20, 0, 4'h7, 20'd32);   // x_scr

        dut.prog_mem[0][pc++] = encode_inst(OP_SHL, 6, 11, 20, 0, 4'h7, 20'd7);    // y'' * 128
        dut.prog_mem[0][pc++] = encode_inst(OP_IDIV, 4, 6, 12, 0, 4'h7, 20'd0);   // y_proj
        dut.prog_mem[0][pc++] = encode_inst(OP_ADD, 4, 4, 20, 0, 4'h7, 20'd32);   // y_scr

        // Framebuffer Write logic
        dut.prog_mem[0][pc++] = encode_inst(OP_SHL, 5, 4, 20, 0, 4'h7, 20'd3); // y << 3
        dut.prog_mem[0][pc++] = encode_inst(OP_SHR, 6, 3, 20, 0, 4'h7, 20'd5); // x >> 5
        dut.prog_mem[0][pc++] = encode_inst(OP_SHL, 7, 6, 20, 0, 4'h7, 20'd2); // R6 << 2
        dut.prog_mem[0][pc++] = encode_inst(OP_ADD, 8, 5, 7, 0, 4'h7, 20'd0);
        dut.prog_mem[0][pc++] = encode_inst(OP_ADD, 9, 2, 8, 0, 4'h7, 20'd0);  // R9 = Byte Address
        dut.prog_mem[0][pc++] = encode_inst(OP_AND, 10, 3, 20, 0, 4'h7, 20'd31);
        dut.prog_mem[0][pc++] = encode_inst(OP_MOV, 11, 20, 0, 0, 4'h7, 20'd1);
        dut.prog_mem[0][pc++] = encode_inst(OP_SHL, 12, 11, 10, 0, 4'h7, 20'd0); // R12 = Bit Mask

        // SERIALIZATION LOOP (Iterate k=0 to 31)
        dut.prog_mem[0][pc++] = encode_inst(OP_MOV, 31, 20, 0, 0, 4'h7, 20'd0); // k = 0 (R31)
        dut.prog_mem[0][pc++] = encode_inst(OP_MOV, 1, 20, 0, 0, 4'h7, 20'd32); // limit = 32
        
        ser_loop_start = pc;
        dut.prog_mem[0][pc++] = encode_inst(OP_ISETP, 5, 30, 31, 0, 4'h7, 20'd0); // TID == k -> Predicate 5
        
        dut.prog_mem[0][pc++] = encode_inst(OP_LDR, 13, 9, 20, 0, 4'h5, 20'd0); // Load Old @P5
        dut.prog_mem[0][pc++] = encode_inst(OP_OR, 14, 13, 12, 0, 4'h5, 20'd0); // OR Mask @P5
        dut.prog_mem[0][pc++] = encode_inst(OP_STR, 0, 9, 14, 0, 4'h5, 20'd0);  // Store New @P5
        
        dut.prog_mem[0][pc++] = encode_inst(OP_ADD, 31, 31, 20, 0, 4'h7, 20'd1); // k++
        dut.prog_mem[0][pc++] = encode_inst(OP_BNE, 0, 31, 1, 0, 4'h7, 20'($signed(ser_loop_start - pc)));
        
        // Theta Loop Control (Outer loop)
        dut.prog_mem[0][pc++] = encode_inst(OP_ADD, 26, 26, 20, 0, 4'h7, 20'd1); // theta_idx++
        dut.prog_mem[0][pc++] = encode_inst(OP_BNE, 0, 26, 27, 0, 4'h7, 20'($signed(main_loop_start - pc)));

        dut.prog_mem[0][pc++] = encode_inst(OP_BAR, 0, 0, 0, 0, 4'h7, 20'd0);
        dut.prog_mem[0][pc++] = encode_inst(OP_EXIT, 0, 0, 0, 0, 4'h7, 20'd0);
        
        // Multi-frame Animation Loop (60 frames @ 30fps)
        for (int frame = 0; frame < 60; frame++) begin
            $display("--- Generating Torus Frame %02d/60 ---", frame + 1);
            
            rst_n = 0;
            repeat(10) @(posedge clk);
            rst_n = 1;
            repeat(5) @(posedge clk);

            for (int t = 0; t < 32; t++) begin
                dut.oc_inst.rf_bank_phys[0][t][0][5] = 32'h0; 
                // Y-Axis Rotation: Clockwise (Negative Step)
                // 0x10000 - (frame * step)
                dut.oc_inst.rf_bank_phys[3][t][0][3] = (32'h10000 - (frame * 32'h0444)) & 32'hFFFF;
            end
            
            // X-Axis Rotation: Dynamic (Equal to Y for Diagonal Axis)
            // Patch PC=0 and PC=1
            begin
                real angle_x_rad;
                integer cos_x_fixed, sin_x_fixed;
                // Clockwise angle
                angle_x_rad = -1.0 * real'(frame) * 6.0 * 3.14159 / 180.0; 
                
                // 1.15 Fixed Point scaling (32768 = 1.0)
                cos_x_fixed = int'($cos(angle_x_rad) * 32768.0);
                sin_x_fixed = int'($sin(angle_x_rad) * 32768.0);
                
                // R21 = cos(ang)
                dut.prog_mem[0][0] = encode_inst(OP_MOV, 21, 20, 0, 0, 4'h7, 20'(cos_x_fixed));
                // R22 = sin(ang)
                dut.prog_mem[0][1] = encode_inst(OP_MOV, 22, 20, 0, 0, 4'h7, 20'(sin_x_fixed));
            end
            
            for (int i = 0; i < FB_SIZE; i += 4) begin
                write_mem_word(FB_BASE + i, 32'h0);
            end
            
            dut.warp_state[0] = W_READY;
            dut.warp_pc[0] = 0;
            dut.warp_active_mask[0] = 32'hFFFFFFFF; // ENABLE 32 THREADS
            
            while (dut.warp_state[0] != W_EXIT && cycle < max_cycles * 50) begin
                @(posedge clk);
                cycle++;
            end
            
            save_framebuffer_ppm($sformatf("torus_frame_%03d.ppm", frame));
        end
        
        $display("Torus Animation complete. Total cycles: %0d", cycle);
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
        log_fd = $fopen("parallel_warp_utilization.csv", "w");
        $fwrite(log_fd, "Cycle,ALU_Active,SFU_Active,LSU_Active,Active_Warps\n");
        
        forever begin
            @(posedge clk);
            if (rst_n) begin
                 logic alu_active, sfu_active, lsu_active;
                 int aw;
                 
                 // ALU Retired
                 alu_active = dut.alu_wb.valid;
                 
                 // SFU Retired
                 sfu_active = dut.fpu_wb.valid;
                 
                 // LSU Retired (Load Return | Store Issue)
                 lsu_active = dut.mem_resp_wb.valid | 
                              (dut.lsu_mem.valid && dut.lsu_mem.op == OP_STR);
                 
                 // Count Active Warps
                 aw = 0;
                 for(int i=0; i<24; i++) begin
                     if(dut.warp_state[i] != W_IDLE) aw++;
                 end
                 
                 $fwrite(log_fd, "%0d,%0d,%0d,%0d,%0d\n", cycle, alu_active, sfu_active, lsu_active, aw);
            end
        end
    end

endmodule

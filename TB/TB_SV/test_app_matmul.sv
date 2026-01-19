// ============================================================================
// Testbench: test_app_matmul
// Description: 
//   Verifies a full General Matrix Multiplication (GEMM) application execution.
//   This is an integration test running a realistic CUDA-like kernel.
//
// Key Features Verified:
//   - Tiled Matrix Multiplication (8x8 Tile).
//   - Shared Memory Load/Store operations.
//   - Barrier Synchronization (BAR) between threads.
//   - Complex address calculation (Shift, And, Add).
//   - Loop control flow.
//
// Sequence:
//   1. Initializes global memory with Matrices A (Linear) and B (Identity).
//   2. Launches Kernel:
//      - Loads tiles of A and B into Shared Memory.
//      - Computes partial dot products.
//      - Accumulates results.
//      - Stores final Matrix C to global memory.
//   3. Compares Global C with Expected Result (A * B = A).
//
// Expected Result: All results match (0 errors).
// ============================================================================
`timescale 1ns/1ps

module test_app_matmul;
    import simt_pkg::*;
    import sfu_pkg::*;

    logic clk;
    logic rst_n;
    logic done;

    streaming_multiprocessor #(
        .WARP_SIZE(32),
        .NUM_WARPS(24),
        .NUM_REGS(64),
        .DIVERGENCE_STACK_DEPTH(32),
        .RETURN_STACK_DEPTH(8),
        .ADDR_WIDTH(10),
        .MAX_PENDING_PER_WARP(64),
        .SM_ID(0)
    ) dut (
        .clk(clk),
        .rst_n(rst_n),
        .done(done)
    );

    always #5 clk = ~clk;

    // Test Data
    logic [31:0] matrix_A [64];
    logic [31:0] matrix_B [64];
    logic [31:0] expected_C [64];

    // Helper to encode 64-bit instruction
    function automatic logic [63:0] encode_inst(
        logic [7:0] op, logic [7:0] rd=0, logic [7:0] rs1=0, logic [7:0] rs2=0, 
        logic [7:0] rs3=0, logic [3:0] pg=4'h7, logic [31:0] imm=0
    );
        // New Layout: [63:56]Op, [55:48]RD, [47:40]RS1, [39:32]RS2, [31:28]PG, [27:20]RS3, [19:0]Imm
        return {op, rd, rs1, rs2, pg, rs3, imm[19:0]};
    endfunction

    initial begin
        int i, j, w, t, pc;
        logic [63:0] prog;

        clk = 0;
        rst_n = 0;
        
        // Initialize Matrix A: [1, 2, 3, ..., 64]
        for(i=0; i<64; i++) matrix_A[i] = i + 1;
        
        // Initialize Matrix B: Identity 8x8
        for(i=0; i<8; i++) begin
            for(j=0; j<8; j++) begin
                if (i==j) matrix_B[i*8+j] = 1;
                else      matrix_B[i*8+j] = 0;
            end
        end
        
        // Expected C = A * B = A
        for(i=0; i<64; i++) expected_C[i] = matrix_A[i];

        // Initialize Memory via dut.dut_memory.mem
        for(i=0; i<128; i++) dut.dut_memory.mem[i] = 0;
        
        // Matrix A at address 0 (mem[0..1])
        for(i=0; i<64; i++) begin
            int addr = i * 4;
            int ln = addr / 128;
            int off = (addr % 128) / 4;
            dut.dut_memory.mem[ln][off*32 +: 32] = matrix_A[i];
        end
        
        // Matrix B at address 256 (mem[2..3])
        for(i=0; i<64; i++) begin
            int addr = 256 + i * 4;
            int ln = addr / 128;
            int off = (addr % 128) / 4;
            dut.dut_memory.mem[ln][off*32 +: 32] = matrix_B[i];
        end
        
        pc = 0;
        // 0: R15 = 0 (Constant Zero) - Using XOR R15, R15, R15
        prog = encode_inst(8'h52, 15, 15, 15);
        dut.prog_mem[0][pc] = prog; dut.prog_mem[1][pc] = prog; pc++;

        // 1: R0 = TID 
        prog = encode_inst(8'h26, 0); 
        dut.prog_mem[0][pc] = prog; dut.prog_mem[1][pc] = prog; pc++;

        // 2: R10 = 512 (Shared Base A)
        prog = encode_inst(8'h01, 10, 15, 15, 0, 4'h7, 0); 
        dut.prog_mem[0][pc] = prog; dut.prog_mem[1][pc] = prog; pc++;

        // 3: R11 = 768 (Shared Base B)
        prog = encode_inst(8'h01, 11, 15, 15, 0, 4'h7, 256); 
        dut.prog_mem[0][pc] = prog; dut.prog_mem[1][pc] = prog; pc++;

        // 4: R12 = 1024 (Global Base C)
        prog = encode_inst(8'h01, 12, 15, 15, 0, 4'h7, 1024); 
        dut.prog_mem[0][pc] = prog; dut.prog_mem[1][pc] = prog; pc++;

        // 5: R6 = R13 (Warp Offset) + R0 (Lane ID) = Global ID
        prog = encode_inst(8'h01, 6, 13, 0); 
        dut.prog_mem[0][pc] = prog; dut.prog_mem[1][pc] = prog; pc++;

        // 6: R14 = R6 << 2 (Global Byte Offset for i-th element)
        prog = encode_inst(8'h60, 14, 6, 15, 0, 4'h7, 2); 
        dut.prog_mem[0][pc] = prog; dut.prog_mem[1][pc] = prog; pc++;
        
        // 7: LDR R7, [R14 + 0] (Load Matrix A element)
        prog = encode_inst(OP_LDR, 7, 14, 15, 0, 4'h7, 0);
        dut.prog_mem[0][pc] = prog; dut.prog_mem[1][pc] = prog; pc++;
        
        // 8: R5 = R10 (Shared Base A) + R14 -> Shared Base A is 0, so R5 = 0 + R14 (Offset)
        // Note: For LDS/STS, we can use [Rs + Imm].
        // R10 was 512. Now we use Shared Mem Address 0.
        // Let's redefine Shared Bases: A=0, B=256 (32x8 bytes)
        // 2: R10 = 0 (Shared Base A)
        // 3: R11 = 256 (Shared Base B)

        // 9: STS [R5 + 0], R7 (Store to Shared A)
        // STS [R14], R7 (since R5=R14 for Base=0)
        prog = encode_inst(OP_STS, 0, 14, 7, 0, 4'h7, 0);
        dut.prog_mem[0][pc] = prog; dut.prog_mem[1][pc] = prog; pc++;
        
        // 10: R5 = R14 + 256 (Global Base B offset)
        prog = encode_inst(OP_ADD, 5, 14, 15, 0, 4'h7, 256);
        dut.prog_mem[0][pc] = prog; dut.prog_mem[1][pc] = prog; pc++;
        
        // 11: LDR R7, [R5 + 0] (Load Matrix B element)
        prog = encode_inst(OP_LDR, 7, 5, 15, 0, 4'h7, 0);
        dut.prog_mem[0][pc] = prog; dut.prog_mem[1][pc] = prog; pc++;
        
        // 12: R5 = R14 + 256 (Shared Base B = 256)
        prog = encode_inst(OP_ADD, 5, 14, 15, 0, 4'h7, 256);
        dut.prog_mem[0][pc] = prog; dut.prog_mem[1][pc] = prog; pc++;
        
        // 13: STS [R5 + 0], R7 (Store to Shared B)
        prog = encode_inst(OP_STS, 0, 5, 7, 0, 4'h7, 0);
        dut.prog_mem[0][pc] = prog; dut.prog_mem[1][pc] = prog; pc++;
        
        // 14: BAR (Sync all threads in tile)
        prog = encode_inst(8'h25);
        dut.prog_mem[0][pc] = prog; dut.prog_mem[1][pc] = prog; pc++;

        // 15: R1 = R6 >> 3 (Row = tid / 8)
        prog = encode_inst(8'h61, 1, 6, 15, 0, 4'h7, 3);
        dut.prog_mem[0][pc] = prog; dut.prog_mem[1][pc] = prog; pc++;
        
        // 16: R2 = R6 & 7 (Col = tid % 8)
        prog = encode_inst(8'h50, 2, 6, 15, 0, 4'h7, 7);
        dut.prog_mem[0][pc] = prog; dut.prog_mem[1][pc] = prog; pc++;

        // 17: R3 = 0 (Accumulator)
        prog = encode_inst(8'h01, 3, 15, 15, 0, 4'h7, 0);
        dut.prog_mem[0][pc] = prog; dut.prog_mem[1][pc] = prog; pc++;

        // 18: R4 = R1 << 5 (Row * 32 bytes)
        prog = encode_inst(8'h60, 4, 1, 15, 0, 4'h7, 5); 
        dut.prog_mem[0][pc] = prog; dut.prog_mem[1][pc] = prog; pc++;
        // 19: R7 = R10 (BaseA) + R4 (Row Pointer in Shared A)
        prog = encode_inst(8'h01, 7, 10, 4); 
        dut.prog_mem[0][pc] = prog; dut.prog_mem[1][pc] = prog; pc++;

        // 20: R4 = R2 << 2 (Col * 4 bytes)
        prog = encode_inst(8'h60, 4, 2, 15, 0, 4'h7, 2); 
        dut.prog_mem[0][pc] = prog; dut.prog_mem[1][pc] = prog; pc++;
        // 21: R8 = R11 (BaseB) + R4 (Col Pointer in Shared B)
        prog = encode_inst(8'h01, 8, 11, 4); 
        dut.prog_mem[0][pc] = prog; dut.prog_mem[1][pc] = prog; pc++;

        // Dot Product Loop (8 iterations, unrolled)
        for(int k=0; k<8; k++) begin
            // Load Shared A element: LDS R9, [R7]
            prog = encode_inst(OP_LDS, 9, 7); 
            dut.prog_mem[0][pc] = prog; dut.prog_mem[1][pc] = prog; pc++;
            // Load Shared B element: LDS R4, [R8]
            prog = encode_inst(OP_LDS, 4, 8); 
            dut.prog_mem[0][pc] = prog; dut.prog_mem[1][pc] = prog; pc++;
            // Mul & Add: R3 = R3 + R9 * R4
            prog = encode_inst(8'h03, 9, 9, 4); // R9 = A*B
            dut.prog_mem[0][pc] = prog; dut.prog_mem[1][pc] = prog; pc++;
            prog = encode_inst(8'h01, 3, 3, 9); // R3 = R3 + R9
            dut.prog_mem[0][pc] = prog; dut.prog_mem[1][pc] = prog; pc++;
            
            // Advance Pointers
            prog = encode_inst(8'h01, 7, 7, 15, 0, 4'h7, 4);  // PtrA += 4
            dut.prog_mem[0][pc] = prog; dut.prog_mem[1][pc] = prog; pc++;
            prog = encode_inst(8'h01, 8, 8, 15, 0, 4'h7, 32); // PtrB += 32
            dut.prog_mem[0][pc] = prog; dut.prog_mem[1][pc] = prog; pc++;
        end

        // Store result to Global C[tid]
        // R4 = TID * 4
        prog = encode_inst(8'h60, 4, 6, 15, 0, 4'h7, 2); 
        dut.prog_mem[0][pc] = prog; dut.prog_mem[1][pc] = prog; pc++;
        // R5 = BaseC + R4
        prog = encode_inst(8'h01, 5, 12, 4); 
        dut.prog_mem[0][pc] = prog; dut.prog_mem[1][pc] = prog; pc++;
        // STR R3, [R5]
        prog = encode_inst(8'h11, 0, 5, 3);
        dut.prog_mem[0][pc] = prog; dut.prog_mem[1][pc] = prog; pc++;

        // EXIT
        prog = encode_inst(OP_EXIT);
        dut.prog_mem[0][pc] = prog; dut.prog_mem[1][pc] = prog; pc++;

        // Fill remaining with EXIT
        while (pc < 256) begin
            dut.prog_mem[0][pc] = prog;
            dut.prog_mem[1][pc] = prog;
            pc++;
        end

        for(int w=2; w<24; w++) begin
            for(int p=0; p<256; p++) dut.prog_mem[w][p] = prog;
        end

        #20 rst_n = 1;

        // Init Warps & Registers
        for(int w=0; w<24; w++) begin
            dut.warp_state[w] = simt_pkg::W_EXIT;
            dut.warp_pc[w] = 0;
            dut.warp_reg_writes[w] = 0;
            for(int t=0; t<WARP_SIZE; t++) begin
               for(int r=0; r<64; r++) dut.oc_inst.rf_bank_phys[r[1:0]][t][w][r>>2] = 0;
            end
        end
        
        for(int w=0; w<2; w++) begin
            dut.warp_active_mask[w] = 32'hFFFFFFFF; 
            dut.warp_state[w] = simt_pkg::W_READY; 
            dut.warp_pc[w] = 0;
            for(int t=0; t<WARP_SIZE; t++) begin
                dut.oc_inst.rf_bank_phys[15 & 3][t][w][15>>2] = 0;   // R15 = 0
                dut.oc_inst.rf_bank_phys[14 & 3][t][w][14>>2] = 0;   
                dut.oc_inst.rf_bank_phys[13 & 3][t][w][13>>2] = w * 32; // R13 = Warp Global Offset
                dut.oc_inst.rf_bank_phys[10 & 3][t][w][10>>2] = 0;   // R10 = Shared Base A
                dut.oc_inst.rf_bank_phys[11 & 3][t][w][11>>2] = 256; // R11 = Shared Base B
                dut.oc_inst.rf_bank_phys[12 & 3][t][w][12>>2] = 1024; // R12 = Global Base C
            end
        end

        // Wait for completion (Watch for DONE or just timeout)
        // #10000000; 
        
        // Wait for DONE signal (Early Termination)
        fork
            begin
                wait(done);
                $display("Simulation completed in %0d cycles (DONE Triggered)", $time/10);
                #100; // Allow final stores to settle
            end
            begin
                #20000000; // 20M ns Timeout (20ms) for serialized shared memory
                $display("Simulation Timeout at 20ms (DONE not triggered)");
            end
        join_any
        
        // Formatted Output
        $display("\n=======================================================");
        $display("8x8 MATRIX A (Input)");
        $display("-------------------------------------------------------");
        for(int i=0; i<8; i++) begin
            logic [31:0] v[8];
            for(int k=0; k<8; k++) begin
                int addr = i*8*4 + k*4;
                int ln = addr / 128; int off = (addr % 128) / 4;
                v[k] = dut.dut_memory.mem[ln][off*32 +: 32];
            end
            $display("  [ %4d %4d %4d %4d %4d %4d %4d %4d ]", 
                v[0], v[1], v[2], v[3], v[4], v[5], v[6], v[7]);
        end

        $display("\n8x8 MATRIX B (Input)");
        $display("-------------------------------------------------------");
        for(int i=0; i<8; i++) begin
            logic [31:0] v[8];
            for(int k=0; k<8; k++) begin
                int addr = 256 + i*8*4 + k*4;
                int ln = addr / 128; int off = (addr % 128) / 4;
                v[k] = dut.dut_memory.mem[ln][off*32 +: 32];
            end
            $display("  [ %4d %4d %4d %4d %4d %4d %4d %4d ]", 
                v[0], v[1], v[2], v[3], v[4], v[5], v[6], v[7]);
        end

        $display("\n8x8 MATRIX C (Result)");
        $display("-------------------------------------------------------");
        for(int i=0; i<8; i++) begin
            logic [31:0] v[8];
            for(int k=0; k<8; k++) begin
                int addr = 1024 + i*8*4 + k*4;
                int ln = addr / 128; int off = (addr % 128) / 4;
                v[k] = dut.dut_memory.mem[ln][off*32 +: 32];
            end
            $display("  [ %4d %4d %4d %4d %4d %4d %4d %4d ]", 
                v[0], v[1], v[2], v[3], v[4], v[5], v[6], v[7]);
        end
        $display("=======================================================\n");

        // Verify results
        begin
            int errors = 0;
            for(int i=0; i<64; i++) begin
                logic [31:0] actual;
                int addr = 1024 + i * 4;
                int ln = addr / 128;
                int off = (addr % 128) / 4;
                actual = dut.dut_memory.mem[ln][off*32 +: 32];
                if (actual !== expected_C[i]) begin
                    $display("ERROR: C[%0d] = %d, expected %d", i, actual, expected_C[i]);
                    errors++;
                end
            end
            
        if (errors == 0) begin
            $display("TEST PASSED!");
            $display("Total Cycles: %0d", dut.cycle);
        end else begin
            $display("TEST FAILED: %0d mismatches", errors);
        end
        
        $finish;
    end

    end
endmodule

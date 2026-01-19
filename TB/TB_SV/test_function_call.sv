`timescale 1ns/1ps

module test_function_call;
    import simt_pkg::*;

    // DUT Signals
    logic clk;
    logic rst_n;
    logic done;
    
    // Instantiate DUT
    streaming_multiprocessor #(
        .WARP_SIZE(32),
        .NUM_WARPS(2),
        .NUM_REGS(16)
    ) dut (
        .clk(clk),
        .rst_n(rst_n),
        .done(done)
    );

    // Clock Generation
    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

    // Encode Instruction Helper
    function automatic logic [63:0] encode_inst(
        logic [7:0] op, logic [7:0] rd=0, logic [7:0] rs1=0, logic [7:0] rs2=0, 
        logic [7:0] rs3=0, logic [3:0] pg=4'h7, logic [31:0] imm=0
    );
        return {op, rd, rs1, rs2, pg, rs3, imm[19:0]};
    endfunction

    // Test Stimulus
    initial begin
        int pc;
        logic [63:0] prog;
        
        $display("========================================");
        $display("Test: Function Call (CALL/RET)");
        $display("========================================");

        // Initialize
        rst_n = 0;
        #20;
        rst_n = 1;
        #10;

        // ========================================
        // Test 1: Simple Function Call
        // ========================================
        $display("\n[TEST 1] Simple Function Call");
        
        pc = 0;

        // Initialize Warp 0
        dut.warp_state[0] = W_READY;
        dut.warp_pc[0] = 0;
        dut.warp_active_mask[0] = 32'hFFFFFFFF;

        // Program: main calls add_ten, which adds 10 to R1
        
        // PC=0: MOV R1, 5
        prog = encode_inst(OP_MOV, 1, 15, 15, 0, 4'h7, 5);
        dut.prog_mem[0][pc] = prog; pc++;
        
        // PC=1: CALL add_ten (offset +3 to PC=4)
        prog = encode_inst(OP_CALL, 0, 0, 0, 0, 4'h7, 3);
        dut.prog_mem[0][pc] = prog; pc++;
        
        // PC=2: MOV R2, R1 (should be 15 after return)
        prog = encode_inst(OP_MOV, 2, 1, 15);
        dut.prog_mem[0][pc] = prog; pc++;
        
        // PC=3: EXIT
        prog = encode_inst(OP_EXIT);
        dut.prog_mem[0][pc] = prog; pc++;
        
        // PC=4: add_ten function
        // ADD R1, R1, 10
        prog = encode_inst(OP_ADD, 1, 1, 15, 0, 4'h7, 10);
        dut.prog_mem[0][pc] = prog; pc++;
        
        // PC=5: RET
        prog = encode_inst(OP_RET);
        dut.prog_mem[0][pc] = prog; pc++;

        // Run simulation
        #1500;

        // Check result
        if (dut.oc_inst.rf_bank_phys[1][0][0][0] == 15) begin
            $display("✓ TEST 1 PASSED: R1 = %0d (expected 15)", dut.oc_inst.rf_bank_phys[1][0][0][0]);
        end else begin
            $display("✗ TEST 1 FAILED: R1 = %0d (expected 15)", dut.oc_inst.rf_bank_phys[1][0][0][0]);
            // Continue to Test 2
        end

        // ========================================
        // Test 2: Nested Function Calls
        // ========================================
        $display("\n[TEST 2] Nested Function Calls");
        
        // Reset for Test 2
        rst_n = 0;
        #20;
        rst_n = 1;
        #10;

        pc = 0;
        dut.warp_state[0] = W_READY;
        dut.warp_pc[0] = 0;
        dut.warp_active_mask[0] = 32'hFFFFFFFF;

        // Program: main -> func_a -> func_b
        // Each function adds 1 to R1
        
        // PC=0: MOV R1, 0
        prog = encode_inst(OP_MOV, 1, 15, 15, 0, 4'h7, 0);
        dut.prog_mem[0][pc] = prog; pc++;
        
        // PC=1: CALL func_a (offset +2 to PC=3)
        prog = encode_inst(OP_CALL, 0, 0, 0, 0, 4'h7, 2);
        dut.prog_mem[0][pc] = prog; pc++;
        
        // PC=2: EXIT
        prog = encode_inst(OP_EXIT);
        dut.prog_mem[0][pc] = prog; pc++;
        
        // PC=3: func_a
        // ADD R1, R1, 1
        prog = encode_inst(OP_ADD, 1, 1, 15, 0, 4'h7, 1);
        dut.prog_mem[0][pc] = prog; pc++;
        
        // PC=4: CALL func_b (offset +2 to PC=6)
        prog = encode_inst(OP_CALL, 0, 0, 0, 0, 4'h7, 2);
        dut.prog_mem[0][pc] = prog; pc++;
        
        // PC=5: RET
        prog = encode_inst(OP_RET);
        dut.prog_mem[0][pc] = prog; pc++;
        
        // PC=6: func_b
        // ADD R1, R1, 1
        prog = encode_inst(OP_ADD, 1, 1, 15, 0, 4'h7, 1);
        dut.prog_mem[0][pc] = prog; pc++;
        
        // PC=7: RET
        prog = encode_inst(OP_RET);
        dut.prog_mem[0][pc] = prog; pc++;

        // Run simulation - longer delay for nested calls
        #2000;

        // Check result (should be 2: one from func_a, one from func_b)
        if (dut.oc_inst.rf_bank_phys[1][0][0][0] == 2) begin
            $display("✓ TEST 2 PASSED: R1 = %0d (expected 2)", dut.oc_inst.rf_bank_phys[1][0][0][0]);
            $display("\n========================================");
            $display("ALL TESTS PASSED!");
            $display("========================================");
        end else begin
            $display("✗ TEST 2 FAILED: R1 = %0d (expected 2)", dut.oc_inst.rf_bank_phys[1][0][0][0]);
            $display("\n========================================");
            $display("TESTS FAILED!");
            $display("========================================");
        end
        
        $finish;
    end

    // Timeout
    initial begin
        #10000;
        $fatal(1, "Timeout!");
    end

endmodule

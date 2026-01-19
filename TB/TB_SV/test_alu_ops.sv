// ============================================================================
// Testbench: test_alu_ops
// Description: 
//   Verifies the functionality of the Integer ALU and ISA Extensions.
//   Ensures correct operation of arithmetic, logic, shift, and movement instructions.
//
// Included Sub-Tests:
//   1. run_cnot_test: Verifies CNOT (Conditional Not) logic.
//   2. run_negation_test: Verifies NEG (Integer) and FNEG (Float) operations.
//   3. run_mov_test: Verifies MOV with Register and Immediate operands.
//   4. run_isa_extensions_test: Comprehensive test for extended ISA instructions:
//      - Logic: AND, OR, XOR, NOT
//      - Int Arith: IDIV, IREM, IABS, IMIN, IMAX, IMAD, POPC, CLZ, BREV
//      - Float Logic: FABS, FMIN, FMAX, ITOF
//      - Shifts: SHL, SHR, SHA
//      - Comparison: SEQ, SLE
//
// Expected Result: All sub-tests pass.
// ============================================================================
`timescale 1ns/1ps

module test_alu_ops;
    import simt_pkg::*;
    
    // Parameters
    localparam NUM_WARPS = 24;
    localparam WARP_SIZE = 32;
    
    // Signals
    logic clk;
    logic rst_n;
    
    // Instantiate DUT
    streaming_multiprocessor #(
        .NUM_WARPS(NUM_WARPS),
        .WARP_SIZE(WARP_SIZE)
    ) dut (
        .clk(clk),
        .rst_n(rst_n)
    );
    
    // Clock Generation
    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end
    
    // Helper to encode instruction
    function automatic logic [63:0] encode_inst(
        logic [7:0] op, logic [7:0] rd=0, logic [7:0] rs1=0, logic [7:0] rs2=0, 
        logic [7:0] rs3=0, logic [3:0] pg=4'h7, logic [31:0] imm=0
    );
        return {op, rd, rs1, rs2, pg, rs3, imm[19:0]};
    endfunction

    // Global Error Counter
    int errors = 0;

    // --- Sub-Test Tasks ---

    task run_cnot_test();
        longint start_time;
        start_time = $time;
        $display("\n--- Running CNOT Test ---");
        
        rst_n = 0; #20; rst_n = 1; #10;
        
        dut.oc_inst.rf_bank_phys[1][0][0][0] = 0;   // R1 = 0
        dut.oc_inst.rf_bank_phys[2][0][0][0] = 1;   // R2 = 1
        dut.oc_inst.rf_bank_phys[3][0][0][0] = 100; // R3 = 100
        dut.oc_inst.rf_bank_phys[0][0][0][1] = 32'hFFFFFFFF; // R4 = -1

        dut.prog_mem[0][0] = encode_inst(OP_CNOT, 5, 1);
        dut.prog_mem[0][1] = encode_inst(OP_CNOT, 6, 2);
        dut.prog_mem[0][2] = encode_inst(OP_CNOT, 7, 3);
        dut.prog_mem[0][3] = encode_inst(OP_CNOT, 8, 4);
        dut.prog_mem[0][4] = encode_inst(OP_EXIT);

        // Launch Warp 0
        for(int w=0; w<NUM_WARPS; w++) begin
            dut.warp_state[w] = (w==0) ? W_READY : W_IDLE;
            dut.warp_pc[w] = 0;
        end

        // Run
        wait(dut.warp_state[0] == W_EXIT || $time > start_time + 1000000);
        #100;

        check(5, 1, "CNOT(0)");
        check(6, 0, "CNOT(1)");
        check(7, 0, "CNOT(100)");
        check(8, 0, "CNOT(-1)");
    endtask

    task run_negation_test();
        longint start_time;
        start_time = $time;
        $display("\n--- Running Negation Test ---");
        
        rst_n = 0; #20; rst_n = 1; #10;
        
        dut.oc_inst.rf_bank_phys[1][0][0][0] = 32'd10;       // R1 = 10
        dut.oc_inst.rf_bank_phys[2][0][0][0] = -32'd50;      // R2 = -50
        dut.oc_inst.rf_bank_phys[3][0][0][0] = 32'h3F800000; // R3 = 1.0
        dut.oc_inst.rf_bank_phys[0][0][0][1] = 32'hC0200000; // R4 = -2.5

        dut.prog_mem[0][0] = encode_inst(OP_NEG, 5, 1);
        dut.prog_mem[0][1] = encode_inst(OP_NEG, 6, 2);
        dut.prog_mem[0][2] = encode_inst(OP_FNEG, 7, 3);
        dut.prog_mem[0][3] = encode_inst(OP_FNEG, 8, 4);
        dut.prog_mem[0][4] = encode_inst(OP_EXIT);
        
        for(int w=0; w<NUM_WARPS; w++) begin
            dut.warp_state[w] = (w==0) ? W_READY : W_IDLE;
            dut.warp_pc[w] = 0;
        end

        wait(dut.warp_state[0] == W_EXIT || $time > start_time + 1000000);
        #100;

        check(5, -10, "NEG(10)");
        check(6, 50,  "NEG(-50)");
        check(7, 32'hBF800000, "FNEG(1.0)");
        check(8, 32'h40200000, "FNEG(-2.5)");
    endtask

    task run_mov_test();
        longint start_time;
        start_time = $time;
        $display("\n--- Running MOV Test ---");
        
        rst_n = 0; #20; rst_n = 1; #10;

        dut.oc_inst.rf_bank_phys[1][0][0][0] = 32'hAAAA_BBBB; // R1
        dut.oc_inst.rf_bank_phys[2][0][0][0] = 32'hCCCC_DDDD; // R2

        dut.prog_mem[0][0] = encode_inst(OP_MOV, 3, 1);
        dut.prog_mem[0][1] = encode_inst(OP_MOV, 4, 0, 0, 0, 4'h7, 32'h12345);
        dut.prog_mem[0][2] = encode_inst(OP_MOV, 5, 2, 0, 0, 4'h7, 32'hF);
        dut.prog_mem[0][3] = encode_inst(OP_EXIT);

        for(int w=0; w<NUM_WARPS; w++) begin
            dut.warp_state[w] = (w==0) ? W_READY : W_IDLE;
            dut.warp_pc[w] = 0;
        end

        wait(dut.warp_state[0] == W_EXIT || $time > start_time + 1000000);
        #100;

        check(3, 32'hAAAA_BBBB, "MOV Reg");
        check(4, 32'h00012345, "MOV Imm");
        check(5, 32'hCCCC_DDDF, "MOV Reg|Imm");
    endtask

    task run_isa_extensions_test();
        int pc;
        longint start_time;
        start_time = $time;
        $display("\n--- Running ISA Extensions Test ---");
        
        rst_n = 0; #20; rst_n = 1; #10;

        dut.oc_inst.rf_bank_phys[1][0][0][0] = 10;
        dut.oc_inst.rf_bank_phys[2][0][0][0] = -10;
        dut.oc_inst.rf_bank_phys[3][0][0][0] = 32'hF;
        dut.oc_inst.rf_bank_phys[0][0][0][1] = 32'hF0; 
        dut.oc_inst.rf_bank_phys[0][0][0][5] = 32'h3F800000; 
        dut.oc_inst.rf_bank_phys[1][0][0][5] = 32'hC0000000; 

        pc = 0;
        dut.prog_mem[0][pc++] = encode_inst(OP_AND, 5, 3, 4);
        dut.prog_mem[0][pc++] = encode_inst(OP_OR,  6, 3, 4);
        dut.prog_mem[0][pc++] = encode_inst(OP_XOR, 7, 3, 4);
        dut.prog_mem[0][pc++] = encode_inst(OP_NOT, 15, 3);
        
        dut.prog_mem[0][pc++] = encode_inst(OP_IDIV, 13, 1, 0, 0, 4'h7, 32'hFFFFFFFE); // 10 / -2
        dut.prog_mem[0][pc++] = encode_inst(OP_IREM, 14, 1, 0, 0, 4'h7, 3);
        dut.prog_mem[0][pc++] = encode_inst(OP_IABS, 16, 13);
        dut.prog_mem[0][pc++] = encode_inst(OP_IMIN, 17, 1, 2);
        dut.prog_mem[0][pc++] = encode_inst(OP_IMAX, 18, 1, 2);
        
        dut.prog_mem[0][pc++] = encode_inst(OP_ADD, 25, 0, 0, 0, 4'h7, 2); // R25=2
        dut.prog_mem[0][pc++] = encode_inst(OP_IMAD, 19, 1, 25, 16, 4'h7, 0); // 10*2 + 5 = 25
        
        dut.prog_mem[0][pc++] = encode_inst(OP_FABS, 22, 21);
        dut.prog_mem[0][pc++] = encode_inst(OP_FMIN, 23, 20, 21);
        dut.prog_mem[0][pc++] = encode_inst(OP_FMAX, 24, 20, 21);
        
        dut.prog_mem[0][pc++] = encode_inst(OP_SHL, 8, 3, 0, 0, 4'h7, 4);
        dut.prog_mem[0][pc++] = encode_inst(OP_SHR, 9, 4, 0, 0, 4'h7, 4);
        dut.prog_mem[0][pc++] = encode_inst(OP_SHA, 10, 2, 0, 0, 4'h7, 1);
        
        dut.prog_mem[0][pc++] = encode_inst(OP_ITOF, 26, 1);
        dut.prog_mem[0][pc++] = encode_inst(OP_POPC, 27, 3);
        dut.prog_mem[0][pc++] = encode_inst(OP_CLZ, 28, 1);
        dut.prog_mem[0][pc++] = encode_inst(OP_BREV, 29, 9);
        
        dut.prog_mem[0][pc++] = encode_inst(OP_SEQ, 11, 1, 0, 0, 4'h7, 10);
        dut.prog_mem[0][pc++] = encode_inst(OP_SLE, 12, 1, 0, 0, 4'h7, 5);
        
        dut.prog_mem[0][pc++] = encode_inst(OP_EXIT);

        for(int w=0; w<NUM_WARPS; w++) begin
            dut.warp_state[w] = (w==0) ? W_READY : W_IDLE;
            dut.warp_pc[w] = 0;
        end

        wait(dut.warp_state[0] == W_EXIT || $time > start_time + 4000000);
        #100;

        check(5, 32'h00000000, "AND");
        check(6, 32'h000000FF, "OR");
        check(7, 32'h000000FF, "XOR");
        check(8, 32'h000000F0, "SHL");
        check(9, 32'h0000000F, "SHR");
        check(10, 32'hFFFFFFFB, "SHA");
        check(11, 32'h00000001, "SEQ");
        check(12, 32'h00000000, "SLE");
        check(13, 32'hFFFFFFFB, "IDIV");
        check(14, 32'h00000001, "IREM");
        check(15, 32'hFFFFFFF0, "NOT");
        check(16, 32'h00000005, "IABS");
        check(17, 32'hFFFFFFF6, "IMIN");
        check(18, 32'h0000000A, "IMAX");
        check(19, 32'h00000019, "IMAD");
        check(22, 32'h40000000, "FABS");
        check(23, 32'hC0000000, "FMIN");
        check(24, 32'h3F800000, "FMAX");
        check(26, 32'h41200000, "ITOF");
        check(27, 32'h00000004, "POPC");
        check(28, 32'h0000001C, "CLZ");
        check(29, 32'hF0000000, "BREV");
    endtask

    // --- Main ---
    initial begin
        // Ordered for debugging
        run_isa_extensions_test(); 
        run_cnot_test();
        run_negation_test();
        run_mov_test();

        if (errors == 0) begin
            $display("\n==================================");
            $display("ALL ALU OPERATIONS TESTS PASSED");
            $display("==================================");
        end else begin
            $display("\n==================================");
            $display("FAILURES DETECTED: %0d Errors", errors);
            $display("==================================");
        end
        $finish;
    end

    // Check Task
    task check(input int reg_idx, input logic [31:0] expected, input string name);
        logic [31:0] val;
        val = dut.oc_inst.rf_bank_phys[reg_idx%4][0][0][reg_idx/4];
        if (val !== expected) begin
            $display("FAIL [%s]: R%0d = %h (Expected %h)", name, reg_idx, val, expected);
            errors++;
        end else begin
            $display("PASS [%s]: R%0d = %h", name, reg_idx, val);
        end
    endtask

endmodule

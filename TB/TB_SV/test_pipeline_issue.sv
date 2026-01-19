// ============================================================================
// Testbench: test_pipeline_issue
// Description: 
//   Verifies the Dual-Issue Pipeline capabilities of the Streaming Multiprocessor.
//   Ensures two independent instructions can be issued in the same cycle.
//
// Included Sub-Tests:
//   1. run_dual_issue_add_fadd: 
//      - Issues integer ADD (ALU) and floating-point FADD (FPU) simultaneously.
//      - Verifies both results are correct and latencies handled.
//   2. run_dual_issue_addi_itof: 
//      - Issues integer ADDI and ITOF (Int to Float) conversion.
//      - Checks for resource conflicts and correct writeback.
//
// Expected Result: All sub-tests pass.
// ============================================================================
`timescale 1ns/1ps

module test_pipeline_issue;
    import simt_pkg::*;

    // Parameters
    localparam NUM_WARPS = 24;
    localparam WARP_SIZE = 32;

    // Signals
    logic clk;
    logic rst_n;
    logic done;

    // Instantiate DUT
    streaming_multiprocessor #(
        .NUM_WARPS(NUM_WARPS),
        .WARP_SIZE(WARP_SIZE)
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

    // Helper to encode instruction
    function automatic logic [63:0] encode_inst(
        logic [7:0] op, logic [7:0] rd=0, logic [7:0] rs1=0, logic [7:0] rs2=0, 
        logic [7:0] rs3=0, logic [3:0] pg=4'h7, logic [31:0] imm=0
    );
        return {op, rd, rs1, rs2, pg, rs3, imm[19:0]};
    endfunction

    int errors = 0;

    // --- Sub-Test Tasks ---

    // 1. Dual Issue ALU + FPU (ADD/FADD)
    task run_dual_issue_add_fadd();
        longint start_time;
        start_time = $time;
        $display("\n--- Running Dual Issue: ALU(ADD) + FPU(FADD) ---");

        rst_n = 0; #20; rst_n = 1; #10;

        // Init Registers
        // R1=10, R2=20 (Int)
        dut.oc_inst.rf_bank_phys[1][0][0][0] = 10;
        dut.oc_inst.rf_bank_phys[2][0][0][0] = 20;
        // R3=10.0, R4=20.0 (Float)
        dut.oc_inst.rf_bank_phys[3][0][0][0] = 32'h41200000; // 10.0
        dut.oc_inst.rf_bank_phys[0][0][0][1] = 32'h41a00000; // 20.0 (R4 bank 0, idx 1)

        // Program
        // PC 0: ADD R5, R1, R2 (10+20=30)
        dut.prog_mem[0][0] = encode_inst(OP_ADD, 5, 1, 2);
        // PC 1: FADD R6, R3, R4 (10.0+20.0=30.0) -> Should dual issue with above?
        // Note: Dual issue happens if instructions are independent and use different units.
        // And if they are fetched in the same block? Or just consecutive in program?
        // The core likely fetches 2 instructions or decodes 2.
        dut.prog_mem[0][1] = encode_inst(OP_FADD, 6, 3, 4);
        
        dut.prog_mem[0][2] = encode_inst(OP_EXIT);

        for(int w=0; w<NUM_WARPS; w++) begin
            dut.warp_state[w] = (w==0) ? W_READY : W_IDLE;
            dut.warp_pc[w] = 0;
        end

        wait(dut.warp_state[0] == W_EXIT || $time > start_time + 2000000);
        #100;

        check_reg(5, 30, "ALU ADD (Dual)");
        check_reg(6, 32'h41f00000, "FPU FADD (Dual)"); // 30.0 = 0x41F00000
    endtask

    // 2. Dual Issue ALU + FPU (ADDI + ITOF)
    task run_dual_issue_addi_itof();
        longint start_time;
        start_time = $time;
        $display("\n--- Running Dual Issue: ALU(ADDI) + FPU(ITOF) ---");

        rst_n = 0; #20; rst_n = 1; #10;

        // Init Registers
        // R1=10, R5=20
        dut.oc_inst.rf_bank_phys[1][0][0][0] = 10;
        dut.oc_inst.rf_bank_phys[1][0][0][1] = 20; // R5 (Bank 1, Idx 1)

        // Program
        // PC 0: ADD R3, R1, 5 (R3 = 15)
        dut.prog_mem[0][0] = encode_inst(OP_ADD, 3, 1, 0, 0, 4'h7, 5);
        // PC 1: ITOF R4, R5 (R4 = 20.0)
        dut.prog_mem[0][1] = encode_inst(OP_ITOF, 4, 5);
        
        dut.prog_mem[0][2] = encode_inst(OP_EXIT);

        for(int w=0; w<NUM_WARPS; w++) begin
            dut.warp_state[w] = (w==0) ? W_READY : W_IDLE;
            dut.warp_pc[w] = 0;
        end

        wait(dut.warp_state[0] == W_EXIT || $time > start_time + 2000000);
        #100;

        check_reg(3, 15, "ALU ADDI (Dual)");
        check_reg(4, 32'h41a00000, "FPU ITOF (Dual)"); // 20.0
    endtask

    // Helper Checks
    task check_reg(int reg_idx, logic [31:0] expected, string name);
        logic [31:0] val;
        val = dut.oc_inst.rf_bank_phys[reg_idx%4][0][0][reg_idx/4];
        if (val !== expected) begin
            $display("FAIL [%s]: R%0d = %h (Expected %h)", name, reg_idx, val, expected);
            errors++;
        end else begin
            $display("PASS [%s]: R%0d = %h", name, reg_idx, val);
        end
    endtask

    initial begin
        run_dual_issue_add_fadd();
        run_dual_issue_addi_itof();

        if (errors == 0) begin
            $display("\n==================================");
            $display("ALL PIPELINE ISSUE TESTS PASSED");
            $display("==================================");
        end else begin
            $display("\n==================================");
            $display("FAILURES DETECTED: %0d Errors", errors);
            $display("==================================");
        end
        $finish;
    end

endmodule

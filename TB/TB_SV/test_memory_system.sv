// ============================================================================
// Testbench: test_memory_system
// Description: 
//   Verifies the Memory Subsystem, focusing on the Operand Collector and Register File.
//   Ensures correct handling of bank conflicts and multi-operand reads.
//
// Included Sub-Tests:
//   1. run_operand_collector_test: 
//      - Verifies reads from conflict-free and conflicting banks.
//      - Tests Read-After-Write (RAW) hazard resolution in the collector.
//      - Checks lane-specific data integrity.
//
// Expected Result: All sub-tests pass.
// ============================================================================
`timescale 1ns/1ps

module test_memory_system;
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

    // 1. Operand Collector Basic Test (Bank conflicts, Hazards)
    task run_operand_collector_test();
        longint start_time;
        start_time = $time;
        $display("\n--- Running Operand Collector Test ---");

        rst_n = 0; #20; rst_n = 1; #10;

        // Init Registers (Backdoor)
        // R1 = 10..41 (Lane dependent)
        // R2 = 20..51
        for (int l=0; l<WARP_SIZE; l++) begin
            dut.oc_inst.rf_bank_phys[1][l][0][0] = 10 + l; // R1 (Bank 1)
            dut.oc_inst.rf_bank_phys[2][l][0][0] = 20 + l; // R2 (Bank 2)
        end

        // Program
        // 1. ADD R5, R1, R2 -> R5 = R1 + R2 (Bank 1)
        dut.prog_mem[0][0] = encode_inst(OP_ADD, 5, 1, 2);
        
        // 2. MUL R6, R5, R1 -> R6 = R5 * R1 (Bank 2, R5 conflict/hazard?)
        // R5 is dest of prev. R5 is src1 of cur. RAW hazard.
        dut.prog_mem[0][1] = encode_inst(OP_MUL, 6, 5, 1);
        
        dut.prog_mem[0][2] = encode_inst(OP_EXIT);

        for(int w=0; w<NUM_WARPS; w++) begin
            dut.warp_state[w] = (w==0) ? W_READY : W_IDLE;
            dut.warp_pc[w] = 0;
        end

        wait(dut.warp_state[0] == W_EXIT || $time > start_time + 2000000);
        #100;

        // Verify Lane 0
        // R5 = 10+20=30
        check_lane_reg(5, 0, 30, "OC ADD Lane 0");
        // R6 = 30*10=300
        check_lane_reg(6, 0, 300, "OC MUL Lane 0 (Hazard)");
        
        // Verify Lane 1
        // R5 = 11+21=32
        check_lane_reg(5, 1, 32, "OC ADD Lane 1");
        // R6 = 32*11=352
        check_lane_reg(6, 1, 352, "OC MUL Lane 1 (Hazard)");
    endtask

    // Helper Checks
    task check_lane_reg(int reg_idx, int lane_idx, logic [31:0] expected, string name);
        logic [31:0] val;
        val = dut.oc_inst.rf_bank_phys[reg_idx%4][lane_idx][0][reg_idx/4];
        if (val !== expected) begin
            $display("FAIL [%s]: R%0d(L%0d) = %h (Expected %h)", name, reg_idx, lane_idx, val, expected);
            errors++;
        end else begin
            $display("PASS [%s]: R%0d(L%0d) = %h", name, reg_idx, lane_idx, val);
        end
    endtask

    initial begin
        run_operand_collector_test();

        if (errors == 0) begin
            $display("\n==================================");
            $display("ALL MEMORY SYSTEM TESTS PASSED");
            $display("==================================");
        end else begin
            $display("\n==================================");
            $display("FAILURES DETECTED: %0d Errors", errors);
            $display("==================================");
        end
        $finish;
    end

endmodule

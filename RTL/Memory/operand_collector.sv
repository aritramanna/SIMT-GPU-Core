`timescale 1ns/1ps

/**
 * operand_collector.sv - 16 Unit Shared Pool (Fermi Model)
 * 
 * REFINEMENTS:
 * 1. Dual Writeback Ports (wb_valid[1:0]): Handles ALU and Memory completions simultaneously.
 * 2. Opcode-based needed_mask: Only collects what it needs.
 * 3. Fair Ready-Release: Round-robin pointer for selecting which READY unit to release to EX.
 */
module operand_collector 
    import simt_pkg::*;
#(
    parameter WARP_SIZE = 32,
    parameter NUM_REGS = 64,
    parameter NUM_WARPS = 24,
    parameter NUM_COLLECTORS = 16
)(
    input  logic clk,
    input  logic rst_n,

    // --- Dispatch Interface (Two ports for Dual Schedulers) ---
    input  logic [1:0]                dispatch_valid,
    input  id_ex_t [1:0]              dispatch_inst,
    output logic [1:0]                dispatch_ready,

    // --- Dual Writeback Interface ---
    input  logic [1:0]                      wb_valid,
    input  logic [1:0][4:0]                 wb_warp,
    input  logic [1:0][REG_ADDR_WIDTH-1:0]  wb_rd,
    input  logic [1:0][WARP_SIZE-1:0]       wb_mask,
    input  logic [1:0][WARP_SIZE-1:0][31:0] wb_data,

    // --- Execution Interface (Two ports for Dual Execution) ---
    output logic [1:0]                ex_valid,
    output id_ex_t [1:0]              ex_inst,
    input  logic [1:0]                ex_ready,

    // --- Flush/Branch Interface ---
    input  logic                      flush_valid,
    input  logic [WARP_ID_WIDTH-1:0]  flush_warp,
    input  logic [1:0] current_warp_branch_tag [NUM_WARPS] // Changed to Unpacked for consistency
);

    localparam REG_ADDR_WIDTH = $clog2(NUM_REGS);

    //=========================================================================
    // 4 Physical Register File Banks (Interleaved)
    // 1 Bank per collection arbiter to allow 4 parallel reads.
    // Indexing: Bank = RegIdx % 4, Offset = RegIdx / 4
    //=========================================================================
    logic [31:0] rf_bank_phys [4][WARP_SIZE][NUM_WARPS][NUM_REGS/4];

    always_ff @(posedge clk) begin
        for (int p = 0; p < 2; p++) begin
            if (wb_valid[p]) begin
                logic [1:0] b;
                logic [5:0] r_idx;
                b = wb_rd[p][1:0];
                r_idx = wb_rd[p] >> 2;
                for (int i = 0; i < WARP_SIZE; i++) begin
                    if (wb_mask[p][i]) begin
                        rf_bank_phys[b][i][wb_warp[p]][r_idx] <= wb_data[p][i];
                    end
                end
            end
        end
    end

    //=========================================================================
    // Collector Unit Structures (Flattened and Unpacked for RTL stability)
    //=========================================================================
    typedef enum logic [1:0] { IDLE, ALLOCATED, READY } state_e;

    typedef struct packed {
        state_e     state;
        id_ex_t     inst;
        logic [2:0] needed_mask;
    } cu_meta_t;

    // Helper: Identify Instruction Type
    // Wrapper around package function with cast if needed (though opcode is imported)
    function automatic simt_pkg::unit_type_e get_type(opcode_t op);
        return simt_pkg::get_unit_type(op);
    endfunction

    cu_meta_t collectors [NUM_COLLECTORS];
    
    // Independent 1-bit flags (Unpacked for maximum stability)
    logic rs1_ready [NUM_COLLECTORS];
    logic rs2_ready [NUM_COLLECTORS];
    logic rs3_ready [NUM_COLLECTORS];

    // Flattened operand storage
    logic [WARP_SIZE-1:0][31:0] rs1_data [NUM_COLLECTORS];
    logic [WARP_SIZE-1:0][31:0] rs2_data [NUM_COLLECTORS];
    logic [WARP_SIZE-1:0][31:0] rs3_data [NUM_COLLECTORS];

    // Ordering Control
    logic [15:0] warp_issue_id [NUM_WARPS];
    logic [15:0] unit_issue_id [NUM_COLLECTORS];
    logic [15:0] warp_release_id [NUM_WARPS];

    //=========================================================================
    // Allocation Logic (Two incoming instructions)
    //=========================================================================
    always_comb begin
        int idle_count;
        dispatch_ready = 2'b00;
        // Port 0 Ready if there is at least one idle unit
        for (int i=0; i<NUM_COLLECTORS; i++) if (collectors[i].state == IDLE) dispatch_ready[0] = 1;
        // Port 1 Ready if there are at least two idle units
        idle_count = 0;
        for (int i=0; i<NUM_COLLECTORS; i++) if (collectors[i].state == IDLE) idle_count++;
        if (idle_count >= 2) dispatch_ready[1] = 1;
    end

    //=========================================================================
    // 2.a Forwarding Detection (Combinational)
    // - Detects if any waiting operand is on the WB bus THIS cycle
    //=========================================================================
    logic rs1_forwarded [NUM_COLLECTORS];
    logic rs2_forwarded [NUM_COLLECTORS];
    logic rs3_forwarded [NUM_COLLECTORS];

    always_comb begin
        for (int i=0; i<NUM_COLLECTORS; i++) begin
            rs1_forwarded[i] = 0; rs2_forwarded[i] = 0; rs3_forwarded[i] = 0;
            if (collectors[i].state == ALLOCATED) begin
                for (int p=0; p<2; p++) begin
                    if (wb_valid[p] && wb_warp[p] == collectors[i].inst.warp && |wb_mask[p]) begin
                        if (collectors[i].inst.rs1_idx == wb_rd[p]) rs1_forwarded[i] = 1;
                        if (collectors[i].inst.rs2_idx == wb_rd[p]) rs2_forwarded[i] = 1;
                        if (collectors[i].inst.rs3_idx == wb_rd[p]) rs3_forwarded[i] = 1;
                    end
                end
            end
        end
    end

    //=========================================================================
    // 2.b Operand Collection Arbiters (Parallel Banking)
    //=========================================================================
    int bank_arb_idx[4];
    logic [3:0] bank_req_valid;
    int bank_rr_ptr[4];

    always_comb begin
        bank_req_valid = 4'h0;
        for (int b=0; b<4; b++) begin
            bank_arb_idx[b] = 0;
            // Find a CU that needs an operand from bank b
            for (int i = 0; i < NUM_COLLECTORS; i++) begin
                int idx = (bank_rr_ptr[b] + i) % NUM_COLLECTORS;
                if (collectors[idx].state == ALLOCATED) begin
                    // Check RS1 (Gate if already forwarded)
                    if (!rs1_ready[idx] && !rs1_forwarded[idx] && collectors[idx].needed_mask[0] && (collectors[idx].inst.rs1_idx % 4 == b)) begin
                        bank_arb_idx[b] = idx;
                        bank_req_valid[b] = 1;
                        break;
                    end
                    // Check RS2
                    if (!rs2_ready[idx] && !rs2_forwarded[idx] && collectors[idx].needed_mask[1] && (collectors[idx].inst.rs2_idx % 4 == b)) begin
                        bank_arb_idx[b] = idx;
                        bank_req_valid[b] = 1;
                        break;
                    end
                    // Check RS3
                    if (!rs3_ready[idx] && !rs3_forwarded[idx] && collectors[idx].needed_mask[2] && (collectors[idx].inst.rs3_idx % 4 == b)) begin
                        bank_arb_idx[b] = idx;
                        bank_req_valid[b] = 1;
                        break;
                    end
                end
            end
        end
    end


    //=========================================================================
    // Main Sequential Logic
    //=========================================================================
    //=========================================================================
    // Release Port Arbitration Logic (Round-Robin for READY units)
    //=========================================================================
    int release_rr_ptr;
    
    always_comb begin
        int p0_idx_comb;
        p0_idx_comb = -1;
        
        ex_valid = 2'b00;
        ex_inst[0] = '{op: OP_NOP, default:0};
        ex_inst[1] = '{op: OP_NOP, default:0};
        
        // Port 0: Standard Order-Aware Search
        for (int i=0; i<NUM_COLLECTORS; i++) begin
            int idx = (release_rr_ptr + i) % NUM_COLLECTORS;
            if (collectors[idx].state == READY && 
                unit_issue_id[idx] == warp_release_id[collectors[idx].inst.warp]) begin
                
                id_ex_t rinst;
                rinst = collectors[idx].inst;
                rinst.rs1 = rs1_data[idx];
                rinst.rs2 = rs2_data[idx];
                rinst.rs3 = rs3_data[idx];

                ex_valid[0] = 1;
                ex_inst[0] = rinst;
                p0_idx_comb = idx;
                break;
            end
        end
        
        // Port 1: Dual-Issue search (Structural Disjoint + Order-Aware)
        for (int i=0; i<NUM_COLLECTORS; i++) begin
            int idx = (release_rr_ptr + i) % NUM_COLLECTORS;
            if (idx == p0_idx_comb) continue;
            
            if (collectors[idx].state == READY && 
                unit_issue_id[idx] == warp_release_id[collectors[idx].inst.warp]) begin
                
                if (p0_idx_comb == -1 || 
                    ( (get_unit_type(collectors[idx].inst.op) != get_unit_type(ex_inst[0].op)) &&
                      !((get_unit_type(collectors[idx].inst.op) == UNIT_ALU && get_unit_type(ex_inst[0].op) == UNIT_CTRL) ||
                        (get_unit_type(collectors[idx].inst.op) == UNIT_CTRL && get_unit_type(ex_inst[0].op) == UNIT_ALU))
                    )) begin
                    id_ex_t rinst;
                    rinst = collectors[idx].inst;
                    rinst.rs1 = rs1_data[idx];
                    rinst.rs2 = rs2_data[idx];
                    rinst.rs3 = rs3_data[idx];

                    ex_valid[1] = 1;
                    ex_inst[1] = rinst;
                    break;
                end
            end
        end
    end

    //=========================================================================
    // Main Sequential Logic
    //=========================================================================
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            for (int i = 0; i < NUM_COLLECTORS; i++) begin
                collectors[i].state <= IDLE;
                rs1_ready[i] <= 0;
                rs2_ready[i] <= 0;
                rs3_ready[i] <= 0;
                unit_issue_id[i] <= 0;
            end
            for (int w = 0; w < NUM_WARPS; w++) begin
                warp_issue_id[w] <= 0;
                warp_release_id[w] <= 0;
            end
            for (int b = 0; b < 4; b++) bank_rr_ptr[b] <= 0;
            release_rr_ptr <= 0;
        end else begin
            
            // 1. ALLOCATION (From Dual Schedulers)
            // Atomic check: Only allocate if OC can accept ALL valid incoming instructions
            if ((dispatch_valid == 2'b11 && dispatch_ready[1]) ||
               ((dispatch_valid == 2'b01 || dispatch_valid == 2'b10) && dispatch_ready[0])) begin
                
                logic [15:0] count_tmp [NUM_WARPS];
                for (int w=0; w<NUM_WARPS; w++) count_tmp[w] = warp_issue_id[w];

                if (dispatch_valid == 2'b11)
                    $display("OC_DIAG [%0t] ATOMIC DUAL VALID. Ready=%b", $time, dispatch_ready);

                for (int p=0; p<2; p++) begin
                    if (dispatch_valid[p]) begin
                        int slots_to_skip;
                        int skipped;
                        bit found_unit;
                        slots_to_skip = (p == 1 && dispatch_valid[0]) ? 1 : 0;
                        skipped = 0;
                        found_unit = 0;
                        
                        for (int i=0; i<NUM_COLLECTORS; i++) begin
                            if (collectors[i].state == IDLE) begin
                                if (skipped < slots_to_skip) begin
                                    skipped++;
                                    continue;
                                end
                                
                                found_unit = 1;
                                collectors[i].state <= ALLOCATED;
                                collectors[i].inst  <= dispatch_inst[p];
                                unit_issue_id[i]    <= count_tmp[dispatch_inst[p].warp];
                                
                                $display("OC [%0t] ALLOC: Unit %0d Warp %0d Op %s PC %h Tag %d p=%d ID %d", 
                                    $time, i, dispatch_inst[p].warp, dispatch_inst[p].op.name(), dispatch_inst[p].pc, dispatch_inst[p].branch_tag, p, count_tmp[dispatch_inst[p].warp]);

                                count_tmp[dispatch_inst[p].warp]++;
                                rs1_ready[i] <= 0;
                                rs2_ready[i] <= 0;
                                rs3_ready[i] <= 0;
                                
                                // Opcode-based needed_mask
                                case (dispatch_inst[p].op)
                                    OP_TID, OP_NOP, OP_EXIT: collectors[i].needed_mask <= 3'b000;
                                    OP_LDR, OP_FABS, OP_FNEG, OP_NEG, OP_NOT, OP_ITOF, OP_FTOI,
                                    OP_SFU_SIN, OP_SFU_COS, OP_SFU_RCP, OP_SFU_RSQ, OP_SFU_SQRT, OP_SFU_EX2, OP_SFU_LG2,
                                    OP_POPC, OP_CLZ, OP_BREV, OP_CNOT, OP_LDS: 
                                        collectors[i].needed_mask <= 3'b001;
                                    OP_STR, OP_BEQ, OP_BNE:
                                        collectors[i].needed_mask <= 3'b011;
                                    OP_FFMA, OP_IMAD: collectors[i].needed_mask <= 3'b111;
                                    OP_BRA, OP_JOIN, OP_BAR, OP_SSY: collectors[i].needed_mask <= 3'b000;
                                    default: collectors[i].needed_mask <= 3'b011;
                                endcase
                                break;
                            end
                        end
                        if (!found_unit) 
                            $display("OC_DIAG [%0t] FAIL TO FIND UNIT for p=%0d PC=%h", $time, p, dispatch_inst[p].pc);
                    end
                end
                for (int w=0; w<NUM_WARPS; w++) warp_issue_id[w] <= count_tmp[w];
            end else if (dispatch_valid != 0) begin
                $display("OC_DIAG [%0t] ATOMIC REJECT: Valid=%b Ready=%b", $time, dispatch_valid, dispatch_ready);
            end

            // 2. COLLECTION (Parallel Multi-Bank Read)
            for (int b=0; b<4; b++) begin
                if (bank_req_valid[b]) begin
                    int idx = bank_arb_idx[b];
                    if (!rs1_ready[idx] && collectors[idx].needed_mask[0] && (collectors[idx].inst.rs1_idx % 4 == b)) begin
                        for (int l=0; l<WARP_SIZE; l++) begin
                            rs1_data[idx][l] <= rf_bank_phys[b][l][collectors[idx].inst.warp][collectors[idx].inst.rs1_idx >> 2];
                        end
                        rs1_ready[idx] <= 1;
                    end
                    else if (!rs2_ready[idx] && collectors[idx].needed_mask[1] && (collectors[idx].inst.rs2_idx % 4 == b)) begin
                        for (int l=0; l<WARP_SIZE; l++) begin
                            rs2_data[idx][l] <= rf_bank_phys[b][l][collectors[idx].inst.warp][collectors[idx].inst.rs2_idx >> 2];
                        end
                        rs2_ready[idx] <= 1;
                    end
                    else if (!rs3_ready[idx] && collectors[idx].needed_mask[2] && (collectors[idx].inst.rs3_idx % 4 == b)) begin
                        for (int l=0; l<WARP_SIZE; l++) begin
                            rs3_data[idx][l] <= rf_bank_phys[b][l][collectors[idx].inst.warp][collectors[idx].inst.rs3_idx >> 2];
                        end
                        rs3_ready[idx] <= 1;
                    end
                    bank_rr_ptr[b] <= (idx + 1) % NUM_COLLECTORS;
                end
            end

            // 2.5 FORWARDING (Snoop WB Bus for Zero-Latency Wakeup)
            // Checks if any currently allocated collector is waiting for a register that is being written back THIS cycle.
            for (int i=0; i<NUM_COLLECTORS; i++) begin
                // Only process if ALLOCATED (IDLE units skip)
                if (collectors[i].state == ALLOCATED) begin
                    for (int p=0; p<2; p++) begin
                        if (wb_valid[p] && wb_warp[p] == collectors[i].inst.warp && |wb_mask[p]) begin
                            // Check RS1
                            // NOTE: Prioritized over RF Read because Bank Arbiter is gated by !rsX_forwarded.
                            // Even if a collision happened (race), this assignment would win (last assignment wins in block), 
                            // ensuring the FRESH forwarded value is kept.
                            if (!rs1_ready[i] && collectors[i].needed_mask[0] && collectors[i].inst.rs1_idx == wb_rd[p]) begin
                                rs1_data[i] <= wb_data[p];
                                rs1_ready[i] <= 1;
                            end
                            // Check RS2
                            if (!rs2_ready[i] && collectors[i].needed_mask[1] && collectors[i].inst.rs2_idx == wb_rd[p]) begin
                                rs2_data[i] <= wb_data[p];
                                rs2_ready[i] <= 1;
                            end
                            // Check RS3
                            if (!rs3_ready[i] && collectors[i].needed_mask[2] && collectors[i].inst.rs3_idx == wb_rd[p]) begin
                                rs3_data[i] <= wb_data[p];
                                rs3_ready[i] <= 1;
                            end
                        end
                    end
                end
            end

            // 3. READY PROMOTION
            for (int i = 0; i < NUM_COLLECTORS; i++) begin
                if (collectors[i].state == ALLOCATED) begin
                    logic all_ready;
                    all_ready = 1;
                    if (collectors[i].needed_mask[0] && !rs1_ready[i]) all_ready = 0;
                    if (collectors[i].needed_mask[1] && !rs2_ready[i]) all_ready = 0;
                    if (collectors[i].needed_mask[2] && !rs3_ready[i]) all_ready = 0;
                    
                    if (all_ready) begin
                        collectors[i].state <= READY;
                        $display("OC [%0t] READY: Unit %0d PC %h", $time, i, collectors[i].inst.pc);
                    end
                end
            end

            // 3.5 BRANCH SQUASHING (Flush & Tag-based)
            if (flush_valid) begin
                for (int i=0; i<NUM_COLLECTORS; i++) begin
                    if (collectors[i].state != IDLE && collectors[i].inst.warp == flush_warp) begin
                        collectors[i].state <= IDLE;
                    end
                end
            end

            for (int i=0; i<NUM_COLLECTORS; i++) begin
                if (collectors[i].state != IDLE) begin
                    if (collectors[i].inst.branch_tag != current_warp_branch_tag[collectors[i].inst.warp]) begin
                        // Tag mismatch! Force READY as NOP to clear scoreboard in EX/WB
                        collectors[i].state <= READY;
                        collectors[i].inst.op <= OP_NOP;
                        collectors[i].needed_mask <= 3'b000;
                    end
                end
            end

            // 4. RELEASE (State Transition)
            // Combined Port 0 and Port 1 release based on combinational ex_valid/ready
            begin
                int p0_idx_seq;
                p0_idx_seq = -1;
                
                // Port 0 Handle
                if (ex_valid[0] && ex_ready[0]) begin
                    for (int i=0; i<NUM_COLLECTORS; i++) begin
                        int idx = (release_rr_ptr + i) % NUM_COLLECTORS;
                        if (collectors[idx].state == READY && 
                            unit_issue_id[idx] == warp_release_id[collectors[idx].inst.warp]) begin
                            
                            collectors[idx].state <= IDLE;
                            warp_release_id[collectors[idx].inst.warp] <= warp_release_id[collectors[idx].inst.warp] + 1;
                            p0_idx_seq = idx;
                            $display("OC [%0t] RELEASE: Unit %0d Warp %0d PC %h ID %d (P0)", $time, idx, collectors[idx].inst.warp, collectors[idx].inst.pc, unit_issue_id[idx]);
                            
                            if (!ex_valid[1] || !ex_ready[1]) release_rr_ptr <= (idx + 1) % NUM_COLLECTORS;
                            break;
                        end
                    end
                end
                
                // Port 1 Handle
                if (ex_valid[1] && ex_ready[1]) begin
                    for (int i=0; i<NUM_COLLECTORS; i++) begin
                        int idx = (release_rr_ptr + i) % NUM_COLLECTORS;
                        if (idx == p0_idx_seq) continue;
                        
                        if (collectors[idx].state == READY && 
                            unit_issue_id[idx] == warp_release_id[collectors[idx].inst.warp]) begin
                            
                            if (p0_idx_seq == -1 || (get_type(collectors[idx].inst.op) != get_type(ex_inst[0].op))) begin
                                collectors[idx].state <= IDLE;
                                warp_release_id[collectors[idx].inst.warp] <= warp_release_id[collectors[idx].inst.warp] + 1;
                                $display("OC [%0t] RELEASE: Unit %0d Warp %0d PC %h ID %d (P1)", $time, idx, collectors[idx].inst.warp, collectors[idx].inst.pc, unit_issue_id[idx]);
                                release_rr_ptr <= (idx + 1) % NUM_COLLECTORS;
                                break;
                            end
                        end
                    end
                end
            end
        end
    end

    // Debug logic removed
endmodule

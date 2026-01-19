`timescale 1ns/1ps

module shared_memory #(
    parameter SIZE_BYTES = 16384,      // 16KB per SM
    parameter NUM_BANKS  = 32,         // 32 Banks for Warp access
    parameter CONFLICT_MODE = 2,       // 0=ignore, 1=warn, 2=serialize
    parameter BANK_ADDR_WIDTH = 5      // log2(NUM_BANKS) = 5 for 32 banks
) (
    input  logic clk,
    input  logic rst_n,
    
    // Request Interface (from LSU)
    input  logic req_valid,
    input  logic [15:0] req_uid,               // Transaction ID (to detect new requests)
    input  logic [NUM_BANKS-1:0] req_mask,     // Active threads 
    input  logic req_we,                       // Write Enable
    input  logic [NUM_BANKS-1:0][31:0] req_addr, // Byte Addresses
    input  logic [NUM_BANKS-1:0][31:0] req_wdata,
    
    // Response Interface
    output logic [NUM_BANKS-1:0][31:0] resp_rdata,
    output logic busy,                         // Monitor signal (for debugging/profiling)
    output logic stall_cpu,                    // Hardware stall signal for pipeline
    output logic [7:0] conflict_cycles         // Actual cycles taken for this access
);

    // Memory array
    logic [7:0] mem [0:SIZE_BYTES-1];

    // State machine
    typedef enum logic [1:0] {
        IDLE,
        REPLAY
    } state_t;
    state_t state;

    // Conflict tracking
    logic [NUM_BANKS-1:0] pending_mask;        // Which threads still need service
    logic [7:0] cycles_remaining;              // Cycles left to complete
    
    // Request tracking
    logic [15:0] last_serviced_uid;            // Last completed transaction
    logic [15:0] current_uid;                  // Current transaction being processed
    
    // Latched request (for multi-cycle replay)
    logic latched_we;
    logic [NUM_BANKS-1:0][31:0] latched_addr;
    logic [NUM_BANKS-1:0][31:0] latched_wdata;

    // ------------------------------------------------------------------------
    // Conflict Detection Logic (Combinational)
    // ------------------------------------------------------------------------
    // BROADCAST OPTIMIZATION: Multiple threads reading/writing the SAME WORD
    // in the same bank do NOT count as a conflict. It's only a conflict if
    // they access DIFFERENT words in the same bank.
    // ------------------------------------------------------------------------
    function automatic logic [7:0] detect_conflicts(
        input logic [NUM_BANKS-1:0] mask,
        input logic [NUM_BANKS-1:0][31:0] addr
    );
        logic [NUM_BANKS-1:0][7:0] unique_words_per_bank;
        logic [NUM_BANKS-1:0][NUM_BANKS-1:0][31:0] seen_addrs;
        logic [7:0] max_count;
        
        for (int b = 0; b < NUM_BANKS; b++) begin
            unique_words_per_bank[b] = 0;
            for (int j = 0; j < NUM_BANKS; j++) seen_addrs[b][j] = '0;
        end
        
        for (int i = 0; i < NUM_BANKS; i++) begin
            if (mask[i]) begin
                logic [BANK_ADDR_WIDTH-1:0] bank_id;
                logic [31:0] word_addr;
                logic already_seen;
                
                bank_id = addr[i][BANK_ADDR_WIDTH+1:2];
                word_addr = addr[i] & 32'hFFFFFFFC; // Align to word
                
                already_seen = 0;
                for (int j = 0; j < unique_words_per_bank[bank_id]; j++) begin
                    if (seen_addrs[bank_id][j] == word_addr) begin
                        already_seen = 1;
                        break;
                    end
                end
                
                if (!already_seen) begin
                    seen_addrs[bank_id][unique_words_per_bank[bank_id]] = word_addr;
                    unique_words_per_bank[bank_id]++;
                end
            end
        end
        
        max_count = 0;
        for (int b = 0; b < NUM_BANKS; b++) begin
            if (unique_words_per_bank[b] > max_count) begin
                max_count = unique_words_per_bank[b];
            end
        end
        return max_count;
    endfunction

    // ------------------------------------------------------------------------
    // Memory Access Helper - Service one distinct word per bank
    // ------------------------------------------------------------------------
    task automatic service_threads(
        input logic [NUM_BANKS-1:0] mask,
        input logic we,
        input logic [NUM_BANKS-1:0][31:0] addr,
        input logic [NUM_BANKS-1:0][31:0] wdata,
        input logic ignore_conflicts,
        output logic [NUM_BANKS-1:0] serviced
    );
        logic [NUM_BANKS-1:0] bank_used;
        logic [NUM_BANKS-1:0][31:0] bank_addr_serviced;
        
        serviced = 0;
        bank_used = 0;
        
        for (int i = 0; i < NUM_BANKS; i++) begin
            if (mask[i]) begin
                logic [BANK_ADDR_WIDTH-1:0] bank_id;
                logic [31:0] word_addr;
                logic [31:0] byte_addr;
                
                bank_id = addr[i][BANK_ADDR_WIDTH+1:2];
                word_addr = addr[i] & 32'hFFFFFFFC;
                
                // Service if:
                // 1. Ignoring conflicts OR
                // 2. Bank is free OR
                // 3. Bank is used BUT it's the SAME word (Broadcast)
                if (ignore_conflicts || !bank_used[bank_id] || bank_addr_serviced[bank_id] == word_addr) begin
                    byte_addr = addr[i] % SIZE_BYTES;
                    
                    if (we) begin
                        mem[byte_addr]   <= wdata[i][7:0];
                        mem[byte_addr+1] <= wdata[i][15:8];
                        mem[byte_addr+2] <= wdata[i][23:16];
                        mem[byte_addr+3] <= wdata[i][31:24];
                    end else begin
                        resp_rdata[i][7:0]   <= mem[byte_addr];
                        resp_rdata[i][15:8]  <= mem[byte_addr+1];
                        resp_rdata[i][23:16] <= mem[byte_addr+2];
                        resp_rdata[i][31:24] <= mem[byte_addr+3];
                        
                        // DEBUG TRACE
                        // $display("SHARED_MEM [%0t] READ: Lane %0d Addr %h Data %h", $time, i, byte_addr, {mem[byte_addr+3], mem[byte_addr+2], mem[byte_addr+1], mem[byte_addr]});
                    end
                    
                    serviced[i] = 1;
                    bank_used[bank_id] = 1;
                    bank_addr_serviced[bank_id] = word_addr;
                end
            end
        end
    endtask

    // ------------------------------------------------------------------------
    // Main State Machine and Memory Access Logic
    // ------------------------------------------------------------------------
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state <= IDLE;
            pending_mask <= 0;
            cycles_remaining <= 0;
            conflict_cycles <= 0;
            latched_we <= 0;
            latched_addr <= '0;
            latched_wdata <= '0;
            last_serviced_uid <= 16'hFFFF; 
            current_uid <= 0;
            resp_rdata <= '0;
        end else begin
            case (state)
                IDLE: begin
                    if (req_valid && (CONFLICT_MODE == 0 || req_uid != last_serviced_uid)) begin
                        logic [7:0] max_conflicts;
                        logic [NUM_BANKS-1:0] serviced_this_cycle;
                        
                        max_conflicts = detect_conflicts(req_mask, req_addr);
                        current_uid <= req_uid;
                        // NOTE: Do NOT clear resp_rdata here - it contains accumulated data
                        // from the previous transaction that the writeback pipeline may still need
                        
                        if (CONFLICT_MODE >= 1 && max_conflicts > 1) begin
                            $display("SHARED_MEM [%0t] BANK CONFLICT detected: %0d-way (ReqID %h)", 
                                     $time, max_conflicts, req_uid);
                        end
                        
                        if (CONFLICT_MODE == 2 && max_conflicts > 1) begin
                            $display("SHARED_MEM [%0t] CONFLICT DETECTED. Checks=%d Cycles=%d", $time, max_conflicts, max_conflicts);
                            service_threads(req_mask, req_we, req_addr, req_wdata, 0, serviced_this_cycle);
                            latched_we <= req_we;
                            latched_addr <= req_addr;
                            latched_wdata <= req_wdata;
                            pending_mask <= req_mask & ~serviced_this_cycle;
                            cycles_remaining <= max_conflicts - 1;
                            conflict_cycles <= max_conflicts;
                            state <= REPLAY;
                        end else begin
                            service_threads(req_mask, req_we, req_addr, req_wdata, 1, serviced_this_cycle);
                            conflict_cycles <= 1;
                            last_serviced_uid <= req_uid;
                        end
                    end
                end
                
                REPLAY: begin
                    logic [NUM_BANKS-1:0] serviced_this_cycle;
                    $display("SHARED_MEM [%0t] REPLAY. Rem=%d Stall=%b", $time, cycles_remaining, stall_cpu);
                    service_threads(pending_mask, latched_we, latched_addr, latched_wdata, 0, serviced_this_cycle);
                    
                    pending_mask <= pending_mask & ~serviced_this_cycle;
                    cycles_remaining <= cycles_remaining - 1;
                    
                    if (cycles_remaining == 1 || (pending_mask & ~serviced_this_cycle) == 0) begin
                        state <= IDLE;
                        last_serviced_uid <= current_uid;
                    end
                end
            endcase
        end
    end

    // Busy signal (Debug/Status)
    assign busy = (state == REPLAY);
    
    // Stall Signal (Logic Control)
    // Stall IF:
    // 1. REPLAY state AND NOT finishing this cycle
    // 2. IDLE state AND Valid New Request AND Needs Serialization
    
    logic is_new_req;
    assign is_new_req = (req_valid && req_uid != last_serviced_uid);
    
    logic [7:0] idle_conflicts;
    assign idle_conflicts = detect_conflicts(req_mask, req_addr);
    
    always_comb begin
        stall_cpu = 0;
        if (state == REPLAY) begin
            // Stall fully until we return to IDLE (Safest)
            stall_cpu = 1;
        end
        // NOTE: Do NOT stall in IDLE state (even for conflicts)
        // The first cycle must always proceed to avoid deadlock
    end

endmodule

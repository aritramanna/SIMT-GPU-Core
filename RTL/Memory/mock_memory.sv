`timescale 1ns/1ps

module mock_memory
#(
    parameter ADDR_WIDTH = 32,
    parameter DATA_WIDTH = 32,
    parameter LINE_SIZE  = 128, // Bytes
    parameter MEM_SIZE   = 33554432 // 32MB
)(
    input  logic clk,
    input  logic rst_n,

    // Request Interface (Non-Blocking)
    input  logic req_valid,
    input  logic [4:0] req_warp_id,
    input  logic [15:0] req_transaction_id,  // Transaction ID for OoO completion
    input  logic req_we,
    input  logic [31:0] req_addr,   // Word Aligned? Coalesced Base?
    // For simplicity, let's assume the Core sends the BASE address (line aligned)
    // or we just mask it here. 
    input  logic [1023:0] req_wdata, // Full Line Write
    input  logic [31:0]   req_mask,  // Word Mask
    output logic req_ready,

    // Response Interface
    output logic resp_valid,
    output logic [4:0] resp_warp_id,
    output logic [15:0] resp_transaction_id, // Echo back transaction ID
    output logic [1023:0] resp_rdata
);

    // ---------------------------------------------------------
    // 1. Memory Array (Associative, Sparse 32MB)
    // ---------------------------------------------------------
    // Using associative array to model large memory without allocating it all
    logic [1023:0] mem [int];

    // Function to get line index
    function automatic int get_line_idx(logic [31:0] addr);
        return int'(addr >> 7); // Divide by 128 (Line Size)
    endfunction

    // ---------------------------------------------------------
    // 2. Request Queue (FIFO)
    // ---------------------------------------------------------
    typedef struct packed {
        logic [15:0] transaction_id;
        logic [4:0]  warp_id;
        logic        we;
        logic [31:0] addr;
        logic [1023:0] wdata;
        logic [31:0]   mask;
        int          delay; // Assigned upon entry
    } packet_t;

    packet_t queue [$]; // Queue of packets
    packet_t pending_pkt;
    logic    pending_valid;
    int      current_delay;

    // Pseudo-Random Generator for Delay
    logic [2:0] lfsr;
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) lfsr <= 3'b101;
        else lfsr <= {lfsr[1:0], lfsr[2] ^ lfsr[1]};
    end

    // ---------------------------------------------------------
    // 3. Logic
    // ---------------------------------------------------------
    
    // Accept Requests
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            // Reset logic
            queue = {};
        end else begin
            if (req_valid) begin
                packet_t new_pkt;
                new_pkt.transaction_id = req_transaction_id;
                new_pkt.warp_id = req_warp_id;
                new_pkt.we      = req_we;
                new_pkt.addr    = req_addr;
                new_pkt.wdata   = req_wdata;
                new_pkt.mask    = req_mask;
                // Delay 2..7 cycles
                // LFSR (3 bits) = 0..7. 
                // Map to 2..7: (Val % 6) + 2
                new_pkt.delay   = (lfsr % 6) + 2; 
                
                queue.push_back(new_pkt);
            end
        end
    end

    assign req_ready = 1; // Infinite Queue for Mock

    // Process Queue
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            pending_valid <= 0;
            resp_valid <= 0;
            current_delay <= 0;
            // Memory must NOT be cleared on reset to support backdoor init
        end else begin
            // Default Pulsed Output
            resp_valid <= 0;

            if (pending_valid) begin
                if (current_delay > 0) begin
                    current_delay <= current_delay - 1;
                end else begin
                    // Done waiting, Execute!
                    int idx;
                    idx = get_line_idx(pending_pkt.addr);

                    if (pending_pkt.we) begin
                        // WRITE with Mask
                        // If line doesn't exist, initialize it first
                        if (!mem.exists(idx)) mem[idx] = '0;

                        for (int i=0; i<32; i++) begin
                            if (pending_pkt.mask[i]) begin
                                mem[idx][i*32 +: 32] = pending_pkt.wdata[i*32 +: 32];
                            end
                        end
                        // Send Write Ack (Reuse resp_valid)
                        resp_valid          <= 1;
                        resp_warp_id        <= pending_pkt.warp_id;
                        resp_transaction_id <= pending_pkt.transaction_id;
                        resp_rdata          <= '0; // Don't care data
                    end else begin
                        // READ
                        resp_valid          <= 1;
                        resp_warp_id        <= pending_pkt.warp_id;
                        resp_transaction_id <= pending_pkt.transaction_id;
                        // Return 0 if not initialized
                        if (mem.exists(idx)) begin
                            resp_rdata <= mem[idx];
                        end else begin
                            resp_rdata <= '0;
                        end
                    end
                    
                    pending_valid <= 0; // Done with this packet
                end
            end else if (queue.size() > 0) begin
                // Pop Next
                pending_pkt   = queue.pop_front();
                pending_valid <= 1;
                current_delay <= pending_pkt.delay;
            end
        end
    end

endmodule

`timescale 1ns/1ps

//=============================================================================
// Generic Synchronous FIFO
//=============================================================================
// Parameterized FIFO with type T support for any data type
// Uses extra bit in pointers to distinguish full vs empty
//=============================================================================
module fifo #(
    parameter DEPTH = 8,
    parameter type T = logic [7:0]  // Generic type parameter
)(
    input  logic clk,
    input  logic rst_n,
    input  logic push,      // Write enable
    input  logic pop,       // Read enable
    input  T     data_in,   // Data to write
    output T     data_out,  // Data read (combinational peek at front)
    output logic full,
    output logic empty,
    output int   count      // Number of items in FIFO
);

    localparam PTR_WIDTH = $clog2(DEPTH);
    
    // Pointers with extra bit to detect full/empty
    logic [PTR_WIDTH:0] wr_ptr, rd_ptr;
    
    // FIFO storage
    T fifo_mem [DEPTH];
    
    // Wrap-around detection
    logic wrap_around;
    assign wrap_around = wr_ptr[PTR_WIDTH] ^ rd_ptr[PTR_WIDTH];
    
    // Full: MSBs different, lower bits same
    assign full = wrap_around && (wr_ptr[PTR_WIDTH-1:0] == rd_ptr[PTR_WIDTH-1:0]);
    
    // Empty: all bits same
    assign empty = (wr_ptr == rd_ptr);
    
    // Count calculation
    always_comb begin
        if (wr_ptr >= rd_ptr)
            count = wr_ptr - rd_ptr;
        else
            count = (DEPTH - rd_ptr) + wr_ptr;
    end
    
    // Peek at front (combinational read)
    assign data_out = fifo_mem[rd_ptr[PTR_WIDTH-1:0]];
    
    // Write logic
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            wr_ptr <= '0;
        end else if (push && !full) begin
            fifo_mem[wr_ptr[PTR_WIDTH-1:0]] <= data_in;
            wr_ptr <= wr_ptr + 1;
            //$display("FIFO [%0t] PUSH: Data=%h Count=%0d", $time, data_in, count+1);
        end
    end
    
    // Read logic
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            rd_ptr <= '0;
        end else if (pop && !empty) begin
            rd_ptr <= rd_ptr + 1;
            //$display("FIFO [%0t] POP: Data=%h Count=%0d Empty=%b", $time, data_out, count-1, empty);
        end else if (pop && empty) begin
             //$display("FIFO [%0t] POP FAIL: Empty. Count=%0d", $time, count);
        end
    end

endmodule
/**
 * @module sfu_single_cycle
 * @brief Single-Cycle Special Function Unit (SFU) with Linear Interpolation.
 * 
 * Architecture:
 * - Fully combinational (zero latency)
 * - Shared interpolation logic for all functions
 * - 1.15 Fixed-Point arithmetic
 * - Simple interface matching FPU style
 */
module sfu_single_cycle
#(
    parameter LUT_SIZE = 256
)(
    input  sfu_op_t     operation,  // Operation select
    input  logic [15:0] operand,    // Input operand (1.15 fixed-point)
    output logic [15:0] result      // Result (1.15 fixed-point)
);
    import sfu_pkg::*;

    localparam ADDR_BITS = $clog2(LUT_SIZE);
    localparam FRAC_BITS = 16 - ADDR_BITS;

    // --- Lookup Tables (ROMs) ---
    logic [15:0] rom_sin [0:LUT_SIZE-1];
    logic [15:0] rom_ex2 [0:LUT_SIZE-1];
    logic [15:0] rom_log [0:LUT_SIZE-1];
    logic [15:0] rom_rcp [0:LUT_SIZE-1];
    logic [15:0] rom_rsq [0:LUT_SIZE-1];
    logic [15:0] rom_sqrt[0:LUT_SIZE-1];
    logic [15:0] rom_tanh[0:LUT_SIZE-1];

    initial begin
        $readmemh("SFU_Tables/sine_table_256.hex", rom_sin);
        $readmemh("SFU_Tables/exp2_table_256.hex", rom_ex2);
        $readmemh("SFU_Tables/log2_table_256.hex", rom_log);
        $readmemh("SFU_Tables/rcp_table_256.hex",  rom_rcp);
        $readmemh("SFU_Tables/rsq_table_256.hex",  rom_rsq);
        $readmemh("SFU_Tables/sqrt_table_256.hex", rom_sqrt);
        $readmemh("SFU_Tables/tanh_table_256.hex", rom_tanh);
    end

    // --- Combinational Logic ---
    logic [ADDR_BITS-1:0] idx;
    logic [FRAC_BITS-1:0] frac;
    logic [15:0] val_a, val_b;
    logic signed [26:0] delta;
    logic [15:0] interpolated;

    always_comb begin
        // Default values to prevent latches
        idx = operand[15:16-ADDR_BITS];
        frac = operand[FRAC_BITS-1:0];
        val_a = 16'h0;
        val_b = 16'h0;

        // ROM lookup based on operation
        case (operation)
            SFU_COS: begin
                // cos(x) = sin(x + 90°). 90° = 0x4000 in 16-bit angle
                automatic logic [15:0] cos_angle;
                automatic logic [ADDR_BITS-1:0] cos_idx;
                cos_angle = operand + 16'h4000;
                cos_idx = cos_angle[15:16-ADDR_BITS];
                val_a = rom_sin[cos_idx];
                val_b = (cos_idx == ADDR_BITS'(LUT_SIZE-1)) ? rom_sin[0] : rom_sin[cos_idx + 1'b1];
            end

            SFU_SIN: begin
                val_a = rom_sin[idx];
                val_b = (idx == ADDR_BITS'(LUT_SIZE-1)) ? rom_sin[0] : rom_sin[idx + 1'b1];
            end

            SFU_EX2: begin
                val_a = rom_ex2[idx];
                val_b = (idx == ADDR_BITS'(LUT_SIZE-1)) ? 16'h7FFF : rom_ex2[idx + 1'b1];
            end

            SFU_LG2: begin
                val_a = rom_log[idx];
                val_b = (idx == ADDR_BITS'(LUT_SIZE-1)) ? 16'h7FFF : rom_log[idx + 1'b1];
            end

            SFU_RCP: begin
                val_a = rom_rcp[idx];
                val_b = (idx == ADDR_BITS'(LUT_SIZE-1)) ? 16'h4000 : rom_rcp[idx + 1'b1];
            end

            SFU_RSQ: begin
                val_a = rom_rsq[idx];
                val_b = (idx == ADDR_BITS'(LUT_SIZE-1)) ? 16'h5A82 : rom_rsq[idx + 1'b1];
            end

            SFU_SQRT: begin
                val_a = rom_sqrt[idx];
                val_b = (idx == ADDR_BITS'(LUT_SIZE-1)) ? 16'h5A82 : rom_sqrt[idx + 1'b1];
            end

            SFU_TANH: begin
                val_a = rom_tanh[idx];
                val_b = (idx == ADDR_BITS'(LUT_SIZE-1)) ? 16'h7FDD : rom_tanh[idx + 1'b1];
            end

            default: begin
                val_a = 16'h0;
                val_b = 16'h0;
            end
        endcase

        // Linear interpolation: result = val_a + frac * (val_b - val_a)
        delta = 27'($signed(17'($signed(val_b) - $signed(val_a))) * $signed({1'b0, frac}));
        interpolated = val_a + 16'(delta >>> FRAC_BITS);
    end

    assign result = interpolated;

endmodule

`timescale 1ns/1ps

/**
 * int_alu.sv
 *
 * Integer Arithmetic Logic Unit (Combinational)
 * Handles:
 * - Integer Arithmetic (ADD, SUB, MUL, DIV, REM)
 * - Logic (AND, OR, XOR, NOT)
 * - Shifts (SHL, SHR, SHA)
 * - Comparisons (SLT, SEQ, SLE)
 * - Bit Manipulation (POPC, CLZ, BREV, CNOT)
 * - Data Movement / Selection (SELP, TID)
 * - FPU/SFU Result Passthrough
 */

module int_alu #(
    parameter WARP_SIZE = 32
)(
    input  logic [7:0]         op, // 8-bit Opcode (Matches opcode_e values)
    input  logic [4:0]         warp,
    input  logic [31:0]        imm,
    input  logic [WARP_SIZE-1:0][31:0] rs1,
    input  logic [WARP_SIZE-1:0][31:0] rs2,
    input  logic [WARP_SIZE-1:0][31:0] rs3,
    input  logic [WARP_SIZE-1:0]       src_pred,
    
    output logic [WARP_SIZE-1:0][31:0] result
);
    // Import package to get enum values (OP_ADD, etc)
    import simt_pkg::*;

    function automatic int count_leading_zeros(input logic [31:0] val);
        int count = 0;
        for (int i = 31; i >= 0; i--) begin
            if (val[i]) break;
            count++;
        end
        return count;
    endfunction

    // Helper for ITOF (Re-used from original core)
    function automatic [31:0] double_to_float(input [63:0] d);
        logic sign;
        logic [10:0] exp;
        logic [51:0] mant;
        logic [7:0] new_exp;
        logic [22:0] new_mant;
        
        sign = d[63];
        exp = d[62:52];
        mant = d[51:0];
        
        if (exp == 0) begin
            return 32'b0;
        end else if (exp == 2047) begin
            return {sign, 8'hFF, 23'b0};
        end else begin
           // Simple conversion (no rounding modes handled here for now)
           int exp32 = exp - 1023 + 127;
           if (exp32 >= 255) return {sign, 8'hFF, 23'b0};
           if (exp32 <= 0) return 32'b0;
           
           new_exp = exp32[7:0];
           new_mant = mant[51:29];
           return {sign, new_exp, new_mant};
        end
    endfunction

    always_comb begin
        result = '0;
        
        // Use implicit comparison with imported enum values
        case (op)
            // Bit Manipulation
            OP_POPC: for (int l=0;l<WARP_SIZE;l++) result[l] = $countones(rs1[l]);
            OP_CLZ:  for (int l=0;l<WARP_SIZE;l++) result[l] = count_leading_zeros(rs1[l]);
            OP_BREV: for (int l=0;l<WARP_SIZE;l++) result[l] = {<<{rs1[l]}};
            OP_CNOT: for (int l=0;l<WARP_SIZE;l++) result[l] = (rs1[l] == 0) ? 32'd1 : 32'd0;
            
            // Negation
            OP_NEG:  for (int l=0;l<WARP_SIZE;l++) result[l] = -rs1[l];
            OP_FNEG: for (int l=0;l<WARP_SIZE;l++) result[l] = {~rs1[l][31], rs1[l][30:0]};

            // Predicate Set Operations (ISETP/FSETP handled in WB, pass result here)
            OP_ISETP: begin
                // Logic handled in MEM/WB - here we just pass comparison result
                for (int l=0; l<WARP_SIZE; l++) begin
                    case (imm[2:0]) 
                        3'd0: result[l] = (rs1[l] == rs2[l]) ? 32'd1 : 32'd0;
                        3'd1: result[l] = (rs1[l] != rs2[l]) ? 32'd1 : 32'd0;
                        3'd2: result[l] = ($signed(rs1[l]) < $signed(rs2[l])) ? 32'd1 : 32'd0;
                        3'd3: result[l] = ($signed(rs1[l]) <= $signed(rs2[l])) ? 32'd1 : 32'd0;
                        3'd4: result[l] = ($signed(rs1[l]) > $signed(rs2[l])) ? 32'd1 : 32'd0;
                        3'd5: result[l] = ($signed(rs1[l]) >= $signed(rs2[l])) ? 32'd1 : 32'd0;
                        default: result[l] = 0;
                    endcase
                end
            end

            OP_FSETP: begin
                for (int l=0; l<WARP_SIZE; l++) begin
                    logic a_sign, b_sign, a_lt_b, a_eq_b, a_gt_b;
                    logic [30:0] a_mag, b_mag;
                    a_sign = rs1[l][31]; b_sign = rs2[l][31];
                    a_mag = rs1[l][30:0]; b_mag = rs2[l][30:0];
                    
                    a_eq_b = (rs1[l] == rs2[l]) || (a_mag == 0 && b_mag == 0); // Handle +/- 0
                    if (a_sign != b_sign) a_lt_b = a_sign;
                    else a_lt_b = (a_sign == 0) ? (a_mag < b_mag) : (a_mag > b_mag);
                    a_gt_b = !a_lt_b && !a_eq_b;

                    case (imm[2:0])
                        3'd0: result[l] = a_eq_b ? 32'd1 : 32'd0;
                        3'd1: result[l] = !a_eq_b ? 32'd1 : 32'd0;
                        3'd2: result[l] = a_lt_b ? 32'd1 : 32'd0;
                        3'd3: result[l] = (a_lt_b || a_eq_b) ? 32'd1 : 32'd0;
                        3'd4: result[l] = a_gt_b ? 32'd1 : 32'd0;
                        3'd5: result[l] = (a_gt_b || a_eq_b) ? 32'd1 : 32'd0;
                        default: result[l] = 0;
                    endcase
                end
            end

            // Predicated Select
            OP_SELP: for (int l=0; l<WARP_SIZE; l++) result[l] = (src_pred[l]) ? rs1[l] : rs2[l];
            
            // Misc
            OP_TID:  for (int l=0;l<WARP_SIZE;l++) result[l] = l; 

            // Integer Arithmetic
            OP_ADD:  for (int l=0;l<WARP_SIZE;l++) result[l] = rs1[l] + rs2[l] + imm;
            OP_SUB:  for (int l=0;l<WARP_SIZE;l++) result[l] = rs1[l] - rs2[l] - imm;
            OP_MUL:  for (int l=0;l<WARP_SIZE;l++) result[l] = rs1[l] * (rs2[l] + imm);
            OP_IMAD: for (int l=0;l<WARP_SIZE;l++) result[l] = (rs1[l] * rs2[l]) + rs3[l];
            OP_IDIV: for (int l=0;l<WARP_SIZE;l++) result[l] = $signed(rs1[l]) / $signed(rs2[l] + imm);
            OP_IREM: for (int l=0;l<WARP_SIZE;l++) result[l] = $signed(rs1[l]) % $signed(rs2[l] + imm);
            OP_IABS: for (int l=0;l<WARP_SIZE;l++) result[l] = ($signed(rs1[l]) < 0) ? -$signed(rs1[l]) : rs1[l];
            OP_IMIN: for (int l=0;l<WARP_SIZE;l++) result[l] = ($signed(rs1[l]) < $signed(rs2[l] + imm)) ? rs1[l] : (rs2[l] + imm);
            OP_IMAX: for (int l=0;l<WARP_SIZE;l++) result[l] = ($signed(rs1[l]) > $signed(rs2[l] + imm)) ? rs1[l] : (rs2[l] + imm);
            
            // Move / Load Immediate
            OP_MOV:  for (int l=0;l<WARP_SIZE;l++) result[l] = rs1[l] | imm;

            // Logic
            OP_AND:  for (int l=0;l<WARP_SIZE;l++) result[l] = rs1[l] & (rs2[l] | imm);
            OP_OR:   for (int l=0;l<WARP_SIZE;l++) result[l] = rs1[l] | (rs2[l] | imm);
            OP_XOR:  for (int l=0;l<WARP_SIZE;l++) result[l] = rs1[l] ^ (rs2[l] | imm);
            OP_NOT:  for (int l=0;l<WARP_SIZE;l++) result[l] = ~rs1[l];

            // Shift
            OP_SHL:  for (int l=0;l<WARP_SIZE;l++) result[l] = rs1[l] << (rs2[l] + imm);
            OP_SHR:  for (int l=0;l<WARP_SIZE;l++) result[l] = rs1[l] >> (rs2[l] + imm);
            OP_SHA:  for (int l=0;l<WARP_SIZE;l++) result[l] = $signed(rs1[l]) >>> (rs2[l] + imm);

            // Comparisons
            OP_SLT:  
                for (int l=0;l<WARP_SIZE;l++) begin
                    result[l] = (rs1[l] < (rs2[l] + imm)) ? 1 : 0;
                end
            OP_SEQ:  for (int l=0;l<WARP_SIZE;l++) result[l] = (rs1[l] == (rs2[l] + imm)) ? 1 : 0;
            OP_SLE:  for (int l=0;l<WARP_SIZE;l++) result[l] = ($signed(rs1[l]) <= $signed(rs2[l] + imm)) ? 1 : 0;
            
            // FPU Ops Removed (Handled by FPU Pipeline)
            // OP_FADD, OP_FSUB, OP_FMUL, OP_FDIV, OP_FTOI: result = fpu_result;
            // OP_FFMA: result = fma_result;

            OP_ITOF: for (int l=0;l<WARP_SIZE;l++) result[l] = double_to_float($realtobits($itor($signed(rs1[l]))));
            
            // Float Min/Max
            OP_FABS: for (int l=0;l<WARP_SIZE;l++) result[l] = {1'b0, rs1[l][30:0]};
            OP_FMIN: for (int l=0;l<WARP_SIZE;l++) begin
                logic a_sign, b_sign, a_lt_b;
                logic [30:0] a_mag, b_mag;
                a_sign = rs1[l][31]; b_sign = rs2[l][31];
                a_mag = rs1[l][30:0]; b_mag = rs2[l][30:0];
                if (a_sign != b_sign) a_lt_b = a_sign;
                else a_lt_b = (a_sign == 0) ? (a_mag < b_mag) : (a_mag > b_mag);
                result[l] = a_lt_b ? rs1[l] : rs2[l];
            end
            OP_FMAX: for (int l=0;l<WARP_SIZE;l++) begin
                logic a_sign, b_sign, a_gt_b;
                logic [30:0] a_mag, b_mag;
                a_sign = rs1[l][31]; b_sign = rs2[l][31];
                a_mag = rs1[l][30:0]; b_mag = rs2[l][30:0];
                if (a_sign != b_sign) a_gt_b = !a_sign;
                else a_gt_b = (a_sign == 0) ? (a_mag > b_mag) : (a_mag < b_mag);
                result[l] = a_gt_b ? rs1[l] : rs2[l];
            end

            // SFU Ops Removed (Handled by FPU Pipeline)
            // OP_SFU_SIN, ... : result = sfu_result; 
            
            default: result = '0;
        endcase
    end

endmodule

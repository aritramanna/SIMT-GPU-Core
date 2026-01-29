`timescale 1ns/1ps

package simt_pkg;

    //=========================================================================
    // Core Configuration Constants (Defaults)
    //=========================================================================
    // These are default values - modules can override via parameters
    localparam WARP_SIZE      = 32;
    localparam NUM_WARPS      = 24;
    localparam NUM_REGS       = 64;
    localparam DIVERGENCE_STACK_DEPTH = 32;  // Divergence stack depth (SSY/JOIN)
    localparam RETURN_STACK_DEPTH = 8;  // Return address stack depth (CALL/RET)
    localparam MAX_PENDING_PER_WARP = 64; // Increased to support 32 threads/warp
    
    
    // Derived parameter (for default configuration)
    localparam WARP_ID_WIDTH  = $clog2(NUM_WARPS);  // 2 bits for 4 warps
    localparam REG_ADDR_WIDTH = $clog2(NUM_REGS);
    
    // Note: Package types use WARP_ID_WIDTH from the package defaults
    // Individual modules override NUM_WARPS and calculate their own WARP_ID_WIDTH

    //=========================================================================
    // Instruction Set Architecture
    //=========================================================================
    //
    //
    // | Group            | Instruction      | Example                    | Meaning (d=dest, a=rs1, b=rs2, c=rs3) |
    // | :---             | :---             | :---                       | :---                                  |
    // | **Arithmetic**   | ADD              | ADD R1, R2, R3             | d = a + b                             |
    // |                  | SUB              | SUB R1, R2, R3             | d = a - b                             |
    // |                  | MUL              | MUL R1, R2, R3             | d = a * b                             |
    // |                  | IMAD             | IMAD R1, R2, R3, R4        | d = a * b + c                         |
    // |                  | IDIV             | IDIV R1, R2, R3            | d = a / b (Signed)                    |
    // |                  | IREM             | IREM R1, R2, R3            | d = a % b (Signed)                    |
    // |                  | IABS             | IABS R1, R2                | d = |a|                             |
    // |                  | NEG              | NEG R1, R2                 | d = -a                                |
    // |                  | IMIN             | IMIN R1, R2, R3            | d = (a < b) ? a : b                   |
    // |                  | IMAX             | IMAX R1, R2, R3            | d = (a > b) ? a : b                   |
    // |                  | POPC             | POPC R1, R2                | d = count_ones(a)                     |
    // |                  | CLZ              | CLZ R1, R2                 | d = count_leading_zeros(a)            |
    // |                  | BREV             | BREV R1, R2                | d = reverse_bits(a)                   |
    // |                  | CNOT             | CNOT R1, R2                | d = (a == 0) ? 1 : 0                  |
    // | **Comparison**   | SLT              | SLT R1, R2, R3             | d = (a < b) ? 1 : 0                   |
    // |                  | SLE              | SLE R1, R2, R3             | d = (a <= b) ? 1 : 0                  |
    // |                  | SEQ              | SEQ R1, R2, R3             | d = (a == b) ? 1 : 0                  |
    // | **Logic**        | AND              | AND R1, R2, R3             | d = a & b                             |
    // |                  | OR               | OR R1, R2, R3              | d = a | b                            |
    // |                  | XOR              | XOR R1, R2, R3             | d = a ^ b                             |
    // |                  | NOT              | NOT R1, R2                 | d = ~a                                |
    // |                  | SHL              | SHL R1, R2, R3             | d = a << b                            |
    // |                  | SHR              | SHR R1, R2, R3             | d = a >> b (Logical)                  |
    // |                  | SHA              | SHA R1, R2, R3             | d = a >>> b (Arithmetic)              |
    // | **Float**        | FADD             | FADD R1, R2, R3            | d = a + b (IEEE 754)                  |
    // |                  | FSUB             | FSUB R1, R2, R3            | d = a - b                             |
    // |                  | FMUL             | FMUL R1, R2, R3            | d = a * b                             |
    // |                  | FDIV             | FDIV R1, R2, R3            | d = a / b                             |
    // |                  | FFMA             | FFMA R1, R2, R3, R4        | d = a * b + c                         |
    // |                  | FMIN             | FMIN R1, R2, R3            | d = min(a, b)                         |
    // |                  | FMAX             | FMAX R1, R2, R3            | d = max(a, b)                         |
    // |                  | FABS             | FABS R1, R2                | d = |a|                             |
    // |                  | FNEG             | FNEG R1, R2                | d = -a (Sign Flip)                    |
    // |                  | FTOI             | FTOI R1, R2                | d = (int)a                            |
    // |                  | ITOF             | ITOF R1, R2                | d = (float)a                          |
    // | **SFU**          | SIN              | SIN R1, R2                 | d = sin(a)                            |
    // |                  | COS              | COS R1, R2                 | d = cos(a)                            |
    // |                  | EX2              | EX2 R1, R2                 | d = 2^a                               |
    // |                  | LG2              | LG2 R1, R2                 | d = log2(a)                           |
    // |                  | RCP              | RCP R1, R2                 | d = 1/a                               |
    // |                  | RSQ              | RSQ R1, R2                 | d = 1/sqrt(a)                         |
    // |                  | SQRT             | SQRT R1, R2                | d = sqrt(a)                           |
    // |                  | TANH             | TANH R1, R2                | d = tanh(a)                           |
    // | **MOV**          | MOV              | MOV R1, R2                 | d = a                                 |
    // |                  |                  | MOV R1, imm                | d = imm                               |
    // | **Memory**       | LDR              | LDR R1, [R2 + imm]         | Load Word                             |
    // |                  | STR              | STR [R1 + imm], R2         | Store Word                            |
    // |                  | LDS              | LDS R1, [R2 (shared)]      | Load Shared Word                      |
    // |                  | STS              | STS [R1 (shared)], R2      | Store Shared Word                     |
    // | **Control**      | BRA              | @p BRA target              | if(p) pc = target                     |
    // |                  | BEQ              | BEQ R1, R2, target         | if(a==b) push; if(p) pc=target        |
    // |                  | BNE              | BNE R1, R2, target         | if(a!=b) push; if(p) pc=target        |
    // |                  | SSY              | SSY target                 | push_stack(target)                    |
    // |                  | JOIN             | JOIN                       | pop_stack()                           |
    // |                  | BAR              | BAR                        | Barrier Synchronization               |
    // |                  | EXIT             | EXIT                       | Terminate Warp                        |
    // |                  | CALL             | CALL target                | Function Call (push PC+1, jump)       |
    // |                  | RET              | RET                        | Function Return (pop, jump)           |
    // | **Predicate**    | ISETP            | ISETP.LT P1, R2, R3        | P1 = (a < b)                          |
    // |                  | FSETP            | FSETP.LT P1, R2, R3        | P1 = (float)(a < b)                   |
    // |                  | SELP             | SELP R1, R2, R3, P1        | d = P1 ? a : b                        |
    // | **Misc**         | TID              | TID R1                     | Get Lane ID (0-31)                    |
    // |                  | NOP              | NOP                        | No Operation                          |
    //

    typedef enum logic [7:0] {
        OP_NOP  = 8'h00, // No Operation
        OP_MOV  = 8'h07, // Move / Load Immediate
        OP_EXIT = 8'hFF, // Exit / Halt Warp

        // Integer Arithmetic
        OP_ADD  = 8'h01, // Integer Add
        OP_SUB  = 8'h02, // Integer Subtract
        OP_MUL  = 8'h03, // Integer Multiply
        OP_IMAD = 8'h05, // Integer Multiply-Add (a*b + c)
        OP_NEG  = 8'h06, // Integer Negation (New)
        OP_IDIV = 8'h36, // Integer Division (Signed)
        OP_IREM = 8'h37, // Integer Remainder (Signed)
        OP_IABS = 8'h38, // Integer Absolute Value
        OP_IMIN = 8'h39, // Integer Minimum (Signed)
        OP_IMAX = 8'h3A, // Integer Maximum (Signed)

        // Integer Comparison
        OP_SLT  = 8'h04, // Set Less Than
        OP_SLE  = 8'h70, // Set Less Equals
        OP_SEQ  = 8'h71, // Set Equals

        // Logic Operations
        OP_AND  = 8'h50, // Bitwise AND
        OP_OR   = 8'h51, // Bitwise OR
        OP_XOR  = 8'h52, // Bitwise XOR
        OP_NOT  = 8'h53, // Bitwise NOT

        // Shift Operations
        OP_SHL  = 8'h60, // Shift Left Logical
        OP_SHR  = 8'h61, // Shift Right Logical
        OP_SHA  = 8'h62, // Shift Right Arithmetic

        // Memory Operations
        OP_LDR  = 8'h10, // Load Word
        OP_STR  = 8'h11, // Store Word
        OP_LDS  = 8'h12, // Load Shared
        OP_STS  = 8'h13, // Store Shared

        // Control Flow
        OP_BEQ  = 8'h20, // Branch Equal (Divergence point)
        OP_BNE  = 8'h21, // Branch Not Equal
        OP_BRA  = 8'h22, // Unconditional Branch
        OP_SSY  = 8'h23, // Set Sync (Push Divergence Stack)
        OP_JOIN = 8'h24, // Join (Pop Divergence Stack)
        OP_BAR  = 8'h25, // Barrier Synchronization (Inter-Warp)

        // Misc
        OP_TID  = 8'h26, // Get Thread Identifier (Lane ID)
        OP_CALL = 8'h27, // Function Call (Push PC+1, Jump to target)
        OP_RET  = 8'h28, // Function Return (Pop return address)

        // FPU Operations
        OP_FADD = 8'h30, // Floating Point Add
        OP_FSUB = 8'h31, // Floating Point Subtract
        OP_FMUL = 8'h32, // Floating Point Multiply
        OP_FDIV = 8'h33, // Floating Point Divide
        OP_FMIN = 8'h3B, // Floating Point Minimum
        OP_FMAX = 8'h3C, // Floating Point Maximum
        OP_FABS = 8'h3D, // Floating Point Absolute Value
        OP_FTOI = 8'h34, // Float -> Int
        OP_FFMA = 8'h35, // Fused Multiply-Add
        OP_ITOF = 8'h3E, // Integer to Float
        OP_FNEG = 8'h54, // Floating Point Negation

        // Bit Manipulation
        OP_POPC = 8'h68, // Population Count
        OP_CLZ  = 8'h69, // Count Leading Zeros
        OP_BREV = 8'h6A, // Bit Reverse (Restored)
        OP_CNOT = 8'h6B, // C-Style Logical Negation (New)

        // Predicate Operations (New)
        OP_ISETP = 8'h80, // Integer Set Predicate
        OP_FSETP = 8'h81, // Float Set Predicate
        OP_SELP  = 8'h82, // Select with Predicate (d = p ? a : b)

        // SFU Operations (1.15 fixed-point)
        OP_SFU_SIN  = 8'h40,  // Sine
        OP_SFU_COS  = 8'h41,  // Cosine
        OP_SFU_EX2  = 8'h42,  // 2^x
        OP_SFU_LG2  = 8'h43,  // log2(x)
        OP_SFU_RCP  = 8'h44,  // 1/x (reciprocal)
        OP_SFU_RSQ  = 8'h45,  // 1/sqrt(x)
        OP_SFU_SQRT = 8'h46,  // sqrt(x)
        OP_SFU_TANH = 8'h47   // tanh(x)
    } opcode_t;
    
    // Functional Unit Categories
    typedef enum logic [1:0] {
        UNIT_ALU,   // Integer Arithmetic, Logic, Shift
        UNIT_FPU,   // Floating Point, SFU
        UNIT_LSU,   // Load/Store
        UNIT_CTRL   // Control Flow (Branches, Barriers)
    } unit_type_e;

    // Helper: Classify Opcode
    function automatic unit_type_e get_unit_type(opcode_t op);
        case (op)
            OP_LDR, OP_STR, OP_LDS, OP_STS: return UNIT_LSU;
            
            OP_FADD, OP_FSUB, OP_FMUL, OP_FDIV, OP_FFMA, OP_FTOI,
            OP_SFU_SIN, OP_SFU_COS, OP_SFU_EX2, OP_SFU_LG2,
            OP_SFU_RCP, OP_SFU_RSQ, OP_SFU_SQRT, OP_SFU_TANH: return UNIT_FPU;
            
            OP_BRA, OP_BEQ, OP_BNE, OP_SSY, OP_JOIN, OP_BAR, OP_EXIT, OP_CALL, OP_RET: return UNIT_CTRL;
            
            OP_MOV: return UNIT_ALU;

            default: return UNIT_ALU; // All others (ADD, SUB, BIT, ISETP, FSETP etc)
        endcase
    endfunction

    //=========================================================================
    // Pipeline Packet Structures
    //=========================================================================
    
    // Fetch -> Decode
    typedef struct packed {
        logic valid;
        logic [WARP_ID_WIDTH-1:0] warp;
        logic [31:0] pc;
        logic [63:0] inst;
        logic [1:0]  branch_tag;
    } if_id_t;

    // Decode -> Execute
    typedef struct packed {
        logic valid;
        logic [4:0] warp;
        logic [31:0] pc;
        opcode_t op;
        logic [7:0] rd;
        logic [31:0] imm;
        logic [WARP_SIZE-1:0] mask;
        logic [WARP_SIZE-1:0][31:0] rs1;
        logic [WARP_SIZE-1:0][31:0] rs2;
        logic [WARP_SIZE-1:0][31:0] rs3; // Added for FMA
        logic [3:0] pred_guard; // [3]=Neg, [2:0]=PredID
        logic [WARP_SIZE-1:0] src_pred; // Source Predicate Value (for SELP)
        // Fields for Operand Collector Banking Optimization
        logic [7:0] rs1_idx;
        logic [7:0] rs2_idx;
        logic [7:0] rs3_idx;
        logic [1:0] branch_tag; // Added for Branch Flushing
    } id_ex_t;

    // Execute -> Memory
    typedef struct packed {
        logic valid;
        logic [4:0] warp;
        opcode_t op;
        logic [7:0] rd;
        logic [WARP_SIZE-1:0] mask;
        logic [WARP_SIZE-1:0][31:0] alu;
        logic [WARP_SIZE-1:0][31:0] store_data;
        logic we;      // Write Enable for GPR
        logic we_pred; // Write Enable for Predicate Register
    } ex_mem_t;

    // Writeback Source Type (for Strict Ownership)
    typedef enum logic [1:0] {
        WB_ALU,
        WB_FPU,
        WB_MEM,    // Real Memory Response
        WB_SQUASH  // Shadow NOP / Squash (Low Priority)
    } wb_src_t;

    // Memory -> Writeback
    typedef struct packed {
        logic valid;
        wb_src_t src;  // Added for Ownership Tracking
        logic we;
        logic we_pred; // Write Enable for Predicates
        logic [4:0] warp;
        logic [7:0] rd;
        logic [WARP_SIZE-1:0] mask;
        logic [WARP_SIZE-1:0][31:0] result;
        logic last_split; // 1=Final split (clears Scoreboard), 0=Partial
    } mem_wb_t;

    // ALU Pipeline: EX -> WB
    typedef struct packed {
        logic valid;
        wb_src_t src;
        logic [4:0] warp;
        opcode_t op;
        logic [7:0] rd;
        logic [WARP_SIZE-1:0] mask;
        logic [WARP_SIZE-1:0][31:0] result;
        logic we;
        logic we_pred;
    } alu_wb_t;

    // LSU Pipeline: ADDR -> MEM (multi-cycle, async)
    typedef struct packed {
        logic valid;
        logic [4:0] warp;
        opcode_t op;
        logic [7:0] rd;
        logic [WARP_SIZE-1:0] mask;
        logic [WARP_SIZE-1:0][31:0] addresses;
        logic [WARP_SIZE-1:0][31:0] store_data;
    } lsu_mem_t;

    //=========================================================================
    // Warp Context / Status Structure
    //=========================================================================
    typedef enum logic [2:0] {
        W_IDLE,    // Inactive / Reset State
        W_READY,   // Ready to Fetch
        W_RUNNING, // Currently in pipeline (optional, or just READY)
        W_STALLED, // Generic Stall (e.g. Scoreboard)
        W_WAIT_MEM,// Memory Latency
        W_BARRIER, // Hit Barrier
        W_EXIT     // Terminated
    } warp_state_e;

    typedef struct packed {
        // Identity
        logic [WARP_ID_WIDTH-1:0] wid;
        logic [31:0]              pc;
        logic [WARP_SIZE-1:0]     active_mask;
        
        // State
        warp_state_e state;
        
        // Scoreboard (Tracks pending writes to registers)
        logic [NUM_REGS-1:0] reg_writes; 
        
        // Memory System State
        // logic has_pending_mem; // REMOVED: Dead State
        
        // Barrier
        logic at_barrier;
        
        // Control Flow Stack Pointer
        logic [$clog2(DIVERGENCE_STACK_DEPTH):0] stack_ptr;
        
        // Return Address Stack (for CALL/RET)
        logic [$clog2(RETURN_STACK_DEPTH):0] ret_ptr;
        
    } warp_status_t;

    //=========================================================================
    // MSHR (Miss Status Holding Register) Entry
    //=========================================================================
    // Tracks outstanding memory requests for out-of-order completion
    typedef struct packed {
        logic [15:0] transaction_id;           // Unique ID for request-response matching
        logic is_store;                        // 1=Store, 0=Load
        logic [7:0] rd;                        // Destination register (for loads)
        logic [WARP_SIZE-1:0] mask;            // Active thread mask
        logic [WARP_SIZE-1:0][31:0] addresses; // Per-thread addresses for scatter/gather
        logic last_split;                      // 1=Final split for this instruction (clears Scoreboard)
    } pending_load_t;

    // Replay Queue Entry Structure
    typedef struct packed {
        logic valid;
        logic [WARP_SIZE-1:0] pending_mask;
        logic [7:0] warp;
        logic [7:0] rd;
        opcode_t op; // Changed from logic [7:0] to opcode_t for type safety
        logic [WARP_SIZE-1:0][31:0] addresses;
        logic [WARP_SIZE-1:0][31:0] store_data;
    } replay_entry_t;

    // Shared Memory Pipeline Register (for 1-cycle latency)
    typedef struct packed {
        logic valid;
        logic [WARP_ID_WIDTH-1:0] warp;
        logic [REG_ADDR_WIDTH-1:0] rd;
        logic [WARP_SIZE-1:0] mask;
    } shared_wb_req_t;

    typedef struct packed {
        logic valid;
        logic [WARP_ID_WIDTH-1:0] warp;
        logic [REG_ADDR_WIDTH-1:0] rd;
        logic [WARP_SIZE-1:0] mask;
        logic [WARP_SIZE-1:0][31:0] data;
    } shared_wb_resp_t;

    // Function: Check if instruction is a memory operation
    function automatic logic is_memory_op(opcode_t op);
        return (op == OP_LDR || op == OP_STR || op == OP_LDS || op == OP_STS);
    endfunction

    // Function: Check if instruction is an ALU/compute operation  
    function automatic logic is_alu_op(opcode_t op);
        return !is_memory_op(op) && op != OP_NOP && op != OP_EXIT;
    endfunction

    // Function: Check if two consecutive instructions can dual-issue (Kepler-style)
    function automatic logic can_dual_issue(
        input logic [63:0] inst_a,
        input logic [63:0] inst_b
    );
        opcode_t op_a, op_b;
        logic [7:0] rd_a, rs1_b, rs2_b, rs3_b;
        logic raw_hazard, structural_hazard, control_hazard;
        
        op_a = opcode_t'(inst_a[63:56]);
        op_b = opcode_t'(inst_b[63:56]);
        
        rd_a = inst_a[55:48];
        rs1_b = inst_b[47:40];
        rs2_b = inst_b[39:32];
        rs3_b = inst_b[27:20];
        
        // Check RAW hazard (inst_b reads what inst_a writes)
        raw_hazard = 0;
        if (op_a inside {OP_ADD,OP_SUB,OP_MUL,OP_IMAD,OP_SLT,OP_LDR,OP_TID,
                        OP_FADD,OP_FSUB,OP_FMUL,OP_FDIV,OP_FTOI,
                        OP_SFU_SIN,OP_SFU_COS,OP_SFU_EX2,OP_SFU_LG2,
                        OP_SFU_RCP,OP_SFU_RSQ,OP_SFU_SQRT,OP_SFU_TANH,
                        OP_FFMA,OP_IDIV,OP_IREM,OP_IMIN,OP_IMAX,OP_IABS,
                        OP_FMIN,OP_FMAX,OP_FABS,OP_AND,OP_OR,OP_XOR,OP_NOT,
                        OP_SHL,OP_SHR,OP_SHA,OP_POPC,OP_CLZ,OP_BREV,OP_ITOF,
                        OP_NEG,OP_FNEG,OP_CNOT,OP_SLE,OP_SEQ,OP_ISETP,OP_FSETP,OP_SELP,OP_MOV,OP_LDS}) begin
            if (rd_a == rs1_b || rd_a == rs2_b || rd_a == rs3_b) begin
                raw_hazard = 1;
            end
        end
        
        // Check WAW hazard (inst_b writes what inst_a writes)
        // Both imply writing to RD (some ops like CMP don't write RD? No, they write Preds)
        // We assume ops with Valid RD write to it.
        if (get_unit_type(op_a) != UNIT_CTRL && get_unit_type(op_b) != UNIT_CTRL) begin
             if (rd_a == inst_b[55:48]) raw_hazard = 1; // Reuse raw_hazard flag or add waw_hazard
        end
        
        // Check structural hazard (both need LSU - only 1 LSU per warp)
        structural_hazard = 0;
        if (is_memory_op(op_a) && is_memory_op(op_b)) begin
            structural_hazard = 1;
        end

        // Check structural hazard: Separate Functional Unit FIFOs (ALU/CTRL, LSU, FPU)
        // Each FIFO has only 1 push port per cycle.
        if (get_unit_type(op_a) == get_unit_type(op_b)) begin
            structural_hazard = 1;
        end
        
        // Special Case: UNIT_CTRL also uses UNIT_ALU resources/fifo
        if ((get_unit_type(op_a) == UNIT_ALU && get_unit_type(op_b) == UNIT_CTRL) ||
            (get_unit_type(op_a) == UNIT_CTRL && get_unit_type(op_b) == UNIT_ALU)) begin
            structural_hazard = 1;
        end
        
        // Check control flow hazard (can't dual-issue after branch/exit)
        control_hazard = 0;
        if (op_a inside {OP_BRA,OP_BEQ,OP_BNE,OP_JOIN,OP_EXIT,OP_BAR,OP_SSY,OP_CALL,OP_RET}) begin
            control_hazard = 1;
        end
        
        // Can dual-issue if no hazards
        can_dual_issue = !raw_hazard && !structural_hazard && !control_hazard;
    endfunction

endpackage

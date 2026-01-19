package sfu_pkg;
    typedef enum logic [2:0] {
        SFU_SIN = 3'b000,
        SFU_COS = 3'b001,
        SFU_EX2 = 3'b010,
        SFU_LG2 = 3'b011,
        SFU_RCP = 3'b100,
        SFU_RSQ = 3'b101,
        SFU_SQRT = 3'b110,
        SFU_TANH = 3'b111
    } sfu_op_t;
endpackage

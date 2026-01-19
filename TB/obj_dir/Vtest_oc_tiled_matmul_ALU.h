// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_oc_tiled_matmul.h for the primary calling header

#ifndef VERILATED_VTEST_OC_TILED_MATMUL_ALU_H_
#define VERILATED_VTEST_OC_TILED_MATMUL_ALU_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtest_oc_tiled_matmul__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest_oc_tiled_matmul_ALU final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(Operation,3,0);
    VL_IN8(Exception,0,0);
    VL_IN8(Overflow,0,0);
    VL_IN8(Underflow,0,0);
    CData/*0:0*/ __PVT__Mul_Exception;
    CData/*0:0*/ __PVT__Mul_Overflow;
    CData/*0:0*/ __PVT__Mul_Underflow;
    VL_OUT8(Exception__out,0,0);
    VL_OUT8(Exception__en,0,0);
    VL_OUT8(Overflow__out,0,0);
    VL_OUT8(Overflow__en,0,0);
    VL_OUT8(Underflow__out,0,0);
    VL_OUT8(Underflow__en,0,0);
    CData/*0:0*/ __PVT__MuI__DOT__sign;
    CData/*0:0*/ __PVT__MuI__DOT__zero;
    CData/*0:0*/ __PVT__DuI__DOT__END__DOT__Exception;
    CData/*0:0*/ __PVT__DuI__DOT__END__DOT__sign;
    CData/*0:0*/ __PVT__DuI__DOT__END__DOT__zero;
    CData/*4:0*/ __PVT__IuF__DOT__clz;
    SData/*8:0*/ __PVT__MuI__DOT__exponent;
    SData/*8:0*/ __PVT__DuI__DOT__END__DOT__exponent;
    VL_IN(a_operand,31,0);
    VL_IN(b_operand,31,0);
    VL_IN(ALU_Output,31,0);
    IData/*31:0*/ __PVT__Div_A;
    IData/*31:0*/ __PVT__Div_B;
    IData/*31:0*/ __PVT__Floating_Point;
    VL_OUT(ALU_Output__out,31,0);
    VL_OUT(ALU_Output__en,31,0);
    IData/*23:0*/ __PVT__FuI__DOT__Integer_Value;
    IData/*31:0*/ __PVT__IuF__DOT__val;
    IData/*22:0*/ __PVT__IuF__DOT__mantissa;
    IData/*31:0*/ __PVT__IuF__DOT__shifted;
    VlWide<32>/*1023:0*/ __VdfgRegularize_hebeb780c_0_114;
    QData/*34:0*/ __VdfgRegularize_hc373ca9b_0_16;
    QData/*47:0*/ __PVT__MuI__DOT__product_normalised;
    QData/*47:0*/ __PVT__DuI__DOT__END__DOT__product_normalised;

    // INTERNAL VARIABLES
    Vtest_oc_tiled_matmul__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtest_oc_tiled_matmul_ALU(Vtest_oc_tiled_matmul__Syms* symsp, const char* v__name);
    ~Vtest_oc_tiled_matmul_ALU();
    VL_UNCOPYABLE(Vtest_oc_tiled_matmul_ALU);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

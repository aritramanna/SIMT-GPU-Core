// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_oc_tiled_matmul.h for the primary calling header

#ifndef VERILATED_VTEST_OC_TILED_MATMUL_FMA_H_
#define VERILATED_VTEST_OC_TILED_MATMUL_FMA_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtest_oc_tiled_matmul__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest_oc_tiled_matmul_FMA final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_OUT8(Exception,0,0);
    CData/*0:0*/ add_inst__DOT____VdfgRegularize_ha816c9b8_0_1;
    CData/*4:0*/ __PVT__add_inst__DOT__pe__DOT__shift;
    VL_IN(a_operand,31,0);
    VL_IN(b_operand,31,0);
    VL_IN(c_operand,31,0);
    VL_OUT(result,31,0);
    IData/*24:0*/ __PVT__add_inst__DOT__significand_add;
    IData/*24:0*/ __PVT__add_inst__DOT__subtraction_diff;
    VlWide<3>/*64:0*/ add_inst__DOT____VdfgRegularize_ha816c9b8_0_0;

    // INTERNAL VARIABLES
    Vtest_oc_tiled_matmul__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtest_oc_tiled_matmul_FMA(Vtest_oc_tiled_matmul__Syms* symsp, const char* v__name);
    ~Vtest_oc_tiled_matmul_FMA();
    VL_UNCOPYABLE(Vtest_oc_tiled_matmul_FMA);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

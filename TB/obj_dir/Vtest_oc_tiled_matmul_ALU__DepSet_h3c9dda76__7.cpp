// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_oc_tiled_matmul.h for the primary calling header

#include "Vtest_oc_tiled_matmul__pch.h"
#include "Vtest_oc_tiled_matmul_ALU.h"
#include "Vtest_oc_tiled_matmul__Syms.h"

VL_INLINE_OPT VlCoroutine Vtest_oc_tiled_matmul_ALU___eval_initial__TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__21__KET____DOT__fpu_inst__Vtiming__0(Vtest_oc_tiled_matmul_ALU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_oc_tiled_matmul_ALU___eval_initial__TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__21__KET____DOT__fpu_inst__Vtiming__0\n"); );
    Vtest_oc_tiled_matmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_ha33e207c__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( test_oc_tiled_matmul.dut.fpu_lane[21].fpu_inst.a_operand)", 
                                                                "../RTL/Converter.v", 
                                                                224);
        co_await vlSymsp->TOP.__VdlySched.delay(0x3e8ULL, 
                                                nullptr, 
                                                "../RTL/Converter.v", 
                                                225);
    }
}

VL_INLINE_OPT void Vtest_oc_tiled_matmul_ALU___nba_sequent__TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__21__KET____DOT__fpu_inst__0(Vtest_oc_tiled_matmul_ALU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_oc_tiled_matmul_ALU___nba_sequent__TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__21__KET____DOT__fpu_inst__0\n"); );
    Vtest_oc_tiled_matmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __PVT__Add_Sub_A;
    __PVT__Add_Sub_A = 0;
    IData/*31:0*/ __PVT__Add_Sub_B;
    __PVT__Add_Sub_B = 0;
    IData/*31:0*/ __PVT__Mul_A;
    __PVT__Mul_A = 0;
    IData/*31:0*/ __PVT__Mul_B;
    __PVT__Mul_B = 0;
    CData/*0:0*/ __PVT__Add_Sub_Exception;
    __PVT__Add_Sub_Exception = 0;
    CData/*0:0*/ __PVT__AddBar_Sub;
    __PVT__AddBar_Sub = 0;
    QData/*63:0*/ __VdfgRegularize_hc373ca9b_0_1;
    __VdfgRegularize_hc373ca9b_0_1 = 0;
    VlWide<3>/*64:0*/ __VdfgRegularize_hc373ca9b_0_2;
    VL_ZERO_W(65, __VdfgRegularize_hc373ca9b_0_2);
    QData/*63:0*/ __VdfgRegularize_hc373ca9b_0_4;
    __VdfgRegularize_hc373ca9b_0_4 = 0;
    QData/*63:0*/ __VdfgRegularize_hc373ca9b_0_6;
    __VdfgRegularize_hc373ca9b_0_6 = 0;
    VlWide<3>/*64:0*/ __VdfgRegularize_hc373ca9b_0_8;
    VL_ZERO_W(65, __VdfgRegularize_hc373ca9b_0_8);
    CData/*0:0*/ __PVT__AuI__DOT__operation_sub_addBar;
    __PVT__AuI__DOT__operation_sub_addBar = 0;
    CData/*0:0*/ __PVT__AuI__DOT__output_sign;
    __PVT__AuI__DOT__output_sign = 0;
    CData/*7:0*/ __PVT__AuI__DOT__exponent_diff;
    __PVT__AuI__DOT__exponent_diff = 0;
    IData/*23:0*/ __PVT__AuI__DOT__significand_b_add_sub;
    __PVT__AuI__DOT__significand_b_add_sub = 0;
    IData/*24:0*/ __PVT__AuI__DOT__significand_add;
    __PVT__AuI__DOT__significand_add = 0;
    IData/*24:0*/ __PVT__AuI__DOT__significand_sub;
    __PVT__AuI__DOT__significand_sub = 0;
    IData/*24:0*/ __PVT__AuI__DOT__subtraction_diff;
    __PVT__AuI__DOT__subtraction_diff = 0;
    CData/*0:0*/ __PVT__AuI__DOT__perform;
    __PVT__AuI__DOT__perform = 0;
    VlWide<3>/*64:0*/ AuI__DOT____VdfgRegularize_ha816c9b8_0_0;
    VL_ZERO_W(65, AuI__DOT____VdfgRegularize_ha816c9b8_0_0);
    CData/*0:0*/ AuI__DOT____VdfgRegularize_ha816c9b8_0_1;
    AuI__DOT____VdfgRegularize_ha816c9b8_0_1 = 0;
    IData/*24:0*/ AuI__DOT____VdfgRegularize_ha816c9b8_0_2;
    AuI__DOT____VdfgRegularize_ha816c9b8_0_2 = 0;
    CData/*4:0*/ __PVT__AuI__DOT__pe__DOT__shift;
    __PVT__AuI__DOT__pe__DOT__shift = 0;
    QData/*47:0*/ __PVT__MuI__DOT__product;
    __PVT__MuI__DOT__product = 0;
    QData/*47:0*/ __PVT__DuI__DOT__x0__DOT__product_normalised;
    __PVT__DuI__DOT__x0__DOT__product_normalised = 0;
    IData/*31:0*/ __PVT__DuI__DOT__X0__DOT__a_operand;
    __PVT__DuI__DOT__X0__DOT__a_operand = 0;
    IData/*31:0*/ __PVT__DuI__DOT__X0__DOT__result;
    __PVT__DuI__DOT__X0__DOT__result = 0;
    CData/*7:0*/ __PVT__DuI__DOT__X0__DOT__exponent_diff;
    __PVT__DuI__DOT__X0__DOT__exponent_diff = 0;
    IData/*23:0*/ __PVT__DuI__DOT__X0__DOT__significand_b_add_sub;
    __PVT__DuI__DOT__X0__DOT__significand_b_add_sub = 0;
    IData/*24:0*/ __PVT__DuI__DOT__X0__DOT__significand_add;
    __PVT__DuI__DOT__X0__DOT__significand_add = 0;
    IData/*24:0*/ __PVT__DuI__DOT__X0__DOT__significand_sub;
    __PVT__DuI__DOT__X0__DOT__significand_sub = 0;
    IData/*24:0*/ __PVT__DuI__DOT__X0__DOT__subtraction_diff;
    __PVT__DuI__DOT__X0__DOT__subtraction_diff = 0;
    CData/*0:0*/ __PVT__DuI__DOT__X0__DOT__perform;
    __PVT__DuI__DOT__X0__DOT__perform = 0;
    VlWide<3>/*64:0*/ DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0;
    VL_ZERO_W(65, DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0);
    CData/*0:0*/ DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_1;
    DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_1 = 0;
    IData/*24:0*/ DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_2;
    DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_2 = 0;
    CData/*4:0*/ __PVT__DuI__DOT__X0__DOT__pe__DOT__shift;
    __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 0;
    CData/*0:0*/ __PVT__DuI__DOT__X1__DOT__M1__DOT__zero;
    __PVT__DuI__DOT__X1__DOT__M1__DOT__zero = 0;
    SData/*8:0*/ __PVT__DuI__DOT__X1__DOT__M1__DOT__exponent;
    __PVT__DuI__DOT__X1__DOT__M1__DOT__exponent = 0;
    QData/*47:0*/ __PVT__DuI__DOT__X1__DOT__M1__DOT__product;
    __PVT__DuI__DOT__X1__DOT__M1__DOT__product = 0;
    QData/*47:0*/ __PVT__DuI__DOT__X1__DOT__M1__DOT__product_normalised;
    __PVT__DuI__DOT__X1__DOT__M1__DOT__product_normalised = 0;
    IData/*31:0*/ __PVT__DuI__DOT__X1__DOT__A1__DOT__result;
    __PVT__DuI__DOT__X1__DOT__A1__DOT__result = 0;
    CData/*7:0*/ __PVT__DuI__DOT__X1__DOT__A1__DOT__exponent_diff;
    __PVT__DuI__DOT__X1__DOT__A1__DOT__exponent_diff = 0;
    IData/*23:0*/ __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_b_add_sub;
    __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_b_add_sub = 0;
    IData/*24:0*/ __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_add;
    __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_add = 0;
    IData/*24:0*/ __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub;
    __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub = 0;
    IData/*24:0*/ __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff;
    __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff = 0;
    CData/*0:0*/ __PVT__DuI__DOT__X1__DOT__A1__DOT__perform;
    __PVT__DuI__DOT__X1__DOT__A1__DOT__perform = 0;
    VlWide<3>/*64:0*/ DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0;
    VL_ZERO_W(65, DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0);
    CData/*0:0*/ DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_1;
    DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_1 = 0;
    IData/*24:0*/ DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_2;
    DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_2 = 0;
    CData/*4:0*/ __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift;
    __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 0;
    CData/*0:0*/ __PVT__DuI__DOT__X1__DOT__M2__DOT__Exception;
    __PVT__DuI__DOT__X1__DOT__M2__DOT__Exception = 0;
    CData/*0:0*/ __PVT__DuI__DOT__X1__DOT__M2__DOT__sign;
    __PVT__DuI__DOT__X1__DOT__M2__DOT__sign = 0;
    CData/*0:0*/ __PVT__DuI__DOT__X1__DOT__M2__DOT__zero;
    __PVT__DuI__DOT__X1__DOT__M2__DOT__zero = 0;
    SData/*8:0*/ __PVT__DuI__DOT__X1__DOT__M2__DOT__exponent;
    __PVT__DuI__DOT__X1__DOT__M2__DOT__exponent = 0;
    QData/*47:0*/ __PVT__DuI__DOT__X1__DOT__M2__DOT__product;
    __PVT__DuI__DOT__X1__DOT__M2__DOT__product = 0;
    QData/*47:0*/ __PVT__DuI__DOT__X1__DOT__M2__DOT__product_normalised;
    __PVT__DuI__DOT__X1__DOT__M2__DOT__product_normalised = 0;
    IData/*31:0*/ __PVT__DuI__DOT__X2__DOT__M1__DOT__a_operand;
    __PVT__DuI__DOT__X2__DOT__M1__DOT__a_operand = 0;
    CData/*0:0*/ __PVT__DuI__DOT__X2__DOT__M1__DOT__zero;
    __PVT__DuI__DOT__X2__DOT__M1__DOT__zero = 0;
    SData/*8:0*/ __PVT__DuI__DOT__X2__DOT__M1__DOT__exponent;
    __PVT__DuI__DOT__X2__DOT__M1__DOT__exponent = 0;
    QData/*47:0*/ __PVT__DuI__DOT__X2__DOT__M1__DOT__product;
    __PVT__DuI__DOT__X2__DOT__M1__DOT__product = 0;
    QData/*47:0*/ __PVT__DuI__DOT__X2__DOT__M1__DOT__product_normalised;
    __PVT__DuI__DOT__X2__DOT__M1__DOT__product_normalised = 0;
    IData/*31:0*/ __PVT__DuI__DOT__X2__DOT__A1__DOT__result;
    __PVT__DuI__DOT__X2__DOT__A1__DOT__result = 0;
    CData/*7:0*/ __PVT__DuI__DOT__X2__DOT__A1__DOT__exponent_diff;
    __PVT__DuI__DOT__X2__DOT__A1__DOT__exponent_diff = 0;
    IData/*23:0*/ __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_b_add_sub;
    __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_b_add_sub = 0;
    IData/*24:0*/ __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_add;
    __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_add = 0;
    IData/*24:0*/ __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub;
    __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub = 0;
    IData/*24:0*/ __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff;
    __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff = 0;
    CData/*0:0*/ __PVT__DuI__DOT__X2__DOT__A1__DOT__perform;
    __PVT__DuI__DOT__X2__DOT__A1__DOT__perform = 0;
    VlWide<3>/*64:0*/ DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0;
    VL_ZERO_W(65, DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0);
    CData/*0:0*/ DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_1;
    DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_1 = 0;
    IData/*24:0*/ DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_2;
    DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_2 = 0;
    CData/*4:0*/ __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift;
    __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 0;
    CData/*0:0*/ __PVT__DuI__DOT__X2__DOT__M2__DOT__Exception;
    __PVT__DuI__DOT__X2__DOT__M2__DOT__Exception = 0;
    CData/*0:0*/ __PVT__DuI__DOT__X2__DOT__M2__DOT__sign;
    __PVT__DuI__DOT__X2__DOT__M2__DOT__sign = 0;
    CData/*0:0*/ __PVT__DuI__DOT__X2__DOT__M2__DOT__zero;
    __PVT__DuI__DOT__X2__DOT__M2__DOT__zero = 0;
    SData/*8:0*/ __PVT__DuI__DOT__X2__DOT__M2__DOT__exponent;
    __PVT__DuI__DOT__X2__DOT__M2__DOT__exponent = 0;
    QData/*47:0*/ __PVT__DuI__DOT__X2__DOT__M2__DOT__product;
    __PVT__DuI__DOT__X2__DOT__M2__DOT__product = 0;
    QData/*47:0*/ __PVT__DuI__DOT__X2__DOT__M2__DOT__product_normalised;
    __PVT__DuI__DOT__X2__DOT__M2__DOT__product_normalised = 0;
    IData/*31:0*/ __PVT__DuI__DOT__X3__DOT__M1__DOT__a_operand;
    __PVT__DuI__DOT__X3__DOT__M1__DOT__a_operand = 0;
    CData/*0:0*/ __PVT__DuI__DOT__X3__DOT__M1__DOT__zero;
    __PVT__DuI__DOT__X3__DOT__M1__DOT__zero = 0;
    SData/*8:0*/ __PVT__DuI__DOT__X3__DOT__M1__DOT__exponent;
    __PVT__DuI__DOT__X3__DOT__M1__DOT__exponent = 0;
    QData/*47:0*/ __PVT__DuI__DOT__X3__DOT__M1__DOT__product;
    __PVT__DuI__DOT__X3__DOT__M1__DOT__product = 0;
    QData/*47:0*/ __PVT__DuI__DOT__X3__DOT__M1__DOT__product_normalised;
    __PVT__DuI__DOT__X3__DOT__M1__DOT__product_normalised = 0;
    IData/*31:0*/ __PVT__DuI__DOT__X3__DOT__A1__DOT__result;
    __PVT__DuI__DOT__X3__DOT__A1__DOT__result = 0;
    CData/*7:0*/ __PVT__DuI__DOT__X3__DOT__A1__DOT__exponent_diff;
    __PVT__DuI__DOT__X3__DOT__A1__DOT__exponent_diff = 0;
    IData/*23:0*/ __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_b_add_sub;
    __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_b_add_sub = 0;
    IData/*24:0*/ __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_add;
    __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_add = 0;
    IData/*24:0*/ __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub;
    __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub = 0;
    IData/*24:0*/ __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff;
    __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff = 0;
    CData/*0:0*/ __PVT__DuI__DOT__X3__DOT__A1__DOT__perform;
    __PVT__DuI__DOT__X3__DOT__A1__DOT__perform = 0;
    VlWide<3>/*64:0*/ DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0;
    VL_ZERO_W(65, DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0);
    CData/*0:0*/ DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_1;
    DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_1 = 0;
    IData/*24:0*/ DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_2;
    DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_2 = 0;
    CData/*4:0*/ __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift;
    __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 0;
    CData/*0:0*/ __PVT__DuI__DOT__X3__DOT__M2__DOT__Exception;
    __PVT__DuI__DOT__X3__DOT__M2__DOT__Exception = 0;
    CData/*0:0*/ __PVT__DuI__DOT__X3__DOT__M2__DOT__sign;
    __PVT__DuI__DOT__X3__DOT__M2__DOT__sign = 0;
    CData/*0:0*/ __PVT__DuI__DOT__X3__DOT__M2__DOT__zero;
    __PVT__DuI__DOT__X3__DOT__M2__DOT__zero = 0;
    SData/*8:0*/ __PVT__DuI__DOT__X3__DOT__M2__DOT__exponent;
    __PVT__DuI__DOT__X3__DOT__M2__DOT__exponent = 0;
    QData/*47:0*/ __PVT__DuI__DOT__X3__DOT__M2__DOT__product;
    __PVT__DuI__DOT__X3__DOT__M2__DOT__product = 0;
    QData/*47:0*/ __PVT__DuI__DOT__X3__DOT__M2__DOT__product_normalised;
    __PVT__DuI__DOT__X3__DOT__M2__DOT__product_normalised = 0;
    IData/*31:0*/ __PVT__DuI__DOT__END__DOT__a_operand;
    __PVT__DuI__DOT__END__DOT__a_operand = 0;
    QData/*47:0*/ __PVT__DuI__DOT__END__DOT__product;
    __PVT__DuI__DOT__END__DOT__product = 0;
    IData/*31:0*/ __PVT__IuF__DOT__unnamedblk1__DOT__i;
    __PVT__IuF__DOT__unnamedblk1__DOT__i = 0;
    CData/*7:0*/ __VdfgRegularize_hc373ca9b_1_0;
    __VdfgRegularize_hc373ca9b_1_0 = 0;
    QData/*47:0*/ __VdfgRegularize_hc373ca9b_1_1;
    __VdfgRegularize_hc373ca9b_1_1 = 0;
    QData/*47:0*/ __VdfgRegularize_hc373ca9b_1_2;
    __VdfgRegularize_hc373ca9b_1_2 = 0;
    QData/*47:0*/ __VdfgRegularize_hc373ca9b_1_3;
    __VdfgRegularize_hc373ca9b_1_3 = 0;
    IData/*30:0*/ __VdfgRegularize_hebeb780c_0_81;
    __VdfgRegularize_hebeb780c_0_81 = 0;
    IData/*30:0*/ __VdfgRegularize_hebeb780c_0_82;
    __VdfgRegularize_hebeb780c_0_82 = 0;
    IData/*30:0*/ __VdfgRegularize_hebeb780c_0_83;
    __VdfgRegularize_hebeb780c_0_83 = 0;
    // Body
    vlSelfRef.a_operand = ((vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x57U] 
                            << 2U) | (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x56U] 
                                      >> 0x1eU));
    vlSelfRef.__PVT__IuF__DOT__val = ((0x20000000U 
                                       & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x57U])
                                       ? ((IData)(1U) 
                                          + (~ ((vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x57U] 
                                                 << 2U) 
                                                | (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x56U] 
                                                   >> 0x1eU))))
                                       : ((vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x57U] 
                                           << 2U) | 
                                          (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x56U] 
                                           >> 0x1eU)));
    __VdfgRegularize_hc373ca9b_0_1 = (((QData)((IData)(
                                                       ((vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x57U] 
                                                         << 2U) 
                                                        | (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x56U] 
                                                           >> 0x1eU)))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x37U] 
                                                                     << 2U) 
                                                                    | (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x36U] 
                                                                       >> 0x1eU)))));
    vlSelfRef.__PVT__Floating_Point = (((9U == (IData)(vlSymsp->TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__0__KET____DOT__fpu_inst.Operation))
                                         ? ((vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x57U] 
                                             << 2U) 
                                            | (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x56U] 
                                               >> 0x1eU))
                                         : 0U) & ((9U 
                                                   == (IData)(vlSymsp->TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__0__KET____DOT__fpu_inst.Operation))
                                                   ? 0xffffffffU
                                                   : 0U));
    vlSelfRef.__PVT__IuF__DOT__clz = 0x1fU;
    __PVT__IuF__DOT__unnamedblk1__DOT__i = 0x1fU;
    {
        while (VL_LTES_III(32, 0U, __PVT__IuF__DOT__unnamedblk1__DOT__i)) {
            if ((1U & (vlSelfRef.__PVT__IuF__DOT__val 
                       >> (0x1fU & __PVT__IuF__DOT__unnamedblk1__DOT__i)))) {
                vlSelfRef.__PVT__IuF__DOT__clz = (0x1fU 
                                                  & ((IData)(0x1fU) 
                                                     - __PVT__IuF__DOT__unnamedblk1__DOT__i));
                goto __Vlabel0;
            }
            __PVT__IuF__DOT__unnamedblk1__DOT__i = 
                (__PVT__IuF__DOT__unnamedblk1__DOT__i 
                 - (IData)(1U));
        }
        __Vlabel0: ;
    }
    __VdfgRegularize_hc373ca9b_0_4 = ((1U == (IData)(vlSymsp->TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__0__KET____DOT__fpu_inst.Operation))
                                       ? __VdfgRegularize_hc373ca9b_0_1
                                       : 0ULL);
    if ((0xaU == (IData)(vlSymsp->TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__0__KET____DOT__fpu_inst.Operation))) {
        __VdfgRegularize_hc373ca9b_0_2[0U] = ((IData)(__VdfgRegularize_hc373ca9b_0_1) 
                                              << 1U);
        __VdfgRegularize_hc373ca9b_0_2[1U] = (((IData)(__VdfgRegularize_hc373ca9b_0_1) 
                                               >> 0x1fU) 
                                              | ((IData)(
                                                         (__VdfgRegularize_hc373ca9b_0_1 
                                                          >> 0x20U)) 
                                                 << 1U));
        __VdfgRegularize_hc373ca9b_0_2[2U] = ((IData)(
                                                      (__VdfgRegularize_hc373ca9b_0_1 
                                                       >> 0x20U)) 
                                              >> 0x1fU);
    } else {
        __VdfgRegularize_hc373ca9b_0_2[0U] = 0U;
        __VdfgRegularize_hc373ca9b_0_2[1U] = 0U;
        __VdfgRegularize_hc373ca9b_0_2[2U] = 0U;
    }
    if ((3U == (IData)(vlSymsp->TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__0__KET____DOT__fpu_inst.Operation))) {
        __VdfgRegularize_hc373ca9b_0_8[0U] = (1U | 
                                              ((IData)(__VdfgRegularize_hc373ca9b_0_1) 
                                               << 1U));
        __VdfgRegularize_hc373ca9b_0_8[1U] = (((IData)(__VdfgRegularize_hc373ca9b_0_1) 
                                               >> 0x1fU) 
                                              | ((IData)(
                                                         (__VdfgRegularize_hc373ca9b_0_1 
                                                          >> 0x20U)) 
                                                 << 1U));
        __VdfgRegularize_hc373ca9b_0_8[2U] = ((IData)(
                                                      (__VdfgRegularize_hc373ca9b_0_1 
                                                       >> 0x20U)) 
                                              >> 0x1fU);
    } else {
        __VdfgRegularize_hc373ca9b_0_8[0U] = 0U;
        __VdfgRegularize_hc373ca9b_0_8[1U] = 0U;
        __VdfgRegularize_hc373ca9b_0_8[2U] = 0U;
    }
    __VdfgRegularize_hc373ca9b_0_6 = ((2U == (IData)(vlSymsp->TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__0__KET____DOT__fpu_inst.Operation))
                                       ? __VdfgRegularize_hc373ca9b_0_1
                                       : 0ULL);
    if ((0x7fU == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                            >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 0U;
    } else if ((0x80U == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x400000U & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x81U == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x600000U & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x82U == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x700000U & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x83U == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x780000U & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x84U == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x7c0000U & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x85U == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x7e0000U & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x86U == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x7f0000U & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x87U == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x7f8000U & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x88U == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x7fc000U & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x89U == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x7fe000U & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x8aU == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x7ff000U & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x8bU == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x7ff800U & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x8cU == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x7ffc00U & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x8dU == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x7ffe00U & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x8eU == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x7fff00U & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x8fU == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x7fff80U & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x90U == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x7fffc0U & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x91U == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x7fffe0U & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x92U == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x7ffff0U & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x93U == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x7ffff8U & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x94U == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x7ffffcU & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x95U == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x7ffffeU & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x96U <= (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x7fffffU & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x7eU >= (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 0U;
    }
    if ((0U == vlSelfRef.__PVT__IuF__DOT__val)) {
        vlSelfRef.__PVT__IuF__DOT__mantissa = 0U;
    } else {
        vlSelfRef.__PVT__IuF__DOT__shifted = (vlSelfRef.__PVT__IuF__DOT__val 
                                              << (IData)(vlSelfRef.__PVT__IuF__DOT__clz));
        vlSelfRef.__PVT__IuF__DOT__mantissa = (0x7fffffU 
                                               & (vlSelfRef.__PVT__IuF__DOT__shifted 
                                                  >> 8U));
    }
    __PVT__Mul_A = ((IData)((__VdfgRegularize_hc373ca9b_0_4 
                             >> 0x20U)) & (IData)((
                                                   ((1U 
                                                     == (IData)(vlSymsp->TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__0__KET____DOT__fpu_inst.Operation))
                                                     ? 0xffffffffffffffffULL
                                                     : 0ULL) 
                                                   >> 0x20U)));
    __PVT__Mul_B = ((IData)(__VdfgRegularize_hc373ca9b_0_4) 
                    & (IData)(((1U == (IData)(vlSymsp->TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__0__KET____DOT__fpu_inst.Operation))
                                ? 0xffffffffffffffffULL
                                : 0ULL)));
    __PVT__AddBar_Sub = (1U & ((__VdfgRegularize_hc373ca9b_0_2[0U] 
                                & ((0xaU == (IData)(vlSymsp->TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__0__KET____DOT__fpu_inst.Operation))
                                    ? 0xffffffffU : 0U)) 
                               | (__VdfgRegularize_hc373ca9b_0_8[0U] 
                                  & ((3U == (IData)(vlSymsp->TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__0__KET____DOT__fpu_inst.Operation))
                                      ? 0xffffffffU
                                      : 0U))));
    __PVT__Add_Sub_A = ((((__VdfgRegularize_hc373ca9b_0_2[2U] 
                           << 0x1fU) | (__VdfgRegularize_hc373ca9b_0_2[1U] 
                                        >> 1U)) & (0x80000000U 
                                                   | (((0xaU 
                                                        == (IData)(vlSymsp->TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__0__KET____DOT__fpu_inst.Operation))
                                                        ? 0xffffffffU
                                                        : 0U) 
                                                      >> 1U))) 
                        | (((__VdfgRegularize_hc373ca9b_0_8[2U] 
                             << 0x1fU) | (__VdfgRegularize_hc373ca9b_0_8[1U] 
                                          >> 1U)) & 
                           (0x80000000U | (((3U == (IData)(vlSymsp->TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__0__KET____DOT__fpu_inst.Operation))
                                             ? 0xffffffffU
                                             : 0U) 
                                           >> 1U))));
    __PVT__Add_Sub_B = ((((__VdfgRegularize_hc373ca9b_0_2[1U] 
                           << 0x1fU) | (__VdfgRegularize_hc373ca9b_0_2[0U] 
                                        >> 1U)) & (
                                                   (((0xaU 
                                                      == (IData)(vlSymsp->TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__0__KET____DOT__fpu_inst.Operation))
                                                      ? 0xffffffffU
                                                      : 0U) 
                                                    << 0x1fU) 
                                                   | (((0xaU 
                                                        == (IData)(vlSymsp->TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__0__KET____DOT__fpu_inst.Operation))
                                                        ? 0xffffffffU
                                                        : 0U) 
                                                      >> 1U))) 
                        | (((__VdfgRegularize_hc373ca9b_0_8[1U] 
                             << 0x1fU) | (__VdfgRegularize_hc373ca9b_0_8[0U] 
                                          >> 1U)) & 
                           ((((3U == (IData)(vlSymsp->TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__0__KET____DOT__fpu_inst.Operation))
                               ? 0xffffffffU : 0U) 
                             << 0x1fU) | (((3U == (IData)(vlSymsp->TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__0__KET____DOT__fpu_inst.Operation))
                                            ? 0xffffffffU
                                            : 0U) >> 1U))));
    vlSelfRef.__PVT__Div_A = ((IData)((__VdfgRegularize_hc373ca9b_0_6 
                                       >> 0x20U)) & (IData)(
                                                            (((2U 
                                                               == (IData)(vlSymsp->TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__0__KET____DOT__fpu_inst.Operation))
                                                               ? 0xffffffffffffffffULL
                                                               : 0ULL) 
                                                             >> 0x20U)));
    vlSelfRef.__PVT__Div_B = ((IData)(__VdfgRegularize_hc373ca9b_0_6) 
                              & (IData)(((2U == (IData)(vlSymsp->TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__0__KET____DOT__fpu_inst.Operation))
                                          ? 0xffffffffffffffffULL
                                          : 0ULL)));
    vlSelfRef.__PVT__MuI__DOT__sign = ((__PVT__Mul_A 
                                        ^ __PVT__Mul_B) 
                                       >> 0x1fU);
    vlSelfRef.__PVT__Mul_Exception = ((0xffU == (0xffU 
                                                 & (__PVT__Mul_A 
                                                    >> 0x17U))) 
                                      | (0xffU == (0xffU 
                                                   & (__PVT__Mul_B 
                                                      >> 0x17U))));
    __PVT__MuI__DOT__product = (0xffffffffffffULL & 
                                ((QData)((IData)(((0U 
                                                   != 
                                                   (0xffU 
                                                    & (__PVT__Mul_A 
                                                       >> 0x17U)))
                                                   ? 
                                                  (0x800000U 
                                                   | (0x7fffffU 
                                                      & __PVT__Mul_A))
                                                   : 
                                                  (0x7fffffU 
                                                   & __PVT__Mul_A)))) 
                                 * (QData)((IData)(
                                                   ((0U 
                                                     != 
                                                     (0xffU 
                                                      & (__PVT__Mul_B 
                                                         >> 0x17U)))
                                                     ? 
                                                    (0x800000U 
                                                     | (0x7fffffU 
                                                        & __PVT__Mul_B))
                                                     : 
                                                    (0x7fffffU 
                                                     & __PVT__Mul_B))))));
    if (((0x7fffffffU & __PVT__Add_Sub_A) < (0x7fffffffU 
                                             & __PVT__Add_Sub_B))) {
        AuI__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
            = (IData)((((QData)((IData)(__PVT__Add_Sub_B)) 
                        << 0x20U) | (QData)((IData)(__PVT__Add_Sub_A))));
        AuI__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            = (IData)(((((QData)((IData)(__PVT__Add_Sub_B)) 
                         << 0x20U) | (QData)((IData)(__PVT__Add_Sub_A))) 
                       >> 0x20U));
        AuI__DOT____VdfgRegularize_ha816c9b8_0_0[2U] = 1U;
    } else {
        AuI__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
            = (IData)((((QData)((IData)(__PVT__Add_Sub_A)) 
                        << 0x20U) | (QData)((IData)(__PVT__Add_Sub_B))));
        AuI__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            = (IData)(((((QData)((IData)(__PVT__Add_Sub_A)) 
                         << 0x20U) | (QData)((IData)(__PVT__Add_Sub_B))) 
                       >> 0x20U));
        AuI__DOT____VdfgRegularize_ha816c9b8_0_0[2U] = 0U;
    }
    __VdfgRegularize_hc373ca9b_1_0 = (0xffU & ((vlSelfRef.__PVT__Div_A 
                                                >> 0x17U) 
                                               + ((IData)(0x7eU) 
                                                  - 
                                                  (vlSelfRef.__PVT__Div_B 
                                                   >> 0x17U))));
    __PVT__DuI__DOT__x0__DOT__product_normalised = 
        (0xffffffffffffULL & ((1U & (IData)((1ULL & 
                                             ((0x8b4b4bULL 
                                               * (0x800000ULL 
                                                  | (QData)((IData)(
                                                                    (0x7fffffU 
                                                                     & vlSelfRef.__PVT__Div_B))))) 
                                              >> 0x2fU))))
                               ? (0x8b4b4bULL * (0x800000ULL 
                                                 | (QData)((IData)(
                                                                   (0x7fffffU 
                                                                    & vlSelfRef.__PVT__Div_B)))))
                               : VL_SHIFTL_QQI(48,48,32, 
                                               (0x8b4b4bULL 
                                                * (0x800000ULL 
                                                   | (QData)((IData)(
                                                                     (0x7fffffU 
                                                                      & vlSelfRef.__PVT__Div_B))))), 1U)));
    vlSelfRef.__PVT__MuI__DOT__product_normalised = 
        (0xffffffffffffULL & ((1U & (IData)((__PVT__MuI__DOT__product 
                                             >> 0x2fU)))
                               ? __PVT__MuI__DOT__product
                               : VL_SHIFTL_QQI(48,48,32, __PVT__MuI__DOT__product, 1U)));
    vlSelfRef.__PVT__MuI__DOT__zero = ((~ (IData)(vlSelfRef.__PVT__Mul_Exception)) 
                                       & (0ULL == __PVT__MuI__DOT__product));
    vlSelfRef.__PVT__MuI__DOT__exponent = (0x1ffU & 
                                           ((((0xffU 
                                               & (__PVT__Mul_A 
                                                  >> 0x17U)) 
                                              + (0xffU 
                                                 & (__PVT__Mul_B 
                                                    >> 0x17U))) 
                                             - (IData)(0x7fU)) 
                                            + (1U & (IData)(
                                                            (__PVT__MuI__DOT__product 
                                                             >> 0x2fU)))));
    __PVT__Add_Sub_Exception = ((0xffU == (0xffU & 
                                           (AuI__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                            >> 0x17U))) 
                                | (0xffU == (0xffU 
                                             & (AuI__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                >> 0x17U))));
    AuI__DOT____VdfgRegularize_ha816c9b8_0_2 = ((0U 
                                                 != 
                                                 (0xffU 
                                                  & (AuI__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                     >> 0x17U)))
                                                 ? 
                                                (0x800000U 
                                                 | (0x7fffffU 
                                                    & AuI__DOT____VdfgRegularize_ha816c9b8_0_0[1U]))
                                                 : 
                                                (0x7fffffU 
                                                 & AuI__DOT____VdfgRegularize_ha816c9b8_0_0[1U]));
    AuI__DOT____VdfgRegularize_ha816c9b8_0_1 = ((AuI__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                 ^ 
                                                 AuI__DOT____VdfgRegularize_ha816c9b8_0_0[0U]) 
                                                >> 0x1fU);
    if (__PVT__AddBar_Sub) {
        __PVT__AuI__DOT__output_sign = (1U & ((1U & 
                                               AuI__DOT____VdfgRegularize_ha816c9b8_0_0[2U])
                                               ? (~ 
                                                  (AuI__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                   >> 0x1fU))
                                               : (AuI__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                  >> 0x1fU)));
        __PVT__AuI__DOT__operation_sub_addBar = (1U 
                                                 & (IData)(AuI__DOT____VdfgRegularize_ha816c9b8_0_1));
    } else {
        __PVT__AuI__DOT__output_sign = (1U & (AuI__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                              >> 0x1fU));
        __PVT__AuI__DOT__operation_sub_addBar = (1U 
                                                 & (~ (IData)(AuI__DOT____VdfgRegularize_ha816c9b8_0_1)));
    }
    __PVT__AuI__DOT__exponent_diff = (0xffU & (((AuI__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                 << 9U) 
                                                | (AuI__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                   >> 0x17U)) 
                                               - ((
                                                   AuI__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                   << 9U) 
                                                  | (AuI__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                     >> 0x17U))));
    __PVT__DuI__DOT__X0__DOT__a_operand = ((0ULL == 
                                            (0xffffffffffffULL 
                                             & (0x8b4b4bULL 
                                                * (0x800000ULL 
                                                   | (QData)((IData)(
                                                                     (0x7fffffU 
                                                                      & vlSelfRef.__PVT__Div_B)))))))
                                            ? 0x80000000U
                                            : ((1U 
                                                & ((((IData)(0x7fU) 
                                                     + 
                                                     (1U 
                                                      & (IData)(
                                                                (1ULL 
                                                                 & ((0x8b4b4bULL 
                                                                     * 
                                                                     (0x800000ULL 
                                                                      | (QData)((IData)(
                                                                                (0x7fffffU 
                                                                                & vlSelfRef.__PVT__Div_B))))) 
                                                                    >> 0x2fU))))) 
                                                    >> 8U) 
                                                   & ((~ 
                                                       (1U 
                                                        & (((IData)(0x7fU) 
                                                            + 
                                                            (1U 
                                                             & (IData)(
                                                                       (1ULL 
                                                                        & ((0x8b4b4bULL 
                                                                            * 
                                                                            (0x800000ULL 
                                                                             | (QData)((IData)(
                                                                                (0x7fffffU 
                                                                                & vlSelfRef.__PVT__Div_B))))) 
                                                                           >> 0x2fU))))) 
                                                           >> 7U))) 
                                                      & (0ULL 
                                                         != 
                                                         (0xffffffffffffULL 
                                                          & (0x8b4b4bULL 
                                                             * 
                                                             (0x800000ULL 
                                                              | (QData)((IData)(
                                                                                (0x7fffffU 
                                                                                & vlSelfRef.__PVT__Div_B))))))))))
                                                ? 0xff800000U
                                                : (
                                                   (1U 
                                                    & ((((IData)(0x7fU) 
                                                         + 
                                                         (1U 
                                                          & (IData)(
                                                                    (1ULL 
                                                                     & ((0x8b4b4bULL 
                                                                         * 
                                                                         (0x800000ULL 
                                                                          | (QData)((IData)(
                                                                                (0x7fffffU 
                                                                                & vlSelfRef.__PVT__Div_B))))) 
                                                                        >> 0x2fU))))) 
                                                        >> 8U) 
                                                       & ((0ULL 
                                                           != 
                                                           (0xffffffffffffULL 
                                                            & (0x8b4b4bULL 
                                                               * 
                                                               (0x800000ULL 
                                                                | (QData)((IData)(
                                                                                (0x7fffffU 
                                                                                & vlSelfRef.__PVT__Div_B))))))) 
                                                          & (((IData)(0x7fU) 
                                                              + 
                                                              (1U 
                                                               & (IData)(
                                                                         (1ULL 
                                                                          & ((0x8b4b4bULL 
                                                                              * 
                                                                              (0x800000ULL 
                                                                               | (QData)((IData)(
                                                                                (0x7fffffU 
                                                                                & vlSelfRef.__PVT__Div_B))))) 
                                                                             >> 0x2fU))))) 
                                                             >> 7U))))
                                                    ? 0x80000000U
                                                    : 
                                                   (0x80000000U 
                                                    | ((0x7f800000U 
                                                        & (((IData)(0x7fU) 
                                                            + 
                                                            (1U 
                                                             & (IData)(
                                                                       (1ULL 
                                                                        & ((0x8b4b4bULL 
                                                                            * 
                                                                            (0x800000ULL 
                                                                             | (QData)((IData)(
                                                                                (0x7fffffU 
                                                                                & vlSelfRef.__PVT__Div_B))))) 
                                                                           >> 0x2fU))))) 
                                                           << 0x17U)) 
                                                       | (0x7fffffU 
                                                          & ((IData)(
                                                                     (__PVT__DuI__DOT__x0__DOT__product_normalised 
                                                                      >> 0x18U)) 
                                                             + 
                                                             ((IData)(
                                                                      (__PVT__DuI__DOT__x0__DOT__product_normalised 
                                                                       >> 0x17U)) 
                                                              & (0U 
                                                                 != 
                                                                 (0x7fffffU 
                                                                  & (IData)(__PVT__DuI__DOT__x0__DOT__product_normalised)))))))))));
    vlSelfRef.__PVT__Mul_Overflow = (1U & (IData)((
                                                   (0x100U 
                                                    == 
                                                    (0x180U 
                                                     & (IData)(vlSelfRef.__PVT__MuI__DOT__exponent))) 
                                                   & (~ (IData)(vlSelfRef.__PVT__MuI__DOT__zero)))));
    vlSelfRef.__PVT__Mul_Underflow = (1U & (IData)(
                                                   ((0x180U 
                                                     == 
                                                     (0x180U 
                                                      & (IData)(vlSelfRef.__PVT__MuI__DOT__exponent))) 
                                                    & (~ (IData)(vlSelfRef.__PVT__MuI__DOT__zero)))));
    __PVT__AuI__DOT__significand_b_add_sub = (0xffffffU 
                                              & VL_SHIFTR_III(24,24,8, 
                                                              ((0U 
                                                                != 
                                                                (0xffU 
                                                                 & (AuI__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                                    >> 0x17U)))
                                                                ? 
                                                               (0x800000U 
                                                                | (0x7fffffU 
                                                                   & AuI__DOT____VdfgRegularize_ha816c9b8_0_0[0U]))
                                                                : 
                                                               (0x7fffffU 
                                                                & AuI__DOT____VdfgRegularize_ha816c9b8_0_0[0U])), (IData)(__PVT__AuI__DOT__exponent_diff)));
    __PVT__AuI__DOT__perform = ((0xffU & (AuI__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                          >> 0x17U)) 
                                == (0xffU & (((AuI__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                               << 9U) 
                                              | (AuI__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                 >> 0x17U)) 
                                             + (IData)(__PVT__AuI__DOT__exponent_diff))));
    if ((0x4034b4b5U > (0x7fffffffU & __PVT__DuI__DOT__X0__DOT__a_operand))) {
        DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
            = __PVT__DuI__DOT__X0__DOT__a_operand;
        DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[1U] = 0x4034b4b5U;
        DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[2U] = 1U;
    } else {
        DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
            = (IData)((0x4034b4b5ULL | ((QData)((IData)(__PVT__DuI__DOT__X0__DOT__a_operand)) 
                                        << 0x20U)));
        DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            = (IData)(((0x4034b4b5ULL | ((QData)((IData)(__PVT__DuI__DOT__X0__DOT__a_operand)) 
                                         << 0x20U)) 
                       >> 0x20U));
        DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[2U] = 0U;
    }
    __PVT__AuI__DOT__significand_add = (((IData)(__PVT__AuI__DOT__perform) 
                                         & (IData)(__PVT__AuI__DOT__operation_sub_addBar))
                                         ? (0x1ffffffU 
                                            & (AuI__DOT____VdfgRegularize_ha816c9b8_0_2 
                                               + __PVT__AuI__DOT__significand_b_add_sub))
                                         : 0U);
    __PVT__AuI__DOT__significand_sub = ((IData)(__PVT__AuI__DOT__perform)
                                         ? (0x1ffffffU 
                                            & (AuI__DOT____VdfgRegularize_ha816c9b8_0_2 
                                               + ((
                                                   (~ (IData)(__PVT__AuI__DOT__operation_sub_addBar)) 
                                                   & (IData)(__PVT__AuI__DOT__perform))
                                                   ? 
                                                  (0xffffffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (~ __PVT__AuI__DOT__significand_b_add_sub)))
                                                   : 0U)))
                                         : 0U);
    DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_2 
        = ((0U != (0xffU & (DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                            >> 0x17U))) ? (0x800000U 
                                           | (0x7fffffU 
                                              & DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[1U]))
            : (0x7fffffU & DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[1U]));
    DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_1 
        = ((DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            ^ DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[0U]) 
           >> 0x1fU);
    __PVT__DuI__DOT__X0__DOT__exponent_diff = (0xffU 
                                               & (((DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                    << 9U) 
                                                   | (DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                      >> 0x17U)) 
                                                  - 
                                                  ((DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                    << 9U) 
                                                   | (DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                      >> 0x17U))));
    if (((((((((0x1800000U == (0x1800000U & __PVT__AuI__DOT__significand_sub)) 
               | (0x1400000U == (0x1c00000U & __PVT__AuI__DOT__significand_sub))) 
              | (0x1200000U == (0x1e00000U & __PVT__AuI__DOT__significand_sub))) 
             | (0x1100000U == (0x1f00000U & __PVT__AuI__DOT__significand_sub))) 
            | (0x1080000U == (0x1f80000U & __PVT__AuI__DOT__significand_sub))) 
           | (0x1040000U == (0x1fc0000U & __PVT__AuI__DOT__significand_sub))) 
          | (0x1020000U == (0x1fe0000U & __PVT__AuI__DOT__significand_sub))) 
         | (0x1010000U == (0x1ff0000U & __PVT__AuI__DOT__significand_sub)))) {
        if ((0x1800000U == (0x1800000U & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & __PVT__AuI__DOT__significand_sub);
            __PVT__AuI__DOT__pe__DOT__shift = 0U;
        } else if ((0x1400000U == (0x1c00000U & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 1U));
            __PVT__AuI__DOT__pe__DOT__shift = 1U;
        } else if ((0x1200000U == (0x1e00000U & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 2U));
            __PVT__AuI__DOT__pe__DOT__shift = 2U;
        } else if ((0x1100000U == (0x1f00000U & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 3U));
            __PVT__AuI__DOT__pe__DOT__shift = 3U;
        } else if ((0x1080000U == (0x1f80000U & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 4U));
            __PVT__AuI__DOT__pe__DOT__shift = 4U;
        } else if ((0x1040000U == (0x1fc0000U & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 5U));
            __PVT__AuI__DOT__pe__DOT__shift = 5U;
        } else if ((0x1020000U == (0x1fe0000U & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 6U));
            __PVT__AuI__DOT__pe__DOT__shift = 6U;
        } else {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 7U));
            __PVT__AuI__DOT__pe__DOT__shift = 7U;
        }
    } else if (((((((((0x1008000U == (0x1ff8000U & __PVT__AuI__DOT__significand_sub)) 
                      | (0x1004000U == (0x1ffc000U 
                                        & __PVT__AuI__DOT__significand_sub))) 
                     | (0x1002000U == (0x1ffe000U & __PVT__AuI__DOT__significand_sub))) 
                    | (0x1001000U == (0x1fff000U & __PVT__AuI__DOT__significand_sub))) 
                   | (0x1000800U == (0x1fff800U & __PVT__AuI__DOT__significand_sub))) 
                  | (0x1000400U == (0x1fffc00U & __PVT__AuI__DOT__significand_sub))) 
                 | (0x1000200U == (0x1fffe00U & __PVT__AuI__DOT__significand_sub))) 
                | (0x1000100U == (0x1ffff00U & __PVT__AuI__DOT__significand_sub)))) {
        if ((0x1008000U == (0x1ff8000U & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 8U));
            __PVT__AuI__DOT__pe__DOT__shift = 8U;
        } else if ((0x1004000U == (0x1ffc000U & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 9U));
            __PVT__AuI__DOT__pe__DOT__shift = 9U;
        } else if ((0x1002000U == (0x1ffe000U & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 0xaU));
            __PVT__AuI__DOT__pe__DOT__shift = 0xaU;
        } else if ((0x1001000U == (0x1fff000U & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 0xbU));
            __PVT__AuI__DOT__pe__DOT__shift = 0xbU;
        } else if ((0x1000800U == (0x1fff800U & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 0xcU));
            __PVT__AuI__DOT__pe__DOT__shift = 0xcU;
        } else if ((0x1000400U == (0x1fffc00U & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 0xdU));
            __PVT__AuI__DOT__pe__DOT__shift = 0xdU;
        } else if ((0x1000200U == (0x1fffe00U & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 0xeU));
            __PVT__AuI__DOT__pe__DOT__shift = 0xeU;
        } else {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 0xfU));
            __PVT__AuI__DOT__pe__DOT__shift = 0xfU;
        }
    } else if (((((((((0x1000080U == (0x1ffff80U & __PVT__AuI__DOT__significand_sub)) 
                      | (0x1000040U == (0x1ffffc0U 
                                        & __PVT__AuI__DOT__significand_sub))) 
                     | (0x1000020U == (0x1ffffe0U & __PVT__AuI__DOT__significand_sub))) 
                    | (0x1000010U == (0x1fffff0U & __PVT__AuI__DOT__significand_sub))) 
                   | (0x1000008U == (0x1fffff8U & __PVT__AuI__DOT__significand_sub))) 
                  | (0x1000004U == (0x1fffffcU & __PVT__AuI__DOT__significand_sub))) 
                 | (0x1000002U == (0x1fffffeU & __PVT__AuI__DOT__significand_sub))) 
                | (0x1000001U == __PVT__AuI__DOT__significand_sub))) {
        if ((0x1000080U == (0x1ffff80U & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 0x10U));
            __PVT__AuI__DOT__pe__DOT__shift = 0x10U;
        } else if ((0x1000040U == (0x1ffffc0U & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 0x11U));
            __PVT__AuI__DOT__pe__DOT__shift = 0x11U;
        } else if ((0x1000020U == (0x1ffffe0U & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 0x12U));
            __PVT__AuI__DOT__pe__DOT__shift = 0x12U;
        } else if ((0x1000010U == (0x1fffff0U & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 0x13U));
            __PVT__AuI__DOT__pe__DOT__shift = 0x13U;
        } else if ((0x1000008U == (0x1fffff8U & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 0x14U));
            __PVT__AuI__DOT__pe__DOT__shift = 0x14U;
        } else if ((0x1000004U == (0x1fffffcU & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 0x15U));
            __PVT__AuI__DOT__pe__DOT__shift = 0x15U;
        } else if ((0x1000002U == (0x1fffffeU & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 0x16U));
            __PVT__AuI__DOT__pe__DOT__shift = 0x16U;
        } else {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 0x17U));
            __PVT__AuI__DOT__pe__DOT__shift = 0x17U;
        }
    } else if ((0x1000000U == __PVT__AuI__DOT__significand_sub)) {
        __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                             & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 0x18U));
        __PVT__AuI__DOT__pe__DOT__shift = 0x18U;
    } else {
        __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                             & ((IData)(1U) 
                                                + (~ __PVT__AuI__DOT__significand_sub)));
        __PVT__AuI__DOT__pe__DOT__shift = 0U;
    }
    __PVT__DuI__DOT__X0__DOT__significand_b_add_sub 
        = (0xffffffU & VL_SHIFTR_III(24,24,8, ((0U 
                                                != 
                                                (0xffU 
                                                 & (DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                    >> 0x17U)))
                                                ? (0x800000U 
                                                   | (0x7fffffU 
                                                      & DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[0U]))
                                                : (0x7fffffU 
                                                   & DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[0U])), (IData)(__PVT__DuI__DOT__X0__DOT__exponent_diff)));
    __PVT__DuI__DOT__X0__DOT__perform = ((0xffU & (
                                                   DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                   >> 0x17U)) 
                                         == (0xffU 
                                             & (((DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                  << 9U) 
                                                 | (DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                    >> 0x17U)) 
                                                + (IData)(__PVT__DuI__DOT__X0__DOT__exponent_diff))));
    vlSelfRef.__VdfgRegularize_hc373ca9b_0_16 = (((QData)((IData)(__PVT__Add_Sub_Exception)) 
                                                  << 0x22U) 
                                                 | (QData)((IData)(
                                                                   ((IData)(__PVT__Add_Sub_Exception)
                                                                     ? 0U
                                                                     : 
                                                                    ((IData)(__PVT__AuI__DOT__operation_sub_addBar)
                                                                      ? 
                                                                     (((IData)(__PVT__AuI__DOT__output_sign) 
                                                                       << 0x1fU) 
                                                                      | ((0x7f800000U 
                                                                          & ((((AuI__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                                                << 9U) 
                                                                               | (AuI__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                                                >> 0x17U)) 
                                                                              + 
                                                                              (1U 
                                                                               & (__PVT__AuI__DOT__significand_add 
                                                                                >> 0x18U))) 
                                                                             << 0x17U)) 
                                                                         | (0x7fffffU 
                                                                            & ((0x1000000U 
                                                                                & __PVT__AuI__DOT__significand_add)
                                                                                ? 
                                                                               (__PVT__AuI__DOT__significand_add 
                                                                                >> 1U)
                                                                                : __PVT__AuI__DOT__significand_add))))
                                                                      : 
                                                                     (((IData)(__PVT__AuI__DOT__output_sign) 
                                                                       << 0x1fU) 
                                                                      | ((0x7f800000U 
                                                                          & ((((AuI__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                                                << 9U) 
                                                                               | (AuI__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                                                >> 0x17U)) 
                                                                              - (IData)(__PVT__AuI__DOT__pe__DOT__shift)) 
                                                                             << 0x17U)) 
                                                                         | (0x7fffffU 
                                                                            & __PVT__AuI__DOT__subtraction_diff))))))));
    __PVT__DuI__DOT__X0__DOT__significand_add = (((~ (IData)(DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_1)) 
                                                  & (IData)(__PVT__DuI__DOT__X0__DOT__perform))
                                                  ? 
                                                 (0x1ffffffU 
                                                  & (DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_2 
                                                     + __PVT__DuI__DOT__X0__DOT__significand_b_add_sub))
                                                  : 0U);
    __PVT__DuI__DOT__X0__DOT__significand_sub = ((IData)(__PVT__DuI__DOT__X0__DOT__perform)
                                                  ? 
                                                 (0x1ffffffU 
                                                  & (DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_2 
                                                     + 
                                                     (((IData)(DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_1) 
                                                       & (IData)(__PVT__DuI__DOT__X0__DOT__perform))
                                                       ? 
                                                      (0xffffffU 
                                                       & ((IData)(1U) 
                                                          + 
                                                          (~ __PVT__DuI__DOT__X0__DOT__significand_b_add_sub)))
                                                       : 0U)))
                                                  : 0U);
    if (((((((((0x1800000U == (0x1800000U & __PVT__DuI__DOT__X0__DOT__significand_sub)) 
               | (0x1400000U == (0x1c00000U & __PVT__DuI__DOT__X0__DOT__significand_sub))) 
              | (0x1200000U == (0x1e00000U & __PVT__DuI__DOT__X0__DOT__significand_sub))) 
             | (0x1100000U == (0x1f00000U & __PVT__DuI__DOT__X0__DOT__significand_sub))) 
            | (0x1080000U == (0x1f80000U & __PVT__DuI__DOT__X0__DOT__significand_sub))) 
           | (0x1040000U == (0x1fc0000U & __PVT__DuI__DOT__X0__DOT__significand_sub))) 
          | (0x1020000U == (0x1fe0000U & __PVT__DuI__DOT__X0__DOT__significand_sub))) 
         | (0x1010000U == (0x1ff0000U & __PVT__DuI__DOT__X0__DOT__significand_sub)))) {
        if ((0x1800000U == (0x1800000U & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & __PVT__DuI__DOT__X0__DOT__significand_sub);
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 0U;
        } else if ((0x1400000U == (0x1c00000U & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 1U));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 1U;
        } else if ((0x1200000U == (0x1e00000U & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 2U));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 2U;
        } else if ((0x1100000U == (0x1f00000U & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 3U));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 3U;
        } else if ((0x1080000U == (0x1f80000U & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 4U));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 4U;
        } else if ((0x1040000U == (0x1fc0000U & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 5U));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 5U;
        } else if ((0x1020000U == (0x1fe0000U & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 6U));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 6U;
        } else {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 7U));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 7U;
        }
    } else if (((((((((0x1008000U == (0x1ff8000U & __PVT__DuI__DOT__X0__DOT__significand_sub)) 
                      | (0x1004000U == (0x1ffc000U 
                                        & __PVT__DuI__DOT__X0__DOT__significand_sub))) 
                     | (0x1002000U == (0x1ffe000U & __PVT__DuI__DOT__X0__DOT__significand_sub))) 
                    | (0x1001000U == (0x1fff000U & __PVT__DuI__DOT__X0__DOT__significand_sub))) 
                   | (0x1000800U == (0x1fff800U & __PVT__DuI__DOT__X0__DOT__significand_sub))) 
                  | (0x1000400U == (0x1fffc00U & __PVT__DuI__DOT__X0__DOT__significand_sub))) 
                 | (0x1000200U == (0x1fffe00U & __PVT__DuI__DOT__X0__DOT__significand_sub))) 
                | (0x1000100U == (0x1ffff00U & __PVT__DuI__DOT__X0__DOT__significand_sub)))) {
        if ((0x1008000U == (0x1ff8000U & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 8U));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 8U;
        } else if ((0x1004000U == (0x1ffc000U & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 9U));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 9U;
        } else if ((0x1002000U == (0x1ffe000U & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 0xaU));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 0xaU;
        } else if ((0x1001000U == (0x1fff000U & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 0xbU));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 0xbU;
        } else if ((0x1000800U == (0x1fff800U & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 0xcU));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 0xcU;
        } else if ((0x1000400U == (0x1fffc00U & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 0xdU));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 0xdU;
        } else if ((0x1000200U == (0x1fffe00U & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 0xeU));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 0xeU;
        } else {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 0xfU));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 0xfU;
        }
    } else if (((((((((0x1000080U == (0x1ffff80U & __PVT__DuI__DOT__X0__DOT__significand_sub)) 
                      | (0x1000040U == (0x1ffffc0U 
                                        & __PVT__DuI__DOT__X0__DOT__significand_sub))) 
                     | (0x1000020U == (0x1ffffe0U & __PVT__DuI__DOT__X0__DOT__significand_sub))) 
                    | (0x1000010U == (0x1fffff0U & __PVT__DuI__DOT__X0__DOT__significand_sub))) 
                   | (0x1000008U == (0x1fffff8U & __PVT__DuI__DOT__X0__DOT__significand_sub))) 
                  | (0x1000004U == (0x1fffffcU & __PVT__DuI__DOT__X0__DOT__significand_sub))) 
                 | (0x1000002U == (0x1fffffeU & __PVT__DuI__DOT__X0__DOT__significand_sub))) 
                | (0x1000001U == __PVT__DuI__DOT__X0__DOT__significand_sub))) {
        if ((0x1000080U == (0x1ffff80U & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 0x10U));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 0x10U;
        } else if ((0x1000040U == (0x1ffffc0U & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 0x11U));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 0x11U;
        } else if ((0x1000020U == (0x1ffffe0U & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 0x12U));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 0x12U;
        } else if ((0x1000010U == (0x1fffff0U & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 0x13U));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 0x13U;
        } else if ((0x1000008U == (0x1fffff8U & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 0x14U));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 0x14U;
        } else if ((0x1000004U == (0x1fffffcU & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 0x15U));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 0x15U;
        } else if ((0x1000002U == (0x1fffffeU & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 0x16U));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 0x16U;
        } else {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 0x17U));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 0x17U;
        }
    } else if ((0x1000000U == __PVT__DuI__DOT__X0__DOT__significand_sub)) {
        __PVT__DuI__DOT__X0__DOT__subtraction_diff 
            = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 0x18U));
        __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 0x18U;
    } else {
        __PVT__DuI__DOT__X0__DOT__subtraction_diff 
            = (0x1ffffffU & ((IData)(1U) + (~ __PVT__DuI__DOT__X0__DOT__significand_sub)));
        __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 0U;
    }
    __PVT__DuI__DOT__X0__DOT__result = (((0xffU == 
                                          (0xffU & 
                                           (DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                            >> 0x17U))) 
                                         | (0xffU == 
                                            (0xffU 
                                             & (DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                >> 0x17U))))
                                         ? 0U : ((IData)(DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_1)
                                                  ? 
                                                 ((0x80000000U 
                                                   & DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[1U]) 
                                                  | ((0x7f800000U 
                                                      & ((((DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                            << 9U) 
                                                           | (DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                              >> 0x17U)) 
                                                          - (IData)(__PVT__DuI__DOT__X0__DOT__pe__DOT__shift)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & __PVT__DuI__DOT__X0__DOT__subtraction_diff)))
                                                  : 
                                                 ((0x80000000U 
                                                   & DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[1U]) 
                                                  | ((0x7f800000U 
                                                      & ((((DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                            << 9U) 
                                                           | (DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                              >> 0x17U)) 
                                                          + 
                                                          (1U 
                                                           & (__PVT__DuI__DOT__X0__DOT__significand_add 
                                                              >> 0x18U))) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((0x1000000U 
                                                            & __PVT__DuI__DOT__X0__DOT__significand_add)
                                                            ? 
                                                           (__PVT__DuI__DOT__X0__DOT__significand_add 
                                                            >> 1U)
                                                            : __PVT__DuI__DOT__X0__DOT__significand_add))))));
    __VdfgRegularize_hc373ca9b_1_1 = (QData)((IData)(
                                                     ((0U 
                                                       != 
                                                       (0xffU 
                                                        & (__PVT__DuI__DOT__X0__DOT__result 
                                                           >> 0x17U)))
                                                       ? 
                                                      (0x800000U 
                                                       | (0x7fffffU 
                                                          & __PVT__DuI__DOT__X0__DOT__result))
                                                       : 
                                                      (0x7fffffU 
                                                       & __PVT__DuI__DOT__X0__DOT__result))));
    __PVT__DuI__DOT__X1__DOT__M1__DOT__product = (0xffffffffffffULL 
                                                  & (__VdfgRegularize_hc373ca9b_1_1 
                                                     * 
                                                     (0x800000ULL 
                                                      | (QData)((IData)(
                                                                        (0x7fffffU 
                                                                         & vlSelfRef.__PVT__Div_B))))));
    __PVT__DuI__DOT__X1__DOT__M1__DOT__product_normalised 
        = (0xffffffffffffULL & ((1U & (IData)((__PVT__DuI__DOT__X1__DOT__M1__DOT__product 
                                               >> 0x2fU)))
                                 ? __PVT__DuI__DOT__X1__DOT__M1__DOT__product
                                 : VL_SHIFTL_QQI(48,48,32, __PVT__DuI__DOT__X1__DOT__M1__DOT__product, 1U)));
    __PVT__DuI__DOT__X1__DOT__M1__DOT__zero = ((~ (0xffU 
                                                   == 
                                                   (0xffU 
                                                    & (__PVT__DuI__DOT__X0__DOT__result 
                                                       >> 0x17U)))) 
                                               & (0ULL 
                                                  == __PVT__DuI__DOT__X1__DOT__M1__DOT__product));
    __PVT__DuI__DOT__X1__DOT__M1__DOT__exponent = (0x1ffU 
                                                   & ((IData)(0x1ffU) 
                                                      + 
                                                      ((0xffU 
                                                        & (__PVT__DuI__DOT__X0__DOT__result 
                                                           >> 0x17U)) 
                                                       + 
                                                       (1U 
                                                        & (IData)(
                                                                  (__PVT__DuI__DOT__X1__DOT__M1__DOT__product 
                                                                   >> 0x2fU))))));
    __VdfgRegularize_hebeb780c_0_81 = ((0xffU == (0xffU 
                                                  & (__PVT__DuI__DOT__X0__DOT__result 
                                                     >> 0x17U)))
                                        ? 0U : (0x7fffffffU 
                                                & ((IData)(__PVT__DuI__DOT__X1__DOT__M1__DOT__zero)
                                                    ? 
                                                   (0x80000000U 
                                                    & __PVT__DuI__DOT__X0__DOT__result)
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               ((0x100U 
                                                                 == 
                                                                 (0x180U 
                                                                  & (IData)(__PVT__DuI__DOT__X1__DOT__M1__DOT__exponent))) 
                                                                & (~ (IData)(__PVT__DuI__DOT__X1__DOT__M1__DOT__zero)))))
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & __PVT__DuI__DOT__X0__DOT__result))
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                ((0x180U 
                                                                  == 
                                                                  (0x180U 
                                                                   & (IData)(__PVT__DuI__DOT__X1__DOT__M1__DOT__exponent))) 
                                                                 & (~ (IData)(__PVT__DuI__DOT__X1__DOT__M1__DOT__zero)))))
                                                      ? 
                                                     (0x80000000U 
                                                      & __PVT__DuI__DOT__X0__DOT__result)
                                                      : 
                                                     ((0x80000000U 
                                                       & __PVT__DuI__DOT__X0__DOT__result) 
                                                      | ((0x7f800000U 
                                                          & ((IData)(__PVT__DuI__DOT__X1__DOT__M1__DOT__exponent) 
                                                             << 0x17U)) 
                                                         | (0x7fffffU 
                                                            & ((IData)(
                                                                       (__PVT__DuI__DOT__X1__DOT__M1__DOT__product_normalised 
                                                                        >> 0x18U)) 
                                                               + 
                                                               ((IData)(
                                                                        (__PVT__DuI__DOT__X1__DOT__M1__DOT__product_normalised 
                                                                         >> 0x17U)) 
                                                                & (0U 
                                                                   != 
                                                                   (0x7fffffU 
                                                                    & (IData)(__PVT__DuI__DOT__X1__DOT__M1__DOT__product_normalised)))))))))))));
    if ((0x40000000U < __VdfgRegularize_hebeb780c_0_81)) {
        DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
            = (IData)((0x40000000ULL | ((QData)((IData)(
                                                        (0x80000000U 
                                                         | __VdfgRegularize_hebeb780c_0_81))) 
                                        << 0x20U)));
        DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            = (IData)(((0x40000000ULL | ((QData)((IData)(
                                                         (0x80000000U 
                                                          | __VdfgRegularize_hebeb780c_0_81))) 
                                         << 0x20U)) 
                       >> 0x20U));
        DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[2U] = 1U;
    } else {
        DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
            = (0x80000000U | __VdfgRegularize_hebeb780c_0_81);
        DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] = 0x40000000U;
        DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[2U] = 0U;
    }
    DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_2 
        = ((0U != (0xffU & (DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                            >> 0x17U))) ? (0x800000U 
                                           | (0x7fffffU 
                                              & DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U]))
            : (0x7fffffU & DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U]));
    DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_1 
        = ((DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            ^ DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U]) 
           >> 0x1fU);
    __PVT__DuI__DOT__X1__DOT__A1__DOT__exponent_diff 
        = (0xffU & (((DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                      << 9U) | (DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                >> 0x17U)) - ((DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                               << 9U) 
                                              | (DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                 >> 0x17U))));
    __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_b_add_sub 
        = (0xffffffU & VL_SHIFTR_III(24,24,8, ((0U 
                                                != 
                                                (0xffU 
                                                 & (DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                    >> 0x17U)))
                                                ? (0x800000U 
                                                   | (0x7fffffU 
                                                      & DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U]))
                                                : (0x7fffffU 
                                                   & DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U])), (IData)(__PVT__DuI__DOT__X1__DOT__A1__DOT__exponent_diff)));
    __PVT__DuI__DOT__X1__DOT__A1__DOT__perform = ((0xffU 
                                                   & (DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                      >> 0x17U)) 
                                                  == 
                                                  (0xffU 
                                                   & (((DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                        << 9U) 
                                                       | (DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                          >> 0x17U)) 
                                                      + (IData)(__PVT__DuI__DOT__X1__DOT__A1__DOT__exponent_diff))));
    __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_add 
        = (((~ (IData)(DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_1)) 
            & (IData)(__PVT__DuI__DOT__X1__DOT__A1__DOT__perform))
            ? (0x1ffffffU & (DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_2 
                             + __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_b_add_sub))
            : 0U);
    __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub 
        = ((IData)(__PVT__DuI__DOT__X1__DOT__A1__DOT__perform)
            ? (0x1ffffffU & (DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_2 
                             + (((IData)(DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_1) 
                                 & (IData)(__PVT__DuI__DOT__X1__DOT__A1__DOT__perform))
                                 ? (0xffffffU & ((IData)(1U) 
                                                 + 
                                                 (~ __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_b_add_sub)))
                                 : 0U))) : 0U);
    if (((((((((0x1800000U == (0x1800000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub)) 
               | (0x1400000U == (0x1c00000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) 
              | (0x1200000U == (0x1e00000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) 
             | (0x1100000U == (0x1f00000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) 
            | (0x1080000U == (0x1f80000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) 
           | (0x1040000U == (0x1fc0000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) 
          | (0x1020000U == (0x1fe0000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) 
         | (0x1010000U == (0x1ff0000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub)))) {
        if ((0x1800000U == (0x1800000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub);
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 0U;
        } else if ((0x1400000U == (0x1c00000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 1U));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 1U;
        } else if ((0x1200000U == (0x1e00000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 2U));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 2U;
        } else if ((0x1100000U == (0x1f00000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 3U));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 3U;
        } else if ((0x1080000U == (0x1f80000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 4U));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 4U;
        } else if ((0x1040000U == (0x1fc0000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 5U));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 5U;
        } else if ((0x1020000U == (0x1fe0000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 6U));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 6U;
        } else {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 7U));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 7U;
        }
    } else if (((((((((0x1008000U == (0x1ff8000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub)) 
                      | (0x1004000U == (0x1ffc000U 
                                        & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) 
                     | (0x1002000U == (0x1ffe000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) 
                    | (0x1001000U == (0x1fff000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) 
                   | (0x1000800U == (0x1fff800U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) 
                  | (0x1000400U == (0x1fffc00U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) 
                 | (0x1000200U == (0x1fffe00U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) 
                | (0x1000100U == (0x1ffff00U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub)))) {
        if ((0x1008000U == (0x1ff8000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 8U));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 8U;
        } else if ((0x1004000U == (0x1ffc000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 9U));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 9U;
        } else if ((0x1002000U == (0x1ffe000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 0xaU));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 0xaU;
        } else if ((0x1001000U == (0x1fff000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 0xbU));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 0xbU;
        } else if ((0x1000800U == (0x1fff800U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 0xcU));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 0xcU;
        } else if ((0x1000400U == (0x1fffc00U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 0xdU));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 0xdU;
        } else if ((0x1000200U == (0x1fffe00U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 0xeU));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 0xeU;
        } else {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 0xfU));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 0xfU;
        }
    } else if (((((((((0x1000080U == (0x1ffff80U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub)) 
                      | (0x1000040U == (0x1ffffc0U 
                                        & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) 
                     | (0x1000020U == (0x1ffffe0U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) 
                    | (0x1000010U == (0x1fffff0U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) 
                   | (0x1000008U == (0x1fffff8U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) 
                  | (0x1000004U == (0x1fffffcU & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) 
                 | (0x1000002U == (0x1fffffeU & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) 
                | (0x1000001U == __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
        if ((0x1000080U == (0x1ffff80U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 0x10U));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 0x10U;
        } else if ((0x1000040U == (0x1ffffc0U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 0x11U));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 0x11U;
        } else if ((0x1000020U == (0x1ffffe0U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 0x12U));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 0x12U;
        } else if ((0x1000010U == (0x1fffff0U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 0x13U));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 0x13U;
        } else if ((0x1000008U == (0x1fffff8U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 0x14U));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 0x14U;
        } else if ((0x1000004U == (0x1fffffcU & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 0x15U));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 0x15U;
        } else if ((0x1000002U == (0x1fffffeU & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 0x16U));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 0x16U;
        } else {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 0x17U));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 0x17U;
        }
    } else if ((0x1000000U == __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub)) {
        __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
            = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 0x18U));
        __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 0x18U;
    } else {
        __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
            = (0x1ffffffU & ((IData)(1U) + (~ __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub)));
        __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 0U;
    }
    __PVT__DuI__DOT__X1__DOT__A1__DOT__result = (((0xffU 
                                                   == 
                                                   (0xffU 
                                                    & (DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                       >> 0x17U))) 
                                                  | (0xffU 
                                                     == 
                                                     (0xffU 
                                                      & (DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                         >> 0x17U))))
                                                  ? 0U
                                                  : 
                                                 ((IData)(DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_1)
                                                   ? 
                                                  ((0x80000000U 
                                                    & DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U]) 
                                                   | ((0x7f800000U 
                                                       & ((((DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                             << 9U) 
                                                            | (DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                               >> 0x17U)) 
                                                           - (IData)(__PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift)) 
                                                          << 0x17U)) 
                                                      | (0x7fffffU 
                                                         & __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff)))
                                                   : 
                                                  ((0x80000000U 
                                                    & DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U]) 
                                                   | ((0x7f800000U 
                                                       & ((((DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                             << 9U) 
                                                            | (DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                               >> 0x17U)) 
                                                           + 
                                                           (1U 
                                                            & (__PVT__DuI__DOT__X1__DOT__A1__DOT__significand_add 
                                                               >> 0x18U))) 
                                                          << 0x17U)) 
                                                      | (0x7fffffU 
                                                         & ((0x1000000U 
                                                             & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_add)
                                                             ? 
                                                            (__PVT__DuI__DOT__X1__DOT__A1__DOT__significand_add 
                                                             >> 1U)
                                                             : __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_add))))));
    __PVT__DuI__DOT__X1__DOT__M2__DOT__sign = ((__PVT__DuI__DOT__X0__DOT__result 
                                                ^ __PVT__DuI__DOT__X1__DOT__A1__DOT__result) 
                                               >> 0x1fU);
    __PVT__DuI__DOT__X1__DOT__M2__DOT__Exception = 
        ((0xffU == (0xffU & (__PVT__DuI__DOT__X0__DOT__result 
                             >> 0x17U))) | (0xffU == 
                                            (0xffU 
                                             & (__PVT__DuI__DOT__X1__DOT__A1__DOT__result 
                                                >> 0x17U))));
    __PVT__DuI__DOT__X1__DOT__M2__DOT__product = (0xffffffffffffULL 
                                                  & (__VdfgRegularize_hc373ca9b_1_1 
                                                     * (QData)((IData)(
                                                                       ((0U 
                                                                         != 
                                                                         (0xffU 
                                                                          & (__PVT__DuI__DOT__X1__DOT__A1__DOT__result 
                                                                             >> 0x17U)))
                                                                         ? 
                                                                        (0x800000U 
                                                                         | (0x7fffffU 
                                                                            & __PVT__DuI__DOT__X1__DOT__A1__DOT__result))
                                                                         : 
                                                                        (0x7fffffU 
                                                                         & __PVT__DuI__DOT__X1__DOT__A1__DOT__result))))));
    __PVT__DuI__DOT__X1__DOT__M2__DOT__product_normalised 
        = (0xffffffffffffULL & ((1U & (IData)((__PVT__DuI__DOT__X1__DOT__M2__DOT__product 
                                               >> 0x2fU)))
                                 ? __PVT__DuI__DOT__X1__DOT__M2__DOT__product
                                 : VL_SHIFTL_QQI(48,48,32, __PVT__DuI__DOT__X1__DOT__M2__DOT__product, 1U)));
    __PVT__DuI__DOT__X1__DOT__M2__DOT__zero = ((~ (IData)(__PVT__DuI__DOT__X1__DOT__M2__DOT__Exception)) 
                                               & (0ULL 
                                                  == __PVT__DuI__DOT__X1__DOT__M2__DOT__product));
    __PVT__DuI__DOT__X1__DOT__M2__DOT__exponent = (0x1ffU 
                                                   & ((((0xffU 
                                                         & (__PVT__DuI__DOT__X0__DOT__result 
                                                            >> 0x17U)) 
                                                        + 
                                                        (0xffU 
                                                         & (__PVT__DuI__DOT__X1__DOT__A1__DOT__result 
                                                            >> 0x17U))) 
                                                       - (IData)(0x7fU)) 
                                                      + 
                                                      (1U 
                                                       & (IData)(
                                                                 (__PVT__DuI__DOT__X1__DOT__M2__DOT__product 
                                                                  >> 0x2fU)))));
    __PVT__DuI__DOT__X2__DOT__M1__DOT__a_operand = 
        ((IData)(__PVT__DuI__DOT__X1__DOT__M2__DOT__Exception)
          ? 0U : ((IData)(__PVT__DuI__DOT__X1__DOT__M2__DOT__zero)
                   ? ((IData)(__PVT__DuI__DOT__X1__DOT__M2__DOT__sign) 
                      << 0x1fU) : ((1U & (IData)(((0x100U 
                                                   == 
                                                   (0x180U 
                                                    & (IData)(__PVT__DuI__DOT__X1__DOT__M2__DOT__exponent))) 
                                                  & (~ (IData)(__PVT__DuI__DOT__X1__DOT__M2__DOT__zero)))))
                                    ? (0x7f800000U 
                                       | ((IData)(__PVT__DuI__DOT__X1__DOT__M2__DOT__sign) 
                                          << 0x1fU))
                                    : ((1U & (IData)(
                                                     ((0x180U 
                                                       == 
                                                       (0x180U 
                                                        & (IData)(__PVT__DuI__DOT__X1__DOT__M2__DOT__exponent))) 
                                                      & (~ (IData)(__PVT__DuI__DOT__X1__DOT__M2__DOT__zero)))))
                                        ? ((IData)(__PVT__DuI__DOT__X1__DOT__M2__DOT__sign) 
                                           << 0x1fU)
                                        : (((IData)(__PVT__DuI__DOT__X1__DOT__M2__DOT__sign) 
                                            << 0x1fU) 
                                           | ((0x7f800000U 
                                               & ((IData)(__PVT__DuI__DOT__X1__DOT__M2__DOT__exponent) 
                                                  << 0x17U)) 
                                              | (0x7fffffU 
                                                 & ((IData)(
                                                            (__PVT__DuI__DOT__X1__DOT__M2__DOT__product_normalised 
                                                             >> 0x18U)) 
                                                    + 
                                                    ((IData)(
                                                             (__PVT__DuI__DOT__X1__DOT__M2__DOT__product_normalised 
                                                              >> 0x17U)) 
                                                     & (0U 
                                                        != 
                                                        (0x7fffffU 
                                                         & (IData)(__PVT__DuI__DOT__X1__DOT__M2__DOT__product_normalised))))))))))));
    __VdfgRegularize_hc373ca9b_1_2 = (QData)((IData)(
                                                     ((0U 
                                                       != 
                                                       (0xffU 
                                                        & (__PVT__DuI__DOT__X2__DOT__M1__DOT__a_operand 
                                                           >> 0x17U)))
                                                       ? 
                                                      (0x800000U 
                                                       | (0x7fffffU 
                                                          & __PVT__DuI__DOT__X2__DOT__M1__DOT__a_operand))
                                                       : 
                                                      (0x7fffffU 
                                                       & __PVT__DuI__DOT__X2__DOT__M1__DOT__a_operand))));
    __PVT__DuI__DOT__X2__DOT__M1__DOT__product = (0xffffffffffffULL 
                                                  & (__VdfgRegularize_hc373ca9b_1_2 
                                                     * 
                                                     (0x800000ULL 
                                                      | (QData)((IData)(
                                                                        (0x7fffffU 
                                                                         & vlSelfRef.__PVT__Div_B))))));
    __PVT__DuI__DOT__X2__DOT__M1__DOT__product_normalised 
        = (0xffffffffffffULL & ((1U & (IData)((__PVT__DuI__DOT__X2__DOT__M1__DOT__product 
                                               >> 0x2fU)))
                                 ? __PVT__DuI__DOT__X2__DOT__M1__DOT__product
                                 : VL_SHIFTL_QQI(48,48,32, __PVT__DuI__DOT__X2__DOT__M1__DOT__product, 1U)));
    __PVT__DuI__DOT__X2__DOT__M1__DOT__zero = ((~ (0xffU 
                                                   == 
                                                   (0xffU 
                                                    & (__PVT__DuI__DOT__X2__DOT__M1__DOT__a_operand 
                                                       >> 0x17U)))) 
                                               & (0ULL 
                                                  == __PVT__DuI__DOT__X2__DOT__M1__DOT__product));
    __PVT__DuI__DOT__X2__DOT__M1__DOT__exponent = (0x1ffU 
                                                   & ((IData)(0x1ffU) 
                                                      + 
                                                      ((0xffU 
                                                        & (__PVT__DuI__DOT__X2__DOT__M1__DOT__a_operand 
                                                           >> 0x17U)) 
                                                       + 
                                                       (1U 
                                                        & (IData)(
                                                                  (__PVT__DuI__DOT__X2__DOT__M1__DOT__product 
                                                                   >> 0x2fU))))));
    __VdfgRegularize_hebeb780c_0_82 = ((0xffU == (0xffU 
                                                  & (__PVT__DuI__DOT__X2__DOT__M1__DOT__a_operand 
                                                     >> 0x17U)))
                                        ? 0U : (0x7fffffffU 
                                                & ((IData)(__PVT__DuI__DOT__X2__DOT__M1__DOT__zero)
                                                    ? 
                                                   (0x80000000U 
                                                    & __PVT__DuI__DOT__X2__DOT__M1__DOT__a_operand)
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               ((0x100U 
                                                                 == 
                                                                 (0x180U 
                                                                  & (IData)(__PVT__DuI__DOT__X2__DOT__M1__DOT__exponent))) 
                                                                & (~ (IData)(__PVT__DuI__DOT__X2__DOT__M1__DOT__zero)))))
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & __PVT__DuI__DOT__X2__DOT__M1__DOT__a_operand))
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                ((0x180U 
                                                                  == 
                                                                  (0x180U 
                                                                   & (IData)(__PVT__DuI__DOT__X2__DOT__M1__DOT__exponent))) 
                                                                 & (~ (IData)(__PVT__DuI__DOT__X2__DOT__M1__DOT__zero)))))
                                                      ? 
                                                     (0x80000000U 
                                                      & __PVT__DuI__DOT__X2__DOT__M1__DOT__a_operand)
                                                      : 
                                                     ((0x80000000U 
                                                       & __PVT__DuI__DOT__X2__DOT__M1__DOT__a_operand) 
                                                      | ((0x7f800000U 
                                                          & ((IData)(__PVT__DuI__DOT__X2__DOT__M1__DOT__exponent) 
                                                             << 0x17U)) 
                                                         | (0x7fffffU 
                                                            & ((IData)(
                                                                       (__PVT__DuI__DOT__X2__DOT__M1__DOT__product_normalised 
                                                                        >> 0x18U)) 
                                                               + 
                                                               ((IData)(
                                                                        (__PVT__DuI__DOT__X2__DOT__M1__DOT__product_normalised 
                                                                         >> 0x17U)) 
                                                                & (0U 
                                                                   != 
                                                                   (0x7fffffU 
                                                                    & (IData)(__PVT__DuI__DOT__X2__DOT__M1__DOT__product_normalised)))))))))))));
    if ((0x40000000U < __VdfgRegularize_hebeb780c_0_82)) {
        DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
            = (IData)((0x40000000ULL | ((QData)((IData)(
                                                        (0x80000000U 
                                                         | __VdfgRegularize_hebeb780c_0_82))) 
                                        << 0x20U)));
        DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            = (IData)(((0x40000000ULL | ((QData)((IData)(
                                                         (0x80000000U 
                                                          | __VdfgRegularize_hebeb780c_0_82))) 
                                         << 0x20U)) 
                       >> 0x20U));
        DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[2U] = 1U;
    } else {
        DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
            = (0x80000000U | __VdfgRegularize_hebeb780c_0_82);
        DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] = 0x40000000U;
        DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[2U] = 0U;
    }
    DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_2 
        = ((0U != (0xffU & (DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                            >> 0x17U))) ? (0x800000U 
                                           | (0x7fffffU 
                                              & DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U]))
            : (0x7fffffU & DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U]));
    DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_1 
        = ((DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            ^ DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U]) 
           >> 0x1fU);
    __PVT__DuI__DOT__X2__DOT__A1__DOT__exponent_diff 
        = (0xffU & (((DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                      << 9U) | (DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                >> 0x17U)) - ((DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                               << 9U) 
                                              | (DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                 >> 0x17U))));
    __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_b_add_sub 
        = (0xffffffU & VL_SHIFTR_III(24,24,8, ((0U 
                                                != 
                                                (0xffU 
                                                 & (DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                    >> 0x17U)))
                                                ? (0x800000U 
                                                   | (0x7fffffU 
                                                      & DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U]))
                                                : (0x7fffffU 
                                                   & DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U])), (IData)(__PVT__DuI__DOT__X2__DOT__A1__DOT__exponent_diff)));
    __PVT__DuI__DOT__X2__DOT__A1__DOT__perform = ((0xffU 
                                                   & (DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                      >> 0x17U)) 
                                                  == 
                                                  (0xffU 
                                                   & (((DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                        << 9U) 
                                                       | (DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                          >> 0x17U)) 
                                                      + (IData)(__PVT__DuI__DOT__X2__DOT__A1__DOT__exponent_diff))));
    __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_add 
        = (((~ (IData)(DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_1)) 
            & (IData)(__PVT__DuI__DOT__X2__DOT__A1__DOT__perform))
            ? (0x1ffffffU & (DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_2 
                             + __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_b_add_sub))
            : 0U);
    __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub 
        = ((IData)(__PVT__DuI__DOT__X2__DOT__A1__DOT__perform)
            ? (0x1ffffffU & (DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_2 
                             + (((IData)(DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_1) 
                                 & (IData)(__PVT__DuI__DOT__X2__DOT__A1__DOT__perform))
                                 ? (0xffffffU & ((IData)(1U) 
                                                 + 
                                                 (~ __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_b_add_sub)))
                                 : 0U))) : 0U);
    if (((((((((0x1800000U == (0x1800000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub)) 
               | (0x1400000U == (0x1c00000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) 
              | (0x1200000U == (0x1e00000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) 
             | (0x1100000U == (0x1f00000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) 
            | (0x1080000U == (0x1f80000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) 
           | (0x1040000U == (0x1fc0000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) 
          | (0x1020000U == (0x1fe0000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) 
         | (0x1010000U == (0x1ff0000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub)))) {
        if ((0x1800000U == (0x1800000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub);
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 0U;
        } else if ((0x1400000U == (0x1c00000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 1U));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 1U;
        } else if ((0x1200000U == (0x1e00000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 2U));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 2U;
        } else if ((0x1100000U == (0x1f00000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 3U));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 3U;
        } else if ((0x1080000U == (0x1f80000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 4U));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 4U;
        } else if ((0x1040000U == (0x1fc0000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 5U));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 5U;
        } else if ((0x1020000U == (0x1fe0000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 6U));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 6U;
        } else {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 7U));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 7U;
        }
    } else if (((((((((0x1008000U == (0x1ff8000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub)) 
                      | (0x1004000U == (0x1ffc000U 
                                        & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) 
                     | (0x1002000U == (0x1ffe000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) 
                    | (0x1001000U == (0x1fff000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) 
                   | (0x1000800U == (0x1fff800U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) 
                  | (0x1000400U == (0x1fffc00U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) 
                 | (0x1000200U == (0x1fffe00U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) 
                | (0x1000100U == (0x1ffff00U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub)))) {
        if ((0x1008000U == (0x1ff8000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 8U));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 8U;
        } else if ((0x1004000U == (0x1ffc000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 9U));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 9U;
        } else if ((0x1002000U == (0x1ffe000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 0xaU));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 0xaU;
        } else if ((0x1001000U == (0x1fff000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 0xbU));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 0xbU;
        } else if ((0x1000800U == (0x1fff800U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 0xcU));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 0xcU;
        } else if ((0x1000400U == (0x1fffc00U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 0xdU));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 0xdU;
        } else if ((0x1000200U == (0x1fffe00U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 0xeU));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 0xeU;
        } else {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 0xfU));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 0xfU;
        }
    } else if (((((((((0x1000080U == (0x1ffff80U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub)) 
                      | (0x1000040U == (0x1ffffc0U 
                                        & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) 
                     | (0x1000020U == (0x1ffffe0U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) 
                    | (0x1000010U == (0x1fffff0U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) 
                   | (0x1000008U == (0x1fffff8U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) 
                  | (0x1000004U == (0x1fffffcU & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) 
                 | (0x1000002U == (0x1fffffeU & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) 
                | (0x1000001U == __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
        if ((0x1000080U == (0x1ffff80U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 0x10U));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 0x10U;
        } else if ((0x1000040U == (0x1ffffc0U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 0x11U));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 0x11U;
        } else if ((0x1000020U == (0x1ffffe0U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 0x12U));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 0x12U;
        } else if ((0x1000010U == (0x1fffff0U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 0x13U));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 0x13U;
        } else if ((0x1000008U == (0x1fffff8U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 0x14U));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 0x14U;
        } else if ((0x1000004U == (0x1fffffcU & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 0x15U));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 0x15U;
        } else if ((0x1000002U == (0x1fffffeU & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 0x16U));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 0x16U;
        } else {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 0x17U));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 0x17U;
        }
    } else if ((0x1000000U == __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub)) {
        __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
            = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 0x18U));
        __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 0x18U;
    } else {
        __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
            = (0x1ffffffU & ((IData)(1U) + (~ __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub)));
        __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 0U;
    }
    __PVT__DuI__DOT__X2__DOT__A1__DOT__result = (((0xffU 
                                                   == 
                                                   (0xffU 
                                                    & (DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                       >> 0x17U))) 
                                                  | (0xffU 
                                                     == 
                                                     (0xffU 
                                                      & (DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                         >> 0x17U))))
                                                  ? 0U
                                                  : 
                                                 ((IData)(DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_1)
                                                   ? 
                                                  ((0x80000000U 
                                                    & DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U]) 
                                                   | ((0x7f800000U 
                                                       & ((((DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                             << 9U) 
                                                            | (DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                               >> 0x17U)) 
                                                           - (IData)(__PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift)) 
                                                          << 0x17U)) 
                                                      | (0x7fffffU 
                                                         & __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff)))
                                                   : 
                                                  ((0x80000000U 
                                                    & DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U]) 
                                                   | ((0x7f800000U 
                                                       & ((((DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                             << 9U) 
                                                            | (DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                               >> 0x17U)) 
                                                           + 
                                                           (1U 
                                                            & (__PVT__DuI__DOT__X2__DOT__A1__DOT__significand_add 
                                                               >> 0x18U))) 
                                                          << 0x17U)) 
                                                      | (0x7fffffU 
                                                         & ((0x1000000U 
                                                             & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_add)
                                                             ? 
                                                            (__PVT__DuI__DOT__X2__DOT__A1__DOT__significand_add 
                                                             >> 1U)
                                                             : __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_add))))));
    __PVT__DuI__DOT__X2__DOT__M2__DOT__sign = ((__PVT__DuI__DOT__X2__DOT__M1__DOT__a_operand 
                                                ^ __PVT__DuI__DOT__X2__DOT__A1__DOT__result) 
                                               >> 0x1fU);
    __PVT__DuI__DOT__X2__DOT__M2__DOT__Exception = 
        ((0xffU == (0xffU & (__PVT__DuI__DOT__X2__DOT__M1__DOT__a_operand 
                             >> 0x17U))) | (0xffU == 
                                            (0xffU 
                                             & (__PVT__DuI__DOT__X2__DOT__A1__DOT__result 
                                                >> 0x17U))));
    __PVT__DuI__DOT__X2__DOT__M2__DOT__product = (0xffffffffffffULL 
                                                  & (__VdfgRegularize_hc373ca9b_1_2 
                                                     * (QData)((IData)(
                                                                       ((0U 
                                                                         != 
                                                                         (0xffU 
                                                                          & (__PVT__DuI__DOT__X2__DOT__A1__DOT__result 
                                                                             >> 0x17U)))
                                                                         ? 
                                                                        (0x800000U 
                                                                         | (0x7fffffU 
                                                                            & __PVT__DuI__DOT__X2__DOT__A1__DOT__result))
                                                                         : 
                                                                        (0x7fffffU 
                                                                         & __PVT__DuI__DOT__X2__DOT__A1__DOT__result))))));
    __PVT__DuI__DOT__X2__DOT__M2__DOT__product_normalised 
        = (0xffffffffffffULL & ((1U & (IData)((__PVT__DuI__DOT__X2__DOT__M2__DOT__product 
                                               >> 0x2fU)))
                                 ? __PVT__DuI__DOT__X2__DOT__M2__DOT__product
                                 : VL_SHIFTL_QQI(48,48,32, __PVT__DuI__DOT__X2__DOT__M2__DOT__product, 1U)));
    __PVT__DuI__DOT__X2__DOT__M2__DOT__zero = ((~ (IData)(__PVT__DuI__DOT__X2__DOT__M2__DOT__Exception)) 
                                               & (0ULL 
                                                  == __PVT__DuI__DOT__X2__DOT__M2__DOT__product));
    __PVT__DuI__DOT__X2__DOT__M2__DOT__exponent = (0x1ffU 
                                                   & ((((0xffU 
                                                         & (__PVT__DuI__DOT__X2__DOT__M1__DOT__a_operand 
                                                            >> 0x17U)) 
                                                        + 
                                                        (0xffU 
                                                         & (__PVT__DuI__DOT__X2__DOT__A1__DOT__result 
                                                            >> 0x17U))) 
                                                       - (IData)(0x7fU)) 
                                                      + 
                                                      (1U 
                                                       & (IData)(
                                                                 (__PVT__DuI__DOT__X2__DOT__M2__DOT__product 
                                                                  >> 0x2fU)))));
    __PVT__DuI__DOT__X3__DOT__M1__DOT__a_operand = 
        ((IData)(__PVT__DuI__DOT__X2__DOT__M2__DOT__Exception)
          ? 0U : ((IData)(__PVT__DuI__DOT__X2__DOT__M2__DOT__zero)
                   ? ((IData)(__PVT__DuI__DOT__X2__DOT__M2__DOT__sign) 
                      << 0x1fU) : ((1U & (IData)(((0x100U 
                                                   == 
                                                   (0x180U 
                                                    & (IData)(__PVT__DuI__DOT__X2__DOT__M2__DOT__exponent))) 
                                                  & (~ (IData)(__PVT__DuI__DOT__X2__DOT__M2__DOT__zero)))))
                                    ? (0x7f800000U 
                                       | ((IData)(__PVT__DuI__DOT__X2__DOT__M2__DOT__sign) 
                                          << 0x1fU))
                                    : ((1U & (IData)(
                                                     ((0x180U 
                                                       == 
                                                       (0x180U 
                                                        & (IData)(__PVT__DuI__DOT__X2__DOT__M2__DOT__exponent))) 
                                                      & (~ (IData)(__PVT__DuI__DOT__X2__DOT__M2__DOT__zero)))))
                                        ? ((IData)(__PVT__DuI__DOT__X2__DOT__M2__DOT__sign) 
                                           << 0x1fU)
                                        : (((IData)(__PVT__DuI__DOT__X2__DOT__M2__DOT__sign) 
                                            << 0x1fU) 
                                           | ((0x7f800000U 
                                               & ((IData)(__PVT__DuI__DOT__X2__DOT__M2__DOT__exponent) 
                                                  << 0x17U)) 
                                              | (0x7fffffU 
                                                 & ((IData)(
                                                            (__PVT__DuI__DOT__X2__DOT__M2__DOT__product_normalised 
                                                             >> 0x18U)) 
                                                    + 
                                                    ((IData)(
                                                             (__PVT__DuI__DOT__X2__DOT__M2__DOT__product_normalised 
                                                              >> 0x17U)) 
                                                     & (0U 
                                                        != 
                                                        (0x7fffffU 
                                                         & (IData)(__PVT__DuI__DOT__X2__DOT__M2__DOT__product_normalised))))))))))));
    __VdfgRegularize_hc373ca9b_1_3 = (QData)((IData)(
                                                     ((0U 
                                                       != 
                                                       (0xffU 
                                                        & (__PVT__DuI__DOT__X3__DOT__M1__DOT__a_operand 
                                                           >> 0x17U)))
                                                       ? 
                                                      (0x800000U 
                                                       | (0x7fffffU 
                                                          & __PVT__DuI__DOT__X3__DOT__M1__DOT__a_operand))
                                                       : 
                                                      (0x7fffffU 
                                                       & __PVT__DuI__DOT__X3__DOT__M1__DOT__a_operand))));
    __PVT__DuI__DOT__X3__DOT__M1__DOT__product = (0xffffffffffffULL 
                                                  & (__VdfgRegularize_hc373ca9b_1_3 
                                                     * 
                                                     (0x800000ULL 
                                                      | (QData)((IData)(
                                                                        (0x7fffffU 
                                                                         & vlSelfRef.__PVT__Div_B))))));
    __PVT__DuI__DOT__X3__DOT__M1__DOT__product_normalised 
        = (0xffffffffffffULL & ((1U & (IData)((__PVT__DuI__DOT__X3__DOT__M1__DOT__product 
                                               >> 0x2fU)))
                                 ? __PVT__DuI__DOT__X3__DOT__M1__DOT__product
                                 : VL_SHIFTL_QQI(48,48,32, __PVT__DuI__DOT__X3__DOT__M1__DOT__product, 1U)));
    __PVT__DuI__DOT__X3__DOT__M1__DOT__zero = ((~ (0xffU 
                                                   == 
                                                   (0xffU 
                                                    & (__PVT__DuI__DOT__X3__DOT__M1__DOT__a_operand 
                                                       >> 0x17U)))) 
                                               & (0ULL 
                                                  == __PVT__DuI__DOT__X3__DOT__M1__DOT__product));
    __PVT__DuI__DOT__X3__DOT__M1__DOT__exponent = (0x1ffU 
                                                   & ((IData)(0x1ffU) 
                                                      + 
                                                      ((0xffU 
                                                        & (__PVT__DuI__DOT__X3__DOT__M1__DOT__a_operand 
                                                           >> 0x17U)) 
                                                       + 
                                                       (1U 
                                                        & (IData)(
                                                                  (__PVT__DuI__DOT__X3__DOT__M1__DOT__product 
                                                                   >> 0x2fU))))));
    __VdfgRegularize_hebeb780c_0_83 = ((0xffU == (0xffU 
                                                  & (__PVT__DuI__DOT__X3__DOT__M1__DOT__a_operand 
                                                     >> 0x17U)))
                                        ? 0U : (0x7fffffffU 
                                                & ((IData)(__PVT__DuI__DOT__X3__DOT__M1__DOT__zero)
                                                    ? 
                                                   (0x80000000U 
                                                    & __PVT__DuI__DOT__X3__DOT__M1__DOT__a_operand)
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               ((0x100U 
                                                                 == 
                                                                 (0x180U 
                                                                  & (IData)(__PVT__DuI__DOT__X3__DOT__M1__DOT__exponent))) 
                                                                & (~ (IData)(__PVT__DuI__DOT__X3__DOT__M1__DOT__zero)))))
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & __PVT__DuI__DOT__X3__DOT__M1__DOT__a_operand))
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                ((0x180U 
                                                                  == 
                                                                  (0x180U 
                                                                   & (IData)(__PVT__DuI__DOT__X3__DOT__M1__DOT__exponent))) 
                                                                 & (~ (IData)(__PVT__DuI__DOT__X3__DOT__M1__DOT__zero)))))
                                                      ? 
                                                     (0x80000000U 
                                                      & __PVT__DuI__DOT__X3__DOT__M1__DOT__a_operand)
                                                      : 
                                                     ((0x80000000U 
                                                       & __PVT__DuI__DOT__X3__DOT__M1__DOT__a_operand) 
                                                      | ((0x7f800000U 
                                                          & ((IData)(__PVT__DuI__DOT__X3__DOT__M1__DOT__exponent) 
                                                             << 0x17U)) 
                                                         | (0x7fffffU 
                                                            & ((IData)(
                                                                       (__PVT__DuI__DOT__X3__DOT__M1__DOT__product_normalised 
                                                                        >> 0x18U)) 
                                                               + 
                                                               ((IData)(
                                                                        (__PVT__DuI__DOT__X3__DOT__M1__DOT__product_normalised 
                                                                         >> 0x17U)) 
                                                                & (0U 
                                                                   != 
                                                                   (0x7fffffU 
                                                                    & (IData)(__PVT__DuI__DOT__X3__DOT__M1__DOT__product_normalised)))))))))))));
    if ((0x40000000U < __VdfgRegularize_hebeb780c_0_83)) {
        DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
            = (IData)((0x40000000ULL | ((QData)((IData)(
                                                        (0x80000000U 
                                                         | __VdfgRegularize_hebeb780c_0_83))) 
                                        << 0x20U)));
        DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            = (IData)(((0x40000000ULL | ((QData)((IData)(
                                                         (0x80000000U 
                                                          | __VdfgRegularize_hebeb780c_0_83))) 
                                         << 0x20U)) 
                       >> 0x20U));
        DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[2U] = 1U;
    } else {
        DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
            = (0x80000000U | __VdfgRegularize_hebeb780c_0_83);
        DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] = 0x40000000U;
        DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[2U] = 0U;
    }
    DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_2 
        = ((0U != (0xffU & (DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                            >> 0x17U))) ? (0x800000U 
                                           | (0x7fffffU 
                                              & DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U]))
            : (0x7fffffU & DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U]));
    DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_1 
        = ((DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            ^ DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U]) 
           >> 0x1fU);
    __PVT__DuI__DOT__X3__DOT__A1__DOT__exponent_diff 
        = (0xffU & (((DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                      << 9U) | (DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                >> 0x17U)) - ((DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                               << 9U) 
                                              | (DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                 >> 0x17U))));
    __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_b_add_sub 
        = (0xffffffU & VL_SHIFTR_III(24,24,8, ((0U 
                                                != 
                                                (0xffU 
                                                 & (DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                    >> 0x17U)))
                                                ? (0x800000U 
                                                   | (0x7fffffU 
                                                      & DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U]))
                                                : (0x7fffffU 
                                                   & DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U])), (IData)(__PVT__DuI__DOT__X3__DOT__A1__DOT__exponent_diff)));
    __PVT__DuI__DOT__X3__DOT__A1__DOT__perform = ((0xffU 
                                                   & (DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                      >> 0x17U)) 
                                                  == 
                                                  (0xffU 
                                                   & (((DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                        << 9U) 
                                                       | (DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                          >> 0x17U)) 
                                                      + (IData)(__PVT__DuI__DOT__X3__DOT__A1__DOT__exponent_diff))));
    __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_add 
        = (((~ (IData)(DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_1)) 
            & (IData)(__PVT__DuI__DOT__X3__DOT__A1__DOT__perform))
            ? (0x1ffffffU & (DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_2 
                             + __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_b_add_sub))
            : 0U);
    __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub 
        = ((IData)(__PVT__DuI__DOT__X3__DOT__A1__DOT__perform)
            ? (0x1ffffffU & (DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_2 
                             + (((IData)(DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_1) 
                                 & (IData)(__PVT__DuI__DOT__X3__DOT__A1__DOT__perform))
                                 ? (0xffffffU & ((IData)(1U) 
                                                 + 
                                                 (~ __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_b_add_sub)))
                                 : 0U))) : 0U);
    if (((((((((0x1800000U == (0x1800000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub)) 
               | (0x1400000U == (0x1c00000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) 
              | (0x1200000U == (0x1e00000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) 
             | (0x1100000U == (0x1f00000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) 
            | (0x1080000U == (0x1f80000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) 
           | (0x1040000U == (0x1fc0000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) 
          | (0x1020000U == (0x1fe0000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) 
         | (0x1010000U == (0x1ff0000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub)))) {
        if ((0x1800000U == (0x1800000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub);
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 0U;
        } else if ((0x1400000U == (0x1c00000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 1U));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 1U;
        } else if ((0x1200000U == (0x1e00000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 2U));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 2U;
        } else if ((0x1100000U == (0x1f00000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 3U));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 3U;
        } else if ((0x1080000U == (0x1f80000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 4U));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 4U;
        } else if ((0x1040000U == (0x1fc0000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 5U));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 5U;
        } else if ((0x1020000U == (0x1fe0000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 6U));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 6U;
        } else {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 7U));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 7U;
        }
    } else if (((((((((0x1008000U == (0x1ff8000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub)) 
                      | (0x1004000U == (0x1ffc000U 
                                        & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) 
                     | (0x1002000U == (0x1ffe000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) 
                    | (0x1001000U == (0x1fff000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) 
                   | (0x1000800U == (0x1fff800U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) 
                  | (0x1000400U == (0x1fffc00U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) 
                 | (0x1000200U == (0x1fffe00U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) 
                | (0x1000100U == (0x1ffff00U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub)))) {
        if ((0x1008000U == (0x1ff8000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 8U));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 8U;
        } else if ((0x1004000U == (0x1ffc000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 9U));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 9U;
        } else if ((0x1002000U == (0x1ffe000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 0xaU));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 0xaU;
        } else if ((0x1001000U == (0x1fff000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 0xbU));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 0xbU;
        } else if ((0x1000800U == (0x1fff800U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 0xcU));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 0xcU;
        } else if ((0x1000400U == (0x1fffc00U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 0xdU));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 0xdU;
        } else if ((0x1000200U == (0x1fffe00U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 0xeU));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 0xeU;
        } else {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 0xfU));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 0xfU;
        }
    } else if (((((((((0x1000080U == (0x1ffff80U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub)) 
                      | (0x1000040U == (0x1ffffc0U 
                                        & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) 
                     | (0x1000020U == (0x1ffffe0U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) 
                    | (0x1000010U == (0x1fffff0U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) 
                   | (0x1000008U == (0x1fffff8U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) 
                  | (0x1000004U == (0x1fffffcU & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) 
                 | (0x1000002U == (0x1fffffeU & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) 
                | (0x1000001U == __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
        if ((0x1000080U == (0x1ffff80U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 0x10U));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 0x10U;
        } else if ((0x1000040U == (0x1ffffc0U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 0x11U));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 0x11U;
        } else if ((0x1000020U == (0x1ffffe0U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 0x12U));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 0x12U;
        } else if ((0x1000010U == (0x1fffff0U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 0x13U));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 0x13U;
        } else if ((0x1000008U == (0x1fffff8U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 0x14U));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 0x14U;
        } else if ((0x1000004U == (0x1fffffcU & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 0x15U));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 0x15U;
        } else if ((0x1000002U == (0x1fffffeU & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 0x16U));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 0x16U;
        } else {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 0x17U));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 0x17U;
        }
    } else if ((0x1000000U == __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub)) {
        __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
            = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 0x18U));
        __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 0x18U;
    } else {
        __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
            = (0x1ffffffU & ((IData)(1U) + (~ __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub)));
        __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 0U;
    }
    __PVT__DuI__DOT__X3__DOT__A1__DOT__result = (((0xffU 
                                                   == 
                                                   (0xffU 
                                                    & (DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                       >> 0x17U))) 
                                                  | (0xffU 
                                                     == 
                                                     (0xffU 
                                                      & (DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                         >> 0x17U))))
                                                  ? 0U
                                                  : 
                                                 ((IData)(DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_1)
                                                   ? 
                                                  ((0x80000000U 
                                                    & DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U]) 
                                                   | ((0x7f800000U 
                                                       & ((((DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                             << 9U) 
                                                            | (DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                               >> 0x17U)) 
                                                           - (IData)(__PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift)) 
                                                          << 0x17U)) 
                                                      | (0x7fffffU 
                                                         & __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff)))
                                                   : 
                                                  ((0x80000000U 
                                                    & DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U]) 
                                                   | ((0x7f800000U 
                                                       & ((((DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                             << 9U) 
                                                            | (DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                               >> 0x17U)) 
                                                           + 
                                                           (1U 
                                                            & (__PVT__DuI__DOT__X3__DOT__A1__DOT__significand_add 
                                                               >> 0x18U))) 
                                                          << 0x17U)) 
                                                      | (0x7fffffU 
                                                         & ((0x1000000U 
                                                             & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_add)
                                                             ? 
                                                            (__PVT__DuI__DOT__X3__DOT__A1__DOT__significand_add 
                                                             >> 1U)
                                                             : __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_add))))));
    __PVT__DuI__DOT__X3__DOT__M2__DOT__sign = ((__PVT__DuI__DOT__X3__DOT__M1__DOT__a_operand 
                                                ^ __PVT__DuI__DOT__X3__DOT__A1__DOT__result) 
                                               >> 0x1fU);
    __PVT__DuI__DOT__X3__DOT__M2__DOT__Exception = 
        ((0xffU == (0xffU & (__PVT__DuI__DOT__X3__DOT__M1__DOT__a_operand 
                             >> 0x17U))) | (0xffU == 
                                            (0xffU 
                                             & (__PVT__DuI__DOT__X3__DOT__A1__DOT__result 
                                                >> 0x17U))));
    __PVT__DuI__DOT__X3__DOT__M2__DOT__product = (0xffffffffffffULL 
                                                  & (__VdfgRegularize_hc373ca9b_1_3 
                                                     * (QData)((IData)(
                                                                       ((0U 
                                                                         != 
                                                                         (0xffU 
                                                                          & (__PVT__DuI__DOT__X3__DOT__A1__DOT__result 
                                                                             >> 0x17U)))
                                                                         ? 
                                                                        (0x800000U 
                                                                         | (0x7fffffU 
                                                                            & __PVT__DuI__DOT__X3__DOT__A1__DOT__result))
                                                                         : 
                                                                        (0x7fffffU 
                                                                         & __PVT__DuI__DOT__X3__DOT__A1__DOT__result))))));
    __PVT__DuI__DOT__X3__DOT__M2__DOT__product_normalised 
        = (0xffffffffffffULL & ((1U & (IData)((__PVT__DuI__DOT__X3__DOT__M2__DOT__product 
                                               >> 0x2fU)))
                                 ? __PVT__DuI__DOT__X3__DOT__M2__DOT__product
                                 : VL_SHIFTL_QQI(48,48,32, __PVT__DuI__DOT__X3__DOT__M2__DOT__product, 1U)));
    __PVT__DuI__DOT__X3__DOT__M2__DOT__zero = ((~ (IData)(__PVT__DuI__DOT__X3__DOT__M2__DOT__Exception)) 
                                               & (0ULL 
                                                  == __PVT__DuI__DOT__X3__DOT__M2__DOT__product));
    __PVT__DuI__DOT__X3__DOT__M2__DOT__exponent = (0x1ffU 
                                                   & ((((0xffU 
                                                         & (__PVT__DuI__DOT__X3__DOT__M1__DOT__a_operand 
                                                            >> 0x17U)) 
                                                        + 
                                                        (0xffU 
                                                         & (__PVT__DuI__DOT__X3__DOT__A1__DOT__result 
                                                            >> 0x17U))) 
                                                       - (IData)(0x7fU)) 
                                                      + 
                                                      (1U 
                                                       & (IData)(
                                                                 (__PVT__DuI__DOT__X3__DOT__M2__DOT__product 
                                                                  >> 0x2fU)))));
    __PVT__DuI__DOT__END__DOT__a_operand = ((IData)(__PVT__DuI__DOT__X3__DOT__M2__DOT__Exception)
                                             ? 0U : 
                                            ((IData)(__PVT__DuI__DOT__X3__DOT__M2__DOT__zero)
                                              ? ((IData)(__PVT__DuI__DOT__X3__DOT__M2__DOT__sign) 
                                                 << 0x1fU)
                                              : ((1U 
                                                  & (IData)(
                                                            ((0x100U 
                                                              == 
                                                              (0x180U 
                                                               & (IData)(__PVT__DuI__DOT__X3__DOT__M2__DOT__exponent))) 
                                                             & (~ (IData)(__PVT__DuI__DOT__X3__DOT__M2__DOT__zero)))))
                                                  ? 
                                                 (0x7f800000U 
                                                  | ((IData)(__PVT__DuI__DOT__X3__DOT__M2__DOT__sign) 
                                                     << 0x1fU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             ((0x180U 
                                                               == 
                                                               (0x180U 
                                                                & (IData)(__PVT__DuI__DOT__X3__DOT__M2__DOT__exponent))) 
                                                              & (~ (IData)(__PVT__DuI__DOT__X3__DOT__M2__DOT__zero)))))
                                                   ? 
                                                  ((IData)(__PVT__DuI__DOT__X3__DOT__M2__DOT__sign) 
                                                   << 0x1fU)
                                                   : 
                                                  (((IData)(__PVT__DuI__DOT__X3__DOT__M2__DOT__sign) 
                                                    << 0x1fU) 
                                                   | ((0x7f800000U 
                                                       & ((IData)(__PVT__DuI__DOT__X3__DOT__M2__DOT__exponent) 
                                                          << 0x17U)) 
                                                      | (0x7fffffU 
                                                         & ((IData)(
                                                                    (__PVT__DuI__DOT__X3__DOT__M2__DOT__product_normalised 
                                                                     >> 0x18U)) 
                                                            + 
                                                            ((IData)(
                                                                     (__PVT__DuI__DOT__X3__DOT__M2__DOT__product_normalised 
                                                                      >> 0x17U)) 
                                                             & (0U 
                                                                != 
                                                                (0x7fffffU 
                                                                 & (IData)(__PVT__DuI__DOT__X3__DOT__M2__DOT__product_normalised))))))))))));
    vlSelfRef.__PVT__DuI__DOT__END__DOT__sign = ((__PVT__DuI__DOT__END__DOT__a_operand 
                                                  ^ vlSelfRef.__PVT__Div_A) 
                                                 >> 0x1fU);
    vlSelfRef.__PVT__DuI__DOT__END__DOT__Exception 
        = ((0xffU == (0xffU & (__PVT__DuI__DOT__END__DOT__a_operand 
                               >> 0x17U))) | (0xffU 
                                              == (IData)(__VdfgRegularize_hc373ca9b_1_0)));
    __PVT__DuI__DOT__END__DOT__product = (0xffffffffffffULL 
                                          & ((QData)((IData)(
                                                             ((0U 
                                                               != 
                                                               (0xffU 
                                                                & (__PVT__DuI__DOT__END__DOT__a_operand 
                                                                   >> 0x17U)))
                                                               ? 
                                                              (0x800000U 
                                                               | (0x7fffffU 
                                                                  & __PVT__DuI__DOT__END__DOT__a_operand))
                                                               : 
                                                              (0x7fffffU 
                                                               & __PVT__DuI__DOT__END__DOT__a_operand)))) 
                                             * (QData)((IData)(
                                                               ((0U 
                                                                 != (IData)(__VdfgRegularize_hc373ca9b_1_0))
                                                                 ? 
                                                                (0x800000U 
                                                                 | (0x7fffffU 
                                                                    & vlSelfRef.__PVT__Div_A))
                                                                 : 
                                                                (0x7fffffU 
                                                                 & vlSelfRef.__PVT__Div_A))))));
    vlSelfRef.__PVT__DuI__DOT__END__DOT__product_normalised 
        = (0xffffffffffffULL & ((1U & (IData)((__PVT__DuI__DOT__END__DOT__product 
                                               >> 0x2fU)))
                                 ? __PVT__DuI__DOT__END__DOT__product
                                 : VL_SHIFTL_QQI(48,48,32, __PVT__DuI__DOT__END__DOT__product, 1U)));
    vlSelfRef.__PVT__DuI__DOT__END__DOT__zero = ((~ (IData)(vlSelfRef.__PVT__DuI__DOT__END__DOT__Exception)) 
                                                 & (0ULL 
                                                    == __PVT__DuI__DOT__END__DOT__product));
    vlSelfRef.__PVT__DuI__DOT__END__DOT__exponent = 
        (0x1ffU & ((((0xffU & (__PVT__DuI__DOT__END__DOT__a_operand 
                               >> 0x17U)) + (IData)(__VdfgRegularize_hc373ca9b_1_0)) 
                    - (IData)(0x7fU)) + (1U & (IData)(
                                                      (__PVT__DuI__DOT__END__DOT__product 
                                                       >> 0x2fU)))));
}

VL_INLINE_OPT VlCoroutine Vtest_oc_tiled_matmul_ALU___eval_initial__TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__22__KET____DOT__fpu_inst__Vtiming__0(Vtest_oc_tiled_matmul_ALU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_oc_tiled_matmul_ALU___eval_initial__TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__22__KET____DOT__fpu_inst__Vtiming__0\n"); );
    Vtest_oc_tiled_matmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h46d3e1fa__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( test_oc_tiled_matmul.dut.fpu_lane[22].fpu_inst.a_operand)", 
                                                                "../RTL/Converter.v", 
                                                                224);
        co_await vlSymsp->TOP.__VdlySched.delay(0x3e8ULL, 
                                                nullptr, 
                                                "../RTL/Converter.v", 
                                                225);
    }
}

VL_INLINE_OPT void Vtest_oc_tiled_matmul_ALU___nba_sequent__TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__22__KET____DOT__fpu_inst__0(Vtest_oc_tiled_matmul_ALU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_oc_tiled_matmul_ALU___nba_sequent__TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__22__KET____DOT__fpu_inst__0\n"); );
    Vtest_oc_tiled_matmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __PVT__Add_Sub_A;
    __PVT__Add_Sub_A = 0;
    IData/*31:0*/ __PVT__Add_Sub_B;
    __PVT__Add_Sub_B = 0;
    IData/*31:0*/ __PVT__Mul_A;
    __PVT__Mul_A = 0;
    IData/*31:0*/ __PVT__Mul_B;
    __PVT__Mul_B = 0;
    CData/*0:0*/ __PVT__Add_Sub_Exception;
    __PVT__Add_Sub_Exception = 0;
    CData/*0:0*/ __PVT__AddBar_Sub;
    __PVT__AddBar_Sub = 0;
    QData/*63:0*/ __VdfgRegularize_hc373ca9b_0_1;
    __VdfgRegularize_hc373ca9b_0_1 = 0;
    VlWide<3>/*64:0*/ __VdfgRegularize_hc373ca9b_0_2;
    VL_ZERO_W(65, __VdfgRegularize_hc373ca9b_0_2);
    QData/*63:0*/ __VdfgRegularize_hc373ca9b_0_4;
    __VdfgRegularize_hc373ca9b_0_4 = 0;
    QData/*63:0*/ __VdfgRegularize_hc373ca9b_0_6;
    __VdfgRegularize_hc373ca9b_0_6 = 0;
    VlWide<3>/*64:0*/ __VdfgRegularize_hc373ca9b_0_8;
    VL_ZERO_W(65, __VdfgRegularize_hc373ca9b_0_8);
    CData/*0:0*/ __PVT__AuI__DOT__operation_sub_addBar;
    __PVT__AuI__DOT__operation_sub_addBar = 0;
    CData/*0:0*/ __PVT__AuI__DOT__output_sign;
    __PVT__AuI__DOT__output_sign = 0;
    CData/*7:0*/ __PVT__AuI__DOT__exponent_diff;
    __PVT__AuI__DOT__exponent_diff = 0;
    IData/*23:0*/ __PVT__AuI__DOT__significand_b_add_sub;
    __PVT__AuI__DOT__significand_b_add_sub = 0;
    IData/*24:0*/ __PVT__AuI__DOT__significand_add;
    __PVT__AuI__DOT__significand_add = 0;
    IData/*24:0*/ __PVT__AuI__DOT__significand_sub;
    __PVT__AuI__DOT__significand_sub = 0;
    IData/*24:0*/ __PVT__AuI__DOT__subtraction_diff;
    __PVT__AuI__DOT__subtraction_diff = 0;
    CData/*0:0*/ __PVT__AuI__DOT__perform;
    __PVT__AuI__DOT__perform = 0;
    VlWide<3>/*64:0*/ AuI__DOT____VdfgRegularize_ha816c9b8_0_0;
    VL_ZERO_W(65, AuI__DOT____VdfgRegularize_ha816c9b8_0_0);
    CData/*0:0*/ AuI__DOT____VdfgRegularize_ha816c9b8_0_1;
    AuI__DOT____VdfgRegularize_ha816c9b8_0_1 = 0;
    IData/*24:0*/ AuI__DOT____VdfgRegularize_ha816c9b8_0_2;
    AuI__DOT____VdfgRegularize_ha816c9b8_0_2 = 0;
    CData/*4:0*/ __PVT__AuI__DOT__pe__DOT__shift;
    __PVT__AuI__DOT__pe__DOT__shift = 0;
    QData/*47:0*/ __PVT__MuI__DOT__product;
    __PVT__MuI__DOT__product = 0;
    QData/*47:0*/ __PVT__DuI__DOT__x0__DOT__product_normalised;
    __PVT__DuI__DOT__x0__DOT__product_normalised = 0;
    IData/*31:0*/ __PVT__DuI__DOT__X0__DOT__a_operand;
    __PVT__DuI__DOT__X0__DOT__a_operand = 0;
    IData/*31:0*/ __PVT__DuI__DOT__X0__DOT__result;
    __PVT__DuI__DOT__X0__DOT__result = 0;
    CData/*7:0*/ __PVT__DuI__DOT__X0__DOT__exponent_diff;
    __PVT__DuI__DOT__X0__DOT__exponent_diff = 0;
    IData/*23:0*/ __PVT__DuI__DOT__X0__DOT__significand_b_add_sub;
    __PVT__DuI__DOT__X0__DOT__significand_b_add_sub = 0;
    IData/*24:0*/ __PVT__DuI__DOT__X0__DOT__significand_add;
    __PVT__DuI__DOT__X0__DOT__significand_add = 0;
    IData/*24:0*/ __PVT__DuI__DOT__X0__DOT__significand_sub;
    __PVT__DuI__DOT__X0__DOT__significand_sub = 0;
    IData/*24:0*/ __PVT__DuI__DOT__X0__DOT__subtraction_diff;
    __PVT__DuI__DOT__X0__DOT__subtraction_diff = 0;
    CData/*0:0*/ __PVT__DuI__DOT__X0__DOT__perform;
    __PVT__DuI__DOT__X0__DOT__perform = 0;
    VlWide<3>/*64:0*/ DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0;
    VL_ZERO_W(65, DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0);
    CData/*0:0*/ DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_1;
    DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_1 = 0;
    IData/*24:0*/ DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_2;
    DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_2 = 0;
    CData/*4:0*/ __PVT__DuI__DOT__X0__DOT__pe__DOT__shift;
    __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 0;
    CData/*0:0*/ __PVT__DuI__DOT__X1__DOT__M1__DOT__zero;
    __PVT__DuI__DOT__X1__DOT__M1__DOT__zero = 0;
    SData/*8:0*/ __PVT__DuI__DOT__X1__DOT__M1__DOT__exponent;
    __PVT__DuI__DOT__X1__DOT__M1__DOT__exponent = 0;
    QData/*47:0*/ __PVT__DuI__DOT__X1__DOT__M1__DOT__product;
    __PVT__DuI__DOT__X1__DOT__M1__DOT__product = 0;
    QData/*47:0*/ __PVT__DuI__DOT__X1__DOT__M1__DOT__product_normalised;
    __PVT__DuI__DOT__X1__DOT__M1__DOT__product_normalised = 0;
    IData/*31:0*/ __PVT__DuI__DOT__X1__DOT__A1__DOT__result;
    __PVT__DuI__DOT__X1__DOT__A1__DOT__result = 0;
    CData/*7:0*/ __PVT__DuI__DOT__X1__DOT__A1__DOT__exponent_diff;
    __PVT__DuI__DOT__X1__DOT__A1__DOT__exponent_diff = 0;
    IData/*23:0*/ __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_b_add_sub;
    __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_b_add_sub = 0;
    IData/*24:0*/ __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_add;
    __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_add = 0;
    IData/*24:0*/ __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub;
    __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub = 0;
    IData/*24:0*/ __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff;
    __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff = 0;
    CData/*0:0*/ __PVT__DuI__DOT__X1__DOT__A1__DOT__perform;
    __PVT__DuI__DOT__X1__DOT__A1__DOT__perform = 0;
    VlWide<3>/*64:0*/ DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0;
    VL_ZERO_W(65, DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0);
    CData/*0:0*/ DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_1;
    DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_1 = 0;
    IData/*24:0*/ DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_2;
    DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_2 = 0;
    CData/*4:0*/ __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift;
    __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 0;
    CData/*0:0*/ __PVT__DuI__DOT__X1__DOT__M2__DOT__Exception;
    __PVT__DuI__DOT__X1__DOT__M2__DOT__Exception = 0;
    CData/*0:0*/ __PVT__DuI__DOT__X1__DOT__M2__DOT__sign;
    __PVT__DuI__DOT__X1__DOT__M2__DOT__sign = 0;
    CData/*0:0*/ __PVT__DuI__DOT__X1__DOT__M2__DOT__zero;
    __PVT__DuI__DOT__X1__DOT__M2__DOT__zero = 0;
    SData/*8:0*/ __PVT__DuI__DOT__X1__DOT__M2__DOT__exponent;
    __PVT__DuI__DOT__X1__DOT__M2__DOT__exponent = 0;
    QData/*47:0*/ __PVT__DuI__DOT__X1__DOT__M2__DOT__product;
    __PVT__DuI__DOT__X1__DOT__M2__DOT__product = 0;
    QData/*47:0*/ __PVT__DuI__DOT__X1__DOT__M2__DOT__product_normalised;
    __PVT__DuI__DOT__X1__DOT__M2__DOT__product_normalised = 0;
    IData/*31:0*/ __PVT__DuI__DOT__X2__DOT__M1__DOT__a_operand;
    __PVT__DuI__DOT__X2__DOT__M1__DOT__a_operand = 0;
    CData/*0:0*/ __PVT__DuI__DOT__X2__DOT__M1__DOT__zero;
    __PVT__DuI__DOT__X2__DOT__M1__DOT__zero = 0;
    SData/*8:0*/ __PVT__DuI__DOT__X2__DOT__M1__DOT__exponent;
    __PVT__DuI__DOT__X2__DOT__M1__DOT__exponent = 0;
    QData/*47:0*/ __PVT__DuI__DOT__X2__DOT__M1__DOT__product;
    __PVT__DuI__DOT__X2__DOT__M1__DOT__product = 0;
    QData/*47:0*/ __PVT__DuI__DOT__X2__DOT__M1__DOT__product_normalised;
    __PVT__DuI__DOT__X2__DOT__M1__DOT__product_normalised = 0;
    IData/*31:0*/ __PVT__DuI__DOT__X2__DOT__A1__DOT__result;
    __PVT__DuI__DOT__X2__DOT__A1__DOT__result = 0;
    CData/*7:0*/ __PVT__DuI__DOT__X2__DOT__A1__DOT__exponent_diff;
    __PVT__DuI__DOT__X2__DOT__A1__DOT__exponent_diff = 0;
    IData/*23:0*/ __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_b_add_sub;
    __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_b_add_sub = 0;
    IData/*24:0*/ __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_add;
    __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_add = 0;
    IData/*24:0*/ __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub;
    __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub = 0;
    IData/*24:0*/ __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff;
    __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff = 0;
    CData/*0:0*/ __PVT__DuI__DOT__X2__DOT__A1__DOT__perform;
    __PVT__DuI__DOT__X2__DOT__A1__DOT__perform = 0;
    VlWide<3>/*64:0*/ DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0;
    VL_ZERO_W(65, DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0);
    CData/*0:0*/ DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_1;
    DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_1 = 0;
    IData/*24:0*/ DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_2;
    DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_2 = 0;
    CData/*4:0*/ __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift;
    __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 0;
    CData/*0:0*/ __PVT__DuI__DOT__X2__DOT__M2__DOT__Exception;
    __PVT__DuI__DOT__X2__DOT__M2__DOT__Exception = 0;
    CData/*0:0*/ __PVT__DuI__DOT__X2__DOT__M2__DOT__sign;
    __PVT__DuI__DOT__X2__DOT__M2__DOT__sign = 0;
    CData/*0:0*/ __PVT__DuI__DOT__X2__DOT__M2__DOT__zero;
    __PVT__DuI__DOT__X2__DOT__M2__DOT__zero = 0;
    SData/*8:0*/ __PVT__DuI__DOT__X2__DOT__M2__DOT__exponent;
    __PVT__DuI__DOT__X2__DOT__M2__DOT__exponent = 0;
    QData/*47:0*/ __PVT__DuI__DOT__X2__DOT__M2__DOT__product;
    __PVT__DuI__DOT__X2__DOT__M2__DOT__product = 0;
    QData/*47:0*/ __PVT__DuI__DOT__X2__DOT__M2__DOT__product_normalised;
    __PVT__DuI__DOT__X2__DOT__M2__DOT__product_normalised = 0;
    IData/*31:0*/ __PVT__DuI__DOT__X3__DOT__M1__DOT__a_operand;
    __PVT__DuI__DOT__X3__DOT__M1__DOT__a_operand = 0;
    CData/*0:0*/ __PVT__DuI__DOT__X3__DOT__M1__DOT__zero;
    __PVT__DuI__DOT__X3__DOT__M1__DOT__zero = 0;
    SData/*8:0*/ __PVT__DuI__DOT__X3__DOT__M1__DOT__exponent;
    __PVT__DuI__DOT__X3__DOT__M1__DOT__exponent = 0;
    QData/*47:0*/ __PVT__DuI__DOT__X3__DOT__M1__DOT__product;
    __PVT__DuI__DOT__X3__DOT__M1__DOT__product = 0;
    QData/*47:0*/ __PVT__DuI__DOT__X3__DOT__M1__DOT__product_normalised;
    __PVT__DuI__DOT__X3__DOT__M1__DOT__product_normalised = 0;
    IData/*31:0*/ __PVT__DuI__DOT__X3__DOT__A1__DOT__result;
    __PVT__DuI__DOT__X3__DOT__A1__DOT__result = 0;
    CData/*7:0*/ __PVT__DuI__DOT__X3__DOT__A1__DOT__exponent_diff;
    __PVT__DuI__DOT__X3__DOT__A1__DOT__exponent_diff = 0;
    IData/*23:0*/ __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_b_add_sub;
    __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_b_add_sub = 0;
    IData/*24:0*/ __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_add;
    __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_add = 0;
    IData/*24:0*/ __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub;
    __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub = 0;
    IData/*24:0*/ __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff;
    __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff = 0;
    CData/*0:0*/ __PVT__DuI__DOT__X3__DOT__A1__DOT__perform;
    __PVT__DuI__DOT__X3__DOT__A1__DOT__perform = 0;
    VlWide<3>/*64:0*/ DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0;
    VL_ZERO_W(65, DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0);
    CData/*0:0*/ DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_1;
    DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_1 = 0;
    IData/*24:0*/ DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_2;
    DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_2 = 0;
    CData/*4:0*/ __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift;
    __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 0;
    CData/*0:0*/ __PVT__DuI__DOT__X3__DOT__M2__DOT__Exception;
    __PVT__DuI__DOT__X3__DOT__M2__DOT__Exception = 0;
    CData/*0:0*/ __PVT__DuI__DOT__X3__DOT__M2__DOT__sign;
    __PVT__DuI__DOT__X3__DOT__M2__DOT__sign = 0;
    CData/*0:0*/ __PVT__DuI__DOT__X3__DOT__M2__DOT__zero;
    __PVT__DuI__DOT__X3__DOT__M2__DOT__zero = 0;
    SData/*8:0*/ __PVT__DuI__DOT__X3__DOT__M2__DOT__exponent;
    __PVT__DuI__DOT__X3__DOT__M2__DOT__exponent = 0;
    QData/*47:0*/ __PVT__DuI__DOT__X3__DOT__M2__DOT__product;
    __PVT__DuI__DOT__X3__DOT__M2__DOT__product = 0;
    QData/*47:0*/ __PVT__DuI__DOT__X3__DOT__M2__DOT__product_normalised;
    __PVT__DuI__DOT__X3__DOT__M2__DOT__product_normalised = 0;
    IData/*31:0*/ __PVT__DuI__DOT__END__DOT__a_operand;
    __PVT__DuI__DOT__END__DOT__a_operand = 0;
    QData/*47:0*/ __PVT__DuI__DOT__END__DOT__product;
    __PVT__DuI__DOT__END__DOT__product = 0;
    IData/*31:0*/ __PVT__IuF__DOT__unnamedblk1__DOT__i;
    __PVT__IuF__DOT__unnamedblk1__DOT__i = 0;
    CData/*7:0*/ __VdfgRegularize_hc373ca9b_1_0;
    __VdfgRegularize_hc373ca9b_1_0 = 0;
    QData/*47:0*/ __VdfgRegularize_hc373ca9b_1_1;
    __VdfgRegularize_hc373ca9b_1_1 = 0;
    QData/*47:0*/ __VdfgRegularize_hc373ca9b_1_2;
    __VdfgRegularize_hc373ca9b_1_2 = 0;
    QData/*47:0*/ __VdfgRegularize_hc373ca9b_1_3;
    __VdfgRegularize_hc373ca9b_1_3 = 0;
    IData/*30:0*/ __VdfgRegularize_hebeb780c_0_84;
    __VdfgRegularize_hebeb780c_0_84 = 0;
    IData/*30:0*/ __VdfgRegularize_hebeb780c_0_85;
    __VdfgRegularize_hebeb780c_0_85 = 0;
    IData/*30:0*/ __VdfgRegularize_hebeb780c_0_86;
    __VdfgRegularize_hebeb780c_0_86 = 0;
    // Body
    vlSelfRef.a_operand = ((vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x58U] 
                            << 2U) | (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x57U] 
                                      >> 0x1eU));
    vlSelfRef.__PVT__IuF__DOT__val = ((0x20000000U 
                                       & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x58U])
                                       ? ((IData)(1U) 
                                          + (~ ((vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x58U] 
                                                 << 2U) 
                                                | (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x57U] 
                                                   >> 0x1eU))))
                                       : ((vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x58U] 
                                           << 2U) | 
                                          (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x57U] 
                                           >> 0x1eU)));
    __VdfgRegularize_hc373ca9b_0_1 = (((QData)((IData)(
                                                       ((vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x58U] 
                                                         << 2U) 
                                                        | (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x57U] 
                                                           >> 0x1eU)))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x38U] 
                                                                     << 2U) 
                                                                    | (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x37U] 
                                                                       >> 0x1eU)))));
    vlSelfRef.__PVT__Floating_Point = (((9U == (IData)(vlSymsp->TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__0__KET____DOT__fpu_inst.Operation))
                                         ? ((vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x58U] 
                                             << 2U) 
                                            | (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x57U] 
                                               >> 0x1eU))
                                         : 0U) & ((9U 
                                                   == (IData)(vlSymsp->TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__0__KET____DOT__fpu_inst.Operation))
                                                   ? 0xffffffffU
                                                   : 0U));
    vlSelfRef.__PVT__IuF__DOT__clz = 0x1fU;
    __PVT__IuF__DOT__unnamedblk1__DOT__i = 0x1fU;
    {
        while (VL_LTES_III(32, 0U, __PVT__IuF__DOT__unnamedblk1__DOT__i)) {
            if ((1U & (vlSelfRef.__PVT__IuF__DOT__val 
                       >> (0x1fU & __PVT__IuF__DOT__unnamedblk1__DOT__i)))) {
                vlSelfRef.__PVT__IuF__DOT__clz = (0x1fU 
                                                  & ((IData)(0x1fU) 
                                                     - __PVT__IuF__DOT__unnamedblk1__DOT__i));
                goto __Vlabel0;
            }
            __PVT__IuF__DOT__unnamedblk1__DOT__i = 
                (__PVT__IuF__DOT__unnamedblk1__DOT__i 
                 - (IData)(1U));
        }
        __Vlabel0: ;
    }
    __VdfgRegularize_hc373ca9b_0_4 = ((1U == (IData)(vlSymsp->TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__0__KET____DOT__fpu_inst.Operation))
                                       ? __VdfgRegularize_hc373ca9b_0_1
                                       : 0ULL);
    if ((0xaU == (IData)(vlSymsp->TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__0__KET____DOT__fpu_inst.Operation))) {
        __VdfgRegularize_hc373ca9b_0_2[0U] = ((IData)(__VdfgRegularize_hc373ca9b_0_1) 
                                              << 1U);
        __VdfgRegularize_hc373ca9b_0_2[1U] = (((IData)(__VdfgRegularize_hc373ca9b_0_1) 
                                               >> 0x1fU) 
                                              | ((IData)(
                                                         (__VdfgRegularize_hc373ca9b_0_1 
                                                          >> 0x20U)) 
                                                 << 1U));
        __VdfgRegularize_hc373ca9b_0_2[2U] = ((IData)(
                                                      (__VdfgRegularize_hc373ca9b_0_1 
                                                       >> 0x20U)) 
                                              >> 0x1fU);
    } else {
        __VdfgRegularize_hc373ca9b_0_2[0U] = 0U;
        __VdfgRegularize_hc373ca9b_0_2[1U] = 0U;
        __VdfgRegularize_hc373ca9b_0_2[2U] = 0U;
    }
    if ((3U == (IData)(vlSymsp->TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__0__KET____DOT__fpu_inst.Operation))) {
        __VdfgRegularize_hc373ca9b_0_8[0U] = (1U | 
                                              ((IData)(__VdfgRegularize_hc373ca9b_0_1) 
                                               << 1U));
        __VdfgRegularize_hc373ca9b_0_8[1U] = (((IData)(__VdfgRegularize_hc373ca9b_0_1) 
                                               >> 0x1fU) 
                                              | ((IData)(
                                                         (__VdfgRegularize_hc373ca9b_0_1 
                                                          >> 0x20U)) 
                                                 << 1U));
        __VdfgRegularize_hc373ca9b_0_8[2U] = ((IData)(
                                                      (__VdfgRegularize_hc373ca9b_0_1 
                                                       >> 0x20U)) 
                                              >> 0x1fU);
    } else {
        __VdfgRegularize_hc373ca9b_0_8[0U] = 0U;
        __VdfgRegularize_hc373ca9b_0_8[1U] = 0U;
        __VdfgRegularize_hc373ca9b_0_8[2U] = 0U;
    }
    __VdfgRegularize_hc373ca9b_0_6 = ((2U == (IData)(vlSymsp->TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__0__KET____DOT__fpu_inst.Operation))
                                       ? __VdfgRegularize_hc373ca9b_0_1
                                       : 0ULL);
    if ((0x7fU == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                            >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 0U;
    } else if ((0x80U == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x400000U & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x81U == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x600000U & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x82U == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x700000U & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x83U == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x780000U & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x84U == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x7c0000U & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x85U == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x7e0000U & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x86U == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x7f0000U & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x87U == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x7f8000U & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x88U == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x7fc000U & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x89U == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x7fe000U & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x8aU == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x7ff000U & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x8bU == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x7ff800U & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x8cU == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x7ffc00U & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x8dU == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x7ffe00U & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x8eU == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x7fff00U & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x8fU == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x7fff80U & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x90U == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x7fffc0U & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x91U == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x7fffe0U & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x92U == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x7ffff0U & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x93U == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x7ffff8U & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x94U == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x7ffffcU & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x95U == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x7ffffeU & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x96U <= (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x7fffffU & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x7eU >= (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 0U;
    }
    if ((0U == vlSelfRef.__PVT__IuF__DOT__val)) {
        vlSelfRef.__PVT__IuF__DOT__mantissa = 0U;
    } else {
        vlSelfRef.__PVT__IuF__DOT__shifted = (vlSelfRef.__PVT__IuF__DOT__val 
                                              << (IData)(vlSelfRef.__PVT__IuF__DOT__clz));
        vlSelfRef.__PVT__IuF__DOT__mantissa = (0x7fffffU 
                                               & (vlSelfRef.__PVT__IuF__DOT__shifted 
                                                  >> 8U));
    }
    __PVT__Mul_A = ((IData)((__VdfgRegularize_hc373ca9b_0_4 
                             >> 0x20U)) & (IData)((
                                                   ((1U 
                                                     == (IData)(vlSymsp->TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__0__KET____DOT__fpu_inst.Operation))
                                                     ? 0xffffffffffffffffULL
                                                     : 0ULL) 
                                                   >> 0x20U)));
    __PVT__Mul_B = ((IData)(__VdfgRegularize_hc373ca9b_0_4) 
                    & (IData)(((1U == (IData)(vlSymsp->TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__0__KET____DOT__fpu_inst.Operation))
                                ? 0xffffffffffffffffULL
                                : 0ULL)));
    __PVT__AddBar_Sub = (1U & ((__VdfgRegularize_hc373ca9b_0_2[0U] 
                                & ((0xaU == (IData)(vlSymsp->TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__0__KET____DOT__fpu_inst.Operation))
                                    ? 0xffffffffU : 0U)) 
                               | (__VdfgRegularize_hc373ca9b_0_8[0U] 
                                  & ((3U == (IData)(vlSymsp->TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__0__KET____DOT__fpu_inst.Operation))
                                      ? 0xffffffffU
                                      : 0U))));
    __PVT__Add_Sub_A = ((((__VdfgRegularize_hc373ca9b_0_2[2U] 
                           << 0x1fU) | (__VdfgRegularize_hc373ca9b_0_2[1U] 
                                        >> 1U)) & (0x80000000U 
                                                   | (((0xaU 
                                                        == (IData)(vlSymsp->TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__0__KET____DOT__fpu_inst.Operation))
                                                        ? 0xffffffffU
                                                        : 0U) 
                                                      >> 1U))) 
                        | (((__VdfgRegularize_hc373ca9b_0_8[2U] 
                             << 0x1fU) | (__VdfgRegularize_hc373ca9b_0_8[1U] 
                                          >> 1U)) & 
                           (0x80000000U | (((3U == (IData)(vlSymsp->TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__0__KET____DOT__fpu_inst.Operation))
                                             ? 0xffffffffU
                                             : 0U) 
                                           >> 1U))));
    __PVT__Add_Sub_B = ((((__VdfgRegularize_hc373ca9b_0_2[1U] 
                           << 0x1fU) | (__VdfgRegularize_hc373ca9b_0_2[0U] 
                                        >> 1U)) & (
                                                   (((0xaU 
                                                      == (IData)(vlSymsp->TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__0__KET____DOT__fpu_inst.Operation))
                                                      ? 0xffffffffU
                                                      : 0U) 
                                                    << 0x1fU) 
                                                   | (((0xaU 
                                                        == (IData)(vlSymsp->TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__0__KET____DOT__fpu_inst.Operation))
                                                        ? 0xffffffffU
                                                        : 0U) 
                                                      >> 1U))) 
                        | (((__VdfgRegularize_hc373ca9b_0_8[1U] 
                             << 0x1fU) | (__VdfgRegularize_hc373ca9b_0_8[0U] 
                                          >> 1U)) & 
                           ((((3U == (IData)(vlSymsp->TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__0__KET____DOT__fpu_inst.Operation))
                               ? 0xffffffffU : 0U) 
                             << 0x1fU) | (((3U == (IData)(vlSymsp->TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__0__KET____DOT__fpu_inst.Operation))
                                            ? 0xffffffffU
                                            : 0U) >> 1U))));
    vlSelfRef.__PVT__Div_A = ((IData)((__VdfgRegularize_hc373ca9b_0_6 
                                       >> 0x20U)) & (IData)(
                                                            (((2U 
                                                               == (IData)(vlSymsp->TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__0__KET____DOT__fpu_inst.Operation))
                                                               ? 0xffffffffffffffffULL
                                                               : 0ULL) 
                                                             >> 0x20U)));
    vlSelfRef.__PVT__Div_B = ((IData)(__VdfgRegularize_hc373ca9b_0_6) 
                              & (IData)(((2U == (IData)(vlSymsp->TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__0__KET____DOT__fpu_inst.Operation))
                                          ? 0xffffffffffffffffULL
                                          : 0ULL)));
    vlSelfRef.__PVT__MuI__DOT__sign = ((__PVT__Mul_A 
                                        ^ __PVT__Mul_B) 
                                       >> 0x1fU);
    vlSelfRef.__PVT__Mul_Exception = ((0xffU == (0xffU 
                                                 & (__PVT__Mul_A 
                                                    >> 0x17U))) 
                                      | (0xffU == (0xffU 
                                                   & (__PVT__Mul_B 
                                                      >> 0x17U))));
    __PVT__MuI__DOT__product = (0xffffffffffffULL & 
                                ((QData)((IData)(((0U 
                                                   != 
                                                   (0xffU 
                                                    & (__PVT__Mul_A 
                                                       >> 0x17U)))
                                                   ? 
                                                  (0x800000U 
                                                   | (0x7fffffU 
                                                      & __PVT__Mul_A))
                                                   : 
                                                  (0x7fffffU 
                                                   & __PVT__Mul_A)))) 
                                 * (QData)((IData)(
                                                   ((0U 
                                                     != 
                                                     (0xffU 
                                                      & (__PVT__Mul_B 
                                                         >> 0x17U)))
                                                     ? 
                                                    (0x800000U 
                                                     | (0x7fffffU 
                                                        & __PVT__Mul_B))
                                                     : 
                                                    (0x7fffffU 
                                                     & __PVT__Mul_B))))));
    if (((0x7fffffffU & __PVT__Add_Sub_A) < (0x7fffffffU 
                                             & __PVT__Add_Sub_B))) {
        AuI__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
            = (IData)((((QData)((IData)(__PVT__Add_Sub_B)) 
                        << 0x20U) | (QData)((IData)(__PVT__Add_Sub_A))));
        AuI__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            = (IData)(((((QData)((IData)(__PVT__Add_Sub_B)) 
                         << 0x20U) | (QData)((IData)(__PVT__Add_Sub_A))) 
                       >> 0x20U));
        AuI__DOT____VdfgRegularize_ha816c9b8_0_0[2U] = 1U;
    } else {
        AuI__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
            = (IData)((((QData)((IData)(__PVT__Add_Sub_A)) 
                        << 0x20U) | (QData)((IData)(__PVT__Add_Sub_B))));
        AuI__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            = (IData)(((((QData)((IData)(__PVT__Add_Sub_A)) 
                         << 0x20U) | (QData)((IData)(__PVT__Add_Sub_B))) 
                       >> 0x20U));
        AuI__DOT____VdfgRegularize_ha816c9b8_0_0[2U] = 0U;
    }
    __VdfgRegularize_hc373ca9b_1_0 = (0xffU & ((vlSelfRef.__PVT__Div_A 
                                                >> 0x17U) 
                                               + ((IData)(0x7eU) 
                                                  - 
                                                  (vlSelfRef.__PVT__Div_B 
                                                   >> 0x17U))));
    __PVT__DuI__DOT__x0__DOT__product_normalised = 
        (0xffffffffffffULL & ((1U & (IData)((1ULL & 
                                             ((0x8b4b4bULL 
                                               * (0x800000ULL 
                                                  | (QData)((IData)(
                                                                    (0x7fffffU 
                                                                     & vlSelfRef.__PVT__Div_B))))) 
                                              >> 0x2fU))))
                               ? (0x8b4b4bULL * (0x800000ULL 
                                                 | (QData)((IData)(
                                                                   (0x7fffffU 
                                                                    & vlSelfRef.__PVT__Div_B)))))
                               : VL_SHIFTL_QQI(48,48,32, 
                                               (0x8b4b4bULL 
                                                * (0x800000ULL 
                                                   | (QData)((IData)(
                                                                     (0x7fffffU 
                                                                      & vlSelfRef.__PVT__Div_B))))), 1U)));
    vlSelfRef.__PVT__MuI__DOT__product_normalised = 
        (0xffffffffffffULL & ((1U & (IData)((__PVT__MuI__DOT__product 
                                             >> 0x2fU)))
                               ? __PVT__MuI__DOT__product
                               : VL_SHIFTL_QQI(48,48,32, __PVT__MuI__DOT__product, 1U)));
    vlSelfRef.__PVT__MuI__DOT__zero = ((~ (IData)(vlSelfRef.__PVT__Mul_Exception)) 
                                       & (0ULL == __PVT__MuI__DOT__product));
    vlSelfRef.__PVT__MuI__DOT__exponent = (0x1ffU & 
                                           ((((0xffU 
                                               & (__PVT__Mul_A 
                                                  >> 0x17U)) 
                                              + (0xffU 
                                                 & (__PVT__Mul_B 
                                                    >> 0x17U))) 
                                             - (IData)(0x7fU)) 
                                            + (1U & (IData)(
                                                            (__PVT__MuI__DOT__product 
                                                             >> 0x2fU)))));
    __PVT__Add_Sub_Exception = ((0xffU == (0xffU & 
                                           (AuI__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                            >> 0x17U))) 
                                | (0xffU == (0xffU 
                                             & (AuI__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                >> 0x17U))));
    AuI__DOT____VdfgRegularize_ha816c9b8_0_2 = ((0U 
                                                 != 
                                                 (0xffU 
                                                  & (AuI__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                     >> 0x17U)))
                                                 ? 
                                                (0x800000U 
                                                 | (0x7fffffU 
                                                    & AuI__DOT____VdfgRegularize_ha816c9b8_0_0[1U]))
                                                 : 
                                                (0x7fffffU 
                                                 & AuI__DOT____VdfgRegularize_ha816c9b8_0_0[1U]));
    AuI__DOT____VdfgRegularize_ha816c9b8_0_1 = ((AuI__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                 ^ 
                                                 AuI__DOT____VdfgRegularize_ha816c9b8_0_0[0U]) 
                                                >> 0x1fU);
    if (__PVT__AddBar_Sub) {
        __PVT__AuI__DOT__output_sign = (1U & ((1U & 
                                               AuI__DOT____VdfgRegularize_ha816c9b8_0_0[2U])
                                               ? (~ 
                                                  (AuI__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                   >> 0x1fU))
                                               : (AuI__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                  >> 0x1fU)));
        __PVT__AuI__DOT__operation_sub_addBar = (1U 
                                                 & (IData)(AuI__DOT____VdfgRegularize_ha816c9b8_0_1));
    } else {
        __PVT__AuI__DOT__output_sign = (1U & (AuI__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                              >> 0x1fU));
        __PVT__AuI__DOT__operation_sub_addBar = (1U 
                                                 & (~ (IData)(AuI__DOT____VdfgRegularize_ha816c9b8_0_1)));
    }
    __PVT__AuI__DOT__exponent_diff = (0xffU & (((AuI__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                 << 9U) 
                                                | (AuI__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                   >> 0x17U)) 
                                               - ((
                                                   AuI__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                   << 9U) 
                                                  | (AuI__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                     >> 0x17U))));
    __PVT__DuI__DOT__X0__DOT__a_operand = ((0ULL == 
                                            (0xffffffffffffULL 
                                             & (0x8b4b4bULL 
                                                * (0x800000ULL 
                                                   | (QData)((IData)(
                                                                     (0x7fffffU 
                                                                      & vlSelfRef.__PVT__Div_B)))))))
                                            ? 0x80000000U
                                            : ((1U 
                                                & ((((IData)(0x7fU) 
                                                     + 
                                                     (1U 
                                                      & (IData)(
                                                                (1ULL 
                                                                 & ((0x8b4b4bULL 
                                                                     * 
                                                                     (0x800000ULL 
                                                                      | (QData)((IData)(
                                                                                (0x7fffffU 
                                                                                & vlSelfRef.__PVT__Div_B))))) 
                                                                    >> 0x2fU))))) 
                                                    >> 8U) 
                                                   & ((~ 
                                                       (1U 
                                                        & (((IData)(0x7fU) 
                                                            + 
                                                            (1U 
                                                             & (IData)(
                                                                       (1ULL 
                                                                        & ((0x8b4b4bULL 
                                                                            * 
                                                                            (0x800000ULL 
                                                                             | (QData)((IData)(
                                                                                (0x7fffffU 
                                                                                & vlSelfRef.__PVT__Div_B))))) 
                                                                           >> 0x2fU))))) 
                                                           >> 7U))) 
                                                      & (0ULL 
                                                         != 
                                                         (0xffffffffffffULL 
                                                          & (0x8b4b4bULL 
                                                             * 
                                                             (0x800000ULL 
                                                              | (QData)((IData)(
                                                                                (0x7fffffU 
                                                                                & vlSelfRef.__PVT__Div_B))))))))))
                                                ? 0xff800000U
                                                : (
                                                   (1U 
                                                    & ((((IData)(0x7fU) 
                                                         + 
                                                         (1U 
                                                          & (IData)(
                                                                    (1ULL 
                                                                     & ((0x8b4b4bULL 
                                                                         * 
                                                                         (0x800000ULL 
                                                                          | (QData)((IData)(
                                                                                (0x7fffffU 
                                                                                & vlSelfRef.__PVT__Div_B))))) 
                                                                        >> 0x2fU))))) 
                                                        >> 8U) 
                                                       & ((0ULL 
                                                           != 
                                                           (0xffffffffffffULL 
                                                            & (0x8b4b4bULL 
                                                               * 
                                                               (0x800000ULL 
                                                                | (QData)((IData)(
                                                                                (0x7fffffU 
                                                                                & vlSelfRef.__PVT__Div_B))))))) 
                                                          & (((IData)(0x7fU) 
                                                              + 
                                                              (1U 
                                                               & (IData)(
                                                                         (1ULL 
                                                                          & ((0x8b4b4bULL 
                                                                              * 
                                                                              (0x800000ULL 
                                                                               | (QData)((IData)(
                                                                                (0x7fffffU 
                                                                                & vlSelfRef.__PVT__Div_B))))) 
                                                                             >> 0x2fU))))) 
                                                             >> 7U))))
                                                    ? 0x80000000U
                                                    : 
                                                   (0x80000000U 
                                                    | ((0x7f800000U 
                                                        & (((IData)(0x7fU) 
                                                            + 
                                                            (1U 
                                                             & (IData)(
                                                                       (1ULL 
                                                                        & ((0x8b4b4bULL 
                                                                            * 
                                                                            (0x800000ULL 
                                                                             | (QData)((IData)(
                                                                                (0x7fffffU 
                                                                                & vlSelfRef.__PVT__Div_B))))) 
                                                                           >> 0x2fU))))) 
                                                           << 0x17U)) 
                                                       | (0x7fffffU 
                                                          & ((IData)(
                                                                     (__PVT__DuI__DOT__x0__DOT__product_normalised 
                                                                      >> 0x18U)) 
                                                             + 
                                                             ((IData)(
                                                                      (__PVT__DuI__DOT__x0__DOT__product_normalised 
                                                                       >> 0x17U)) 
                                                              & (0U 
                                                                 != 
                                                                 (0x7fffffU 
                                                                  & (IData)(__PVT__DuI__DOT__x0__DOT__product_normalised)))))))))));
    vlSelfRef.__PVT__Mul_Overflow = (1U & (IData)((
                                                   (0x100U 
                                                    == 
                                                    (0x180U 
                                                     & (IData)(vlSelfRef.__PVT__MuI__DOT__exponent))) 
                                                   & (~ (IData)(vlSelfRef.__PVT__MuI__DOT__zero)))));
    vlSelfRef.__PVT__Mul_Underflow = (1U & (IData)(
                                                   ((0x180U 
                                                     == 
                                                     (0x180U 
                                                      & (IData)(vlSelfRef.__PVT__MuI__DOT__exponent))) 
                                                    & (~ (IData)(vlSelfRef.__PVT__MuI__DOT__zero)))));
    __PVT__AuI__DOT__significand_b_add_sub = (0xffffffU 
                                              & VL_SHIFTR_III(24,24,8, 
                                                              ((0U 
                                                                != 
                                                                (0xffU 
                                                                 & (AuI__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                                    >> 0x17U)))
                                                                ? 
                                                               (0x800000U 
                                                                | (0x7fffffU 
                                                                   & AuI__DOT____VdfgRegularize_ha816c9b8_0_0[0U]))
                                                                : 
                                                               (0x7fffffU 
                                                                & AuI__DOT____VdfgRegularize_ha816c9b8_0_0[0U])), (IData)(__PVT__AuI__DOT__exponent_diff)));
    __PVT__AuI__DOT__perform = ((0xffU & (AuI__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                          >> 0x17U)) 
                                == (0xffU & (((AuI__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                               << 9U) 
                                              | (AuI__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                 >> 0x17U)) 
                                             + (IData)(__PVT__AuI__DOT__exponent_diff))));
    if ((0x4034b4b5U > (0x7fffffffU & __PVT__DuI__DOT__X0__DOT__a_operand))) {
        DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
            = __PVT__DuI__DOT__X0__DOT__a_operand;
        DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[1U] = 0x4034b4b5U;
        DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[2U] = 1U;
    } else {
        DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
            = (IData)((0x4034b4b5ULL | ((QData)((IData)(__PVT__DuI__DOT__X0__DOT__a_operand)) 
                                        << 0x20U)));
        DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            = (IData)(((0x4034b4b5ULL | ((QData)((IData)(__PVT__DuI__DOT__X0__DOT__a_operand)) 
                                         << 0x20U)) 
                       >> 0x20U));
        DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[2U] = 0U;
    }
    __PVT__AuI__DOT__significand_add = (((IData)(__PVT__AuI__DOT__perform) 
                                         & (IData)(__PVT__AuI__DOT__operation_sub_addBar))
                                         ? (0x1ffffffU 
                                            & (AuI__DOT____VdfgRegularize_ha816c9b8_0_2 
                                               + __PVT__AuI__DOT__significand_b_add_sub))
                                         : 0U);
    __PVT__AuI__DOT__significand_sub = ((IData)(__PVT__AuI__DOT__perform)
                                         ? (0x1ffffffU 
                                            & (AuI__DOT____VdfgRegularize_ha816c9b8_0_2 
                                               + ((
                                                   (~ (IData)(__PVT__AuI__DOT__operation_sub_addBar)) 
                                                   & (IData)(__PVT__AuI__DOT__perform))
                                                   ? 
                                                  (0xffffffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (~ __PVT__AuI__DOT__significand_b_add_sub)))
                                                   : 0U)))
                                         : 0U);
    DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_2 
        = ((0U != (0xffU & (DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                            >> 0x17U))) ? (0x800000U 
                                           | (0x7fffffU 
                                              & DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[1U]))
            : (0x7fffffU & DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[1U]));
    DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_1 
        = ((DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            ^ DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[0U]) 
           >> 0x1fU);
    __PVT__DuI__DOT__X0__DOT__exponent_diff = (0xffU 
                                               & (((DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                    << 9U) 
                                                   | (DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                      >> 0x17U)) 
                                                  - 
                                                  ((DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                    << 9U) 
                                                   | (DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                      >> 0x17U))));
    if (((((((((0x1800000U == (0x1800000U & __PVT__AuI__DOT__significand_sub)) 
               | (0x1400000U == (0x1c00000U & __PVT__AuI__DOT__significand_sub))) 
              | (0x1200000U == (0x1e00000U & __PVT__AuI__DOT__significand_sub))) 
             | (0x1100000U == (0x1f00000U & __PVT__AuI__DOT__significand_sub))) 
            | (0x1080000U == (0x1f80000U & __PVT__AuI__DOT__significand_sub))) 
           | (0x1040000U == (0x1fc0000U & __PVT__AuI__DOT__significand_sub))) 
          | (0x1020000U == (0x1fe0000U & __PVT__AuI__DOT__significand_sub))) 
         | (0x1010000U == (0x1ff0000U & __PVT__AuI__DOT__significand_sub)))) {
        if ((0x1800000U == (0x1800000U & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & __PVT__AuI__DOT__significand_sub);
            __PVT__AuI__DOT__pe__DOT__shift = 0U;
        } else if ((0x1400000U == (0x1c00000U & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 1U));
            __PVT__AuI__DOT__pe__DOT__shift = 1U;
        } else if ((0x1200000U == (0x1e00000U & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 2U));
            __PVT__AuI__DOT__pe__DOT__shift = 2U;
        } else if ((0x1100000U == (0x1f00000U & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 3U));
            __PVT__AuI__DOT__pe__DOT__shift = 3U;
        } else if ((0x1080000U == (0x1f80000U & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 4U));
            __PVT__AuI__DOT__pe__DOT__shift = 4U;
        } else if ((0x1040000U == (0x1fc0000U & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 5U));
            __PVT__AuI__DOT__pe__DOT__shift = 5U;
        } else if ((0x1020000U == (0x1fe0000U & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 6U));
            __PVT__AuI__DOT__pe__DOT__shift = 6U;
        } else {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 7U));
            __PVT__AuI__DOT__pe__DOT__shift = 7U;
        }
    } else if (((((((((0x1008000U == (0x1ff8000U & __PVT__AuI__DOT__significand_sub)) 
                      | (0x1004000U == (0x1ffc000U 
                                        & __PVT__AuI__DOT__significand_sub))) 
                     | (0x1002000U == (0x1ffe000U & __PVT__AuI__DOT__significand_sub))) 
                    | (0x1001000U == (0x1fff000U & __PVT__AuI__DOT__significand_sub))) 
                   | (0x1000800U == (0x1fff800U & __PVT__AuI__DOT__significand_sub))) 
                  | (0x1000400U == (0x1fffc00U & __PVT__AuI__DOT__significand_sub))) 
                 | (0x1000200U == (0x1fffe00U & __PVT__AuI__DOT__significand_sub))) 
                | (0x1000100U == (0x1ffff00U & __PVT__AuI__DOT__significand_sub)))) {
        if ((0x1008000U == (0x1ff8000U & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 8U));
            __PVT__AuI__DOT__pe__DOT__shift = 8U;
        } else if ((0x1004000U == (0x1ffc000U & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 9U));
            __PVT__AuI__DOT__pe__DOT__shift = 9U;
        } else if ((0x1002000U == (0x1ffe000U & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 0xaU));
            __PVT__AuI__DOT__pe__DOT__shift = 0xaU;
        } else if ((0x1001000U == (0x1fff000U & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 0xbU));
            __PVT__AuI__DOT__pe__DOT__shift = 0xbU;
        } else if ((0x1000800U == (0x1fff800U & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 0xcU));
            __PVT__AuI__DOT__pe__DOT__shift = 0xcU;
        } else if ((0x1000400U == (0x1fffc00U & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 0xdU));
            __PVT__AuI__DOT__pe__DOT__shift = 0xdU;
        } else if ((0x1000200U == (0x1fffe00U & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 0xeU));
            __PVT__AuI__DOT__pe__DOT__shift = 0xeU;
        } else {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 0xfU));
            __PVT__AuI__DOT__pe__DOT__shift = 0xfU;
        }
    } else if (((((((((0x1000080U == (0x1ffff80U & __PVT__AuI__DOT__significand_sub)) 
                      | (0x1000040U == (0x1ffffc0U 
                                        & __PVT__AuI__DOT__significand_sub))) 
                     | (0x1000020U == (0x1ffffe0U & __PVT__AuI__DOT__significand_sub))) 
                    | (0x1000010U == (0x1fffff0U & __PVT__AuI__DOT__significand_sub))) 
                   | (0x1000008U == (0x1fffff8U & __PVT__AuI__DOT__significand_sub))) 
                  | (0x1000004U == (0x1fffffcU & __PVT__AuI__DOT__significand_sub))) 
                 | (0x1000002U == (0x1fffffeU & __PVT__AuI__DOT__significand_sub))) 
                | (0x1000001U == __PVT__AuI__DOT__significand_sub))) {
        if ((0x1000080U == (0x1ffff80U & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 0x10U));
            __PVT__AuI__DOT__pe__DOT__shift = 0x10U;
        } else if ((0x1000040U == (0x1ffffc0U & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 0x11U));
            __PVT__AuI__DOT__pe__DOT__shift = 0x11U;
        } else if ((0x1000020U == (0x1ffffe0U & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 0x12U));
            __PVT__AuI__DOT__pe__DOT__shift = 0x12U;
        } else if ((0x1000010U == (0x1fffff0U & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 0x13U));
            __PVT__AuI__DOT__pe__DOT__shift = 0x13U;
        } else if ((0x1000008U == (0x1fffff8U & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 0x14U));
            __PVT__AuI__DOT__pe__DOT__shift = 0x14U;
        } else if ((0x1000004U == (0x1fffffcU & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 0x15U));
            __PVT__AuI__DOT__pe__DOT__shift = 0x15U;
        } else if ((0x1000002U == (0x1fffffeU & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 0x16U));
            __PVT__AuI__DOT__pe__DOT__shift = 0x16U;
        } else {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 0x17U));
            __PVT__AuI__DOT__pe__DOT__shift = 0x17U;
        }
    } else if ((0x1000000U == __PVT__AuI__DOT__significand_sub)) {
        __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                             & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 0x18U));
        __PVT__AuI__DOT__pe__DOT__shift = 0x18U;
    } else {
        __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                             & ((IData)(1U) 
                                                + (~ __PVT__AuI__DOT__significand_sub)));
        __PVT__AuI__DOT__pe__DOT__shift = 0U;
    }
    __PVT__DuI__DOT__X0__DOT__significand_b_add_sub 
        = (0xffffffU & VL_SHIFTR_III(24,24,8, ((0U 
                                                != 
                                                (0xffU 
                                                 & (DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                    >> 0x17U)))
                                                ? (0x800000U 
                                                   | (0x7fffffU 
                                                      & DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[0U]))
                                                : (0x7fffffU 
                                                   & DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[0U])), (IData)(__PVT__DuI__DOT__X0__DOT__exponent_diff)));
    __PVT__DuI__DOT__X0__DOT__perform = ((0xffU & (
                                                   DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                   >> 0x17U)) 
                                         == (0xffU 
                                             & (((DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                  << 9U) 
                                                 | (DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                    >> 0x17U)) 
                                                + (IData)(__PVT__DuI__DOT__X0__DOT__exponent_diff))));
    vlSelfRef.__VdfgRegularize_hc373ca9b_0_16 = (((QData)((IData)(__PVT__Add_Sub_Exception)) 
                                                  << 0x22U) 
                                                 | (QData)((IData)(
                                                                   ((IData)(__PVT__Add_Sub_Exception)
                                                                     ? 0U
                                                                     : 
                                                                    ((IData)(__PVT__AuI__DOT__operation_sub_addBar)
                                                                      ? 
                                                                     (((IData)(__PVT__AuI__DOT__output_sign) 
                                                                       << 0x1fU) 
                                                                      | ((0x7f800000U 
                                                                          & ((((AuI__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                                                << 9U) 
                                                                               | (AuI__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                                                >> 0x17U)) 
                                                                              + 
                                                                              (1U 
                                                                               & (__PVT__AuI__DOT__significand_add 
                                                                                >> 0x18U))) 
                                                                             << 0x17U)) 
                                                                         | (0x7fffffU 
                                                                            & ((0x1000000U 
                                                                                & __PVT__AuI__DOT__significand_add)
                                                                                ? 
                                                                               (__PVT__AuI__DOT__significand_add 
                                                                                >> 1U)
                                                                                : __PVT__AuI__DOT__significand_add))))
                                                                      : 
                                                                     (((IData)(__PVT__AuI__DOT__output_sign) 
                                                                       << 0x1fU) 
                                                                      | ((0x7f800000U 
                                                                          & ((((AuI__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                                                << 9U) 
                                                                               | (AuI__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                                                >> 0x17U)) 
                                                                              - (IData)(__PVT__AuI__DOT__pe__DOT__shift)) 
                                                                             << 0x17U)) 
                                                                         | (0x7fffffU 
                                                                            & __PVT__AuI__DOT__subtraction_diff))))))));
    __PVT__DuI__DOT__X0__DOT__significand_add = (((~ (IData)(DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_1)) 
                                                  & (IData)(__PVT__DuI__DOT__X0__DOT__perform))
                                                  ? 
                                                 (0x1ffffffU 
                                                  & (DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_2 
                                                     + __PVT__DuI__DOT__X0__DOT__significand_b_add_sub))
                                                  : 0U);
    __PVT__DuI__DOT__X0__DOT__significand_sub = ((IData)(__PVT__DuI__DOT__X0__DOT__perform)
                                                  ? 
                                                 (0x1ffffffU 
                                                  & (DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_2 
                                                     + 
                                                     (((IData)(DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_1) 
                                                       & (IData)(__PVT__DuI__DOT__X0__DOT__perform))
                                                       ? 
                                                      (0xffffffU 
                                                       & ((IData)(1U) 
                                                          + 
                                                          (~ __PVT__DuI__DOT__X0__DOT__significand_b_add_sub)))
                                                       : 0U)))
                                                  : 0U);
    if (((((((((0x1800000U == (0x1800000U & __PVT__DuI__DOT__X0__DOT__significand_sub)) 
               | (0x1400000U == (0x1c00000U & __PVT__DuI__DOT__X0__DOT__significand_sub))) 
              | (0x1200000U == (0x1e00000U & __PVT__DuI__DOT__X0__DOT__significand_sub))) 
             | (0x1100000U == (0x1f00000U & __PVT__DuI__DOT__X0__DOT__significand_sub))) 
            | (0x1080000U == (0x1f80000U & __PVT__DuI__DOT__X0__DOT__significand_sub))) 
           | (0x1040000U == (0x1fc0000U & __PVT__DuI__DOT__X0__DOT__significand_sub))) 
          | (0x1020000U == (0x1fe0000U & __PVT__DuI__DOT__X0__DOT__significand_sub))) 
         | (0x1010000U == (0x1ff0000U & __PVT__DuI__DOT__X0__DOT__significand_sub)))) {
        if ((0x1800000U == (0x1800000U & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & __PVT__DuI__DOT__X0__DOT__significand_sub);
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 0U;
        } else if ((0x1400000U == (0x1c00000U & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 1U));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 1U;
        } else if ((0x1200000U == (0x1e00000U & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 2U));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 2U;
        } else if ((0x1100000U == (0x1f00000U & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 3U));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 3U;
        } else if ((0x1080000U == (0x1f80000U & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 4U));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 4U;
        } else if ((0x1040000U == (0x1fc0000U & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 5U));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 5U;
        } else if ((0x1020000U == (0x1fe0000U & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 6U));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 6U;
        } else {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 7U));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 7U;
        }
    } else if (((((((((0x1008000U == (0x1ff8000U & __PVT__DuI__DOT__X0__DOT__significand_sub)) 
                      | (0x1004000U == (0x1ffc000U 
                                        & __PVT__DuI__DOT__X0__DOT__significand_sub))) 
                     | (0x1002000U == (0x1ffe000U & __PVT__DuI__DOT__X0__DOT__significand_sub))) 
                    | (0x1001000U == (0x1fff000U & __PVT__DuI__DOT__X0__DOT__significand_sub))) 
                   | (0x1000800U == (0x1fff800U & __PVT__DuI__DOT__X0__DOT__significand_sub))) 
                  | (0x1000400U == (0x1fffc00U & __PVT__DuI__DOT__X0__DOT__significand_sub))) 
                 | (0x1000200U == (0x1fffe00U & __PVT__DuI__DOT__X0__DOT__significand_sub))) 
                | (0x1000100U == (0x1ffff00U & __PVT__DuI__DOT__X0__DOT__significand_sub)))) {
        if ((0x1008000U == (0x1ff8000U & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 8U));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 8U;
        } else if ((0x1004000U == (0x1ffc000U & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 9U));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 9U;
        } else if ((0x1002000U == (0x1ffe000U & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 0xaU));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 0xaU;
        } else if ((0x1001000U == (0x1fff000U & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 0xbU));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 0xbU;
        } else if ((0x1000800U == (0x1fff800U & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 0xcU));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 0xcU;
        } else if ((0x1000400U == (0x1fffc00U & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 0xdU));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 0xdU;
        } else if ((0x1000200U == (0x1fffe00U & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 0xeU));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 0xeU;
        } else {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 0xfU));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 0xfU;
        }
    } else if (((((((((0x1000080U == (0x1ffff80U & __PVT__DuI__DOT__X0__DOT__significand_sub)) 
                      | (0x1000040U == (0x1ffffc0U 
                                        & __PVT__DuI__DOT__X0__DOT__significand_sub))) 
                     | (0x1000020U == (0x1ffffe0U & __PVT__DuI__DOT__X0__DOT__significand_sub))) 
                    | (0x1000010U == (0x1fffff0U & __PVT__DuI__DOT__X0__DOT__significand_sub))) 
                   | (0x1000008U == (0x1fffff8U & __PVT__DuI__DOT__X0__DOT__significand_sub))) 
                  | (0x1000004U == (0x1fffffcU & __PVT__DuI__DOT__X0__DOT__significand_sub))) 
                 | (0x1000002U == (0x1fffffeU & __PVT__DuI__DOT__X0__DOT__significand_sub))) 
                | (0x1000001U == __PVT__DuI__DOT__X0__DOT__significand_sub))) {
        if ((0x1000080U == (0x1ffff80U & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 0x10U));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 0x10U;
        } else if ((0x1000040U == (0x1ffffc0U & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 0x11U));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 0x11U;
        } else if ((0x1000020U == (0x1ffffe0U & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 0x12U));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 0x12U;
        } else if ((0x1000010U == (0x1fffff0U & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 0x13U));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 0x13U;
        } else if ((0x1000008U == (0x1fffff8U & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 0x14U));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 0x14U;
        } else if ((0x1000004U == (0x1fffffcU & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 0x15U));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 0x15U;
        } else if ((0x1000002U == (0x1fffffeU & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 0x16U));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 0x16U;
        } else {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 0x17U));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 0x17U;
        }
    } else if ((0x1000000U == __PVT__DuI__DOT__X0__DOT__significand_sub)) {
        __PVT__DuI__DOT__X0__DOT__subtraction_diff 
            = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 0x18U));
        __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 0x18U;
    } else {
        __PVT__DuI__DOT__X0__DOT__subtraction_diff 
            = (0x1ffffffU & ((IData)(1U) + (~ __PVT__DuI__DOT__X0__DOT__significand_sub)));
        __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 0U;
    }
    __PVT__DuI__DOT__X0__DOT__result = (((0xffU == 
                                          (0xffU & 
                                           (DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                            >> 0x17U))) 
                                         | (0xffU == 
                                            (0xffU 
                                             & (DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                >> 0x17U))))
                                         ? 0U : ((IData)(DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_1)
                                                  ? 
                                                 ((0x80000000U 
                                                   & DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[1U]) 
                                                  | ((0x7f800000U 
                                                      & ((((DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                            << 9U) 
                                                           | (DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                              >> 0x17U)) 
                                                          - (IData)(__PVT__DuI__DOT__X0__DOT__pe__DOT__shift)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & __PVT__DuI__DOT__X0__DOT__subtraction_diff)))
                                                  : 
                                                 ((0x80000000U 
                                                   & DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[1U]) 
                                                  | ((0x7f800000U 
                                                      & ((((DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                            << 9U) 
                                                           | (DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                              >> 0x17U)) 
                                                          + 
                                                          (1U 
                                                           & (__PVT__DuI__DOT__X0__DOT__significand_add 
                                                              >> 0x18U))) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((0x1000000U 
                                                            & __PVT__DuI__DOT__X0__DOT__significand_add)
                                                            ? 
                                                           (__PVT__DuI__DOT__X0__DOT__significand_add 
                                                            >> 1U)
                                                            : __PVT__DuI__DOT__X0__DOT__significand_add))))));
    __VdfgRegularize_hc373ca9b_1_1 = (QData)((IData)(
                                                     ((0U 
                                                       != 
                                                       (0xffU 
                                                        & (__PVT__DuI__DOT__X0__DOT__result 
                                                           >> 0x17U)))
                                                       ? 
                                                      (0x800000U 
                                                       | (0x7fffffU 
                                                          & __PVT__DuI__DOT__X0__DOT__result))
                                                       : 
                                                      (0x7fffffU 
                                                       & __PVT__DuI__DOT__X0__DOT__result))));
    __PVT__DuI__DOT__X1__DOT__M1__DOT__product = (0xffffffffffffULL 
                                                  & (__VdfgRegularize_hc373ca9b_1_1 
                                                     * 
                                                     (0x800000ULL 
                                                      | (QData)((IData)(
                                                                        (0x7fffffU 
                                                                         & vlSelfRef.__PVT__Div_B))))));
    __PVT__DuI__DOT__X1__DOT__M1__DOT__product_normalised 
        = (0xffffffffffffULL & ((1U & (IData)((__PVT__DuI__DOT__X1__DOT__M1__DOT__product 
                                               >> 0x2fU)))
                                 ? __PVT__DuI__DOT__X1__DOT__M1__DOT__product
                                 : VL_SHIFTL_QQI(48,48,32, __PVT__DuI__DOT__X1__DOT__M1__DOT__product, 1U)));
    __PVT__DuI__DOT__X1__DOT__M1__DOT__zero = ((~ (0xffU 
                                                   == 
                                                   (0xffU 
                                                    & (__PVT__DuI__DOT__X0__DOT__result 
                                                       >> 0x17U)))) 
                                               & (0ULL 
                                                  == __PVT__DuI__DOT__X1__DOT__M1__DOT__product));
    __PVT__DuI__DOT__X1__DOT__M1__DOT__exponent = (0x1ffU 
                                                   & ((IData)(0x1ffU) 
                                                      + 
                                                      ((0xffU 
                                                        & (__PVT__DuI__DOT__X0__DOT__result 
                                                           >> 0x17U)) 
                                                       + 
                                                       (1U 
                                                        & (IData)(
                                                                  (__PVT__DuI__DOT__X1__DOT__M1__DOT__product 
                                                                   >> 0x2fU))))));
    __VdfgRegularize_hebeb780c_0_84 = ((0xffU == (0xffU 
                                                  & (__PVT__DuI__DOT__X0__DOT__result 
                                                     >> 0x17U)))
                                        ? 0U : (0x7fffffffU 
                                                & ((IData)(__PVT__DuI__DOT__X1__DOT__M1__DOT__zero)
                                                    ? 
                                                   (0x80000000U 
                                                    & __PVT__DuI__DOT__X0__DOT__result)
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               ((0x100U 
                                                                 == 
                                                                 (0x180U 
                                                                  & (IData)(__PVT__DuI__DOT__X1__DOT__M1__DOT__exponent))) 
                                                                & (~ (IData)(__PVT__DuI__DOT__X1__DOT__M1__DOT__zero)))))
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & __PVT__DuI__DOT__X0__DOT__result))
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                ((0x180U 
                                                                  == 
                                                                  (0x180U 
                                                                   & (IData)(__PVT__DuI__DOT__X1__DOT__M1__DOT__exponent))) 
                                                                 & (~ (IData)(__PVT__DuI__DOT__X1__DOT__M1__DOT__zero)))))
                                                      ? 
                                                     (0x80000000U 
                                                      & __PVT__DuI__DOT__X0__DOT__result)
                                                      : 
                                                     ((0x80000000U 
                                                       & __PVT__DuI__DOT__X0__DOT__result) 
                                                      | ((0x7f800000U 
                                                          & ((IData)(__PVT__DuI__DOT__X1__DOT__M1__DOT__exponent) 
                                                             << 0x17U)) 
                                                         | (0x7fffffU 
                                                            & ((IData)(
                                                                       (__PVT__DuI__DOT__X1__DOT__M1__DOT__product_normalised 
                                                                        >> 0x18U)) 
                                                               + 
                                                               ((IData)(
                                                                        (__PVT__DuI__DOT__X1__DOT__M1__DOT__product_normalised 
                                                                         >> 0x17U)) 
                                                                & (0U 
                                                                   != 
                                                                   (0x7fffffU 
                                                                    & (IData)(__PVT__DuI__DOT__X1__DOT__M1__DOT__product_normalised)))))))))))));
    if ((0x40000000U < __VdfgRegularize_hebeb780c_0_84)) {
        DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
            = (IData)((0x40000000ULL | ((QData)((IData)(
                                                        (0x80000000U 
                                                         | __VdfgRegularize_hebeb780c_0_84))) 
                                        << 0x20U)));
        DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            = (IData)(((0x40000000ULL | ((QData)((IData)(
                                                         (0x80000000U 
                                                          | __VdfgRegularize_hebeb780c_0_84))) 
                                         << 0x20U)) 
                       >> 0x20U));
        DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[2U] = 1U;
    } else {
        DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
            = (0x80000000U | __VdfgRegularize_hebeb780c_0_84);
        DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] = 0x40000000U;
        DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[2U] = 0U;
    }
    DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_2 
        = ((0U != (0xffU & (DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                            >> 0x17U))) ? (0x800000U 
                                           | (0x7fffffU 
                                              & DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U]))
            : (0x7fffffU & DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U]));
    DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_1 
        = ((DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            ^ DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U]) 
           >> 0x1fU);
    __PVT__DuI__DOT__X1__DOT__A1__DOT__exponent_diff 
        = (0xffU & (((DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                      << 9U) | (DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                >> 0x17U)) - ((DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                               << 9U) 
                                              | (DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                 >> 0x17U))));
    __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_b_add_sub 
        = (0xffffffU & VL_SHIFTR_III(24,24,8, ((0U 
                                                != 
                                                (0xffU 
                                                 & (DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                    >> 0x17U)))
                                                ? (0x800000U 
                                                   | (0x7fffffU 
                                                      & DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U]))
                                                : (0x7fffffU 
                                                   & DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U])), (IData)(__PVT__DuI__DOT__X1__DOT__A1__DOT__exponent_diff)));
    __PVT__DuI__DOT__X1__DOT__A1__DOT__perform = ((0xffU 
                                                   & (DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                      >> 0x17U)) 
                                                  == 
                                                  (0xffU 
                                                   & (((DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                        << 9U) 
                                                       | (DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                          >> 0x17U)) 
                                                      + (IData)(__PVT__DuI__DOT__X1__DOT__A1__DOT__exponent_diff))));
    __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_add 
        = (((~ (IData)(DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_1)) 
            & (IData)(__PVT__DuI__DOT__X1__DOT__A1__DOT__perform))
            ? (0x1ffffffU & (DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_2 
                             + __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_b_add_sub))
            : 0U);
    __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub 
        = ((IData)(__PVT__DuI__DOT__X1__DOT__A1__DOT__perform)
            ? (0x1ffffffU & (DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_2 
                             + (((IData)(DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_1) 
                                 & (IData)(__PVT__DuI__DOT__X1__DOT__A1__DOT__perform))
                                 ? (0xffffffU & ((IData)(1U) 
                                                 + 
                                                 (~ __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_b_add_sub)))
                                 : 0U))) : 0U);
    if (((((((((0x1800000U == (0x1800000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub)) 
               | (0x1400000U == (0x1c00000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) 
              | (0x1200000U == (0x1e00000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) 
             | (0x1100000U == (0x1f00000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) 
            | (0x1080000U == (0x1f80000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) 
           | (0x1040000U == (0x1fc0000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) 
          | (0x1020000U == (0x1fe0000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) 
         | (0x1010000U == (0x1ff0000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub)))) {
        if ((0x1800000U == (0x1800000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub);
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 0U;
        } else if ((0x1400000U == (0x1c00000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 1U));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 1U;
        } else if ((0x1200000U == (0x1e00000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 2U));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 2U;
        } else if ((0x1100000U == (0x1f00000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 3U));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 3U;
        } else if ((0x1080000U == (0x1f80000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 4U));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 4U;
        } else if ((0x1040000U == (0x1fc0000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 5U));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 5U;
        } else if ((0x1020000U == (0x1fe0000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 6U));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 6U;
        } else {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 7U));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 7U;
        }
    } else if (((((((((0x1008000U == (0x1ff8000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub)) 
                      | (0x1004000U == (0x1ffc000U 
                                        & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) 
                     | (0x1002000U == (0x1ffe000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) 
                    | (0x1001000U == (0x1fff000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) 
                   | (0x1000800U == (0x1fff800U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) 
                  | (0x1000400U == (0x1fffc00U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) 
                 | (0x1000200U == (0x1fffe00U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) 
                | (0x1000100U == (0x1ffff00U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub)))) {
        if ((0x1008000U == (0x1ff8000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 8U));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 8U;
        } else if ((0x1004000U == (0x1ffc000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 9U));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 9U;
        } else if ((0x1002000U == (0x1ffe000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 0xaU));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 0xaU;
        } else if ((0x1001000U == (0x1fff000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 0xbU));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 0xbU;
        } else if ((0x1000800U == (0x1fff800U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 0xcU));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 0xcU;
        } else if ((0x1000400U == (0x1fffc00U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 0xdU));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 0xdU;
        } else if ((0x1000200U == (0x1fffe00U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 0xeU));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 0xeU;
        } else {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 0xfU));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 0xfU;
        }
    } else if (((((((((0x1000080U == (0x1ffff80U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub)) 
                      | (0x1000040U == (0x1ffffc0U 
                                        & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) 
                     | (0x1000020U == (0x1ffffe0U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) 
                    | (0x1000010U == (0x1fffff0U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) 
                   | (0x1000008U == (0x1fffff8U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) 
                  | (0x1000004U == (0x1fffffcU & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) 
                 | (0x1000002U == (0x1fffffeU & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) 
                | (0x1000001U == __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
        if ((0x1000080U == (0x1ffff80U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 0x10U));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 0x10U;
        } else if ((0x1000040U == (0x1ffffc0U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 0x11U));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 0x11U;
        } else if ((0x1000020U == (0x1ffffe0U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 0x12U));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 0x12U;
        } else if ((0x1000010U == (0x1fffff0U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 0x13U));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 0x13U;
        } else if ((0x1000008U == (0x1fffff8U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 0x14U));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 0x14U;
        } else if ((0x1000004U == (0x1fffffcU & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 0x15U));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 0x15U;
        } else if ((0x1000002U == (0x1fffffeU & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 0x16U));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 0x16U;
        } else {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 0x17U));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 0x17U;
        }
    } else if ((0x1000000U == __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub)) {
        __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
            = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 0x18U));
        __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 0x18U;
    } else {
        __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
            = (0x1ffffffU & ((IData)(1U) + (~ __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub)));
        __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 0U;
    }
    __PVT__DuI__DOT__X1__DOT__A1__DOT__result = (((0xffU 
                                                   == 
                                                   (0xffU 
                                                    & (DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                       >> 0x17U))) 
                                                  | (0xffU 
                                                     == 
                                                     (0xffU 
                                                      & (DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                         >> 0x17U))))
                                                  ? 0U
                                                  : 
                                                 ((IData)(DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_1)
                                                   ? 
                                                  ((0x80000000U 
                                                    & DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U]) 
                                                   | ((0x7f800000U 
                                                       & ((((DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                             << 9U) 
                                                            | (DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                               >> 0x17U)) 
                                                           - (IData)(__PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift)) 
                                                          << 0x17U)) 
                                                      | (0x7fffffU 
                                                         & __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff)))
                                                   : 
                                                  ((0x80000000U 
                                                    & DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U]) 
                                                   | ((0x7f800000U 
                                                       & ((((DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                             << 9U) 
                                                            | (DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                               >> 0x17U)) 
                                                           + 
                                                           (1U 
                                                            & (__PVT__DuI__DOT__X1__DOT__A1__DOT__significand_add 
                                                               >> 0x18U))) 
                                                          << 0x17U)) 
                                                      | (0x7fffffU 
                                                         & ((0x1000000U 
                                                             & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_add)
                                                             ? 
                                                            (__PVT__DuI__DOT__X1__DOT__A1__DOT__significand_add 
                                                             >> 1U)
                                                             : __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_add))))));
    __PVT__DuI__DOT__X1__DOT__M2__DOT__sign = ((__PVT__DuI__DOT__X0__DOT__result 
                                                ^ __PVT__DuI__DOT__X1__DOT__A1__DOT__result) 
                                               >> 0x1fU);
    __PVT__DuI__DOT__X1__DOT__M2__DOT__Exception = 
        ((0xffU == (0xffU & (__PVT__DuI__DOT__X0__DOT__result 
                             >> 0x17U))) | (0xffU == 
                                            (0xffU 
                                             & (__PVT__DuI__DOT__X1__DOT__A1__DOT__result 
                                                >> 0x17U))));
    __PVT__DuI__DOT__X1__DOT__M2__DOT__product = (0xffffffffffffULL 
                                                  & (__VdfgRegularize_hc373ca9b_1_1 
                                                     * (QData)((IData)(
                                                                       ((0U 
                                                                         != 
                                                                         (0xffU 
                                                                          & (__PVT__DuI__DOT__X1__DOT__A1__DOT__result 
                                                                             >> 0x17U)))
                                                                         ? 
                                                                        (0x800000U 
                                                                         | (0x7fffffU 
                                                                            & __PVT__DuI__DOT__X1__DOT__A1__DOT__result))
                                                                         : 
                                                                        (0x7fffffU 
                                                                         & __PVT__DuI__DOT__X1__DOT__A1__DOT__result))))));
    __PVT__DuI__DOT__X1__DOT__M2__DOT__product_normalised 
        = (0xffffffffffffULL & ((1U & (IData)((__PVT__DuI__DOT__X1__DOT__M2__DOT__product 
                                               >> 0x2fU)))
                                 ? __PVT__DuI__DOT__X1__DOT__M2__DOT__product
                                 : VL_SHIFTL_QQI(48,48,32, __PVT__DuI__DOT__X1__DOT__M2__DOT__product, 1U)));
    __PVT__DuI__DOT__X1__DOT__M2__DOT__zero = ((~ (IData)(__PVT__DuI__DOT__X1__DOT__M2__DOT__Exception)) 
                                               & (0ULL 
                                                  == __PVT__DuI__DOT__X1__DOT__M2__DOT__product));
    __PVT__DuI__DOT__X1__DOT__M2__DOT__exponent = (0x1ffU 
                                                   & ((((0xffU 
                                                         & (__PVT__DuI__DOT__X0__DOT__result 
                                                            >> 0x17U)) 
                                                        + 
                                                        (0xffU 
                                                         & (__PVT__DuI__DOT__X1__DOT__A1__DOT__result 
                                                            >> 0x17U))) 
                                                       - (IData)(0x7fU)) 
                                                      + 
                                                      (1U 
                                                       & (IData)(
                                                                 (__PVT__DuI__DOT__X1__DOT__M2__DOT__product 
                                                                  >> 0x2fU)))));
    __PVT__DuI__DOT__X2__DOT__M1__DOT__a_operand = 
        ((IData)(__PVT__DuI__DOT__X1__DOT__M2__DOT__Exception)
          ? 0U : ((IData)(__PVT__DuI__DOT__X1__DOT__M2__DOT__zero)
                   ? ((IData)(__PVT__DuI__DOT__X1__DOT__M2__DOT__sign) 
                      << 0x1fU) : ((1U & (IData)(((0x100U 
                                                   == 
                                                   (0x180U 
                                                    & (IData)(__PVT__DuI__DOT__X1__DOT__M2__DOT__exponent))) 
                                                  & (~ (IData)(__PVT__DuI__DOT__X1__DOT__M2__DOT__zero)))))
                                    ? (0x7f800000U 
                                       | ((IData)(__PVT__DuI__DOT__X1__DOT__M2__DOT__sign) 
                                          << 0x1fU))
                                    : ((1U & (IData)(
                                                     ((0x180U 
                                                       == 
                                                       (0x180U 
                                                        & (IData)(__PVT__DuI__DOT__X1__DOT__M2__DOT__exponent))) 
                                                      & (~ (IData)(__PVT__DuI__DOT__X1__DOT__M2__DOT__zero)))))
                                        ? ((IData)(__PVT__DuI__DOT__X1__DOT__M2__DOT__sign) 
                                           << 0x1fU)
                                        : (((IData)(__PVT__DuI__DOT__X1__DOT__M2__DOT__sign) 
                                            << 0x1fU) 
                                           | ((0x7f800000U 
                                               & ((IData)(__PVT__DuI__DOT__X1__DOT__M2__DOT__exponent) 
                                                  << 0x17U)) 
                                              | (0x7fffffU 
                                                 & ((IData)(
                                                            (__PVT__DuI__DOT__X1__DOT__M2__DOT__product_normalised 
                                                             >> 0x18U)) 
                                                    + 
                                                    ((IData)(
                                                             (__PVT__DuI__DOT__X1__DOT__M2__DOT__product_normalised 
                                                              >> 0x17U)) 
                                                     & (0U 
                                                        != 
                                                        (0x7fffffU 
                                                         & (IData)(__PVT__DuI__DOT__X1__DOT__M2__DOT__product_normalised))))))))))));
    __VdfgRegularize_hc373ca9b_1_2 = (QData)((IData)(
                                                     ((0U 
                                                       != 
                                                       (0xffU 
                                                        & (__PVT__DuI__DOT__X2__DOT__M1__DOT__a_operand 
                                                           >> 0x17U)))
                                                       ? 
                                                      (0x800000U 
                                                       | (0x7fffffU 
                                                          & __PVT__DuI__DOT__X2__DOT__M1__DOT__a_operand))
                                                       : 
                                                      (0x7fffffU 
                                                       & __PVT__DuI__DOT__X2__DOT__M1__DOT__a_operand))));
    __PVT__DuI__DOT__X2__DOT__M1__DOT__product = (0xffffffffffffULL 
                                                  & (__VdfgRegularize_hc373ca9b_1_2 
                                                     * 
                                                     (0x800000ULL 
                                                      | (QData)((IData)(
                                                                        (0x7fffffU 
                                                                         & vlSelfRef.__PVT__Div_B))))));
    __PVT__DuI__DOT__X2__DOT__M1__DOT__product_normalised 
        = (0xffffffffffffULL & ((1U & (IData)((__PVT__DuI__DOT__X2__DOT__M1__DOT__product 
                                               >> 0x2fU)))
                                 ? __PVT__DuI__DOT__X2__DOT__M1__DOT__product
                                 : VL_SHIFTL_QQI(48,48,32, __PVT__DuI__DOT__X2__DOT__M1__DOT__product, 1U)));
    __PVT__DuI__DOT__X2__DOT__M1__DOT__zero = ((~ (0xffU 
                                                   == 
                                                   (0xffU 
                                                    & (__PVT__DuI__DOT__X2__DOT__M1__DOT__a_operand 
                                                       >> 0x17U)))) 
                                               & (0ULL 
                                                  == __PVT__DuI__DOT__X2__DOT__M1__DOT__product));
    __PVT__DuI__DOT__X2__DOT__M1__DOT__exponent = (0x1ffU 
                                                   & ((IData)(0x1ffU) 
                                                      + 
                                                      ((0xffU 
                                                        & (__PVT__DuI__DOT__X2__DOT__M1__DOT__a_operand 
                                                           >> 0x17U)) 
                                                       + 
                                                       (1U 
                                                        & (IData)(
                                                                  (__PVT__DuI__DOT__X2__DOT__M1__DOT__product 
                                                                   >> 0x2fU))))));
    __VdfgRegularize_hebeb780c_0_85 = ((0xffU == (0xffU 
                                                  & (__PVT__DuI__DOT__X2__DOT__M1__DOT__a_operand 
                                                     >> 0x17U)))
                                        ? 0U : (0x7fffffffU 
                                                & ((IData)(__PVT__DuI__DOT__X2__DOT__M1__DOT__zero)
                                                    ? 
                                                   (0x80000000U 
                                                    & __PVT__DuI__DOT__X2__DOT__M1__DOT__a_operand)
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               ((0x100U 
                                                                 == 
                                                                 (0x180U 
                                                                  & (IData)(__PVT__DuI__DOT__X2__DOT__M1__DOT__exponent))) 
                                                                & (~ (IData)(__PVT__DuI__DOT__X2__DOT__M1__DOT__zero)))))
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & __PVT__DuI__DOT__X2__DOT__M1__DOT__a_operand))
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                ((0x180U 
                                                                  == 
                                                                  (0x180U 
                                                                   & (IData)(__PVT__DuI__DOT__X2__DOT__M1__DOT__exponent))) 
                                                                 & (~ (IData)(__PVT__DuI__DOT__X2__DOT__M1__DOT__zero)))))
                                                      ? 
                                                     (0x80000000U 
                                                      & __PVT__DuI__DOT__X2__DOT__M1__DOT__a_operand)
                                                      : 
                                                     ((0x80000000U 
                                                       & __PVT__DuI__DOT__X2__DOT__M1__DOT__a_operand) 
                                                      | ((0x7f800000U 
                                                          & ((IData)(__PVT__DuI__DOT__X2__DOT__M1__DOT__exponent) 
                                                             << 0x17U)) 
                                                         | (0x7fffffU 
                                                            & ((IData)(
                                                                       (__PVT__DuI__DOT__X2__DOT__M1__DOT__product_normalised 
                                                                        >> 0x18U)) 
                                                               + 
                                                               ((IData)(
                                                                        (__PVT__DuI__DOT__X2__DOT__M1__DOT__product_normalised 
                                                                         >> 0x17U)) 
                                                                & (0U 
                                                                   != 
                                                                   (0x7fffffU 
                                                                    & (IData)(__PVT__DuI__DOT__X2__DOT__M1__DOT__product_normalised)))))))))))));
    if ((0x40000000U < __VdfgRegularize_hebeb780c_0_85)) {
        DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
            = (IData)((0x40000000ULL | ((QData)((IData)(
                                                        (0x80000000U 
                                                         | __VdfgRegularize_hebeb780c_0_85))) 
                                        << 0x20U)));
        DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            = (IData)(((0x40000000ULL | ((QData)((IData)(
                                                         (0x80000000U 
                                                          | __VdfgRegularize_hebeb780c_0_85))) 
                                         << 0x20U)) 
                       >> 0x20U));
        DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[2U] = 1U;
    } else {
        DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
            = (0x80000000U | __VdfgRegularize_hebeb780c_0_85);
        DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] = 0x40000000U;
        DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[2U] = 0U;
    }
    DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_2 
        = ((0U != (0xffU & (DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                            >> 0x17U))) ? (0x800000U 
                                           | (0x7fffffU 
                                              & DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U]))
            : (0x7fffffU & DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U]));
    DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_1 
        = ((DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            ^ DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U]) 
           >> 0x1fU);
    __PVT__DuI__DOT__X2__DOT__A1__DOT__exponent_diff 
        = (0xffU & (((DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                      << 9U) | (DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                >> 0x17U)) - ((DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                               << 9U) 
                                              | (DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                 >> 0x17U))));
    __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_b_add_sub 
        = (0xffffffU & VL_SHIFTR_III(24,24,8, ((0U 
                                                != 
                                                (0xffU 
                                                 & (DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                    >> 0x17U)))
                                                ? (0x800000U 
                                                   | (0x7fffffU 
                                                      & DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U]))
                                                : (0x7fffffU 
                                                   & DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U])), (IData)(__PVT__DuI__DOT__X2__DOT__A1__DOT__exponent_diff)));
    __PVT__DuI__DOT__X2__DOT__A1__DOT__perform = ((0xffU 
                                                   & (DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                      >> 0x17U)) 
                                                  == 
                                                  (0xffU 
                                                   & (((DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                        << 9U) 
                                                       | (DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                          >> 0x17U)) 
                                                      + (IData)(__PVT__DuI__DOT__X2__DOT__A1__DOT__exponent_diff))));
    __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_add 
        = (((~ (IData)(DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_1)) 
            & (IData)(__PVT__DuI__DOT__X2__DOT__A1__DOT__perform))
            ? (0x1ffffffU & (DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_2 
                             + __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_b_add_sub))
            : 0U);
    __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub 
        = ((IData)(__PVT__DuI__DOT__X2__DOT__A1__DOT__perform)
            ? (0x1ffffffU & (DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_2 
                             + (((IData)(DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_1) 
                                 & (IData)(__PVT__DuI__DOT__X2__DOT__A1__DOT__perform))
                                 ? (0xffffffU & ((IData)(1U) 
                                                 + 
                                                 (~ __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_b_add_sub)))
                                 : 0U))) : 0U);
    if (((((((((0x1800000U == (0x1800000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub)) 
               | (0x1400000U == (0x1c00000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) 
              | (0x1200000U == (0x1e00000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) 
             | (0x1100000U == (0x1f00000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) 
            | (0x1080000U == (0x1f80000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) 
           | (0x1040000U == (0x1fc0000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) 
          | (0x1020000U == (0x1fe0000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) 
         | (0x1010000U == (0x1ff0000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub)))) {
        if ((0x1800000U == (0x1800000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub);
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 0U;
        } else if ((0x1400000U == (0x1c00000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 1U));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 1U;
        } else if ((0x1200000U == (0x1e00000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 2U));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 2U;
        } else if ((0x1100000U == (0x1f00000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 3U));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 3U;
        } else if ((0x1080000U == (0x1f80000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 4U));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 4U;
        } else if ((0x1040000U == (0x1fc0000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 5U));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 5U;
        } else if ((0x1020000U == (0x1fe0000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 6U));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 6U;
        } else {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 7U));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 7U;
        }
    } else if (((((((((0x1008000U == (0x1ff8000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub)) 
                      | (0x1004000U == (0x1ffc000U 
                                        & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) 
                     | (0x1002000U == (0x1ffe000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) 
                    | (0x1001000U == (0x1fff000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) 
                   | (0x1000800U == (0x1fff800U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) 
                  | (0x1000400U == (0x1fffc00U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) 
                 | (0x1000200U == (0x1fffe00U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) 
                | (0x1000100U == (0x1ffff00U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub)))) {
        if ((0x1008000U == (0x1ff8000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 8U));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 8U;
        } else if ((0x1004000U == (0x1ffc000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 9U));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 9U;
        } else if ((0x1002000U == (0x1ffe000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 0xaU));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 0xaU;
        } else if ((0x1001000U == (0x1fff000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 0xbU));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 0xbU;
        } else if ((0x1000800U == (0x1fff800U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 0xcU));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 0xcU;
        } else if ((0x1000400U == (0x1fffc00U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 0xdU));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 0xdU;
        } else if ((0x1000200U == (0x1fffe00U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 0xeU));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 0xeU;
        } else {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 0xfU));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 0xfU;
        }
    } else if (((((((((0x1000080U == (0x1ffff80U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub)) 
                      | (0x1000040U == (0x1ffffc0U 
                                        & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) 
                     | (0x1000020U == (0x1ffffe0U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) 
                    | (0x1000010U == (0x1fffff0U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) 
                   | (0x1000008U == (0x1fffff8U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) 
                  | (0x1000004U == (0x1fffffcU & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) 
                 | (0x1000002U == (0x1fffffeU & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) 
                | (0x1000001U == __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
        if ((0x1000080U == (0x1ffff80U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 0x10U));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 0x10U;
        } else if ((0x1000040U == (0x1ffffc0U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 0x11U));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 0x11U;
        } else if ((0x1000020U == (0x1ffffe0U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 0x12U));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 0x12U;
        } else if ((0x1000010U == (0x1fffff0U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 0x13U));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 0x13U;
        } else if ((0x1000008U == (0x1fffff8U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 0x14U));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 0x14U;
        } else if ((0x1000004U == (0x1fffffcU & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 0x15U));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 0x15U;
        } else if ((0x1000002U == (0x1fffffeU & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 0x16U));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 0x16U;
        } else {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 0x17U));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 0x17U;
        }
    } else if ((0x1000000U == __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub)) {
        __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
            = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 0x18U));
        __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 0x18U;
    } else {
        __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
            = (0x1ffffffU & ((IData)(1U) + (~ __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub)));
        __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 0U;
    }
    __PVT__DuI__DOT__X2__DOT__A1__DOT__result = (((0xffU 
                                                   == 
                                                   (0xffU 
                                                    & (DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                       >> 0x17U))) 
                                                  | (0xffU 
                                                     == 
                                                     (0xffU 
                                                      & (DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                         >> 0x17U))))
                                                  ? 0U
                                                  : 
                                                 ((IData)(DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_1)
                                                   ? 
                                                  ((0x80000000U 
                                                    & DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U]) 
                                                   | ((0x7f800000U 
                                                       & ((((DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                             << 9U) 
                                                            | (DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                               >> 0x17U)) 
                                                           - (IData)(__PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift)) 
                                                          << 0x17U)) 
                                                      | (0x7fffffU 
                                                         & __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff)))
                                                   : 
                                                  ((0x80000000U 
                                                    & DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U]) 
                                                   | ((0x7f800000U 
                                                       & ((((DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                             << 9U) 
                                                            | (DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                               >> 0x17U)) 
                                                           + 
                                                           (1U 
                                                            & (__PVT__DuI__DOT__X2__DOT__A1__DOT__significand_add 
                                                               >> 0x18U))) 
                                                          << 0x17U)) 
                                                      | (0x7fffffU 
                                                         & ((0x1000000U 
                                                             & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_add)
                                                             ? 
                                                            (__PVT__DuI__DOT__X2__DOT__A1__DOT__significand_add 
                                                             >> 1U)
                                                             : __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_add))))));
    __PVT__DuI__DOT__X2__DOT__M2__DOT__sign = ((__PVT__DuI__DOT__X2__DOT__M1__DOT__a_operand 
                                                ^ __PVT__DuI__DOT__X2__DOT__A1__DOT__result) 
                                               >> 0x1fU);
    __PVT__DuI__DOT__X2__DOT__M2__DOT__Exception = 
        ((0xffU == (0xffU & (__PVT__DuI__DOT__X2__DOT__M1__DOT__a_operand 
                             >> 0x17U))) | (0xffU == 
                                            (0xffU 
                                             & (__PVT__DuI__DOT__X2__DOT__A1__DOT__result 
                                                >> 0x17U))));
    __PVT__DuI__DOT__X2__DOT__M2__DOT__product = (0xffffffffffffULL 
                                                  & (__VdfgRegularize_hc373ca9b_1_2 
                                                     * (QData)((IData)(
                                                                       ((0U 
                                                                         != 
                                                                         (0xffU 
                                                                          & (__PVT__DuI__DOT__X2__DOT__A1__DOT__result 
                                                                             >> 0x17U)))
                                                                         ? 
                                                                        (0x800000U 
                                                                         | (0x7fffffU 
                                                                            & __PVT__DuI__DOT__X2__DOT__A1__DOT__result))
                                                                         : 
                                                                        (0x7fffffU 
                                                                         & __PVT__DuI__DOT__X2__DOT__A1__DOT__result))))));
    __PVT__DuI__DOT__X2__DOT__M2__DOT__product_normalised 
        = (0xffffffffffffULL & ((1U & (IData)((__PVT__DuI__DOT__X2__DOT__M2__DOT__product 
                                               >> 0x2fU)))
                                 ? __PVT__DuI__DOT__X2__DOT__M2__DOT__product
                                 : VL_SHIFTL_QQI(48,48,32, __PVT__DuI__DOT__X2__DOT__M2__DOT__product, 1U)));
    __PVT__DuI__DOT__X2__DOT__M2__DOT__zero = ((~ (IData)(__PVT__DuI__DOT__X2__DOT__M2__DOT__Exception)) 
                                               & (0ULL 
                                                  == __PVT__DuI__DOT__X2__DOT__M2__DOT__product));
    __PVT__DuI__DOT__X2__DOT__M2__DOT__exponent = (0x1ffU 
                                                   & ((((0xffU 
                                                         & (__PVT__DuI__DOT__X2__DOT__M1__DOT__a_operand 
                                                            >> 0x17U)) 
                                                        + 
                                                        (0xffU 
                                                         & (__PVT__DuI__DOT__X2__DOT__A1__DOT__result 
                                                            >> 0x17U))) 
                                                       - (IData)(0x7fU)) 
                                                      + 
                                                      (1U 
                                                       & (IData)(
                                                                 (__PVT__DuI__DOT__X2__DOT__M2__DOT__product 
                                                                  >> 0x2fU)))));
    __PVT__DuI__DOT__X3__DOT__M1__DOT__a_operand = 
        ((IData)(__PVT__DuI__DOT__X2__DOT__M2__DOT__Exception)
          ? 0U : ((IData)(__PVT__DuI__DOT__X2__DOT__M2__DOT__zero)
                   ? ((IData)(__PVT__DuI__DOT__X2__DOT__M2__DOT__sign) 
                      << 0x1fU) : ((1U & (IData)(((0x100U 
                                                   == 
                                                   (0x180U 
                                                    & (IData)(__PVT__DuI__DOT__X2__DOT__M2__DOT__exponent))) 
                                                  & (~ (IData)(__PVT__DuI__DOT__X2__DOT__M2__DOT__zero)))))
                                    ? (0x7f800000U 
                                       | ((IData)(__PVT__DuI__DOT__X2__DOT__M2__DOT__sign) 
                                          << 0x1fU))
                                    : ((1U & (IData)(
                                                     ((0x180U 
                                                       == 
                                                       (0x180U 
                                                        & (IData)(__PVT__DuI__DOT__X2__DOT__M2__DOT__exponent))) 
                                                      & (~ (IData)(__PVT__DuI__DOT__X2__DOT__M2__DOT__zero)))))
                                        ? ((IData)(__PVT__DuI__DOT__X2__DOT__M2__DOT__sign) 
                                           << 0x1fU)
                                        : (((IData)(__PVT__DuI__DOT__X2__DOT__M2__DOT__sign) 
                                            << 0x1fU) 
                                           | ((0x7f800000U 
                                               & ((IData)(__PVT__DuI__DOT__X2__DOT__M2__DOT__exponent) 
                                                  << 0x17U)) 
                                              | (0x7fffffU 
                                                 & ((IData)(
                                                            (__PVT__DuI__DOT__X2__DOT__M2__DOT__product_normalised 
                                                             >> 0x18U)) 
                                                    + 
                                                    ((IData)(
                                                             (__PVT__DuI__DOT__X2__DOT__M2__DOT__product_normalised 
                                                              >> 0x17U)) 
                                                     & (0U 
                                                        != 
                                                        (0x7fffffU 
                                                         & (IData)(__PVT__DuI__DOT__X2__DOT__M2__DOT__product_normalised))))))))))));
    __VdfgRegularize_hc373ca9b_1_3 = (QData)((IData)(
                                                     ((0U 
                                                       != 
                                                       (0xffU 
                                                        & (__PVT__DuI__DOT__X3__DOT__M1__DOT__a_operand 
                                                           >> 0x17U)))
                                                       ? 
                                                      (0x800000U 
                                                       | (0x7fffffU 
                                                          & __PVT__DuI__DOT__X3__DOT__M1__DOT__a_operand))
                                                       : 
                                                      (0x7fffffU 
                                                       & __PVT__DuI__DOT__X3__DOT__M1__DOT__a_operand))));
    __PVT__DuI__DOT__X3__DOT__M1__DOT__product = (0xffffffffffffULL 
                                                  & (__VdfgRegularize_hc373ca9b_1_3 
                                                     * 
                                                     (0x800000ULL 
                                                      | (QData)((IData)(
                                                                        (0x7fffffU 
                                                                         & vlSelfRef.__PVT__Div_B))))));
    __PVT__DuI__DOT__X3__DOT__M1__DOT__product_normalised 
        = (0xffffffffffffULL & ((1U & (IData)((__PVT__DuI__DOT__X3__DOT__M1__DOT__product 
                                               >> 0x2fU)))
                                 ? __PVT__DuI__DOT__X3__DOT__M1__DOT__product
                                 : VL_SHIFTL_QQI(48,48,32, __PVT__DuI__DOT__X3__DOT__M1__DOT__product, 1U)));
    __PVT__DuI__DOT__X3__DOT__M1__DOT__zero = ((~ (0xffU 
                                                   == 
                                                   (0xffU 
                                                    & (__PVT__DuI__DOT__X3__DOT__M1__DOT__a_operand 
                                                       >> 0x17U)))) 
                                               & (0ULL 
                                                  == __PVT__DuI__DOT__X3__DOT__M1__DOT__product));
    __PVT__DuI__DOT__X3__DOT__M1__DOT__exponent = (0x1ffU 
                                                   & ((IData)(0x1ffU) 
                                                      + 
                                                      ((0xffU 
                                                        & (__PVT__DuI__DOT__X3__DOT__M1__DOT__a_operand 
                                                           >> 0x17U)) 
                                                       + 
                                                       (1U 
                                                        & (IData)(
                                                                  (__PVT__DuI__DOT__X3__DOT__M1__DOT__product 
                                                                   >> 0x2fU))))));
    __VdfgRegularize_hebeb780c_0_86 = ((0xffU == (0xffU 
                                                  & (__PVT__DuI__DOT__X3__DOT__M1__DOT__a_operand 
                                                     >> 0x17U)))
                                        ? 0U : (0x7fffffffU 
                                                & ((IData)(__PVT__DuI__DOT__X3__DOT__M1__DOT__zero)
                                                    ? 
                                                   (0x80000000U 
                                                    & __PVT__DuI__DOT__X3__DOT__M1__DOT__a_operand)
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               ((0x100U 
                                                                 == 
                                                                 (0x180U 
                                                                  & (IData)(__PVT__DuI__DOT__X3__DOT__M1__DOT__exponent))) 
                                                                & (~ (IData)(__PVT__DuI__DOT__X3__DOT__M1__DOT__zero)))))
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & __PVT__DuI__DOT__X3__DOT__M1__DOT__a_operand))
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                ((0x180U 
                                                                  == 
                                                                  (0x180U 
                                                                   & (IData)(__PVT__DuI__DOT__X3__DOT__M1__DOT__exponent))) 
                                                                 & (~ (IData)(__PVT__DuI__DOT__X3__DOT__M1__DOT__zero)))))
                                                      ? 
                                                     (0x80000000U 
                                                      & __PVT__DuI__DOT__X3__DOT__M1__DOT__a_operand)
                                                      : 
                                                     ((0x80000000U 
                                                       & __PVT__DuI__DOT__X3__DOT__M1__DOT__a_operand) 
                                                      | ((0x7f800000U 
                                                          & ((IData)(__PVT__DuI__DOT__X3__DOT__M1__DOT__exponent) 
                                                             << 0x17U)) 
                                                         | (0x7fffffU 
                                                            & ((IData)(
                                                                       (__PVT__DuI__DOT__X3__DOT__M1__DOT__product_normalised 
                                                                        >> 0x18U)) 
                                                               + 
                                                               ((IData)(
                                                                        (__PVT__DuI__DOT__X3__DOT__M1__DOT__product_normalised 
                                                                         >> 0x17U)) 
                                                                & (0U 
                                                                   != 
                                                                   (0x7fffffU 
                                                                    & (IData)(__PVT__DuI__DOT__X3__DOT__M1__DOT__product_normalised)))))))))))));
    if ((0x40000000U < __VdfgRegularize_hebeb780c_0_86)) {
        DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
            = (IData)((0x40000000ULL | ((QData)((IData)(
                                                        (0x80000000U 
                                                         | __VdfgRegularize_hebeb780c_0_86))) 
                                        << 0x20U)));
        DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            = (IData)(((0x40000000ULL | ((QData)((IData)(
                                                         (0x80000000U 
                                                          | __VdfgRegularize_hebeb780c_0_86))) 
                                         << 0x20U)) 
                       >> 0x20U));
        DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[2U] = 1U;
    } else {
        DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
            = (0x80000000U | __VdfgRegularize_hebeb780c_0_86);
        DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] = 0x40000000U;
        DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[2U] = 0U;
    }
    DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_2 
        = ((0U != (0xffU & (DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                            >> 0x17U))) ? (0x800000U 
                                           | (0x7fffffU 
                                              & DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U]))
            : (0x7fffffU & DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U]));
    DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_1 
        = ((DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            ^ DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U]) 
           >> 0x1fU);
    __PVT__DuI__DOT__X3__DOT__A1__DOT__exponent_diff 
        = (0xffU & (((DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                      << 9U) | (DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                >> 0x17U)) - ((DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                               << 9U) 
                                              | (DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                 >> 0x17U))));
    __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_b_add_sub 
        = (0xffffffU & VL_SHIFTR_III(24,24,8, ((0U 
                                                != 
                                                (0xffU 
                                                 & (DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                    >> 0x17U)))
                                                ? (0x800000U 
                                                   | (0x7fffffU 
                                                      & DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U]))
                                                : (0x7fffffU 
                                                   & DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U])), (IData)(__PVT__DuI__DOT__X3__DOT__A1__DOT__exponent_diff)));
    __PVT__DuI__DOT__X3__DOT__A1__DOT__perform = ((0xffU 
                                                   & (DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                      >> 0x17U)) 
                                                  == 
                                                  (0xffU 
                                                   & (((DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                        << 9U) 
                                                       | (DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                          >> 0x17U)) 
                                                      + (IData)(__PVT__DuI__DOT__X3__DOT__A1__DOT__exponent_diff))));
    __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_add 
        = (((~ (IData)(DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_1)) 
            & (IData)(__PVT__DuI__DOT__X3__DOT__A1__DOT__perform))
            ? (0x1ffffffU & (DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_2 
                             + __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_b_add_sub))
            : 0U);
    __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub 
        = ((IData)(__PVT__DuI__DOT__X3__DOT__A1__DOT__perform)
            ? (0x1ffffffU & (DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_2 
                             + (((IData)(DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_1) 
                                 & (IData)(__PVT__DuI__DOT__X3__DOT__A1__DOT__perform))
                                 ? (0xffffffU & ((IData)(1U) 
                                                 + 
                                                 (~ __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_b_add_sub)))
                                 : 0U))) : 0U);
    if (((((((((0x1800000U == (0x1800000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub)) 
               | (0x1400000U == (0x1c00000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) 
              | (0x1200000U == (0x1e00000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) 
             | (0x1100000U == (0x1f00000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) 
            | (0x1080000U == (0x1f80000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) 
           | (0x1040000U == (0x1fc0000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) 
          | (0x1020000U == (0x1fe0000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) 
         | (0x1010000U == (0x1ff0000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub)))) {
        if ((0x1800000U == (0x1800000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub);
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 0U;
        } else if ((0x1400000U == (0x1c00000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 1U));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 1U;
        } else if ((0x1200000U == (0x1e00000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 2U));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 2U;
        } else if ((0x1100000U == (0x1f00000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 3U));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 3U;
        } else if ((0x1080000U == (0x1f80000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 4U));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 4U;
        } else if ((0x1040000U == (0x1fc0000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 5U));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 5U;
        } else if ((0x1020000U == (0x1fe0000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 6U));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 6U;
        } else {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 7U));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 7U;
        }
    } else if (((((((((0x1008000U == (0x1ff8000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub)) 
                      | (0x1004000U == (0x1ffc000U 
                                        & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) 
                     | (0x1002000U == (0x1ffe000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) 
                    | (0x1001000U == (0x1fff000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) 
                   | (0x1000800U == (0x1fff800U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) 
                  | (0x1000400U == (0x1fffc00U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) 
                 | (0x1000200U == (0x1fffe00U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) 
                | (0x1000100U == (0x1ffff00U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub)))) {
        if ((0x1008000U == (0x1ff8000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 8U));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 8U;
        } else if ((0x1004000U == (0x1ffc000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 9U));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 9U;
        } else if ((0x1002000U == (0x1ffe000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 0xaU));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 0xaU;
        } else if ((0x1001000U == (0x1fff000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 0xbU));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 0xbU;
        } else if ((0x1000800U == (0x1fff800U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 0xcU));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 0xcU;
        } else if ((0x1000400U == (0x1fffc00U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 0xdU));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 0xdU;
        } else if ((0x1000200U == (0x1fffe00U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 0xeU));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 0xeU;
        } else {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 0xfU));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 0xfU;
        }
    } else if (((((((((0x1000080U == (0x1ffff80U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub)) 
                      | (0x1000040U == (0x1ffffc0U 
                                        & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) 
                     | (0x1000020U == (0x1ffffe0U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) 
                    | (0x1000010U == (0x1fffff0U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) 
                   | (0x1000008U == (0x1fffff8U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) 
                  | (0x1000004U == (0x1fffffcU & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) 
                 | (0x1000002U == (0x1fffffeU & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) 
                | (0x1000001U == __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
        if ((0x1000080U == (0x1ffff80U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 0x10U));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 0x10U;
        } else if ((0x1000040U == (0x1ffffc0U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 0x11U));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 0x11U;
        } else if ((0x1000020U == (0x1ffffe0U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 0x12U));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 0x12U;
        } else if ((0x1000010U == (0x1fffff0U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 0x13U));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 0x13U;
        } else if ((0x1000008U == (0x1fffff8U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 0x14U));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 0x14U;
        } else if ((0x1000004U == (0x1fffffcU & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 0x15U));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 0x15U;
        } else if ((0x1000002U == (0x1fffffeU & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 0x16U));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 0x16U;
        } else {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 0x17U));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 0x17U;
        }
    } else if ((0x1000000U == __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub)) {
        __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
            = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 0x18U));
        __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 0x18U;
    } else {
        __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
            = (0x1ffffffU & ((IData)(1U) + (~ __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub)));
        __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 0U;
    }
    __PVT__DuI__DOT__X3__DOT__A1__DOT__result = (((0xffU 
                                                   == 
                                                   (0xffU 
                                                    & (DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                       >> 0x17U))) 
                                                  | (0xffU 
                                                     == 
                                                     (0xffU 
                                                      & (DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                         >> 0x17U))))
                                                  ? 0U
                                                  : 
                                                 ((IData)(DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_1)
                                                   ? 
                                                  ((0x80000000U 
                                                    & DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U]) 
                                                   | ((0x7f800000U 
                                                       & ((((DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                             << 9U) 
                                                            | (DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                               >> 0x17U)) 
                                                           - (IData)(__PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift)) 
                                                          << 0x17U)) 
                                                      | (0x7fffffU 
                                                         & __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff)))
                                                   : 
                                                  ((0x80000000U 
                                                    & DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U]) 
                                                   | ((0x7f800000U 
                                                       & ((((DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                             << 9U) 
                                                            | (DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                               >> 0x17U)) 
                                                           + 
                                                           (1U 
                                                            & (__PVT__DuI__DOT__X3__DOT__A1__DOT__significand_add 
                                                               >> 0x18U))) 
                                                          << 0x17U)) 
                                                      | (0x7fffffU 
                                                         & ((0x1000000U 
                                                             & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_add)
                                                             ? 
                                                            (__PVT__DuI__DOT__X3__DOT__A1__DOT__significand_add 
                                                             >> 1U)
                                                             : __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_add))))));
    __PVT__DuI__DOT__X3__DOT__M2__DOT__sign = ((__PVT__DuI__DOT__X3__DOT__M1__DOT__a_operand 
                                                ^ __PVT__DuI__DOT__X3__DOT__A1__DOT__result) 
                                               >> 0x1fU);
    __PVT__DuI__DOT__X3__DOT__M2__DOT__Exception = 
        ((0xffU == (0xffU & (__PVT__DuI__DOT__X3__DOT__M1__DOT__a_operand 
                             >> 0x17U))) | (0xffU == 
                                            (0xffU 
                                             & (__PVT__DuI__DOT__X3__DOT__A1__DOT__result 
                                                >> 0x17U))));
    __PVT__DuI__DOT__X3__DOT__M2__DOT__product = (0xffffffffffffULL 
                                                  & (__VdfgRegularize_hc373ca9b_1_3 
                                                     * (QData)((IData)(
                                                                       ((0U 
                                                                         != 
                                                                         (0xffU 
                                                                          & (__PVT__DuI__DOT__X3__DOT__A1__DOT__result 
                                                                             >> 0x17U)))
                                                                         ? 
                                                                        (0x800000U 
                                                                         | (0x7fffffU 
                                                                            & __PVT__DuI__DOT__X3__DOT__A1__DOT__result))
                                                                         : 
                                                                        (0x7fffffU 
                                                                         & __PVT__DuI__DOT__X3__DOT__A1__DOT__result))))));
    __PVT__DuI__DOT__X3__DOT__M2__DOT__product_normalised 
        = (0xffffffffffffULL & ((1U & (IData)((__PVT__DuI__DOT__X3__DOT__M2__DOT__product 
                                               >> 0x2fU)))
                                 ? __PVT__DuI__DOT__X3__DOT__M2__DOT__product
                                 : VL_SHIFTL_QQI(48,48,32, __PVT__DuI__DOT__X3__DOT__M2__DOT__product, 1U)));
    __PVT__DuI__DOT__X3__DOT__M2__DOT__zero = ((~ (IData)(__PVT__DuI__DOT__X3__DOT__M2__DOT__Exception)) 
                                               & (0ULL 
                                                  == __PVT__DuI__DOT__X3__DOT__M2__DOT__product));
    __PVT__DuI__DOT__X3__DOT__M2__DOT__exponent = (0x1ffU 
                                                   & ((((0xffU 
                                                         & (__PVT__DuI__DOT__X3__DOT__M1__DOT__a_operand 
                                                            >> 0x17U)) 
                                                        + 
                                                        (0xffU 
                                                         & (__PVT__DuI__DOT__X3__DOT__A1__DOT__result 
                                                            >> 0x17U))) 
                                                       - (IData)(0x7fU)) 
                                                      + 
                                                      (1U 
                                                       & (IData)(
                                                                 (__PVT__DuI__DOT__X3__DOT__M2__DOT__product 
                                                                  >> 0x2fU)))));
    __PVT__DuI__DOT__END__DOT__a_operand = ((IData)(__PVT__DuI__DOT__X3__DOT__M2__DOT__Exception)
                                             ? 0U : 
                                            ((IData)(__PVT__DuI__DOT__X3__DOT__M2__DOT__zero)
                                              ? ((IData)(__PVT__DuI__DOT__X3__DOT__M2__DOT__sign) 
                                                 << 0x1fU)
                                              : ((1U 
                                                  & (IData)(
                                                            ((0x100U 
                                                              == 
                                                              (0x180U 
                                                               & (IData)(__PVT__DuI__DOT__X3__DOT__M2__DOT__exponent))) 
                                                             & (~ (IData)(__PVT__DuI__DOT__X3__DOT__M2__DOT__zero)))))
                                                  ? 
                                                 (0x7f800000U 
                                                  | ((IData)(__PVT__DuI__DOT__X3__DOT__M2__DOT__sign) 
                                                     << 0x1fU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             ((0x180U 
                                                               == 
                                                               (0x180U 
                                                                & (IData)(__PVT__DuI__DOT__X3__DOT__M2__DOT__exponent))) 
                                                              & (~ (IData)(__PVT__DuI__DOT__X3__DOT__M2__DOT__zero)))))
                                                   ? 
                                                  ((IData)(__PVT__DuI__DOT__X3__DOT__M2__DOT__sign) 
                                                   << 0x1fU)
                                                   : 
                                                  (((IData)(__PVT__DuI__DOT__X3__DOT__M2__DOT__sign) 
                                                    << 0x1fU) 
                                                   | ((0x7f800000U 
                                                       & ((IData)(__PVT__DuI__DOT__X3__DOT__M2__DOT__exponent) 
                                                          << 0x17U)) 
                                                      | (0x7fffffU 
                                                         & ((IData)(
                                                                    (__PVT__DuI__DOT__X3__DOT__M2__DOT__product_normalised 
                                                                     >> 0x18U)) 
                                                            + 
                                                            ((IData)(
                                                                     (__PVT__DuI__DOT__X3__DOT__M2__DOT__product_normalised 
                                                                      >> 0x17U)) 
                                                             & (0U 
                                                                != 
                                                                (0x7fffffU 
                                                                 & (IData)(__PVT__DuI__DOT__X3__DOT__M2__DOT__product_normalised))))))))))));
    vlSelfRef.__PVT__DuI__DOT__END__DOT__sign = ((__PVT__DuI__DOT__END__DOT__a_operand 
                                                  ^ vlSelfRef.__PVT__Div_A) 
                                                 >> 0x1fU);
    vlSelfRef.__PVT__DuI__DOT__END__DOT__Exception 
        = ((0xffU == (0xffU & (__PVT__DuI__DOT__END__DOT__a_operand 
                               >> 0x17U))) | (0xffU 
                                              == (IData)(__VdfgRegularize_hc373ca9b_1_0)));
    __PVT__DuI__DOT__END__DOT__product = (0xffffffffffffULL 
                                          & ((QData)((IData)(
                                                             ((0U 
                                                               != 
                                                               (0xffU 
                                                                & (__PVT__DuI__DOT__END__DOT__a_operand 
                                                                   >> 0x17U)))
                                                               ? 
                                                              (0x800000U 
                                                               | (0x7fffffU 
                                                                  & __PVT__DuI__DOT__END__DOT__a_operand))
                                                               : 
                                                              (0x7fffffU 
                                                               & __PVT__DuI__DOT__END__DOT__a_operand)))) 
                                             * (QData)((IData)(
                                                               ((0U 
                                                                 != (IData)(__VdfgRegularize_hc373ca9b_1_0))
                                                                 ? 
                                                                (0x800000U 
                                                                 | (0x7fffffU 
                                                                    & vlSelfRef.__PVT__Div_A))
                                                                 : 
                                                                (0x7fffffU 
                                                                 & vlSelfRef.__PVT__Div_A))))));
    vlSelfRef.__PVT__DuI__DOT__END__DOT__product_normalised 
        = (0xffffffffffffULL & ((1U & (IData)((__PVT__DuI__DOT__END__DOT__product 
                                               >> 0x2fU)))
                                 ? __PVT__DuI__DOT__END__DOT__product
                                 : VL_SHIFTL_QQI(48,48,32, __PVT__DuI__DOT__END__DOT__product, 1U)));
    vlSelfRef.__PVT__DuI__DOT__END__DOT__zero = ((~ (IData)(vlSelfRef.__PVT__DuI__DOT__END__DOT__Exception)) 
                                                 & (0ULL 
                                                    == __PVT__DuI__DOT__END__DOT__product));
    vlSelfRef.__PVT__DuI__DOT__END__DOT__exponent = 
        (0x1ffU & ((((0xffU & (__PVT__DuI__DOT__END__DOT__a_operand 
                               >> 0x17U)) + (IData)(__VdfgRegularize_hc373ca9b_1_0)) 
                    - (IData)(0x7fU)) + (1U & (IData)(
                                                      (__PVT__DuI__DOT__END__DOT__product 
                                                       >> 0x2fU)))));
}

VL_INLINE_OPT VlCoroutine Vtest_oc_tiled_matmul_ALU___eval_initial__TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__23__KET____DOT__fpu_inst__Vtiming__0(Vtest_oc_tiled_matmul_ALU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_oc_tiled_matmul_ALU___eval_initial__TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__23__KET____DOT__fpu_inst__Vtiming__0\n"); );
    Vtest_oc_tiled_matmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VtrigSched_h8d29e1c4__0.trigger(0U, 
                                                                nullptr, 
                                                                "@( test_oc_tiled_matmul.dut.fpu_lane[23].fpu_inst.a_operand)", 
                                                                "../RTL/Converter.v", 
                                                                224);
        co_await vlSymsp->TOP.__VdlySched.delay(0x3e8ULL, 
                                                nullptr, 
                                                "../RTL/Converter.v", 
                                                225);
    }
}

VL_INLINE_OPT void Vtest_oc_tiled_matmul_ALU___nba_sequent__TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__23__KET____DOT__fpu_inst__0(Vtest_oc_tiled_matmul_ALU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_oc_tiled_matmul_ALU___nba_sequent__TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__23__KET____DOT__fpu_inst__0\n"); );
    Vtest_oc_tiled_matmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __PVT__Add_Sub_A;
    __PVT__Add_Sub_A = 0;
    IData/*31:0*/ __PVT__Add_Sub_B;
    __PVT__Add_Sub_B = 0;
    IData/*31:0*/ __PVT__Mul_A;
    __PVT__Mul_A = 0;
    IData/*31:0*/ __PVT__Mul_B;
    __PVT__Mul_B = 0;
    CData/*0:0*/ __PVT__Add_Sub_Exception;
    __PVT__Add_Sub_Exception = 0;
    CData/*0:0*/ __PVT__AddBar_Sub;
    __PVT__AddBar_Sub = 0;
    QData/*63:0*/ __VdfgRegularize_hc373ca9b_0_1;
    __VdfgRegularize_hc373ca9b_0_1 = 0;
    VlWide<3>/*64:0*/ __VdfgRegularize_hc373ca9b_0_2;
    VL_ZERO_W(65, __VdfgRegularize_hc373ca9b_0_2);
    QData/*63:0*/ __VdfgRegularize_hc373ca9b_0_4;
    __VdfgRegularize_hc373ca9b_0_4 = 0;
    QData/*63:0*/ __VdfgRegularize_hc373ca9b_0_6;
    __VdfgRegularize_hc373ca9b_0_6 = 0;
    VlWide<3>/*64:0*/ __VdfgRegularize_hc373ca9b_0_8;
    VL_ZERO_W(65, __VdfgRegularize_hc373ca9b_0_8);
    CData/*0:0*/ __PVT__AuI__DOT__operation_sub_addBar;
    __PVT__AuI__DOT__operation_sub_addBar = 0;
    CData/*0:0*/ __PVT__AuI__DOT__output_sign;
    __PVT__AuI__DOT__output_sign = 0;
    CData/*7:0*/ __PVT__AuI__DOT__exponent_diff;
    __PVT__AuI__DOT__exponent_diff = 0;
    IData/*23:0*/ __PVT__AuI__DOT__significand_b_add_sub;
    __PVT__AuI__DOT__significand_b_add_sub = 0;
    IData/*24:0*/ __PVT__AuI__DOT__significand_add;
    __PVT__AuI__DOT__significand_add = 0;
    IData/*24:0*/ __PVT__AuI__DOT__significand_sub;
    __PVT__AuI__DOT__significand_sub = 0;
    IData/*24:0*/ __PVT__AuI__DOT__subtraction_diff;
    __PVT__AuI__DOT__subtraction_diff = 0;
    CData/*0:0*/ __PVT__AuI__DOT__perform;
    __PVT__AuI__DOT__perform = 0;
    VlWide<3>/*64:0*/ AuI__DOT____VdfgRegularize_ha816c9b8_0_0;
    VL_ZERO_W(65, AuI__DOT____VdfgRegularize_ha816c9b8_0_0);
    CData/*0:0*/ AuI__DOT____VdfgRegularize_ha816c9b8_0_1;
    AuI__DOT____VdfgRegularize_ha816c9b8_0_1 = 0;
    IData/*24:0*/ AuI__DOT____VdfgRegularize_ha816c9b8_0_2;
    AuI__DOT____VdfgRegularize_ha816c9b8_0_2 = 0;
    CData/*4:0*/ __PVT__AuI__DOT__pe__DOT__shift;
    __PVT__AuI__DOT__pe__DOT__shift = 0;
    QData/*47:0*/ __PVT__MuI__DOT__product;
    __PVT__MuI__DOT__product = 0;
    QData/*47:0*/ __PVT__DuI__DOT__x0__DOT__product_normalised;
    __PVT__DuI__DOT__x0__DOT__product_normalised = 0;
    IData/*31:0*/ __PVT__DuI__DOT__X0__DOT__a_operand;
    __PVT__DuI__DOT__X0__DOT__a_operand = 0;
    IData/*31:0*/ __PVT__DuI__DOT__X0__DOT__result;
    __PVT__DuI__DOT__X0__DOT__result = 0;
    CData/*7:0*/ __PVT__DuI__DOT__X0__DOT__exponent_diff;
    __PVT__DuI__DOT__X0__DOT__exponent_diff = 0;
    IData/*23:0*/ __PVT__DuI__DOT__X0__DOT__significand_b_add_sub;
    __PVT__DuI__DOT__X0__DOT__significand_b_add_sub = 0;
    IData/*24:0*/ __PVT__DuI__DOT__X0__DOT__significand_add;
    __PVT__DuI__DOT__X0__DOT__significand_add = 0;
    IData/*24:0*/ __PVT__DuI__DOT__X0__DOT__significand_sub;
    __PVT__DuI__DOT__X0__DOT__significand_sub = 0;
    IData/*24:0*/ __PVT__DuI__DOT__X0__DOT__subtraction_diff;
    __PVT__DuI__DOT__X0__DOT__subtraction_diff = 0;
    CData/*0:0*/ __PVT__DuI__DOT__X0__DOT__perform;
    __PVT__DuI__DOT__X0__DOT__perform = 0;
    VlWide<3>/*64:0*/ DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0;
    VL_ZERO_W(65, DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0);
    CData/*0:0*/ DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_1;
    DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_1 = 0;
    IData/*24:0*/ DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_2;
    DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_2 = 0;
    CData/*4:0*/ __PVT__DuI__DOT__X0__DOT__pe__DOT__shift;
    __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 0;
    CData/*0:0*/ __PVT__DuI__DOT__X1__DOT__M1__DOT__zero;
    __PVT__DuI__DOT__X1__DOT__M1__DOT__zero = 0;
    SData/*8:0*/ __PVT__DuI__DOT__X1__DOT__M1__DOT__exponent;
    __PVT__DuI__DOT__X1__DOT__M1__DOT__exponent = 0;
    QData/*47:0*/ __PVT__DuI__DOT__X1__DOT__M1__DOT__product;
    __PVT__DuI__DOT__X1__DOT__M1__DOT__product = 0;
    QData/*47:0*/ __PVT__DuI__DOT__X1__DOT__M1__DOT__product_normalised;
    __PVT__DuI__DOT__X1__DOT__M1__DOT__product_normalised = 0;
    IData/*31:0*/ __PVT__DuI__DOT__X1__DOT__A1__DOT__result;
    __PVT__DuI__DOT__X1__DOT__A1__DOT__result = 0;
    CData/*7:0*/ __PVT__DuI__DOT__X1__DOT__A1__DOT__exponent_diff;
    __PVT__DuI__DOT__X1__DOT__A1__DOT__exponent_diff = 0;
    IData/*23:0*/ __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_b_add_sub;
    __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_b_add_sub = 0;
    IData/*24:0*/ __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_add;
    __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_add = 0;
    IData/*24:0*/ __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub;
    __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub = 0;
    IData/*24:0*/ __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff;
    __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff = 0;
    CData/*0:0*/ __PVT__DuI__DOT__X1__DOT__A1__DOT__perform;
    __PVT__DuI__DOT__X1__DOT__A1__DOT__perform = 0;
    VlWide<3>/*64:0*/ DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0;
    VL_ZERO_W(65, DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0);
    CData/*0:0*/ DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_1;
    DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_1 = 0;
    IData/*24:0*/ DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_2;
    DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_2 = 0;
    CData/*4:0*/ __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift;
    __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 0;
    CData/*0:0*/ __PVT__DuI__DOT__X1__DOT__M2__DOT__Exception;
    __PVT__DuI__DOT__X1__DOT__M2__DOT__Exception = 0;
    CData/*0:0*/ __PVT__DuI__DOT__X1__DOT__M2__DOT__sign;
    __PVT__DuI__DOT__X1__DOT__M2__DOT__sign = 0;
    CData/*0:0*/ __PVT__DuI__DOT__X1__DOT__M2__DOT__zero;
    __PVT__DuI__DOT__X1__DOT__M2__DOT__zero = 0;
    SData/*8:0*/ __PVT__DuI__DOT__X1__DOT__M2__DOT__exponent;
    __PVT__DuI__DOT__X1__DOT__M2__DOT__exponent = 0;
    QData/*47:0*/ __PVT__DuI__DOT__X1__DOT__M2__DOT__product;
    __PVT__DuI__DOT__X1__DOT__M2__DOT__product = 0;
    QData/*47:0*/ __PVT__DuI__DOT__X1__DOT__M2__DOT__product_normalised;
    __PVT__DuI__DOT__X1__DOT__M2__DOT__product_normalised = 0;
    IData/*31:0*/ __PVT__DuI__DOT__X2__DOT__M1__DOT__a_operand;
    __PVT__DuI__DOT__X2__DOT__M1__DOT__a_operand = 0;
    CData/*0:0*/ __PVT__DuI__DOT__X2__DOT__M1__DOT__zero;
    __PVT__DuI__DOT__X2__DOT__M1__DOT__zero = 0;
    SData/*8:0*/ __PVT__DuI__DOT__X2__DOT__M1__DOT__exponent;
    __PVT__DuI__DOT__X2__DOT__M1__DOT__exponent = 0;
    QData/*47:0*/ __PVT__DuI__DOT__X2__DOT__M1__DOT__product;
    __PVT__DuI__DOT__X2__DOT__M1__DOT__product = 0;
    QData/*47:0*/ __PVT__DuI__DOT__X2__DOT__M1__DOT__product_normalised;
    __PVT__DuI__DOT__X2__DOT__M1__DOT__product_normalised = 0;
    IData/*31:0*/ __PVT__DuI__DOT__X2__DOT__A1__DOT__result;
    __PVT__DuI__DOT__X2__DOT__A1__DOT__result = 0;
    CData/*7:0*/ __PVT__DuI__DOT__X2__DOT__A1__DOT__exponent_diff;
    __PVT__DuI__DOT__X2__DOT__A1__DOT__exponent_diff = 0;
    IData/*23:0*/ __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_b_add_sub;
    __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_b_add_sub = 0;
    IData/*24:0*/ __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_add;
    __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_add = 0;
    IData/*24:0*/ __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub;
    __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub = 0;
    IData/*24:0*/ __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff;
    __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff = 0;
    CData/*0:0*/ __PVT__DuI__DOT__X2__DOT__A1__DOT__perform;
    __PVT__DuI__DOT__X2__DOT__A1__DOT__perform = 0;
    VlWide<3>/*64:0*/ DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0;
    VL_ZERO_W(65, DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0);
    CData/*0:0*/ DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_1;
    DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_1 = 0;
    IData/*24:0*/ DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_2;
    DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_2 = 0;
    CData/*4:0*/ __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift;
    __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 0;
    CData/*0:0*/ __PVT__DuI__DOT__X2__DOT__M2__DOT__Exception;
    __PVT__DuI__DOT__X2__DOT__M2__DOT__Exception = 0;
    CData/*0:0*/ __PVT__DuI__DOT__X2__DOT__M2__DOT__sign;
    __PVT__DuI__DOT__X2__DOT__M2__DOT__sign = 0;
    CData/*0:0*/ __PVT__DuI__DOT__X2__DOT__M2__DOT__zero;
    __PVT__DuI__DOT__X2__DOT__M2__DOT__zero = 0;
    SData/*8:0*/ __PVT__DuI__DOT__X2__DOT__M2__DOT__exponent;
    __PVT__DuI__DOT__X2__DOT__M2__DOT__exponent = 0;
    QData/*47:0*/ __PVT__DuI__DOT__X2__DOT__M2__DOT__product;
    __PVT__DuI__DOT__X2__DOT__M2__DOT__product = 0;
    QData/*47:0*/ __PVT__DuI__DOT__X2__DOT__M2__DOT__product_normalised;
    __PVT__DuI__DOT__X2__DOT__M2__DOT__product_normalised = 0;
    IData/*31:0*/ __PVT__DuI__DOT__X3__DOT__M1__DOT__a_operand;
    __PVT__DuI__DOT__X3__DOT__M1__DOT__a_operand = 0;
    CData/*0:0*/ __PVT__DuI__DOT__X3__DOT__M1__DOT__zero;
    __PVT__DuI__DOT__X3__DOT__M1__DOT__zero = 0;
    SData/*8:0*/ __PVT__DuI__DOT__X3__DOT__M1__DOT__exponent;
    __PVT__DuI__DOT__X3__DOT__M1__DOT__exponent = 0;
    QData/*47:0*/ __PVT__DuI__DOT__X3__DOT__M1__DOT__product;
    __PVT__DuI__DOT__X3__DOT__M1__DOT__product = 0;
    QData/*47:0*/ __PVT__DuI__DOT__X3__DOT__M1__DOT__product_normalised;
    __PVT__DuI__DOT__X3__DOT__M1__DOT__product_normalised = 0;
    IData/*31:0*/ __PVT__DuI__DOT__X3__DOT__A1__DOT__result;
    __PVT__DuI__DOT__X3__DOT__A1__DOT__result = 0;
    CData/*7:0*/ __PVT__DuI__DOT__X3__DOT__A1__DOT__exponent_diff;
    __PVT__DuI__DOT__X3__DOT__A1__DOT__exponent_diff = 0;
    IData/*23:0*/ __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_b_add_sub;
    __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_b_add_sub = 0;
    IData/*24:0*/ __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_add;
    __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_add = 0;
    IData/*24:0*/ __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub;
    __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub = 0;
    IData/*24:0*/ __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff;
    __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff = 0;
    CData/*0:0*/ __PVT__DuI__DOT__X3__DOT__A1__DOT__perform;
    __PVT__DuI__DOT__X3__DOT__A1__DOT__perform = 0;
    VlWide<3>/*64:0*/ DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0;
    VL_ZERO_W(65, DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0);
    CData/*0:0*/ DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_1;
    DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_1 = 0;
    IData/*24:0*/ DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_2;
    DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_2 = 0;
    CData/*4:0*/ __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift;
    __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 0;
    CData/*0:0*/ __PVT__DuI__DOT__X3__DOT__M2__DOT__Exception;
    __PVT__DuI__DOT__X3__DOT__M2__DOT__Exception = 0;
    CData/*0:0*/ __PVT__DuI__DOT__X3__DOT__M2__DOT__sign;
    __PVT__DuI__DOT__X3__DOT__M2__DOT__sign = 0;
    CData/*0:0*/ __PVT__DuI__DOT__X3__DOT__M2__DOT__zero;
    __PVT__DuI__DOT__X3__DOT__M2__DOT__zero = 0;
    SData/*8:0*/ __PVT__DuI__DOT__X3__DOT__M2__DOT__exponent;
    __PVT__DuI__DOT__X3__DOT__M2__DOT__exponent = 0;
    QData/*47:0*/ __PVT__DuI__DOT__X3__DOT__M2__DOT__product;
    __PVT__DuI__DOT__X3__DOT__M2__DOT__product = 0;
    QData/*47:0*/ __PVT__DuI__DOT__X3__DOT__M2__DOT__product_normalised;
    __PVT__DuI__DOT__X3__DOT__M2__DOT__product_normalised = 0;
    IData/*31:0*/ __PVT__DuI__DOT__END__DOT__a_operand;
    __PVT__DuI__DOT__END__DOT__a_operand = 0;
    QData/*47:0*/ __PVT__DuI__DOT__END__DOT__product;
    __PVT__DuI__DOT__END__DOT__product = 0;
    IData/*31:0*/ __PVT__IuF__DOT__unnamedblk1__DOT__i;
    __PVT__IuF__DOT__unnamedblk1__DOT__i = 0;
    CData/*7:0*/ __VdfgRegularize_hc373ca9b_1_0;
    __VdfgRegularize_hc373ca9b_1_0 = 0;
    QData/*47:0*/ __VdfgRegularize_hc373ca9b_1_1;
    __VdfgRegularize_hc373ca9b_1_1 = 0;
    QData/*47:0*/ __VdfgRegularize_hc373ca9b_1_2;
    __VdfgRegularize_hc373ca9b_1_2 = 0;
    QData/*47:0*/ __VdfgRegularize_hc373ca9b_1_3;
    __VdfgRegularize_hc373ca9b_1_3 = 0;
    IData/*30:0*/ __VdfgRegularize_hebeb780c_0_87;
    __VdfgRegularize_hebeb780c_0_87 = 0;
    IData/*30:0*/ __VdfgRegularize_hebeb780c_0_88;
    __VdfgRegularize_hebeb780c_0_88 = 0;
    IData/*30:0*/ __VdfgRegularize_hebeb780c_0_89;
    __VdfgRegularize_hebeb780c_0_89 = 0;
    // Body
    vlSelfRef.a_operand = ((vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x59U] 
                            << 2U) | (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x58U] 
                                      >> 0x1eU));
    vlSelfRef.__PVT__IuF__DOT__val = ((0x20000000U 
                                       & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x59U])
                                       ? ((IData)(1U) 
                                          + (~ ((vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x59U] 
                                                 << 2U) 
                                                | (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x58U] 
                                                   >> 0x1eU))))
                                       : ((vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x59U] 
                                           << 2U) | 
                                          (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x58U] 
                                           >> 0x1eU)));
    __VdfgRegularize_hc373ca9b_0_1 = (((QData)((IData)(
                                                       ((vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x59U] 
                                                         << 2U) 
                                                        | (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x58U] 
                                                           >> 0x1eU)))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x39U] 
                                                                     << 2U) 
                                                                    | (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x38U] 
                                                                       >> 0x1eU)))));
    vlSelfRef.__PVT__Floating_Point = (((9U == (IData)(vlSymsp->TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__0__KET____DOT__fpu_inst.Operation))
                                         ? ((vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x59U] 
                                             << 2U) 
                                            | (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x58U] 
                                               >> 0x1eU))
                                         : 0U) & ((9U 
                                                   == (IData)(vlSymsp->TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__0__KET____DOT__fpu_inst.Operation))
                                                   ? 0xffffffffU
                                                   : 0U));
    vlSelfRef.__PVT__IuF__DOT__clz = 0x1fU;
    __PVT__IuF__DOT__unnamedblk1__DOT__i = 0x1fU;
    {
        while (VL_LTES_III(32, 0U, __PVT__IuF__DOT__unnamedblk1__DOT__i)) {
            if ((1U & (vlSelfRef.__PVT__IuF__DOT__val 
                       >> (0x1fU & __PVT__IuF__DOT__unnamedblk1__DOT__i)))) {
                vlSelfRef.__PVT__IuF__DOT__clz = (0x1fU 
                                                  & ((IData)(0x1fU) 
                                                     - __PVT__IuF__DOT__unnamedblk1__DOT__i));
                goto __Vlabel0;
            }
            __PVT__IuF__DOT__unnamedblk1__DOT__i = 
                (__PVT__IuF__DOT__unnamedblk1__DOT__i 
                 - (IData)(1U));
        }
        __Vlabel0: ;
    }
    __VdfgRegularize_hc373ca9b_0_4 = ((1U == (IData)(vlSymsp->TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__0__KET____DOT__fpu_inst.Operation))
                                       ? __VdfgRegularize_hc373ca9b_0_1
                                       : 0ULL);
    if ((0xaU == (IData)(vlSymsp->TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__0__KET____DOT__fpu_inst.Operation))) {
        __VdfgRegularize_hc373ca9b_0_2[0U] = ((IData)(__VdfgRegularize_hc373ca9b_0_1) 
                                              << 1U);
        __VdfgRegularize_hc373ca9b_0_2[1U] = (((IData)(__VdfgRegularize_hc373ca9b_0_1) 
                                               >> 0x1fU) 
                                              | ((IData)(
                                                         (__VdfgRegularize_hc373ca9b_0_1 
                                                          >> 0x20U)) 
                                                 << 1U));
        __VdfgRegularize_hc373ca9b_0_2[2U] = ((IData)(
                                                      (__VdfgRegularize_hc373ca9b_0_1 
                                                       >> 0x20U)) 
                                              >> 0x1fU);
    } else {
        __VdfgRegularize_hc373ca9b_0_2[0U] = 0U;
        __VdfgRegularize_hc373ca9b_0_2[1U] = 0U;
        __VdfgRegularize_hc373ca9b_0_2[2U] = 0U;
    }
    if ((3U == (IData)(vlSymsp->TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__0__KET____DOT__fpu_inst.Operation))) {
        __VdfgRegularize_hc373ca9b_0_8[0U] = (1U | 
                                              ((IData)(__VdfgRegularize_hc373ca9b_0_1) 
                                               << 1U));
        __VdfgRegularize_hc373ca9b_0_8[1U] = (((IData)(__VdfgRegularize_hc373ca9b_0_1) 
                                               >> 0x1fU) 
                                              | ((IData)(
                                                         (__VdfgRegularize_hc373ca9b_0_1 
                                                          >> 0x20U)) 
                                                 << 1U));
        __VdfgRegularize_hc373ca9b_0_8[2U] = ((IData)(
                                                      (__VdfgRegularize_hc373ca9b_0_1 
                                                       >> 0x20U)) 
                                              >> 0x1fU);
    } else {
        __VdfgRegularize_hc373ca9b_0_8[0U] = 0U;
        __VdfgRegularize_hc373ca9b_0_8[1U] = 0U;
        __VdfgRegularize_hc373ca9b_0_8[2U] = 0U;
    }
    __VdfgRegularize_hc373ca9b_0_6 = ((2U == (IData)(vlSymsp->TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__0__KET____DOT__fpu_inst.Operation))
                                       ? __VdfgRegularize_hc373ca9b_0_1
                                       : 0ULL);
    if ((0x7fU == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                            >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 0U;
    } else if ((0x80U == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x400000U & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x81U == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x600000U & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x82U == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x700000U & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x83U == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x780000U & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x84U == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x7c0000U & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x85U == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x7e0000U & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x86U == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x7f0000U & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x87U == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x7f8000U & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x88U == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x7fc000U & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x89U == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x7fe000U & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x8aU == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x7ff000U & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x8bU == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x7ff800U & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x8cU == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x7ffc00U & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x8dU == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x7ffe00U & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x8eU == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x7fff00U & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x8fU == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x7fff80U & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x90U == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x7fffc0U & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x91U == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x7fffe0U & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x92U == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x7ffff0U & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x93U == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x7ffff8U & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x94U == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x7ffffcU & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x95U == (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x7ffffeU & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x96U <= (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 
            (0x7fffffU & vlSelfRef.__PVT__Floating_Point);
    } else if ((0x7eU >= (0xffU & (vlSelfRef.__PVT__Floating_Point 
                                   >> 0x17U)))) {
        vlSelfRef.__PVT__FuI__DOT__Integer_Value = 0U;
    }
    if ((0U == vlSelfRef.__PVT__IuF__DOT__val)) {
        vlSelfRef.__PVT__IuF__DOT__mantissa = 0U;
    } else {
        vlSelfRef.__PVT__IuF__DOT__shifted = (vlSelfRef.__PVT__IuF__DOT__val 
                                              << (IData)(vlSelfRef.__PVT__IuF__DOT__clz));
        vlSelfRef.__PVT__IuF__DOT__mantissa = (0x7fffffU 
                                               & (vlSelfRef.__PVT__IuF__DOT__shifted 
                                                  >> 8U));
    }
    __PVT__Mul_A = ((IData)((__VdfgRegularize_hc373ca9b_0_4 
                             >> 0x20U)) & (IData)((
                                                   ((1U 
                                                     == (IData)(vlSymsp->TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__0__KET____DOT__fpu_inst.Operation))
                                                     ? 0xffffffffffffffffULL
                                                     : 0ULL) 
                                                   >> 0x20U)));
    __PVT__Mul_B = ((IData)(__VdfgRegularize_hc373ca9b_0_4) 
                    & (IData)(((1U == (IData)(vlSymsp->TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__0__KET____DOT__fpu_inst.Operation))
                                ? 0xffffffffffffffffULL
                                : 0ULL)));
    __PVT__AddBar_Sub = (1U & ((__VdfgRegularize_hc373ca9b_0_2[0U] 
                                & ((0xaU == (IData)(vlSymsp->TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__0__KET____DOT__fpu_inst.Operation))
                                    ? 0xffffffffU : 0U)) 
                               | (__VdfgRegularize_hc373ca9b_0_8[0U] 
                                  & ((3U == (IData)(vlSymsp->TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__0__KET____DOT__fpu_inst.Operation))
                                      ? 0xffffffffU
                                      : 0U))));
    __PVT__Add_Sub_A = ((((__VdfgRegularize_hc373ca9b_0_2[2U] 
                           << 0x1fU) | (__VdfgRegularize_hc373ca9b_0_2[1U] 
                                        >> 1U)) & (0x80000000U 
                                                   | (((0xaU 
                                                        == (IData)(vlSymsp->TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__0__KET____DOT__fpu_inst.Operation))
                                                        ? 0xffffffffU
                                                        : 0U) 
                                                      >> 1U))) 
                        | (((__VdfgRegularize_hc373ca9b_0_8[2U] 
                             << 0x1fU) | (__VdfgRegularize_hc373ca9b_0_8[1U] 
                                          >> 1U)) & 
                           (0x80000000U | (((3U == (IData)(vlSymsp->TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__0__KET____DOT__fpu_inst.Operation))
                                             ? 0xffffffffU
                                             : 0U) 
                                           >> 1U))));
    __PVT__Add_Sub_B = ((((__VdfgRegularize_hc373ca9b_0_2[1U] 
                           << 0x1fU) | (__VdfgRegularize_hc373ca9b_0_2[0U] 
                                        >> 1U)) & (
                                                   (((0xaU 
                                                      == (IData)(vlSymsp->TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__0__KET____DOT__fpu_inst.Operation))
                                                      ? 0xffffffffU
                                                      : 0U) 
                                                    << 0x1fU) 
                                                   | (((0xaU 
                                                        == (IData)(vlSymsp->TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__0__KET____DOT__fpu_inst.Operation))
                                                        ? 0xffffffffU
                                                        : 0U) 
                                                      >> 1U))) 
                        | (((__VdfgRegularize_hc373ca9b_0_8[1U] 
                             << 0x1fU) | (__VdfgRegularize_hc373ca9b_0_8[0U] 
                                          >> 1U)) & 
                           ((((3U == (IData)(vlSymsp->TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__0__KET____DOT__fpu_inst.Operation))
                               ? 0xffffffffU : 0U) 
                             << 0x1fU) | (((3U == (IData)(vlSymsp->TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__0__KET____DOT__fpu_inst.Operation))
                                            ? 0xffffffffU
                                            : 0U) >> 1U))));
    vlSelfRef.__PVT__Div_A = ((IData)((__VdfgRegularize_hc373ca9b_0_6 
                                       >> 0x20U)) & (IData)(
                                                            (((2U 
                                                               == (IData)(vlSymsp->TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__0__KET____DOT__fpu_inst.Operation))
                                                               ? 0xffffffffffffffffULL
                                                               : 0ULL) 
                                                             >> 0x20U)));
    vlSelfRef.__PVT__Div_B = ((IData)(__VdfgRegularize_hc373ca9b_0_6) 
                              & (IData)(((2U == (IData)(vlSymsp->TOP__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__0__KET____DOT__fpu_inst.Operation))
                                          ? 0xffffffffffffffffULL
                                          : 0ULL)));
    vlSelfRef.__PVT__MuI__DOT__sign = ((__PVT__Mul_A 
                                        ^ __PVT__Mul_B) 
                                       >> 0x1fU);
    vlSelfRef.__PVT__Mul_Exception = ((0xffU == (0xffU 
                                                 & (__PVT__Mul_A 
                                                    >> 0x17U))) 
                                      | (0xffU == (0xffU 
                                                   & (__PVT__Mul_B 
                                                      >> 0x17U))));
    __PVT__MuI__DOT__product = (0xffffffffffffULL & 
                                ((QData)((IData)(((0U 
                                                   != 
                                                   (0xffU 
                                                    & (__PVT__Mul_A 
                                                       >> 0x17U)))
                                                   ? 
                                                  (0x800000U 
                                                   | (0x7fffffU 
                                                      & __PVT__Mul_A))
                                                   : 
                                                  (0x7fffffU 
                                                   & __PVT__Mul_A)))) 
                                 * (QData)((IData)(
                                                   ((0U 
                                                     != 
                                                     (0xffU 
                                                      & (__PVT__Mul_B 
                                                         >> 0x17U)))
                                                     ? 
                                                    (0x800000U 
                                                     | (0x7fffffU 
                                                        & __PVT__Mul_B))
                                                     : 
                                                    (0x7fffffU 
                                                     & __PVT__Mul_B))))));
    if (((0x7fffffffU & __PVT__Add_Sub_A) < (0x7fffffffU 
                                             & __PVT__Add_Sub_B))) {
        AuI__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
            = (IData)((((QData)((IData)(__PVT__Add_Sub_B)) 
                        << 0x20U) | (QData)((IData)(__PVT__Add_Sub_A))));
        AuI__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            = (IData)(((((QData)((IData)(__PVT__Add_Sub_B)) 
                         << 0x20U) | (QData)((IData)(__PVT__Add_Sub_A))) 
                       >> 0x20U));
        AuI__DOT____VdfgRegularize_ha816c9b8_0_0[2U] = 1U;
    } else {
        AuI__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
            = (IData)((((QData)((IData)(__PVT__Add_Sub_A)) 
                        << 0x20U) | (QData)((IData)(__PVT__Add_Sub_B))));
        AuI__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            = (IData)(((((QData)((IData)(__PVT__Add_Sub_A)) 
                         << 0x20U) | (QData)((IData)(__PVT__Add_Sub_B))) 
                       >> 0x20U));
        AuI__DOT____VdfgRegularize_ha816c9b8_0_0[2U] = 0U;
    }
    __VdfgRegularize_hc373ca9b_1_0 = (0xffU & ((vlSelfRef.__PVT__Div_A 
                                                >> 0x17U) 
                                               + ((IData)(0x7eU) 
                                                  - 
                                                  (vlSelfRef.__PVT__Div_B 
                                                   >> 0x17U))));
    __PVT__DuI__DOT__x0__DOT__product_normalised = 
        (0xffffffffffffULL & ((1U & (IData)((1ULL & 
                                             ((0x8b4b4bULL 
                                               * (0x800000ULL 
                                                  | (QData)((IData)(
                                                                    (0x7fffffU 
                                                                     & vlSelfRef.__PVT__Div_B))))) 
                                              >> 0x2fU))))
                               ? (0x8b4b4bULL * (0x800000ULL 
                                                 | (QData)((IData)(
                                                                   (0x7fffffU 
                                                                    & vlSelfRef.__PVT__Div_B)))))
                               : VL_SHIFTL_QQI(48,48,32, 
                                               (0x8b4b4bULL 
                                                * (0x800000ULL 
                                                   | (QData)((IData)(
                                                                     (0x7fffffU 
                                                                      & vlSelfRef.__PVT__Div_B))))), 1U)));
    vlSelfRef.__PVT__MuI__DOT__product_normalised = 
        (0xffffffffffffULL & ((1U & (IData)((__PVT__MuI__DOT__product 
                                             >> 0x2fU)))
                               ? __PVT__MuI__DOT__product
                               : VL_SHIFTL_QQI(48,48,32, __PVT__MuI__DOT__product, 1U)));
    vlSelfRef.__PVT__MuI__DOT__zero = ((~ (IData)(vlSelfRef.__PVT__Mul_Exception)) 
                                       & (0ULL == __PVT__MuI__DOT__product));
    vlSelfRef.__PVT__MuI__DOT__exponent = (0x1ffU & 
                                           ((((0xffU 
                                               & (__PVT__Mul_A 
                                                  >> 0x17U)) 
                                              + (0xffU 
                                                 & (__PVT__Mul_B 
                                                    >> 0x17U))) 
                                             - (IData)(0x7fU)) 
                                            + (1U & (IData)(
                                                            (__PVT__MuI__DOT__product 
                                                             >> 0x2fU)))));
    __PVT__Add_Sub_Exception = ((0xffU == (0xffU & 
                                           (AuI__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                            >> 0x17U))) 
                                | (0xffU == (0xffU 
                                             & (AuI__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                >> 0x17U))));
    AuI__DOT____VdfgRegularize_ha816c9b8_0_2 = ((0U 
                                                 != 
                                                 (0xffU 
                                                  & (AuI__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                     >> 0x17U)))
                                                 ? 
                                                (0x800000U 
                                                 | (0x7fffffU 
                                                    & AuI__DOT____VdfgRegularize_ha816c9b8_0_0[1U]))
                                                 : 
                                                (0x7fffffU 
                                                 & AuI__DOT____VdfgRegularize_ha816c9b8_0_0[1U]));
    AuI__DOT____VdfgRegularize_ha816c9b8_0_1 = ((AuI__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                 ^ 
                                                 AuI__DOT____VdfgRegularize_ha816c9b8_0_0[0U]) 
                                                >> 0x1fU);
    if (__PVT__AddBar_Sub) {
        __PVT__AuI__DOT__output_sign = (1U & ((1U & 
                                               AuI__DOT____VdfgRegularize_ha816c9b8_0_0[2U])
                                               ? (~ 
                                                  (AuI__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                   >> 0x1fU))
                                               : (AuI__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                  >> 0x1fU)));
        __PVT__AuI__DOT__operation_sub_addBar = (1U 
                                                 & (IData)(AuI__DOT____VdfgRegularize_ha816c9b8_0_1));
    } else {
        __PVT__AuI__DOT__output_sign = (1U & (AuI__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                              >> 0x1fU));
        __PVT__AuI__DOT__operation_sub_addBar = (1U 
                                                 & (~ (IData)(AuI__DOT____VdfgRegularize_ha816c9b8_0_1)));
    }
    __PVT__AuI__DOT__exponent_diff = (0xffU & (((AuI__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                 << 9U) 
                                                | (AuI__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                   >> 0x17U)) 
                                               - ((
                                                   AuI__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                   << 9U) 
                                                  | (AuI__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                     >> 0x17U))));
    __PVT__DuI__DOT__X0__DOT__a_operand = ((0ULL == 
                                            (0xffffffffffffULL 
                                             & (0x8b4b4bULL 
                                                * (0x800000ULL 
                                                   | (QData)((IData)(
                                                                     (0x7fffffU 
                                                                      & vlSelfRef.__PVT__Div_B)))))))
                                            ? 0x80000000U
                                            : ((1U 
                                                & ((((IData)(0x7fU) 
                                                     + 
                                                     (1U 
                                                      & (IData)(
                                                                (1ULL 
                                                                 & ((0x8b4b4bULL 
                                                                     * 
                                                                     (0x800000ULL 
                                                                      | (QData)((IData)(
                                                                                (0x7fffffU 
                                                                                & vlSelfRef.__PVT__Div_B))))) 
                                                                    >> 0x2fU))))) 
                                                    >> 8U) 
                                                   & ((~ 
                                                       (1U 
                                                        & (((IData)(0x7fU) 
                                                            + 
                                                            (1U 
                                                             & (IData)(
                                                                       (1ULL 
                                                                        & ((0x8b4b4bULL 
                                                                            * 
                                                                            (0x800000ULL 
                                                                             | (QData)((IData)(
                                                                                (0x7fffffU 
                                                                                & vlSelfRef.__PVT__Div_B))))) 
                                                                           >> 0x2fU))))) 
                                                           >> 7U))) 
                                                      & (0ULL 
                                                         != 
                                                         (0xffffffffffffULL 
                                                          & (0x8b4b4bULL 
                                                             * 
                                                             (0x800000ULL 
                                                              | (QData)((IData)(
                                                                                (0x7fffffU 
                                                                                & vlSelfRef.__PVT__Div_B))))))))))
                                                ? 0xff800000U
                                                : (
                                                   (1U 
                                                    & ((((IData)(0x7fU) 
                                                         + 
                                                         (1U 
                                                          & (IData)(
                                                                    (1ULL 
                                                                     & ((0x8b4b4bULL 
                                                                         * 
                                                                         (0x800000ULL 
                                                                          | (QData)((IData)(
                                                                                (0x7fffffU 
                                                                                & vlSelfRef.__PVT__Div_B))))) 
                                                                        >> 0x2fU))))) 
                                                        >> 8U) 
                                                       & ((0ULL 
                                                           != 
                                                           (0xffffffffffffULL 
                                                            & (0x8b4b4bULL 
                                                               * 
                                                               (0x800000ULL 
                                                                | (QData)((IData)(
                                                                                (0x7fffffU 
                                                                                & vlSelfRef.__PVT__Div_B))))))) 
                                                          & (((IData)(0x7fU) 
                                                              + 
                                                              (1U 
                                                               & (IData)(
                                                                         (1ULL 
                                                                          & ((0x8b4b4bULL 
                                                                              * 
                                                                              (0x800000ULL 
                                                                               | (QData)((IData)(
                                                                                (0x7fffffU 
                                                                                & vlSelfRef.__PVT__Div_B))))) 
                                                                             >> 0x2fU))))) 
                                                             >> 7U))))
                                                    ? 0x80000000U
                                                    : 
                                                   (0x80000000U 
                                                    | ((0x7f800000U 
                                                        & (((IData)(0x7fU) 
                                                            + 
                                                            (1U 
                                                             & (IData)(
                                                                       (1ULL 
                                                                        & ((0x8b4b4bULL 
                                                                            * 
                                                                            (0x800000ULL 
                                                                             | (QData)((IData)(
                                                                                (0x7fffffU 
                                                                                & vlSelfRef.__PVT__Div_B))))) 
                                                                           >> 0x2fU))))) 
                                                           << 0x17U)) 
                                                       | (0x7fffffU 
                                                          & ((IData)(
                                                                     (__PVT__DuI__DOT__x0__DOT__product_normalised 
                                                                      >> 0x18U)) 
                                                             + 
                                                             ((IData)(
                                                                      (__PVT__DuI__DOT__x0__DOT__product_normalised 
                                                                       >> 0x17U)) 
                                                              & (0U 
                                                                 != 
                                                                 (0x7fffffU 
                                                                  & (IData)(__PVT__DuI__DOT__x0__DOT__product_normalised)))))))))));
    vlSelfRef.__PVT__Mul_Overflow = (1U & (IData)((
                                                   (0x100U 
                                                    == 
                                                    (0x180U 
                                                     & (IData)(vlSelfRef.__PVT__MuI__DOT__exponent))) 
                                                   & (~ (IData)(vlSelfRef.__PVT__MuI__DOT__zero)))));
    vlSelfRef.__PVT__Mul_Underflow = (1U & (IData)(
                                                   ((0x180U 
                                                     == 
                                                     (0x180U 
                                                      & (IData)(vlSelfRef.__PVT__MuI__DOT__exponent))) 
                                                    & (~ (IData)(vlSelfRef.__PVT__MuI__DOT__zero)))));
    __PVT__AuI__DOT__significand_b_add_sub = (0xffffffU 
                                              & VL_SHIFTR_III(24,24,8, 
                                                              ((0U 
                                                                != 
                                                                (0xffU 
                                                                 & (AuI__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                                    >> 0x17U)))
                                                                ? 
                                                               (0x800000U 
                                                                | (0x7fffffU 
                                                                   & AuI__DOT____VdfgRegularize_ha816c9b8_0_0[0U]))
                                                                : 
                                                               (0x7fffffU 
                                                                & AuI__DOT____VdfgRegularize_ha816c9b8_0_0[0U])), (IData)(__PVT__AuI__DOT__exponent_diff)));
    __PVT__AuI__DOT__perform = ((0xffU & (AuI__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                          >> 0x17U)) 
                                == (0xffU & (((AuI__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                               << 9U) 
                                              | (AuI__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                 >> 0x17U)) 
                                             + (IData)(__PVT__AuI__DOT__exponent_diff))));
    if ((0x4034b4b5U > (0x7fffffffU & __PVT__DuI__DOT__X0__DOT__a_operand))) {
        DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
            = __PVT__DuI__DOT__X0__DOT__a_operand;
        DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[1U] = 0x4034b4b5U;
        DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[2U] = 1U;
    } else {
        DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
            = (IData)((0x4034b4b5ULL | ((QData)((IData)(__PVT__DuI__DOT__X0__DOT__a_operand)) 
                                        << 0x20U)));
        DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            = (IData)(((0x4034b4b5ULL | ((QData)((IData)(__PVT__DuI__DOT__X0__DOT__a_operand)) 
                                         << 0x20U)) 
                       >> 0x20U));
        DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[2U] = 0U;
    }
    __PVT__AuI__DOT__significand_add = (((IData)(__PVT__AuI__DOT__perform) 
                                         & (IData)(__PVT__AuI__DOT__operation_sub_addBar))
                                         ? (0x1ffffffU 
                                            & (AuI__DOT____VdfgRegularize_ha816c9b8_0_2 
                                               + __PVT__AuI__DOT__significand_b_add_sub))
                                         : 0U);
    __PVT__AuI__DOT__significand_sub = ((IData)(__PVT__AuI__DOT__perform)
                                         ? (0x1ffffffU 
                                            & (AuI__DOT____VdfgRegularize_ha816c9b8_0_2 
                                               + ((
                                                   (~ (IData)(__PVT__AuI__DOT__operation_sub_addBar)) 
                                                   & (IData)(__PVT__AuI__DOT__perform))
                                                   ? 
                                                  (0xffffffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (~ __PVT__AuI__DOT__significand_b_add_sub)))
                                                   : 0U)))
                                         : 0U);
    DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_2 
        = ((0U != (0xffU & (DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                            >> 0x17U))) ? (0x800000U 
                                           | (0x7fffffU 
                                              & DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[1U]))
            : (0x7fffffU & DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[1U]));
    DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_1 
        = ((DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            ^ DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[0U]) 
           >> 0x1fU);
    __PVT__DuI__DOT__X0__DOT__exponent_diff = (0xffU 
                                               & (((DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                    << 9U) 
                                                   | (DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                      >> 0x17U)) 
                                                  - 
                                                  ((DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                    << 9U) 
                                                   | (DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                      >> 0x17U))));
    if (((((((((0x1800000U == (0x1800000U & __PVT__AuI__DOT__significand_sub)) 
               | (0x1400000U == (0x1c00000U & __PVT__AuI__DOT__significand_sub))) 
              | (0x1200000U == (0x1e00000U & __PVT__AuI__DOT__significand_sub))) 
             | (0x1100000U == (0x1f00000U & __PVT__AuI__DOT__significand_sub))) 
            | (0x1080000U == (0x1f80000U & __PVT__AuI__DOT__significand_sub))) 
           | (0x1040000U == (0x1fc0000U & __PVT__AuI__DOT__significand_sub))) 
          | (0x1020000U == (0x1fe0000U & __PVT__AuI__DOT__significand_sub))) 
         | (0x1010000U == (0x1ff0000U & __PVT__AuI__DOT__significand_sub)))) {
        if ((0x1800000U == (0x1800000U & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & __PVT__AuI__DOT__significand_sub);
            __PVT__AuI__DOT__pe__DOT__shift = 0U;
        } else if ((0x1400000U == (0x1c00000U & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 1U));
            __PVT__AuI__DOT__pe__DOT__shift = 1U;
        } else if ((0x1200000U == (0x1e00000U & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 2U));
            __PVT__AuI__DOT__pe__DOT__shift = 2U;
        } else if ((0x1100000U == (0x1f00000U & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 3U));
            __PVT__AuI__DOT__pe__DOT__shift = 3U;
        } else if ((0x1080000U == (0x1f80000U & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 4U));
            __PVT__AuI__DOT__pe__DOT__shift = 4U;
        } else if ((0x1040000U == (0x1fc0000U & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 5U));
            __PVT__AuI__DOT__pe__DOT__shift = 5U;
        } else if ((0x1020000U == (0x1fe0000U & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 6U));
            __PVT__AuI__DOT__pe__DOT__shift = 6U;
        } else {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 7U));
            __PVT__AuI__DOT__pe__DOT__shift = 7U;
        }
    } else if (((((((((0x1008000U == (0x1ff8000U & __PVT__AuI__DOT__significand_sub)) 
                      | (0x1004000U == (0x1ffc000U 
                                        & __PVT__AuI__DOT__significand_sub))) 
                     | (0x1002000U == (0x1ffe000U & __PVT__AuI__DOT__significand_sub))) 
                    | (0x1001000U == (0x1fff000U & __PVT__AuI__DOT__significand_sub))) 
                   | (0x1000800U == (0x1fff800U & __PVT__AuI__DOT__significand_sub))) 
                  | (0x1000400U == (0x1fffc00U & __PVT__AuI__DOT__significand_sub))) 
                 | (0x1000200U == (0x1fffe00U & __PVT__AuI__DOT__significand_sub))) 
                | (0x1000100U == (0x1ffff00U & __PVT__AuI__DOT__significand_sub)))) {
        if ((0x1008000U == (0x1ff8000U & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 8U));
            __PVT__AuI__DOT__pe__DOT__shift = 8U;
        } else if ((0x1004000U == (0x1ffc000U & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 9U));
            __PVT__AuI__DOT__pe__DOT__shift = 9U;
        } else if ((0x1002000U == (0x1ffe000U & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 0xaU));
            __PVT__AuI__DOT__pe__DOT__shift = 0xaU;
        } else if ((0x1001000U == (0x1fff000U & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 0xbU));
            __PVT__AuI__DOT__pe__DOT__shift = 0xbU;
        } else if ((0x1000800U == (0x1fff800U & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 0xcU));
            __PVT__AuI__DOT__pe__DOT__shift = 0xcU;
        } else if ((0x1000400U == (0x1fffc00U & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 0xdU));
            __PVT__AuI__DOT__pe__DOT__shift = 0xdU;
        } else if ((0x1000200U == (0x1fffe00U & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 0xeU));
            __PVT__AuI__DOT__pe__DOT__shift = 0xeU;
        } else {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 0xfU));
            __PVT__AuI__DOT__pe__DOT__shift = 0xfU;
        }
    } else if (((((((((0x1000080U == (0x1ffff80U & __PVT__AuI__DOT__significand_sub)) 
                      | (0x1000040U == (0x1ffffc0U 
                                        & __PVT__AuI__DOT__significand_sub))) 
                     | (0x1000020U == (0x1ffffe0U & __PVT__AuI__DOT__significand_sub))) 
                    | (0x1000010U == (0x1fffff0U & __PVT__AuI__DOT__significand_sub))) 
                   | (0x1000008U == (0x1fffff8U & __PVT__AuI__DOT__significand_sub))) 
                  | (0x1000004U == (0x1fffffcU & __PVT__AuI__DOT__significand_sub))) 
                 | (0x1000002U == (0x1fffffeU & __PVT__AuI__DOT__significand_sub))) 
                | (0x1000001U == __PVT__AuI__DOT__significand_sub))) {
        if ((0x1000080U == (0x1ffff80U & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 0x10U));
            __PVT__AuI__DOT__pe__DOT__shift = 0x10U;
        } else if ((0x1000040U == (0x1ffffc0U & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 0x11U));
            __PVT__AuI__DOT__pe__DOT__shift = 0x11U;
        } else if ((0x1000020U == (0x1ffffe0U & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 0x12U));
            __PVT__AuI__DOT__pe__DOT__shift = 0x12U;
        } else if ((0x1000010U == (0x1fffff0U & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 0x13U));
            __PVT__AuI__DOT__pe__DOT__shift = 0x13U;
        } else if ((0x1000008U == (0x1fffff8U & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 0x14U));
            __PVT__AuI__DOT__pe__DOT__shift = 0x14U;
        } else if ((0x1000004U == (0x1fffffcU & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 0x15U));
            __PVT__AuI__DOT__pe__DOT__shift = 0x15U;
        } else if ((0x1000002U == (0x1fffffeU & __PVT__AuI__DOT__significand_sub))) {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 0x16U));
            __PVT__AuI__DOT__pe__DOT__shift = 0x16U;
        } else {
            __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                                 & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 0x17U));
            __PVT__AuI__DOT__pe__DOT__shift = 0x17U;
        }
    } else if ((0x1000000U == __PVT__AuI__DOT__significand_sub)) {
        __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                             & VL_SHIFTL_III(25,25,32, __PVT__AuI__DOT__significand_sub, 0x18U));
        __PVT__AuI__DOT__pe__DOT__shift = 0x18U;
    } else {
        __PVT__AuI__DOT__subtraction_diff = (0x1ffffffU 
                                             & ((IData)(1U) 
                                                + (~ __PVT__AuI__DOT__significand_sub)));
        __PVT__AuI__DOT__pe__DOT__shift = 0U;
    }
    __PVT__DuI__DOT__X0__DOT__significand_b_add_sub 
        = (0xffffffU & VL_SHIFTR_III(24,24,8, ((0U 
                                                != 
                                                (0xffU 
                                                 & (DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                    >> 0x17U)))
                                                ? (0x800000U 
                                                   | (0x7fffffU 
                                                      & DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[0U]))
                                                : (0x7fffffU 
                                                   & DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[0U])), (IData)(__PVT__DuI__DOT__X0__DOT__exponent_diff)));
    __PVT__DuI__DOT__X0__DOT__perform = ((0xffU & (
                                                   DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                   >> 0x17U)) 
                                         == (0xffU 
                                             & (((DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                  << 9U) 
                                                 | (DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                    >> 0x17U)) 
                                                + (IData)(__PVT__DuI__DOT__X0__DOT__exponent_diff))));
    vlSelfRef.__VdfgRegularize_hc373ca9b_0_16 = (((QData)((IData)(__PVT__Add_Sub_Exception)) 
                                                  << 0x22U) 
                                                 | (QData)((IData)(
                                                                   ((IData)(__PVT__Add_Sub_Exception)
                                                                     ? 0U
                                                                     : 
                                                                    ((IData)(__PVT__AuI__DOT__operation_sub_addBar)
                                                                      ? 
                                                                     (((IData)(__PVT__AuI__DOT__output_sign) 
                                                                       << 0x1fU) 
                                                                      | ((0x7f800000U 
                                                                          & ((((AuI__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                                                << 9U) 
                                                                               | (AuI__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                                                >> 0x17U)) 
                                                                              + 
                                                                              (1U 
                                                                               & (__PVT__AuI__DOT__significand_add 
                                                                                >> 0x18U))) 
                                                                             << 0x17U)) 
                                                                         | (0x7fffffU 
                                                                            & ((0x1000000U 
                                                                                & __PVT__AuI__DOT__significand_add)
                                                                                ? 
                                                                               (__PVT__AuI__DOT__significand_add 
                                                                                >> 1U)
                                                                                : __PVT__AuI__DOT__significand_add))))
                                                                      : 
                                                                     (((IData)(__PVT__AuI__DOT__output_sign) 
                                                                       << 0x1fU) 
                                                                      | ((0x7f800000U 
                                                                          & ((((AuI__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                                                << 9U) 
                                                                               | (AuI__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                                                >> 0x17U)) 
                                                                              - (IData)(__PVT__AuI__DOT__pe__DOT__shift)) 
                                                                             << 0x17U)) 
                                                                         | (0x7fffffU 
                                                                            & __PVT__AuI__DOT__subtraction_diff))))))));
    __PVT__DuI__DOT__X0__DOT__significand_add = (((~ (IData)(DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_1)) 
                                                  & (IData)(__PVT__DuI__DOT__X0__DOT__perform))
                                                  ? 
                                                 (0x1ffffffU 
                                                  & (DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_2 
                                                     + __PVT__DuI__DOT__X0__DOT__significand_b_add_sub))
                                                  : 0U);
    __PVT__DuI__DOT__X0__DOT__significand_sub = ((IData)(__PVT__DuI__DOT__X0__DOT__perform)
                                                  ? 
                                                 (0x1ffffffU 
                                                  & (DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_2 
                                                     + 
                                                     (((IData)(DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_1) 
                                                       & (IData)(__PVT__DuI__DOT__X0__DOT__perform))
                                                       ? 
                                                      (0xffffffU 
                                                       & ((IData)(1U) 
                                                          + 
                                                          (~ __PVT__DuI__DOT__X0__DOT__significand_b_add_sub)))
                                                       : 0U)))
                                                  : 0U);
    if (((((((((0x1800000U == (0x1800000U & __PVT__DuI__DOT__X0__DOT__significand_sub)) 
               | (0x1400000U == (0x1c00000U & __PVT__DuI__DOT__X0__DOT__significand_sub))) 
              | (0x1200000U == (0x1e00000U & __PVT__DuI__DOT__X0__DOT__significand_sub))) 
             | (0x1100000U == (0x1f00000U & __PVT__DuI__DOT__X0__DOT__significand_sub))) 
            | (0x1080000U == (0x1f80000U & __PVT__DuI__DOT__X0__DOT__significand_sub))) 
           | (0x1040000U == (0x1fc0000U & __PVT__DuI__DOT__X0__DOT__significand_sub))) 
          | (0x1020000U == (0x1fe0000U & __PVT__DuI__DOT__X0__DOT__significand_sub))) 
         | (0x1010000U == (0x1ff0000U & __PVT__DuI__DOT__X0__DOT__significand_sub)))) {
        if ((0x1800000U == (0x1800000U & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & __PVT__DuI__DOT__X0__DOT__significand_sub);
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 0U;
        } else if ((0x1400000U == (0x1c00000U & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 1U));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 1U;
        } else if ((0x1200000U == (0x1e00000U & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 2U));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 2U;
        } else if ((0x1100000U == (0x1f00000U & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 3U));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 3U;
        } else if ((0x1080000U == (0x1f80000U & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 4U));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 4U;
        } else if ((0x1040000U == (0x1fc0000U & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 5U));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 5U;
        } else if ((0x1020000U == (0x1fe0000U & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 6U));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 6U;
        } else {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 7U));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 7U;
        }
    } else if (((((((((0x1008000U == (0x1ff8000U & __PVT__DuI__DOT__X0__DOT__significand_sub)) 
                      | (0x1004000U == (0x1ffc000U 
                                        & __PVT__DuI__DOT__X0__DOT__significand_sub))) 
                     | (0x1002000U == (0x1ffe000U & __PVT__DuI__DOT__X0__DOT__significand_sub))) 
                    | (0x1001000U == (0x1fff000U & __PVT__DuI__DOT__X0__DOT__significand_sub))) 
                   | (0x1000800U == (0x1fff800U & __PVT__DuI__DOT__X0__DOT__significand_sub))) 
                  | (0x1000400U == (0x1fffc00U & __PVT__DuI__DOT__X0__DOT__significand_sub))) 
                 | (0x1000200U == (0x1fffe00U & __PVT__DuI__DOT__X0__DOT__significand_sub))) 
                | (0x1000100U == (0x1ffff00U & __PVT__DuI__DOT__X0__DOT__significand_sub)))) {
        if ((0x1008000U == (0x1ff8000U & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 8U));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 8U;
        } else if ((0x1004000U == (0x1ffc000U & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 9U));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 9U;
        } else if ((0x1002000U == (0x1ffe000U & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 0xaU));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 0xaU;
        } else if ((0x1001000U == (0x1fff000U & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 0xbU));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 0xbU;
        } else if ((0x1000800U == (0x1fff800U & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 0xcU));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 0xcU;
        } else if ((0x1000400U == (0x1fffc00U & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 0xdU));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 0xdU;
        } else if ((0x1000200U == (0x1fffe00U & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 0xeU));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 0xeU;
        } else {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 0xfU));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 0xfU;
        }
    } else if (((((((((0x1000080U == (0x1ffff80U & __PVT__DuI__DOT__X0__DOT__significand_sub)) 
                      | (0x1000040U == (0x1ffffc0U 
                                        & __PVT__DuI__DOT__X0__DOT__significand_sub))) 
                     | (0x1000020U == (0x1ffffe0U & __PVT__DuI__DOT__X0__DOT__significand_sub))) 
                    | (0x1000010U == (0x1fffff0U & __PVT__DuI__DOT__X0__DOT__significand_sub))) 
                   | (0x1000008U == (0x1fffff8U & __PVT__DuI__DOT__X0__DOT__significand_sub))) 
                  | (0x1000004U == (0x1fffffcU & __PVT__DuI__DOT__X0__DOT__significand_sub))) 
                 | (0x1000002U == (0x1fffffeU & __PVT__DuI__DOT__X0__DOT__significand_sub))) 
                | (0x1000001U == __PVT__DuI__DOT__X0__DOT__significand_sub))) {
        if ((0x1000080U == (0x1ffff80U & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 0x10U));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 0x10U;
        } else if ((0x1000040U == (0x1ffffc0U & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 0x11U));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 0x11U;
        } else if ((0x1000020U == (0x1ffffe0U & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 0x12U));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 0x12U;
        } else if ((0x1000010U == (0x1fffff0U & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 0x13U));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 0x13U;
        } else if ((0x1000008U == (0x1fffff8U & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 0x14U));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 0x14U;
        } else if ((0x1000004U == (0x1fffffcU & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 0x15U));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 0x15U;
        } else if ((0x1000002U == (0x1fffffeU & __PVT__DuI__DOT__X0__DOT__significand_sub))) {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 0x16U));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 0x16U;
        } else {
            __PVT__DuI__DOT__X0__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 0x17U));
            __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 0x17U;
        }
    } else if ((0x1000000U == __PVT__DuI__DOT__X0__DOT__significand_sub)) {
        __PVT__DuI__DOT__X0__DOT__subtraction_diff 
            = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X0__DOT__significand_sub, 0x18U));
        __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 0x18U;
    } else {
        __PVT__DuI__DOT__X0__DOT__subtraction_diff 
            = (0x1ffffffU & ((IData)(1U) + (~ __PVT__DuI__DOT__X0__DOT__significand_sub)));
        __PVT__DuI__DOT__X0__DOT__pe__DOT__shift = 0U;
    }
    __PVT__DuI__DOT__X0__DOT__result = (((0xffU == 
                                          (0xffU & 
                                           (DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                            >> 0x17U))) 
                                         | (0xffU == 
                                            (0xffU 
                                             & (DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                >> 0x17U))))
                                         ? 0U : ((IData)(DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_1)
                                                  ? 
                                                 ((0x80000000U 
                                                   & DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[1U]) 
                                                  | ((0x7f800000U 
                                                      & ((((DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                            << 9U) 
                                                           | (DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                              >> 0x17U)) 
                                                          - (IData)(__PVT__DuI__DOT__X0__DOT__pe__DOT__shift)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & __PVT__DuI__DOT__X0__DOT__subtraction_diff)))
                                                  : 
                                                 ((0x80000000U 
                                                   & DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[1U]) 
                                                  | ((0x7f800000U 
                                                      & ((((DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                            << 9U) 
                                                           | (DuI__DOT__X0__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                              >> 0x17U)) 
                                                          + 
                                                          (1U 
                                                           & (__PVT__DuI__DOT__X0__DOT__significand_add 
                                                              >> 0x18U))) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((0x1000000U 
                                                            & __PVT__DuI__DOT__X0__DOT__significand_add)
                                                            ? 
                                                           (__PVT__DuI__DOT__X0__DOT__significand_add 
                                                            >> 1U)
                                                            : __PVT__DuI__DOT__X0__DOT__significand_add))))));
    __VdfgRegularize_hc373ca9b_1_1 = (QData)((IData)(
                                                     ((0U 
                                                       != 
                                                       (0xffU 
                                                        & (__PVT__DuI__DOT__X0__DOT__result 
                                                           >> 0x17U)))
                                                       ? 
                                                      (0x800000U 
                                                       | (0x7fffffU 
                                                          & __PVT__DuI__DOT__X0__DOT__result))
                                                       : 
                                                      (0x7fffffU 
                                                       & __PVT__DuI__DOT__X0__DOT__result))));
    __PVT__DuI__DOT__X1__DOT__M1__DOT__product = (0xffffffffffffULL 
                                                  & (__VdfgRegularize_hc373ca9b_1_1 
                                                     * 
                                                     (0x800000ULL 
                                                      | (QData)((IData)(
                                                                        (0x7fffffU 
                                                                         & vlSelfRef.__PVT__Div_B))))));
    __PVT__DuI__DOT__X1__DOT__M1__DOT__product_normalised 
        = (0xffffffffffffULL & ((1U & (IData)((__PVT__DuI__DOT__X1__DOT__M1__DOT__product 
                                               >> 0x2fU)))
                                 ? __PVT__DuI__DOT__X1__DOT__M1__DOT__product
                                 : VL_SHIFTL_QQI(48,48,32, __PVT__DuI__DOT__X1__DOT__M1__DOT__product, 1U)));
    __PVT__DuI__DOT__X1__DOT__M1__DOT__zero = ((~ (0xffU 
                                                   == 
                                                   (0xffU 
                                                    & (__PVT__DuI__DOT__X0__DOT__result 
                                                       >> 0x17U)))) 
                                               & (0ULL 
                                                  == __PVT__DuI__DOT__X1__DOT__M1__DOT__product));
    __PVT__DuI__DOT__X1__DOT__M1__DOT__exponent = (0x1ffU 
                                                   & ((IData)(0x1ffU) 
                                                      + 
                                                      ((0xffU 
                                                        & (__PVT__DuI__DOT__X0__DOT__result 
                                                           >> 0x17U)) 
                                                       + 
                                                       (1U 
                                                        & (IData)(
                                                                  (__PVT__DuI__DOT__X1__DOT__M1__DOT__product 
                                                                   >> 0x2fU))))));
    __VdfgRegularize_hebeb780c_0_87 = ((0xffU == (0xffU 
                                                  & (__PVT__DuI__DOT__X0__DOT__result 
                                                     >> 0x17U)))
                                        ? 0U : (0x7fffffffU 
                                                & ((IData)(__PVT__DuI__DOT__X1__DOT__M1__DOT__zero)
                                                    ? 
                                                   (0x80000000U 
                                                    & __PVT__DuI__DOT__X0__DOT__result)
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               ((0x100U 
                                                                 == 
                                                                 (0x180U 
                                                                  & (IData)(__PVT__DuI__DOT__X1__DOT__M1__DOT__exponent))) 
                                                                & (~ (IData)(__PVT__DuI__DOT__X1__DOT__M1__DOT__zero)))))
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & __PVT__DuI__DOT__X0__DOT__result))
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                ((0x180U 
                                                                  == 
                                                                  (0x180U 
                                                                   & (IData)(__PVT__DuI__DOT__X1__DOT__M1__DOT__exponent))) 
                                                                 & (~ (IData)(__PVT__DuI__DOT__X1__DOT__M1__DOT__zero)))))
                                                      ? 
                                                     (0x80000000U 
                                                      & __PVT__DuI__DOT__X0__DOT__result)
                                                      : 
                                                     ((0x80000000U 
                                                       & __PVT__DuI__DOT__X0__DOT__result) 
                                                      | ((0x7f800000U 
                                                          & ((IData)(__PVT__DuI__DOT__X1__DOT__M1__DOT__exponent) 
                                                             << 0x17U)) 
                                                         | (0x7fffffU 
                                                            & ((IData)(
                                                                       (__PVT__DuI__DOT__X1__DOT__M1__DOT__product_normalised 
                                                                        >> 0x18U)) 
                                                               + 
                                                               ((IData)(
                                                                        (__PVT__DuI__DOT__X1__DOT__M1__DOT__product_normalised 
                                                                         >> 0x17U)) 
                                                                & (0U 
                                                                   != 
                                                                   (0x7fffffU 
                                                                    & (IData)(__PVT__DuI__DOT__X1__DOT__M1__DOT__product_normalised)))))))))))));
    if ((0x40000000U < __VdfgRegularize_hebeb780c_0_87)) {
        DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
            = (IData)((0x40000000ULL | ((QData)((IData)(
                                                        (0x80000000U 
                                                         | __VdfgRegularize_hebeb780c_0_87))) 
                                        << 0x20U)));
        DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            = (IData)(((0x40000000ULL | ((QData)((IData)(
                                                         (0x80000000U 
                                                          | __VdfgRegularize_hebeb780c_0_87))) 
                                         << 0x20U)) 
                       >> 0x20U));
        DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[2U] = 1U;
    } else {
        DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
            = (0x80000000U | __VdfgRegularize_hebeb780c_0_87);
        DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] = 0x40000000U;
        DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[2U] = 0U;
    }
    DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_2 
        = ((0U != (0xffU & (DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                            >> 0x17U))) ? (0x800000U 
                                           | (0x7fffffU 
                                              & DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U]))
            : (0x7fffffU & DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U]));
    DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_1 
        = ((DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            ^ DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U]) 
           >> 0x1fU);
    __PVT__DuI__DOT__X1__DOT__A1__DOT__exponent_diff 
        = (0xffU & (((DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                      << 9U) | (DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                >> 0x17U)) - ((DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                               << 9U) 
                                              | (DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                 >> 0x17U))));
    __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_b_add_sub 
        = (0xffffffU & VL_SHIFTR_III(24,24,8, ((0U 
                                                != 
                                                (0xffU 
                                                 & (DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                    >> 0x17U)))
                                                ? (0x800000U 
                                                   | (0x7fffffU 
                                                      & DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U]))
                                                : (0x7fffffU 
                                                   & DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U])), (IData)(__PVT__DuI__DOT__X1__DOT__A1__DOT__exponent_diff)));
    __PVT__DuI__DOT__X1__DOT__A1__DOT__perform = ((0xffU 
                                                   & (DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                      >> 0x17U)) 
                                                  == 
                                                  (0xffU 
                                                   & (((DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                        << 9U) 
                                                       | (DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                          >> 0x17U)) 
                                                      + (IData)(__PVT__DuI__DOT__X1__DOT__A1__DOT__exponent_diff))));
    __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_add 
        = (((~ (IData)(DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_1)) 
            & (IData)(__PVT__DuI__DOT__X1__DOT__A1__DOT__perform))
            ? (0x1ffffffU & (DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_2 
                             + __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_b_add_sub))
            : 0U);
    __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub 
        = ((IData)(__PVT__DuI__DOT__X1__DOT__A1__DOT__perform)
            ? (0x1ffffffU & (DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_2 
                             + (((IData)(DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_1) 
                                 & (IData)(__PVT__DuI__DOT__X1__DOT__A1__DOT__perform))
                                 ? (0xffffffU & ((IData)(1U) 
                                                 + 
                                                 (~ __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_b_add_sub)))
                                 : 0U))) : 0U);
    if (((((((((0x1800000U == (0x1800000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub)) 
               | (0x1400000U == (0x1c00000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) 
              | (0x1200000U == (0x1e00000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) 
             | (0x1100000U == (0x1f00000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) 
            | (0x1080000U == (0x1f80000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) 
           | (0x1040000U == (0x1fc0000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) 
          | (0x1020000U == (0x1fe0000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) 
         | (0x1010000U == (0x1ff0000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub)))) {
        if ((0x1800000U == (0x1800000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub);
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 0U;
        } else if ((0x1400000U == (0x1c00000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 1U));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 1U;
        } else if ((0x1200000U == (0x1e00000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 2U));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 2U;
        } else if ((0x1100000U == (0x1f00000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 3U));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 3U;
        } else if ((0x1080000U == (0x1f80000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 4U));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 4U;
        } else if ((0x1040000U == (0x1fc0000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 5U));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 5U;
        } else if ((0x1020000U == (0x1fe0000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 6U));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 6U;
        } else {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 7U));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 7U;
        }
    } else if (((((((((0x1008000U == (0x1ff8000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub)) 
                      | (0x1004000U == (0x1ffc000U 
                                        & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) 
                     | (0x1002000U == (0x1ffe000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) 
                    | (0x1001000U == (0x1fff000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) 
                   | (0x1000800U == (0x1fff800U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) 
                  | (0x1000400U == (0x1fffc00U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) 
                 | (0x1000200U == (0x1fffe00U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) 
                | (0x1000100U == (0x1ffff00U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub)))) {
        if ((0x1008000U == (0x1ff8000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 8U));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 8U;
        } else if ((0x1004000U == (0x1ffc000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 9U));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 9U;
        } else if ((0x1002000U == (0x1ffe000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 0xaU));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 0xaU;
        } else if ((0x1001000U == (0x1fff000U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 0xbU));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 0xbU;
        } else if ((0x1000800U == (0x1fff800U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 0xcU));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 0xcU;
        } else if ((0x1000400U == (0x1fffc00U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 0xdU));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 0xdU;
        } else if ((0x1000200U == (0x1fffe00U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 0xeU));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 0xeU;
        } else {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 0xfU));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 0xfU;
        }
    } else if (((((((((0x1000080U == (0x1ffff80U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub)) 
                      | (0x1000040U == (0x1ffffc0U 
                                        & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) 
                     | (0x1000020U == (0x1ffffe0U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) 
                    | (0x1000010U == (0x1fffff0U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) 
                   | (0x1000008U == (0x1fffff8U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) 
                  | (0x1000004U == (0x1fffffcU & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) 
                 | (0x1000002U == (0x1fffffeU & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) 
                | (0x1000001U == __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
        if ((0x1000080U == (0x1ffff80U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 0x10U));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 0x10U;
        } else if ((0x1000040U == (0x1ffffc0U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 0x11U));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 0x11U;
        } else if ((0x1000020U == (0x1ffffe0U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 0x12U));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 0x12U;
        } else if ((0x1000010U == (0x1fffff0U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 0x13U));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 0x13U;
        } else if ((0x1000008U == (0x1fffff8U & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 0x14U));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 0x14U;
        } else if ((0x1000004U == (0x1fffffcU & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 0x15U));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 0x15U;
        } else if ((0x1000002U == (0x1fffffeU & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 0x16U));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 0x16U;
        } else {
            __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 0x17U));
            __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 0x17U;
        }
    } else if ((0x1000000U == __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub)) {
        __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
            = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub, 0x18U));
        __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 0x18U;
    } else {
        __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff 
            = (0x1ffffffU & ((IData)(1U) + (~ __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_sub)));
        __PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift = 0U;
    }
    __PVT__DuI__DOT__X1__DOT__A1__DOT__result = (((0xffU 
                                                   == 
                                                   (0xffU 
                                                    & (DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                       >> 0x17U))) 
                                                  | (0xffU 
                                                     == 
                                                     (0xffU 
                                                      & (DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                         >> 0x17U))))
                                                  ? 0U
                                                  : 
                                                 ((IData)(DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_1)
                                                   ? 
                                                  ((0x80000000U 
                                                    & DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U]) 
                                                   | ((0x7f800000U 
                                                       & ((((DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                             << 9U) 
                                                            | (DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                               >> 0x17U)) 
                                                           - (IData)(__PVT__DuI__DOT__X1__DOT__A1__DOT__pe__DOT__shift)) 
                                                          << 0x17U)) 
                                                      | (0x7fffffU 
                                                         & __PVT__DuI__DOT__X1__DOT__A1__DOT__subtraction_diff)))
                                                   : 
                                                  ((0x80000000U 
                                                    & DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U]) 
                                                   | ((0x7f800000U 
                                                       & ((((DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                             << 9U) 
                                                            | (DuI__DOT__X1__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                               >> 0x17U)) 
                                                           + 
                                                           (1U 
                                                            & (__PVT__DuI__DOT__X1__DOT__A1__DOT__significand_add 
                                                               >> 0x18U))) 
                                                          << 0x17U)) 
                                                      | (0x7fffffU 
                                                         & ((0x1000000U 
                                                             & __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_add)
                                                             ? 
                                                            (__PVT__DuI__DOT__X1__DOT__A1__DOT__significand_add 
                                                             >> 1U)
                                                             : __PVT__DuI__DOT__X1__DOT__A1__DOT__significand_add))))));
    __PVT__DuI__DOT__X1__DOT__M2__DOT__sign = ((__PVT__DuI__DOT__X0__DOT__result 
                                                ^ __PVT__DuI__DOT__X1__DOT__A1__DOT__result) 
                                               >> 0x1fU);
    __PVT__DuI__DOT__X1__DOT__M2__DOT__Exception = 
        ((0xffU == (0xffU & (__PVT__DuI__DOT__X0__DOT__result 
                             >> 0x17U))) | (0xffU == 
                                            (0xffU 
                                             & (__PVT__DuI__DOT__X1__DOT__A1__DOT__result 
                                                >> 0x17U))));
    __PVT__DuI__DOT__X1__DOT__M2__DOT__product = (0xffffffffffffULL 
                                                  & (__VdfgRegularize_hc373ca9b_1_1 
                                                     * (QData)((IData)(
                                                                       ((0U 
                                                                         != 
                                                                         (0xffU 
                                                                          & (__PVT__DuI__DOT__X1__DOT__A1__DOT__result 
                                                                             >> 0x17U)))
                                                                         ? 
                                                                        (0x800000U 
                                                                         | (0x7fffffU 
                                                                            & __PVT__DuI__DOT__X1__DOT__A1__DOT__result))
                                                                         : 
                                                                        (0x7fffffU 
                                                                         & __PVT__DuI__DOT__X1__DOT__A1__DOT__result))))));
    __PVT__DuI__DOT__X1__DOT__M2__DOT__product_normalised 
        = (0xffffffffffffULL & ((1U & (IData)((__PVT__DuI__DOT__X1__DOT__M2__DOT__product 
                                               >> 0x2fU)))
                                 ? __PVT__DuI__DOT__X1__DOT__M2__DOT__product
                                 : VL_SHIFTL_QQI(48,48,32, __PVT__DuI__DOT__X1__DOT__M2__DOT__product, 1U)));
    __PVT__DuI__DOT__X1__DOT__M2__DOT__zero = ((~ (IData)(__PVT__DuI__DOT__X1__DOT__M2__DOT__Exception)) 
                                               & (0ULL 
                                                  == __PVT__DuI__DOT__X1__DOT__M2__DOT__product));
    __PVT__DuI__DOT__X1__DOT__M2__DOT__exponent = (0x1ffU 
                                                   & ((((0xffU 
                                                         & (__PVT__DuI__DOT__X0__DOT__result 
                                                            >> 0x17U)) 
                                                        + 
                                                        (0xffU 
                                                         & (__PVT__DuI__DOT__X1__DOT__A1__DOT__result 
                                                            >> 0x17U))) 
                                                       - (IData)(0x7fU)) 
                                                      + 
                                                      (1U 
                                                       & (IData)(
                                                                 (__PVT__DuI__DOT__X1__DOT__M2__DOT__product 
                                                                  >> 0x2fU)))));
    __PVT__DuI__DOT__X2__DOT__M1__DOT__a_operand = 
        ((IData)(__PVT__DuI__DOT__X1__DOT__M2__DOT__Exception)
          ? 0U : ((IData)(__PVT__DuI__DOT__X1__DOT__M2__DOT__zero)
                   ? ((IData)(__PVT__DuI__DOT__X1__DOT__M2__DOT__sign) 
                      << 0x1fU) : ((1U & (IData)(((0x100U 
                                                   == 
                                                   (0x180U 
                                                    & (IData)(__PVT__DuI__DOT__X1__DOT__M2__DOT__exponent))) 
                                                  & (~ (IData)(__PVT__DuI__DOT__X1__DOT__M2__DOT__zero)))))
                                    ? (0x7f800000U 
                                       | ((IData)(__PVT__DuI__DOT__X1__DOT__M2__DOT__sign) 
                                          << 0x1fU))
                                    : ((1U & (IData)(
                                                     ((0x180U 
                                                       == 
                                                       (0x180U 
                                                        & (IData)(__PVT__DuI__DOT__X1__DOT__M2__DOT__exponent))) 
                                                      & (~ (IData)(__PVT__DuI__DOT__X1__DOT__M2__DOT__zero)))))
                                        ? ((IData)(__PVT__DuI__DOT__X1__DOT__M2__DOT__sign) 
                                           << 0x1fU)
                                        : (((IData)(__PVT__DuI__DOT__X1__DOT__M2__DOT__sign) 
                                            << 0x1fU) 
                                           | ((0x7f800000U 
                                               & ((IData)(__PVT__DuI__DOT__X1__DOT__M2__DOT__exponent) 
                                                  << 0x17U)) 
                                              | (0x7fffffU 
                                                 & ((IData)(
                                                            (__PVT__DuI__DOT__X1__DOT__M2__DOT__product_normalised 
                                                             >> 0x18U)) 
                                                    + 
                                                    ((IData)(
                                                             (__PVT__DuI__DOT__X1__DOT__M2__DOT__product_normalised 
                                                              >> 0x17U)) 
                                                     & (0U 
                                                        != 
                                                        (0x7fffffU 
                                                         & (IData)(__PVT__DuI__DOT__X1__DOT__M2__DOT__product_normalised))))))))))));
    __VdfgRegularize_hc373ca9b_1_2 = (QData)((IData)(
                                                     ((0U 
                                                       != 
                                                       (0xffU 
                                                        & (__PVT__DuI__DOT__X2__DOT__M1__DOT__a_operand 
                                                           >> 0x17U)))
                                                       ? 
                                                      (0x800000U 
                                                       | (0x7fffffU 
                                                          & __PVT__DuI__DOT__X2__DOT__M1__DOT__a_operand))
                                                       : 
                                                      (0x7fffffU 
                                                       & __PVT__DuI__DOT__X2__DOT__M1__DOT__a_operand))));
    __PVT__DuI__DOT__X2__DOT__M1__DOT__product = (0xffffffffffffULL 
                                                  & (__VdfgRegularize_hc373ca9b_1_2 
                                                     * 
                                                     (0x800000ULL 
                                                      | (QData)((IData)(
                                                                        (0x7fffffU 
                                                                         & vlSelfRef.__PVT__Div_B))))));
    __PVT__DuI__DOT__X2__DOT__M1__DOT__product_normalised 
        = (0xffffffffffffULL & ((1U & (IData)((__PVT__DuI__DOT__X2__DOT__M1__DOT__product 
                                               >> 0x2fU)))
                                 ? __PVT__DuI__DOT__X2__DOT__M1__DOT__product
                                 : VL_SHIFTL_QQI(48,48,32, __PVT__DuI__DOT__X2__DOT__M1__DOT__product, 1U)));
    __PVT__DuI__DOT__X2__DOT__M1__DOT__zero = ((~ (0xffU 
                                                   == 
                                                   (0xffU 
                                                    & (__PVT__DuI__DOT__X2__DOT__M1__DOT__a_operand 
                                                       >> 0x17U)))) 
                                               & (0ULL 
                                                  == __PVT__DuI__DOT__X2__DOT__M1__DOT__product));
    __PVT__DuI__DOT__X2__DOT__M1__DOT__exponent = (0x1ffU 
                                                   & ((IData)(0x1ffU) 
                                                      + 
                                                      ((0xffU 
                                                        & (__PVT__DuI__DOT__X2__DOT__M1__DOT__a_operand 
                                                           >> 0x17U)) 
                                                       + 
                                                       (1U 
                                                        & (IData)(
                                                                  (__PVT__DuI__DOT__X2__DOT__M1__DOT__product 
                                                                   >> 0x2fU))))));
    __VdfgRegularize_hebeb780c_0_88 = ((0xffU == (0xffU 
                                                  & (__PVT__DuI__DOT__X2__DOT__M1__DOT__a_operand 
                                                     >> 0x17U)))
                                        ? 0U : (0x7fffffffU 
                                                & ((IData)(__PVT__DuI__DOT__X2__DOT__M1__DOT__zero)
                                                    ? 
                                                   (0x80000000U 
                                                    & __PVT__DuI__DOT__X2__DOT__M1__DOT__a_operand)
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               ((0x100U 
                                                                 == 
                                                                 (0x180U 
                                                                  & (IData)(__PVT__DuI__DOT__X2__DOT__M1__DOT__exponent))) 
                                                                & (~ (IData)(__PVT__DuI__DOT__X2__DOT__M1__DOT__zero)))))
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & __PVT__DuI__DOT__X2__DOT__M1__DOT__a_operand))
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                ((0x180U 
                                                                  == 
                                                                  (0x180U 
                                                                   & (IData)(__PVT__DuI__DOT__X2__DOT__M1__DOT__exponent))) 
                                                                 & (~ (IData)(__PVT__DuI__DOT__X2__DOT__M1__DOT__zero)))))
                                                      ? 
                                                     (0x80000000U 
                                                      & __PVT__DuI__DOT__X2__DOT__M1__DOT__a_operand)
                                                      : 
                                                     ((0x80000000U 
                                                       & __PVT__DuI__DOT__X2__DOT__M1__DOT__a_operand) 
                                                      | ((0x7f800000U 
                                                          & ((IData)(__PVT__DuI__DOT__X2__DOT__M1__DOT__exponent) 
                                                             << 0x17U)) 
                                                         | (0x7fffffU 
                                                            & ((IData)(
                                                                       (__PVT__DuI__DOT__X2__DOT__M1__DOT__product_normalised 
                                                                        >> 0x18U)) 
                                                               + 
                                                               ((IData)(
                                                                        (__PVT__DuI__DOT__X2__DOT__M1__DOT__product_normalised 
                                                                         >> 0x17U)) 
                                                                & (0U 
                                                                   != 
                                                                   (0x7fffffU 
                                                                    & (IData)(__PVT__DuI__DOT__X2__DOT__M1__DOT__product_normalised)))))))))))));
    if ((0x40000000U < __VdfgRegularize_hebeb780c_0_88)) {
        DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
            = (IData)((0x40000000ULL | ((QData)((IData)(
                                                        (0x80000000U 
                                                         | __VdfgRegularize_hebeb780c_0_88))) 
                                        << 0x20U)));
        DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            = (IData)(((0x40000000ULL | ((QData)((IData)(
                                                         (0x80000000U 
                                                          | __VdfgRegularize_hebeb780c_0_88))) 
                                         << 0x20U)) 
                       >> 0x20U));
        DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[2U] = 1U;
    } else {
        DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
            = (0x80000000U | __VdfgRegularize_hebeb780c_0_88);
        DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] = 0x40000000U;
        DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[2U] = 0U;
    }
    DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_2 
        = ((0U != (0xffU & (DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                            >> 0x17U))) ? (0x800000U 
                                           | (0x7fffffU 
                                              & DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U]))
            : (0x7fffffU & DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U]));
    DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_1 
        = ((DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            ^ DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U]) 
           >> 0x1fU);
    __PVT__DuI__DOT__X2__DOT__A1__DOT__exponent_diff 
        = (0xffU & (((DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                      << 9U) | (DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                >> 0x17U)) - ((DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                               << 9U) 
                                              | (DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                 >> 0x17U))));
    __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_b_add_sub 
        = (0xffffffU & VL_SHIFTR_III(24,24,8, ((0U 
                                                != 
                                                (0xffU 
                                                 & (DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                    >> 0x17U)))
                                                ? (0x800000U 
                                                   | (0x7fffffU 
                                                      & DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U]))
                                                : (0x7fffffU 
                                                   & DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U])), (IData)(__PVT__DuI__DOT__X2__DOT__A1__DOT__exponent_diff)));
    __PVT__DuI__DOT__X2__DOT__A1__DOT__perform = ((0xffU 
                                                   & (DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                      >> 0x17U)) 
                                                  == 
                                                  (0xffU 
                                                   & (((DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                        << 9U) 
                                                       | (DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                          >> 0x17U)) 
                                                      + (IData)(__PVT__DuI__DOT__X2__DOT__A1__DOT__exponent_diff))));
    __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_add 
        = (((~ (IData)(DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_1)) 
            & (IData)(__PVT__DuI__DOT__X2__DOT__A1__DOT__perform))
            ? (0x1ffffffU & (DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_2 
                             + __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_b_add_sub))
            : 0U);
    __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub 
        = ((IData)(__PVT__DuI__DOT__X2__DOT__A1__DOT__perform)
            ? (0x1ffffffU & (DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_2 
                             + (((IData)(DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_1) 
                                 & (IData)(__PVT__DuI__DOT__X2__DOT__A1__DOT__perform))
                                 ? (0xffffffU & ((IData)(1U) 
                                                 + 
                                                 (~ __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_b_add_sub)))
                                 : 0U))) : 0U);
    if (((((((((0x1800000U == (0x1800000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub)) 
               | (0x1400000U == (0x1c00000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) 
              | (0x1200000U == (0x1e00000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) 
             | (0x1100000U == (0x1f00000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) 
            | (0x1080000U == (0x1f80000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) 
           | (0x1040000U == (0x1fc0000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) 
          | (0x1020000U == (0x1fe0000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) 
         | (0x1010000U == (0x1ff0000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub)))) {
        if ((0x1800000U == (0x1800000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub);
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 0U;
        } else if ((0x1400000U == (0x1c00000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 1U));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 1U;
        } else if ((0x1200000U == (0x1e00000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 2U));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 2U;
        } else if ((0x1100000U == (0x1f00000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 3U));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 3U;
        } else if ((0x1080000U == (0x1f80000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 4U));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 4U;
        } else if ((0x1040000U == (0x1fc0000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 5U));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 5U;
        } else if ((0x1020000U == (0x1fe0000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 6U));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 6U;
        } else {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 7U));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 7U;
        }
    } else if (((((((((0x1008000U == (0x1ff8000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub)) 
                      | (0x1004000U == (0x1ffc000U 
                                        & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) 
                     | (0x1002000U == (0x1ffe000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) 
                    | (0x1001000U == (0x1fff000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) 
                   | (0x1000800U == (0x1fff800U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) 
                  | (0x1000400U == (0x1fffc00U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) 
                 | (0x1000200U == (0x1fffe00U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) 
                | (0x1000100U == (0x1ffff00U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub)))) {
        if ((0x1008000U == (0x1ff8000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 8U));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 8U;
        } else if ((0x1004000U == (0x1ffc000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 9U));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 9U;
        } else if ((0x1002000U == (0x1ffe000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 0xaU));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 0xaU;
        } else if ((0x1001000U == (0x1fff000U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 0xbU));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 0xbU;
        } else if ((0x1000800U == (0x1fff800U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 0xcU));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 0xcU;
        } else if ((0x1000400U == (0x1fffc00U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 0xdU));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 0xdU;
        } else if ((0x1000200U == (0x1fffe00U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 0xeU));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 0xeU;
        } else {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 0xfU));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 0xfU;
        }
    } else if (((((((((0x1000080U == (0x1ffff80U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub)) 
                      | (0x1000040U == (0x1ffffc0U 
                                        & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) 
                     | (0x1000020U == (0x1ffffe0U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) 
                    | (0x1000010U == (0x1fffff0U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) 
                   | (0x1000008U == (0x1fffff8U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) 
                  | (0x1000004U == (0x1fffffcU & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) 
                 | (0x1000002U == (0x1fffffeU & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) 
                | (0x1000001U == __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
        if ((0x1000080U == (0x1ffff80U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 0x10U));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 0x10U;
        } else if ((0x1000040U == (0x1ffffc0U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 0x11U));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 0x11U;
        } else if ((0x1000020U == (0x1ffffe0U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 0x12U));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 0x12U;
        } else if ((0x1000010U == (0x1fffff0U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 0x13U));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 0x13U;
        } else if ((0x1000008U == (0x1fffff8U & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 0x14U));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 0x14U;
        } else if ((0x1000004U == (0x1fffffcU & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 0x15U));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 0x15U;
        } else if ((0x1000002U == (0x1fffffeU & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 0x16U));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 0x16U;
        } else {
            __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 0x17U));
            __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 0x17U;
        }
    } else if ((0x1000000U == __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub)) {
        __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
            = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub, 0x18U));
        __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 0x18U;
    } else {
        __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff 
            = (0x1ffffffU & ((IData)(1U) + (~ __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_sub)));
        __PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift = 0U;
    }
    __PVT__DuI__DOT__X2__DOT__A1__DOT__result = (((0xffU 
                                                   == 
                                                   (0xffU 
                                                    & (DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                       >> 0x17U))) 
                                                  | (0xffU 
                                                     == 
                                                     (0xffU 
                                                      & (DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                         >> 0x17U))))
                                                  ? 0U
                                                  : 
                                                 ((IData)(DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_1)
                                                   ? 
                                                  ((0x80000000U 
                                                    & DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U]) 
                                                   | ((0x7f800000U 
                                                       & ((((DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                             << 9U) 
                                                            | (DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                               >> 0x17U)) 
                                                           - (IData)(__PVT__DuI__DOT__X2__DOT__A1__DOT__pe__DOT__shift)) 
                                                          << 0x17U)) 
                                                      | (0x7fffffU 
                                                         & __PVT__DuI__DOT__X2__DOT__A1__DOT__subtraction_diff)))
                                                   : 
                                                  ((0x80000000U 
                                                    & DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U]) 
                                                   | ((0x7f800000U 
                                                       & ((((DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                             << 9U) 
                                                            | (DuI__DOT__X2__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                               >> 0x17U)) 
                                                           + 
                                                           (1U 
                                                            & (__PVT__DuI__DOT__X2__DOT__A1__DOT__significand_add 
                                                               >> 0x18U))) 
                                                          << 0x17U)) 
                                                      | (0x7fffffU 
                                                         & ((0x1000000U 
                                                             & __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_add)
                                                             ? 
                                                            (__PVT__DuI__DOT__X2__DOT__A1__DOT__significand_add 
                                                             >> 1U)
                                                             : __PVT__DuI__DOT__X2__DOT__A1__DOT__significand_add))))));
    __PVT__DuI__DOT__X2__DOT__M2__DOT__sign = ((__PVT__DuI__DOT__X2__DOT__M1__DOT__a_operand 
                                                ^ __PVT__DuI__DOT__X2__DOT__A1__DOT__result) 
                                               >> 0x1fU);
    __PVT__DuI__DOT__X2__DOT__M2__DOT__Exception = 
        ((0xffU == (0xffU & (__PVT__DuI__DOT__X2__DOT__M1__DOT__a_operand 
                             >> 0x17U))) | (0xffU == 
                                            (0xffU 
                                             & (__PVT__DuI__DOT__X2__DOT__A1__DOT__result 
                                                >> 0x17U))));
    __PVT__DuI__DOT__X2__DOT__M2__DOT__product = (0xffffffffffffULL 
                                                  & (__VdfgRegularize_hc373ca9b_1_2 
                                                     * (QData)((IData)(
                                                                       ((0U 
                                                                         != 
                                                                         (0xffU 
                                                                          & (__PVT__DuI__DOT__X2__DOT__A1__DOT__result 
                                                                             >> 0x17U)))
                                                                         ? 
                                                                        (0x800000U 
                                                                         | (0x7fffffU 
                                                                            & __PVT__DuI__DOT__X2__DOT__A1__DOT__result))
                                                                         : 
                                                                        (0x7fffffU 
                                                                         & __PVT__DuI__DOT__X2__DOT__A1__DOT__result))))));
    __PVT__DuI__DOT__X2__DOT__M2__DOT__product_normalised 
        = (0xffffffffffffULL & ((1U & (IData)((__PVT__DuI__DOT__X2__DOT__M2__DOT__product 
                                               >> 0x2fU)))
                                 ? __PVT__DuI__DOT__X2__DOT__M2__DOT__product
                                 : VL_SHIFTL_QQI(48,48,32, __PVT__DuI__DOT__X2__DOT__M2__DOT__product, 1U)));
    __PVT__DuI__DOT__X2__DOT__M2__DOT__zero = ((~ (IData)(__PVT__DuI__DOT__X2__DOT__M2__DOT__Exception)) 
                                               & (0ULL 
                                                  == __PVT__DuI__DOT__X2__DOT__M2__DOT__product));
    __PVT__DuI__DOT__X2__DOT__M2__DOT__exponent = (0x1ffU 
                                                   & ((((0xffU 
                                                         & (__PVT__DuI__DOT__X2__DOT__M1__DOT__a_operand 
                                                            >> 0x17U)) 
                                                        + 
                                                        (0xffU 
                                                         & (__PVT__DuI__DOT__X2__DOT__A1__DOT__result 
                                                            >> 0x17U))) 
                                                       - (IData)(0x7fU)) 
                                                      + 
                                                      (1U 
                                                       & (IData)(
                                                                 (__PVT__DuI__DOT__X2__DOT__M2__DOT__product 
                                                                  >> 0x2fU)))));
    __PVT__DuI__DOT__X3__DOT__M1__DOT__a_operand = 
        ((IData)(__PVT__DuI__DOT__X2__DOT__M2__DOT__Exception)
          ? 0U : ((IData)(__PVT__DuI__DOT__X2__DOT__M2__DOT__zero)
                   ? ((IData)(__PVT__DuI__DOT__X2__DOT__M2__DOT__sign) 
                      << 0x1fU) : ((1U & (IData)(((0x100U 
                                                   == 
                                                   (0x180U 
                                                    & (IData)(__PVT__DuI__DOT__X2__DOT__M2__DOT__exponent))) 
                                                  & (~ (IData)(__PVT__DuI__DOT__X2__DOT__M2__DOT__zero)))))
                                    ? (0x7f800000U 
                                       | ((IData)(__PVT__DuI__DOT__X2__DOT__M2__DOT__sign) 
                                          << 0x1fU))
                                    : ((1U & (IData)(
                                                     ((0x180U 
                                                       == 
                                                       (0x180U 
                                                        & (IData)(__PVT__DuI__DOT__X2__DOT__M2__DOT__exponent))) 
                                                      & (~ (IData)(__PVT__DuI__DOT__X2__DOT__M2__DOT__zero)))))
                                        ? ((IData)(__PVT__DuI__DOT__X2__DOT__M2__DOT__sign) 
                                           << 0x1fU)
                                        : (((IData)(__PVT__DuI__DOT__X2__DOT__M2__DOT__sign) 
                                            << 0x1fU) 
                                           | ((0x7f800000U 
                                               & ((IData)(__PVT__DuI__DOT__X2__DOT__M2__DOT__exponent) 
                                                  << 0x17U)) 
                                              | (0x7fffffU 
                                                 & ((IData)(
                                                            (__PVT__DuI__DOT__X2__DOT__M2__DOT__product_normalised 
                                                             >> 0x18U)) 
                                                    + 
                                                    ((IData)(
                                                             (__PVT__DuI__DOT__X2__DOT__M2__DOT__product_normalised 
                                                              >> 0x17U)) 
                                                     & (0U 
                                                        != 
                                                        (0x7fffffU 
                                                         & (IData)(__PVT__DuI__DOT__X2__DOT__M2__DOT__product_normalised))))))))))));
    __VdfgRegularize_hc373ca9b_1_3 = (QData)((IData)(
                                                     ((0U 
                                                       != 
                                                       (0xffU 
                                                        & (__PVT__DuI__DOT__X3__DOT__M1__DOT__a_operand 
                                                           >> 0x17U)))
                                                       ? 
                                                      (0x800000U 
                                                       | (0x7fffffU 
                                                          & __PVT__DuI__DOT__X3__DOT__M1__DOT__a_operand))
                                                       : 
                                                      (0x7fffffU 
                                                       & __PVT__DuI__DOT__X3__DOT__M1__DOT__a_operand))));
    __PVT__DuI__DOT__X3__DOT__M1__DOT__product = (0xffffffffffffULL 
                                                  & (__VdfgRegularize_hc373ca9b_1_3 
                                                     * 
                                                     (0x800000ULL 
                                                      | (QData)((IData)(
                                                                        (0x7fffffU 
                                                                         & vlSelfRef.__PVT__Div_B))))));
    __PVT__DuI__DOT__X3__DOT__M1__DOT__product_normalised 
        = (0xffffffffffffULL & ((1U & (IData)((__PVT__DuI__DOT__X3__DOT__M1__DOT__product 
                                               >> 0x2fU)))
                                 ? __PVT__DuI__DOT__X3__DOT__M1__DOT__product
                                 : VL_SHIFTL_QQI(48,48,32, __PVT__DuI__DOT__X3__DOT__M1__DOT__product, 1U)));
    __PVT__DuI__DOT__X3__DOT__M1__DOT__zero = ((~ (0xffU 
                                                   == 
                                                   (0xffU 
                                                    & (__PVT__DuI__DOT__X3__DOT__M1__DOT__a_operand 
                                                       >> 0x17U)))) 
                                               & (0ULL 
                                                  == __PVT__DuI__DOT__X3__DOT__M1__DOT__product));
    __PVT__DuI__DOT__X3__DOT__M1__DOT__exponent = (0x1ffU 
                                                   & ((IData)(0x1ffU) 
                                                      + 
                                                      ((0xffU 
                                                        & (__PVT__DuI__DOT__X3__DOT__M1__DOT__a_operand 
                                                           >> 0x17U)) 
                                                       + 
                                                       (1U 
                                                        & (IData)(
                                                                  (__PVT__DuI__DOT__X3__DOT__M1__DOT__product 
                                                                   >> 0x2fU))))));
    __VdfgRegularize_hebeb780c_0_89 = ((0xffU == (0xffU 
                                                  & (__PVT__DuI__DOT__X3__DOT__M1__DOT__a_operand 
                                                     >> 0x17U)))
                                        ? 0U : (0x7fffffffU 
                                                & ((IData)(__PVT__DuI__DOT__X3__DOT__M1__DOT__zero)
                                                    ? 
                                                   (0x80000000U 
                                                    & __PVT__DuI__DOT__X3__DOT__M1__DOT__a_operand)
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               ((0x100U 
                                                                 == 
                                                                 (0x180U 
                                                                  & (IData)(__PVT__DuI__DOT__X3__DOT__M1__DOT__exponent))) 
                                                                & (~ (IData)(__PVT__DuI__DOT__X3__DOT__M1__DOT__zero)))))
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & __PVT__DuI__DOT__X3__DOT__M1__DOT__a_operand))
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                ((0x180U 
                                                                  == 
                                                                  (0x180U 
                                                                   & (IData)(__PVT__DuI__DOT__X3__DOT__M1__DOT__exponent))) 
                                                                 & (~ (IData)(__PVT__DuI__DOT__X3__DOT__M1__DOT__zero)))))
                                                      ? 
                                                     (0x80000000U 
                                                      & __PVT__DuI__DOT__X3__DOT__M1__DOT__a_operand)
                                                      : 
                                                     ((0x80000000U 
                                                       & __PVT__DuI__DOT__X3__DOT__M1__DOT__a_operand) 
                                                      | ((0x7f800000U 
                                                          & ((IData)(__PVT__DuI__DOT__X3__DOT__M1__DOT__exponent) 
                                                             << 0x17U)) 
                                                         | (0x7fffffU 
                                                            & ((IData)(
                                                                       (__PVT__DuI__DOT__X3__DOT__M1__DOT__product_normalised 
                                                                        >> 0x18U)) 
                                                               + 
                                                               ((IData)(
                                                                        (__PVT__DuI__DOT__X3__DOT__M1__DOT__product_normalised 
                                                                         >> 0x17U)) 
                                                                & (0U 
                                                                   != 
                                                                   (0x7fffffU 
                                                                    & (IData)(__PVT__DuI__DOT__X3__DOT__M1__DOT__product_normalised)))))))))))));
    if ((0x40000000U < __VdfgRegularize_hebeb780c_0_89)) {
        DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
            = (IData)((0x40000000ULL | ((QData)((IData)(
                                                        (0x80000000U 
                                                         | __VdfgRegularize_hebeb780c_0_89))) 
                                        << 0x20U)));
        DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            = (IData)(((0x40000000ULL | ((QData)((IData)(
                                                         (0x80000000U 
                                                          | __VdfgRegularize_hebeb780c_0_89))) 
                                         << 0x20U)) 
                       >> 0x20U));
        DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[2U] = 1U;
    } else {
        DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
            = (0x80000000U | __VdfgRegularize_hebeb780c_0_89);
        DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] = 0x40000000U;
        DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[2U] = 0U;
    }
    DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_2 
        = ((0U != (0xffU & (DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                            >> 0x17U))) ? (0x800000U 
                                           | (0x7fffffU 
                                              & DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U]))
            : (0x7fffffU & DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U]));
    DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_1 
        = ((DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            ^ DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U]) 
           >> 0x1fU);
    __PVT__DuI__DOT__X3__DOT__A1__DOT__exponent_diff 
        = (0xffU & (((DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                      << 9U) | (DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                >> 0x17U)) - ((DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                               << 9U) 
                                              | (DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                 >> 0x17U))));
    __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_b_add_sub 
        = (0xffffffU & VL_SHIFTR_III(24,24,8, ((0U 
                                                != 
                                                (0xffU 
                                                 & (DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                    >> 0x17U)))
                                                ? (0x800000U 
                                                   | (0x7fffffU 
                                                      & DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U]))
                                                : (0x7fffffU 
                                                   & DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U])), (IData)(__PVT__DuI__DOT__X3__DOT__A1__DOT__exponent_diff)));
    __PVT__DuI__DOT__X3__DOT__A1__DOT__perform = ((0xffU 
                                                   & (DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                      >> 0x17U)) 
                                                  == 
                                                  (0xffU 
                                                   & (((DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                        << 9U) 
                                                       | (DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                          >> 0x17U)) 
                                                      + (IData)(__PVT__DuI__DOT__X3__DOT__A1__DOT__exponent_diff))));
    __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_add 
        = (((~ (IData)(DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_1)) 
            & (IData)(__PVT__DuI__DOT__X3__DOT__A1__DOT__perform))
            ? (0x1ffffffU & (DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_2 
                             + __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_b_add_sub))
            : 0U);
    __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub 
        = ((IData)(__PVT__DuI__DOT__X3__DOT__A1__DOT__perform)
            ? (0x1ffffffU & (DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_2 
                             + (((IData)(DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_1) 
                                 & (IData)(__PVT__DuI__DOT__X3__DOT__A1__DOT__perform))
                                 ? (0xffffffU & ((IData)(1U) 
                                                 + 
                                                 (~ __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_b_add_sub)))
                                 : 0U))) : 0U);
    if (((((((((0x1800000U == (0x1800000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub)) 
               | (0x1400000U == (0x1c00000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) 
              | (0x1200000U == (0x1e00000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) 
             | (0x1100000U == (0x1f00000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) 
            | (0x1080000U == (0x1f80000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) 
           | (0x1040000U == (0x1fc0000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) 
          | (0x1020000U == (0x1fe0000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) 
         | (0x1010000U == (0x1ff0000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub)))) {
        if ((0x1800000U == (0x1800000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub);
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 0U;
        } else if ((0x1400000U == (0x1c00000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 1U));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 1U;
        } else if ((0x1200000U == (0x1e00000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 2U));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 2U;
        } else if ((0x1100000U == (0x1f00000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 3U));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 3U;
        } else if ((0x1080000U == (0x1f80000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 4U));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 4U;
        } else if ((0x1040000U == (0x1fc0000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 5U));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 5U;
        } else if ((0x1020000U == (0x1fe0000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 6U));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 6U;
        } else {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 7U));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 7U;
        }
    } else if (((((((((0x1008000U == (0x1ff8000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub)) 
                      | (0x1004000U == (0x1ffc000U 
                                        & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) 
                     | (0x1002000U == (0x1ffe000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) 
                    | (0x1001000U == (0x1fff000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) 
                   | (0x1000800U == (0x1fff800U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) 
                  | (0x1000400U == (0x1fffc00U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) 
                 | (0x1000200U == (0x1fffe00U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) 
                | (0x1000100U == (0x1ffff00U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub)))) {
        if ((0x1008000U == (0x1ff8000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 8U));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 8U;
        } else if ((0x1004000U == (0x1ffc000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 9U));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 9U;
        } else if ((0x1002000U == (0x1ffe000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 0xaU));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 0xaU;
        } else if ((0x1001000U == (0x1fff000U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 0xbU));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 0xbU;
        } else if ((0x1000800U == (0x1fff800U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 0xcU));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 0xcU;
        } else if ((0x1000400U == (0x1fffc00U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 0xdU));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 0xdU;
        } else if ((0x1000200U == (0x1fffe00U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 0xeU));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 0xeU;
        } else {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 0xfU));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 0xfU;
        }
    } else if (((((((((0x1000080U == (0x1ffff80U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub)) 
                      | (0x1000040U == (0x1ffffc0U 
                                        & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) 
                     | (0x1000020U == (0x1ffffe0U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) 
                    | (0x1000010U == (0x1fffff0U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) 
                   | (0x1000008U == (0x1fffff8U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) 
                  | (0x1000004U == (0x1fffffcU & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) 
                 | (0x1000002U == (0x1fffffeU & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) 
                | (0x1000001U == __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
        if ((0x1000080U == (0x1ffff80U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 0x10U));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 0x10U;
        } else if ((0x1000040U == (0x1ffffc0U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 0x11U));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 0x11U;
        } else if ((0x1000020U == (0x1ffffe0U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 0x12U));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 0x12U;
        } else if ((0x1000010U == (0x1fffff0U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 0x13U));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 0x13U;
        } else if ((0x1000008U == (0x1fffff8U & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 0x14U));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 0x14U;
        } else if ((0x1000004U == (0x1fffffcU & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 0x15U));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 0x15U;
        } else if ((0x1000002U == (0x1fffffeU & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub))) {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 0x16U));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 0x16U;
        } else {
            __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 0x17U));
            __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 0x17U;
        }
    } else if ((0x1000000U == __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub)) {
        __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
            = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub, 0x18U));
        __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 0x18U;
    } else {
        __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff 
            = (0x1ffffffU & ((IData)(1U) + (~ __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_sub)));
        __PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift = 0U;
    }
    __PVT__DuI__DOT__X3__DOT__A1__DOT__result = (((0xffU 
                                                   == 
                                                   (0xffU 
                                                    & (DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                       >> 0x17U))) 
                                                  | (0xffU 
                                                     == 
                                                     (0xffU 
                                                      & (DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                         >> 0x17U))))
                                                  ? 0U
                                                  : 
                                                 ((IData)(DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_1)
                                                   ? 
                                                  ((0x80000000U 
                                                    & DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U]) 
                                                   | ((0x7f800000U 
                                                       & ((((DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                             << 9U) 
                                                            | (DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                               >> 0x17U)) 
                                                           - (IData)(__PVT__DuI__DOT__X3__DOT__A1__DOT__pe__DOT__shift)) 
                                                          << 0x17U)) 
                                                      | (0x7fffffU 
                                                         & __PVT__DuI__DOT__X3__DOT__A1__DOT__subtraction_diff)))
                                                   : 
                                                  ((0x80000000U 
                                                    & DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U]) 
                                                   | ((0x7f800000U 
                                                       & ((((DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                             << 9U) 
                                                            | (DuI__DOT__X3__DOT__A1__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                               >> 0x17U)) 
                                                           + 
                                                           (1U 
                                                            & (__PVT__DuI__DOT__X3__DOT__A1__DOT__significand_add 
                                                               >> 0x18U))) 
                                                          << 0x17U)) 
                                                      | (0x7fffffU 
                                                         & ((0x1000000U 
                                                             & __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_add)
                                                             ? 
                                                            (__PVT__DuI__DOT__X3__DOT__A1__DOT__significand_add 
                                                             >> 1U)
                                                             : __PVT__DuI__DOT__X3__DOT__A1__DOT__significand_add))))));
    __PVT__DuI__DOT__X3__DOT__M2__DOT__sign = ((__PVT__DuI__DOT__X3__DOT__M1__DOT__a_operand 
                                                ^ __PVT__DuI__DOT__X3__DOT__A1__DOT__result) 
                                               >> 0x1fU);
    __PVT__DuI__DOT__X3__DOT__M2__DOT__Exception = 
        ((0xffU == (0xffU & (__PVT__DuI__DOT__X3__DOT__M1__DOT__a_operand 
                             >> 0x17U))) | (0xffU == 
                                            (0xffU 
                                             & (__PVT__DuI__DOT__X3__DOT__A1__DOT__result 
                                                >> 0x17U))));
    __PVT__DuI__DOT__X3__DOT__M2__DOT__product = (0xffffffffffffULL 
                                                  & (__VdfgRegularize_hc373ca9b_1_3 
                                                     * (QData)((IData)(
                                                                       ((0U 
                                                                         != 
                                                                         (0xffU 
                                                                          & (__PVT__DuI__DOT__X3__DOT__A1__DOT__result 
                                                                             >> 0x17U)))
                                                                         ? 
                                                                        (0x800000U 
                                                                         | (0x7fffffU 
                                                                            & __PVT__DuI__DOT__X3__DOT__A1__DOT__result))
                                                                         : 
                                                                        (0x7fffffU 
                                                                         & __PVT__DuI__DOT__X3__DOT__A1__DOT__result))))));
    __PVT__DuI__DOT__X3__DOT__M2__DOT__product_normalised 
        = (0xffffffffffffULL & ((1U & (IData)((__PVT__DuI__DOT__X3__DOT__M2__DOT__product 
                                               >> 0x2fU)))
                                 ? __PVT__DuI__DOT__X3__DOT__M2__DOT__product
                                 : VL_SHIFTL_QQI(48,48,32, __PVT__DuI__DOT__X3__DOT__M2__DOT__product, 1U)));
    __PVT__DuI__DOT__X3__DOT__M2__DOT__zero = ((~ (IData)(__PVT__DuI__DOT__X3__DOT__M2__DOT__Exception)) 
                                               & (0ULL 
                                                  == __PVT__DuI__DOT__X3__DOT__M2__DOT__product));
    __PVT__DuI__DOT__X3__DOT__M2__DOT__exponent = (0x1ffU 
                                                   & ((((0xffU 
                                                         & (__PVT__DuI__DOT__X3__DOT__M1__DOT__a_operand 
                                                            >> 0x17U)) 
                                                        + 
                                                        (0xffU 
                                                         & (__PVT__DuI__DOT__X3__DOT__A1__DOT__result 
                                                            >> 0x17U))) 
                                                       - (IData)(0x7fU)) 
                                                      + 
                                                      (1U 
                                                       & (IData)(
                                                                 (__PVT__DuI__DOT__X3__DOT__M2__DOT__product 
                                                                  >> 0x2fU)))));
    __PVT__DuI__DOT__END__DOT__a_operand = ((IData)(__PVT__DuI__DOT__X3__DOT__M2__DOT__Exception)
                                             ? 0U : 
                                            ((IData)(__PVT__DuI__DOT__X3__DOT__M2__DOT__zero)
                                              ? ((IData)(__PVT__DuI__DOT__X3__DOT__M2__DOT__sign) 
                                                 << 0x1fU)
                                              : ((1U 
                                                  & (IData)(
                                                            ((0x100U 
                                                              == 
                                                              (0x180U 
                                                               & (IData)(__PVT__DuI__DOT__X3__DOT__M2__DOT__exponent))) 
                                                             & (~ (IData)(__PVT__DuI__DOT__X3__DOT__M2__DOT__zero)))))
                                                  ? 
                                                 (0x7f800000U 
                                                  | ((IData)(__PVT__DuI__DOT__X3__DOT__M2__DOT__sign) 
                                                     << 0x1fU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             ((0x180U 
                                                               == 
                                                               (0x180U 
                                                                & (IData)(__PVT__DuI__DOT__X3__DOT__M2__DOT__exponent))) 
                                                              & (~ (IData)(__PVT__DuI__DOT__X3__DOT__M2__DOT__zero)))))
                                                   ? 
                                                  ((IData)(__PVT__DuI__DOT__X3__DOT__M2__DOT__sign) 
                                                   << 0x1fU)
                                                   : 
                                                  (((IData)(__PVT__DuI__DOT__X3__DOT__M2__DOT__sign) 
                                                    << 0x1fU) 
                                                   | ((0x7f800000U 
                                                       & ((IData)(__PVT__DuI__DOT__X3__DOT__M2__DOT__exponent) 
                                                          << 0x17U)) 
                                                      | (0x7fffffU 
                                                         & ((IData)(
                                                                    (__PVT__DuI__DOT__X3__DOT__M2__DOT__product_normalised 
                                                                     >> 0x18U)) 
                                                            + 
                                                            ((IData)(
                                                                     (__PVT__DuI__DOT__X3__DOT__M2__DOT__product_normalised 
                                                                      >> 0x17U)) 
                                                             & (0U 
                                                                != 
                                                                (0x7fffffU 
                                                                 & (IData)(__PVT__DuI__DOT__X3__DOT__M2__DOT__product_normalised))))))))))));
    vlSelfRef.__PVT__DuI__DOT__END__DOT__sign = ((__PVT__DuI__DOT__END__DOT__a_operand 
                                                  ^ vlSelfRef.__PVT__Div_A) 
                                                 >> 0x1fU);
    vlSelfRef.__PVT__DuI__DOT__END__DOT__Exception 
        = ((0xffU == (0xffU & (__PVT__DuI__DOT__END__DOT__a_operand 
                               >> 0x17U))) | (0xffU 
                                              == (IData)(__VdfgRegularize_hc373ca9b_1_0)));
    __PVT__DuI__DOT__END__DOT__product = (0xffffffffffffULL 
                                          & ((QData)((IData)(
                                                             ((0U 
                                                               != 
                                                               (0xffU 
                                                                & (__PVT__DuI__DOT__END__DOT__a_operand 
                                                                   >> 0x17U)))
                                                               ? 
                                                              (0x800000U 
                                                               | (0x7fffffU 
                                                                  & __PVT__DuI__DOT__END__DOT__a_operand))
                                                               : 
                                                              (0x7fffffU 
                                                               & __PVT__DuI__DOT__END__DOT__a_operand)))) 
                                             * (QData)((IData)(
                                                               ((0U 
                                                                 != (IData)(__VdfgRegularize_hc373ca9b_1_0))
                                                                 ? 
                                                                (0x800000U 
                                                                 | (0x7fffffU 
                                                                    & vlSelfRef.__PVT__Div_A))
                                                                 : 
                                                                (0x7fffffU 
                                                                 & vlSelfRef.__PVT__Div_A))))));
    vlSelfRef.__PVT__DuI__DOT__END__DOT__product_normalised 
        = (0xffffffffffffULL & ((1U & (IData)((__PVT__DuI__DOT__END__DOT__product 
                                               >> 0x2fU)))
                                 ? __PVT__DuI__DOT__END__DOT__product
                                 : VL_SHIFTL_QQI(48,48,32, __PVT__DuI__DOT__END__DOT__product, 1U)));
    vlSelfRef.__PVT__DuI__DOT__END__DOT__zero = ((~ (IData)(vlSelfRef.__PVT__DuI__DOT__END__DOT__Exception)) 
                                                 & (0ULL 
                                                    == __PVT__DuI__DOT__END__DOT__product));
    vlSelfRef.__PVT__DuI__DOT__END__DOT__exponent = 
        (0x1ffU & ((((0xffU & (__PVT__DuI__DOT__END__DOT__a_operand 
                               >> 0x17U)) + (IData)(__VdfgRegularize_hc373ca9b_1_0)) 
                    - (IData)(0x7fU)) + (1U & (IData)(
                                                      (__PVT__DuI__DOT__END__DOT__product 
                                                       >> 0x2fU)))));
}

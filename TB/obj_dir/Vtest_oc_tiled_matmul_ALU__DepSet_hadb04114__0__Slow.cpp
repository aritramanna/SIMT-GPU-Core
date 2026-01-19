// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_oc_tiled_matmul.h for the primary calling header

#include "Vtest_oc_tiled_matmul__pch.h"
#include "Vtest_oc_tiled_matmul_ALU.h"

VL_ATTR_COLD void Vtest_oc_tiled_matmul_ALU___ctor_var_reset(Vtest_oc_tiled_matmul_ALU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_oc_tiled_matmul_ALU___ctor_var_reset\n"); );
    Vtest_oc_tiled_matmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->a_operand = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2953419555142379960ull);
    vlSelf->b_operand = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17467521988587294905ull);
    vlSelf->Operation = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9171395793985007632ull);
    vlSelf->ALU_Output = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6240055941034670774ull);
    vlSelf->Exception = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1300664617958940239ull);
    vlSelf->Overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5713053768810136753ull);
    vlSelf->Underflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3335497577329179955ull);
    vlSelf->__PVT__Div_A = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12553819916063487930ull);
    vlSelf->__PVT__Div_B = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8664742439521169792ull);
    vlSelf->__PVT__Floating_Point = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10936293928594298899ull);
    vlSelf->__PVT__Mul_Exception = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15436602391834016359ull);
    vlSelf->__PVT__Mul_Overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13375878939055347609ull);
    vlSelf->__PVT__Mul_Underflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14051740483363984776ull);
    vlSelf->Exception__out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13369440297625146426ull);
    vlSelf->Exception__en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9650121341837622012ull);
    vlSelf->Overflow__out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13027901870677255810ull);
    vlSelf->Overflow__en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7596597355183870378ull);
    vlSelf->Underflow__out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8513411880103034814ull);
    vlSelf->Underflow__en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2966513437697009197ull);
    vlSelf->ALU_Output__out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1732815593902346996ull);
    vlSelf->ALU_Output__en = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16836108024193645663ull);
    vlSelf->__VdfgRegularize_hc373ca9b_0_16 = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 9802474684301323302ull);
    vlSelf->__PVT__MuI__DOT__sign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 550503325098874613ull);
    vlSelf->__PVT__MuI__DOT__zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6454304378246985319ull);
    vlSelf->__PVT__MuI__DOT__exponent = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 15436002091045560848ull);
    vlSelf->__PVT__MuI__DOT__product_normalised = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 13808322987506451902ull);
    vlSelf->__PVT__DuI__DOT__END__DOT__Exception = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11459458726025956701ull);
    vlSelf->__PVT__DuI__DOT__END__DOT__sign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 283601186889850599ull);
    vlSelf->__PVT__DuI__DOT__END__DOT__zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15971648772063127463ull);
    vlSelf->__PVT__DuI__DOT__END__DOT__exponent = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 1939524466955259905ull);
    vlSelf->__PVT__DuI__DOT__END__DOT__product_normalised = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 4581369109520436832ull);
    vlSelf->__PVT__FuI__DOT__Integer_Value = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 1234656354109145289ull);
    vlSelf->__PVT__IuF__DOT__val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17900234351353291949ull);
    vlSelf->__PVT__IuF__DOT__clz = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1252633576285769835ull);
    vlSelf->__PVT__IuF__DOT__mantissa = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 15334877872227446448ull);
    vlSelf->__PVT__IuF__DOT__shifted = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15534615299765798991ull);
    VL_SCOPED_RAND_RESET_W(1024, vlSelf->__VdfgRegularize_hebeb780c_0_114, __VscopeHash, 9331205896573284793ull);
}

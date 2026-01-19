// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_oc_tiled_matmul.h for the primary calling header

#include "Vtest_oc_tiled_matmul__pch.h"
#include "Vtest_oc_tiled_matmul_FMA.h"

VL_ATTR_COLD void Vtest_oc_tiled_matmul_FMA___ctor_var_reset(Vtest_oc_tiled_matmul_FMA* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_oc_tiled_matmul_FMA___ctor_var_reset\n"); );
    Vtest_oc_tiled_matmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->a_operand = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2953419555142379960ull);
    vlSelf->b_operand = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17467521988587294905ull);
    vlSelf->c_operand = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11194556447849210663ull);
    vlSelf->result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16664408842984530663ull);
    vlSelf->Exception = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1300664617958940239ull);
    vlSelf->__PVT__add_inst__DOT__significand_add = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 18236957825063536197ull);
    vlSelf->__PVT__add_inst__DOT__subtraction_diff = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 18009903861998270002ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->add_inst__DOT____VdfgRegularize_ha816c9b8_0_0, __VscopeHash, 375746273895567980ull);
    vlSelf->add_inst__DOT____VdfgRegularize_ha816c9b8_0_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14226702628176875581ull);
    vlSelf->__PVT__add_inst__DOT__pe__DOT__shift = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9579099601640456775ull);
}

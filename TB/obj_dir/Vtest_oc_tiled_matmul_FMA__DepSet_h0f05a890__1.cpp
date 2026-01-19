// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_oc_tiled_matmul.h for the primary calling header

#include "Vtest_oc_tiled_matmul__pch.h"
#include "Vtest_oc_tiled_matmul_FMA.h"
#include "Vtest_oc_tiled_matmul__Syms.h"

VL_INLINE_OPT void Vtest_oc_tiled_matmul_FMA___nba_sequent__TOP__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__20__KET____DOT__fma_inst__0(Vtest_oc_tiled_matmul_FMA* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_oc_tiled_matmul_FMA___nba_sequent__TOP__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__20__KET____DOT__fma_inst__0\n"); );
    Vtest_oc_tiled_matmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__mul_inst__DOT__Exception;
    __PVT__mul_inst__DOT__Exception = 0;
    CData/*0:0*/ __PVT__mul_inst__DOT__sign;
    __PVT__mul_inst__DOT__sign = 0;
    CData/*0:0*/ __PVT__mul_inst__DOT__zero;
    __PVT__mul_inst__DOT__zero = 0;
    SData/*8:0*/ __PVT__mul_inst__DOT__exponent;
    __PVT__mul_inst__DOT__exponent = 0;
    QData/*47:0*/ __PVT__mul_inst__DOT__product;
    __PVT__mul_inst__DOT__product = 0;
    QData/*47:0*/ __PVT__mul_inst__DOT__product_normalised;
    __PVT__mul_inst__DOT__product_normalised = 0;
    IData/*31:0*/ __PVT__add_inst__DOT__a_operand;
    __PVT__add_inst__DOT__a_operand = 0;
    CData/*7:0*/ __PVT__add_inst__DOT__exponent_diff;
    __PVT__add_inst__DOT__exponent_diff = 0;
    IData/*23:0*/ __PVT__add_inst__DOT__significand_b_add_sub;
    __PVT__add_inst__DOT__significand_b_add_sub = 0;
    IData/*24:0*/ __PVT__add_inst__DOT__significand_sub;
    __PVT__add_inst__DOT__significand_sub = 0;
    CData/*0:0*/ __PVT__add_inst__DOT__perform;
    __PVT__add_inst__DOT__perform = 0;
    IData/*24:0*/ add_inst__DOT____VdfgRegularize_ha816c9b8_0_2;
    add_inst__DOT____VdfgRegularize_ha816c9b8_0_2 = 0;
    // Body
    __PVT__mul_inst__DOT__sign = ((vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x14U] 
                                   ^ vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x14U]) 
                                  >> 0x1fU);
    __PVT__mul_inst__DOT__Exception = ((0xffU == (0xffU 
                                                  & (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x14U] 
                                                     >> 0x17U))) 
                                       | (0xffU == 
                                          (0xffU & 
                                           (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x14U] 
                                            >> 0x17U))));
    __PVT__mul_inst__DOT__product = (0xffffffffffffULL 
                                     & ((QData)((IData)(
                                                        ((0U 
                                                          != 
                                                          (0xffU 
                                                           & (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x14U] 
                                                              >> 0x17U)))
                                                          ? 
                                                         (0x800000U 
                                                          | (0x7fffffU 
                                                             & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x14U]))
                                                          : 
                                                         (0x7fffffU 
                                                          & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x14U])))) 
                                        * (QData)((IData)(
                                                          ((0U 
                                                            != 
                                                            (0xffU 
                                                             & (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x14U] 
                                                                >> 0x17U)))
                                                            ? 
                                                           (0x800000U 
                                                            | (0x7fffffU 
                                                               & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x14U]))
                                                            : 
                                                           (0x7fffffU 
                                                            & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x14U]))))));
    __PVT__mul_inst__DOT__product_normalised = (0xffffffffffffULL 
                                                & ((1U 
                                                    & (IData)(
                                                              (__PVT__mul_inst__DOT__product 
                                                               >> 0x2fU)))
                                                    ? __PVT__mul_inst__DOT__product
                                                    : 
                                                   VL_SHIFTL_QQI(48,48,32, __PVT__mul_inst__DOT__product, 1U)));
    __PVT__mul_inst__DOT__zero = ((~ (IData)(__PVT__mul_inst__DOT__Exception)) 
                                  & (0ULL == __PVT__mul_inst__DOT__product));
    __PVT__mul_inst__DOT__exponent = (0x1ffU & ((((0xffU 
                                                   & (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x14U] 
                                                      >> 0x17U)) 
                                                  + 
                                                  (0xffU 
                                                   & (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x14U] 
                                                      >> 0x17U))) 
                                                 - (IData)(0x7fU)) 
                                                + (1U 
                                                   & (IData)(
                                                             (__PVT__mul_inst__DOT__product 
                                                              >> 0x2fU)))));
    __PVT__add_inst__DOT__a_operand = ((IData)(__PVT__mul_inst__DOT__Exception)
                                        ? 0U : ((IData)(__PVT__mul_inst__DOT__zero)
                                                 ? 
                                                ((IData)(__PVT__mul_inst__DOT__sign) 
                                                 << 0x1fU)
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            ((0x100U 
                                                              == 
                                                              (0x180U 
                                                               & (IData)(__PVT__mul_inst__DOT__exponent))) 
                                                             & (~ (IData)(__PVT__mul_inst__DOT__zero)))))
                                                  ? 
                                                 (0x7f800000U 
                                                  | ((IData)(__PVT__mul_inst__DOT__sign) 
                                                     << 0x1fU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             ((0x180U 
                                                               == 
                                                               (0x180U 
                                                                & (IData)(__PVT__mul_inst__DOT__exponent))) 
                                                              & (~ (IData)(__PVT__mul_inst__DOT__zero)))))
                                                   ? 
                                                  ((IData)(__PVT__mul_inst__DOT__sign) 
                                                   << 0x1fU)
                                                   : 
                                                  (((IData)(__PVT__mul_inst__DOT__sign) 
                                                    << 0x1fU) 
                                                   | ((0x7f800000U 
                                                       & ((IData)(__PVT__mul_inst__DOT__exponent) 
                                                          << 0x17U)) 
                                                      | (0x7fffffU 
                                                         & ((IData)(
                                                                    (__PVT__mul_inst__DOT__product_normalised 
                                                                     >> 0x18U)) 
                                                            + 
                                                            ((IData)(
                                                                     (__PVT__mul_inst__DOT__product_normalised 
                                                                      >> 0x17U)) 
                                                             & (0U 
                                                                != 
                                                                (0x7fffffU 
                                                                 & (IData)(__PVT__mul_inst__DOT__product_normalised))))))))))));
    if (((0x7fffffffU & __PVT__add_inst__DOT__a_operand) 
         < (0x7fffffffU & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_c[0x14U]))) {
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
            = (IData)((((QData)((IData)(vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_c[0x14U])) 
                        << 0x20U) | (QData)((IData)(__PVT__add_inst__DOT__a_operand))));
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            = (IData)(((((QData)((IData)(vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_c[0x14U])) 
                         << 0x20U) | (QData)((IData)(__PVT__add_inst__DOT__a_operand))) 
                       >> 0x20U));
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[2U] = 1U;
    } else {
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
            = (IData)((((QData)((IData)(__PVT__add_inst__DOT__a_operand)) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_c[0x14U]))));
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            = (IData)(((((QData)((IData)(__PVT__add_inst__DOT__a_operand)) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_c[0x14U]))) 
                       >> 0x20U));
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[2U] = 0U;
    }
    add_inst__DOT____VdfgRegularize_ha816c9b8_0_2 = 
        ((0U != (0xffU & (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                          >> 0x17U))) ? (0x800000U 
                                         | (0x7fffffU 
                                            & vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U]))
          : (0x7fffffU & vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U]));
    vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_1 
        = ((vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            ^ vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U]) 
           >> 0x1fU);
    __PVT__add_inst__DOT__exponent_diff = (0xffU & 
                                           (((vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                              << 9U) 
                                             | (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                >> 0x17U)) 
                                            - ((vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                << 9U) 
                                               | (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                  >> 0x17U))));
    __PVT__add_inst__DOT__significand_b_add_sub = (0xffffffU 
                                                   & VL_SHIFTR_III(24,24,8, 
                                                                   ((0U 
                                                                     != 
                                                                     (0xffU 
                                                                      & (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                                         >> 0x17U)))
                                                                     ? 
                                                                    (0x800000U 
                                                                     | (0x7fffffU 
                                                                        & vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U]))
                                                                     : 
                                                                    (0x7fffffU 
                                                                     & vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U])), (IData)(__PVT__add_inst__DOT__exponent_diff)));
    __PVT__add_inst__DOT__perform = ((0xffU & (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                               >> 0x17U)) 
                                     == (0xffU & ((
                                                   (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                    << 9U) 
                                                   | (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                      >> 0x17U)) 
                                                  + (IData)(__PVT__add_inst__DOT__exponent_diff))));
    vlSelfRef.__PVT__add_inst__DOT__significand_add 
        = (((~ (IData)(vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_1)) 
            & (IData)(__PVT__add_inst__DOT__perform))
            ? (0x1ffffffU & (add_inst__DOT____VdfgRegularize_ha816c9b8_0_2 
                             + __PVT__add_inst__DOT__significand_b_add_sub))
            : 0U);
    __PVT__add_inst__DOT__significand_sub = ((IData)(__PVT__add_inst__DOT__perform)
                                              ? (0x1ffffffU 
                                                 & (add_inst__DOT____VdfgRegularize_ha816c9b8_0_2 
                                                    + 
                                                    (((IData)(vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_1) 
                                                      & (IData)(__PVT__add_inst__DOT__perform))
                                                      ? 
                                                     (0xffffffU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ __PVT__add_inst__DOT__significand_b_add_sub)))
                                                      : 0U)))
                                              : 0U);
    if (((((((((0x1800000U == (0x1800000U & __PVT__add_inst__DOT__significand_sub)) 
               | (0x1400000U == (0x1c00000U & __PVT__add_inst__DOT__significand_sub))) 
              | (0x1200000U == (0x1e00000U & __PVT__add_inst__DOT__significand_sub))) 
             | (0x1100000U == (0x1f00000U & __PVT__add_inst__DOT__significand_sub))) 
            | (0x1080000U == (0x1f80000U & __PVT__add_inst__DOT__significand_sub))) 
           | (0x1040000U == (0x1fc0000U & __PVT__add_inst__DOT__significand_sub))) 
          | (0x1020000U == (0x1fe0000U & __PVT__add_inst__DOT__significand_sub))) 
         | (0x1010000U == (0x1ff0000U & __PVT__add_inst__DOT__significand_sub)))) {
        if ((0x1800000U == (0x1800000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & __PVT__add_inst__DOT__significand_sub);
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0U;
        } else if ((0x1400000U == (0x1c00000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 1U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 1U;
        } else if ((0x1200000U == (0x1e00000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 2U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 2U;
        } else if ((0x1100000U == (0x1f00000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 3U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 3U;
        } else if ((0x1080000U == (0x1f80000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 4U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 4U;
        } else if ((0x1040000U == (0x1fc0000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 5U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 5U;
        } else if ((0x1020000U == (0x1fe0000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 6U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 6U;
        } else {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 7U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 7U;
        }
    } else if (((((((((0x1008000U == (0x1ff8000U & __PVT__add_inst__DOT__significand_sub)) 
                      | (0x1004000U == (0x1ffc000U 
                                        & __PVT__add_inst__DOT__significand_sub))) 
                     | (0x1002000U == (0x1ffe000U & __PVT__add_inst__DOT__significand_sub))) 
                    | (0x1001000U == (0x1fff000U & __PVT__add_inst__DOT__significand_sub))) 
                   | (0x1000800U == (0x1fff800U & __PVT__add_inst__DOT__significand_sub))) 
                  | (0x1000400U == (0x1fffc00U & __PVT__add_inst__DOT__significand_sub))) 
                 | (0x1000200U == (0x1fffe00U & __PVT__add_inst__DOT__significand_sub))) 
                | (0x1000100U == (0x1ffff00U & __PVT__add_inst__DOT__significand_sub)))) {
        if ((0x1008000U == (0x1ff8000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 8U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 8U;
        } else if ((0x1004000U == (0x1ffc000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 9U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 9U;
        } else if ((0x1002000U == (0x1ffe000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xaU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xaU;
        } else if ((0x1001000U == (0x1fff000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xbU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xbU;
        } else if ((0x1000800U == (0x1fff800U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xcU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xcU;
        } else if ((0x1000400U == (0x1fffc00U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xdU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xdU;
        } else if ((0x1000200U == (0x1fffe00U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xeU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xeU;
        } else {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xfU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xfU;
        }
    } else if (((((((((0x1000080U == (0x1ffff80U & __PVT__add_inst__DOT__significand_sub)) 
                      | (0x1000040U == (0x1ffffc0U 
                                        & __PVT__add_inst__DOT__significand_sub))) 
                     | (0x1000020U == (0x1ffffe0U & __PVT__add_inst__DOT__significand_sub))) 
                    | (0x1000010U == (0x1fffff0U & __PVT__add_inst__DOT__significand_sub))) 
                   | (0x1000008U == (0x1fffff8U & __PVT__add_inst__DOT__significand_sub))) 
                  | (0x1000004U == (0x1fffffcU & __PVT__add_inst__DOT__significand_sub))) 
                 | (0x1000002U == (0x1fffffeU & __PVT__add_inst__DOT__significand_sub))) 
                | (0x1000001U == __PVT__add_inst__DOT__significand_sub))) {
        if ((0x1000080U == (0x1ffff80U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x10U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x10U;
        } else if ((0x1000040U == (0x1ffffc0U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x11U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x11U;
        } else if ((0x1000020U == (0x1ffffe0U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x12U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x12U;
        } else if ((0x1000010U == (0x1fffff0U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x13U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x13U;
        } else if ((0x1000008U == (0x1fffff8U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x14U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x14U;
        } else if ((0x1000004U == (0x1fffffcU & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x15U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x15U;
        } else if ((0x1000002U == (0x1fffffeU & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x16U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x16U;
        } else {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x17U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x17U;
        }
    } else if ((0x1000000U == __PVT__add_inst__DOT__significand_sub)) {
        vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
            = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x18U));
        vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x18U;
    } else {
        vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
            = (0x1ffffffU & ((IData)(1U) + (~ __PVT__add_inst__DOT__significand_sub)));
        vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0U;
    }
}

VL_INLINE_OPT void Vtest_oc_tiled_matmul_FMA___nba_sequent__TOP__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__21__KET____DOT__fma_inst__0(Vtest_oc_tiled_matmul_FMA* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_oc_tiled_matmul_FMA___nba_sequent__TOP__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__21__KET____DOT__fma_inst__0\n"); );
    Vtest_oc_tiled_matmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__mul_inst__DOT__Exception;
    __PVT__mul_inst__DOT__Exception = 0;
    CData/*0:0*/ __PVT__mul_inst__DOT__sign;
    __PVT__mul_inst__DOT__sign = 0;
    CData/*0:0*/ __PVT__mul_inst__DOT__zero;
    __PVT__mul_inst__DOT__zero = 0;
    SData/*8:0*/ __PVT__mul_inst__DOT__exponent;
    __PVT__mul_inst__DOT__exponent = 0;
    QData/*47:0*/ __PVT__mul_inst__DOT__product;
    __PVT__mul_inst__DOT__product = 0;
    QData/*47:0*/ __PVT__mul_inst__DOT__product_normalised;
    __PVT__mul_inst__DOT__product_normalised = 0;
    IData/*31:0*/ __PVT__add_inst__DOT__a_operand;
    __PVT__add_inst__DOT__a_operand = 0;
    CData/*7:0*/ __PVT__add_inst__DOT__exponent_diff;
    __PVT__add_inst__DOT__exponent_diff = 0;
    IData/*23:0*/ __PVT__add_inst__DOT__significand_b_add_sub;
    __PVT__add_inst__DOT__significand_b_add_sub = 0;
    IData/*24:0*/ __PVT__add_inst__DOT__significand_sub;
    __PVT__add_inst__DOT__significand_sub = 0;
    CData/*0:0*/ __PVT__add_inst__DOT__perform;
    __PVT__add_inst__DOT__perform = 0;
    IData/*24:0*/ add_inst__DOT____VdfgRegularize_ha816c9b8_0_2;
    add_inst__DOT____VdfgRegularize_ha816c9b8_0_2 = 0;
    // Body
    __PVT__mul_inst__DOT__sign = ((vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x15U] 
                                   ^ vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x15U]) 
                                  >> 0x1fU);
    __PVT__mul_inst__DOT__Exception = ((0xffU == (0xffU 
                                                  & (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x15U] 
                                                     >> 0x17U))) 
                                       | (0xffU == 
                                          (0xffU & 
                                           (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x15U] 
                                            >> 0x17U))));
    __PVT__mul_inst__DOT__product = (0xffffffffffffULL 
                                     & ((QData)((IData)(
                                                        ((0U 
                                                          != 
                                                          (0xffU 
                                                           & (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x15U] 
                                                              >> 0x17U)))
                                                          ? 
                                                         (0x800000U 
                                                          | (0x7fffffU 
                                                             & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x15U]))
                                                          : 
                                                         (0x7fffffU 
                                                          & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x15U])))) 
                                        * (QData)((IData)(
                                                          ((0U 
                                                            != 
                                                            (0xffU 
                                                             & (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x15U] 
                                                                >> 0x17U)))
                                                            ? 
                                                           (0x800000U 
                                                            | (0x7fffffU 
                                                               & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x15U]))
                                                            : 
                                                           (0x7fffffU 
                                                            & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x15U]))))));
    __PVT__mul_inst__DOT__product_normalised = (0xffffffffffffULL 
                                                & ((1U 
                                                    & (IData)(
                                                              (__PVT__mul_inst__DOT__product 
                                                               >> 0x2fU)))
                                                    ? __PVT__mul_inst__DOT__product
                                                    : 
                                                   VL_SHIFTL_QQI(48,48,32, __PVT__mul_inst__DOT__product, 1U)));
    __PVT__mul_inst__DOT__zero = ((~ (IData)(__PVT__mul_inst__DOT__Exception)) 
                                  & (0ULL == __PVT__mul_inst__DOT__product));
    __PVT__mul_inst__DOT__exponent = (0x1ffU & ((((0xffU 
                                                   & (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x15U] 
                                                      >> 0x17U)) 
                                                  + 
                                                  (0xffU 
                                                   & (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x15U] 
                                                      >> 0x17U))) 
                                                 - (IData)(0x7fU)) 
                                                + (1U 
                                                   & (IData)(
                                                             (__PVT__mul_inst__DOT__product 
                                                              >> 0x2fU)))));
    __PVT__add_inst__DOT__a_operand = ((IData)(__PVT__mul_inst__DOT__Exception)
                                        ? 0U : ((IData)(__PVT__mul_inst__DOT__zero)
                                                 ? 
                                                ((IData)(__PVT__mul_inst__DOT__sign) 
                                                 << 0x1fU)
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            ((0x100U 
                                                              == 
                                                              (0x180U 
                                                               & (IData)(__PVT__mul_inst__DOT__exponent))) 
                                                             & (~ (IData)(__PVT__mul_inst__DOT__zero)))))
                                                  ? 
                                                 (0x7f800000U 
                                                  | ((IData)(__PVT__mul_inst__DOT__sign) 
                                                     << 0x1fU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             ((0x180U 
                                                               == 
                                                               (0x180U 
                                                                & (IData)(__PVT__mul_inst__DOT__exponent))) 
                                                              & (~ (IData)(__PVT__mul_inst__DOT__zero)))))
                                                   ? 
                                                  ((IData)(__PVT__mul_inst__DOT__sign) 
                                                   << 0x1fU)
                                                   : 
                                                  (((IData)(__PVT__mul_inst__DOT__sign) 
                                                    << 0x1fU) 
                                                   | ((0x7f800000U 
                                                       & ((IData)(__PVT__mul_inst__DOT__exponent) 
                                                          << 0x17U)) 
                                                      | (0x7fffffU 
                                                         & ((IData)(
                                                                    (__PVT__mul_inst__DOT__product_normalised 
                                                                     >> 0x18U)) 
                                                            + 
                                                            ((IData)(
                                                                     (__PVT__mul_inst__DOT__product_normalised 
                                                                      >> 0x17U)) 
                                                             & (0U 
                                                                != 
                                                                (0x7fffffU 
                                                                 & (IData)(__PVT__mul_inst__DOT__product_normalised))))))))))));
    if (((0x7fffffffU & __PVT__add_inst__DOT__a_operand) 
         < (0x7fffffffU & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_c[0x15U]))) {
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
            = (IData)((((QData)((IData)(vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_c[0x15U])) 
                        << 0x20U) | (QData)((IData)(__PVT__add_inst__DOT__a_operand))));
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            = (IData)(((((QData)((IData)(vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_c[0x15U])) 
                         << 0x20U) | (QData)((IData)(__PVT__add_inst__DOT__a_operand))) 
                       >> 0x20U));
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[2U] = 1U;
    } else {
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
            = (IData)((((QData)((IData)(__PVT__add_inst__DOT__a_operand)) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_c[0x15U]))));
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            = (IData)(((((QData)((IData)(__PVT__add_inst__DOT__a_operand)) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_c[0x15U]))) 
                       >> 0x20U));
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[2U] = 0U;
    }
    add_inst__DOT____VdfgRegularize_ha816c9b8_0_2 = 
        ((0U != (0xffU & (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                          >> 0x17U))) ? (0x800000U 
                                         | (0x7fffffU 
                                            & vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U]))
          : (0x7fffffU & vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U]));
    vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_1 
        = ((vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            ^ vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U]) 
           >> 0x1fU);
    __PVT__add_inst__DOT__exponent_diff = (0xffU & 
                                           (((vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                              << 9U) 
                                             | (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                >> 0x17U)) 
                                            - ((vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                << 9U) 
                                               | (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                  >> 0x17U))));
    __PVT__add_inst__DOT__significand_b_add_sub = (0xffffffU 
                                                   & VL_SHIFTR_III(24,24,8, 
                                                                   ((0U 
                                                                     != 
                                                                     (0xffU 
                                                                      & (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                                         >> 0x17U)))
                                                                     ? 
                                                                    (0x800000U 
                                                                     | (0x7fffffU 
                                                                        & vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U]))
                                                                     : 
                                                                    (0x7fffffU 
                                                                     & vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U])), (IData)(__PVT__add_inst__DOT__exponent_diff)));
    __PVT__add_inst__DOT__perform = ((0xffU & (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                               >> 0x17U)) 
                                     == (0xffU & ((
                                                   (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                    << 9U) 
                                                   | (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                      >> 0x17U)) 
                                                  + (IData)(__PVT__add_inst__DOT__exponent_diff))));
    vlSelfRef.__PVT__add_inst__DOT__significand_add 
        = (((~ (IData)(vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_1)) 
            & (IData)(__PVT__add_inst__DOT__perform))
            ? (0x1ffffffU & (add_inst__DOT____VdfgRegularize_ha816c9b8_0_2 
                             + __PVT__add_inst__DOT__significand_b_add_sub))
            : 0U);
    __PVT__add_inst__DOT__significand_sub = ((IData)(__PVT__add_inst__DOT__perform)
                                              ? (0x1ffffffU 
                                                 & (add_inst__DOT____VdfgRegularize_ha816c9b8_0_2 
                                                    + 
                                                    (((IData)(vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_1) 
                                                      & (IData)(__PVT__add_inst__DOT__perform))
                                                      ? 
                                                     (0xffffffU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ __PVT__add_inst__DOT__significand_b_add_sub)))
                                                      : 0U)))
                                              : 0U);
    if (((((((((0x1800000U == (0x1800000U & __PVT__add_inst__DOT__significand_sub)) 
               | (0x1400000U == (0x1c00000U & __PVT__add_inst__DOT__significand_sub))) 
              | (0x1200000U == (0x1e00000U & __PVT__add_inst__DOT__significand_sub))) 
             | (0x1100000U == (0x1f00000U & __PVT__add_inst__DOT__significand_sub))) 
            | (0x1080000U == (0x1f80000U & __PVT__add_inst__DOT__significand_sub))) 
           | (0x1040000U == (0x1fc0000U & __PVT__add_inst__DOT__significand_sub))) 
          | (0x1020000U == (0x1fe0000U & __PVT__add_inst__DOT__significand_sub))) 
         | (0x1010000U == (0x1ff0000U & __PVT__add_inst__DOT__significand_sub)))) {
        if ((0x1800000U == (0x1800000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & __PVT__add_inst__DOT__significand_sub);
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0U;
        } else if ((0x1400000U == (0x1c00000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 1U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 1U;
        } else if ((0x1200000U == (0x1e00000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 2U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 2U;
        } else if ((0x1100000U == (0x1f00000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 3U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 3U;
        } else if ((0x1080000U == (0x1f80000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 4U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 4U;
        } else if ((0x1040000U == (0x1fc0000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 5U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 5U;
        } else if ((0x1020000U == (0x1fe0000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 6U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 6U;
        } else {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 7U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 7U;
        }
    } else if (((((((((0x1008000U == (0x1ff8000U & __PVT__add_inst__DOT__significand_sub)) 
                      | (0x1004000U == (0x1ffc000U 
                                        & __PVT__add_inst__DOT__significand_sub))) 
                     | (0x1002000U == (0x1ffe000U & __PVT__add_inst__DOT__significand_sub))) 
                    | (0x1001000U == (0x1fff000U & __PVT__add_inst__DOT__significand_sub))) 
                   | (0x1000800U == (0x1fff800U & __PVT__add_inst__DOT__significand_sub))) 
                  | (0x1000400U == (0x1fffc00U & __PVT__add_inst__DOT__significand_sub))) 
                 | (0x1000200U == (0x1fffe00U & __PVT__add_inst__DOT__significand_sub))) 
                | (0x1000100U == (0x1ffff00U & __PVT__add_inst__DOT__significand_sub)))) {
        if ((0x1008000U == (0x1ff8000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 8U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 8U;
        } else if ((0x1004000U == (0x1ffc000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 9U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 9U;
        } else if ((0x1002000U == (0x1ffe000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xaU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xaU;
        } else if ((0x1001000U == (0x1fff000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xbU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xbU;
        } else if ((0x1000800U == (0x1fff800U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xcU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xcU;
        } else if ((0x1000400U == (0x1fffc00U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xdU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xdU;
        } else if ((0x1000200U == (0x1fffe00U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xeU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xeU;
        } else {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xfU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xfU;
        }
    } else if (((((((((0x1000080U == (0x1ffff80U & __PVT__add_inst__DOT__significand_sub)) 
                      | (0x1000040U == (0x1ffffc0U 
                                        & __PVT__add_inst__DOT__significand_sub))) 
                     | (0x1000020U == (0x1ffffe0U & __PVT__add_inst__DOT__significand_sub))) 
                    | (0x1000010U == (0x1fffff0U & __PVT__add_inst__DOT__significand_sub))) 
                   | (0x1000008U == (0x1fffff8U & __PVT__add_inst__DOT__significand_sub))) 
                  | (0x1000004U == (0x1fffffcU & __PVT__add_inst__DOT__significand_sub))) 
                 | (0x1000002U == (0x1fffffeU & __PVT__add_inst__DOT__significand_sub))) 
                | (0x1000001U == __PVT__add_inst__DOT__significand_sub))) {
        if ((0x1000080U == (0x1ffff80U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x10U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x10U;
        } else if ((0x1000040U == (0x1ffffc0U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x11U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x11U;
        } else if ((0x1000020U == (0x1ffffe0U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x12U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x12U;
        } else if ((0x1000010U == (0x1fffff0U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x13U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x13U;
        } else if ((0x1000008U == (0x1fffff8U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x14U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x14U;
        } else if ((0x1000004U == (0x1fffffcU & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x15U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x15U;
        } else if ((0x1000002U == (0x1fffffeU & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x16U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x16U;
        } else {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x17U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x17U;
        }
    } else if ((0x1000000U == __PVT__add_inst__DOT__significand_sub)) {
        vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
            = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x18U));
        vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x18U;
    } else {
        vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
            = (0x1ffffffU & ((IData)(1U) + (~ __PVT__add_inst__DOT__significand_sub)));
        vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0U;
    }
}

VL_INLINE_OPT void Vtest_oc_tiled_matmul_FMA___nba_sequent__TOP__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__22__KET____DOT__fma_inst__0(Vtest_oc_tiled_matmul_FMA* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_oc_tiled_matmul_FMA___nba_sequent__TOP__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__22__KET____DOT__fma_inst__0\n"); );
    Vtest_oc_tiled_matmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__mul_inst__DOT__Exception;
    __PVT__mul_inst__DOT__Exception = 0;
    CData/*0:0*/ __PVT__mul_inst__DOT__sign;
    __PVT__mul_inst__DOT__sign = 0;
    CData/*0:0*/ __PVT__mul_inst__DOT__zero;
    __PVT__mul_inst__DOT__zero = 0;
    SData/*8:0*/ __PVT__mul_inst__DOT__exponent;
    __PVT__mul_inst__DOT__exponent = 0;
    QData/*47:0*/ __PVT__mul_inst__DOT__product;
    __PVT__mul_inst__DOT__product = 0;
    QData/*47:0*/ __PVT__mul_inst__DOT__product_normalised;
    __PVT__mul_inst__DOT__product_normalised = 0;
    IData/*31:0*/ __PVT__add_inst__DOT__a_operand;
    __PVT__add_inst__DOT__a_operand = 0;
    CData/*7:0*/ __PVT__add_inst__DOT__exponent_diff;
    __PVT__add_inst__DOT__exponent_diff = 0;
    IData/*23:0*/ __PVT__add_inst__DOT__significand_b_add_sub;
    __PVT__add_inst__DOT__significand_b_add_sub = 0;
    IData/*24:0*/ __PVT__add_inst__DOT__significand_sub;
    __PVT__add_inst__DOT__significand_sub = 0;
    CData/*0:0*/ __PVT__add_inst__DOT__perform;
    __PVT__add_inst__DOT__perform = 0;
    IData/*24:0*/ add_inst__DOT____VdfgRegularize_ha816c9b8_0_2;
    add_inst__DOT____VdfgRegularize_ha816c9b8_0_2 = 0;
    // Body
    __PVT__mul_inst__DOT__sign = ((vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x16U] 
                                   ^ vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x16U]) 
                                  >> 0x1fU);
    __PVT__mul_inst__DOT__Exception = ((0xffU == (0xffU 
                                                  & (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x16U] 
                                                     >> 0x17U))) 
                                       | (0xffU == 
                                          (0xffU & 
                                           (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x16U] 
                                            >> 0x17U))));
    __PVT__mul_inst__DOT__product = (0xffffffffffffULL 
                                     & ((QData)((IData)(
                                                        ((0U 
                                                          != 
                                                          (0xffU 
                                                           & (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x16U] 
                                                              >> 0x17U)))
                                                          ? 
                                                         (0x800000U 
                                                          | (0x7fffffU 
                                                             & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x16U]))
                                                          : 
                                                         (0x7fffffU 
                                                          & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x16U])))) 
                                        * (QData)((IData)(
                                                          ((0U 
                                                            != 
                                                            (0xffU 
                                                             & (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x16U] 
                                                                >> 0x17U)))
                                                            ? 
                                                           (0x800000U 
                                                            | (0x7fffffU 
                                                               & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x16U]))
                                                            : 
                                                           (0x7fffffU 
                                                            & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x16U]))))));
    __PVT__mul_inst__DOT__product_normalised = (0xffffffffffffULL 
                                                & ((1U 
                                                    & (IData)(
                                                              (__PVT__mul_inst__DOT__product 
                                                               >> 0x2fU)))
                                                    ? __PVT__mul_inst__DOT__product
                                                    : 
                                                   VL_SHIFTL_QQI(48,48,32, __PVT__mul_inst__DOT__product, 1U)));
    __PVT__mul_inst__DOT__zero = ((~ (IData)(__PVT__mul_inst__DOT__Exception)) 
                                  & (0ULL == __PVT__mul_inst__DOT__product));
    __PVT__mul_inst__DOT__exponent = (0x1ffU & ((((0xffU 
                                                   & (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x16U] 
                                                      >> 0x17U)) 
                                                  + 
                                                  (0xffU 
                                                   & (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x16U] 
                                                      >> 0x17U))) 
                                                 - (IData)(0x7fU)) 
                                                + (1U 
                                                   & (IData)(
                                                             (__PVT__mul_inst__DOT__product 
                                                              >> 0x2fU)))));
    __PVT__add_inst__DOT__a_operand = ((IData)(__PVT__mul_inst__DOT__Exception)
                                        ? 0U : ((IData)(__PVT__mul_inst__DOT__zero)
                                                 ? 
                                                ((IData)(__PVT__mul_inst__DOT__sign) 
                                                 << 0x1fU)
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            ((0x100U 
                                                              == 
                                                              (0x180U 
                                                               & (IData)(__PVT__mul_inst__DOT__exponent))) 
                                                             & (~ (IData)(__PVT__mul_inst__DOT__zero)))))
                                                  ? 
                                                 (0x7f800000U 
                                                  | ((IData)(__PVT__mul_inst__DOT__sign) 
                                                     << 0x1fU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             ((0x180U 
                                                               == 
                                                               (0x180U 
                                                                & (IData)(__PVT__mul_inst__DOT__exponent))) 
                                                              & (~ (IData)(__PVT__mul_inst__DOT__zero)))))
                                                   ? 
                                                  ((IData)(__PVT__mul_inst__DOT__sign) 
                                                   << 0x1fU)
                                                   : 
                                                  (((IData)(__PVT__mul_inst__DOT__sign) 
                                                    << 0x1fU) 
                                                   | ((0x7f800000U 
                                                       & ((IData)(__PVT__mul_inst__DOT__exponent) 
                                                          << 0x17U)) 
                                                      | (0x7fffffU 
                                                         & ((IData)(
                                                                    (__PVT__mul_inst__DOT__product_normalised 
                                                                     >> 0x18U)) 
                                                            + 
                                                            ((IData)(
                                                                     (__PVT__mul_inst__DOT__product_normalised 
                                                                      >> 0x17U)) 
                                                             & (0U 
                                                                != 
                                                                (0x7fffffU 
                                                                 & (IData)(__PVT__mul_inst__DOT__product_normalised))))))))))));
    if (((0x7fffffffU & __PVT__add_inst__DOT__a_operand) 
         < (0x7fffffffU & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_c[0x16U]))) {
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
            = (IData)((((QData)((IData)(vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_c[0x16U])) 
                        << 0x20U) | (QData)((IData)(__PVT__add_inst__DOT__a_operand))));
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            = (IData)(((((QData)((IData)(vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_c[0x16U])) 
                         << 0x20U) | (QData)((IData)(__PVT__add_inst__DOT__a_operand))) 
                       >> 0x20U));
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[2U] = 1U;
    } else {
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
            = (IData)((((QData)((IData)(__PVT__add_inst__DOT__a_operand)) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_c[0x16U]))));
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            = (IData)(((((QData)((IData)(__PVT__add_inst__DOT__a_operand)) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_c[0x16U]))) 
                       >> 0x20U));
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[2U] = 0U;
    }
    add_inst__DOT____VdfgRegularize_ha816c9b8_0_2 = 
        ((0U != (0xffU & (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                          >> 0x17U))) ? (0x800000U 
                                         | (0x7fffffU 
                                            & vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U]))
          : (0x7fffffU & vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U]));
    vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_1 
        = ((vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            ^ vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U]) 
           >> 0x1fU);
    __PVT__add_inst__DOT__exponent_diff = (0xffU & 
                                           (((vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                              << 9U) 
                                             | (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                >> 0x17U)) 
                                            - ((vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                << 9U) 
                                               | (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                  >> 0x17U))));
    __PVT__add_inst__DOT__significand_b_add_sub = (0xffffffU 
                                                   & VL_SHIFTR_III(24,24,8, 
                                                                   ((0U 
                                                                     != 
                                                                     (0xffU 
                                                                      & (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                                         >> 0x17U)))
                                                                     ? 
                                                                    (0x800000U 
                                                                     | (0x7fffffU 
                                                                        & vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U]))
                                                                     : 
                                                                    (0x7fffffU 
                                                                     & vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U])), (IData)(__PVT__add_inst__DOT__exponent_diff)));
    __PVT__add_inst__DOT__perform = ((0xffU & (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                               >> 0x17U)) 
                                     == (0xffU & ((
                                                   (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                    << 9U) 
                                                   | (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                      >> 0x17U)) 
                                                  + (IData)(__PVT__add_inst__DOT__exponent_diff))));
    vlSelfRef.__PVT__add_inst__DOT__significand_add 
        = (((~ (IData)(vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_1)) 
            & (IData)(__PVT__add_inst__DOT__perform))
            ? (0x1ffffffU & (add_inst__DOT____VdfgRegularize_ha816c9b8_0_2 
                             + __PVT__add_inst__DOT__significand_b_add_sub))
            : 0U);
    __PVT__add_inst__DOT__significand_sub = ((IData)(__PVT__add_inst__DOT__perform)
                                              ? (0x1ffffffU 
                                                 & (add_inst__DOT____VdfgRegularize_ha816c9b8_0_2 
                                                    + 
                                                    (((IData)(vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_1) 
                                                      & (IData)(__PVT__add_inst__DOT__perform))
                                                      ? 
                                                     (0xffffffU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ __PVT__add_inst__DOT__significand_b_add_sub)))
                                                      : 0U)))
                                              : 0U);
    if (((((((((0x1800000U == (0x1800000U & __PVT__add_inst__DOT__significand_sub)) 
               | (0x1400000U == (0x1c00000U & __PVT__add_inst__DOT__significand_sub))) 
              | (0x1200000U == (0x1e00000U & __PVT__add_inst__DOT__significand_sub))) 
             | (0x1100000U == (0x1f00000U & __PVT__add_inst__DOT__significand_sub))) 
            | (0x1080000U == (0x1f80000U & __PVT__add_inst__DOT__significand_sub))) 
           | (0x1040000U == (0x1fc0000U & __PVT__add_inst__DOT__significand_sub))) 
          | (0x1020000U == (0x1fe0000U & __PVT__add_inst__DOT__significand_sub))) 
         | (0x1010000U == (0x1ff0000U & __PVT__add_inst__DOT__significand_sub)))) {
        if ((0x1800000U == (0x1800000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & __PVT__add_inst__DOT__significand_sub);
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0U;
        } else if ((0x1400000U == (0x1c00000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 1U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 1U;
        } else if ((0x1200000U == (0x1e00000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 2U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 2U;
        } else if ((0x1100000U == (0x1f00000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 3U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 3U;
        } else if ((0x1080000U == (0x1f80000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 4U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 4U;
        } else if ((0x1040000U == (0x1fc0000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 5U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 5U;
        } else if ((0x1020000U == (0x1fe0000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 6U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 6U;
        } else {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 7U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 7U;
        }
    } else if (((((((((0x1008000U == (0x1ff8000U & __PVT__add_inst__DOT__significand_sub)) 
                      | (0x1004000U == (0x1ffc000U 
                                        & __PVT__add_inst__DOT__significand_sub))) 
                     | (0x1002000U == (0x1ffe000U & __PVT__add_inst__DOT__significand_sub))) 
                    | (0x1001000U == (0x1fff000U & __PVT__add_inst__DOT__significand_sub))) 
                   | (0x1000800U == (0x1fff800U & __PVT__add_inst__DOT__significand_sub))) 
                  | (0x1000400U == (0x1fffc00U & __PVT__add_inst__DOT__significand_sub))) 
                 | (0x1000200U == (0x1fffe00U & __PVT__add_inst__DOT__significand_sub))) 
                | (0x1000100U == (0x1ffff00U & __PVT__add_inst__DOT__significand_sub)))) {
        if ((0x1008000U == (0x1ff8000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 8U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 8U;
        } else if ((0x1004000U == (0x1ffc000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 9U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 9U;
        } else if ((0x1002000U == (0x1ffe000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xaU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xaU;
        } else if ((0x1001000U == (0x1fff000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xbU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xbU;
        } else if ((0x1000800U == (0x1fff800U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xcU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xcU;
        } else if ((0x1000400U == (0x1fffc00U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xdU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xdU;
        } else if ((0x1000200U == (0x1fffe00U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xeU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xeU;
        } else {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xfU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xfU;
        }
    } else if (((((((((0x1000080U == (0x1ffff80U & __PVT__add_inst__DOT__significand_sub)) 
                      | (0x1000040U == (0x1ffffc0U 
                                        & __PVT__add_inst__DOT__significand_sub))) 
                     | (0x1000020U == (0x1ffffe0U & __PVT__add_inst__DOT__significand_sub))) 
                    | (0x1000010U == (0x1fffff0U & __PVT__add_inst__DOT__significand_sub))) 
                   | (0x1000008U == (0x1fffff8U & __PVT__add_inst__DOT__significand_sub))) 
                  | (0x1000004U == (0x1fffffcU & __PVT__add_inst__DOT__significand_sub))) 
                 | (0x1000002U == (0x1fffffeU & __PVT__add_inst__DOT__significand_sub))) 
                | (0x1000001U == __PVT__add_inst__DOT__significand_sub))) {
        if ((0x1000080U == (0x1ffff80U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x10U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x10U;
        } else if ((0x1000040U == (0x1ffffc0U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x11U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x11U;
        } else if ((0x1000020U == (0x1ffffe0U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x12U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x12U;
        } else if ((0x1000010U == (0x1fffff0U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x13U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x13U;
        } else if ((0x1000008U == (0x1fffff8U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x14U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x14U;
        } else if ((0x1000004U == (0x1fffffcU & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x15U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x15U;
        } else if ((0x1000002U == (0x1fffffeU & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x16U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x16U;
        } else {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x17U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x17U;
        }
    } else if ((0x1000000U == __PVT__add_inst__DOT__significand_sub)) {
        vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
            = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x18U));
        vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x18U;
    } else {
        vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
            = (0x1ffffffU & ((IData)(1U) + (~ __PVT__add_inst__DOT__significand_sub)));
        vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0U;
    }
}

VL_INLINE_OPT void Vtest_oc_tiled_matmul_FMA___nba_sequent__TOP__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__23__KET____DOT__fma_inst__0(Vtest_oc_tiled_matmul_FMA* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_oc_tiled_matmul_FMA___nba_sequent__TOP__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__23__KET____DOT__fma_inst__0\n"); );
    Vtest_oc_tiled_matmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__mul_inst__DOT__Exception;
    __PVT__mul_inst__DOT__Exception = 0;
    CData/*0:0*/ __PVT__mul_inst__DOT__sign;
    __PVT__mul_inst__DOT__sign = 0;
    CData/*0:0*/ __PVT__mul_inst__DOT__zero;
    __PVT__mul_inst__DOT__zero = 0;
    SData/*8:0*/ __PVT__mul_inst__DOT__exponent;
    __PVT__mul_inst__DOT__exponent = 0;
    QData/*47:0*/ __PVT__mul_inst__DOT__product;
    __PVT__mul_inst__DOT__product = 0;
    QData/*47:0*/ __PVT__mul_inst__DOT__product_normalised;
    __PVT__mul_inst__DOT__product_normalised = 0;
    IData/*31:0*/ __PVT__add_inst__DOT__a_operand;
    __PVT__add_inst__DOT__a_operand = 0;
    CData/*7:0*/ __PVT__add_inst__DOT__exponent_diff;
    __PVT__add_inst__DOT__exponent_diff = 0;
    IData/*23:0*/ __PVT__add_inst__DOT__significand_b_add_sub;
    __PVT__add_inst__DOT__significand_b_add_sub = 0;
    IData/*24:0*/ __PVT__add_inst__DOT__significand_sub;
    __PVT__add_inst__DOT__significand_sub = 0;
    CData/*0:0*/ __PVT__add_inst__DOT__perform;
    __PVT__add_inst__DOT__perform = 0;
    IData/*24:0*/ add_inst__DOT____VdfgRegularize_ha816c9b8_0_2;
    add_inst__DOT____VdfgRegularize_ha816c9b8_0_2 = 0;
    // Body
    __PVT__mul_inst__DOT__sign = ((vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x17U] 
                                   ^ vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x17U]) 
                                  >> 0x1fU);
    __PVT__mul_inst__DOT__Exception = ((0xffU == (0xffU 
                                                  & (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x17U] 
                                                     >> 0x17U))) 
                                       | (0xffU == 
                                          (0xffU & 
                                           (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x17U] 
                                            >> 0x17U))));
    __PVT__mul_inst__DOT__product = (0xffffffffffffULL 
                                     & ((QData)((IData)(
                                                        ((0U 
                                                          != 
                                                          (0xffU 
                                                           & (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x17U] 
                                                              >> 0x17U)))
                                                          ? 
                                                         (0x800000U 
                                                          | (0x7fffffU 
                                                             & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x17U]))
                                                          : 
                                                         (0x7fffffU 
                                                          & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x17U])))) 
                                        * (QData)((IData)(
                                                          ((0U 
                                                            != 
                                                            (0xffU 
                                                             & (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x17U] 
                                                                >> 0x17U)))
                                                            ? 
                                                           (0x800000U 
                                                            | (0x7fffffU 
                                                               & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x17U]))
                                                            : 
                                                           (0x7fffffU 
                                                            & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x17U]))))));
    __PVT__mul_inst__DOT__product_normalised = (0xffffffffffffULL 
                                                & ((1U 
                                                    & (IData)(
                                                              (__PVT__mul_inst__DOT__product 
                                                               >> 0x2fU)))
                                                    ? __PVT__mul_inst__DOT__product
                                                    : 
                                                   VL_SHIFTL_QQI(48,48,32, __PVT__mul_inst__DOT__product, 1U)));
    __PVT__mul_inst__DOT__zero = ((~ (IData)(__PVT__mul_inst__DOT__Exception)) 
                                  & (0ULL == __PVT__mul_inst__DOT__product));
    __PVT__mul_inst__DOT__exponent = (0x1ffU & ((((0xffU 
                                                   & (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x17U] 
                                                      >> 0x17U)) 
                                                  + 
                                                  (0xffU 
                                                   & (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x17U] 
                                                      >> 0x17U))) 
                                                 - (IData)(0x7fU)) 
                                                + (1U 
                                                   & (IData)(
                                                             (__PVT__mul_inst__DOT__product 
                                                              >> 0x2fU)))));
    __PVT__add_inst__DOT__a_operand = ((IData)(__PVT__mul_inst__DOT__Exception)
                                        ? 0U : ((IData)(__PVT__mul_inst__DOT__zero)
                                                 ? 
                                                ((IData)(__PVT__mul_inst__DOT__sign) 
                                                 << 0x1fU)
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            ((0x100U 
                                                              == 
                                                              (0x180U 
                                                               & (IData)(__PVT__mul_inst__DOT__exponent))) 
                                                             & (~ (IData)(__PVT__mul_inst__DOT__zero)))))
                                                  ? 
                                                 (0x7f800000U 
                                                  | ((IData)(__PVT__mul_inst__DOT__sign) 
                                                     << 0x1fU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             ((0x180U 
                                                               == 
                                                               (0x180U 
                                                                & (IData)(__PVT__mul_inst__DOT__exponent))) 
                                                              & (~ (IData)(__PVT__mul_inst__DOT__zero)))))
                                                   ? 
                                                  ((IData)(__PVT__mul_inst__DOT__sign) 
                                                   << 0x1fU)
                                                   : 
                                                  (((IData)(__PVT__mul_inst__DOT__sign) 
                                                    << 0x1fU) 
                                                   | ((0x7f800000U 
                                                       & ((IData)(__PVT__mul_inst__DOT__exponent) 
                                                          << 0x17U)) 
                                                      | (0x7fffffU 
                                                         & ((IData)(
                                                                    (__PVT__mul_inst__DOT__product_normalised 
                                                                     >> 0x18U)) 
                                                            + 
                                                            ((IData)(
                                                                     (__PVT__mul_inst__DOT__product_normalised 
                                                                      >> 0x17U)) 
                                                             & (0U 
                                                                != 
                                                                (0x7fffffU 
                                                                 & (IData)(__PVT__mul_inst__DOT__product_normalised))))))))))));
    if (((0x7fffffffU & __PVT__add_inst__DOT__a_operand) 
         < (0x7fffffffU & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_c[0x17U]))) {
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
            = (IData)((((QData)((IData)(vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_c[0x17U])) 
                        << 0x20U) | (QData)((IData)(__PVT__add_inst__DOT__a_operand))));
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            = (IData)(((((QData)((IData)(vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_c[0x17U])) 
                         << 0x20U) | (QData)((IData)(__PVT__add_inst__DOT__a_operand))) 
                       >> 0x20U));
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[2U] = 1U;
    } else {
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
            = (IData)((((QData)((IData)(__PVT__add_inst__DOT__a_operand)) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_c[0x17U]))));
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            = (IData)(((((QData)((IData)(__PVT__add_inst__DOT__a_operand)) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_c[0x17U]))) 
                       >> 0x20U));
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[2U] = 0U;
    }
    add_inst__DOT____VdfgRegularize_ha816c9b8_0_2 = 
        ((0U != (0xffU & (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                          >> 0x17U))) ? (0x800000U 
                                         | (0x7fffffU 
                                            & vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U]))
          : (0x7fffffU & vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U]));
    vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_1 
        = ((vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            ^ vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U]) 
           >> 0x1fU);
    __PVT__add_inst__DOT__exponent_diff = (0xffU & 
                                           (((vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                              << 9U) 
                                             | (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                >> 0x17U)) 
                                            - ((vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                << 9U) 
                                               | (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                  >> 0x17U))));
    __PVT__add_inst__DOT__significand_b_add_sub = (0xffffffU 
                                                   & VL_SHIFTR_III(24,24,8, 
                                                                   ((0U 
                                                                     != 
                                                                     (0xffU 
                                                                      & (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                                         >> 0x17U)))
                                                                     ? 
                                                                    (0x800000U 
                                                                     | (0x7fffffU 
                                                                        & vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U]))
                                                                     : 
                                                                    (0x7fffffU 
                                                                     & vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U])), (IData)(__PVT__add_inst__DOT__exponent_diff)));
    __PVT__add_inst__DOT__perform = ((0xffU & (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                               >> 0x17U)) 
                                     == (0xffU & ((
                                                   (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                    << 9U) 
                                                   | (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                      >> 0x17U)) 
                                                  + (IData)(__PVT__add_inst__DOT__exponent_diff))));
    vlSelfRef.__PVT__add_inst__DOT__significand_add 
        = (((~ (IData)(vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_1)) 
            & (IData)(__PVT__add_inst__DOT__perform))
            ? (0x1ffffffU & (add_inst__DOT____VdfgRegularize_ha816c9b8_0_2 
                             + __PVT__add_inst__DOT__significand_b_add_sub))
            : 0U);
    __PVT__add_inst__DOT__significand_sub = ((IData)(__PVT__add_inst__DOT__perform)
                                              ? (0x1ffffffU 
                                                 & (add_inst__DOT____VdfgRegularize_ha816c9b8_0_2 
                                                    + 
                                                    (((IData)(vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_1) 
                                                      & (IData)(__PVT__add_inst__DOT__perform))
                                                      ? 
                                                     (0xffffffU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ __PVT__add_inst__DOT__significand_b_add_sub)))
                                                      : 0U)))
                                              : 0U);
    if (((((((((0x1800000U == (0x1800000U & __PVT__add_inst__DOT__significand_sub)) 
               | (0x1400000U == (0x1c00000U & __PVT__add_inst__DOT__significand_sub))) 
              | (0x1200000U == (0x1e00000U & __PVT__add_inst__DOT__significand_sub))) 
             | (0x1100000U == (0x1f00000U & __PVT__add_inst__DOT__significand_sub))) 
            | (0x1080000U == (0x1f80000U & __PVT__add_inst__DOT__significand_sub))) 
           | (0x1040000U == (0x1fc0000U & __PVT__add_inst__DOT__significand_sub))) 
          | (0x1020000U == (0x1fe0000U & __PVT__add_inst__DOT__significand_sub))) 
         | (0x1010000U == (0x1ff0000U & __PVT__add_inst__DOT__significand_sub)))) {
        if ((0x1800000U == (0x1800000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & __PVT__add_inst__DOT__significand_sub);
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0U;
        } else if ((0x1400000U == (0x1c00000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 1U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 1U;
        } else if ((0x1200000U == (0x1e00000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 2U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 2U;
        } else if ((0x1100000U == (0x1f00000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 3U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 3U;
        } else if ((0x1080000U == (0x1f80000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 4U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 4U;
        } else if ((0x1040000U == (0x1fc0000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 5U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 5U;
        } else if ((0x1020000U == (0x1fe0000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 6U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 6U;
        } else {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 7U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 7U;
        }
    } else if (((((((((0x1008000U == (0x1ff8000U & __PVT__add_inst__DOT__significand_sub)) 
                      | (0x1004000U == (0x1ffc000U 
                                        & __PVT__add_inst__DOT__significand_sub))) 
                     | (0x1002000U == (0x1ffe000U & __PVT__add_inst__DOT__significand_sub))) 
                    | (0x1001000U == (0x1fff000U & __PVT__add_inst__DOT__significand_sub))) 
                   | (0x1000800U == (0x1fff800U & __PVT__add_inst__DOT__significand_sub))) 
                  | (0x1000400U == (0x1fffc00U & __PVT__add_inst__DOT__significand_sub))) 
                 | (0x1000200U == (0x1fffe00U & __PVT__add_inst__DOT__significand_sub))) 
                | (0x1000100U == (0x1ffff00U & __PVT__add_inst__DOT__significand_sub)))) {
        if ((0x1008000U == (0x1ff8000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 8U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 8U;
        } else if ((0x1004000U == (0x1ffc000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 9U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 9U;
        } else if ((0x1002000U == (0x1ffe000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xaU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xaU;
        } else if ((0x1001000U == (0x1fff000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xbU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xbU;
        } else if ((0x1000800U == (0x1fff800U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xcU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xcU;
        } else if ((0x1000400U == (0x1fffc00U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xdU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xdU;
        } else if ((0x1000200U == (0x1fffe00U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xeU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xeU;
        } else {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xfU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xfU;
        }
    } else if (((((((((0x1000080U == (0x1ffff80U & __PVT__add_inst__DOT__significand_sub)) 
                      | (0x1000040U == (0x1ffffc0U 
                                        & __PVT__add_inst__DOT__significand_sub))) 
                     | (0x1000020U == (0x1ffffe0U & __PVT__add_inst__DOT__significand_sub))) 
                    | (0x1000010U == (0x1fffff0U & __PVT__add_inst__DOT__significand_sub))) 
                   | (0x1000008U == (0x1fffff8U & __PVT__add_inst__DOT__significand_sub))) 
                  | (0x1000004U == (0x1fffffcU & __PVT__add_inst__DOT__significand_sub))) 
                 | (0x1000002U == (0x1fffffeU & __PVT__add_inst__DOT__significand_sub))) 
                | (0x1000001U == __PVT__add_inst__DOT__significand_sub))) {
        if ((0x1000080U == (0x1ffff80U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x10U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x10U;
        } else if ((0x1000040U == (0x1ffffc0U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x11U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x11U;
        } else if ((0x1000020U == (0x1ffffe0U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x12U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x12U;
        } else if ((0x1000010U == (0x1fffff0U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x13U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x13U;
        } else if ((0x1000008U == (0x1fffff8U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x14U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x14U;
        } else if ((0x1000004U == (0x1fffffcU & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x15U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x15U;
        } else if ((0x1000002U == (0x1fffffeU & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x16U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x16U;
        } else {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x17U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x17U;
        }
    } else if ((0x1000000U == __PVT__add_inst__DOT__significand_sub)) {
        vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
            = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x18U));
        vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x18U;
    } else {
        vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
            = (0x1ffffffU & ((IData)(1U) + (~ __PVT__add_inst__DOT__significand_sub)));
        vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0U;
    }
}

VL_INLINE_OPT void Vtest_oc_tiled_matmul_FMA___nba_sequent__TOP__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__24__KET____DOT__fma_inst__0(Vtest_oc_tiled_matmul_FMA* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_oc_tiled_matmul_FMA___nba_sequent__TOP__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__24__KET____DOT__fma_inst__0\n"); );
    Vtest_oc_tiled_matmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__mul_inst__DOT__Exception;
    __PVT__mul_inst__DOT__Exception = 0;
    CData/*0:0*/ __PVT__mul_inst__DOT__sign;
    __PVT__mul_inst__DOT__sign = 0;
    CData/*0:0*/ __PVT__mul_inst__DOT__zero;
    __PVT__mul_inst__DOT__zero = 0;
    SData/*8:0*/ __PVT__mul_inst__DOT__exponent;
    __PVT__mul_inst__DOT__exponent = 0;
    QData/*47:0*/ __PVT__mul_inst__DOT__product;
    __PVT__mul_inst__DOT__product = 0;
    QData/*47:0*/ __PVT__mul_inst__DOT__product_normalised;
    __PVT__mul_inst__DOT__product_normalised = 0;
    IData/*31:0*/ __PVT__add_inst__DOT__a_operand;
    __PVT__add_inst__DOT__a_operand = 0;
    CData/*7:0*/ __PVT__add_inst__DOT__exponent_diff;
    __PVT__add_inst__DOT__exponent_diff = 0;
    IData/*23:0*/ __PVT__add_inst__DOT__significand_b_add_sub;
    __PVT__add_inst__DOT__significand_b_add_sub = 0;
    IData/*24:0*/ __PVT__add_inst__DOT__significand_sub;
    __PVT__add_inst__DOT__significand_sub = 0;
    CData/*0:0*/ __PVT__add_inst__DOT__perform;
    __PVT__add_inst__DOT__perform = 0;
    IData/*24:0*/ add_inst__DOT____VdfgRegularize_ha816c9b8_0_2;
    add_inst__DOT____VdfgRegularize_ha816c9b8_0_2 = 0;
    // Body
    __PVT__mul_inst__DOT__sign = ((vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x18U] 
                                   ^ vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x18U]) 
                                  >> 0x1fU);
    __PVT__mul_inst__DOT__Exception = ((0xffU == (0xffU 
                                                  & (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x18U] 
                                                     >> 0x17U))) 
                                       | (0xffU == 
                                          (0xffU & 
                                           (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x18U] 
                                            >> 0x17U))));
    __PVT__mul_inst__DOT__product = (0xffffffffffffULL 
                                     & ((QData)((IData)(
                                                        ((0U 
                                                          != 
                                                          (0xffU 
                                                           & (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x18U] 
                                                              >> 0x17U)))
                                                          ? 
                                                         (0x800000U 
                                                          | (0x7fffffU 
                                                             & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x18U]))
                                                          : 
                                                         (0x7fffffU 
                                                          & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x18U])))) 
                                        * (QData)((IData)(
                                                          ((0U 
                                                            != 
                                                            (0xffU 
                                                             & (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x18U] 
                                                                >> 0x17U)))
                                                            ? 
                                                           (0x800000U 
                                                            | (0x7fffffU 
                                                               & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x18U]))
                                                            : 
                                                           (0x7fffffU 
                                                            & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x18U]))))));
    __PVT__mul_inst__DOT__product_normalised = (0xffffffffffffULL 
                                                & ((1U 
                                                    & (IData)(
                                                              (__PVT__mul_inst__DOT__product 
                                                               >> 0x2fU)))
                                                    ? __PVT__mul_inst__DOT__product
                                                    : 
                                                   VL_SHIFTL_QQI(48,48,32, __PVT__mul_inst__DOT__product, 1U)));
    __PVT__mul_inst__DOT__zero = ((~ (IData)(__PVT__mul_inst__DOT__Exception)) 
                                  & (0ULL == __PVT__mul_inst__DOT__product));
    __PVT__mul_inst__DOT__exponent = (0x1ffU & ((((0xffU 
                                                   & (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x18U] 
                                                      >> 0x17U)) 
                                                  + 
                                                  (0xffU 
                                                   & (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x18U] 
                                                      >> 0x17U))) 
                                                 - (IData)(0x7fU)) 
                                                + (1U 
                                                   & (IData)(
                                                             (__PVT__mul_inst__DOT__product 
                                                              >> 0x2fU)))));
    __PVT__add_inst__DOT__a_operand = ((IData)(__PVT__mul_inst__DOT__Exception)
                                        ? 0U : ((IData)(__PVT__mul_inst__DOT__zero)
                                                 ? 
                                                ((IData)(__PVT__mul_inst__DOT__sign) 
                                                 << 0x1fU)
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            ((0x100U 
                                                              == 
                                                              (0x180U 
                                                               & (IData)(__PVT__mul_inst__DOT__exponent))) 
                                                             & (~ (IData)(__PVT__mul_inst__DOT__zero)))))
                                                  ? 
                                                 (0x7f800000U 
                                                  | ((IData)(__PVT__mul_inst__DOT__sign) 
                                                     << 0x1fU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             ((0x180U 
                                                               == 
                                                               (0x180U 
                                                                & (IData)(__PVT__mul_inst__DOT__exponent))) 
                                                              & (~ (IData)(__PVT__mul_inst__DOT__zero)))))
                                                   ? 
                                                  ((IData)(__PVT__mul_inst__DOT__sign) 
                                                   << 0x1fU)
                                                   : 
                                                  (((IData)(__PVT__mul_inst__DOT__sign) 
                                                    << 0x1fU) 
                                                   | ((0x7f800000U 
                                                       & ((IData)(__PVT__mul_inst__DOT__exponent) 
                                                          << 0x17U)) 
                                                      | (0x7fffffU 
                                                         & ((IData)(
                                                                    (__PVT__mul_inst__DOT__product_normalised 
                                                                     >> 0x18U)) 
                                                            + 
                                                            ((IData)(
                                                                     (__PVT__mul_inst__DOT__product_normalised 
                                                                      >> 0x17U)) 
                                                             & (0U 
                                                                != 
                                                                (0x7fffffU 
                                                                 & (IData)(__PVT__mul_inst__DOT__product_normalised))))))))))));
    if (((0x7fffffffU & __PVT__add_inst__DOT__a_operand) 
         < (0x7fffffffU & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_c[0x18U]))) {
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
            = (IData)((((QData)((IData)(vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_c[0x18U])) 
                        << 0x20U) | (QData)((IData)(__PVT__add_inst__DOT__a_operand))));
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            = (IData)(((((QData)((IData)(vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_c[0x18U])) 
                         << 0x20U) | (QData)((IData)(__PVT__add_inst__DOT__a_operand))) 
                       >> 0x20U));
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[2U] = 1U;
    } else {
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
            = (IData)((((QData)((IData)(__PVT__add_inst__DOT__a_operand)) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_c[0x18U]))));
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            = (IData)(((((QData)((IData)(__PVT__add_inst__DOT__a_operand)) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_c[0x18U]))) 
                       >> 0x20U));
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[2U] = 0U;
    }
    add_inst__DOT____VdfgRegularize_ha816c9b8_0_2 = 
        ((0U != (0xffU & (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                          >> 0x17U))) ? (0x800000U 
                                         | (0x7fffffU 
                                            & vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U]))
          : (0x7fffffU & vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U]));
    vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_1 
        = ((vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            ^ vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U]) 
           >> 0x1fU);
    __PVT__add_inst__DOT__exponent_diff = (0xffU & 
                                           (((vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                              << 9U) 
                                             | (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                >> 0x17U)) 
                                            - ((vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                << 9U) 
                                               | (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                  >> 0x17U))));
    __PVT__add_inst__DOT__significand_b_add_sub = (0xffffffU 
                                                   & VL_SHIFTR_III(24,24,8, 
                                                                   ((0U 
                                                                     != 
                                                                     (0xffU 
                                                                      & (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                                         >> 0x17U)))
                                                                     ? 
                                                                    (0x800000U 
                                                                     | (0x7fffffU 
                                                                        & vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U]))
                                                                     : 
                                                                    (0x7fffffU 
                                                                     & vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U])), (IData)(__PVT__add_inst__DOT__exponent_diff)));
    __PVT__add_inst__DOT__perform = ((0xffU & (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                               >> 0x17U)) 
                                     == (0xffU & ((
                                                   (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                    << 9U) 
                                                   | (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                      >> 0x17U)) 
                                                  + (IData)(__PVT__add_inst__DOT__exponent_diff))));
    vlSelfRef.__PVT__add_inst__DOT__significand_add 
        = (((~ (IData)(vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_1)) 
            & (IData)(__PVT__add_inst__DOT__perform))
            ? (0x1ffffffU & (add_inst__DOT____VdfgRegularize_ha816c9b8_0_2 
                             + __PVT__add_inst__DOT__significand_b_add_sub))
            : 0U);
    __PVT__add_inst__DOT__significand_sub = ((IData)(__PVT__add_inst__DOT__perform)
                                              ? (0x1ffffffU 
                                                 & (add_inst__DOT____VdfgRegularize_ha816c9b8_0_2 
                                                    + 
                                                    (((IData)(vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_1) 
                                                      & (IData)(__PVT__add_inst__DOT__perform))
                                                      ? 
                                                     (0xffffffU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ __PVT__add_inst__DOT__significand_b_add_sub)))
                                                      : 0U)))
                                              : 0U);
    if (((((((((0x1800000U == (0x1800000U & __PVT__add_inst__DOT__significand_sub)) 
               | (0x1400000U == (0x1c00000U & __PVT__add_inst__DOT__significand_sub))) 
              | (0x1200000U == (0x1e00000U & __PVT__add_inst__DOT__significand_sub))) 
             | (0x1100000U == (0x1f00000U & __PVT__add_inst__DOT__significand_sub))) 
            | (0x1080000U == (0x1f80000U & __PVT__add_inst__DOT__significand_sub))) 
           | (0x1040000U == (0x1fc0000U & __PVT__add_inst__DOT__significand_sub))) 
          | (0x1020000U == (0x1fe0000U & __PVT__add_inst__DOT__significand_sub))) 
         | (0x1010000U == (0x1ff0000U & __PVT__add_inst__DOT__significand_sub)))) {
        if ((0x1800000U == (0x1800000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & __PVT__add_inst__DOT__significand_sub);
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0U;
        } else if ((0x1400000U == (0x1c00000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 1U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 1U;
        } else if ((0x1200000U == (0x1e00000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 2U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 2U;
        } else if ((0x1100000U == (0x1f00000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 3U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 3U;
        } else if ((0x1080000U == (0x1f80000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 4U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 4U;
        } else if ((0x1040000U == (0x1fc0000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 5U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 5U;
        } else if ((0x1020000U == (0x1fe0000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 6U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 6U;
        } else {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 7U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 7U;
        }
    } else if (((((((((0x1008000U == (0x1ff8000U & __PVT__add_inst__DOT__significand_sub)) 
                      | (0x1004000U == (0x1ffc000U 
                                        & __PVT__add_inst__DOT__significand_sub))) 
                     | (0x1002000U == (0x1ffe000U & __PVT__add_inst__DOT__significand_sub))) 
                    | (0x1001000U == (0x1fff000U & __PVT__add_inst__DOT__significand_sub))) 
                   | (0x1000800U == (0x1fff800U & __PVT__add_inst__DOT__significand_sub))) 
                  | (0x1000400U == (0x1fffc00U & __PVT__add_inst__DOT__significand_sub))) 
                 | (0x1000200U == (0x1fffe00U & __PVT__add_inst__DOT__significand_sub))) 
                | (0x1000100U == (0x1ffff00U & __PVT__add_inst__DOT__significand_sub)))) {
        if ((0x1008000U == (0x1ff8000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 8U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 8U;
        } else if ((0x1004000U == (0x1ffc000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 9U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 9U;
        } else if ((0x1002000U == (0x1ffe000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xaU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xaU;
        } else if ((0x1001000U == (0x1fff000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xbU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xbU;
        } else if ((0x1000800U == (0x1fff800U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xcU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xcU;
        } else if ((0x1000400U == (0x1fffc00U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xdU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xdU;
        } else if ((0x1000200U == (0x1fffe00U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xeU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xeU;
        } else {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xfU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xfU;
        }
    } else if (((((((((0x1000080U == (0x1ffff80U & __PVT__add_inst__DOT__significand_sub)) 
                      | (0x1000040U == (0x1ffffc0U 
                                        & __PVT__add_inst__DOT__significand_sub))) 
                     | (0x1000020U == (0x1ffffe0U & __PVT__add_inst__DOT__significand_sub))) 
                    | (0x1000010U == (0x1fffff0U & __PVT__add_inst__DOT__significand_sub))) 
                   | (0x1000008U == (0x1fffff8U & __PVT__add_inst__DOT__significand_sub))) 
                  | (0x1000004U == (0x1fffffcU & __PVT__add_inst__DOT__significand_sub))) 
                 | (0x1000002U == (0x1fffffeU & __PVT__add_inst__DOT__significand_sub))) 
                | (0x1000001U == __PVT__add_inst__DOT__significand_sub))) {
        if ((0x1000080U == (0x1ffff80U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x10U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x10U;
        } else if ((0x1000040U == (0x1ffffc0U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x11U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x11U;
        } else if ((0x1000020U == (0x1ffffe0U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x12U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x12U;
        } else if ((0x1000010U == (0x1fffff0U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x13U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x13U;
        } else if ((0x1000008U == (0x1fffff8U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x14U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x14U;
        } else if ((0x1000004U == (0x1fffffcU & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x15U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x15U;
        } else if ((0x1000002U == (0x1fffffeU & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x16U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x16U;
        } else {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x17U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x17U;
        }
    } else if ((0x1000000U == __PVT__add_inst__DOT__significand_sub)) {
        vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
            = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x18U));
        vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x18U;
    } else {
        vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
            = (0x1ffffffU & ((IData)(1U) + (~ __PVT__add_inst__DOT__significand_sub)));
        vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0U;
    }
}

VL_INLINE_OPT void Vtest_oc_tiled_matmul_FMA___nba_sequent__TOP__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__25__KET____DOT__fma_inst__0(Vtest_oc_tiled_matmul_FMA* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_oc_tiled_matmul_FMA___nba_sequent__TOP__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__25__KET____DOT__fma_inst__0\n"); );
    Vtest_oc_tiled_matmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__mul_inst__DOT__Exception;
    __PVT__mul_inst__DOT__Exception = 0;
    CData/*0:0*/ __PVT__mul_inst__DOT__sign;
    __PVT__mul_inst__DOT__sign = 0;
    CData/*0:0*/ __PVT__mul_inst__DOT__zero;
    __PVT__mul_inst__DOT__zero = 0;
    SData/*8:0*/ __PVT__mul_inst__DOT__exponent;
    __PVT__mul_inst__DOT__exponent = 0;
    QData/*47:0*/ __PVT__mul_inst__DOT__product;
    __PVT__mul_inst__DOT__product = 0;
    QData/*47:0*/ __PVT__mul_inst__DOT__product_normalised;
    __PVT__mul_inst__DOT__product_normalised = 0;
    IData/*31:0*/ __PVT__add_inst__DOT__a_operand;
    __PVT__add_inst__DOT__a_operand = 0;
    CData/*7:0*/ __PVT__add_inst__DOT__exponent_diff;
    __PVT__add_inst__DOT__exponent_diff = 0;
    IData/*23:0*/ __PVT__add_inst__DOT__significand_b_add_sub;
    __PVT__add_inst__DOT__significand_b_add_sub = 0;
    IData/*24:0*/ __PVT__add_inst__DOT__significand_sub;
    __PVT__add_inst__DOT__significand_sub = 0;
    CData/*0:0*/ __PVT__add_inst__DOT__perform;
    __PVT__add_inst__DOT__perform = 0;
    IData/*24:0*/ add_inst__DOT____VdfgRegularize_ha816c9b8_0_2;
    add_inst__DOT____VdfgRegularize_ha816c9b8_0_2 = 0;
    // Body
    __PVT__mul_inst__DOT__sign = ((vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x19U] 
                                   ^ vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x19U]) 
                                  >> 0x1fU);
    __PVT__mul_inst__DOT__Exception = ((0xffU == (0xffU 
                                                  & (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x19U] 
                                                     >> 0x17U))) 
                                       | (0xffU == 
                                          (0xffU & 
                                           (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x19U] 
                                            >> 0x17U))));
    __PVT__mul_inst__DOT__product = (0xffffffffffffULL 
                                     & ((QData)((IData)(
                                                        ((0U 
                                                          != 
                                                          (0xffU 
                                                           & (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x19U] 
                                                              >> 0x17U)))
                                                          ? 
                                                         (0x800000U 
                                                          | (0x7fffffU 
                                                             & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x19U]))
                                                          : 
                                                         (0x7fffffU 
                                                          & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x19U])))) 
                                        * (QData)((IData)(
                                                          ((0U 
                                                            != 
                                                            (0xffU 
                                                             & (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x19U] 
                                                                >> 0x17U)))
                                                            ? 
                                                           (0x800000U 
                                                            | (0x7fffffU 
                                                               & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x19U]))
                                                            : 
                                                           (0x7fffffU 
                                                            & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x19U]))))));
    __PVT__mul_inst__DOT__product_normalised = (0xffffffffffffULL 
                                                & ((1U 
                                                    & (IData)(
                                                              (__PVT__mul_inst__DOT__product 
                                                               >> 0x2fU)))
                                                    ? __PVT__mul_inst__DOT__product
                                                    : 
                                                   VL_SHIFTL_QQI(48,48,32, __PVT__mul_inst__DOT__product, 1U)));
    __PVT__mul_inst__DOT__zero = ((~ (IData)(__PVT__mul_inst__DOT__Exception)) 
                                  & (0ULL == __PVT__mul_inst__DOT__product));
    __PVT__mul_inst__DOT__exponent = (0x1ffU & ((((0xffU 
                                                   & (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x19U] 
                                                      >> 0x17U)) 
                                                  + 
                                                  (0xffU 
                                                   & (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x19U] 
                                                      >> 0x17U))) 
                                                 - (IData)(0x7fU)) 
                                                + (1U 
                                                   & (IData)(
                                                             (__PVT__mul_inst__DOT__product 
                                                              >> 0x2fU)))));
    __PVT__add_inst__DOT__a_operand = ((IData)(__PVT__mul_inst__DOT__Exception)
                                        ? 0U : ((IData)(__PVT__mul_inst__DOT__zero)
                                                 ? 
                                                ((IData)(__PVT__mul_inst__DOT__sign) 
                                                 << 0x1fU)
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            ((0x100U 
                                                              == 
                                                              (0x180U 
                                                               & (IData)(__PVT__mul_inst__DOT__exponent))) 
                                                             & (~ (IData)(__PVT__mul_inst__DOT__zero)))))
                                                  ? 
                                                 (0x7f800000U 
                                                  | ((IData)(__PVT__mul_inst__DOT__sign) 
                                                     << 0x1fU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             ((0x180U 
                                                               == 
                                                               (0x180U 
                                                                & (IData)(__PVT__mul_inst__DOT__exponent))) 
                                                              & (~ (IData)(__PVT__mul_inst__DOT__zero)))))
                                                   ? 
                                                  ((IData)(__PVT__mul_inst__DOT__sign) 
                                                   << 0x1fU)
                                                   : 
                                                  (((IData)(__PVT__mul_inst__DOT__sign) 
                                                    << 0x1fU) 
                                                   | ((0x7f800000U 
                                                       & ((IData)(__PVT__mul_inst__DOT__exponent) 
                                                          << 0x17U)) 
                                                      | (0x7fffffU 
                                                         & ((IData)(
                                                                    (__PVT__mul_inst__DOT__product_normalised 
                                                                     >> 0x18U)) 
                                                            + 
                                                            ((IData)(
                                                                     (__PVT__mul_inst__DOT__product_normalised 
                                                                      >> 0x17U)) 
                                                             & (0U 
                                                                != 
                                                                (0x7fffffU 
                                                                 & (IData)(__PVT__mul_inst__DOT__product_normalised))))))))))));
    if (((0x7fffffffU & __PVT__add_inst__DOT__a_operand) 
         < (0x7fffffffU & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_c[0x19U]))) {
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
            = (IData)((((QData)((IData)(vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_c[0x19U])) 
                        << 0x20U) | (QData)((IData)(__PVT__add_inst__DOT__a_operand))));
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            = (IData)(((((QData)((IData)(vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_c[0x19U])) 
                         << 0x20U) | (QData)((IData)(__PVT__add_inst__DOT__a_operand))) 
                       >> 0x20U));
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[2U] = 1U;
    } else {
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
            = (IData)((((QData)((IData)(__PVT__add_inst__DOT__a_operand)) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_c[0x19U]))));
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            = (IData)(((((QData)((IData)(__PVT__add_inst__DOT__a_operand)) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_c[0x19U]))) 
                       >> 0x20U));
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[2U] = 0U;
    }
    add_inst__DOT____VdfgRegularize_ha816c9b8_0_2 = 
        ((0U != (0xffU & (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                          >> 0x17U))) ? (0x800000U 
                                         | (0x7fffffU 
                                            & vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U]))
          : (0x7fffffU & vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U]));
    vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_1 
        = ((vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            ^ vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U]) 
           >> 0x1fU);
    __PVT__add_inst__DOT__exponent_diff = (0xffU & 
                                           (((vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                              << 9U) 
                                             | (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                >> 0x17U)) 
                                            - ((vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                << 9U) 
                                               | (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                  >> 0x17U))));
    __PVT__add_inst__DOT__significand_b_add_sub = (0xffffffU 
                                                   & VL_SHIFTR_III(24,24,8, 
                                                                   ((0U 
                                                                     != 
                                                                     (0xffU 
                                                                      & (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                                         >> 0x17U)))
                                                                     ? 
                                                                    (0x800000U 
                                                                     | (0x7fffffU 
                                                                        & vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U]))
                                                                     : 
                                                                    (0x7fffffU 
                                                                     & vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U])), (IData)(__PVT__add_inst__DOT__exponent_diff)));
    __PVT__add_inst__DOT__perform = ((0xffU & (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                               >> 0x17U)) 
                                     == (0xffU & ((
                                                   (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                    << 9U) 
                                                   | (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                      >> 0x17U)) 
                                                  + (IData)(__PVT__add_inst__DOT__exponent_diff))));
    vlSelfRef.__PVT__add_inst__DOT__significand_add 
        = (((~ (IData)(vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_1)) 
            & (IData)(__PVT__add_inst__DOT__perform))
            ? (0x1ffffffU & (add_inst__DOT____VdfgRegularize_ha816c9b8_0_2 
                             + __PVT__add_inst__DOT__significand_b_add_sub))
            : 0U);
    __PVT__add_inst__DOT__significand_sub = ((IData)(__PVT__add_inst__DOT__perform)
                                              ? (0x1ffffffU 
                                                 & (add_inst__DOT____VdfgRegularize_ha816c9b8_0_2 
                                                    + 
                                                    (((IData)(vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_1) 
                                                      & (IData)(__PVT__add_inst__DOT__perform))
                                                      ? 
                                                     (0xffffffU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ __PVT__add_inst__DOT__significand_b_add_sub)))
                                                      : 0U)))
                                              : 0U);
    if (((((((((0x1800000U == (0x1800000U & __PVT__add_inst__DOT__significand_sub)) 
               | (0x1400000U == (0x1c00000U & __PVT__add_inst__DOT__significand_sub))) 
              | (0x1200000U == (0x1e00000U & __PVT__add_inst__DOT__significand_sub))) 
             | (0x1100000U == (0x1f00000U & __PVT__add_inst__DOT__significand_sub))) 
            | (0x1080000U == (0x1f80000U & __PVT__add_inst__DOT__significand_sub))) 
           | (0x1040000U == (0x1fc0000U & __PVT__add_inst__DOT__significand_sub))) 
          | (0x1020000U == (0x1fe0000U & __PVT__add_inst__DOT__significand_sub))) 
         | (0x1010000U == (0x1ff0000U & __PVT__add_inst__DOT__significand_sub)))) {
        if ((0x1800000U == (0x1800000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & __PVT__add_inst__DOT__significand_sub);
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0U;
        } else if ((0x1400000U == (0x1c00000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 1U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 1U;
        } else if ((0x1200000U == (0x1e00000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 2U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 2U;
        } else if ((0x1100000U == (0x1f00000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 3U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 3U;
        } else if ((0x1080000U == (0x1f80000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 4U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 4U;
        } else if ((0x1040000U == (0x1fc0000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 5U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 5U;
        } else if ((0x1020000U == (0x1fe0000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 6U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 6U;
        } else {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 7U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 7U;
        }
    } else if (((((((((0x1008000U == (0x1ff8000U & __PVT__add_inst__DOT__significand_sub)) 
                      | (0x1004000U == (0x1ffc000U 
                                        & __PVT__add_inst__DOT__significand_sub))) 
                     | (0x1002000U == (0x1ffe000U & __PVT__add_inst__DOT__significand_sub))) 
                    | (0x1001000U == (0x1fff000U & __PVT__add_inst__DOT__significand_sub))) 
                   | (0x1000800U == (0x1fff800U & __PVT__add_inst__DOT__significand_sub))) 
                  | (0x1000400U == (0x1fffc00U & __PVT__add_inst__DOT__significand_sub))) 
                 | (0x1000200U == (0x1fffe00U & __PVT__add_inst__DOT__significand_sub))) 
                | (0x1000100U == (0x1ffff00U & __PVT__add_inst__DOT__significand_sub)))) {
        if ((0x1008000U == (0x1ff8000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 8U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 8U;
        } else if ((0x1004000U == (0x1ffc000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 9U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 9U;
        } else if ((0x1002000U == (0x1ffe000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xaU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xaU;
        } else if ((0x1001000U == (0x1fff000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xbU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xbU;
        } else if ((0x1000800U == (0x1fff800U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xcU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xcU;
        } else if ((0x1000400U == (0x1fffc00U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xdU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xdU;
        } else if ((0x1000200U == (0x1fffe00U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xeU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xeU;
        } else {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xfU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xfU;
        }
    } else if (((((((((0x1000080U == (0x1ffff80U & __PVT__add_inst__DOT__significand_sub)) 
                      | (0x1000040U == (0x1ffffc0U 
                                        & __PVT__add_inst__DOT__significand_sub))) 
                     | (0x1000020U == (0x1ffffe0U & __PVT__add_inst__DOT__significand_sub))) 
                    | (0x1000010U == (0x1fffff0U & __PVT__add_inst__DOT__significand_sub))) 
                   | (0x1000008U == (0x1fffff8U & __PVT__add_inst__DOT__significand_sub))) 
                  | (0x1000004U == (0x1fffffcU & __PVT__add_inst__DOT__significand_sub))) 
                 | (0x1000002U == (0x1fffffeU & __PVT__add_inst__DOT__significand_sub))) 
                | (0x1000001U == __PVT__add_inst__DOT__significand_sub))) {
        if ((0x1000080U == (0x1ffff80U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x10U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x10U;
        } else if ((0x1000040U == (0x1ffffc0U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x11U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x11U;
        } else if ((0x1000020U == (0x1ffffe0U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x12U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x12U;
        } else if ((0x1000010U == (0x1fffff0U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x13U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x13U;
        } else if ((0x1000008U == (0x1fffff8U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x14U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x14U;
        } else if ((0x1000004U == (0x1fffffcU & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x15U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x15U;
        } else if ((0x1000002U == (0x1fffffeU & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x16U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x16U;
        } else {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x17U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x17U;
        }
    } else if ((0x1000000U == __PVT__add_inst__DOT__significand_sub)) {
        vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
            = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x18U));
        vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x18U;
    } else {
        vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
            = (0x1ffffffU & ((IData)(1U) + (~ __PVT__add_inst__DOT__significand_sub)));
        vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0U;
    }
}

VL_INLINE_OPT void Vtest_oc_tiled_matmul_FMA___nba_sequent__TOP__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__26__KET____DOT__fma_inst__0(Vtest_oc_tiled_matmul_FMA* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_oc_tiled_matmul_FMA___nba_sequent__TOP__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__26__KET____DOT__fma_inst__0\n"); );
    Vtest_oc_tiled_matmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__mul_inst__DOT__Exception;
    __PVT__mul_inst__DOT__Exception = 0;
    CData/*0:0*/ __PVT__mul_inst__DOT__sign;
    __PVT__mul_inst__DOT__sign = 0;
    CData/*0:0*/ __PVT__mul_inst__DOT__zero;
    __PVT__mul_inst__DOT__zero = 0;
    SData/*8:0*/ __PVT__mul_inst__DOT__exponent;
    __PVT__mul_inst__DOT__exponent = 0;
    QData/*47:0*/ __PVT__mul_inst__DOT__product;
    __PVT__mul_inst__DOT__product = 0;
    QData/*47:0*/ __PVT__mul_inst__DOT__product_normalised;
    __PVT__mul_inst__DOT__product_normalised = 0;
    IData/*31:0*/ __PVT__add_inst__DOT__a_operand;
    __PVT__add_inst__DOT__a_operand = 0;
    CData/*7:0*/ __PVT__add_inst__DOT__exponent_diff;
    __PVT__add_inst__DOT__exponent_diff = 0;
    IData/*23:0*/ __PVT__add_inst__DOT__significand_b_add_sub;
    __PVT__add_inst__DOT__significand_b_add_sub = 0;
    IData/*24:0*/ __PVT__add_inst__DOT__significand_sub;
    __PVT__add_inst__DOT__significand_sub = 0;
    CData/*0:0*/ __PVT__add_inst__DOT__perform;
    __PVT__add_inst__DOT__perform = 0;
    IData/*24:0*/ add_inst__DOT____VdfgRegularize_ha816c9b8_0_2;
    add_inst__DOT____VdfgRegularize_ha816c9b8_0_2 = 0;
    // Body
    __PVT__mul_inst__DOT__sign = ((vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x1aU] 
                                   ^ vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x1aU]) 
                                  >> 0x1fU);
    __PVT__mul_inst__DOT__Exception = ((0xffU == (0xffU 
                                                  & (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x1aU] 
                                                     >> 0x17U))) 
                                       | (0xffU == 
                                          (0xffU & 
                                           (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x1aU] 
                                            >> 0x17U))));
    __PVT__mul_inst__DOT__product = (0xffffffffffffULL 
                                     & ((QData)((IData)(
                                                        ((0U 
                                                          != 
                                                          (0xffU 
                                                           & (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x1aU] 
                                                              >> 0x17U)))
                                                          ? 
                                                         (0x800000U 
                                                          | (0x7fffffU 
                                                             & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x1aU]))
                                                          : 
                                                         (0x7fffffU 
                                                          & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x1aU])))) 
                                        * (QData)((IData)(
                                                          ((0U 
                                                            != 
                                                            (0xffU 
                                                             & (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x1aU] 
                                                                >> 0x17U)))
                                                            ? 
                                                           (0x800000U 
                                                            | (0x7fffffU 
                                                               & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x1aU]))
                                                            : 
                                                           (0x7fffffU 
                                                            & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x1aU]))))));
    __PVT__mul_inst__DOT__product_normalised = (0xffffffffffffULL 
                                                & ((1U 
                                                    & (IData)(
                                                              (__PVT__mul_inst__DOT__product 
                                                               >> 0x2fU)))
                                                    ? __PVT__mul_inst__DOT__product
                                                    : 
                                                   VL_SHIFTL_QQI(48,48,32, __PVT__mul_inst__DOT__product, 1U)));
    __PVT__mul_inst__DOT__zero = ((~ (IData)(__PVT__mul_inst__DOT__Exception)) 
                                  & (0ULL == __PVT__mul_inst__DOT__product));
    __PVT__mul_inst__DOT__exponent = (0x1ffU & ((((0xffU 
                                                   & (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x1aU] 
                                                      >> 0x17U)) 
                                                  + 
                                                  (0xffU 
                                                   & (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x1aU] 
                                                      >> 0x17U))) 
                                                 - (IData)(0x7fU)) 
                                                + (1U 
                                                   & (IData)(
                                                             (__PVT__mul_inst__DOT__product 
                                                              >> 0x2fU)))));
    __PVT__add_inst__DOT__a_operand = ((IData)(__PVT__mul_inst__DOT__Exception)
                                        ? 0U : ((IData)(__PVT__mul_inst__DOT__zero)
                                                 ? 
                                                ((IData)(__PVT__mul_inst__DOT__sign) 
                                                 << 0x1fU)
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            ((0x100U 
                                                              == 
                                                              (0x180U 
                                                               & (IData)(__PVT__mul_inst__DOT__exponent))) 
                                                             & (~ (IData)(__PVT__mul_inst__DOT__zero)))))
                                                  ? 
                                                 (0x7f800000U 
                                                  | ((IData)(__PVT__mul_inst__DOT__sign) 
                                                     << 0x1fU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             ((0x180U 
                                                               == 
                                                               (0x180U 
                                                                & (IData)(__PVT__mul_inst__DOT__exponent))) 
                                                              & (~ (IData)(__PVT__mul_inst__DOT__zero)))))
                                                   ? 
                                                  ((IData)(__PVT__mul_inst__DOT__sign) 
                                                   << 0x1fU)
                                                   : 
                                                  (((IData)(__PVT__mul_inst__DOT__sign) 
                                                    << 0x1fU) 
                                                   | ((0x7f800000U 
                                                       & ((IData)(__PVT__mul_inst__DOT__exponent) 
                                                          << 0x17U)) 
                                                      | (0x7fffffU 
                                                         & ((IData)(
                                                                    (__PVT__mul_inst__DOT__product_normalised 
                                                                     >> 0x18U)) 
                                                            + 
                                                            ((IData)(
                                                                     (__PVT__mul_inst__DOT__product_normalised 
                                                                      >> 0x17U)) 
                                                             & (0U 
                                                                != 
                                                                (0x7fffffU 
                                                                 & (IData)(__PVT__mul_inst__DOT__product_normalised))))))))))));
    if (((0x7fffffffU & __PVT__add_inst__DOT__a_operand) 
         < (0x7fffffffU & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_c[0x1aU]))) {
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
            = (IData)((((QData)((IData)(vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_c[0x1aU])) 
                        << 0x20U) | (QData)((IData)(__PVT__add_inst__DOT__a_operand))));
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            = (IData)(((((QData)((IData)(vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_c[0x1aU])) 
                         << 0x20U) | (QData)((IData)(__PVT__add_inst__DOT__a_operand))) 
                       >> 0x20U));
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[2U] = 1U;
    } else {
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
            = (IData)((((QData)((IData)(__PVT__add_inst__DOT__a_operand)) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_c[0x1aU]))));
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            = (IData)(((((QData)((IData)(__PVT__add_inst__DOT__a_operand)) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_c[0x1aU]))) 
                       >> 0x20U));
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[2U] = 0U;
    }
    add_inst__DOT____VdfgRegularize_ha816c9b8_0_2 = 
        ((0U != (0xffU & (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                          >> 0x17U))) ? (0x800000U 
                                         | (0x7fffffU 
                                            & vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U]))
          : (0x7fffffU & vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U]));
    vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_1 
        = ((vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            ^ vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U]) 
           >> 0x1fU);
    __PVT__add_inst__DOT__exponent_diff = (0xffU & 
                                           (((vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                              << 9U) 
                                             | (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                >> 0x17U)) 
                                            - ((vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                << 9U) 
                                               | (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                  >> 0x17U))));
    __PVT__add_inst__DOT__significand_b_add_sub = (0xffffffU 
                                                   & VL_SHIFTR_III(24,24,8, 
                                                                   ((0U 
                                                                     != 
                                                                     (0xffU 
                                                                      & (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                                         >> 0x17U)))
                                                                     ? 
                                                                    (0x800000U 
                                                                     | (0x7fffffU 
                                                                        & vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U]))
                                                                     : 
                                                                    (0x7fffffU 
                                                                     & vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U])), (IData)(__PVT__add_inst__DOT__exponent_diff)));
    __PVT__add_inst__DOT__perform = ((0xffU & (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                               >> 0x17U)) 
                                     == (0xffU & ((
                                                   (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                    << 9U) 
                                                   | (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                      >> 0x17U)) 
                                                  + (IData)(__PVT__add_inst__DOT__exponent_diff))));
    vlSelfRef.__PVT__add_inst__DOT__significand_add 
        = (((~ (IData)(vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_1)) 
            & (IData)(__PVT__add_inst__DOT__perform))
            ? (0x1ffffffU & (add_inst__DOT____VdfgRegularize_ha816c9b8_0_2 
                             + __PVT__add_inst__DOT__significand_b_add_sub))
            : 0U);
    __PVT__add_inst__DOT__significand_sub = ((IData)(__PVT__add_inst__DOT__perform)
                                              ? (0x1ffffffU 
                                                 & (add_inst__DOT____VdfgRegularize_ha816c9b8_0_2 
                                                    + 
                                                    (((IData)(vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_1) 
                                                      & (IData)(__PVT__add_inst__DOT__perform))
                                                      ? 
                                                     (0xffffffU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ __PVT__add_inst__DOT__significand_b_add_sub)))
                                                      : 0U)))
                                              : 0U);
    if (((((((((0x1800000U == (0x1800000U & __PVT__add_inst__DOT__significand_sub)) 
               | (0x1400000U == (0x1c00000U & __PVT__add_inst__DOT__significand_sub))) 
              | (0x1200000U == (0x1e00000U & __PVT__add_inst__DOT__significand_sub))) 
             | (0x1100000U == (0x1f00000U & __PVT__add_inst__DOT__significand_sub))) 
            | (0x1080000U == (0x1f80000U & __PVT__add_inst__DOT__significand_sub))) 
           | (0x1040000U == (0x1fc0000U & __PVT__add_inst__DOT__significand_sub))) 
          | (0x1020000U == (0x1fe0000U & __PVT__add_inst__DOT__significand_sub))) 
         | (0x1010000U == (0x1ff0000U & __PVT__add_inst__DOT__significand_sub)))) {
        if ((0x1800000U == (0x1800000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & __PVT__add_inst__DOT__significand_sub);
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0U;
        } else if ((0x1400000U == (0x1c00000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 1U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 1U;
        } else if ((0x1200000U == (0x1e00000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 2U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 2U;
        } else if ((0x1100000U == (0x1f00000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 3U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 3U;
        } else if ((0x1080000U == (0x1f80000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 4U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 4U;
        } else if ((0x1040000U == (0x1fc0000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 5U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 5U;
        } else if ((0x1020000U == (0x1fe0000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 6U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 6U;
        } else {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 7U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 7U;
        }
    } else if (((((((((0x1008000U == (0x1ff8000U & __PVT__add_inst__DOT__significand_sub)) 
                      | (0x1004000U == (0x1ffc000U 
                                        & __PVT__add_inst__DOT__significand_sub))) 
                     | (0x1002000U == (0x1ffe000U & __PVT__add_inst__DOT__significand_sub))) 
                    | (0x1001000U == (0x1fff000U & __PVT__add_inst__DOT__significand_sub))) 
                   | (0x1000800U == (0x1fff800U & __PVT__add_inst__DOT__significand_sub))) 
                  | (0x1000400U == (0x1fffc00U & __PVT__add_inst__DOT__significand_sub))) 
                 | (0x1000200U == (0x1fffe00U & __PVT__add_inst__DOT__significand_sub))) 
                | (0x1000100U == (0x1ffff00U & __PVT__add_inst__DOT__significand_sub)))) {
        if ((0x1008000U == (0x1ff8000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 8U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 8U;
        } else if ((0x1004000U == (0x1ffc000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 9U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 9U;
        } else if ((0x1002000U == (0x1ffe000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xaU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xaU;
        } else if ((0x1001000U == (0x1fff000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xbU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xbU;
        } else if ((0x1000800U == (0x1fff800U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xcU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xcU;
        } else if ((0x1000400U == (0x1fffc00U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xdU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xdU;
        } else if ((0x1000200U == (0x1fffe00U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xeU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xeU;
        } else {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xfU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xfU;
        }
    } else if (((((((((0x1000080U == (0x1ffff80U & __PVT__add_inst__DOT__significand_sub)) 
                      | (0x1000040U == (0x1ffffc0U 
                                        & __PVT__add_inst__DOT__significand_sub))) 
                     | (0x1000020U == (0x1ffffe0U & __PVT__add_inst__DOT__significand_sub))) 
                    | (0x1000010U == (0x1fffff0U & __PVT__add_inst__DOT__significand_sub))) 
                   | (0x1000008U == (0x1fffff8U & __PVT__add_inst__DOT__significand_sub))) 
                  | (0x1000004U == (0x1fffffcU & __PVT__add_inst__DOT__significand_sub))) 
                 | (0x1000002U == (0x1fffffeU & __PVT__add_inst__DOT__significand_sub))) 
                | (0x1000001U == __PVT__add_inst__DOT__significand_sub))) {
        if ((0x1000080U == (0x1ffff80U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x10U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x10U;
        } else if ((0x1000040U == (0x1ffffc0U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x11U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x11U;
        } else if ((0x1000020U == (0x1ffffe0U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x12U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x12U;
        } else if ((0x1000010U == (0x1fffff0U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x13U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x13U;
        } else if ((0x1000008U == (0x1fffff8U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x14U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x14U;
        } else if ((0x1000004U == (0x1fffffcU & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x15U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x15U;
        } else if ((0x1000002U == (0x1fffffeU & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x16U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x16U;
        } else {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x17U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x17U;
        }
    } else if ((0x1000000U == __PVT__add_inst__DOT__significand_sub)) {
        vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
            = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x18U));
        vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x18U;
    } else {
        vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
            = (0x1ffffffU & ((IData)(1U) + (~ __PVT__add_inst__DOT__significand_sub)));
        vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0U;
    }
}

VL_INLINE_OPT void Vtest_oc_tiled_matmul_FMA___nba_sequent__TOP__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__27__KET____DOT__fma_inst__0(Vtest_oc_tiled_matmul_FMA* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_oc_tiled_matmul_FMA___nba_sequent__TOP__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__27__KET____DOT__fma_inst__0\n"); );
    Vtest_oc_tiled_matmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__mul_inst__DOT__Exception;
    __PVT__mul_inst__DOT__Exception = 0;
    CData/*0:0*/ __PVT__mul_inst__DOT__sign;
    __PVT__mul_inst__DOT__sign = 0;
    CData/*0:0*/ __PVT__mul_inst__DOT__zero;
    __PVT__mul_inst__DOT__zero = 0;
    SData/*8:0*/ __PVT__mul_inst__DOT__exponent;
    __PVT__mul_inst__DOT__exponent = 0;
    QData/*47:0*/ __PVT__mul_inst__DOT__product;
    __PVT__mul_inst__DOT__product = 0;
    QData/*47:0*/ __PVT__mul_inst__DOT__product_normalised;
    __PVT__mul_inst__DOT__product_normalised = 0;
    IData/*31:0*/ __PVT__add_inst__DOT__a_operand;
    __PVT__add_inst__DOT__a_operand = 0;
    CData/*7:0*/ __PVT__add_inst__DOT__exponent_diff;
    __PVT__add_inst__DOT__exponent_diff = 0;
    IData/*23:0*/ __PVT__add_inst__DOT__significand_b_add_sub;
    __PVT__add_inst__DOT__significand_b_add_sub = 0;
    IData/*24:0*/ __PVT__add_inst__DOT__significand_sub;
    __PVT__add_inst__DOT__significand_sub = 0;
    CData/*0:0*/ __PVT__add_inst__DOT__perform;
    __PVT__add_inst__DOT__perform = 0;
    IData/*24:0*/ add_inst__DOT____VdfgRegularize_ha816c9b8_0_2;
    add_inst__DOT____VdfgRegularize_ha816c9b8_0_2 = 0;
    // Body
    __PVT__mul_inst__DOT__sign = ((vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x1bU] 
                                   ^ vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x1bU]) 
                                  >> 0x1fU);
    __PVT__mul_inst__DOT__Exception = ((0xffU == (0xffU 
                                                  & (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x1bU] 
                                                     >> 0x17U))) 
                                       | (0xffU == 
                                          (0xffU & 
                                           (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x1bU] 
                                            >> 0x17U))));
    __PVT__mul_inst__DOT__product = (0xffffffffffffULL 
                                     & ((QData)((IData)(
                                                        ((0U 
                                                          != 
                                                          (0xffU 
                                                           & (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x1bU] 
                                                              >> 0x17U)))
                                                          ? 
                                                         (0x800000U 
                                                          | (0x7fffffU 
                                                             & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x1bU]))
                                                          : 
                                                         (0x7fffffU 
                                                          & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x1bU])))) 
                                        * (QData)((IData)(
                                                          ((0U 
                                                            != 
                                                            (0xffU 
                                                             & (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x1bU] 
                                                                >> 0x17U)))
                                                            ? 
                                                           (0x800000U 
                                                            | (0x7fffffU 
                                                               & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x1bU]))
                                                            : 
                                                           (0x7fffffU 
                                                            & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x1bU]))))));
    __PVT__mul_inst__DOT__product_normalised = (0xffffffffffffULL 
                                                & ((1U 
                                                    & (IData)(
                                                              (__PVT__mul_inst__DOT__product 
                                                               >> 0x2fU)))
                                                    ? __PVT__mul_inst__DOT__product
                                                    : 
                                                   VL_SHIFTL_QQI(48,48,32, __PVT__mul_inst__DOT__product, 1U)));
    __PVT__mul_inst__DOT__zero = ((~ (IData)(__PVT__mul_inst__DOT__Exception)) 
                                  & (0ULL == __PVT__mul_inst__DOT__product));
    __PVT__mul_inst__DOT__exponent = (0x1ffU & ((((0xffU 
                                                   & (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x1bU] 
                                                      >> 0x17U)) 
                                                  + 
                                                  (0xffU 
                                                   & (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x1bU] 
                                                      >> 0x17U))) 
                                                 - (IData)(0x7fU)) 
                                                + (1U 
                                                   & (IData)(
                                                             (__PVT__mul_inst__DOT__product 
                                                              >> 0x2fU)))));
    __PVT__add_inst__DOT__a_operand = ((IData)(__PVT__mul_inst__DOT__Exception)
                                        ? 0U : ((IData)(__PVT__mul_inst__DOT__zero)
                                                 ? 
                                                ((IData)(__PVT__mul_inst__DOT__sign) 
                                                 << 0x1fU)
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            ((0x100U 
                                                              == 
                                                              (0x180U 
                                                               & (IData)(__PVT__mul_inst__DOT__exponent))) 
                                                             & (~ (IData)(__PVT__mul_inst__DOT__zero)))))
                                                  ? 
                                                 (0x7f800000U 
                                                  | ((IData)(__PVT__mul_inst__DOT__sign) 
                                                     << 0x1fU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             ((0x180U 
                                                               == 
                                                               (0x180U 
                                                                & (IData)(__PVT__mul_inst__DOT__exponent))) 
                                                              & (~ (IData)(__PVT__mul_inst__DOT__zero)))))
                                                   ? 
                                                  ((IData)(__PVT__mul_inst__DOT__sign) 
                                                   << 0x1fU)
                                                   : 
                                                  (((IData)(__PVT__mul_inst__DOT__sign) 
                                                    << 0x1fU) 
                                                   | ((0x7f800000U 
                                                       & ((IData)(__PVT__mul_inst__DOT__exponent) 
                                                          << 0x17U)) 
                                                      | (0x7fffffU 
                                                         & ((IData)(
                                                                    (__PVT__mul_inst__DOT__product_normalised 
                                                                     >> 0x18U)) 
                                                            + 
                                                            ((IData)(
                                                                     (__PVT__mul_inst__DOT__product_normalised 
                                                                      >> 0x17U)) 
                                                             & (0U 
                                                                != 
                                                                (0x7fffffU 
                                                                 & (IData)(__PVT__mul_inst__DOT__product_normalised))))))))))));
    if (((0x7fffffffU & __PVT__add_inst__DOT__a_operand) 
         < (0x7fffffffU & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_c[0x1bU]))) {
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
            = (IData)((((QData)((IData)(vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_c[0x1bU])) 
                        << 0x20U) | (QData)((IData)(__PVT__add_inst__DOT__a_operand))));
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            = (IData)(((((QData)((IData)(vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_c[0x1bU])) 
                         << 0x20U) | (QData)((IData)(__PVT__add_inst__DOT__a_operand))) 
                       >> 0x20U));
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[2U] = 1U;
    } else {
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
            = (IData)((((QData)((IData)(__PVT__add_inst__DOT__a_operand)) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_c[0x1bU]))));
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            = (IData)(((((QData)((IData)(__PVT__add_inst__DOT__a_operand)) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_c[0x1bU]))) 
                       >> 0x20U));
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[2U] = 0U;
    }
    add_inst__DOT____VdfgRegularize_ha816c9b8_0_2 = 
        ((0U != (0xffU & (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                          >> 0x17U))) ? (0x800000U 
                                         | (0x7fffffU 
                                            & vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U]))
          : (0x7fffffU & vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U]));
    vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_1 
        = ((vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            ^ vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U]) 
           >> 0x1fU);
    __PVT__add_inst__DOT__exponent_diff = (0xffU & 
                                           (((vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                              << 9U) 
                                             | (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                >> 0x17U)) 
                                            - ((vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                << 9U) 
                                               | (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                  >> 0x17U))));
    __PVT__add_inst__DOT__significand_b_add_sub = (0xffffffU 
                                                   & VL_SHIFTR_III(24,24,8, 
                                                                   ((0U 
                                                                     != 
                                                                     (0xffU 
                                                                      & (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                                         >> 0x17U)))
                                                                     ? 
                                                                    (0x800000U 
                                                                     | (0x7fffffU 
                                                                        & vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U]))
                                                                     : 
                                                                    (0x7fffffU 
                                                                     & vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U])), (IData)(__PVT__add_inst__DOT__exponent_diff)));
    __PVT__add_inst__DOT__perform = ((0xffU & (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                               >> 0x17U)) 
                                     == (0xffU & ((
                                                   (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                    << 9U) 
                                                   | (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                      >> 0x17U)) 
                                                  + (IData)(__PVT__add_inst__DOT__exponent_diff))));
    vlSelfRef.__PVT__add_inst__DOT__significand_add 
        = (((~ (IData)(vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_1)) 
            & (IData)(__PVT__add_inst__DOT__perform))
            ? (0x1ffffffU & (add_inst__DOT____VdfgRegularize_ha816c9b8_0_2 
                             + __PVT__add_inst__DOT__significand_b_add_sub))
            : 0U);
    __PVT__add_inst__DOT__significand_sub = ((IData)(__PVT__add_inst__DOT__perform)
                                              ? (0x1ffffffU 
                                                 & (add_inst__DOT____VdfgRegularize_ha816c9b8_0_2 
                                                    + 
                                                    (((IData)(vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_1) 
                                                      & (IData)(__PVT__add_inst__DOT__perform))
                                                      ? 
                                                     (0xffffffU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ __PVT__add_inst__DOT__significand_b_add_sub)))
                                                      : 0U)))
                                              : 0U);
    if (((((((((0x1800000U == (0x1800000U & __PVT__add_inst__DOT__significand_sub)) 
               | (0x1400000U == (0x1c00000U & __PVT__add_inst__DOT__significand_sub))) 
              | (0x1200000U == (0x1e00000U & __PVT__add_inst__DOT__significand_sub))) 
             | (0x1100000U == (0x1f00000U & __PVT__add_inst__DOT__significand_sub))) 
            | (0x1080000U == (0x1f80000U & __PVT__add_inst__DOT__significand_sub))) 
           | (0x1040000U == (0x1fc0000U & __PVT__add_inst__DOT__significand_sub))) 
          | (0x1020000U == (0x1fe0000U & __PVT__add_inst__DOT__significand_sub))) 
         | (0x1010000U == (0x1ff0000U & __PVT__add_inst__DOT__significand_sub)))) {
        if ((0x1800000U == (0x1800000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & __PVT__add_inst__DOT__significand_sub);
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0U;
        } else if ((0x1400000U == (0x1c00000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 1U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 1U;
        } else if ((0x1200000U == (0x1e00000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 2U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 2U;
        } else if ((0x1100000U == (0x1f00000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 3U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 3U;
        } else if ((0x1080000U == (0x1f80000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 4U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 4U;
        } else if ((0x1040000U == (0x1fc0000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 5U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 5U;
        } else if ((0x1020000U == (0x1fe0000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 6U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 6U;
        } else {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 7U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 7U;
        }
    } else if (((((((((0x1008000U == (0x1ff8000U & __PVT__add_inst__DOT__significand_sub)) 
                      | (0x1004000U == (0x1ffc000U 
                                        & __PVT__add_inst__DOT__significand_sub))) 
                     | (0x1002000U == (0x1ffe000U & __PVT__add_inst__DOT__significand_sub))) 
                    | (0x1001000U == (0x1fff000U & __PVT__add_inst__DOT__significand_sub))) 
                   | (0x1000800U == (0x1fff800U & __PVT__add_inst__DOT__significand_sub))) 
                  | (0x1000400U == (0x1fffc00U & __PVT__add_inst__DOT__significand_sub))) 
                 | (0x1000200U == (0x1fffe00U & __PVT__add_inst__DOT__significand_sub))) 
                | (0x1000100U == (0x1ffff00U & __PVT__add_inst__DOT__significand_sub)))) {
        if ((0x1008000U == (0x1ff8000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 8U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 8U;
        } else if ((0x1004000U == (0x1ffc000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 9U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 9U;
        } else if ((0x1002000U == (0x1ffe000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xaU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xaU;
        } else if ((0x1001000U == (0x1fff000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xbU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xbU;
        } else if ((0x1000800U == (0x1fff800U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xcU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xcU;
        } else if ((0x1000400U == (0x1fffc00U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xdU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xdU;
        } else if ((0x1000200U == (0x1fffe00U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xeU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xeU;
        } else {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xfU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xfU;
        }
    } else if (((((((((0x1000080U == (0x1ffff80U & __PVT__add_inst__DOT__significand_sub)) 
                      | (0x1000040U == (0x1ffffc0U 
                                        & __PVT__add_inst__DOT__significand_sub))) 
                     | (0x1000020U == (0x1ffffe0U & __PVT__add_inst__DOT__significand_sub))) 
                    | (0x1000010U == (0x1fffff0U & __PVT__add_inst__DOT__significand_sub))) 
                   | (0x1000008U == (0x1fffff8U & __PVT__add_inst__DOT__significand_sub))) 
                  | (0x1000004U == (0x1fffffcU & __PVT__add_inst__DOT__significand_sub))) 
                 | (0x1000002U == (0x1fffffeU & __PVT__add_inst__DOT__significand_sub))) 
                | (0x1000001U == __PVT__add_inst__DOT__significand_sub))) {
        if ((0x1000080U == (0x1ffff80U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x10U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x10U;
        } else if ((0x1000040U == (0x1ffffc0U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x11U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x11U;
        } else if ((0x1000020U == (0x1ffffe0U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x12U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x12U;
        } else if ((0x1000010U == (0x1fffff0U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x13U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x13U;
        } else if ((0x1000008U == (0x1fffff8U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x14U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x14U;
        } else if ((0x1000004U == (0x1fffffcU & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x15U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x15U;
        } else if ((0x1000002U == (0x1fffffeU & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x16U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x16U;
        } else {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x17U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x17U;
        }
    } else if ((0x1000000U == __PVT__add_inst__DOT__significand_sub)) {
        vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
            = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x18U));
        vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x18U;
    } else {
        vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
            = (0x1ffffffU & ((IData)(1U) + (~ __PVT__add_inst__DOT__significand_sub)));
        vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0U;
    }
}

VL_INLINE_OPT void Vtest_oc_tiled_matmul_FMA___nba_sequent__TOP__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__28__KET____DOT__fma_inst__0(Vtest_oc_tiled_matmul_FMA* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_oc_tiled_matmul_FMA___nba_sequent__TOP__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__28__KET____DOT__fma_inst__0\n"); );
    Vtest_oc_tiled_matmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__mul_inst__DOT__Exception;
    __PVT__mul_inst__DOT__Exception = 0;
    CData/*0:0*/ __PVT__mul_inst__DOT__sign;
    __PVT__mul_inst__DOT__sign = 0;
    CData/*0:0*/ __PVT__mul_inst__DOT__zero;
    __PVT__mul_inst__DOT__zero = 0;
    SData/*8:0*/ __PVT__mul_inst__DOT__exponent;
    __PVT__mul_inst__DOT__exponent = 0;
    QData/*47:0*/ __PVT__mul_inst__DOT__product;
    __PVT__mul_inst__DOT__product = 0;
    QData/*47:0*/ __PVT__mul_inst__DOT__product_normalised;
    __PVT__mul_inst__DOT__product_normalised = 0;
    IData/*31:0*/ __PVT__add_inst__DOT__a_operand;
    __PVT__add_inst__DOT__a_operand = 0;
    CData/*7:0*/ __PVT__add_inst__DOT__exponent_diff;
    __PVT__add_inst__DOT__exponent_diff = 0;
    IData/*23:0*/ __PVT__add_inst__DOT__significand_b_add_sub;
    __PVT__add_inst__DOT__significand_b_add_sub = 0;
    IData/*24:0*/ __PVT__add_inst__DOT__significand_sub;
    __PVT__add_inst__DOT__significand_sub = 0;
    CData/*0:0*/ __PVT__add_inst__DOT__perform;
    __PVT__add_inst__DOT__perform = 0;
    IData/*24:0*/ add_inst__DOT____VdfgRegularize_ha816c9b8_0_2;
    add_inst__DOT____VdfgRegularize_ha816c9b8_0_2 = 0;
    // Body
    __PVT__mul_inst__DOT__sign = ((vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x1cU] 
                                   ^ vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x1cU]) 
                                  >> 0x1fU);
    __PVT__mul_inst__DOT__Exception = ((0xffU == (0xffU 
                                                  & (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x1cU] 
                                                     >> 0x17U))) 
                                       | (0xffU == 
                                          (0xffU & 
                                           (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x1cU] 
                                            >> 0x17U))));
    __PVT__mul_inst__DOT__product = (0xffffffffffffULL 
                                     & ((QData)((IData)(
                                                        ((0U 
                                                          != 
                                                          (0xffU 
                                                           & (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x1cU] 
                                                              >> 0x17U)))
                                                          ? 
                                                         (0x800000U 
                                                          | (0x7fffffU 
                                                             & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x1cU]))
                                                          : 
                                                         (0x7fffffU 
                                                          & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x1cU])))) 
                                        * (QData)((IData)(
                                                          ((0U 
                                                            != 
                                                            (0xffU 
                                                             & (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x1cU] 
                                                                >> 0x17U)))
                                                            ? 
                                                           (0x800000U 
                                                            | (0x7fffffU 
                                                               & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x1cU]))
                                                            : 
                                                           (0x7fffffU 
                                                            & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x1cU]))))));
    __PVT__mul_inst__DOT__product_normalised = (0xffffffffffffULL 
                                                & ((1U 
                                                    & (IData)(
                                                              (__PVT__mul_inst__DOT__product 
                                                               >> 0x2fU)))
                                                    ? __PVT__mul_inst__DOT__product
                                                    : 
                                                   VL_SHIFTL_QQI(48,48,32, __PVT__mul_inst__DOT__product, 1U)));
    __PVT__mul_inst__DOT__zero = ((~ (IData)(__PVT__mul_inst__DOT__Exception)) 
                                  & (0ULL == __PVT__mul_inst__DOT__product));
    __PVT__mul_inst__DOT__exponent = (0x1ffU & ((((0xffU 
                                                   & (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x1cU] 
                                                      >> 0x17U)) 
                                                  + 
                                                  (0xffU 
                                                   & (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x1cU] 
                                                      >> 0x17U))) 
                                                 - (IData)(0x7fU)) 
                                                + (1U 
                                                   & (IData)(
                                                             (__PVT__mul_inst__DOT__product 
                                                              >> 0x2fU)))));
    __PVT__add_inst__DOT__a_operand = ((IData)(__PVT__mul_inst__DOT__Exception)
                                        ? 0U : ((IData)(__PVT__mul_inst__DOT__zero)
                                                 ? 
                                                ((IData)(__PVT__mul_inst__DOT__sign) 
                                                 << 0x1fU)
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            ((0x100U 
                                                              == 
                                                              (0x180U 
                                                               & (IData)(__PVT__mul_inst__DOT__exponent))) 
                                                             & (~ (IData)(__PVT__mul_inst__DOT__zero)))))
                                                  ? 
                                                 (0x7f800000U 
                                                  | ((IData)(__PVT__mul_inst__DOT__sign) 
                                                     << 0x1fU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             ((0x180U 
                                                               == 
                                                               (0x180U 
                                                                & (IData)(__PVT__mul_inst__DOT__exponent))) 
                                                              & (~ (IData)(__PVT__mul_inst__DOT__zero)))))
                                                   ? 
                                                  ((IData)(__PVT__mul_inst__DOT__sign) 
                                                   << 0x1fU)
                                                   : 
                                                  (((IData)(__PVT__mul_inst__DOT__sign) 
                                                    << 0x1fU) 
                                                   | ((0x7f800000U 
                                                       & ((IData)(__PVT__mul_inst__DOT__exponent) 
                                                          << 0x17U)) 
                                                      | (0x7fffffU 
                                                         & ((IData)(
                                                                    (__PVT__mul_inst__DOT__product_normalised 
                                                                     >> 0x18U)) 
                                                            + 
                                                            ((IData)(
                                                                     (__PVT__mul_inst__DOT__product_normalised 
                                                                      >> 0x17U)) 
                                                             & (0U 
                                                                != 
                                                                (0x7fffffU 
                                                                 & (IData)(__PVT__mul_inst__DOT__product_normalised))))))))))));
    if (((0x7fffffffU & __PVT__add_inst__DOT__a_operand) 
         < (0x7fffffffU & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_c[0x1cU]))) {
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
            = (IData)((((QData)((IData)(vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_c[0x1cU])) 
                        << 0x20U) | (QData)((IData)(__PVT__add_inst__DOT__a_operand))));
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            = (IData)(((((QData)((IData)(vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_c[0x1cU])) 
                         << 0x20U) | (QData)((IData)(__PVT__add_inst__DOT__a_operand))) 
                       >> 0x20U));
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[2U] = 1U;
    } else {
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
            = (IData)((((QData)((IData)(__PVT__add_inst__DOT__a_operand)) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_c[0x1cU]))));
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            = (IData)(((((QData)((IData)(__PVT__add_inst__DOT__a_operand)) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_c[0x1cU]))) 
                       >> 0x20U));
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[2U] = 0U;
    }
    add_inst__DOT____VdfgRegularize_ha816c9b8_0_2 = 
        ((0U != (0xffU & (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                          >> 0x17U))) ? (0x800000U 
                                         | (0x7fffffU 
                                            & vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U]))
          : (0x7fffffU & vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U]));
    vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_1 
        = ((vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            ^ vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U]) 
           >> 0x1fU);
    __PVT__add_inst__DOT__exponent_diff = (0xffU & 
                                           (((vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                              << 9U) 
                                             | (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                >> 0x17U)) 
                                            - ((vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                << 9U) 
                                               | (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                  >> 0x17U))));
    __PVT__add_inst__DOT__significand_b_add_sub = (0xffffffU 
                                                   & VL_SHIFTR_III(24,24,8, 
                                                                   ((0U 
                                                                     != 
                                                                     (0xffU 
                                                                      & (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                                         >> 0x17U)))
                                                                     ? 
                                                                    (0x800000U 
                                                                     | (0x7fffffU 
                                                                        & vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U]))
                                                                     : 
                                                                    (0x7fffffU 
                                                                     & vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U])), (IData)(__PVT__add_inst__DOT__exponent_diff)));
    __PVT__add_inst__DOT__perform = ((0xffU & (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                               >> 0x17U)) 
                                     == (0xffU & ((
                                                   (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                    << 9U) 
                                                   | (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                      >> 0x17U)) 
                                                  + (IData)(__PVT__add_inst__DOT__exponent_diff))));
    vlSelfRef.__PVT__add_inst__DOT__significand_add 
        = (((~ (IData)(vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_1)) 
            & (IData)(__PVT__add_inst__DOT__perform))
            ? (0x1ffffffU & (add_inst__DOT____VdfgRegularize_ha816c9b8_0_2 
                             + __PVT__add_inst__DOT__significand_b_add_sub))
            : 0U);
    __PVT__add_inst__DOT__significand_sub = ((IData)(__PVT__add_inst__DOT__perform)
                                              ? (0x1ffffffU 
                                                 & (add_inst__DOT____VdfgRegularize_ha816c9b8_0_2 
                                                    + 
                                                    (((IData)(vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_1) 
                                                      & (IData)(__PVT__add_inst__DOT__perform))
                                                      ? 
                                                     (0xffffffU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ __PVT__add_inst__DOT__significand_b_add_sub)))
                                                      : 0U)))
                                              : 0U);
    if (((((((((0x1800000U == (0x1800000U & __PVT__add_inst__DOT__significand_sub)) 
               | (0x1400000U == (0x1c00000U & __PVT__add_inst__DOT__significand_sub))) 
              | (0x1200000U == (0x1e00000U & __PVT__add_inst__DOT__significand_sub))) 
             | (0x1100000U == (0x1f00000U & __PVT__add_inst__DOT__significand_sub))) 
            | (0x1080000U == (0x1f80000U & __PVT__add_inst__DOT__significand_sub))) 
           | (0x1040000U == (0x1fc0000U & __PVT__add_inst__DOT__significand_sub))) 
          | (0x1020000U == (0x1fe0000U & __PVT__add_inst__DOT__significand_sub))) 
         | (0x1010000U == (0x1ff0000U & __PVT__add_inst__DOT__significand_sub)))) {
        if ((0x1800000U == (0x1800000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & __PVT__add_inst__DOT__significand_sub);
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0U;
        } else if ((0x1400000U == (0x1c00000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 1U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 1U;
        } else if ((0x1200000U == (0x1e00000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 2U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 2U;
        } else if ((0x1100000U == (0x1f00000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 3U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 3U;
        } else if ((0x1080000U == (0x1f80000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 4U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 4U;
        } else if ((0x1040000U == (0x1fc0000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 5U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 5U;
        } else if ((0x1020000U == (0x1fe0000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 6U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 6U;
        } else {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 7U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 7U;
        }
    } else if (((((((((0x1008000U == (0x1ff8000U & __PVT__add_inst__DOT__significand_sub)) 
                      | (0x1004000U == (0x1ffc000U 
                                        & __PVT__add_inst__DOT__significand_sub))) 
                     | (0x1002000U == (0x1ffe000U & __PVT__add_inst__DOT__significand_sub))) 
                    | (0x1001000U == (0x1fff000U & __PVT__add_inst__DOT__significand_sub))) 
                   | (0x1000800U == (0x1fff800U & __PVT__add_inst__DOT__significand_sub))) 
                  | (0x1000400U == (0x1fffc00U & __PVT__add_inst__DOT__significand_sub))) 
                 | (0x1000200U == (0x1fffe00U & __PVT__add_inst__DOT__significand_sub))) 
                | (0x1000100U == (0x1ffff00U & __PVT__add_inst__DOT__significand_sub)))) {
        if ((0x1008000U == (0x1ff8000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 8U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 8U;
        } else if ((0x1004000U == (0x1ffc000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 9U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 9U;
        } else if ((0x1002000U == (0x1ffe000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xaU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xaU;
        } else if ((0x1001000U == (0x1fff000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xbU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xbU;
        } else if ((0x1000800U == (0x1fff800U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xcU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xcU;
        } else if ((0x1000400U == (0x1fffc00U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xdU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xdU;
        } else if ((0x1000200U == (0x1fffe00U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xeU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xeU;
        } else {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xfU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xfU;
        }
    } else if (((((((((0x1000080U == (0x1ffff80U & __PVT__add_inst__DOT__significand_sub)) 
                      | (0x1000040U == (0x1ffffc0U 
                                        & __PVT__add_inst__DOT__significand_sub))) 
                     | (0x1000020U == (0x1ffffe0U & __PVT__add_inst__DOT__significand_sub))) 
                    | (0x1000010U == (0x1fffff0U & __PVT__add_inst__DOT__significand_sub))) 
                   | (0x1000008U == (0x1fffff8U & __PVT__add_inst__DOT__significand_sub))) 
                  | (0x1000004U == (0x1fffffcU & __PVT__add_inst__DOT__significand_sub))) 
                 | (0x1000002U == (0x1fffffeU & __PVT__add_inst__DOT__significand_sub))) 
                | (0x1000001U == __PVT__add_inst__DOT__significand_sub))) {
        if ((0x1000080U == (0x1ffff80U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x10U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x10U;
        } else if ((0x1000040U == (0x1ffffc0U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x11U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x11U;
        } else if ((0x1000020U == (0x1ffffe0U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x12U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x12U;
        } else if ((0x1000010U == (0x1fffff0U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x13U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x13U;
        } else if ((0x1000008U == (0x1fffff8U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x14U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x14U;
        } else if ((0x1000004U == (0x1fffffcU & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x15U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x15U;
        } else if ((0x1000002U == (0x1fffffeU & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x16U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x16U;
        } else {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x17U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x17U;
        }
    } else if ((0x1000000U == __PVT__add_inst__DOT__significand_sub)) {
        vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
            = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x18U));
        vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x18U;
    } else {
        vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
            = (0x1ffffffU & ((IData)(1U) + (~ __PVT__add_inst__DOT__significand_sub)));
        vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0U;
    }
}

VL_INLINE_OPT void Vtest_oc_tiled_matmul_FMA___nba_sequent__TOP__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__29__KET____DOT__fma_inst__0(Vtest_oc_tiled_matmul_FMA* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_oc_tiled_matmul_FMA___nba_sequent__TOP__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__29__KET____DOT__fma_inst__0\n"); );
    Vtest_oc_tiled_matmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__mul_inst__DOT__Exception;
    __PVT__mul_inst__DOT__Exception = 0;
    CData/*0:0*/ __PVT__mul_inst__DOT__sign;
    __PVT__mul_inst__DOT__sign = 0;
    CData/*0:0*/ __PVT__mul_inst__DOT__zero;
    __PVT__mul_inst__DOT__zero = 0;
    SData/*8:0*/ __PVT__mul_inst__DOT__exponent;
    __PVT__mul_inst__DOT__exponent = 0;
    QData/*47:0*/ __PVT__mul_inst__DOT__product;
    __PVT__mul_inst__DOT__product = 0;
    QData/*47:0*/ __PVT__mul_inst__DOT__product_normalised;
    __PVT__mul_inst__DOT__product_normalised = 0;
    IData/*31:0*/ __PVT__add_inst__DOT__a_operand;
    __PVT__add_inst__DOT__a_operand = 0;
    CData/*7:0*/ __PVT__add_inst__DOT__exponent_diff;
    __PVT__add_inst__DOT__exponent_diff = 0;
    IData/*23:0*/ __PVT__add_inst__DOT__significand_b_add_sub;
    __PVT__add_inst__DOT__significand_b_add_sub = 0;
    IData/*24:0*/ __PVT__add_inst__DOT__significand_sub;
    __PVT__add_inst__DOT__significand_sub = 0;
    CData/*0:0*/ __PVT__add_inst__DOT__perform;
    __PVT__add_inst__DOT__perform = 0;
    IData/*24:0*/ add_inst__DOT____VdfgRegularize_ha816c9b8_0_2;
    add_inst__DOT____VdfgRegularize_ha816c9b8_0_2 = 0;
    // Body
    __PVT__mul_inst__DOT__sign = ((vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x1dU] 
                                   ^ vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x1dU]) 
                                  >> 0x1fU);
    __PVT__mul_inst__DOT__Exception = ((0xffU == (0xffU 
                                                  & (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x1dU] 
                                                     >> 0x17U))) 
                                       | (0xffU == 
                                          (0xffU & 
                                           (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x1dU] 
                                            >> 0x17U))));
    __PVT__mul_inst__DOT__product = (0xffffffffffffULL 
                                     & ((QData)((IData)(
                                                        ((0U 
                                                          != 
                                                          (0xffU 
                                                           & (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x1dU] 
                                                              >> 0x17U)))
                                                          ? 
                                                         (0x800000U 
                                                          | (0x7fffffU 
                                                             & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x1dU]))
                                                          : 
                                                         (0x7fffffU 
                                                          & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x1dU])))) 
                                        * (QData)((IData)(
                                                          ((0U 
                                                            != 
                                                            (0xffU 
                                                             & (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x1dU] 
                                                                >> 0x17U)))
                                                            ? 
                                                           (0x800000U 
                                                            | (0x7fffffU 
                                                               & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x1dU]))
                                                            : 
                                                           (0x7fffffU 
                                                            & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x1dU]))))));
    __PVT__mul_inst__DOT__product_normalised = (0xffffffffffffULL 
                                                & ((1U 
                                                    & (IData)(
                                                              (__PVT__mul_inst__DOT__product 
                                                               >> 0x2fU)))
                                                    ? __PVT__mul_inst__DOT__product
                                                    : 
                                                   VL_SHIFTL_QQI(48,48,32, __PVT__mul_inst__DOT__product, 1U)));
    __PVT__mul_inst__DOT__zero = ((~ (IData)(__PVT__mul_inst__DOT__Exception)) 
                                  & (0ULL == __PVT__mul_inst__DOT__product));
    __PVT__mul_inst__DOT__exponent = (0x1ffU & ((((0xffU 
                                                   & (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x1dU] 
                                                      >> 0x17U)) 
                                                  + 
                                                  (0xffU 
                                                   & (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x1dU] 
                                                      >> 0x17U))) 
                                                 - (IData)(0x7fU)) 
                                                + (1U 
                                                   & (IData)(
                                                             (__PVT__mul_inst__DOT__product 
                                                              >> 0x2fU)))));
    __PVT__add_inst__DOT__a_operand = ((IData)(__PVT__mul_inst__DOT__Exception)
                                        ? 0U : ((IData)(__PVT__mul_inst__DOT__zero)
                                                 ? 
                                                ((IData)(__PVT__mul_inst__DOT__sign) 
                                                 << 0x1fU)
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            ((0x100U 
                                                              == 
                                                              (0x180U 
                                                               & (IData)(__PVT__mul_inst__DOT__exponent))) 
                                                             & (~ (IData)(__PVT__mul_inst__DOT__zero)))))
                                                  ? 
                                                 (0x7f800000U 
                                                  | ((IData)(__PVT__mul_inst__DOT__sign) 
                                                     << 0x1fU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             ((0x180U 
                                                               == 
                                                               (0x180U 
                                                                & (IData)(__PVT__mul_inst__DOT__exponent))) 
                                                              & (~ (IData)(__PVT__mul_inst__DOT__zero)))))
                                                   ? 
                                                  ((IData)(__PVT__mul_inst__DOT__sign) 
                                                   << 0x1fU)
                                                   : 
                                                  (((IData)(__PVT__mul_inst__DOT__sign) 
                                                    << 0x1fU) 
                                                   | ((0x7f800000U 
                                                       & ((IData)(__PVT__mul_inst__DOT__exponent) 
                                                          << 0x17U)) 
                                                      | (0x7fffffU 
                                                         & ((IData)(
                                                                    (__PVT__mul_inst__DOT__product_normalised 
                                                                     >> 0x18U)) 
                                                            + 
                                                            ((IData)(
                                                                     (__PVT__mul_inst__DOT__product_normalised 
                                                                      >> 0x17U)) 
                                                             & (0U 
                                                                != 
                                                                (0x7fffffU 
                                                                 & (IData)(__PVT__mul_inst__DOT__product_normalised))))))))))));
    if (((0x7fffffffU & __PVT__add_inst__DOT__a_operand) 
         < (0x7fffffffU & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_c[0x1dU]))) {
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
            = (IData)((((QData)((IData)(vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_c[0x1dU])) 
                        << 0x20U) | (QData)((IData)(__PVT__add_inst__DOT__a_operand))));
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            = (IData)(((((QData)((IData)(vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_c[0x1dU])) 
                         << 0x20U) | (QData)((IData)(__PVT__add_inst__DOT__a_operand))) 
                       >> 0x20U));
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[2U] = 1U;
    } else {
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
            = (IData)((((QData)((IData)(__PVT__add_inst__DOT__a_operand)) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_c[0x1dU]))));
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            = (IData)(((((QData)((IData)(__PVT__add_inst__DOT__a_operand)) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_c[0x1dU]))) 
                       >> 0x20U));
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[2U] = 0U;
    }
    add_inst__DOT____VdfgRegularize_ha816c9b8_0_2 = 
        ((0U != (0xffU & (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                          >> 0x17U))) ? (0x800000U 
                                         | (0x7fffffU 
                                            & vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U]))
          : (0x7fffffU & vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U]));
    vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_1 
        = ((vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            ^ vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U]) 
           >> 0x1fU);
    __PVT__add_inst__DOT__exponent_diff = (0xffU & 
                                           (((vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                              << 9U) 
                                             | (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                >> 0x17U)) 
                                            - ((vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                << 9U) 
                                               | (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                  >> 0x17U))));
    __PVT__add_inst__DOT__significand_b_add_sub = (0xffffffU 
                                                   & VL_SHIFTR_III(24,24,8, 
                                                                   ((0U 
                                                                     != 
                                                                     (0xffU 
                                                                      & (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                                         >> 0x17U)))
                                                                     ? 
                                                                    (0x800000U 
                                                                     | (0x7fffffU 
                                                                        & vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U]))
                                                                     : 
                                                                    (0x7fffffU 
                                                                     & vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U])), (IData)(__PVT__add_inst__DOT__exponent_diff)));
    __PVT__add_inst__DOT__perform = ((0xffU & (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                               >> 0x17U)) 
                                     == (0xffU & ((
                                                   (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                    << 9U) 
                                                   | (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                      >> 0x17U)) 
                                                  + (IData)(__PVT__add_inst__DOT__exponent_diff))));
    vlSelfRef.__PVT__add_inst__DOT__significand_add 
        = (((~ (IData)(vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_1)) 
            & (IData)(__PVT__add_inst__DOT__perform))
            ? (0x1ffffffU & (add_inst__DOT____VdfgRegularize_ha816c9b8_0_2 
                             + __PVT__add_inst__DOT__significand_b_add_sub))
            : 0U);
    __PVT__add_inst__DOT__significand_sub = ((IData)(__PVT__add_inst__DOT__perform)
                                              ? (0x1ffffffU 
                                                 & (add_inst__DOT____VdfgRegularize_ha816c9b8_0_2 
                                                    + 
                                                    (((IData)(vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_1) 
                                                      & (IData)(__PVT__add_inst__DOT__perform))
                                                      ? 
                                                     (0xffffffU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ __PVT__add_inst__DOT__significand_b_add_sub)))
                                                      : 0U)))
                                              : 0U);
    if (((((((((0x1800000U == (0x1800000U & __PVT__add_inst__DOT__significand_sub)) 
               | (0x1400000U == (0x1c00000U & __PVT__add_inst__DOT__significand_sub))) 
              | (0x1200000U == (0x1e00000U & __PVT__add_inst__DOT__significand_sub))) 
             | (0x1100000U == (0x1f00000U & __PVT__add_inst__DOT__significand_sub))) 
            | (0x1080000U == (0x1f80000U & __PVT__add_inst__DOT__significand_sub))) 
           | (0x1040000U == (0x1fc0000U & __PVT__add_inst__DOT__significand_sub))) 
          | (0x1020000U == (0x1fe0000U & __PVT__add_inst__DOT__significand_sub))) 
         | (0x1010000U == (0x1ff0000U & __PVT__add_inst__DOT__significand_sub)))) {
        if ((0x1800000U == (0x1800000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & __PVT__add_inst__DOT__significand_sub);
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0U;
        } else if ((0x1400000U == (0x1c00000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 1U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 1U;
        } else if ((0x1200000U == (0x1e00000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 2U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 2U;
        } else if ((0x1100000U == (0x1f00000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 3U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 3U;
        } else if ((0x1080000U == (0x1f80000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 4U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 4U;
        } else if ((0x1040000U == (0x1fc0000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 5U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 5U;
        } else if ((0x1020000U == (0x1fe0000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 6U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 6U;
        } else {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 7U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 7U;
        }
    } else if (((((((((0x1008000U == (0x1ff8000U & __PVT__add_inst__DOT__significand_sub)) 
                      | (0x1004000U == (0x1ffc000U 
                                        & __PVT__add_inst__DOT__significand_sub))) 
                     | (0x1002000U == (0x1ffe000U & __PVT__add_inst__DOT__significand_sub))) 
                    | (0x1001000U == (0x1fff000U & __PVT__add_inst__DOT__significand_sub))) 
                   | (0x1000800U == (0x1fff800U & __PVT__add_inst__DOT__significand_sub))) 
                  | (0x1000400U == (0x1fffc00U & __PVT__add_inst__DOT__significand_sub))) 
                 | (0x1000200U == (0x1fffe00U & __PVT__add_inst__DOT__significand_sub))) 
                | (0x1000100U == (0x1ffff00U & __PVT__add_inst__DOT__significand_sub)))) {
        if ((0x1008000U == (0x1ff8000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 8U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 8U;
        } else if ((0x1004000U == (0x1ffc000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 9U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 9U;
        } else if ((0x1002000U == (0x1ffe000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xaU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xaU;
        } else if ((0x1001000U == (0x1fff000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xbU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xbU;
        } else if ((0x1000800U == (0x1fff800U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xcU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xcU;
        } else if ((0x1000400U == (0x1fffc00U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xdU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xdU;
        } else if ((0x1000200U == (0x1fffe00U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xeU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xeU;
        } else {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xfU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xfU;
        }
    } else if (((((((((0x1000080U == (0x1ffff80U & __PVT__add_inst__DOT__significand_sub)) 
                      | (0x1000040U == (0x1ffffc0U 
                                        & __PVT__add_inst__DOT__significand_sub))) 
                     | (0x1000020U == (0x1ffffe0U & __PVT__add_inst__DOT__significand_sub))) 
                    | (0x1000010U == (0x1fffff0U & __PVT__add_inst__DOT__significand_sub))) 
                   | (0x1000008U == (0x1fffff8U & __PVT__add_inst__DOT__significand_sub))) 
                  | (0x1000004U == (0x1fffffcU & __PVT__add_inst__DOT__significand_sub))) 
                 | (0x1000002U == (0x1fffffeU & __PVT__add_inst__DOT__significand_sub))) 
                | (0x1000001U == __PVT__add_inst__DOT__significand_sub))) {
        if ((0x1000080U == (0x1ffff80U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x10U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x10U;
        } else if ((0x1000040U == (0x1ffffc0U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x11U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x11U;
        } else if ((0x1000020U == (0x1ffffe0U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x12U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x12U;
        } else if ((0x1000010U == (0x1fffff0U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x13U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x13U;
        } else if ((0x1000008U == (0x1fffff8U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x14U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x14U;
        } else if ((0x1000004U == (0x1fffffcU & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x15U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x15U;
        } else if ((0x1000002U == (0x1fffffeU & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x16U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x16U;
        } else {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x17U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x17U;
        }
    } else if ((0x1000000U == __PVT__add_inst__DOT__significand_sub)) {
        vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
            = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x18U));
        vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x18U;
    } else {
        vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
            = (0x1ffffffU & ((IData)(1U) + (~ __PVT__add_inst__DOT__significand_sub)));
        vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0U;
    }
}

VL_INLINE_OPT void Vtest_oc_tiled_matmul_FMA___nba_sequent__TOP__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__30__KET____DOT__fma_inst__0(Vtest_oc_tiled_matmul_FMA* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_oc_tiled_matmul_FMA___nba_sequent__TOP__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__30__KET____DOT__fma_inst__0\n"); );
    Vtest_oc_tiled_matmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__mul_inst__DOT__Exception;
    __PVT__mul_inst__DOT__Exception = 0;
    CData/*0:0*/ __PVT__mul_inst__DOT__sign;
    __PVT__mul_inst__DOT__sign = 0;
    CData/*0:0*/ __PVT__mul_inst__DOT__zero;
    __PVT__mul_inst__DOT__zero = 0;
    SData/*8:0*/ __PVT__mul_inst__DOT__exponent;
    __PVT__mul_inst__DOT__exponent = 0;
    QData/*47:0*/ __PVT__mul_inst__DOT__product;
    __PVT__mul_inst__DOT__product = 0;
    QData/*47:0*/ __PVT__mul_inst__DOT__product_normalised;
    __PVT__mul_inst__DOT__product_normalised = 0;
    IData/*31:0*/ __PVT__add_inst__DOT__a_operand;
    __PVT__add_inst__DOT__a_operand = 0;
    CData/*7:0*/ __PVT__add_inst__DOT__exponent_diff;
    __PVT__add_inst__DOT__exponent_diff = 0;
    IData/*23:0*/ __PVT__add_inst__DOT__significand_b_add_sub;
    __PVT__add_inst__DOT__significand_b_add_sub = 0;
    IData/*24:0*/ __PVT__add_inst__DOT__significand_sub;
    __PVT__add_inst__DOT__significand_sub = 0;
    CData/*0:0*/ __PVT__add_inst__DOT__perform;
    __PVT__add_inst__DOT__perform = 0;
    IData/*24:0*/ add_inst__DOT____VdfgRegularize_ha816c9b8_0_2;
    add_inst__DOT____VdfgRegularize_ha816c9b8_0_2 = 0;
    // Body
    __PVT__mul_inst__DOT__sign = ((vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x1eU] 
                                   ^ vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x1eU]) 
                                  >> 0x1fU);
    __PVT__mul_inst__DOT__Exception = ((0xffU == (0xffU 
                                                  & (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x1eU] 
                                                     >> 0x17U))) 
                                       | (0xffU == 
                                          (0xffU & 
                                           (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x1eU] 
                                            >> 0x17U))));
    __PVT__mul_inst__DOT__product = (0xffffffffffffULL 
                                     & ((QData)((IData)(
                                                        ((0U 
                                                          != 
                                                          (0xffU 
                                                           & (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x1eU] 
                                                              >> 0x17U)))
                                                          ? 
                                                         (0x800000U 
                                                          | (0x7fffffU 
                                                             & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x1eU]))
                                                          : 
                                                         (0x7fffffU 
                                                          & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x1eU])))) 
                                        * (QData)((IData)(
                                                          ((0U 
                                                            != 
                                                            (0xffU 
                                                             & (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x1eU] 
                                                                >> 0x17U)))
                                                            ? 
                                                           (0x800000U 
                                                            | (0x7fffffU 
                                                               & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x1eU]))
                                                            : 
                                                           (0x7fffffU 
                                                            & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x1eU]))))));
    __PVT__mul_inst__DOT__product_normalised = (0xffffffffffffULL 
                                                & ((1U 
                                                    & (IData)(
                                                              (__PVT__mul_inst__DOT__product 
                                                               >> 0x2fU)))
                                                    ? __PVT__mul_inst__DOT__product
                                                    : 
                                                   VL_SHIFTL_QQI(48,48,32, __PVT__mul_inst__DOT__product, 1U)));
    __PVT__mul_inst__DOT__zero = ((~ (IData)(__PVT__mul_inst__DOT__Exception)) 
                                  & (0ULL == __PVT__mul_inst__DOT__product));
    __PVT__mul_inst__DOT__exponent = (0x1ffU & ((((0xffU 
                                                   & (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x1eU] 
                                                      >> 0x17U)) 
                                                  + 
                                                  (0xffU 
                                                   & (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x1eU] 
                                                      >> 0x17U))) 
                                                 - (IData)(0x7fU)) 
                                                + (1U 
                                                   & (IData)(
                                                             (__PVT__mul_inst__DOT__product 
                                                              >> 0x2fU)))));
    __PVT__add_inst__DOT__a_operand = ((IData)(__PVT__mul_inst__DOT__Exception)
                                        ? 0U : ((IData)(__PVT__mul_inst__DOT__zero)
                                                 ? 
                                                ((IData)(__PVT__mul_inst__DOT__sign) 
                                                 << 0x1fU)
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            ((0x100U 
                                                              == 
                                                              (0x180U 
                                                               & (IData)(__PVT__mul_inst__DOT__exponent))) 
                                                             & (~ (IData)(__PVT__mul_inst__DOT__zero)))))
                                                  ? 
                                                 (0x7f800000U 
                                                  | ((IData)(__PVT__mul_inst__DOT__sign) 
                                                     << 0x1fU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             ((0x180U 
                                                               == 
                                                               (0x180U 
                                                                & (IData)(__PVT__mul_inst__DOT__exponent))) 
                                                              & (~ (IData)(__PVT__mul_inst__DOT__zero)))))
                                                   ? 
                                                  ((IData)(__PVT__mul_inst__DOT__sign) 
                                                   << 0x1fU)
                                                   : 
                                                  (((IData)(__PVT__mul_inst__DOT__sign) 
                                                    << 0x1fU) 
                                                   | ((0x7f800000U 
                                                       & ((IData)(__PVT__mul_inst__DOT__exponent) 
                                                          << 0x17U)) 
                                                      | (0x7fffffU 
                                                         & ((IData)(
                                                                    (__PVT__mul_inst__DOT__product_normalised 
                                                                     >> 0x18U)) 
                                                            + 
                                                            ((IData)(
                                                                     (__PVT__mul_inst__DOT__product_normalised 
                                                                      >> 0x17U)) 
                                                             & (0U 
                                                                != 
                                                                (0x7fffffU 
                                                                 & (IData)(__PVT__mul_inst__DOT__product_normalised))))))))))));
    if (((0x7fffffffU & __PVT__add_inst__DOT__a_operand) 
         < (0x7fffffffU & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_c[0x1eU]))) {
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
            = (IData)((((QData)((IData)(vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_c[0x1eU])) 
                        << 0x20U) | (QData)((IData)(__PVT__add_inst__DOT__a_operand))));
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            = (IData)(((((QData)((IData)(vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_c[0x1eU])) 
                         << 0x20U) | (QData)((IData)(__PVT__add_inst__DOT__a_operand))) 
                       >> 0x20U));
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[2U] = 1U;
    } else {
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
            = (IData)((((QData)((IData)(__PVT__add_inst__DOT__a_operand)) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_c[0x1eU]))));
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            = (IData)(((((QData)((IData)(__PVT__add_inst__DOT__a_operand)) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_c[0x1eU]))) 
                       >> 0x20U));
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[2U] = 0U;
    }
    add_inst__DOT____VdfgRegularize_ha816c9b8_0_2 = 
        ((0U != (0xffU & (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                          >> 0x17U))) ? (0x800000U 
                                         | (0x7fffffU 
                                            & vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U]))
          : (0x7fffffU & vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U]));
    vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_1 
        = ((vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            ^ vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U]) 
           >> 0x1fU);
    __PVT__add_inst__DOT__exponent_diff = (0xffU & 
                                           (((vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                              << 9U) 
                                             | (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                >> 0x17U)) 
                                            - ((vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                << 9U) 
                                               | (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                  >> 0x17U))));
    __PVT__add_inst__DOT__significand_b_add_sub = (0xffffffU 
                                                   & VL_SHIFTR_III(24,24,8, 
                                                                   ((0U 
                                                                     != 
                                                                     (0xffU 
                                                                      & (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                                         >> 0x17U)))
                                                                     ? 
                                                                    (0x800000U 
                                                                     | (0x7fffffU 
                                                                        & vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U]))
                                                                     : 
                                                                    (0x7fffffU 
                                                                     & vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U])), (IData)(__PVT__add_inst__DOT__exponent_diff)));
    __PVT__add_inst__DOT__perform = ((0xffU & (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                               >> 0x17U)) 
                                     == (0xffU & ((
                                                   (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                    << 9U) 
                                                   | (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                      >> 0x17U)) 
                                                  + (IData)(__PVT__add_inst__DOT__exponent_diff))));
    vlSelfRef.__PVT__add_inst__DOT__significand_add 
        = (((~ (IData)(vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_1)) 
            & (IData)(__PVT__add_inst__DOT__perform))
            ? (0x1ffffffU & (add_inst__DOT____VdfgRegularize_ha816c9b8_0_2 
                             + __PVT__add_inst__DOT__significand_b_add_sub))
            : 0U);
    __PVT__add_inst__DOT__significand_sub = ((IData)(__PVT__add_inst__DOT__perform)
                                              ? (0x1ffffffU 
                                                 & (add_inst__DOT____VdfgRegularize_ha816c9b8_0_2 
                                                    + 
                                                    (((IData)(vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_1) 
                                                      & (IData)(__PVT__add_inst__DOT__perform))
                                                      ? 
                                                     (0xffffffU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ __PVT__add_inst__DOT__significand_b_add_sub)))
                                                      : 0U)))
                                              : 0U);
    if (((((((((0x1800000U == (0x1800000U & __PVT__add_inst__DOT__significand_sub)) 
               | (0x1400000U == (0x1c00000U & __PVT__add_inst__DOT__significand_sub))) 
              | (0x1200000U == (0x1e00000U & __PVT__add_inst__DOT__significand_sub))) 
             | (0x1100000U == (0x1f00000U & __PVT__add_inst__DOT__significand_sub))) 
            | (0x1080000U == (0x1f80000U & __PVT__add_inst__DOT__significand_sub))) 
           | (0x1040000U == (0x1fc0000U & __PVT__add_inst__DOT__significand_sub))) 
          | (0x1020000U == (0x1fe0000U & __PVT__add_inst__DOT__significand_sub))) 
         | (0x1010000U == (0x1ff0000U & __PVT__add_inst__DOT__significand_sub)))) {
        if ((0x1800000U == (0x1800000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & __PVT__add_inst__DOT__significand_sub);
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0U;
        } else if ((0x1400000U == (0x1c00000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 1U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 1U;
        } else if ((0x1200000U == (0x1e00000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 2U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 2U;
        } else if ((0x1100000U == (0x1f00000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 3U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 3U;
        } else if ((0x1080000U == (0x1f80000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 4U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 4U;
        } else if ((0x1040000U == (0x1fc0000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 5U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 5U;
        } else if ((0x1020000U == (0x1fe0000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 6U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 6U;
        } else {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 7U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 7U;
        }
    } else if (((((((((0x1008000U == (0x1ff8000U & __PVT__add_inst__DOT__significand_sub)) 
                      | (0x1004000U == (0x1ffc000U 
                                        & __PVT__add_inst__DOT__significand_sub))) 
                     | (0x1002000U == (0x1ffe000U & __PVT__add_inst__DOT__significand_sub))) 
                    | (0x1001000U == (0x1fff000U & __PVT__add_inst__DOT__significand_sub))) 
                   | (0x1000800U == (0x1fff800U & __PVT__add_inst__DOT__significand_sub))) 
                  | (0x1000400U == (0x1fffc00U & __PVT__add_inst__DOT__significand_sub))) 
                 | (0x1000200U == (0x1fffe00U & __PVT__add_inst__DOT__significand_sub))) 
                | (0x1000100U == (0x1ffff00U & __PVT__add_inst__DOT__significand_sub)))) {
        if ((0x1008000U == (0x1ff8000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 8U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 8U;
        } else if ((0x1004000U == (0x1ffc000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 9U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 9U;
        } else if ((0x1002000U == (0x1ffe000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xaU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xaU;
        } else if ((0x1001000U == (0x1fff000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xbU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xbU;
        } else if ((0x1000800U == (0x1fff800U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xcU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xcU;
        } else if ((0x1000400U == (0x1fffc00U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xdU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xdU;
        } else if ((0x1000200U == (0x1fffe00U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xeU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xeU;
        } else {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xfU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xfU;
        }
    } else if (((((((((0x1000080U == (0x1ffff80U & __PVT__add_inst__DOT__significand_sub)) 
                      | (0x1000040U == (0x1ffffc0U 
                                        & __PVT__add_inst__DOT__significand_sub))) 
                     | (0x1000020U == (0x1ffffe0U & __PVT__add_inst__DOT__significand_sub))) 
                    | (0x1000010U == (0x1fffff0U & __PVT__add_inst__DOT__significand_sub))) 
                   | (0x1000008U == (0x1fffff8U & __PVT__add_inst__DOT__significand_sub))) 
                  | (0x1000004U == (0x1fffffcU & __PVT__add_inst__DOT__significand_sub))) 
                 | (0x1000002U == (0x1fffffeU & __PVT__add_inst__DOT__significand_sub))) 
                | (0x1000001U == __PVT__add_inst__DOT__significand_sub))) {
        if ((0x1000080U == (0x1ffff80U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x10U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x10U;
        } else if ((0x1000040U == (0x1ffffc0U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x11U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x11U;
        } else if ((0x1000020U == (0x1ffffe0U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x12U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x12U;
        } else if ((0x1000010U == (0x1fffff0U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x13U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x13U;
        } else if ((0x1000008U == (0x1fffff8U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x14U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x14U;
        } else if ((0x1000004U == (0x1fffffcU & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x15U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x15U;
        } else if ((0x1000002U == (0x1fffffeU & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x16U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x16U;
        } else {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x17U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x17U;
        }
    } else if ((0x1000000U == __PVT__add_inst__DOT__significand_sub)) {
        vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
            = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x18U));
        vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x18U;
    } else {
        vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
            = (0x1ffffffU & ((IData)(1U) + (~ __PVT__add_inst__DOT__significand_sub)));
        vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0U;
    }
}

VL_INLINE_OPT void Vtest_oc_tiled_matmul_FMA___nba_sequent__TOP__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__31__KET____DOT__fma_inst__0(Vtest_oc_tiled_matmul_FMA* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_oc_tiled_matmul_FMA___nba_sequent__TOP__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__31__KET____DOT__fma_inst__0\n"); );
    Vtest_oc_tiled_matmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__mul_inst__DOT__Exception;
    __PVT__mul_inst__DOT__Exception = 0;
    CData/*0:0*/ __PVT__mul_inst__DOT__sign;
    __PVT__mul_inst__DOT__sign = 0;
    CData/*0:0*/ __PVT__mul_inst__DOT__zero;
    __PVT__mul_inst__DOT__zero = 0;
    SData/*8:0*/ __PVT__mul_inst__DOT__exponent;
    __PVT__mul_inst__DOT__exponent = 0;
    QData/*47:0*/ __PVT__mul_inst__DOT__product;
    __PVT__mul_inst__DOT__product = 0;
    QData/*47:0*/ __PVT__mul_inst__DOT__product_normalised;
    __PVT__mul_inst__DOT__product_normalised = 0;
    IData/*31:0*/ __PVT__add_inst__DOT__a_operand;
    __PVT__add_inst__DOT__a_operand = 0;
    CData/*7:0*/ __PVT__add_inst__DOT__exponent_diff;
    __PVT__add_inst__DOT__exponent_diff = 0;
    IData/*23:0*/ __PVT__add_inst__DOT__significand_b_add_sub;
    __PVT__add_inst__DOT__significand_b_add_sub = 0;
    IData/*24:0*/ __PVT__add_inst__DOT__significand_sub;
    __PVT__add_inst__DOT__significand_sub = 0;
    CData/*0:0*/ __PVT__add_inst__DOT__perform;
    __PVT__add_inst__DOT__perform = 0;
    IData/*24:0*/ add_inst__DOT____VdfgRegularize_ha816c9b8_0_2;
    add_inst__DOT____VdfgRegularize_ha816c9b8_0_2 = 0;
    // Body
    __PVT__mul_inst__DOT__sign = ((vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x1fU] 
                                   ^ vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x1fU]) 
                                  >> 0x1fU);
    __PVT__mul_inst__DOT__Exception = ((0xffU == (0xffU 
                                                  & (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x1fU] 
                                                     >> 0x17U))) 
                                       | (0xffU == 
                                          (0xffU & 
                                           (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x1fU] 
                                            >> 0x17U))));
    __PVT__mul_inst__DOT__product = (0xffffffffffffULL 
                                     & ((QData)((IData)(
                                                        ((0U 
                                                          != 
                                                          (0xffU 
                                                           & (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x1fU] 
                                                              >> 0x17U)))
                                                          ? 
                                                         (0x800000U 
                                                          | (0x7fffffU 
                                                             & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x1fU]))
                                                          : 
                                                         (0x7fffffU 
                                                          & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x1fU])))) 
                                        * (QData)((IData)(
                                                          ((0U 
                                                            != 
                                                            (0xffU 
                                                             & (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x1fU] 
                                                                >> 0x17U)))
                                                            ? 
                                                           (0x800000U 
                                                            | (0x7fffffU 
                                                               & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x1fU]))
                                                            : 
                                                           (0x7fffffU 
                                                            & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x1fU]))))));
    __PVT__mul_inst__DOT__product_normalised = (0xffffffffffffULL 
                                                & ((1U 
                                                    & (IData)(
                                                              (__PVT__mul_inst__DOT__product 
                                                               >> 0x2fU)))
                                                    ? __PVT__mul_inst__DOT__product
                                                    : 
                                                   VL_SHIFTL_QQI(48,48,32, __PVT__mul_inst__DOT__product, 1U)));
    __PVT__mul_inst__DOT__zero = ((~ (IData)(__PVT__mul_inst__DOT__Exception)) 
                                  & (0ULL == __PVT__mul_inst__DOT__product));
    __PVT__mul_inst__DOT__exponent = (0x1ffU & ((((0xffU 
                                                   & (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_a[0x1fU] 
                                                      >> 0x17U)) 
                                                  + 
                                                  (0xffU 
                                                   & (vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_b[0x1fU] 
                                                      >> 0x17U))) 
                                                 - (IData)(0x7fU)) 
                                                + (1U 
                                                   & (IData)(
                                                             (__PVT__mul_inst__DOT__product 
                                                              >> 0x2fU)))));
    __PVT__add_inst__DOT__a_operand = ((IData)(__PVT__mul_inst__DOT__Exception)
                                        ? 0U : ((IData)(__PVT__mul_inst__DOT__zero)
                                                 ? 
                                                ((IData)(__PVT__mul_inst__DOT__sign) 
                                                 << 0x1fU)
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            ((0x100U 
                                                              == 
                                                              (0x180U 
                                                               & (IData)(__PVT__mul_inst__DOT__exponent))) 
                                                             & (~ (IData)(__PVT__mul_inst__DOT__zero)))))
                                                  ? 
                                                 (0x7f800000U 
                                                  | ((IData)(__PVT__mul_inst__DOT__sign) 
                                                     << 0x1fU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             ((0x180U 
                                                               == 
                                                               (0x180U 
                                                                & (IData)(__PVT__mul_inst__DOT__exponent))) 
                                                              & (~ (IData)(__PVT__mul_inst__DOT__zero)))))
                                                   ? 
                                                  ((IData)(__PVT__mul_inst__DOT__sign) 
                                                   << 0x1fU)
                                                   : 
                                                  (((IData)(__PVT__mul_inst__DOT__sign) 
                                                    << 0x1fU) 
                                                   | ((0x7f800000U 
                                                       & ((IData)(__PVT__mul_inst__DOT__exponent) 
                                                          << 0x17U)) 
                                                      | (0x7fffffU 
                                                         & ((IData)(
                                                                    (__PVT__mul_inst__DOT__product_normalised 
                                                                     >> 0x18U)) 
                                                            + 
                                                            ((IData)(
                                                                     (__PVT__mul_inst__DOT__product_normalised 
                                                                      >> 0x17U)) 
                                                             & (0U 
                                                                != 
                                                                (0x7fffffU 
                                                                 & (IData)(__PVT__mul_inst__DOT__product_normalised))))))))))));
    if (((0x7fffffffU & __PVT__add_inst__DOT__a_operand) 
         < (0x7fffffffU & vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_c[0x1fU]))) {
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
            = (IData)((((QData)((IData)(vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_c[0x1fU])) 
                        << 0x20U) | (QData)((IData)(__PVT__add_inst__DOT__a_operand))));
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            = (IData)(((((QData)((IData)(vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_c[0x1fU])) 
                         << 0x20U) | (QData)((IData)(__PVT__add_inst__DOT__a_operand))) 
                       >> 0x20U));
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[2U] = 1U;
    } else {
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
            = (IData)((((QData)((IData)(__PVT__add_inst__DOT__a_operand)) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_c[0x1fU]))));
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            = (IData)(((((QData)((IData)(__PVT__add_inst__DOT__a_operand)) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSymsp->TOP.test_oc_tiled_matmul__DOT__dut__DOT__fma_op_c[0x1fU]))) 
                       >> 0x20U));
        vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[2U] = 0U;
    }
    add_inst__DOT____VdfgRegularize_ha816c9b8_0_2 = 
        ((0U != (0xffU & (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                          >> 0x17U))) ? (0x800000U 
                                         | (0x7fffffU 
                                            & vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U]))
          : (0x7fffffU & vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U]));
    vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_1 
        = ((vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
            ^ vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U]) 
           >> 0x1fU);
    __PVT__add_inst__DOT__exponent_diff = (0xffU & 
                                           (((vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                              << 9U) 
                                             | (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                                >> 0x17U)) 
                                            - ((vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                << 9U) 
                                               | (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                  >> 0x17U))));
    __PVT__add_inst__DOT__significand_b_add_sub = (0xffffffU 
                                                   & VL_SHIFTR_III(24,24,8, 
                                                                   ((0U 
                                                                     != 
                                                                     (0xffU 
                                                                      & (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                                         >> 0x17U)))
                                                                     ? 
                                                                    (0x800000U 
                                                                     | (0x7fffffU 
                                                                        & vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U]))
                                                                     : 
                                                                    (0x7fffffU 
                                                                     & vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U])), (IData)(__PVT__add_inst__DOT__exponent_diff)));
    __PVT__add_inst__DOT__perform = ((0xffU & (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[1U] 
                                               >> 0x17U)) 
                                     == (0xffU & ((
                                                   (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                    << 9U) 
                                                   | (vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_0[0U] 
                                                      >> 0x17U)) 
                                                  + (IData)(__PVT__add_inst__DOT__exponent_diff))));
    vlSelfRef.__PVT__add_inst__DOT__significand_add 
        = (((~ (IData)(vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_1)) 
            & (IData)(__PVT__add_inst__DOT__perform))
            ? (0x1ffffffU & (add_inst__DOT____VdfgRegularize_ha816c9b8_0_2 
                             + __PVT__add_inst__DOT__significand_b_add_sub))
            : 0U);
    __PVT__add_inst__DOT__significand_sub = ((IData)(__PVT__add_inst__DOT__perform)
                                              ? (0x1ffffffU 
                                                 & (add_inst__DOT____VdfgRegularize_ha816c9b8_0_2 
                                                    + 
                                                    (((IData)(vlSelfRef.add_inst__DOT____VdfgRegularize_ha816c9b8_0_1) 
                                                      & (IData)(__PVT__add_inst__DOT__perform))
                                                      ? 
                                                     (0xffffffU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ __PVT__add_inst__DOT__significand_b_add_sub)))
                                                      : 0U)))
                                              : 0U);
    if (((((((((0x1800000U == (0x1800000U & __PVT__add_inst__DOT__significand_sub)) 
               | (0x1400000U == (0x1c00000U & __PVT__add_inst__DOT__significand_sub))) 
              | (0x1200000U == (0x1e00000U & __PVT__add_inst__DOT__significand_sub))) 
             | (0x1100000U == (0x1f00000U & __PVT__add_inst__DOT__significand_sub))) 
            | (0x1080000U == (0x1f80000U & __PVT__add_inst__DOT__significand_sub))) 
           | (0x1040000U == (0x1fc0000U & __PVT__add_inst__DOT__significand_sub))) 
          | (0x1020000U == (0x1fe0000U & __PVT__add_inst__DOT__significand_sub))) 
         | (0x1010000U == (0x1ff0000U & __PVT__add_inst__DOT__significand_sub)))) {
        if ((0x1800000U == (0x1800000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & __PVT__add_inst__DOT__significand_sub);
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0U;
        } else if ((0x1400000U == (0x1c00000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 1U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 1U;
        } else if ((0x1200000U == (0x1e00000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 2U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 2U;
        } else if ((0x1100000U == (0x1f00000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 3U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 3U;
        } else if ((0x1080000U == (0x1f80000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 4U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 4U;
        } else if ((0x1040000U == (0x1fc0000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 5U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 5U;
        } else if ((0x1020000U == (0x1fe0000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 6U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 6U;
        } else {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 7U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 7U;
        }
    } else if (((((((((0x1008000U == (0x1ff8000U & __PVT__add_inst__DOT__significand_sub)) 
                      | (0x1004000U == (0x1ffc000U 
                                        & __PVT__add_inst__DOT__significand_sub))) 
                     | (0x1002000U == (0x1ffe000U & __PVT__add_inst__DOT__significand_sub))) 
                    | (0x1001000U == (0x1fff000U & __PVT__add_inst__DOT__significand_sub))) 
                   | (0x1000800U == (0x1fff800U & __PVT__add_inst__DOT__significand_sub))) 
                  | (0x1000400U == (0x1fffc00U & __PVT__add_inst__DOT__significand_sub))) 
                 | (0x1000200U == (0x1fffe00U & __PVT__add_inst__DOT__significand_sub))) 
                | (0x1000100U == (0x1ffff00U & __PVT__add_inst__DOT__significand_sub)))) {
        if ((0x1008000U == (0x1ff8000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 8U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 8U;
        } else if ((0x1004000U == (0x1ffc000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 9U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 9U;
        } else if ((0x1002000U == (0x1ffe000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xaU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xaU;
        } else if ((0x1001000U == (0x1fff000U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xbU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xbU;
        } else if ((0x1000800U == (0x1fff800U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xcU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xcU;
        } else if ((0x1000400U == (0x1fffc00U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xdU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xdU;
        } else if ((0x1000200U == (0x1fffe00U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xeU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xeU;
        } else {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0xfU));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0xfU;
        }
    } else if (((((((((0x1000080U == (0x1ffff80U & __PVT__add_inst__DOT__significand_sub)) 
                      | (0x1000040U == (0x1ffffc0U 
                                        & __PVT__add_inst__DOT__significand_sub))) 
                     | (0x1000020U == (0x1ffffe0U & __PVT__add_inst__DOT__significand_sub))) 
                    | (0x1000010U == (0x1fffff0U & __PVT__add_inst__DOT__significand_sub))) 
                   | (0x1000008U == (0x1fffff8U & __PVT__add_inst__DOT__significand_sub))) 
                  | (0x1000004U == (0x1fffffcU & __PVT__add_inst__DOT__significand_sub))) 
                 | (0x1000002U == (0x1fffffeU & __PVT__add_inst__DOT__significand_sub))) 
                | (0x1000001U == __PVT__add_inst__DOT__significand_sub))) {
        if ((0x1000080U == (0x1ffff80U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x10U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x10U;
        } else if ((0x1000040U == (0x1ffffc0U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x11U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x11U;
        } else if ((0x1000020U == (0x1ffffe0U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x12U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x12U;
        } else if ((0x1000010U == (0x1fffff0U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x13U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x13U;
        } else if ((0x1000008U == (0x1fffff8U & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x14U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x14U;
        } else if ((0x1000004U == (0x1fffffcU & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x15U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x15U;
        } else if ((0x1000002U == (0x1fffffeU & __PVT__add_inst__DOT__significand_sub))) {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x16U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x16U;
        } else {
            vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
                = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x17U));
            vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x17U;
        }
    } else if ((0x1000000U == __PVT__add_inst__DOT__significand_sub)) {
        vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
            = (0x1ffffffU & VL_SHIFTL_III(25,25,32, __PVT__add_inst__DOT__significand_sub, 0x18U));
        vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0x18U;
    } else {
        vlSelfRef.__PVT__add_inst__DOT__subtraction_diff 
            = (0x1ffffffU & ((IData)(1U) + (~ __PVT__add_inst__DOT__significand_sub)));
        vlSelfRef.__PVT__add_inst__DOT__pe__DOT__shift = 0U;
    }
}

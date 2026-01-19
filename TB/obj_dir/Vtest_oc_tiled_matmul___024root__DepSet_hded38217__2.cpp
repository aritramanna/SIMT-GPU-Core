// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_oc_tiled_matmul.h for the primary calling header

#include "Vtest_oc_tiled_matmul__pch.h"
#include "Vtest_oc_tiled_matmul___024root.h"

VL_INLINE_OPT void Vtest_oc_tiled_matmul___024root___nba_sequent__TOP__3(Vtest_oc_tiled_matmul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_oc_tiled_matmul___024root___nba_sequent__TOP__3\n"); );
    Vtest_oc_tiled_matmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__idx;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__idx = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__frac;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__frac = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__val_a;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__val_a = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__val_b;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__val_b = 0;
    IData/*26:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__delta;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__delta = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__interpolated;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__interpolated = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__idx;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__idx = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__frac;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__frac = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__val_a;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__val_a = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__val_b;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__val_b = 0;
    IData/*26:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__delta;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__delta = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__interpolated;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__interpolated = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__idx;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__idx = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__frac;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__frac = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__val_a;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__val_a = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__val_b;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__val_b = 0;
    IData/*26:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__delta;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__delta = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__interpolated;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__interpolated = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__idx;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__idx = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__frac;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__frac = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__val_a;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__val_a = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__val_b;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__val_b = 0;
    IData/*26:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__delta;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__delta = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__interpolated;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__interpolated = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__idx;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__idx = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__frac;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__frac = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__val_a;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__val_a = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__val_b;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__val_b = 0;
    IData/*26:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__delta;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__delta = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__interpolated;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__interpolated = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__idx;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__idx = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__frac;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__frac = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__val_a;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__val_a = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__val_b;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__val_b = 0;
    IData/*26:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__delta;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__delta = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__interpolated;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__interpolated = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__idx;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__idx = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__frac;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__frac = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__val_a;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__val_a = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__val_b;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__val_b = 0;
    IData/*26:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__delta;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__delta = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__interpolated;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__interpolated = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__idx;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__idx = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__frac;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__frac = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__val_a;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__val_a = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__val_b;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__val_b = 0;
    IData/*26:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__delta;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__delta = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__interpolated;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__interpolated = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__idx;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__idx = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__frac;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__frac = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__val_a;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__val_a = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__val_b;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__val_b = 0;
    IData/*26:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__delta;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__delta = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__interpolated;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__interpolated = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__idx;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__idx = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__frac;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__frac = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__val_a;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__val_a = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__val_b;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__val_b = 0;
    IData/*26:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__delta;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__delta = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__interpolated;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__interpolated = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__idx;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__idx = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__frac;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__frac = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__val_a;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__val_a = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__val_b;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__val_b = 0;
    IData/*26:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__delta;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__delta = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__interpolated;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__interpolated = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__idx;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__idx = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__frac;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__frac = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__val_a;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__val_a = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__val_b;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__val_b = 0;
    IData/*26:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__delta;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__delta = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__interpolated;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__interpolated = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__idx;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__idx = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__frac;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__frac = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__val_a;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__val_a = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__val_b;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__val_b = 0;
    IData/*26:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__delta;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__delta = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__interpolated;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__interpolated = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__idx;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__idx = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__frac;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__frac = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__val_a;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__val_a = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__val_b;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__val_b = 0;
    IData/*26:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__delta;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__delta = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__interpolated;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__interpolated = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__idx;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__idx = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__frac;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__frac = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__val_a;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__val_a = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__val_b;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__val_b = 0;
    IData/*26:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__delta;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__delta = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__interpolated;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__interpolated = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__idx;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__idx = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__frac;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__frac = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__val_a;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__val_a = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__val_b;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__val_b = 0;
    IData/*26:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__delta;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__delta = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__interpolated;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__interpolated = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__idx;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__idx = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__frac;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__frac = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__val_a;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__val_a = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__val_b;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__val_b = 0;
    IData/*26:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__delta;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__delta = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__interpolated;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__interpolated = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__idx;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__idx = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__frac;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__frac = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__val_a;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__val_a = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__val_b;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__val_b = 0;
    IData/*26:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__delta;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__delta = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__interpolated;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__interpolated = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__idx;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__idx = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__frac;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__frac = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__val_a;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__val_a = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__val_b;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__val_b = 0;
    IData/*26:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__delta;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__delta = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__interpolated;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__interpolated = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__idx;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__idx = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__frac;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__frac = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__val_a;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__val_a = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__val_b;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__val_b = 0;
    IData/*26:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__delta;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__delta = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__interpolated;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__interpolated = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__idx;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__idx = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__frac;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__frac = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__val_a;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__val_a = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__val_b;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__val_b = 0;
    IData/*26:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__delta;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__delta = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__interpolated;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__interpolated = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__idx;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__idx = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__frac;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__frac = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__val_a;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__val_a = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__val_b;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__val_b = 0;
    IData/*26:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__delta;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__delta = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__interpolated;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__interpolated = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__idx;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__idx = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__frac;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__frac = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__val_a;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__val_a = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__val_b;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__val_b = 0;
    IData/*26:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__delta;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__delta = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__interpolated;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__interpolated = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__idx;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__idx = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__frac;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__frac = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__val_a;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__val_a = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__val_b;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__val_b = 0;
    IData/*26:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__delta;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__delta = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__interpolated;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__interpolated = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__idx;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__idx = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__frac;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__frac = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__val_a;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__val_a = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__val_b;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__val_b = 0;
    IData/*26:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__delta;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__delta = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__interpolated;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__interpolated = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__idx;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__idx = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__frac;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__frac = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__val_a;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__val_a = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__val_b;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__val_b = 0;
    IData/*26:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__delta;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__delta = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__interpolated;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__interpolated = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__idx;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__idx = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__frac;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__frac = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__val_a;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__val_a = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__val_b;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__val_b = 0;
    IData/*26:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__delta;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__delta = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__interpolated;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__interpolated = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__idx;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__idx = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__frac;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__frac = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__val_a;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__val_a = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__val_b;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__val_b = 0;
    IData/*26:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__delta;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__delta = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__interpolated;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__interpolated = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__idx;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__idx = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__frac;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__frac = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__val_a;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__val_a = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__val_b;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__val_b = 0;
    IData/*26:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__delta;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__delta = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__interpolated;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__interpolated = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__idx;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__idx = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__frac;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__frac = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__val_a;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__val_a = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__val_b;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__val_b = 0;
    IData/*26:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__delta;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__delta = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__interpolated;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__interpolated = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__idx;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__idx = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__frac;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__frac = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__val_a;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__val_a = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__val_b;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__val_b = 0;
    IData/*26:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__delta;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__delta = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__interpolated;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__interpolated = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__idx;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__idx = 0;
    CData/*7:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__frac;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__frac = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__val_a;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__val_a = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__val_b;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__val_b = 0;
    IData/*26:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__delta;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__delta = 0;
    SData/*15:0*/ test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__interpolated;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__interpolated = 0;
    // Body
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__idx 
        = (0xffU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x42U] 
                    >> 6U));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__frac 
        = (0xffU & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x42U] 
                     << 2U) | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x41U] 
                               >> 0x1eU)));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__val_a = 0U;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__val_b = 0U;
    if ((4U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__rom_tanh
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x7fddU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__rom_tanh
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__idx)))]);
            } else {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__rom_sqrt
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__rom_sqrt
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__idx)))]);
            }
        } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__rom_rsq
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__rom_rsq
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__rom_rcp
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x4000U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__rom_rcp
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__rom_log
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__rom_log
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__rom_ex2
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__rom_ex2
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle 
            = (0xffffU & ((IData)(0x4000U) + ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x42U] 
                                               << 2U) 
                                              | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x41U] 
                                                 >> 0x1eU))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx 
            = (0xffU & ((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle) 
                        >> 8U));
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__rom_sin
            [vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx)))]);
    } else {
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__rom_sin
            [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__idx)))]);
    }
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__delta 
        = (0x7ffffffU & VL_MULS_III(27, (0x7ffffffU 
                                         & VL_EXTENDS_II(27,17, 
                                                         (0x1ffffU 
                                                          & (VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__val_b)) 
                                                             - 
                                                             VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__val_a)))))), 
                                    (0x7ffffffU & VL_EXTENDS_II(27,9, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__frac)))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__interpolated 
        = (0xffffU & ((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__val_a) 
                      + (0x7ffffffU & VL_SHIFTRS_III(27,27,32, test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__delta, 8U))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__idx 
        = (0xffU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x43U] 
                    >> 6U));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__frac 
        = (0xffU & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x43U] 
                     << 2U) | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x42U] 
                               >> 0x1eU)));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__val_a = 0U;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__val_b = 0U;
    if ((4U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__rom_tanh
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x7fddU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__rom_tanh
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__idx)))]);
            } else {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__rom_sqrt
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__rom_sqrt
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__idx)))]);
            }
        } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__rom_rsq
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__rom_rsq
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__rom_rcp
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x4000U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__rom_rcp
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__rom_log
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__rom_log
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__rom_ex2
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__rom_ex2
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle 
            = (0xffffU & ((IData)(0x4000U) + ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x43U] 
                                               << 2U) 
                                              | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x42U] 
                                                 >> 0x1eU))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx 
            = (0xffU & ((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle) 
                        >> 8U));
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__rom_sin
            [vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx)))]);
    } else {
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__rom_sin
            [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__idx)))]);
    }
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__delta 
        = (0x7ffffffU & VL_MULS_III(27, (0x7ffffffU 
                                         & VL_EXTENDS_II(27,17, 
                                                         (0x1ffffU 
                                                          & (VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__val_b)) 
                                                             - 
                                                             VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__val_a)))))), 
                                    (0x7ffffffU & VL_EXTENDS_II(27,9, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__frac)))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__interpolated 
        = (0xffffU & ((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__val_a) 
                      + (0x7ffffffU & VL_SHIFTRS_III(27,27,32, test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__delta, 8U))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__idx 
        = (0xffU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x44U] 
                    >> 6U));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__frac 
        = (0xffU & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x44U] 
                     << 2U) | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x43U] 
                               >> 0x1eU)));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__val_a = 0U;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__val_b = 0U;
    if ((4U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__rom_tanh
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x7fddU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__rom_tanh
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__idx)))]);
            } else {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__rom_sqrt
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__rom_sqrt
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__idx)))]);
            }
        } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__rom_rsq
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__rom_rsq
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__rom_rcp
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x4000U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__rom_rcp
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__rom_log
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__rom_log
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__rom_ex2
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__rom_ex2
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle 
            = (0xffffU & ((IData)(0x4000U) + ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x44U] 
                                               << 2U) 
                                              | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x43U] 
                                                 >> 0x1eU))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx 
            = (0xffU & ((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle) 
                        >> 8U));
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__rom_sin
            [vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx)))]);
    } else {
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__rom_sin
            [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__idx)))]);
    }
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__delta 
        = (0x7ffffffU & VL_MULS_III(27, (0x7ffffffU 
                                         & VL_EXTENDS_II(27,17, 
                                                         (0x1ffffU 
                                                          & (VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__val_b)) 
                                                             - 
                                                             VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__val_a)))))), 
                                    (0x7ffffffU & VL_EXTENDS_II(27,9, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__frac)))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__interpolated 
        = (0xffffU & ((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__val_a) 
                      + (0x7ffffffU & VL_SHIFTRS_III(27,27,32, test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__delta, 8U))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__idx 
        = (0xffU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x45U] 
                    >> 6U));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__frac 
        = (0xffU & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x45U] 
                     << 2U) | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x44U] 
                               >> 0x1eU)));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__val_a = 0U;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__val_b = 0U;
    if ((4U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__rom_tanh
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x7fddU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__rom_tanh
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__idx)))]);
            } else {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__rom_sqrt
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__rom_sqrt
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__idx)))]);
            }
        } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__rom_rsq
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__rom_rsq
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__rom_rcp
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x4000U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__rom_rcp
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__rom_log
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__rom_log
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__rom_ex2
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__rom_ex2
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle 
            = (0xffffU & ((IData)(0x4000U) + ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x45U] 
                                               << 2U) 
                                              | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x44U] 
                                                 >> 0x1eU))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx 
            = (0xffU & ((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle) 
                        >> 8U));
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__rom_sin
            [vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx)))]);
    } else {
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__rom_sin
            [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__idx)))]);
    }
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__delta 
        = (0x7ffffffU & VL_MULS_III(27, (0x7ffffffU 
                                         & VL_EXTENDS_II(27,17, 
                                                         (0x1ffffU 
                                                          & (VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__val_b)) 
                                                             - 
                                                             VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__val_a)))))), 
                                    (0x7ffffffU & VL_EXTENDS_II(27,9, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__frac)))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__interpolated 
        = (0xffffU & ((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__val_a) 
                      + (0x7ffffffU & VL_SHIFTRS_III(27,27,32, test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__delta, 8U))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__idx 
        = (0xffU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x46U] 
                    >> 6U));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__frac 
        = (0xffU & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x46U] 
                     << 2U) | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x45U] 
                               >> 0x1eU)));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__val_a = 0U;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__val_b = 0U;
    if ((4U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__rom_tanh
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x7fddU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__rom_tanh
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__idx)))]);
            } else {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__rom_sqrt
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__rom_sqrt
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__idx)))]);
            }
        } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__rom_rsq
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__rom_rsq
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__rom_rcp
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x4000U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__rom_rcp
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__rom_log
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__rom_log
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__rom_ex2
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__rom_ex2
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle 
            = (0xffffU & ((IData)(0x4000U) + ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x46U] 
                                               << 2U) 
                                              | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x45U] 
                                                 >> 0x1eU))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx 
            = (0xffU & ((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle) 
                        >> 8U));
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__rom_sin
            [vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx)))]);
    } else {
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__rom_sin
            [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__idx)))]);
    }
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__delta 
        = (0x7ffffffU & VL_MULS_III(27, (0x7ffffffU 
                                         & VL_EXTENDS_II(27,17, 
                                                         (0x1ffffU 
                                                          & (VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__val_b)) 
                                                             - 
                                                             VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__val_a)))))), 
                                    (0x7ffffffU & VL_EXTENDS_II(27,9, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__frac)))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__interpolated 
        = (0xffffU & ((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__val_a) 
                      + (0x7ffffffU & VL_SHIFTRS_III(27,27,32, test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__delta, 8U))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__idx 
        = (0xffU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x47U] 
                    >> 6U));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__frac 
        = (0xffU & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x47U] 
                     << 2U) | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x46U] 
                               >> 0x1eU)));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__val_a = 0U;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__val_b = 0U;
    if ((4U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__rom_tanh
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x7fddU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__rom_tanh
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__idx)))]);
            } else {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__rom_sqrt
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__rom_sqrt
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__idx)))]);
            }
        } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__rom_rsq
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__rom_rsq
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__rom_rcp
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x4000U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__rom_rcp
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__rom_log
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__rom_log
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__rom_ex2
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__rom_ex2
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle 
            = (0xffffU & ((IData)(0x4000U) + ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x47U] 
                                               << 2U) 
                                              | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x46U] 
                                                 >> 0x1eU))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx 
            = (0xffU & ((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle) 
                        >> 8U));
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__rom_sin
            [vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx)))]);
    } else {
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__rom_sin
            [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__idx)))]);
    }
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__delta 
        = (0x7ffffffU & VL_MULS_III(27, (0x7ffffffU 
                                         & VL_EXTENDS_II(27,17, 
                                                         (0x1ffffU 
                                                          & (VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__val_b)) 
                                                             - 
                                                             VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__val_a)))))), 
                                    (0x7ffffffU & VL_EXTENDS_II(27,9, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__frac)))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__interpolated 
        = (0xffffU & ((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__val_a) 
                      + (0x7ffffffU & VL_SHIFTRS_III(27,27,32, test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__delta, 8U))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__idx 
        = (0xffU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x48U] 
                    >> 6U));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__frac 
        = (0xffU & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x48U] 
                     << 2U) | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x47U] 
                               >> 0x1eU)));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__val_a = 0U;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__val_b = 0U;
    if ((4U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__rom_tanh
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x7fddU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__rom_tanh
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__idx)))]);
            } else {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__rom_sqrt
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__rom_sqrt
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__idx)))]);
            }
        } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__rom_rsq
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__rom_rsq
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__rom_rcp
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x4000U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__rom_rcp
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__rom_log
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__rom_log
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__rom_ex2
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__rom_ex2
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle 
            = (0xffffU & ((IData)(0x4000U) + ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x48U] 
                                               << 2U) 
                                              | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x47U] 
                                                 >> 0x1eU))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx 
            = (0xffU & ((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle) 
                        >> 8U));
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__rom_sin
            [vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx)))]);
    } else {
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__rom_sin
            [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__idx)))]);
    }
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__delta 
        = (0x7ffffffU & VL_MULS_III(27, (0x7ffffffU 
                                         & VL_EXTENDS_II(27,17, 
                                                         (0x1ffffU 
                                                          & (VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__val_b)) 
                                                             - 
                                                             VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__val_a)))))), 
                                    (0x7ffffffU & VL_EXTENDS_II(27,9, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__frac)))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__interpolated 
        = (0xffffU & ((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__val_a) 
                      + (0x7ffffffU & VL_SHIFTRS_III(27,27,32, test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__delta, 8U))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__idx 
        = (0xffU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x49U] 
                    >> 6U));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__frac 
        = (0xffU & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x49U] 
                     << 2U) | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x48U] 
                               >> 0x1eU)));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__val_a = 0U;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__val_b = 0U;
    if ((4U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__rom_tanh
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x7fddU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__rom_tanh
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__idx)))]);
            } else {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__rom_sqrt
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__rom_sqrt
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__idx)))]);
            }
        } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__rom_rsq
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__rom_rsq
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__rom_rcp
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x4000U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__rom_rcp
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__rom_log
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__rom_log
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__rom_ex2
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__rom_ex2
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle 
            = (0xffffU & ((IData)(0x4000U) + ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x49U] 
                                               << 2U) 
                                              | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x48U] 
                                                 >> 0x1eU))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx 
            = (0xffU & ((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle) 
                        >> 8U));
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__rom_sin
            [vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx)))]);
    } else {
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__rom_sin
            [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__idx)))]);
    }
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__delta 
        = (0x7ffffffU & VL_MULS_III(27, (0x7ffffffU 
                                         & VL_EXTENDS_II(27,17, 
                                                         (0x1ffffU 
                                                          & (VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__val_b)) 
                                                             - 
                                                             VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__val_a)))))), 
                                    (0x7ffffffU & VL_EXTENDS_II(27,9, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__frac)))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__interpolated 
        = (0xffffU & ((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__val_a) 
                      + (0x7ffffffU & VL_SHIFTRS_III(27,27,32, test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__delta, 8U))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__idx 
        = (0xffU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x4aU] 
                    >> 6U));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__frac 
        = (0xffU & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x4aU] 
                     << 2U) | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x49U] 
                               >> 0x1eU)));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__val_a = 0U;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__val_b = 0U;
    if ((4U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__rom_tanh
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x7fddU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__rom_tanh
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__idx)))]);
            } else {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__rom_sqrt
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__rom_sqrt
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__idx)))]);
            }
        } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__rom_rsq
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__rom_rsq
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__rom_rcp
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x4000U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__rom_rcp
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__rom_log
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__rom_log
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__rom_ex2
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__rom_ex2
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle 
            = (0xffffU & ((IData)(0x4000U) + ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x4aU] 
                                               << 2U) 
                                              | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x49U] 
                                                 >> 0x1eU))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx 
            = (0xffU & ((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle) 
                        >> 8U));
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__rom_sin
            [vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx)))]);
    } else {
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__rom_sin
            [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__idx)))]);
    }
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__delta 
        = (0x7ffffffU & VL_MULS_III(27, (0x7ffffffU 
                                         & VL_EXTENDS_II(27,17, 
                                                         (0x1ffffU 
                                                          & (VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__val_b)) 
                                                             - 
                                                             VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__val_a)))))), 
                                    (0x7ffffffU & VL_EXTENDS_II(27,9, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__frac)))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__interpolated 
        = (0xffffU & ((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__val_a) 
                      + (0x7ffffffU & VL_SHIFTRS_III(27,27,32, test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__delta, 8U))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__idx 
        = (0xffU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x4bU] 
                    >> 6U));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__frac 
        = (0xffU & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x4bU] 
                     << 2U) | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x4aU] 
                               >> 0x1eU)));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__val_a = 0U;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__val_b = 0U;
    if ((4U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__rom_tanh
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x7fddU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__rom_tanh
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__idx)))]);
            } else {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__rom_sqrt
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__rom_sqrt
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__idx)))]);
            }
        } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__rom_rsq
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__rom_rsq
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__rom_rcp
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x4000U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__rom_rcp
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__rom_log
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__rom_log
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__rom_ex2
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__rom_ex2
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle 
            = (0xffffU & ((IData)(0x4000U) + ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x4bU] 
                                               << 2U) 
                                              | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x4aU] 
                                                 >> 0x1eU))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx 
            = (0xffU & ((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle) 
                        >> 8U));
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__rom_sin
            [vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx)))]);
    } else {
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__rom_sin
            [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__idx)))]);
    }
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__delta 
        = (0x7ffffffU & VL_MULS_III(27, (0x7ffffffU 
                                         & VL_EXTENDS_II(27,17, 
                                                         (0x1ffffU 
                                                          & (VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__val_b)) 
                                                             - 
                                                             VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__val_a)))))), 
                                    (0x7ffffffU & VL_EXTENDS_II(27,9, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__frac)))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__interpolated 
        = (0xffffU & ((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__val_a) 
                      + (0x7ffffffU & VL_SHIFTRS_III(27,27,32, test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__delta, 8U))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__idx 
        = (0xffU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x4cU] 
                    >> 6U));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__frac 
        = (0xffU & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x4cU] 
                     << 2U) | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x4bU] 
                               >> 0x1eU)));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__val_a = 0U;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__val_b = 0U;
    if ((4U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__rom_tanh
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x7fddU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__rom_tanh
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__idx)))]);
            } else {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__rom_sqrt
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__rom_sqrt
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__idx)))]);
            }
        } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__rom_rsq
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__rom_rsq
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__rom_rcp
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x4000U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__rom_rcp
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__rom_log
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__rom_log
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__rom_ex2
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__rom_ex2
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle 
            = (0xffffU & ((IData)(0x4000U) + ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x4cU] 
                                               << 2U) 
                                              | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x4bU] 
                                                 >> 0x1eU))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx 
            = (0xffU & ((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle) 
                        >> 8U));
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__rom_sin
            [vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx)))]);
    } else {
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__rom_sin
            [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__idx)))]);
    }
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__delta 
        = (0x7ffffffU & VL_MULS_III(27, (0x7ffffffU 
                                         & VL_EXTENDS_II(27,17, 
                                                         (0x1ffffU 
                                                          & (VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__val_b)) 
                                                             - 
                                                             VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__val_a)))))), 
                                    (0x7ffffffU & VL_EXTENDS_II(27,9, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__frac)))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__interpolated 
        = (0xffffU & ((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__val_a) 
                      + (0x7ffffffU & VL_SHIFTRS_III(27,27,32, test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__delta, 8U))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__idx 
        = (0xffU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x4dU] 
                    >> 6U));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__frac 
        = (0xffU & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x4dU] 
                     << 2U) | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x4cU] 
                               >> 0x1eU)));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__val_a = 0U;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__val_b = 0U;
    if ((4U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__rom_tanh
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x7fddU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__rom_tanh
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__idx)))]);
            } else {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__rom_sqrt
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__rom_sqrt
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__idx)))]);
            }
        } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__rom_rsq
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__rom_rsq
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__rom_rcp
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x4000U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__rom_rcp
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__rom_log
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__rom_log
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__rom_ex2
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__rom_ex2
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle 
            = (0xffffU & ((IData)(0x4000U) + ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x4dU] 
                                               << 2U) 
                                              | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x4cU] 
                                                 >> 0x1eU))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx 
            = (0xffU & ((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle) 
                        >> 8U));
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__rom_sin
            [vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx)))]);
    } else {
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__rom_sin
            [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__idx)))]);
    }
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__delta 
        = (0x7ffffffU & VL_MULS_III(27, (0x7ffffffU 
                                         & VL_EXTENDS_II(27,17, 
                                                         (0x1ffffU 
                                                          & (VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__val_b)) 
                                                             - 
                                                             VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__val_a)))))), 
                                    (0x7ffffffU & VL_EXTENDS_II(27,9, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__frac)))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__interpolated 
        = (0xffffU & ((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__val_a) 
                      + (0x7ffffffU & VL_SHIFTRS_III(27,27,32, test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__delta, 8U))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__idx 
        = (0xffU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x4eU] 
                    >> 6U));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__frac 
        = (0xffU & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x4eU] 
                     << 2U) | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x4dU] 
                               >> 0x1eU)));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__val_a = 0U;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__val_b = 0U;
    if ((4U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__rom_tanh
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x7fddU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__rom_tanh
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__idx)))]);
            } else {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__rom_sqrt
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__rom_sqrt
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__idx)))]);
            }
        } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__rom_rsq
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__rom_rsq
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__rom_rcp
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x4000U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__rom_rcp
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__rom_log
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__rom_log
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__rom_ex2
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__rom_ex2
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle 
            = (0xffffU & ((IData)(0x4000U) + ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x4eU] 
                                               << 2U) 
                                              | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x4dU] 
                                                 >> 0x1eU))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx 
            = (0xffU & ((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle) 
                        >> 8U));
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__rom_sin
            [vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx)))]);
    } else {
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__rom_sin
            [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__idx)))]);
    }
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__delta 
        = (0x7ffffffU & VL_MULS_III(27, (0x7ffffffU 
                                         & VL_EXTENDS_II(27,17, 
                                                         (0x1ffffU 
                                                          & (VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__val_b)) 
                                                             - 
                                                             VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__val_a)))))), 
                                    (0x7ffffffU & VL_EXTENDS_II(27,9, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__frac)))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__interpolated 
        = (0xffffU & ((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__val_a) 
                      + (0x7ffffffU & VL_SHIFTRS_III(27,27,32, test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__delta, 8U))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__idx 
        = (0xffU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x4fU] 
                    >> 6U));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__frac 
        = (0xffU & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x4fU] 
                     << 2U) | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x4eU] 
                               >> 0x1eU)));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__val_a = 0U;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__val_b = 0U;
    if ((4U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__rom_tanh
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x7fddU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__rom_tanh
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__idx)))]);
            } else {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__rom_sqrt
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__rom_sqrt
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__idx)))]);
            }
        } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__rom_rsq
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__rom_rsq
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__rom_rcp
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x4000U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__rom_rcp
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__rom_log
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__rom_log
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__rom_ex2
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__rom_ex2
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle 
            = (0xffffU & ((IData)(0x4000U) + ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x4fU] 
                                               << 2U) 
                                              | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x4eU] 
                                                 >> 0x1eU))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx 
            = (0xffU & ((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle) 
                        >> 8U));
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__rom_sin
            [vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx)))]);
    } else {
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__rom_sin
            [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__idx)))]);
    }
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__delta 
        = (0x7ffffffU & VL_MULS_III(27, (0x7ffffffU 
                                         & VL_EXTENDS_II(27,17, 
                                                         (0x1ffffU 
                                                          & (VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__val_b)) 
                                                             - 
                                                             VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__val_a)))))), 
                                    (0x7ffffffU & VL_EXTENDS_II(27,9, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__frac)))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__interpolated 
        = (0xffffU & ((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__val_a) 
                      + (0x7ffffffU & VL_SHIFTRS_III(27,27,32, test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__delta, 8U))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__idx 
        = (0xffU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x50U] 
                    >> 6U));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__frac 
        = (0xffU & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x50U] 
                     << 2U) | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x4fU] 
                               >> 0x1eU)));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__val_a = 0U;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__val_b = 0U;
    if ((4U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__rom_tanh
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x7fddU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__rom_tanh
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__idx)))]);
            } else {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__rom_sqrt
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__rom_sqrt
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__idx)))]);
            }
        } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__rom_rsq
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__rom_rsq
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__rom_rcp
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x4000U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__rom_rcp
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__rom_log
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__rom_log
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__rom_ex2
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__rom_ex2
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle 
            = (0xffffU & ((IData)(0x4000U) + ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x50U] 
                                               << 2U) 
                                              | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x4fU] 
                                                 >> 0x1eU))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx 
            = (0xffU & ((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle) 
                        >> 8U));
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__rom_sin
            [vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx)))]);
    } else {
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__rom_sin
            [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__idx)))]);
    }
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__delta 
        = (0x7ffffffU & VL_MULS_III(27, (0x7ffffffU 
                                         & VL_EXTENDS_II(27,17, 
                                                         (0x1ffffU 
                                                          & (VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__val_b)) 
                                                             - 
                                                             VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__val_a)))))), 
                                    (0x7ffffffU & VL_EXTENDS_II(27,9, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__frac)))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__interpolated 
        = (0xffffU & ((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__val_a) 
                      + (0x7ffffffU & VL_SHIFTRS_III(27,27,32, test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__delta, 8U))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__idx 
        = (0xffU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x51U] 
                    >> 6U));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__frac 
        = (0xffU & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x51U] 
                     << 2U) | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x50U] 
                               >> 0x1eU)));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__val_a = 0U;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__val_b = 0U;
    if ((4U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__rom_tanh
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x7fddU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__rom_tanh
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__idx)))]);
            } else {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__rom_sqrt
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__rom_sqrt
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__idx)))]);
            }
        } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__rom_rsq
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__rom_rsq
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__rom_rcp
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x4000U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__rom_rcp
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__rom_log
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__rom_log
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__rom_ex2
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__rom_ex2
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle 
            = (0xffffU & ((IData)(0x4000U) + ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x51U] 
                                               << 2U) 
                                              | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x50U] 
                                                 >> 0x1eU))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx 
            = (0xffU & ((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle) 
                        >> 8U));
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__rom_sin
            [vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx)))]);
    } else {
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__rom_sin
            [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__idx)))]);
    }
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__delta 
        = (0x7ffffffU & VL_MULS_III(27, (0x7ffffffU 
                                         & VL_EXTENDS_II(27,17, 
                                                         (0x1ffffU 
                                                          & (VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__val_b)) 
                                                             - 
                                                             VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__val_a)))))), 
                                    (0x7ffffffU & VL_EXTENDS_II(27,9, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__frac)))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__interpolated 
        = (0xffffU & ((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__val_a) 
                      + (0x7ffffffU & VL_SHIFTRS_III(27,27,32, test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__delta, 8U))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__idx 
        = (0xffU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x52U] 
                    >> 6U));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__frac 
        = (0xffU & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x52U] 
                     << 2U) | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x51U] 
                               >> 0x1eU)));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__val_a = 0U;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__val_b = 0U;
    if ((4U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__rom_tanh
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x7fddU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__rom_tanh
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__idx)))]);
            } else {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__rom_sqrt
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__rom_sqrt
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__idx)))]);
            }
        } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__rom_rsq
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__rom_rsq
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__rom_rcp
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x4000U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__rom_rcp
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__rom_log
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__rom_log
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__rom_ex2
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__rom_ex2
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle 
            = (0xffffU & ((IData)(0x4000U) + ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x52U] 
                                               << 2U) 
                                              | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x51U] 
                                                 >> 0x1eU))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx 
            = (0xffU & ((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle) 
                        >> 8U));
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__rom_sin
            [vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx)))]);
    } else {
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__rom_sin
            [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__idx)))]);
    }
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__delta 
        = (0x7ffffffU & VL_MULS_III(27, (0x7ffffffU 
                                         & VL_EXTENDS_II(27,17, 
                                                         (0x1ffffU 
                                                          & (VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__val_b)) 
                                                             - 
                                                             VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__val_a)))))), 
                                    (0x7ffffffU & VL_EXTENDS_II(27,9, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__frac)))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__interpolated 
        = (0xffffU & ((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__val_a) 
                      + (0x7ffffffU & VL_SHIFTRS_III(27,27,32, test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__delta, 8U))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__idx 
        = (0xffU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x53U] 
                    >> 6U));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__frac 
        = (0xffU & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x53U] 
                     << 2U) | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x52U] 
                               >> 0x1eU)));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__val_a = 0U;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__val_b = 0U;
    if ((4U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__rom_tanh
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x7fddU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__rom_tanh
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__idx)))]);
            } else {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__rom_sqrt
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__rom_sqrt
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__idx)))]);
            }
        } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__rom_rsq
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__rom_rsq
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__rom_rcp
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x4000U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__rom_rcp
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__rom_log
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__rom_log
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__rom_ex2
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__rom_ex2
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle 
            = (0xffffU & ((IData)(0x4000U) + ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x53U] 
                                               << 2U) 
                                              | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x52U] 
                                                 >> 0x1eU))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx 
            = (0xffU & ((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle) 
                        >> 8U));
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__rom_sin
            [vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx)))]);
    } else {
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__rom_sin
            [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__idx)))]);
    }
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__delta 
        = (0x7ffffffU & VL_MULS_III(27, (0x7ffffffU 
                                         & VL_EXTENDS_II(27,17, 
                                                         (0x1ffffU 
                                                          & (VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__val_b)) 
                                                             - 
                                                             VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__val_a)))))), 
                                    (0x7ffffffU & VL_EXTENDS_II(27,9, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__frac)))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__interpolated 
        = (0xffffU & ((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__val_a) 
                      + (0x7ffffffU & VL_SHIFTRS_III(27,27,32, test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__delta, 8U))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__idx 
        = (0xffU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x54U] 
                    >> 6U));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__frac 
        = (0xffU & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x54U] 
                     << 2U) | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x53U] 
                               >> 0x1eU)));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__val_a = 0U;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__val_b = 0U;
    if ((4U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__rom_tanh
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x7fddU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__rom_tanh
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__idx)))]);
            } else {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__rom_sqrt
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__rom_sqrt
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__idx)))]);
            }
        } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__rom_rsq
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__rom_rsq
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__rom_rcp
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x4000U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__rom_rcp
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__rom_log
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__rom_log
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__rom_ex2
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__rom_ex2
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle 
            = (0xffffU & ((IData)(0x4000U) + ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x54U] 
                                               << 2U) 
                                              | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x53U] 
                                                 >> 0x1eU))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx 
            = (0xffU & ((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle) 
                        >> 8U));
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__rom_sin
            [vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx)))]);
    } else {
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__rom_sin
            [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__idx)))]);
    }
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__delta 
        = (0x7ffffffU & VL_MULS_III(27, (0x7ffffffU 
                                         & VL_EXTENDS_II(27,17, 
                                                         (0x1ffffU 
                                                          & (VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__val_b)) 
                                                             - 
                                                             VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__val_a)))))), 
                                    (0x7ffffffU & VL_EXTENDS_II(27,9, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__frac)))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__interpolated 
        = (0xffffU & ((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__val_a) 
                      + (0x7ffffffU & VL_SHIFTRS_III(27,27,32, test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__delta, 8U))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__idx 
        = (0xffU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x55U] 
                    >> 6U));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__frac 
        = (0xffU & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x55U] 
                     << 2U) | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x54U] 
                               >> 0x1eU)));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__val_a = 0U;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__val_b = 0U;
    if ((4U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__rom_tanh
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x7fddU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__rom_tanh
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__idx)))]);
            } else {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__rom_sqrt
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__rom_sqrt
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__idx)))]);
            }
        } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__rom_rsq
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__rom_rsq
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__rom_rcp
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x4000U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__rom_rcp
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__rom_log
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__rom_log
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__rom_ex2
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__rom_ex2
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle 
            = (0xffffU & ((IData)(0x4000U) + ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x55U] 
                                               << 2U) 
                                              | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x54U] 
                                                 >> 0x1eU))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx 
            = (0xffU & ((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle) 
                        >> 8U));
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__rom_sin
            [vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx)))]);
    } else {
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__rom_sin
            [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__idx)))]);
    }
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__delta 
        = (0x7ffffffU & VL_MULS_III(27, (0x7ffffffU 
                                         & VL_EXTENDS_II(27,17, 
                                                         (0x1ffffU 
                                                          & (VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__val_b)) 
                                                             - 
                                                             VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__val_a)))))), 
                                    (0x7ffffffU & VL_EXTENDS_II(27,9, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__frac)))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__interpolated 
        = (0xffffU & ((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__val_a) 
                      + (0x7ffffffU & VL_SHIFTRS_III(27,27,32, test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__delta, 8U))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__idx 
        = (0xffU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x56U] 
                    >> 6U));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__frac 
        = (0xffU & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x56U] 
                     << 2U) | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x55U] 
                               >> 0x1eU)));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__val_a = 0U;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__val_b = 0U;
    if ((4U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__rom_tanh
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x7fddU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__rom_tanh
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__idx)))]);
            } else {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__rom_sqrt
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__rom_sqrt
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__idx)))]);
            }
        } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__rom_rsq
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__rom_rsq
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__rom_rcp
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x4000U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__rom_rcp
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__rom_log
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__rom_log
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__rom_ex2
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__rom_ex2
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle 
            = (0xffffU & ((IData)(0x4000U) + ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x56U] 
                                               << 2U) 
                                              | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x55U] 
                                                 >> 0x1eU))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx 
            = (0xffU & ((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle) 
                        >> 8U));
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__rom_sin
            [vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx)))]);
    } else {
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__rom_sin
            [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__idx)))]);
    }
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__delta 
        = (0x7ffffffU & VL_MULS_III(27, (0x7ffffffU 
                                         & VL_EXTENDS_II(27,17, 
                                                         (0x1ffffU 
                                                          & (VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__val_b)) 
                                                             - 
                                                             VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__val_a)))))), 
                                    (0x7ffffffU & VL_EXTENDS_II(27,9, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__frac)))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__interpolated 
        = (0xffffU & ((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__val_a) 
                      + (0x7ffffffU & VL_SHIFTRS_III(27,27,32, test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__delta, 8U))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__idx 
        = (0xffU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x57U] 
                    >> 6U));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__frac 
        = (0xffU & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x57U] 
                     << 2U) | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x56U] 
                               >> 0x1eU)));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__val_a = 0U;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__val_b = 0U;
    if ((4U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__rom_tanh
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x7fddU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__rom_tanh
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__idx)))]);
            } else {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__rom_sqrt
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__rom_sqrt
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__idx)))]);
            }
        } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__rom_rsq
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__rom_rsq
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__rom_rcp
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x4000U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__rom_rcp
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__rom_log
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__rom_log
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__rom_ex2
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__rom_ex2
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle 
            = (0xffffU & ((IData)(0x4000U) + ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x57U] 
                                               << 2U) 
                                              | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x56U] 
                                                 >> 0x1eU))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx 
            = (0xffU & ((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle) 
                        >> 8U));
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__rom_sin
            [vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx)))]);
    } else {
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__rom_sin
            [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__idx)))]);
    }
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__delta 
        = (0x7ffffffU & VL_MULS_III(27, (0x7ffffffU 
                                         & VL_EXTENDS_II(27,17, 
                                                         (0x1ffffU 
                                                          & (VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__val_b)) 
                                                             - 
                                                             VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__val_a)))))), 
                                    (0x7ffffffU & VL_EXTENDS_II(27,9, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__frac)))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__interpolated 
        = (0xffffU & ((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__val_a) 
                      + (0x7ffffffU & VL_SHIFTRS_III(27,27,32, test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__delta, 8U))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__idx 
        = (0xffU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x58U] 
                    >> 6U));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__frac 
        = (0xffU & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x58U] 
                     << 2U) | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x57U] 
                               >> 0x1eU)));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__val_a = 0U;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__val_b = 0U;
    if ((4U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__rom_tanh
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x7fddU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__rom_tanh
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__idx)))]);
            } else {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__rom_sqrt
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__rom_sqrt
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__idx)))]);
            }
        } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__rom_rsq
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__rom_rsq
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__rom_rcp
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x4000U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__rom_rcp
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__rom_log
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__rom_log
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__rom_ex2
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__rom_ex2
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle 
            = (0xffffU & ((IData)(0x4000U) + ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x58U] 
                                               << 2U) 
                                              | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x57U] 
                                                 >> 0x1eU))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx 
            = (0xffU & ((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle) 
                        >> 8U));
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__rom_sin
            [vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx)))]);
    } else {
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__rom_sin
            [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__idx)))]);
    }
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__delta 
        = (0x7ffffffU & VL_MULS_III(27, (0x7ffffffU 
                                         & VL_EXTENDS_II(27,17, 
                                                         (0x1ffffU 
                                                          & (VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__val_b)) 
                                                             - 
                                                             VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__val_a)))))), 
                                    (0x7ffffffU & VL_EXTENDS_II(27,9, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__frac)))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__interpolated 
        = (0xffffU & ((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__val_a) 
                      + (0x7ffffffU & VL_SHIFTRS_III(27,27,32, test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__delta, 8U))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__idx 
        = (0xffU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x59U] 
                    >> 6U));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__frac 
        = (0xffU & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x59U] 
                     << 2U) | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x58U] 
                               >> 0x1eU)));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__val_a = 0U;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__val_b = 0U;
    if ((4U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__rom_tanh
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x7fddU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__rom_tanh
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__idx)))]);
            } else {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__rom_sqrt
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__rom_sqrt
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__idx)))]);
            }
        } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__rom_rsq
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__rom_rsq
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__rom_rcp
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x4000U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__rom_rcp
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__rom_log
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__rom_log
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__rom_ex2
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__rom_ex2
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle 
            = (0xffffU & ((IData)(0x4000U) + ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x59U] 
                                               << 2U) 
                                              | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x58U] 
                                                 >> 0x1eU))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx 
            = (0xffU & ((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle) 
                        >> 8U));
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__rom_sin
            [vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx)))]);
    } else {
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__rom_sin
            [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__idx)))]);
    }
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__delta 
        = (0x7ffffffU & VL_MULS_III(27, (0x7ffffffU 
                                         & VL_EXTENDS_II(27,17, 
                                                         (0x1ffffU 
                                                          & (VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__val_b)) 
                                                             - 
                                                             VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__val_a)))))), 
                                    (0x7ffffffU & VL_EXTENDS_II(27,9, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__frac)))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__interpolated 
        = (0xffffU & ((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__val_a) 
                      + (0x7ffffffU & VL_SHIFTRS_III(27,27,32, test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__delta, 8U))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__idx 
        = (0xffU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x5aU] 
                    >> 6U));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__frac 
        = (0xffU & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x5aU] 
                     << 2U) | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x59U] 
                               >> 0x1eU)));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__val_a = 0U;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__val_b = 0U;
    if ((4U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__rom_tanh
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x7fddU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__rom_tanh
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__idx)))]);
            } else {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__rom_sqrt
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__rom_sqrt
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__idx)))]);
            }
        } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__rom_rsq
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__rom_rsq
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__rom_rcp
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x4000U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__rom_rcp
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__rom_log
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__rom_log
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__rom_ex2
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__rom_ex2
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle 
            = (0xffffU & ((IData)(0x4000U) + ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x5aU] 
                                               << 2U) 
                                              | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x59U] 
                                                 >> 0x1eU))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx 
            = (0xffU & ((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle) 
                        >> 8U));
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__rom_sin
            [vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx)))]);
    } else {
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__rom_sin
            [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__idx)))]);
    }
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__delta 
        = (0x7ffffffU & VL_MULS_III(27, (0x7ffffffU 
                                         & VL_EXTENDS_II(27,17, 
                                                         (0x1ffffU 
                                                          & (VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__val_b)) 
                                                             - 
                                                             VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__val_a)))))), 
                                    (0x7ffffffU & VL_EXTENDS_II(27,9, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__frac)))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__interpolated 
        = (0xffffU & ((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__val_a) 
                      + (0x7ffffffU & VL_SHIFTRS_III(27,27,32, test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__delta, 8U))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__idx 
        = (0xffU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x5bU] 
                    >> 6U));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__frac 
        = (0xffU & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x5bU] 
                     << 2U) | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x5aU] 
                               >> 0x1eU)));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__val_a = 0U;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__val_b = 0U;
    if ((4U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__rom_tanh
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x7fddU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__rom_tanh
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__idx)))]);
            } else {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__rom_sqrt
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__rom_sqrt
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__idx)))]);
            }
        } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__rom_rsq
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__rom_rsq
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__rom_rcp
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x4000U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__rom_rcp
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__rom_log
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__rom_log
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__rom_ex2
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__rom_ex2
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle 
            = (0xffffU & ((IData)(0x4000U) + ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x5bU] 
                                               << 2U) 
                                              | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x5aU] 
                                                 >> 0x1eU))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx 
            = (0xffU & ((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle) 
                        >> 8U));
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__rom_sin
            [vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx)))]);
    } else {
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__rom_sin
            [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__idx)))]);
    }
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__delta 
        = (0x7ffffffU & VL_MULS_III(27, (0x7ffffffU 
                                         & VL_EXTENDS_II(27,17, 
                                                         (0x1ffffU 
                                                          & (VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__val_b)) 
                                                             - 
                                                             VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__val_a)))))), 
                                    (0x7ffffffU & VL_EXTENDS_II(27,9, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__frac)))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__interpolated 
        = (0xffffU & ((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__val_a) 
                      + (0x7ffffffU & VL_SHIFTRS_III(27,27,32, test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__delta, 8U))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__idx 
        = (0xffU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x5cU] 
                    >> 6U));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__frac 
        = (0xffU & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x5cU] 
                     << 2U) | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x5bU] 
                               >> 0x1eU)));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__val_a = 0U;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__val_b = 0U;
    if ((4U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__rom_tanh
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x7fddU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__rom_tanh
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__idx)))]);
            } else {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__rom_sqrt
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__rom_sqrt
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__idx)))]);
            }
        } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__rom_rsq
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__rom_rsq
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__rom_rcp
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x4000U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__rom_rcp
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__rom_log
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__rom_log
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__rom_ex2
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__rom_ex2
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle 
            = (0xffffU & ((IData)(0x4000U) + ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x5cU] 
                                               << 2U) 
                                              | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x5bU] 
                                                 >> 0x1eU))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx 
            = (0xffU & ((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle) 
                        >> 8U));
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__rom_sin
            [vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx)))]);
    } else {
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__rom_sin
            [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__idx)))]);
    }
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__delta 
        = (0x7ffffffU & VL_MULS_III(27, (0x7ffffffU 
                                         & VL_EXTENDS_II(27,17, 
                                                         (0x1ffffU 
                                                          & (VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__val_b)) 
                                                             - 
                                                             VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__val_a)))))), 
                                    (0x7ffffffU & VL_EXTENDS_II(27,9, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__frac)))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__interpolated 
        = (0xffffU & ((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__val_a) 
                      + (0x7ffffffU & VL_SHIFTRS_III(27,27,32, test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__delta, 8U))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__idx 
        = (0xffU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x5dU] 
                    >> 6U));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__frac 
        = (0xffU & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x5dU] 
                     << 2U) | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x5cU] 
                               >> 0x1eU)));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__val_a = 0U;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__val_b = 0U;
    if ((4U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__rom_tanh
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x7fddU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__rom_tanh
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__idx)))]);
            } else {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__rom_sqrt
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__rom_sqrt
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__idx)))]);
            }
        } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__rom_rsq
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__rom_rsq
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__rom_rcp
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x4000U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__rom_rcp
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__rom_log
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__rom_log
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__rom_ex2
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__rom_ex2
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle 
            = (0xffffU & ((IData)(0x4000U) + ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x5dU] 
                                               << 2U) 
                                              | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x5cU] 
                                                 >> 0x1eU))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx 
            = (0xffU & ((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle) 
                        >> 8U));
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__rom_sin
            [vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx)))]);
    } else {
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__rom_sin
            [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__idx)))]);
    }
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__delta 
        = (0x7ffffffU & VL_MULS_III(27, (0x7ffffffU 
                                         & VL_EXTENDS_II(27,17, 
                                                         (0x1ffffU 
                                                          & (VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__val_b)) 
                                                             - 
                                                             VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__val_a)))))), 
                                    (0x7ffffffU & VL_EXTENDS_II(27,9, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__frac)))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__interpolated 
        = (0xffffU & ((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__val_a) 
                      + (0x7ffffffU & VL_SHIFTRS_III(27,27,32, test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__delta, 8U))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__idx 
        = (0xffU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x5eU] 
                    >> 6U));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__frac 
        = (0xffU & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x5eU] 
                     << 2U) | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x5dU] 
                               >> 0x1eU)));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__val_a = 0U;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__val_b = 0U;
    if ((4U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__rom_tanh
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x7fddU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__rom_tanh
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__idx)))]);
            } else {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__rom_sqrt
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__rom_sqrt
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__idx)))]);
            }
        } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__rom_rsq
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__rom_rsq
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__rom_rcp
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x4000U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__rom_rcp
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__rom_log
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__rom_log
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__rom_ex2
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__rom_ex2
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle 
            = (0xffffU & ((IData)(0x4000U) + ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x5eU] 
                                               << 2U) 
                                              | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x5dU] 
                                                 >> 0x1eU))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx 
            = (0xffU & ((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle) 
                        >> 8U));
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__rom_sin
            [vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx)))]);
    } else {
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__rom_sin
            [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__idx)))]);
    }
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__delta 
        = (0x7ffffffU & VL_MULS_III(27, (0x7ffffffU 
                                         & VL_EXTENDS_II(27,17, 
                                                         (0x1ffffU 
                                                          & (VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__val_b)) 
                                                             - 
                                                             VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__val_a)))))), 
                                    (0x7ffffffU & VL_EXTENDS_II(27,9, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__frac)))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__interpolated 
        = (0xffffU & ((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__val_a) 
                      + (0x7ffffffU & VL_SHIFTRS_III(27,27,32, test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__delta, 8U))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__idx 
        = (0xffU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x5fU] 
                    >> 6U));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__frac 
        = (0xffU & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x5fU] 
                     << 2U) | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x5eU] 
                               >> 0x1eU)));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__val_a = 0U;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__val_b = 0U;
    if ((4U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__rom_tanh
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x7fddU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__rom_tanh
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__idx)))]);
            } else {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__rom_sqrt
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__rom_sqrt
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__idx)))]);
            }
        } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__rom_rsq
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__rom_rsq
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__rom_rcp
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x4000U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__rom_rcp
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__rom_log
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__rom_log
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__rom_ex2
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__rom_ex2
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle 
            = (0xffffU & ((IData)(0x4000U) + ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x5fU] 
                                               << 2U) 
                                              | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x5eU] 
                                                 >> 0x1eU))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx 
            = (0xffU & ((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle) 
                        >> 8U));
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__rom_sin
            [vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx)))]);
    } else {
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__rom_sin
            [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__idx)))]);
    }
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__delta 
        = (0x7ffffffU & VL_MULS_III(27, (0x7ffffffU 
                                         & VL_EXTENDS_II(27,17, 
                                                         (0x1ffffU 
                                                          & (VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__val_b)) 
                                                             - 
                                                             VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__val_a)))))), 
                                    (0x7ffffffU & VL_EXTENDS_II(27,9, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__frac)))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__interpolated 
        = (0xffffU & ((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__val_a) 
                      + (0x7ffffffU & VL_SHIFTRS_III(27,27,32, test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__delta, 8U))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__idx 
        = (0xffU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x60U] 
                    >> 6U));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__frac 
        = (0xffU & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x60U] 
                     << 2U) | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x5fU] 
                               >> 0x1eU)));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__val_a = 0U;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__val_b = 0U;
    if ((4U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__rom_tanh
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x7fddU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__rom_tanh
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__idx)))]);
            } else {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__rom_sqrt
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__rom_sqrt
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__idx)))]);
            }
        } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__rom_rsq
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__rom_rsq
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__rom_rcp
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x4000U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__rom_rcp
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__rom_log
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__rom_log
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__rom_ex2
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__rom_ex2
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle 
            = (0xffffU & ((IData)(0x4000U) + ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x60U] 
                                               << 2U) 
                                              | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x5fU] 
                                                 >> 0x1eU))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx 
            = (0xffU & ((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle) 
                        >> 8U));
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__rom_sin
            [vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx)))]);
    } else {
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__rom_sin
            [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__idx)))]);
    }
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__delta 
        = (0x7ffffffU & VL_MULS_III(27, (0x7ffffffU 
                                         & VL_EXTENDS_II(27,17, 
                                                         (0x1ffffU 
                                                          & (VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__val_b)) 
                                                             - 
                                                             VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__val_a)))))), 
                                    (0x7ffffffU & VL_EXTENDS_II(27,9, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__frac)))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__interpolated 
        = (0xffffU & ((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__val_a) 
                      + (0x7ffffffU & VL_SHIFTRS_III(27,27,32, test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__delta, 8U))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__idx 
        = (0xffU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x61U] 
                    >> 6U));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__frac 
        = (0xffU & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x61U] 
                     << 2U) | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x60U] 
                               >> 0x1eU)));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__val_a = 0U;
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__val_b = 0U;
    if ((4U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__rom_tanh
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x7fddU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__rom_tanh
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__idx)))]);
            } else {
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__val_a 
                    = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__rom_sqrt
                    [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__idx];
                test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__val_b 
                    = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__idx))
                        ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__rom_sqrt
                       [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__idx)))]);
            }
        } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__rom_rsq
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x5a82U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__rom_rsq
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__rom_rcp
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x4000U : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__rom_rcp
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((2U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__rom_log
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__rom_log
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__idx)))]);
        } else {
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__val_a 
                = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__rom_ex2
                [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__idx];
            test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__val_b 
                = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__idx))
                    ? 0x7fffU : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__rom_ex2
                   [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__idx)))]);
        }
    } else if ((1U & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_op_code))) {
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle 
            = (0xffffU & ((IData)(0x4000U) + ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x61U] 
                                               << 2U) 
                                              | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__fpu_inst_exec[0x60U] 
                                                 >> 0x1eU))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx 
            = (0xffU & ((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_angle) 
                        >> 8U));
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__rom_sin
            [vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__unnamedblk1__DOT__cos_idx)))]);
    } else {
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__val_a 
            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__rom_sin
            [test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__idx];
        test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__val_b 
            = ((0xffU == (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__idx))
                ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__rom_sin
               [0U] : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__rom_sin
               [(0xffU & ((IData)(1U) + (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__idx)))]);
    }
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__delta 
        = (0x7ffffffU & VL_MULS_III(27, (0x7ffffffU 
                                         & VL_EXTENDS_II(27,17, 
                                                         (0x1ffffU 
                                                          & (VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__val_b)) 
                                                             - 
                                                             VL_EXTENDS_II(17,16, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__val_a)))))), 
                                    (0x7ffffffU & VL_EXTENDS_II(27,9, (IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__frac)))));
    test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__interpolated 
        = (0xffffU & ((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__val_a) 
                      + (0x7ffffffU & VL_SHIFTRS_III(27,27,32, test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__delta, 8U))));
    vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu = 0U;
    if ((1U & (~ (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_empty)))) {
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id 
            = (7U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[1U] 
                     >> 0x1aU));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_neg 
            = (1U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[1U] 
                     >> 0x1dU));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = (0xfffffffeU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals);
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = ((0xfffffffeU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals) 
               | ((7U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                  || (1U & ((((IData)((0xa000U == (0xa000U 
                                                   & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]))) 
                              & ((0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U] 
                                           >> 8U)) 
                                 == (0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                              >> 0xeU)))) 
                             & ((0xffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]) 
                                == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)))
                             ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0U]
                             : ((6U >= (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                                && (1U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__preds
                                          [((0x17U 
                                             >= (0x1fU 
                                                 & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                    >> 0xeU)))
                                             ? (0x1fU 
                                                & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                   >> 0xeU))
                                             : 0U)]
                                          [0U] >> (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id))))))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu 
            = ((0xfffffffeU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu) 
               | (1U & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x61U] 
                         >> 0x1eU) & ((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_neg)
                                       ? (~ vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals)
                                       : vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = (0xfffffffdU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals);
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = ((0xfffffffdU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals) 
               | (((7U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                   || (1U & ((((IData)((0xa000U == 
                                        (0xa000U & 
                                         vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]))) 
                               & ((0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U] 
                                            >> 8U)) 
                                  == (0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                               >> 0xeU)))) 
                              & ((0xffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]) 
                                 == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)))
                              ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[1U]
                              : ((6U >= (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                                 && (1U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__preds
                                           [((0x17U 
                                              >= (0x1fU 
                                                  & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                     >> 0xeU)))
                                              ? (0x1fU 
                                                 & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                    >> 0xeU))
                                              : 0U)]
                                           [1U] >> (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id))))))) 
                  << 1U));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu 
            = ((0xfffffffdU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu) 
               | (2U & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x61U] 
                         >> 0x1eU) & (((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_neg)
                                        ? (~ (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
                                              >> 1U))
                                        : (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
                                           >> 1U)) 
                                      << 1U))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = (0xfffffffbU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals);
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = ((0xfffffffbU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals) 
               | (((7U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                   || (1U & ((((IData)((0xa000U == 
                                        (0xa000U & 
                                         vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]))) 
                               & ((0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U] 
                                            >> 8U)) 
                                  == (0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                               >> 0xeU)))) 
                              & ((0xffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]) 
                                 == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)))
                              ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[2U]
                              : ((6U >= (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                                 && (1U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__preds
                                           [((0x17U 
                                              >= (0x1fU 
                                                  & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                     >> 0xeU)))
                                              ? (0x1fU 
                                                 & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                    >> 0xeU))
                                              : 0U)]
                                           [2U] >> (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id))))))) 
                  << 2U));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu 
            = ((0xfffffffbU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu) 
               | (4U & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x62U] 
                         & ((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_neg)
                             ? (~ (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
                                   >> 2U)) : (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
                                              >> 2U))) 
                        << 2U)));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = (0xfffffff7U & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals);
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = ((0xfffffff7U & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals) 
               | (((7U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                   || (1U & ((((IData)((0xa000U == 
                                        (0xa000U & 
                                         vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]))) 
                               & ((0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U] 
                                            >> 8U)) 
                                  == (0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                               >> 0xeU)))) 
                              & ((0xffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]) 
                                 == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)))
                              ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[3U]
                              : ((6U >= (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                                 && (1U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__preds
                                           [((0x17U 
                                              >= (0x1fU 
                                                  & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                     >> 0xeU)))
                                              ? (0x1fU 
                                                 & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                    >> 0xeU))
                                              : 0U)]
                                           [3U] >> (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id))))))) 
                  << 3U));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu 
            = ((0xfffffff7U & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu) 
               | (8U & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x62U] 
                         << 2U) & (((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_neg)
                                     ? (~ (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
                                           >> 3U)) : 
                                    (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
                                     >> 3U)) << 3U))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = (0xffffffefU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals);
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = ((0xffffffefU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals) 
               | (((7U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                   || (1U & ((((IData)((0xa000U == 
                                        (0xa000U & 
                                         vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]))) 
                               & ((0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U] 
                                            >> 8U)) 
                                  == (0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                               >> 0xeU)))) 
                              & ((0xffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]) 
                                 == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)))
                              ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[4U]
                              : ((6U >= (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                                 && (1U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__preds
                                           [((0x17U 
                                              >= (0x1fU 
                                                  & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                     >> 0xeU)))
                                              ? (0x1fU 
                                                 & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                    >> 0xeU))
                                              : 0U)]
                                           [4U] >> (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id))))))) 
                  << 4U));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu 
            = ((0xffffffefU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu) 
               | (0x10U & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x62U] 
                            << 2U) & (((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_neg)
                                        ? (~ (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
                                              >> 4U))
                                        : (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
                                           >> 4U)) 
                                      << 4U))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = (0xffffffdfU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals);
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = ((0xffffffdfU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals) 
               | (((7U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                   || (1U & ((((IData)((0xa000U == 
                                        (0xa000U & 
                                         vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]))) 
                               & ((0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U] 
                                            >> 8U)) 
                                  == (0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                               >> 0xeU)))) 
                              & ((0xffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]) 
                                 == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)))
                              ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[5U]
                              : ((6U >= (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                                 && (1U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__preds
                                           [((0x17U 
                                              >= (0x1fU 
                                                  & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                     >> 0xeU)))
                                              ? (0x1fU 
                                                 & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                    >> 0xeU))
                                              : 0U)]
                                           [5U] >> (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id))))))) 
                  << 5U));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu 
            = ((0xffffffdfU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu) 
               | (0x20U & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x62U] 
                            << 2U) & (((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_neg)
                                        ? (~ (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
                                              >> 5U))
                                        : (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
                                           >> 5U)) 
                                      << 5U))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = (0xffffffbfU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals);
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = ((0xffffffbfU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals) 
               | (((7U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                   || (1U & ((((IData)((0xa000U == 
                                        (0xa000U & 
                                         vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]))) 
                               & ((0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U] 
                                            >> 8U)) 
                                  == (0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                               >> 0xeU)))) 
                              & ((0xffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]) 
                                 == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)))
                              ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[6U]
                              : ((6U >= (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                                 && (1U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__preds
                                           [((0x17U 
                                              >= (0x1fU 
                                                  & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                     >> 0xeU)))
                                              ? (0x1fU 
                                                 & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                    >> 0xeU))
                                              : 0U)]
                                           [6U] >> (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id))))))) 
                  << 6U));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu 
            = ((0xffffffbfU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu) 
               | (0x40U & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x62U] 
                            << 2U) & (((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_neg)
                                        ? (~ (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
                                              >> 6U))
                                        : (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
                                           >> 6U)) 
                                      << 6U))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = (0xffffff7fU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals);
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = ((0xffffff7fU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals) 
               | (((7U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                   || (1U & ((((IData)((0xa000U == 
                                        (0xa000U & 
                                         vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]))) 
                               & ((0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U] 
                                            >> 8U)) 
                                  == (0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                               >> 0xeU)))) 
                              & ((0xffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]) 
                                 == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)))
                              ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[7U]
                              : ((6U >= (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                                 && (1U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__preds
                                           [((0x17U 
                                              >= (0x1fU 
                                                  & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                     >> 0xeU)))
                                              ? (0x1fU 
                                                 & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                    >> 0xeU))
                                              : 0U)]
                                           [7U] >> (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id))))))) 
                  << 7U));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu 
            = ((0xffffff7fU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu) 
               | (0x80U & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x62U] 
                            << 2U) & (((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_neg)
                                        ? (~ (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
                                              >> 7U))
                                        : (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
                                           >> 7U)) 
                                      << 7U))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = (0xfffffeffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals);
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = ((0xfffffeffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals) 
               | (((7U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                   || (1U & ((((IData)((0xa000U == 
                                        (0xa000U & 
                                         vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]))) 
                               & ((0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U] 
                                            >> 8U)) 
                                  == (0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                               >> 0xeU)))) 
                              & ((0xffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]) 
                                 == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)))
                              ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[8U]
                              : ((6U >= (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                                 && (1U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__preds
                                           [((0x17U 
                                              >= (0x1fU 
                                                  & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                     >> 0xeU)))
                                              ? (0x1fU 
                                                 & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                    >> 0xeU))
                                              : 0U)]
                                           [8U] >> (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id))))))) 
                  << 8U));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu 
            = ((0xfffffeffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu) 
               | (0x100U & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x62U] 
                             << 2U) & (((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_neg)
                                         ? (~ (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
                                               >> 8U))
                                         : (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
                                            >> 8U)) 
                                       << 8U))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = (0xfffffdffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals);
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = ((0xfffffdffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals) 
               | (((7U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                   || (1U & ((((IData)((0xa000U == 
                                        (0xa000U & 
                                         vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]))) 
                               & ((0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U] 
                                            >> 8U)) 
                                  == (0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                               >> 0xeU)))) 
                              & ((0xffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]) 
                                 == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)))
                              ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[9U]
                              : ((6U >= (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                                 && (1U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__preds
                                           [((0x17U 
                                              >= (0x1fU 
                                                  & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                     >> 0xeU)))
                                              ? (0x1fU 
                                                 & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                    >> 0xeU))
                                              : 0U)]
                                           [9U] >> (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id))))))) 
                  << 9U));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu 
            = ((0xfffffdffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu) 
               | (0x200U & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x62U] 
                             << 2U) & (((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_neg)
                                         ? (~ (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
                                               >> 9U))
                                         : (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
                                            >> 9U)) 
                                       << 9U))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = (0xfffffbffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals);
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = ((0xfffffbffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals) 
               | (((7U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                   || (1U & ((((IData)((0xa000U == 
                                        (0xa000U & 
                                         vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]))) 
                               & ((0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U] 
                                            >> 8U)) 
                                  == (0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                               >> 0xeU)))) 
                              & ((0xffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]) 
                                 == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)))
                              ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0xaU]
                              : ((6U >= (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                                 && (1U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__preds
                                           [((0x17U 
                                              >= (0x1fU 
                                                  & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                     >> 0xeU)))
                                              ? (0x1fU 
                                                 & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                    >> 0xeU))
                                              : 0U)]
                                           [0xaU] >> (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id))))))) 
                  << 0xaU));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu 
            = ((0xfffffbffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu) 
               | (0x400U & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x62U] 
                             << 2U) & (((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_neg)
                                         ? (~ (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
                                               >> 0xaU))
                                         : (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
                                            >> 0xaU)) 
                                       << 0xaU))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = (0xfffff7ffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals);
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = ((0xfffff7ffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals) 
               | (((7U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                   || (1U & ((((IData)((0xa000U == 
                                        (0xa000U & 
                                         vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]))) 
                               & ((0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U] 
                                            >> 8U)) 
                                  == (0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                               >> 0xeU)))) 
                              & ((0xffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]) 
                                 == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)))
                              ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0xbU]
                              : ((6U >= (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                                 && (1U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__preds
                                           [((0x17U 
                                              >= (0x1fU 
                                                  & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                     >> 0xeU)))
                                              ? (0x1fU 
                                                 & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                    >> 0xeU))
                                              : 0U)]
                                           [0xbU] >> (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id))))))) 
                  << 0xbU));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu 
            = ((0xfffff7ffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu) 
               | (0x800U & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x62U] 
                             << 2U) & (((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_neg)
                                         ? (~ (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
                                               >> 0xbU))
                                         : (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
                                            >> 0xbU)) 
                                       << 0xbU))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = (0xffffefffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals);
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = ((0xffffefffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals) 
               | (((7U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                   || (1U & ((((IData)((0xa000U == 
                                        (0xa000U & 
                                         vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]))) 
                               & ((0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U] 
                                            >> 8U)) 
                                  == (0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                               >> 0xeU)))) 
                              & ((0xffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]) 
                                 == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)))
                              ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0xcU]
                              : ((6U >= (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                                 && (1U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__preds
                                           [((0x17U 
                                              >= (0x1fU 
                                                  & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                     >> 0xeU)))
                                              ? (0x1fU 
                                                 & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                    >> 0xeU))
                                              : 0U)]
                                           [0xcU] >> (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id))))))) 
                  << 0xcU));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu 
            = ((0xffffefffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu) 
               | (0x1000U & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x62U] 
                              << 2U) & (((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_neg)
                                          ? (~ (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
                                                >> 0xcU))
                                          : (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
                                             >> 0xcU)) 
                                        << 0xcU))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = (0xffffdfffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals);
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = ((0xffffdfffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals) 
               | (((7U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                   || (1U & ((((IData)((0xa000U == 
                                        (0xa000U & 
                                         vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]))) 
                               & ((0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U] 
                                            >> 8U)) 
                                  == (0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                               >> 0xeU)))) 
                              & ((0xffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]) 
                                 == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)))
                              ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0xdU]
                              : ((6U >= (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                                 && (1U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__preds
                                           [((0x17U 
                                              >= (0x1fU 
                                                  & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                     >> 0xeU)))
                                              ? (0x1fU 
                                                 & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                    >> 0xeU))
                                              : 0U)]
                                           [0xdU] >> (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id))))))) 
                  << 0xdU));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu 
            = ((0xffffdfffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu) 
               | (0x2000U & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x62U] 
                              << 2U) & (((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_neg)
                                          ? (~ (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
                                                >> 0xdU))
                                          : (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
                                             >> 0xdU)) 
                                        << 0xdU))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = (0xffffbfffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals);
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = ((0xffffbfffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals) 
               | (((7U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                   || (1U & ((((IData)((0xa000U == 
                                        (0xa000U & 
                                         vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]))) 
                               & ((0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U] 
                                            >> 8U)) 
                                  == (0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                               >> 0xeU)))) 
                              & ((0xffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]) 
                                 == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)))
                              ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0xeU]
                              : ((6U >= (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                                 && (1U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__preds
                                           [((0x17U 
                                              >= (0x1fU 
                                                  & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                     >> 0xeU)))
                                              ? (0x1fU 
                                                 & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                    >> 0xeU))
                                              : 0U)]
                                           [0xeU] >> (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id))))))) 
                  << 0xeU));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu 
            = ((0xffffbfffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu) 
               | (0x4000U & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x62U] 
                              << 2U) & (((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_neg)
                                          ? (~ (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
                                                >> 0xeU))
                                          : (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
                                             >> 0xeU)) 
                                        << 0xeU))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = (0xffff7fffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals);
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = ((0xffff7fffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals) 
               | (((7U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                   || (1U & ((((IData)((0xa000U == 
                                        (0xa000U & 
                                         vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]))) 
                               & ((0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U] 
                                            >> 8U)) 
                                  == (0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                               >> 0xeU)))) 
                              & ((0xffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]) 
                                 == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)))
                              ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0xfU]
                              : ((6U >= (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                                 && (1U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__preds
                                           [((0x17U 
                                              >= (0x1fU 
                                                  & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                     >> 0xeU)))
                                              ? (0x1fU 
                                                 & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                    >> 0xeU))
                                              : 0U)]
                                           [0xfU] >> (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id))))))) 
                  << 0xfU));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu 
            = ((0xffff7fffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu) 
               | (0x8000U & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x62U] 
                              << 2U) & (((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_neg)
                                          ? (~ (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
                                                >> 0xfU))
                                          : (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
                                             >> 0xfU)) 
                                        << 0xfU))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = (0xfffeffffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals);
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = ((0xfffeffffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals) 
               | (((7U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                   || (1U & ((((IData)((0xa000U == 
                                        (0xa000U & 
                                         vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]))) 
                               & ((0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U] 
                                            >> 8U)) 
                                  == (0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                               >> 0xeU)))) 
                              & ((0xffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]) 
                                 == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)))
                              ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x10U]
                              : ((6U >= (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                                 && (1U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__preds
                                           [((0x17U 
                                              >= (0x1fU 
                                                  & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                     >> 0xeU)))
                                              ? (0x1fU 
                                                 & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                    >> 0xeU))
                                              : 0U)]
                                           [0x10U] 
                                           >> (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id))))))) 
                  << 0x10U));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu 
            = ((0xfffeffffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu) 
               | (0x10000U & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x62U] 
                               << 2U) & (((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_neg)
                                           ? (~ (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
                                                 >> 0x10U))
                                           : (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
                                              >> 0x10U)) 
                                         << 0x10U))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = (0xfffdffffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals);
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = ((0xfffdffffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals) 
               | (((7U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                   || (1U & ((((IData)((0xa000U == 
                                        (0xa000U & 
                                         vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]))) 
                               & ((0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U] 
                                            >> 8U)) 
                                  == (0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                               >> 0xeU)))) 
                              & ((0xffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]) 
                                 == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)))
                              ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x11U]
                              : ((6U >= (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                                 && (1U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__preds
                                           [((0x17U 
                                              >= (0x1fU 
                                                  & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                     >> 0xeU)))
                                              ? (0x1fU 
                                                 & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                    >> 0xeU))
                                              : 0U)]
                                           [0x11U] 
                                           >> (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id))))))) 
                  << 0x11U));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu 
            = ((0xfffdffffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu) 
               | (0x20000U & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x62U] 
                               << 2U) & (((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_neg)
                                           ? (~ (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
                                                 >> 0x11U))
                                           : (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
                                              >> 0x11U)) 
                                         << 0x11U))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = (0xfffbffffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals);
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = ((0xfffbffffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals) 
               | (((7U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                   || (1U & ((((IData)((0xa000U == 
                                        (0xa000U & 
                                         vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]))) 
                               & ((0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U] 
                                            >> 8U)) 
                                  == (0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                               >> 0xeU)))) 
                              & ((0xffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]) 
                                 == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)))
                              ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x12U]
                              : ((6U >= (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                                 && (1U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__preds
                                           [((0x17U 
                                              >= (0x1fU 
                                                  & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                     >> 0xeU)))
                                              ? (0x1fU 
                                                 & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                    >> 0xeU))
                                              : 0U)]
                                           [0x12U] 
                                           >> (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id))))))) 
                  << 0x12U));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu 
            = ((0xfffbffffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu) 
               | (0x40000U & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x62U] 
                               << 2U) & (((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_neg)
                                           ? (~ (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
                                                 >> 0x12U))
                                           : (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
                                              >> 0x12U)) 
                                         << 0x12U))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = (0xfff7ffffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals);
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = ((0xfff7ffffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals) 
               | (((7U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                   || (1U & ((((IData)((0xa000U == 
                                        (0xa000U & 
                                         vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]))) 
                               & ((0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U] 
                                            >> 8U)) 
                                  == (0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                               >> 0xeU)))) 
                              & ((0xffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]) 
                                 == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)))
                              ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x13U]
                              : ((6U >= (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                                 && (1U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__preds
                                           [((0x17U 
                                              >= (0x1fU 
                                                  & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                     >> 0xeU)))
                                              ? (0x1fU 
                                                 & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                    >> 0xeU))
                                              : 0U)]
                                           [0x13U] 
                                           >> (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id))))))) 
                  << 0x13U));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu 
            = ((0xfff7ffffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu) 
               | (0x80000U & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x62U] 
                               << 2U) & (((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_neg)
                                           ? (~ (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
                                                 >> 0x13U))
                                           : (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
                                              >> 0x13U)) 
                                         << 0x13U))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = (0xffefffffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals);
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = ((0xffefffffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals) 
               | (((7U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                   || (1U & ((((IData)((0xa000U == 
                                        (0xa000U & 
                                         vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]))) 
                               & ((0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U] 
                                            >> 8U)) 
                                  == (0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                               >> 0xeU)))) 
                              & ((0xffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]) 
                                 == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)))
                              ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x14U]
                              : ((6U >= (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                                 && (1U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__preds
                                           [((0x17U 
                                              >= (0x1fU 
                                                  & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                     >> 0xeU)))
                                              ? (0x1fU 
                                                 & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                    >> 0xeU))
                                              : 0U)]
                                           [0x14U] 
                                           >> (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id))))))) 
                  << 0x14U));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu 
            = ((0xffefffffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu) 
               | (0x100000U & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x62U] 
                                << 2U) & (((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_neg)
                                            ? (~ (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
                                                  >> 0x14U))
                                            : (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
                                               >> 0x14U)) 
                                          << 0x14U))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = (0xffdfffffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals);
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = ((0xffdfffffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals) 
               | (((7U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                   || (1U & ((((IData)((0xa000U == 
                                        (0xa000U & 
                                         vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]))) 
                               & ((0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U] 
                                            >> 8U)) 
                                  == (0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                               >> 0xeU)))) 
                              & ((0xffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]) 
                                 == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)))
                              ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x15U]
                              : ((6U >= (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                                 && (1U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__preds
                                           [((0x17U 
                                              >= (0x1fU 
                                                  & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                     >> 0xeU)))
                                              ? (0x1fU 
                                                 & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                    >> 0xeU))
                                              : 0U)]
                                           [0x15U] 
                                           >> (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id))))))) 
                  << 0x15U));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu 
            = ((0xffdfffffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu) 
               | (0x200000U & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x62U] 
                                << 2U) & (((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_neg)
                                            ? (~ (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
                                                  >> 0x15U))
                                            : (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
                                               >> 0x15U)) 
                                          << 0x15U))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = (0xffbfffffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals);
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = ((0xffbfffffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals) 
               | (((7U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                   || (1U & ((((IData)((0xa000U == 
                                        (0xa000U & 
                                         vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]))) 
                               & ((0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U] 
                                            >> 8U)) 
                                  == (0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                               >> 0xeU)))) 
                              & ((0xffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]) 
                                 == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)))
                              ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x16U]
                              : ((6U >= (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                                 && (1U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__preds
                                           [((0x17U 
                                              >= (0x1fU 
                                                  & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                     >> 0xeU)))
                                              ? (0x1fU 
                                                 & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                    >> 0xeU))
                                              : 0U)]
                                           [0x16U] 
                                           >> (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id))))))) 
                  << 0x16U));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu 
            = ((0xffbfffffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu) 
               | (0x400000U & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x62U] 
                                << 2U) & (((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_neg)
                                            ? (~ (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
                                                  >> 0x16U))
                                            : (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
                                               >> 0x16U)) 
                                          << 0x16U))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = (0xff7fffffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals);
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = ((0xff7fffffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals) 
               | (((7U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                   || (1U & ((((IData)((0xa000U == 
                                        (0xa000U & 
                                         vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]))) 
                               & ((0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U] 
                                            >> 8U)) 
                                  == (0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                               >> 0xeU)))) 
                              & ((0xffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]) 
                                 == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)))
                              ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x17U]
                              : ((6U >= (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                                 && (1U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__preds
                                           [((0x17U 
                                              >= (0x1fU 
                                                  & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                     >> 0xeU)))
                                              ? (0x1fU 
                                                 & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                    >> 0xeU))
                                              : 0U)]
                                           [0x17U] 
                                           >> (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id))))))) 
                  << 0x17U));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu 
            = ((0xff7fffffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu) 
               | (0x800000U & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x62U] 
                                << 2U) & (((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_neg)
                                            ? (~ (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
                                                  >> 0x17U))
                                            : (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
                                               >> 0x17U)) 
                                          << 0x17U))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = (0xfeffffffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals);
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = ((0xfeffffffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals) 
               | (((7U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                   || (1U & ((((IData)((0xa000U == 
                                        (0xa000U & 
                                         vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]))) 
                               & ((0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U] 
                                            >> 8U)) 
                                  == (0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                               >> 0xeU)))) 
                              & ((0xffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]) 
                                 == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)))
                              ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x18U]
                              : ((6U >= (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                                 && (1U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__preds
                                           [((0x17U 
                                              >= (0x1fU 
                                                  & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                     >> 0xeU)))
                                              ? (0x1fU 
                                                 & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                    >> 0xeU))
                                              : 0U)]
                                           [0x18U] 
                                           >> (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id))))))) 
                  << 0x18U));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu 
            = ((0xfeffffffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu) 
               | (0x1000000U & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x62U] 
                                 << 2U) & (((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_neg)
                                             ? (~ (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
                                                   >> 0x18U))
                                             : (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
                                                >> 0x18U)) 
                                           << 0x18U))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = (0xfdffffffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals);
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = ((0xfdffffffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals) 
               | (((7U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                   || (1U & ((((IData)((0xa000U == 
                                        (0xa000U & 
                                         vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]))) 
                               & ((0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U] 
                                            >> 8U)) 
                                  == (0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                               >> 0xeU)))) 
                              & ((0xffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]) 
                                 == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)))
                              ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x19U]
                              : ((6U >= (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                                 && (1U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__preds
                                           [((0x17U 
                                              >= (0x1fU 
                                                  & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                     >> 0xeU)))
                                              ? (0x1fU 
                                                 & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                    >> 0xeU))
                                              : 0U)]
                                           [0x19U] 
                                           >> (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id))))))) 
                  << 0x19U));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu 
            = ((0xfdffffffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu) 
               | (0x2000000U & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x62U] 
                                 << 2U) & (((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_neg)
                                             ? (~ (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
                                                   >> 0x19U))
                                             : (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
                                                >> 0x19U)) 
                                           << 0x19U))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = (0xfbffffffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals);
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = ((0xfbffffffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals) 
               | (((7U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                   || (1U & ((((IData)((0xa000U == 
                                        (0xa000U & 
                                         vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]))) 
                               & ((0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U] 
                                            >> 8U)) 
                                  == (0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                               >> 0xeU)))) 
                              & ((0xffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]) 
                                 == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)))
                              ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x1aU]
                              : ((6U >= (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                                 && (1U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__preds
                                           [((0x17U 
                                              >= (0x1fU 
                                                  & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                     >> 0xeU)))
                                              ? (0x1fU 
                                                 & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                    >> 0xeU))
                                              : 0U)]
                                           [0x1aU] 
                                           >> (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id))))))) 
                  << 0x1aU));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu 
            = ((0xfbffffffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu) 
               | (0x4000000U & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x62U] 
                                 << 2U) & (((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_neg)
                                             ? (~ (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
                                                   >> 0x1aU))
                                             : (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
                                                >> 0x1aU)) 
                                           << 0x1aU))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = (0xf7ffffffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals);
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = ((0xf7ffffffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals) 
               | (((7U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                   || (1U & ((((IData)((0xa000U == 
                                        (0xa000U & 
                                         vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]))) 
                               & ((0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U] 
                                            >> 8U)) 
                                  == (0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                               >> 0xeU)))) 
                              & ((0xffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]) 
                                 == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)))
                              ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x1bU]
                              : ((6U >= (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                                 && (1U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__preds
                                           [((0x17U 
                                              >= (0x1fU 
                                                  & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                     >> 0xeU)))
                                              ? (0x1fU 
                                                 & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                    >> 0xeU))
                                              : 0U)]
                                           [0x1bU] 
                                           >> (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id))))))) 
                  << 0x1bU));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu 
            = ((0xf7ffffffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu) 
               | (0x8000000U & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x62U] 
                                 << 2U) & (((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_neg)
                                             ? (~ (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
                                                   >> 0x1bU))
                                             : (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
                                                >> 0x1bU)) 
                                           << 0x1bU))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = (0xefffffffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals);
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = ((0xefffffffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals) 
               | (((7U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                   || (1U & ((((IData)((0xa000U == 
                                        (0xa000U & 
                                         vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]))) 
                               & ((0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U] 
                                            >> 8U)) 
                                  == (0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                               >> 0xeU)))) 
                              & ((0xffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]) 
                                 == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)))
                              ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x1cU]
                              : ((6U >= (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                                 && (1U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__preds
                                           [((0x17U 
                                              >= (0x1fU 
                                                  & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                     >> 0xeU)))
                                              ? (0x1fU 
                                                 & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                    >> 0xeU))
                                              : 0U)]
                                           [0x1cU] 
                                           >> (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id))))))) 
                  << 0x1cU));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu 
            = ((0xefffffffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu) 
               | (0x10000000U & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x62U] 
                                  << 2U) & (((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_neg)
                                              ? (~ 
                                                 (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
                                                  >> 0x1cU))
                                              : (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
                                                 >> 0x1cU)) 
                                            << 0x1cU))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = (0xdfffffffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals);
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = ((0xdfffffffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals) 
               | (((7U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                   || (1U & ((((IData)((0xa000U == 
                                        (0xa000U & 
                                         vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]))) 
                               & ((0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U] 
                                            >> 8U)) 
                                  == (0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                               >> 0xeU)))) 
                              & ((0xffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]) 
                                 == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)))
                              ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x1dU]
                              : ((6U >= (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                                 && (1U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__preds
                                           [((0x17U 
                                              >= (0x1fU 
                                                  & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                     >> 0xeU)))
                                              ? (0x1fU 
                                                 & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                    >> 0xeU))
                                              : 0U)]
                                           [0x1dU] 
                                           >> (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id))))))) 
                  << 0x1dU));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu 
            = ((0xdfffffffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu) 
               | (0x20000000U & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x62U] 
                                  << 2U) & (((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_neg)
                                              ? (~ 
                                                 (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
                                                  >> 0x1dU))
                                              : (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
                                                 >> 0x1dU)) 
                                            << 0x1dU))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = (0xbfffffffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals);
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = ((0xbfffffffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals) 
               | (((7U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                   || (1U & ((((IData)((0xa000U == 
                                        (0xa000U & 
                                         vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]))) 
                               & ((0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U] 
                                            >> 8U)) 
                                  == (0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                               >> 0xeU)))) 
                              & ((0xffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]) 
                                 == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)))
                              ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x1eU]
                              : ((6U >= (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                                 && (1U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__preds
                                           [((0x17U 
                                              >= (0x1fU 
                                                  & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                     >> 0xeU)))
                                              ? (0x1fU 
                                                 & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                    >> 0xeU))
                                              : 0U)]
                                           [0x1eU] 
                                           >> (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id))))))) 
                  << 0x1eU));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu 
            = ((0xbfffffffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu) 
               | (0x40000000U & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x62U] 
                                  << 2U) & (((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_neg)
                                              ? (~ 
                                                 (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
                                                  >> 0x1eU))
                                              : (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
                                                 >> 0x1eU)) 
                                            << 0x1eU))));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = (0x7fffffffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals);
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
            = ((0x7fffffffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals) 
               | (((7U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                   || (1U & ((((IData)((0xa000U == 
                                        (0xa000U & 
                                         vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]))) 
                               & ((0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U] 
                                            >> 8U)) 
                                  == (0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                               >> 0xeU)))) 
                              & ((0xffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x21U]) 
                                 == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)))
                              ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_wb[0x1fU]
                              : ((6U >= (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id)) 
                                 && (1U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__preds
                                           [((0x17U 
                                              >= (0x1fU 
                                                  & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                     >> 0xeU)))
                                              ? (0x1fU 
                                                 & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x65U] 
                                                    >> 0xeU))
                                              : 0U)]
                                           [0x1fU] 
                                           >> (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_id))))))) 
                  << 0x1fU));
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu 
            = ((0x7fffffffU & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__exec_mask_lsu) 
               | (0x80000000U & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_inst_exec[0x62U] 
                                  << 2U) & (((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_neg)
                                              ? (~ 
                                                 (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
                                                  >> 0x1fU))
                                              : (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk29__DOT__p_vals 
                                                 >> 0x1fU)) 
                                            << 0x1fU))));
    }
    vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mock_req_valid 
        = ((~ (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT____VdfgRegularize_h65497209_0_5)) 
           & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT____VdfgRegularize_h65497209_0_0));
    vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_out_32b[0U] 
        = test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__0__KET____DOT__sfu_inst__DOT__interpolated;
    vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_out_32b[1U] 
        = (IData)((((QData)((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__interpolated)) 
                    << 0x20U) | (QData)((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__interpolated))));
    vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_out_32b[2U] 
        = (IData)(((((QData)((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__2__KET____DOT__sfu_inst__DOT__interpolated)) 
                     << 0x20U) | (QData)((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__1__KET____DOT__sfu_inst__DOT__interpolated))) 
                   >> 0x20U));
    vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_out_32b[3U] 
        = test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__3__KET____DOT__sfu_inst__DOT__interpolated;
    vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_out_32b[4U] 
        = (IData)((((QData)((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__interpolated)) 
                    << 0x20U) | (QData)((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__interpolated))));
    vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_out_32b[5U] 
        = (IData)(((((QData)((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__5__KET____DOT__sfu_inst__DOT__interpolated)) 
                     << 0x20U) | (QData)((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__4__KET____DOT__sfu_inst__DOT__interpolated))) 
                   >> 0x20U));
    vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_out_32b[6U] 
        = test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__6__KET____DOT__sfu_inst__DOT__interpolated;
    vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_out_32b[7U] 
        = (IData)((((QData)((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__interpolated)) 
                    << 0x20U) | (QData)((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__interpolated))));
    vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_out_32b[8U] 
        = (IData)(((((QData)((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__8__KET____DOT__sfu_inst__DOT__interpolated)) 
                     << 0x20U) | (QData)((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__7__KET____DOT__sfu_inst__DOT__interpolated))) 
                   >> 0x20U));
    vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_out_32b[9U] 
        = test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__9__KET____DOT__sfu_inst__DOT__interpolated;
    vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_out_32b[0xaU] 
        = (IData)((((QData)((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__interpolated)) 
                    << 0x20U) | (QData)((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__interpolated))));
    vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_out_32b[0xbU] 
        = (IData)(((((QData)((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__11__KET____DOT__sfu_inst__DOT__interpolated)) 
                     << 0x20U) | (QData)((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__10__KET____DOT__sfu_inst__DOT__interpolated))) 
                   >> 0x20U));
    vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_out_32b[0xcU] 
        = test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__12__KET____DOT__sfu_inst__DOT__interpolated;
    vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_out_32b[0xdU] 
        = (IData)((((QData)((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__interpolated)) 
                    << 0x20U) | (QData)((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__interpolated))));
    vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_out_32b[0xeU] 
        = (IData)(((((QData)((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__14__KET____DOT__sfu_inst__DOT__interpolated)) 
                     << 0x20U) | (QData)((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__13__KET____DOT__sfu_inst__DOT__interpolated))) 
                   >> 0x20U));
    vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_out_32b[0xfU] 
        = test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__15__KET____DOT__sfu_inst__DOT__interpolated;
    vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_out_32b[0x10U] 
        = (IData)((((QData)((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__interpolated)) 
                    << 0x20U) | (QData)((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__interpolated))));
    vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_out_32b[0x11U] 
        = (IData)(((((QData)((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__17__KET____DOT__sfu_inst__DOT__interpolated)) 
                     << 0x20U) | (QData)((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__16__KET____DOT__sfu_inst__DOT__interpolated))) 
                   >> 0x20U));
    vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_out_32b[0x12U] 
        = test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__18__KET____DOT__sfu_inst__DOT__interpolated;
    vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_out_32b[0x13U] 
        = (IData)((((QData)((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__interpolated)) 
                    << 0x20U) | (QData)((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__interpolated))));
    vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_out_32b[0x14U] 
        = (IData)(((((QData)((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__20__KET____DOT__sfu_inst__DOT__interpolated)) 
                     << 0x20U) | (QData)((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__19__KET____DOT__sfu_inst__DOT__interpolated))) 
                   >> 0x20U));
    vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_out_32b[0x15U] 
        = test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__21__KET____DOT__sfu_inst__DOT__interpolated;
    vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_out_32b[0x16U] 
        = (IData)((((QData)((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__interpolated)) 
                    << 0x20U) | (QData)((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__interpolated))));
    vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_out_32b[0x17U] 
        = (IData)(((((QData)((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__23__KET____DOT__sfu_inst__DOT__interpolated)) 
                     << 0x20U) | (QData)((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__22__KET____DOT__sfu_inst__DOT__interpolated))) 
                   >> 0x20U));
    vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_out_32b[0x18U] 
        = test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__24__KET____DOT__sfu_inst__DOT__interpolated;
    vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_out_32b[0x19U] 
        = (IData)((((QData)((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__interpolated)) 
                    << 0x20U) | (QData)((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__interpolated))));
    vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_out_32b[0x1aU] 
        = (IData)(((((QData)((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__26__KET____DOT__sfu_inst__DOT__interpolated)) 
                     << 0x20U) | (QData)((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__25__KET____DOT__sfu_inst__DOT__interpolated))) 
                   >> 0x20U));
    vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_out_32b[0x1bU] 
        = test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__27__KET____DOT__sfu_inst__DOT__interpolated;
    vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_out_32b[0x1cU] 
        = (IData)((((QData)((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__interpolated)) 
                    << 0x20U) | (QData)((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__interpolated))));
    vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_out_32b[0x1dU] 
        = (IData)(((((QData)((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__29__KET____DOT__sfu_inst__DOT__interpolated)) 
                     << 0x20U) | (QData)((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__28__KET____DOT__sfu_inst__DOT__interpolated))) 
                   >> 0x20U));
    vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_out_32b[0x1eU] 
        = (IData)((((QData)((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__interpolated)) 
                    << 0x20U) | (QData)((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__interpolated))));
    vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__sfu_out_32b[0x1fU] 
        = (IData)(((((QData)((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__31__KET____DOT__sfu_inst__DOT__interpolated)) 
                     << 0x20U) | (QData)((IData)(test_oc_tiled_matmul__DOT__dut__DOT__sfu_lane__BRA__30__KET____DOT__sfu_inst__DOT__interpolated))) 
                   >> 0x20U));
    vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mock_req_transaction_id 
        = ((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mock_req_valid)
            ? ((0x17U >= (0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_mem[0x41U] 
                                   >> 0x10U))) ? vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__tx_id_fifo_dout
               [(0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__lsu_mem[0x41U] 
                          >> 0x10U))] : 0U) : 0U);
}

VL_INLINE_OPT void Vtest_oc_tiled_matmul___024root___nba_comb__TOP__0(Vtest_oc_tiled_matmul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_oc_tiled_matmul___024root___nba_comb__TOP__0\n"); );
    Vtest_oc_tiled_matmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_pool_full_stall = 0U;
    if ((1U == (7U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__warp_status
                      [0U][2U] >> 7U)))) {
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op 
            = (0xffU & (IData)((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__prog_mem
                                [0U][(0xffU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__warp_status
                                               [0U][3U] 
                                               >> 0xaU))] 
                                >> 0x38U)));
        if ((((0x10U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op)) 
              | (0x11U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op))) 
             & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__tx_id_fifo_empty
             [0U])) {
            vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_pool_full_stall = 1U;
        }
    }
    if ((1U == (7U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__warp_status
                      [1U][2U] >> 7U)))) {
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op 
            = (0xffU & (IData)((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__prog_mem
                                [1U][(0xffU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__warp_status
                                               [1U][3U] 
                                               >> 0xaU))] 
                                >> 0x38U)));
        if ((((0x10U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op)) 
              | (0x11U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op))) 
             & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__tx_id_fifo_empty
             [1U])) {
            vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_pool_full_stall = 1U;
        }
    }
    if ((1U == (7U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__warp_status
                      [2U][2U] >> 7U)))) {
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op 
            = (0xffU & (IData)((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__prog_mem
                                [2U][(0xffU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__warp_status
                                               [2U][3U] 
                                               >> 0xaU))] 
                                >> 0x38U)));
        if ((((0x10U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op)) 
              | (0x11U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op))) 
             & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__tx_id_fifo_empty
             [2U])) {
            vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_pool_full_stall = 1U;
        }
    }
    if ((1U == (7U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__warp_status
                      [3U][2U] >> 7U)))) {
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op 
            = (0xffU & (IData)((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__prog_mem
                                [3U][(0xffU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__warp_status
                                               [3U][3U] 
                                               >> 0xaU))] 
                                >> 0x38U)));
        if ((((0x10U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op)) 
              | (0x11U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op))) 
             & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__tx_id_fifo_empty
             [3U])) {
            vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_pool_full_stall = 1U;
        }
    }
    if ((1U == (7U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__warp_status
                      [4U][2U] >> 7U)))) {
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op 
            = (0xffU & (IData)((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__prog_mem
                                [4U][(0xffU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__warp_status
                                               [4U][3U] 
                                               >> 0xaU))] 
                                >> 0x38U)));
        if ((((0x10U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op)) 
              | (0x11U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op))) 
             & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__tx_id_fifo_empty
             [4U])) {
            vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_pool_full_stall = 1U;
        }
    }
    if ((1U == (7U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__warp_status
                      [5U][2U] >> 7U)))) {
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op 
            = (0xffU & (IData)((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__prog_mem
                                [5U][(0xffU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__warp_status
                                               [5U][3U] 
                                               >> 0xaU))] 
                                >> 0x38U)));
        if ((((0x10U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op)) 
              | (0x11U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op))) 
             & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__tx_id_fifo_empty
             [5U])) {
            vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_pool_full_stall = 1U;
        }
    }
    if ((1U == (7U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__warp_status
                      [6U][2U] >> 7U)))) {
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op 
            = (0xffU & (IData)((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__prog_mem
                                [6U][(0xffU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__warp_status
                                               [6U][3U] 
                                               >> 0xaU))] 
                                >> 0x38U)));
        if ((((0x10U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op)) 
              | (0x11U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op))) 
             & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__tx_id_fifo_empty
             [6U])) {
            vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_pool_full_stall = 1U;
        }
    }
    if ((1U == (7U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__warp_status
                      [7U][2U] >> 7U)))) {
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op 
            = (0xffU & (IData)((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__prog_mem
                                [7U][(0xffU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__warp_status
                                               [7U][3U] 
                                               >> 0xaU))] 
                                >> 0x38U)));
        if ((((0x10U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op)) 
              | (0x11U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op))) 
             & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__tx_id_fifo_empty
             [7U])) {
            vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_pool_full_stall = 1U;
        }
    }
    if ((1U == (7U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__warp_status
                      [8U][2U] >> 7U)))) {
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op 
            = (0xffU & (IData)((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__prog_mem
                                [8U][(0xffU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__warp_status
                                               [8U][3U] 
                                               >> 0xaU))] 
                                >> 0x38U)));
        if ((((0x10U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op)) 
              | (0x11U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op))) 
             & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__tx_id_fifo_empty
             [8U])) {
            vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_pool_full_stall = 1U;
        }
    }
    if ((1U == (7U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__warp_status
                      [9U][2U] >> 7U)))) {
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op 
            = (0xffU & (IData)((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__prog_mem
                                [9U][(0xffU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__warp_status
                                               [9U][3U] 
                                               >> 0xaU))] 
                                >> 0x38U)));
        if ((((0x10U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op)) 
              | (0x11U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op))) 
             & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__tx_id_fifo_empty
             [9U])) {
            vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_pool_full_stall = 1U;
        }
    }
    if ((1U == (7U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__warp_status
                      [0xaU][2U] >> 7U)))) {
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op 
            = (0xffU & (IData)((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__prog_mem
                                [0xaU][(0xffU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__warp_status
                                                 [0xaU][3U] 
                                                 >> 0xaU))] 
                                >> 0x38U)));
        if ((((0x10U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op)) 
              | (0x11U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op))) 
             & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__tx_id_fifo_empty
             [0xaU])) {
            vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_pool_full_stall = 1U;
        }
    }
    if ((1U == (7U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__warp_status
                      [0xbU][2U] >> 7U)))) {
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op 
            = (0xffU & (IData)((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__prog_mem
                                [0xbU][(0xffU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__warp_status
                                                 [0xbU][3U] 
                                                 >> 0xaU))] 
                                >> 0x38U)));
        if ((((0x10U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op)) 
              | (0x11U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op))) 
             & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__tx_id_fifo_empty
             [0xbU])) {
            vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_pool_full_stall = 1U;
        }
    }
    if ((1U == (7U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__warp_status
                      [0xcU][2U] >> 7U)))) {
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op 
            = (0xffU & (IData)((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__prog_mem
                                [0xcU][(0xffU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__warp_status
                                                 [0xcU][3U] 
                                                 >> 0xaU))] 
                                >> 0x38U)));
        if ((((0x10U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op)) 
              | (0x11U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op))) 
             & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__tx_id_fifo_empty
             [0xcU])) {
            vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_pool_full_stall = 1U;
        }
    }
    if ((1U == (7U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__warp_status
                      [0xdU][2U] >> 7U)))) {
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op 
            = (0xffU & (IData)((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__prog_mem
                                [0xdU][(0xffU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__warp_status
                                                 [0xdU][3U] 
                                                 >> 0xaU))] 
                                >> 0x38U)));
        if ((((0x10U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op)) 
              | (0x11U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op))) 
             & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__tx_id_fifo_empty
             [0xdU])) {
            vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_pool_full_stall = 1U;
        }
    }
    if ((1U == (7U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__warp_status
                      [0xeU][2U] >> 7U)))) {
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op 
            = (0xffU & (IData)((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__prog_mem
                                [0xeU][(0xffU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__warp_status
                                                 [0xeU][3U] 
                                                 >> 0xaU))] 
                                >> 0x38U)));
        if ((((0x10U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op)) 
              | (0x11U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op))) 
             & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__tx_id_fifo_empty
             [0xeU])) {
            vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_pool_full_stall = 1U;
        }
    }
    if ((1U == (7U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__warp_status
                      [0xfU][2U] >> 7U)))) {
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op 
            = (0xffU & (IData)((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__prog_mem
                                [0xfU][(0xffU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__warp_status
                                                 [0xfU][3U] 
                                                 >> 0xaU))] 
                                >> 0x38U)));
        if ((((0x10U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op)) 
              | (0x11U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op))) 
             & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__tx_id_fifo_empty
             [0xfU])) {
            vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_pool_full_stall = 1U;
        }
    }
    if ((1U == (7U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__warp_status
                      [0x10U][2U] >> 7U)))) {
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op 
            = (0xffU & (IData)((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__prog_mem
                                [0x10U][(0xffU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__warp_status
                                                  [0x10U][3U] 
                                                  >> 0xaU))] 
                                >> 0x38U)));
        if ((((0x10U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op)) 
              | (0x11U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op))) 
             & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__tx_id_fifo_empty
             [0x10U])) {
            vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_pool_full_stall = 1U;
        }
    }
    if ((1U == (7U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__warp_status
                      [0x11U][2U] >> 7U)))) {
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op 
            = (0xffU & (IData)((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__prog_mem
                                [0x11U][(0xffU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__warp_status
                                                  [0x11U][3U] 
                                                  >> 0xaU))] 
                                >> 0x38U)));
        if ((((0x10U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op)) 
              | (0x11U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op))) 
             & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__tx_id_fifo_empty
             [0x11U])) {
            vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_pool_full_stall = 1U;
        }
    }
    if ((1U == (7U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__warp_status
                      [0x12U][2U] >> 7U)))) {
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op 
            = (0xffU & (IData)((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__prog_mem
                                [0x12U][(0xffU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__warp_status
                                                  [0x12U][3U] 
                                                  >> 0xaU))] 
                                >> 0x38U)));
        if ((((0x10U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op)) 
              | (0x11U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op))) 
             & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__tx_id_fifo_empty
             [0x12U])) {
            vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_pool_full_stall = 1U;
        }
    }
    if ((1U == (7U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__warp_status
                      [0x13U][2U] >> 7U)))) {
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op 
            = (0xffU & (IData)((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__prog_mem
                                [0x13U][(0xffU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__warp_status
                                                  [0x13U][3U] 
                                                  >> 0xaU))] 
                                >> 0x38U)));
        if ((((0x10U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op)) 
              | (0x11U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op))) 
             & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__tx_id_fifo_empty
             [0x13U])) {
            vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_pool_full_stall = 1U;
        }
    }
    if ((1U == (7U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__warp_status
                      [0x14U][2U] >> 7U)))) {
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op 
            = (0xffU & (IData)((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__prog_mem
                                [0x14U][(0xffU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__warp_status
                                                  [0x14U][3U] 
                                                  >> 0xaU))] 
                                >> 0x38U)));
        if ((((0x10U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op)) 
              | (0x11U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op))) 
             & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__tx_id_fifo_empty
             [0x14U])) {
            vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_pool_full_stall = 1U;
        }
    }
    if ((1U == (7U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__warp_status
                      [0x15U][2U] >> 7U)))) {
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op 
            = (0xffU & (IData)((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__prog_mem
                                [0x15U][(0xffU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__warp_status
                                                  [0x15U][3U] 
                                                  >> 0xaU))] 
                                >> 0x38U)));
        if ((((0x10U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op)) 
              | (0x11U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op))) 
             & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__tx_id_fifo_empty
             [0x15U])) {
            vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_pool_full_stall = 1U;
        }
    }
    if ((1U == (7U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__warp_status
                      [0x16U][2U] >> 7U)))) {
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op 
            = (0xffU & (IData)((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__prog_mem
                                [0x16U][(0xffU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__warp_status
                                                  [0x16U][3U] 
                                                  >> 0xaU))] 
                                >> 0x38U)));
        if ((((0x10U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op)) 
              | (0x11U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op))) 
             & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__tx_id_fifo_empty
             [0x16U])) {
            vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_pool_full_stall = 1U;
        }
    }
    if ((1U == (7U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__warp_status
                      [0x17U][2U] >> 7U)))) {
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op 
            = (0xffU & (IData)((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__prog_mem
                                [0x17U][(0xffU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__warp_status
                                                  [0x17U][3U] 
                                                  >> 0xaU))] 
                                >> 0x38U)));
        if ((((0x10U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op)) 
              | (0x11U == (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk8__DOT__unnamedblk9__DOT__op))) 
             & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__tx_id_fifo_empty
             [0x17U])) {
            vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_pool_full_stall = 1U;
        }
    }
}

VL_INLINE_OPT void Vtest_oc_tiled_matmul___024root___nba_comb__TOP__1(Vtest_oc_tiled_matmul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_oc_tiled_matmul___024root___nba_comb__TOP__1\n"); );
    Vtest_oc_tiled_matmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk7__DOT__w;
    test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk7__DOT__w = 0;
    IData/*31:0*/ __Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__p;
    __Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__p = 0;
    // Body
    vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__stall_pipeline 
        = (1U & (VL_GTS_III(32, 0x45U, vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__cycle) 
                 | ((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__mem_pool_full_stall) 
                    | (((~ (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__oc_dispatch_ready)) 
                        & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__id_ex
                           [0U][0x65U] >> 0x13U)) | 
                       (((~ ((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__oc_dispatch_ready) 
                             >> 1U)) & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__id_ex
                                        [1U][0x65U] 
                                        >> 0x13U)) 
                        | ((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT____VdfgRegularize_h65497209_0_0) 
                           & (IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT____VdfgRegularize_h65497209_0_5)))))));
    test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk7__DOT__w = 0U;
    while (VL_GTS_III(32, 0x18U, test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk7__DOT__w)) {
        vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT____Vlvbound_hf6bd1fba__0 = 0U;
        if (VL_LIKELY(((0x17U >= (0x1fU & test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk7__DOT__w))))) {
            vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__issue_eligible_mask 
                = (((~ ((IData)(1U) << (0x1fU & test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk7__DOT__w))) 
                    & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__issue_eligible_mask) 
                   | (0xffffffU & ((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT____Vlvbound_hf6bd1fba__0) 
                                   << (0x1fU & test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk7__DOT__w))));
        }
        if (((1U == (7U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__warp_status
                           [((0x17U >= (0x1fU & test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk7__DOT__w))
                              ? (0x1fU & test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk7__DOT__w)
                              : 0U)][2U] >> 7U))) & 
             (6U != (7U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__warp_status
                           [((0x17U >= (0x1fU & test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk7__DOT__w))
                              ? (0x1fU & test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk7__DOT__w)
                              : 0U)][2U] >> 7U))))) {
            if (([&]() {
                        vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__inst 
                            = vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__prog_mem
                            [((0x17U >= (0x1fU & test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk7__DOT__w))
                               ? (0x1fU & test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk7__DOT__w)
                               : 0U)][(0xffU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__warp_status
                                                [((0x17U 
                                                   >= 
                                                   (0x1fU 
                                                    & test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk7__DOT__w))
                                                   ? 
                                                  (0x1fU 
                                                   & test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk7__DOT__w)
                                                   : 0U)][3U] 
                                                >> 0xaU))];
                        vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__w 
                            = test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk7__DOT__w;
                        __Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__p = 0;
                        const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
                        vlSelf->__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_rd = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1794363012260407668ull);
                        vlSelf->__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13260847739382147798ull);
                        vlSelf->__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__rs1_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17404077286873783472ull);
                        vlSelf->__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__rs2_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7171302775085800927ull);
                        vlSelf->__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__rs3_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2521585437802553206ull);
                        vlSelf->__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__rd_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2305340204102083113ull);
                        vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op 
                            = (0xffU & (IData)((vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__inst 
                                                >> 0x38U)));
                        vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__rd 
                            = (0xffU & (IData)((vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__inst 
                                                >> 0x30U)));
                        vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__rs1 
                            = (0xffU & (IData)((vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__inst 
                                                >> 0x28U)));
                        vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__rs2 
                            = (0xffU & (IData)((vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__inst 
                                                >> 0x20U)));
                        vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__rs3 
                            = (0xffU & (IData)((vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__inst 
                                                >> 0x14U)));
                        vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__Vfuncout = 1U;
                        if (((0U != (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op)) 
                             & (0xffU != (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op)))) {
                            vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__rs1_busy 
                                = (((0x8eU >= ((IData)(7U) 
                                               + (0x3fU 
                                                  & (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__rs1)))) 
                                    && (1U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__warp_status
                                              [((0x17U 
                                                 >= 
                                                 (0x1fU 
                                                  & vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__w))
                                                 ? 
                                                (0x1fU 
                                                 & vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__w)
                                                 : 0U)][
                                              (((IData)(7U) 
                                                + (0x3fU 
                                                   & (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__rs1))) 
                                               >> 5U)] 
                                              >> (0x1fU 
                                                  & ((IData)(7U) 
                                                     + 
                                                     (0x3fU 
                                                      & (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__rs1))))))) 
                                   & (~ ((0x5ffU >= 
                                          (0x7ffU & 
                                           (VL_SHIFTL_III(11,32,32, vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__w, 6U) 
                                            + (0x3fU 
                                               & (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__rs1))))) 
                                         && (1U & (
                                                   vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__reg_clear_this_cycle[
                                                   (0x3fU 
                                                    & ((VL_SHIFTL_III(11,32,32, vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__w, 6U) 
                                                        + 
                                                        (0x3fU 
                                                         & (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__rs1))) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & (VL_SHIFTL_III(11,32,32, vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__w, 6U) 
                                                       + 
                                                       (0x3fU 
                                                        & (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__rs1)))))))));
                            if ((((((((((((((((((((
                                                   ((((((((((((((((((((((((((((((((1U 
                                                                                == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op)) 
                                                                                | (2U 
                                                                                == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                                                                | (3U 
                                                                                == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                                                                | (5U 
                                                                                == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                                                               | (4U 
                                                                                == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                                                              | (0x10U 
                                                                                == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                                                             | (0x11U 
                                                                                == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                                                            | (0x20U 
                                                                               == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                                                           | (0x21U 
                                                                              == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                                                          | (0x30U 
                                                                             == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                                                         | (0x31U 
                                                                            == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                                                        | (0x32U 
                                                                           == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                                                       | (0x33U 
                                                                          == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                                                      | (0x35U 
                                                                         == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                                                     | (0x40U 
                                                                        == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                                                    | (0x41U 
                                                                       == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                                                   | (0x44U 
                                                                      == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                                                  | (0x45U 
                                                                     == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                                                 | (0x46U 
                                                                    == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                                                | (0x42U 
                                                                   == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                                               | (0x43U 
                                                                  == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                                              | (0x3eU 
                                                                 == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                                             | (0x34U 
                                                                == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                                            | (0x36U 
                                                               == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                                           | (0x37U 
                                                              == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                                          | (0x39U 
                                                             == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                                         | (0x3aU 
                                                            == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                                        | (0x38U 
                                                           == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                                       | (0x3bU 
                                                          == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                                      | (0x3cU 
                                                         == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                                     | (0x3dU 
                                                        == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                                    | (0x50U 
                                                       == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                                   | (0x51U 
                                                      == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                                  | (0x52U 
                                                     == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                                 | (0x53U 
                                                    == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                                | (0x60U 
                                                   == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                               | (0x61U 
                                                  == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                              | (0x62U 
                                                 == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                             | (0x68U 
                                                == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                            | (0x69U 
                                               == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                           | (0x6aU 
                                              == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                          | (6U == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                         | (0x54U == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                        | (0x6bU == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                       | (0x70U == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                      | (0x71U == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                     | (0x80U == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                    | (0x81U == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                   | (0x82U == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                  | (0x26U == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                 & (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__rs1_busy))) {
                                vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__Vfuncout = 0U;
                            }
                            __Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__p = 2U;
                            vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__rs2_busy 
                                = (((0x8eU >= ((IData)(7U) 
                                               + (0x3fU 
                                                  & (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__rs2)))) 
                                    && (1U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__warp_status
                                              [((0x17U 
                                                 >= 
                                                 (0x1fU 
                                                  & vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__w))
                                                 ? 
                                                (0x1fU 
                                                 & vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__w)
                                                 : 0U)][
                                              (((IData)(7U) 
                                                + (0x3fU 
                                                   & (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__rs2))) 
                                               >> 5U)] 
                                              >> (0x1fU 
                                                  & ((IData)(7U) 
                                                     + 
                                                     (0x3fU 
                                                      & (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__rs2))))))) 
                                   & (~ ((0x5ffU >= 
                                          (0x7ffU & 
                                           (VL_SHIFTL_III(11,32,32, vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__w, 6U) 
                                            + (0x3fU 
                                               & (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__rs2))))) 
                                         && (1U & (
                                                   vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__reg_clear_this_cycle[
                                                   (0x3fU 
                                                    & ((VL_SHIFTL_III(11,32,32, vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__w, 6U) 
                                                        + 
                                                        (0x3fU 
                                                         & (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__rs2))) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & (VL_SHIFTL_III(11,32,32, vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__w, 6U) 
                                                       + 
                                                       (0x3fU 
                                                        & (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__rs2)))))))));
                            if ((((((((((((((((((((
                                                   ((((((((1U 
                                                           == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op)) 
                                                          | (2U 
                                                             == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                                         | (3U 
                                                            == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                                        | (4U 
                                                           == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                                       | (0x11U 
                                                          == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                                      | (0x20U 
                                                         == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                                     | (0x21U 
                                                        == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                                    | (0x30U 
                                                       == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                                   | (0x31U 
                                                      == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                                  | (0x32U 
                                                     == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                                 | (0x33U 
                                                    == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                                | (0x35U 
                                                   == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                               | (0x36U 
                                                  == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                              | (0x37U 
                                                 == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                             | (0x39U 
                                                == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                            | (0x3aU 
                                               == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                           | (0x3bU 
                                              == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                          | (0x3cU 
                                             == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                         | (0x50U == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                        | (0x51U == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                       | (0x52U == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                      | (0x60U == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                     | (0x61U == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                    | (0x62U == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                   | (0x70U == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                  | (0x71U == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                 & (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__rs2_busy))) {
                                vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__Vfuncout = 0U;
                            }
                            vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__rs3_busy 
                                = (((0x8eU >= ((IData)(7U) 
                                               + (0x3fU 
                                                  & (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__rs3)))) 
                                    && (1U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__warp_status
                                              [((0x17U 
                                                 >= 
                                                 (0x1fU 
                                                  & vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__w))
                                                 ? 
                                                (0x1fU 
                                                 & vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__w)
                                                 : 0U)][
                                              (((IData)(7U) 
                                                + (0x3fU 
                                                   & (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__rs3))) 
                                               >> 5U)] 
                                              >> (0x1fU 
                                                  & ((IData)(7U) 
                                                     + 
                                                     (0x3fU 
                                                      & (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__rs3))))))) 
                                   & (~ ((0x5ffU >= 
                                          (0x7ffU & 
                                           (VL_SHIFTL_III(11,32,32, vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__w, 6U) 
                                            + (0x3fU 
                                               & (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__rs3))))) 
                                         && (1U & (
                                                   vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__reg_clear_this_cycle[
                                                   (0x3fU 
                                                    & ((VL_SHIFTL_III(11,32,32, vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__w, 6U) 
                                                        + 
                                                        (0x3fU 
                                                         & (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__rs3))) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & (VL_SHIFTL_III(11,32,32, vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__w, 6U) 
                                                       + 
                                                       (0x3fU 
                                                        & (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__rs3)))))))));
                            if ((((0x35U == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op)) 
                                  | (5U == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                 & (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__rs3_busy))) {
                                vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__Vfuncout = 0U;
                            }
                            vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__rd_busy 
                                = (((0x8eU >= ((IData)(7U) 
                                               + (0x3fU 
                                                  & (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__rd)))) 
                                    && (1U & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__warp_status
                                              [((0x17U 
                                                 >= 
                                                 (0x1fU 
                                                  & vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__w))
                                                 ? 
                                                (0x1fU 
                                                 & vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__w)
                                                 : 0U)][
                                              (((IData)(7U) 
                                                + (0x3fU 
                                                   & (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__rd))) 
                                               >> 5U)] 
                                              >> (0x1fU 
                                                  & ((IData)(7U) 
                                                     + 
                                                     (0x3fU 
                                                      & (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__rd))))))) 
                                   & (~ ((0x5ffU >= 
                                          (0x7ffU & 
                                           (VL_SHIFTL_III(11,32,32, vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__w, 6U) 
                                            + (0x3fU 
                                               & (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__rd))))) 
                                         && (1U & (
                                                   vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__reg_clear_this_cycle[
                                                   (0x3fU 
                                                    & ((VL_SHIFTL_III(11,32,32, vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__w, 6U) 
                                                        + 
                                                        (0x3fU 
                                                         & (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__rd))) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & (VL_SHIFTL_III(11,32,32, vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__w, 6U) 
                                                       + 
                                                       (0x3fU 
                                                        & (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__rd)))))))));
                            if (((((((0x11U != (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op)) 
                                     & (0x20U != (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                    & (0x21U != (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                   & (0x22U != (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                  & (0x25U != (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__op))) 
                                 & (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__rd_busy))) {
                                vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__Vfuncout = 0U;
                            }
                            if (((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__if_id
                                  [0U][3U] >> 7U) & 
                                 ((0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__if_id
                                            [0U][3U] 
                                            >> 2U)) 
                                  == (0x1fU & vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__w)))) {
                                vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op 
                                    = (0xffU & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__if_id
                                                 [0U][2U] 
                                                 << 6U) 
                                                | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__if_id
                                                   [0U][1U] 
                                                   >> 0x1aU)));
                                vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_rd 
                                    = (0xffU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__if_id
                                                [0U][1U] 
                                                >> 0x12U));
                                if ((((((((((((((((
                                                   (((((((((((((((((((((((((((((((((1U 
                                                                                == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op)) 
                                                                                | (2U 
                                                                                == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                                                | (3U 
                                                                                == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                                                | (5U 
                                                                                == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                                                | (4U 
                                                                                == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                                               | (0x10U 
                                                                                == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                                              | (0x11U 
                                                                                == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                                             | (0x26U 
                                                                                == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                                            | (0x30U 
                                                                               == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                                           | (0x31U 
                                                                              == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                                          | (0x32U 
                                                                             == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                                         | (0x33U 
                                                                            == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                                        | (0x35U 
                                                                           == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                                       | (0x40U 
                                                                          == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                                      | (0x41U 
                                                                         == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                                     | (0x44U 
                                                                        == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                                    | (0x45U 
                                                                       == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                                   | (0x46U 
                                                                      == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                                  | (0x42U 
                                                                     == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                                 | (0x43U 
                                                                    == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                                | (0x3eU 
                                                                   == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                               | (0x34U 
                                                                  == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                              | (0x36U 
                                                                 == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                             | (0x37U 
                                                                == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                            | (0x39U 
                                                               == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                           | (0x3aU 
                                                              == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                          | (0x38U 
                                                             == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                         | (0x3bU 
                                                            == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                        | (0x3cU 
                                                           == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                       | (0x3dU 
                                                          == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                      | (0x50U 
                                                         == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                     | (0x51U 
                                                        == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                    | (0x52U 
                                                       == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                   | (0x53U 
                                                      == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                  | (0x60U 
                                                     == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                 | (0x61U 
                                                    == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                | (0x62U 
                                                   == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                               | (0x68U 
                                                  == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                              | (0x69U 
                                                 == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                             | (0x6aU 
                                                == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                            | (6U == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                           | (0x54U 
                                              == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                          | (0x6bU 
                                             == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                         | (0x70U == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                        | (0x71U == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                       | (0x80U == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                      | (0x81U == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                     | (0x82U == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op)))) {
                                    if ((((((IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_rd) 
                                            == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__rs1)) 
                                           | ((IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_rd) 
                                              == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__rs2))) 
                                          | ((IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_rd) 
                                             == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__rs3))) 
                                         | ((IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_rd) 
                                            == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__rd)))) {
                                        vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__Vfuncout = 0U;
                                    }
                                }
                            }
                            if (((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__if_id
                                  [1U][3U] >> 7U) & 
                                 ((0x1fU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__if_id
                                            [1U][3U] 
                                            >> 2U)) 
                                  == (0x1fU & vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__w)))) {
                                vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op 
                                    = (0xffU & ((vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__if_id
                                                 [1U][2U] 
                                                 << 6U) 
                                                | (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__if_id
                                                   [1U][1U] 
                                                   >> 0x1aU)));
                                vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_rd 
                                    = (0xffU & (vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__if_id
                                                [1U][1U] 
                                                >> 0x12U));
                                if ((((((((((((((((
                                                   (((((((((((((((((((((((((((((((((1U 
                                                                                == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op)) 
                                                                                | (2U 
                                                                                == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                                                | (3U 
                                                                                == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                                                | (5U 
                                                                                == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                                                | (4U 
                                                                                == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                                               | (0x10U 
                                                                                == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                                              | (0x11U 
                                                                                == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                                             | (0x26U 
                                                                                == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                                            | (0x30U 
                                                                               == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                                           | (0x31U 
                                                                              == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                                          | (0x32U 
                                                                             == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                                         | (0x33U 
                                                                            == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                                        | (0x35U 
                                                                           == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                                       | (0x40U 
                                                                          == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                                      | (0x41U 
                                                                         == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                                     | (0x44U 
                                                                        == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                                    | (0x45U 
                                                                       == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                                   | (0x46U 
                                                                      == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                                  | (0x42U 
                                                                     == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                                 | (0x43U 
                                                                    == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                                | (0x3eU 
                                                                   == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                               | (0x34U 
                                                                  == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                              | (0x36U 
                                                                 == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                             | (0x37U 
                                                                == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                            | (0x39U 
                                                               == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                           | (0x3aU 
                                                              == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                          | (0x38U 
                                                             == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                         | (0x3bU 
                                                            == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                        | (0x3cU 
                                                           == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                       | (0x3dU 
                                                          == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                      | (0x50U 
                                                         == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                     | (0x51U 
                                                        == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                    | (0x52U 
                                                       == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                   | (0x53U 
                                                      == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                  | (0x60U 
                                                     == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                 | (0x61U 
                                                    == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                                | (0x62U 
                                                   == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                               | (0x68U 
                                                  == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                              | (0x69U 
                                                 == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                             | (0x6aU 
                                                == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                            | (6U == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                           | (0x54U 
                                              == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                          | (0x6bU 
                                             == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                         | (0x70U == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                        | (0x71U == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                       | (0x80U == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                      | (0x81U == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op))) 
                                     | (0x82U == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_op)))) {
                                    if ((((((IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_rd) 
                                            == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__rs1)) 
                                           | ((IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_rd) 
                                              == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__rs2))) 
                                          | ((IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_rd) 
                                             == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__rs3))) 
                                         | ((IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__unnamedblk5__DOT__unnamedblk6__DOT__if_rd) 
                                            == (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__rd)))) {
                                        vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__Vfuncout = 0U;
                                    }
                                }
                            }
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_test_oc_tiled_matmul__DOT__dut__DOT__scoreboard_ok__32__Vfuncout))) {
                vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT____Vlvbound_hf6bd1fba__1 = 1U;
                if (VL_LIKELY(((0x17U >= (0x1fU & test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk7__DOT__w))))) {
                    vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__issue_eligible_mask 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk7__DOT__w))) 
                            & vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT__issue_eligible_mask) 
                           | (0xffffffU & ((IData)(vlSelfRef.test_oc_tiled_matmul__DOT__dut__DOT____Vlvbound_hf6bd1fba__1) 
                                           << (0x1fU 
                                               & test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk7__DOT__w))));
                }
            }
        }
        test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk7__DOT__w 
            = ((IData)(1U) + test_oc_tiled_matmul__DOT__dut__DOT__unnamedblk7__DOT__w);
    }
}

void Vtest_oc_tiled_matmul___024root___timing_commit(Vtest_oc_tiled_matmul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_oc_tiled_matmul___024root___timing_commit\n"); );
    Vtest_oc_tiled_matmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (8ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hee272bfc__0.commit(
                                                   "@( test_oc_tiled_matmul.done)");
    }
    if ((! (0x10ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hd331f015__0.commit(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[0].fpu_inst.a_operand)");
    }
    if ((! (0x20ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hd35b3a7b__0.commit(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[1].fpu_inst.a_operand)");
    }
    if ((! (0x40ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h2af1a119__0.commit(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[2].fpu_inst.a_operand)");
    }
    if ((! (0x80ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_habb35f71__0.commit(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[3].fpu_inst.a_operand)");
    }
    if ((! (0x100ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h0fa430b8__0.commit(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[4].fpu_inst.a_operand)");
    }
    if ((! (0x200ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h98ba134b__0.commit(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[5].fpu_inst.a_operand)");
    }
    if ((! (0x400ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h1bcb0d1c__0.commit(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[6].fpu_inst.a_operand)");
    }
    if ((! (0x800ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h261b52df__0.commit(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[7].fpu_inst.a_operand)");
    }
    if ((! (0x1000ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h2e55f58e__0.commit(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[8].fpu_inst.a_operand)");
    }
    if ((! (0x2000ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hc0c9f4d2__0.commit(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[9].fpu_inst.a_operand)");
    }
    if ((! (0x4000ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hd0123472__0.commit(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[10].fpu_inst.a_operand)");
    }
    if ((! (0x8000ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hc230af47__0.commit(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[11].fpu_inst.a_operand)");
    }
    if ((! (0x10000ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hceb8cbc1__0.commit(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[12].fpu_inst.a_operand)");
    }
    if ((! (0x20000ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h724aaa9b__0.commit(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[13].fpu_inst.a_operand)");
    }
    if ((! (0x40000ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hef5b0f2d__0.commit(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[14].fpu_inst.a_operand)");
    }
    if ((! (0x80000ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h74e2cc1e__0.commit(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[15].fpu_inst.a_operand)");
    }
    if ((! (0x100000ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_heee7fc8a__0.commit(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[16].fpu_inst.a_operand)");
    }
    if ((! (0x200000ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h5b0e8744__0.commit(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[17].fpu_inst.a_operand)");
    }
    if ((! (0x400000ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_he6ceec71__0.commit(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[18].fpu_inst.a_operand)");
    }
    if ((! (0x800000ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h892f82a7__0.commit(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[19].fpu_inst.a_operand)");
    }
    if ((! (0x1000000ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hb7cd4b76__0.commit(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[20].fpu_inst.a_operand)");
    }
    if ((! (0x2000000ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_ha33e207c__0.commit(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[21].fpu_inst.a_operand)");
    }
    if ((! (0x4000000ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h46d3e1fa__0.commit(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[22].fpu_inst.a_operand)");
    }
    if ((! (0x8000000ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h8d29e1c4__0.commit(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[23].fpu_inst.a_operand)");
    }
    if ((! (0x10000000ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_he24ec68a__0.commit(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[24].fpu_inst.a_operand)");
    }
    if ((! (0x20000000ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h6946fd5f__0.commit(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[25].fpu_inst.a_operand)");
    }
    if ((! (0x40000000ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h3fc6e343__0.commit(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[26].fpu_inst.a_operand)");
    }
    if ((! (0x80000000ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hb21fcb30__0.commit(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[27].fpu_inst.a_operand)");
    }
    if ((! (0x100000000ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h274058d5__0.commit(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[28].fpu_inst.a_operand)");
    }
    if ((! (0x200000000ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h4fa0f64d__0.commit(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[29].fpu_inst.a_operand)");
    }
    if ((! (0x400000000ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h06174b37__0.commit(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[30].fpu_inst.a_operand)");
    }
    if ((! (0x800000000ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h21c1dc1e__0.commit(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[31].fpu_inst.a_operand)");
    }
}

void Vtest_oc_tiled_matmul___024root___timing_resume(Vtest_oc_tiled_matmul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_oc_tiled_matmul___024root___timing_resume\n"); );
    Vtest_oc_tiled_matmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hee272bfc__0.resume(
                                                   "@( test_oc_tiled_matmul.done)");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hd331f015__0.resume(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[0].fpu_inst.a_operand)");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hd35b3a7b__0.resume(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[1].fpu_inst.a_operand)");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h2af1a119__0.resume(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[2].fpu_inst.a_operand)");
    }
    if ((0x80ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_habb35f71__0.resume(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[3].fpu_inst.a_operand)");
    }
    if ((0x100ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h0fa430b8__0.resume(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[4].fpu_inst.a_operand)");
    }
    if ((0x200ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h98ba134b__0.resume(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[5].fpu_inst.a_operand)");
    }
    if ((0x400ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h1bcb0d1c__0.resume(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[6].fpu_inst.a_operand)");
    }
    if ((0x800ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h261b52df__0.resume(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[7].fpu_inst.a_operand)");
    }
    if ((0x1000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h2e55f58e__0.resume(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[8].fpu_inst.a_operand)");
    }
    if ((0x2000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hc0c9f4d2__0.resume(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[9].fpu_inst.a_operand)");
    }
    if ((0x4000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hd0123472__0.resume(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[10].fpu_inst.a_operand)");
    }
    if ((0x8000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hc230af47__0.resume(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[11].fpu_inst.a_operand)");
    }
    if ((0x10000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hceb8cbc1__0.resume(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[12].fpu_inst.a_operand)");
    }
    if ((0x20000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h724aaa9b__0.resume(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[13].fpu_inst.a_operand)");
    }
    if ((0x40000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hef5b0f2d__0.resume(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[14].fpu_inst.a_operand)");
    }
    if ((0x80000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h74e2cc1e__0.resume(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[15].fpu_inst.a_operand)");
    }
    if ((0x100000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_heee7fc8a__0.resume(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[16].fpu_inst.a_operand)");
    }
    if ((0x200000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h5b0e8744__0.resume(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[17].fpu_inst.a_operand)");
    }
    if ((0x400000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_he6ceec71__0.resume(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[18].fpu_inst.a_operand)");
    }
    if ((0x800000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h892f82a7__0.resume(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[19].fpu_inst.a_operand)");
    }
    if ((0x1000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hb7cd4b76__0.resume(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[20].fpu_inst.a_operand)");
    }
    if ((0x2000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_ha33e207c__0.resume(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[21].fpu_inst.a_operand)");
    }
    if ((0x4000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h46d3e1fa__0.resume(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[22].fpu_inst.a_operand)");
    }
    if ((0x8000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h8d29e1c4__0.resume(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[23].fpu_inst.a_operand)");
    }
    if ((0x10000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_he24ec68a__0.resume(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[24].fpu_inst.a_operand)");
    }
    if ((0x20000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h6946fd5f__0.resume(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[25].fpu_inst.a_operand)");
    }
    if ((0x40000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h3fc6e343__0.resume(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[26].fpu_inst.a_operand)");
    }
    if ((0x80000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hb21fcb30__0.resume(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[27].fpu_inst.a_operand)");
    }
    if ((0x100000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h274058d5__0.resume(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[28].fpu_inst.a_operand)");
    }
    if ((0x200000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h4fa0f64d__0.resume(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[29].fpu_inst.a_operand)");
    }
    if ((0x400000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h06174b37__0.resume(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[30].fpu_inst.a_operand)");
    }
    if ((0x800000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h21c1dc1e__0.resume(
                                                   "@( test_oc_tiled_matmul.dut.fpu_lane[31].fpu_inst.a_operand)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtest_oc_tiled_matmul___024root___eval_triggers__act(Vtest_oc_tiled_matmul___024root* vlSelf);
void Vtest_oc_tiled_matmul___024root___eval_act(Vtest_oc_tiled_matmul___024root* vlSelf);

bool Vtest_oc_tiled_matmul___024root___eval_phase__act(Vtest_oc_tiled_matmul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_oc_tiled_matmul___024root___eval_phase__act\n"); );
    Vtest_oc_tiled_matmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<36> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtest_oc_tiled_matmul___024root___eval_triggers__act(vlSelf);
    Vtest_oc_tiled_matmul___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtest_oc_tiled_matmul___024root___timing_resume(vlSelf);
        Vtest_oc_tiled_matmul___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vtest_oc_tiled_matmul___024root___eval_nba(Vtest_oc_tiled_matmul___024root* vlSelf);

bool Vtest_oc_tiled_matmul___024root___eval_phase__nba(Vtest_oc_tiled_matmul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_oc_tiled_matmul___024root___eval_phase__nba\n"); );
    Vtest_oc_tiled_matmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtest_oc_tiled_matmul___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_oc_tiled_matmul___024root___dump_triggers__nba(Vtest_oc_tiled_matmul___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_oc_tiled_matmul___024root___dump_triggers__act(Vtest_oc_tiled_matmul___024root* vlSelf);
#endif  // VL_DEBUG

void Vtest_oc_tiled_matmul___024root___eval(Vtest_oc_tiled_matmul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_oc_tiled_matmul___024root___eval\n"); );
    Vtest_oc_tiled_matmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtest_oc_tiled_matmul___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("test_oc_tiled_matmul.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtest_oc_tiled_matmul___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("test_oc_tiled_matmul.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtest_oc_tiled_matmul___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtest_oc_tiled_matmul___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtest_oc_tiled_matmul___024root___eval_debug_assertions(Vtest_oc_tiled_matmul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_oc_tiled_matmul___024root___eval_debug_assertions\n"); );
    Vtest_oc_tiled_matmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG

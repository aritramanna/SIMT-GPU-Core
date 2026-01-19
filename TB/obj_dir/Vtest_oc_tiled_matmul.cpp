// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtest_oc_tiled_matmul__pch.h"

//============================================================
// Constructors

Vtest_oc_tiled_matmul::Vtest_oc_tiled_matmul(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtest_oc_tiled_matmul__Syms(contextp(), _vcname__, this)}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__0__KET____DOT__fpu_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__0__KET____DOT__fpu_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__1__KET____DOT__fpu_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__1__KET____DOT__fpu_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__2__KET____DOT__fpu_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__2__KET____DOT__fpu_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__3__KET____DOT__fpu_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__3__KET____DOT__fpu_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__4__KET____DOT__fpu_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__4__KET____DOT__fpu_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__5__KET____DOT__fpu_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__5__KET____DOT__fpu_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__6__KET____DOT__fpu_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__6__KET____DOT__fpu_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__7__KET____DOT__fpu_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__7__KET____DOT__fpu_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__8__KET____DOT__fpu_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__8__KET____DOT__fpu_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__9__KET____DOT__fpu_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__9__KET____DOT__fpu_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__10__KET____DOT__fpu_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__10__KET____DOT__fpu_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__11__KET____DOT__fpu_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__11__KET____DOT__fpu_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__12__KET____DOT__fpu_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__12__KET____DOT__fpu_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__13__KET____DOT__fpu_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__13__KET____DOT__fpu_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__14__KET____DOT__fpu_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__14__KET____DOT__fpu_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__15__KET____DOT__fpu_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__15__KET____DOT__fpu_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__16__KET____DOT__fpu_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__16__KET____DOT__fpu_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__17__KET____DOT__fpu_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__17__KET____DOT__fpu_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__18__KET____DOT__fpu_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__18__KET____DOT__fpu_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__19__KET____DOT__fpu_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__19__KET____DOT__fpu_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__20__KET____DOT__fpu_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__20__KET____DOT__fpu_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__21__KET____DOT__fpu_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__21__KET____DOT__fpu_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__22__KET____DOT__fpu_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__22__KET____DOT__fpu_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__23__KET____DOT__fpu_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__23__KET____DOT__fpu_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__24__KET____DOT__fpu_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__24__KET____DOT__fpu_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__25__KET____DOT__fpu_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__25__KET____DOT__fpu_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__26__KET____DOT__fpu_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__26__KET____DOT__fpu_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__27__KET____DOT__fpu_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__27__KET____DOT__fpu_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__28__KET____DOT__fpu_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__28__KET____DOT__fpu_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__29__KET____DOT__fpu_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__29__KET____DOT__fpu_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__30__KET____DOT__fpu_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__30__KET____DOT__fpu_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__31__KET____DOT__fpu_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__31__KET____DOT__fpu_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__0__KET____DOT__fma_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__0__KET____DOT__fma_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__1__KET____DOT__fma_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__1__KET____DOT__fma_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__2__KET____DOT__fma_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__2__KET____DOT__fma_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__3__KET____DOT__fma_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__3__KET____DOT__fma_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__4__KET____DOT__fma_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__4__KET____DOT__fma_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__5__KET____DOT__fma_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__5__KET____DOT__fma_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__6__KET____DOT__fma_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__6__KET____DOT__fma_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__7__KET____DOT__fma_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__7__KET____DOT__fma_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__8__KET____DOT__fma_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__8__KET____DOT__fma_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__9__KET____DOT__fma_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__9__KET____DOT__fma_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__10__KET____DOT__fma_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__10__KET____DOT__fma_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__11__KET____DOT__fma_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__11__KET____DOT__fma_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__12__KET____DOT__fma_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__12__KET____DOT__fma_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__13__KET____DOT__fma_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__13__KET____DOT__fma_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__14__KET____DOT__fma_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__14__KET____DOT__fma_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__15__KET____DOT__fma_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__15__KET____DOT__fma_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__16__KET____DOT__fma_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__16__KET____DOT__fma_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__17__KET____DOT__fma_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__17__KET____DOT__fma_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__18__KET____DOT__fma_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__18__KET____DOT__fma_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__19__KET____DOT__fma_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__19__KET____DOT__fma_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__20__KET____DOT__fma_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__20__KET____DOT__fma_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__21__KET____DOT__fma_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__21__KET____DOT__fma_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__22__KET____DOT__fma_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__22__KET____DOT__fma_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__23__KET____DOT__fma_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__23__KET____DOT__fma_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__24__KET____DOT__fma_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__24__KET____DOT__fma_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__25__KET____DOT__fma_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__25__KET____DOT__fma_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__26__KET____DOT__fma_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__26__KET____DOT__fma_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__27__KET____DOT__fma_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__27__KET____DOT__fma_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__28__KET____DOT__fma_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__28__KET____DOT__fma_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__29__KET____DOT__fma_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__29__KET____DOT__fma_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__30__KET____DOT__fma_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__30__KET____DOT__fma_inst}
    , __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__31__KET____DOT__fma_inst{vlSymsp->TOP.__PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__31__KET____DOT__fma_inst}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtest_oc_tiled_matmul::Vtest_oc_tiled_matmul(const char* _vcname__)
    : Vtest_oc_tiled_matmul(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtest_oc_tiled_matmul::~Vtest_oc_tiled_matmul() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtest_oc_tiled_matmul___024root___eval_debug_assertions(Vtest_oc_tiled_matmul___024root* vlSelf);
#endif  // VL_DEBUG
void Vtest_oc_tiled_matmul___024root___eval_static(Vtest_oc_tiled_matmul___024root* vlSelf);
void Vtest_oc_tiled_matmul___024root___eval_initial(Vtest_oc_tiled_matmul___024root* vlSelf);
void Vtest_oc_tiled_matmul___024root___eval_settle(Vtest_oc_tiled_matmul___024root* vlSelf);
void Vtest_oc_tiled_matmul___024root___eval(Vtest_oc_tiled_matmul___024root* vlSelf);

void Vtest_oc_tiled_matmul::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtest_oc_tiled_matmul::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtest_oc_tiled_matmul___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtest_oc_tiled_matmul___024root___eval_static(&(vlSymsp->TOP));
        Vtest_oc_tiled_matmul___024root___eval_initial(&(vlSymsp->TOP));
        Vtest_oc_tiled_matmul___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtest_oc_tiled_matmul___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtest_oc_tiled_matmul::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtest_oc_tiled_matmul::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtest_oc_tiled_matmul::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtest_oc_tiled_matmul___024root___eval_final(Vtest_oc_tiled_matmul___024root* vlSelf);

VL_ATTR_COLD void Vtest_oc_tiled_matmul::final() {
    Vtest_oc_tiled_matmul___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtest_oc_tiled_matmul::hierName() const { return vlSymsp->name(); }
const char* Vtest_oc_tiled_matmul::modelName() const { return "Vtest_oc_tiled_matmul"; }
unsigned Vtest_oc_tiled_matmul::threads() const { return 1; }
void Vtest_oc_tiled_matmul::prepareClone() const { contextp()->prepareClone(); }
void Vtest_oc_tiled_matmul::atClone() const {
    contextp()->threadPoolpOnClone();
}

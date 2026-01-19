// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VTEST_OC_TILED_MATMUL_H_
#define VERILATED_VTEST_OC_TILED_MATMUL_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class Vtest_oc_tiled_matmul__Syms;
class Vtest_oc_tiled_matmul___024root;
class Vtest_oc_tiled_matmul_ALU;
class Vtest_oc_tiled_matmul_FMA;
class Vtest_oc_tiled_matmul___024unit;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vtest_oc_tiled_matmul VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vtest_oc_tiled_matmul__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = false;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vtest_oc_tiled_matmul___024unit* const __PVT____024unit;
    Vtest_oc_tiled_matmul_ALU* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__0__KET____DOT__fpu_inst;
    Vtest_oc_tiled_matmul_ALU* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__1__KET____DOT__fpu_inst;
    Vtest_oc_tiled_matmul_ALU* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__2__KET____DOT__fpu_inst;
    Vtest_oc_tiled_matmul_ALU* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__3__KET____DOT__fpu_inst;
    Vtest_oc_tiled_matmul_ALU* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__4__KET____DOT__fpu_inst;
    Vtest_oc_tiled_matmul_ALU* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__5__KET____DOT__fpu_inst;
    Vtest_oc_tiled_matmul_ALU* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__6__KET____DOT__fpu_inst;
    Vtest_oc_tiled_matmul_ALU* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__7__KET____DOT__fpu_inst;
    Vtest_oc_tiled_matmul_ALU* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__8__KET____DOT__fpu_inst;
    Vtest_oc_tiled_matmul_ALU* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__9__KET____DOT__fpu_inst;
    Vtest_oc_tiled_matmul_ALU* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__10__KET____DOT__fpu_inst;
    Vtest_oc_tiled_matmul_ALU* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__11__KET____DOT__fpu_inst;
    Vtest_oc_tiled_matmul_ALU* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__12__KET____DOT__fpu_inst;
    Vtest_oc_tiled_matmul_ALU* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__13__KET____DOT__fpu_inst;
    Vtest_oc_tiled_matmul_ALU* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__14__KET____DOT__fpu_inst;
    Vtest_oc_tiled_matmul_ALU* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__15__KET____DOT__fpu_inst;
    Vtest_oc_tiled_matmul_ALU* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__16__KET____DOT__fpu_inst;
    Vtest_oc_tiled_matmul_ALU* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__17__KET____DOT__fpu_inst;
    Vtest_oc_tiled_matmul_ALU* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__18__KET____DOT__fpu_inst;
    Vtest_oc_tiled_matmul_ALU* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__19__KET____DOT__fpu_inst;
    Vtest_oc_tiled_matmul_ALU* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__20__KET____DOT__fpu_inst;
    Vtest_oc_tiled_matmul_ALU* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__21__KET____DOT__fpu_inst;
    Vtest_oc_tiled_matmul_ALU* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__22__KET____DOT__fpu_inst;
    Vtest_oc_tiled_matmul_ALU* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__23__KET____DOT__fpu_inst;
    Vtest_oc_tiled_matmul_ALU* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__24__KET____DOT__fpu_inst;
    Vtest_oc_tiled_matmul_ALU* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__25__KET____DOT__fpu_inst;
    Vtest_oc_tiled_matmul_ALU* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__26__KET____DOT__fpu_inst;
    Vtest_oc_tiled_matmul_ALU* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__27__KET____DOT__fpu_inst;
    Vtest_oc_tiled_matmul_ALU* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__28__KET____DOT__fpu_inst;
    Vtest_oc_tiled_matmul_ALU* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__29__KET____DOT__fpu_inst;
    Vtest_oc_tiled_matmul_ALU* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__30__KET____DOT__fpu_inst;
    Vtest_oc_tiled_matmul_ALU* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fpu_lane__BRA__31__KET____DOT__fpu_inst;
    Vtest_oc_tiled_matmul_FMA* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__0__KET____DOT__fma_inst;
    Vtest_oc_tiled_matmul_FMA* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__1__KET____DOT__fma_inst;
    Vtest_oc_tiled_matmul_FMA* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__2__KET____DOT__fma_inst;
    Vtest_oc_tiled_matmul_FMA* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__3__KET____DOT__fma_inst;
    Vtest_oc_tiled_matmul_FMA* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__4__KET____DOT__fma_inst;
    Vtest_oc_tiled_matmul_FMA* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__5__KET____DOT__fma_inst;
    Vtest_oc_tiled_matmul_FMA* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__6__KET____DOT__fma_inst;
    Vtest_oc_tiled_matmul_FMA* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__7__KET____DOT__fma_inst;
    Vtest_oc_tiled_matmul_FMA* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__8__KET____DOT__fma_inst;
    Vtest_oc_tiled_matmul_FMA* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__9__KET____DOT__fma_inst;
    Vtest_oc_tiled_matmul_FMA* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__10__KET____DOT__fma_inst;
    Vtest_oc_tiled_matmul_FMA* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__11__KET____DOT__fma_inst;
    Vtest_oc_tiled_matmul_FMA* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__12__KET____DOT__fma_inst;
    Vtest_oc_tiled_matmul_FMA* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__13__KET____DOT__fma_inst;
    Vtest_oc_tiled_matmul_FMA* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__14__KET____DOT__fma_inst;
    Vtest_oc_tiled_matmul_FMA* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__15__KET____DOT__fma_inst;
    Vtest_oc_tiled_matmul_FMA* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__16__KET____DOT__fma_inst;
    Vtest_oc_tiled_matmul_FMA* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__17__KET____DOT__fma_inst;
    Vtest_oc_tiled_matmul_FMA* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__18__KET____DOT__fma_inst;
    Vtest_oc_tiled_matmul_FMA* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__19__KET____DOT__fma_inst;
    Vtest_oc_tiled_matmul_FMA* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__20__KET____DOT__fma_inst;
    Vtest_oc_tiled_matmul_FMA* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__21__KET____DOT__fma_inst;
    Vtest_oc_tiled_matmul_FMA* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__22__KET____DOT__fma_inst;
    Vtest_oc_tiled_matmul_FMA* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__23__KET____DOT__fma_inst;
    Vtest_oc_tiled_matmul_FMA* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__24__KET____DOT__fma_inst;
    Vtest_oc_tiled_matmul_FMA* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__25__KET____DOT__fma_inst;
    Vtest_oc_tiled_matmul_FMA* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__26__KET____DOT__fma_inst;
    Vtest_oc_tiled_matmul_FMA* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__27__KET____DOT__fma_inst;
    Vtest_oc_tiled_matmul_FMA* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__28__KET____DOT__fma_inst;
    Vtest_oc_tiled_matmul_FMA* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__29__KET____DOT__fma_inst;
    Vtest_oc_tiled_matmul_FMA* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__30__KET____DOT__fma_inst;
    Vtest_oc_tiled_matmul_FMA* const __PVT__test_oc_tiled_matmul__DOT__dut__DOT__fma_lane__BRA__31__KET____DOT__fma_inst;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vtest_oc_tiled_matmul___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vtest_oc_tiled_matmul(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vtest_oc_tiled_matmul(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vtest_oc_tiled_matmul();
  private:
    VL_UNCOPYABLE(Vtest_oc_tiled_matmul);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard

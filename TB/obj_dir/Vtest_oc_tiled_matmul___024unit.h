// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_oc_tiled_matmul.h for the primary calling header

#ifndef VERILATED_VTEST_OC_TILED_MATMUL___024UNIT_H_
#define VERILATED_VTEST_OC_TILED_MATMUL___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtest_oc_tiled_matmul__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest_oc_tiled_matmul___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    static VlAssocArray<CData/*7:0*/, std::string> __Venumtab_enum_name3;

    // INTERNAL VARIABLES
    Vtest_oc_tiled_matmul__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtest_oc_tiled_matmul___024unit(Vtest_oc_tiled_matmul__Syms* symsp, const char* v__name);
    ~Vtest_oc_tiled_matmul___024unit();
    VL_UNCOPYABLE(Vtest_oc_tiled_matmul___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

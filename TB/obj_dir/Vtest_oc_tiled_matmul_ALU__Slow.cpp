// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_oc_tiled_matmul.h for the primary calling header

#include "Vtest_oc_tiled_matmul__pch.h"
#include "Vtest_oc_tiled_matmul_ALU.h"
#include "Vtest_oc_tiled_matmul__Syms.h"

void Vtest_oc_tiled_matmul_ALU___ctor_var_reset(Vtest_oc_tiled_matmul_ALU* vlSelf);

Vtest_oc_tiled_matmul_ALU::Vtest_oc_tiled_matmul_ALU(Vtest_oc_tiled_matmul__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtest_oc_tiled_matmul_ALU___ctor_var_reset(this);
}

void Vtest_oc_tiled_matmul_ALU::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtest_oc_tiled_matmul_ALU::~Vtest_oc_tiled_matmul_ALU() {
}

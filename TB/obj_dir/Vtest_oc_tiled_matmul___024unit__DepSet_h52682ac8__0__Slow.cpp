// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_oc_tiled_matmul.h for the primary calling header

#include "Vtest_oc_tiled_matmul__pch.h"
#include "Vtest_oc_tiled_matmul___024unit.h"

VL_ATTR_COLD void Vtest_oc_tiled_matmul___024unit___ctor_var_reset(Vtest_oc_tiled_matmul___024unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_oc_tiled_matmul___024unit___ctor_var_reset\n"); );
    Vtest_oc_tiled_matmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__Venumtab_enum_name3.atDefault() = std::string{};
    vlSelf->__Venumtab_enum_name3.at(0) = std::string{"OP_NOP"};
    vlSelf->__Venumtab_enum_name3.at(1) = std::string{"OP_ADD"};
    vlSelf->__Venumtab_enum_name3.at(2) = std::string{"OP_SUB"};
    vlSelf->__Venumtab_enum_name3.at(3) = std::string{"OP_MUL"};
    vlSelf->__Venumtab_enum_name3.at(4) = std::string{"OP_SLT"};
    vlSelf->__Venumtab_enum_name3.at(5) = std::string{"OP_IMAD"};
    vlSelf->__Venumtab_enum_name3.at(6) = std::string{"OP_NEG"};
    vlSelf->__Venumtab_enum_name3.at(16) = std::string{"OP_LDR"};
    vlSelf->__Venumtab_enum_name3.at(17) = std::string{"OP_STR"};
    vlSelf->__Venumtab_enum_name3.at(32) = std::string{"OP_BEQ"};
    vlSelf->__Venumtab_enum_name3.at(33) = std::string{"OP_BNE"};
    vlSelf->__Venumtab_enum_name3.at(34) = std::string{"OP_BRA"};
    vlSelf->__Venumtab_enum_name3.at(35) = std::string{"OP_SSY"};
    vlSelf->__Venumtab_enum_name3.at(36) = std::string{"OP_JOIN"};
    vlSelf->__Venumtab_enum_name3.at(37) = std::string{"OP_BAR"};
    vlSelf->__Venumtab_enum_name3.at(38) = std::string{"OP_TID"};
    vlSelf->__Venumtab_enum_name3.at(48) = std::string{"OP_FADD"};
    vlSelf->__Venumtab_enum_name3.at(49) = std::string{"OP_FSUB"};
    vlSelf->__Venumtab_enum_name3.at(50) = std::string{"OP_FMUL"};
    vlSelf->__Venumtab_enum_name3.at(51) = std::string{"OP_FDIV"};
    vlSelf->__Venumtab_enum_name3.at(52) = std::string{"OP_FTOI"};
    vlSelf->__Venumtab_enum_name3.at(53) = std::string{"OP_FFMA"};
    vlSelf->__Venumtab_enum_name3.at(54) = std::string{"OP_IDIV"};
    vlSelf->__Venumtab_enum_name3.at(55) = std::string{"OP_IREM"};
    vlSelf->__Venumtab_enum_name3.at(56) = std::string{"OP_IABS"};
    vlSelf->__Venumtab_enum_name3.at(57) = std::string{"OP_IMIN"};
    vlSelf->__Venumtab_enum_name3.at(58) = std::string{"OP_IMAX"};
    vlSelf->__Venumtab_enum_name3.at(59) = std::string{"OP_FMIN"};
    vlSelf->__Venumtab_enum_name3.at(60) = std::string{"OP_FMAX"};
    vlSelf->__Venumtab_enum_name3.at(61) = std::string{"OP_FABS"};
    vlSelf->__Venumtab_enum_name3.at(62) = std::string{"OP_ITOF"};
    vlSelf->__Venumtab_enum_name3.at(64) = std::string{"OP_SFU_SIN"};
    vlSelf->__Venumtab_enum_name3.at(65) = std::string{"OP_SFU_COS"};
    vlSelf->__Venumtab_enum_name3.at(66) = std::string{"OP_SFU_EX2"};
    vlSelf->__Venumtab_enum_name3.at(67) = std::string{"OP_SFU_LG2"};
    vlSelf->__Venumtab_enum_name3.at(68) = std::string{"OP_SFU_RCP"};
    vlSelf->__Venumtab_enum_name3.at(69) = std::string{"OP_SFU_RSQ"};
    vlSelf->__Venumtab_enum_name3.at(70) = std::string{"OP_SFU_SQRT"};
    vlSelf->__Venumtab_enum_name3.at(71) = std::string{"OP_SFU_TANH"};
    vlSelf->__Venumtab_enum_name3.at(80) = std::string{"OP_AND"};
    vlSelf->__Venumtab_enum_name3.at(81) = std::string{"OP_OR"};
    vlSelf->__Venumtab_enum_name3.at(82) = std::string{"OP_XOR"};
    vlSelf->__Venumtab_enum_name3.at(83) = std::string{"OP_NOT"};
    vlSelf->__Venumtab_enum_name3.at(84) = std::string{"OP_FNEG"};
    vlSelf->__Venumtab_enum_name3.at(96) = std::string{"OP_SHL"};
    vlSelf->__Venumtab_enum_name3.at(97) = std::string{"OP_SHR"};
    vlSelf->__Venumtab_enum_name3.at(98) = std::string{"OP_SHA"};
    vlSelf->__Venumtab_enum_name3.at(104) = std::string{"OP_POPC"};
    vlSelf->__Venumtab_enum_name3.at(105) = std::string{"OP_CLZ"};
    vlSelf->__Venumtab_enum_name3.at(106) = std::string{"OP_BREV"};
    vlSelf->__Venumtab_enum_name3.at(107) = std::string{"OP_CNOT"};
    vlSelf->__Venumtab_enum_name3.at(112) = std::string{"OP_SLE"};
    vlSelf->__Venumtab_enum_name3.at(113) = std::string{"OP_SEQ"};
    vlSelf->__Venumtab_enum_name3.at(128) = std::string{"OP_ISETP"};
    vlSelf->__Venumtab_enum_name3.at(129) = std::string{"OP_FSETP"};
    vlSelf->__Venumtab_enum_name3.at(130) = std::string{"OP_SELP"};
    vlSelf->__Venumtab_enum_name3.at(255) = std::string{"OP_EXIT"};
}

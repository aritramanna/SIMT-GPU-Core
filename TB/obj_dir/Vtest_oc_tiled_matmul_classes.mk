# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vtest_oc_tiled_matmul.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace-fst/--trace-saif/--trace-vcd)
VM_TRACE = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0
# Tracing output mode in SAIF format?  0/1 (from --trace-saif)
VM_TRACE_SAIF = 0
# Tracing output mode in VCD format?  0/1 (from --trace-vcd)
VM_TRACE_VCD = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
  Vtest_oc_tiled_matmul \
  Vtest_oc_tiled_matmul___024root__DepSet_h70201cc3__0 \
  Vtest_oc_tiled_matmul___024root__DepSet_h70201cc3__1 \
  Vtest_oc_tiled_matmul___024root__DepSet_h70201cc3__2 \
  Vtest_oc_tiled_matmul___024root__DepSet_h70201cc3__3 \
  Vtest_oc_tiled_matmul___024root__DepSet_hded38217__0 \
  Vtest_oc_tiled_matmul___024root__DepSet_hded38217__1 \
  Vtest_oc_tiled_matmul___024root__DepSet_hded38217__2 \
  Vtest_oc_tiled_matmul_ALU__DepSet_h3c9dda76__0 \
  Vtest_oc_tiled_matmul_ALU__DepSet_h3c9dda76__1 \
  Vtest_oc_tiled_matmul_ALU__DepSet_h3c9dda76__2 \
  Vtest_oc_tiled_matmul_ALU__DepSet_h3c9dda76__3 \
  Vtest_oc_tiled_matmul_ALU__DepSet_h3c9dda76__4 \
  Vtest_oc_tiled_matmul_ALU__DepSet_h3c9dda76__5 \
  Vtest_oc_tiled_matmul_ALU__DepSet_h3c9dda76__6 \
  Vtest_oc_tiled_matmul_ALU__DepSet_h3c9dda76__7 \
  Vtest_oc_tiled_matmul_ALU__DepSet_h3c9dda76__8 \
  Vtest_oc_tiled_matmul_ALU__DepSet_h3c9dda76__9 \
  Vtest_oc_tiled_matmul_ALU__DepSet_h3c9dda76__10 \
  Vtest_oc_tiled_matmul_FMA__DepSet_h0f05a890__0 \
  Vtest_oc_tiled_matmul_FMA__DepSet_h0f05a890__1 \
  Vtest_oc_tiled_matmul__main \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
  Vtest_oc_tiled_matmul__ConstPool_0 \
  Vtest_oc_tiled_matmul___024root__Slow \
  Vtest_oc_tiled_matmul___024root__DepSet_h70201cc3__0__Slow \
  Vtest_oc_tiled_matmul___024root__DepSet_hded38217__0__Slow \
  Vtest_oc_tiled_matmul___024root__DepSet_hded38217__1__Slow \
  Vtest_oc_tiled_matmul_ALU__Slow \
  Vtest_oc_tiled_matmul_ALU__DepSet_hadb04114__0__Slow \
  Vtest_oc_tiled_matmul_ALU__DepSet_h3c9dda76__0__Slow \
  Vtest_oc_tiled_matmul_ALU__DepSet_h3c9dda76__1__Slow \
  Vtest_oc_tiled_matmul_ALU__DepSet_h3c9dda76__2__Slow \
  Vtest_oc_tiled_matmul_ALU__DepSet_h3c9dda76__3__Slow \
  Vtest_oc_tiled_matmul_ALU__DepSet_h3c9dda76__4__Slow \
  Vtest_oc_tiled_matmul_ALU__DepSet_h3c9dda76__5__Slow \
  Vtest_oc_tiled_matmul_ALU__DepSet_h3c9dda76__6__Slow \
  Vtest_oc_tiled_matmul_ALU__DepSet_h3c9dda76__7__Slow \
  Vtest_oc_tiled_matmul_ALU__DepSet_h3c9dda76__8__Slow \
  Vtest_oc_tiled_matmul_ALU__DepSet_h3c9dda76__9__Slow \
  Vtest_oc_tiled_matmul_ALU__DepSet_h3c9dda76__10__Slow \
  Vtest_oc_tiled_matmul_FMA__Slow \
  Vtest_oc_tiled_matmul_FMA__DepSet_h8d95e63c__0__Slow \
  Vtest_oc_tiled_matmul___024unit__Slow \
  Vtest_oc_tiled_matmul___024unit__DepSet_h52682ac8__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
  Vtest_oc_tiled_matmul__Dpi \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
  Vtest_oc_tiled_matmul__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
  verilated \
  verilated_dpi \
  verilated_timing \
  verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \

# Verilated -*- Makefile -*-

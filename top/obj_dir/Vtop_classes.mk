# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vtop.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace-fst/--trace-saif/--trace-vcd)
VM_TRACE = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0
# Tracing output mode in SAIF format?  0/1 (from --trace-saif)
VM_TRACE_SAIF = 0
# Tracing output mode in VCD format?  0/1 (from --trace-vcd)
VM_TRACE_VCD = 1

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
  Vtop \
  Vtop___024root__DepSet_h84412442__0 \
  Vtop___024root__DepSet_heccd7ead__0 \
  Vtop_partial_dot__DepSet_h820480c0__0 \
  Vtop_partial_dot__DepSet_h820480c0__1 \
  Vtop_partial_dot__DepSet_h820480c0__2 \
  Vtop_partial_dot__DepSet_h820480c0__3 \
  Vtop_partial_dot__DepSet_h820480c0__4 \
  Vtop_partial_dot__DepSet_h96b03b64__0 \
  Vtop_partial_dot__DepSet_he689e22b__0 \
  Vtop_float16_adder__DepSet_ha212ab48__0 \
  Vtop_float16_adder__DepSet_ha212ab48__1 \
  Vtop_float16_adder__DepSet_ha212ab48__2 \
  Vtop_float16_adder__DepSet_ha212ab48__3 \
  Vtop_float16_adder__DepSet_ha212ab48__4 \
  Vtop_float16_adder__DepSet_ha212ab48__5 \
  Vtop_float16_adder__DepSet_ha212ab48__6 \
  Vtop_float16_adder__DepSet_ha212ab48__7 \
  Vtop_float16_adder__DepSet_ha212ab48__8 \
  Vtop_float16_adder__DepSet_ha212ab48__9 \
  Vtop_float16_adder__DepSet_ha212ab48__10 \
  Vtop_float16_adder__DepSet_ha212ab48__11 \
  Vtop_float16_adder__DepSet_ha212ab48__12 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
  Vtop___024root__Slow \
  Vtop___024root__DepSet_h84412442__0__Slow \
  Vtop___024root__DepSet_heccd7ead__0__Slow \
  Vtop_partial_dot__Slow \
  Vtop_partial_dot__DepSet_h31abf5b5__0__Slow \
  Vtop_partial_dot__DepSet_h31abf5b5__1__Slow \
  Vtop_partial_dot__DepSet_h31abf5b5__2__Slow \
  Vtop_partial_dot__DepSet_he689e22b__0__Slow \
  Vtop_float16_adder__Slow \
  Vtop_float16_adder__DepSet_h069ff7b3__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
  Vtop__Trace__0 \
  Vtop__Trace__1 \
  Vtop__Trace__2 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
  Vtop__Syms \
  Vtop__Trace__0__Slow \
  Vtop__TraceDecls__0__Slow \
  Vtop__Trace__1__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
  verilated \
  verilated_vcd_c \
  verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \

# Verilated -*- Makefile -*-

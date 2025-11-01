// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_FLOAT16_ADDER_H_
#define VERILATED_VTOP_FLOAT16_ADDER_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_float16_adder final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*4:0*/ __PVT__exp_diff;
    CData/*4:0*/ __PVT__exp_max;
    CData/*0:0*/ __PVT__result_sign;
    CData/*4:0*/ __PVT__exp_result;
    CData/*0:0*/ __PVT__guard;
    CData/*0:0*/ __PVT__round_bit;
    CData/*0:0*/ __PVT__sticky;
    VL_IN16(a,15,0);
    VL_IN16(b,15,0);
    VL_OUT16(result,15,0);
    SData/*10:0*/ __PVT__sig_a;
    SData/*10:0*/ __PVT__sig_b;
    SData/*13:0*/ __PVT__sig_a_aligned;
    SData/*13:0*/ __PVT__sig_b_aligned;
    SData/*14:0*/ __PVT__sig_sum;
    SData/*10:0*/ __PVT__sig_result;
    SData/*15:0*/ __PVT__temp_result;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_float16_adder(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_float16_adder();
    VL_UNCOPYABLE(Vtop_float16_adder);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

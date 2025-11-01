// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop_float16_adder.h"

void Vtop_float16_adder___ctor_var_reset(Vtop_float16_adder* vlSelf);

Vtop_float16_adder::Vtop_float16_adder(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_float16_adder___ctor_var_reset(this);
}

void Vtop_float16_adder::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop_float16_adder::~Vtop_float16_adder() {
}

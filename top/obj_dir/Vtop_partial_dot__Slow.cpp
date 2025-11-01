// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop_partial_dot.h"

void Vtop_partial_dot___ctor_var_reset(Vtop_partial_dot* vlSelf);

Vtop_partial_dot::Vtop_partial_dot(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_partial_dot___ctor_var_reset(this);
}

void Vtop_partial_dot::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop_partial_dot::~Vtop_partial_dot() {
}

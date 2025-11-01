// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_PARTIAL_DOT_H_
#define VERILATED_VTOP_PARTIAL_DOT_H_  // guard

#include "verilated.h"
class Vtop_float16_adder;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_partial_dot final : public VerilatedModule {
  public:
    // CELLS
    Vtop_float16_adder* __PVT__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__0__KET____DOT__adder;
    Vtop_float16_adder* __PVT__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__1__KET____DOT__adder;
    Vtop_float16_adder* __PVT__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__2__KET____DOT__adder;
    Vtop_float16_adder* __PVT__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__3__KET____DOT__adder;
    Vtop_float16_adder* __PVT__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__4__KET____DOT__adder;
    Vtop_float16_adder* __PVT__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__5__KET____DOT__adder;
    Vtop_float16_adder* __PVT__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__6__KET____DOT__adder;
    Vtop_float16_adder* __PVT__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__7__KET____DOT__adder;
    Vtop_float16_adder* __PVT__u_adder_tree__DOT__gen_stage__BRA__1__KET____DOT__gen_adder__BRA__0__KET____DOT__adder;
    Vtop_float16_adder* __PVT__u_adder_tree__DOT__gen_stage__BRA__1__KET____DOT__gen_adder__BRA__1__KET____DOT__adder;
    Vtop_float16_adder* __PVT__u_adder_tree__DOT__gen_stage__BRA__1__KET____DOT__gen_adder__BRA__2__KET____DOT__adder;
    Vtop_float16_adder* __PVT__u_adder_tree__DOT__gen_stage__BRA__1__KET____DOT__gen_adder__BRA__3__KET____DOT__adder;
    Vtop_float16_adder* __PVT__u_adder_tree__DOT__gen_stage__BRA__2__KET____DOT__gen_adder__BRA__0__KET____DOT__adder;
    Vtop_float16_adder* __PVT__u_adder_tree__DOT__gen_stage__BRA__2__KET____DOT__gen_adder__BRA__1__KET____DOT__adder;
    Vtop_float16_adder* __PVT__u_adder_tree__DOT__gen_stage__BRA__3__KET____DOT__gen_adder__BRA__0__KET____DOT__adder;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(start,0,0);
    VL_OUT8(next_cent,0,0);
    VL_OUT8(next_class,0,0);
    VL_OUT8(max_en,0,0);
    VL_OUT8(max_clr,0,0);
    VL_OUT8(done,0,0);
    CData/*0:0*/ __PVT__ad_start;
    CData/*0:0*/ __PVT__accum_en;
    CData/*0:0*/ __PVT__accum_clr;
    CData/*2:0*/ __PVT__state;
    CData/*2:0*/ __PVT__next_state;
    CData/*0:0*/ __PVT__data_ready;
    CData/*1:0*/ __PVT__wait_cnt;
    CData/*6:0*/ __PVT__u_adder_tree__DOT__done_pipe;
    CData/*0:0*/ __PVT__u_adder_tree__DOT__done_d;
    CData/*4:0*/ __PVT__u_accum__DOT__adder__DOT__exp_diff;
    CData/*4:0*/ __PVT__u_accum__DOT__adder__DOT__exp_max;
    CData/*0:0*/ __PVT__u_accum__DOT__adder__DOT__result_sign;
    CData/*4:0*/ __PVT__u_accum__DOT__adder__DOT__exp_result;
    CData/*0:0*/ __PVT__u_accum__DOT__adder__DOT__guard;
    CData/*0:0*/ __PVT__u_accum__DOT__adder__DOT__round_bit;
    CData/*0:0*/ __PVT__u_accum__DOT__adder__DOT__sticky;
    CData/*2:0*/ __Vdly__state;
    CData/*6:0*/ __Vdly__u_adder_tree__DOT__done_pipe;
    VL_OUT16(accum_dout,15,0);
    SData/*15:0*/ __PVT__ad_out;
    SData/*15:0*/ __PVT__u_accum__DOT__temp;
    SData/*10:0*/ __PVT__u_accum__DOT__adder__DOT__sig_a;
    SData/*10:0*/ __PVT__u_accum__DOT__adder__DOT__sig_b;
    SData/*13:0*/ __PVT__u_accum__DOT__adder__DOT__sig_a_aligned;
    SData/*13:0*/ __PVT__u_accum__DOT__adder__DOT__sig_b_aligned;
    SData/*14:0*/ __PVT__u_accum__DOT__adder__DOT__sig_sum;
    SData/*10:0*/ __PVT__u_accum__DOT__adder__DOT__sig_result;
    VL_INW(in_hv,255,0,8);
    VL_INW(class_hv,255,0,8);
    IData/*31:0*/ __PVT__class_idx;
    IData/*31:0*/ __PVT__cent_idx;
    IData/*31:0*/ __Vdly__cent_idx;
    VlUnpacked<SData/*15:0*/, 16> __PVT__modified_words;
    VlUnpacked<SData/*15:0*/, 16> __Vcellinp__u_adder_tree__in;
    VlUnpacked<SData/*15:0*/, 16> __PVT__class_words;
    VlUnpacked<VlUnpacked<SData/*15:0*/, 16>, 5> __PVT__u_adder_tree__DOT__stage;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_partial_dot(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_partial_dot();
    VL_UNCOPYABLE(Vtop_partial_dot);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

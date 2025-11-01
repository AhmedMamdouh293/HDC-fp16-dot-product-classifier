// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop_float16_adder.h"
#include "Vtop_partial_dot.h"

VL_INLINE_OPT void Vtop_partial_dot___nba_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__0__KET____DOT__u_partial_dot__1(Vtop_partial_dot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_partial_dot___nba_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__0__KET____DOT__u_partial_dot__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[1U][0U] 
        = vlSelf->__PVT__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__0__KET____DOT__adder->result;
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[1U][1U] 
        = vlSelf->__PVT__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__1__KET____DOT__adder->result;
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[1U][2U] 
        = vlSelf->__PVT__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__2__KET____DOT__adder->result;
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[1U][3U] 
        = vlSelf->__PVT__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__3__KET____DOT__adder->result;
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[1U][4U] 
        = vlSelf->__PVT__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__4__KET____DOT__adder->result;
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[1U][5U] 
        = vlSelf->__PVT__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__5__KET____DOT__adder->result;
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[1U][6U] 
        = vlSelf->__PVT__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__6__KET____DOT__adder->result;
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[1U][7U] 
        = vlSelf->__PVT__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__7__KET____DOT__adder->result;
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[2U][0U] 
        = vlSelf->__PVT__u_adder_tree__DOT__gen_stage__BRA__1__KET____DOT__gen_adder__BRA__0__KET____DOT__adder->result;
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[2U][1U] 
        = vlSelf->__PVT__u_adder_tree__DOT__gen_stage__BRA__1__KET____DOT__gen_adder__BRA__1__KET____DOT__adder->result;
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[2U][2U] 
        = vlSelf->__PVT__u_adder_tree__DOT__gen_stage__BRA__1__KET____DOT__gen_adder__BRA__2__KET____DOT__adder->result;
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[2U][3U] 
        = vlSelf->__PVT__u_adder_tree__DOT__gen_stage__BRA__1__KET____DOT__gen_adder__BRA__3__KET____DOT__adder->result;
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[3U][0U] 
        = vlSelf->__PVT__u_adder_tree__DOT__gen_stage__BRA__2__KET____DOT__gen_adder__BRA__0__KET____DOT__adder->result;
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[3U][1U] 
        = vlSelf->__PVT__u_adder_tree__DOT__gen_stage__BRA__2__KET____DOT__gen_adder__BRA__1__KET____DOT__adder->result;
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[4U][0U] 
        = vlSelf->__PVT__u_adder_tree__DOT__gen_stage__BRA__3__KET____DOT__gen_adder__BRA__0__KET____DOT__adder->result;
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop_float16_adder.h"
#include "Vtop_partial_dot.h"

VL_ATTR_COLD void Vtop_partial_dot___stl_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__0__KET____DOT__u_partial_dot__0(Vtop_partial_dot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_partial_dot___stl_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__0__KET____DOT__u_partial_dot__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_a 
        = ((0U == (0x1fU & ((IData)(vlSelfRef.accum_dout) 
                            >> 0xaU))) ? (0x3ffU & (IData)(vlSelfRef.accum_dout))
            : (0x400U | (0x3ffU & (IData)(vlSelfRef.accum_dout))));
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
    vlSelfRef.__PVT__class_words[0U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [0U][0U]);
    vlSelfRef.__PVT__class_words[1U] = (vlSymsp->TOP.top__DOT__class_words
                                        [0U][0U] >> 0x10U);
    vlSelfRef.__PVT__class_words[2U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [0U][1U]);
    vlSelfRef.__PVT__class_words[3U] = (vlSymsp->TOP.top__DOT__class_words
                                        [0U][1U] >> 0x10U);
    vlSelfRef.__PVT__class_words[4U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [0U][2U]);
    vlSelfRef.__PVT__class_words[5U] = (vlSymsp->TOP.top__DOT__class_words
                                        [0U][2U] >> 0x10U);
    vlSelfRef.__PVT__class_words[6U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [0U][3U]);
    vlSelfRef.__PVT__class_words[7U] = (vlSymsp->TOP.top__DOT__class_words
                                        [0U][3U] >> 0x10U);
    vlSelfRef.__PVT__class_words[8U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [0U][4U]);
    vlSelfRef.__PVT__class_words[9U] = (vlSymsp->TOP.top__DOT__class_words
                                        [0U][4U] >> 0x10U);
    vlSelfRef.__PVT__class_words[0xaU] = (0xffffU & 
                                          vlSymsp->TOP.top__DOT__class_words
                                          [0U][5U]);
    vlSelfRef.__PVT__class_words[0xbU] = (vlSymsp->TOP.top__DOT__class_words
                                          [0U][5U] 
                                          >> 0x10U);
    vlSelfRef.__PVT__class_words[0xcU] = (0xffffU & 
                                          vlSymsp->TOP.top__DOT__class_words
                                          [0U][6U]);
    vlSelfRef.__PVT__class_words[0xdU] = (vlSymsp->TOP.top__DOT__class_words
                                          [0U][6U] 
                                          >> 0x10U);
    vlSelfRef.__PVT__class_words[0xeU] = (0xffffU & 
                                          vlSymsp->TOP.top__DOT__class_words
                                          [0U][7U]);
    vlSelfRef.__PVT__class_words[0xfU] = (vlSymsp->TOP.top__DOT__class_words
                                          [0U][7U] 
                                          >> 0x10U);
    vlSelfRef.__PVT__modified_words[0U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (7U 
                                                   & (VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [0U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [0U]))
                                            : vlSelfRef.__PVT__class_words
                                           [0U]);
    vlSelfRef.__PVT__modified_words[1U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (7U 
                                                   & (((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [1U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [1U]))
                                            : vlSelfRef.__PVT__class_words
                                           [1U]);
    vlSelfRef.__PVT__modified_words[2U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (7U 
                                                   & (((IData)(2U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [2U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [2U]))
                                            : vlSelfRef.__PVT__class_words
                                           [2U]);
    vlSelfRef.__PVT__modified_words[3U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (7U 
                                                   & (((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(3U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [3U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [3U]))
                                            : vlSelfRef.__PVT__class_words
                                           [3U]);
    vlSelfRef.__PVT__modified_words[4U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (7U 
                                                   & (((IData)(4U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [4U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [4U]))
                                            : vlSelfRef.__PVT__class_words
                                           [4U]);
    vlSelfRef.__PVT__modified_words[5U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (7U 
                                                   & (((IData)(5U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(5U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [5U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [5U]))
                                            : vlSelfRef.__PVT__class_words
                                           [5U]);
    vlSelfRef.__PVT__modified_words[6U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (7U 
                                                   & (((IData)(6U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(6U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [6U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [6U]))
                                            : vlSelfRef.__PVT__class_words
                                           [6U]);
    vlSelfRef.__PVT__modified_words[7U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (7U 
                                                   & (((IData)(7U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(7U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [7U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [7U]))
                                            : vlSelfRef.__PVT__class_words
                                           [7U]);
    vlSelfRef.__PVT__modified_words[8U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (7U 
                                                   & (((IData)(8U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(8U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [8U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [8U]))
                                            : vlSelfRef.__PVT__class_words
                                           [8U]);
    vlSelfRef.__PVT__modified_words[9U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (7U 
                                                   & (((IData)(9U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(9U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [9U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [9U]))
                                            : vlSelfRef.__PVT__class_words
                                           [9U]);
    vlSelfRef.__PVT__modified_words[0xaU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (7U 
                                                & (((IData)(0xaU) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(0xaU) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xaU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xaU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xaU]);
    vlSelfRef.__PVT__modified_words[0xbU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (7U 
                                                & (((IData)(0xbU) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(0xbU) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xbU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xbU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xbU]);
    vlSelfRef.__PVT__modified_words[0xcU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (7U 
                                                & (((IData)(0xcU) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(0xcU) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xcU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xcU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xcU]);
    vlSelfRef.__PVT__modified_words[0xdU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (7U 
                                                & (((IData)(0xdU) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xdU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xdU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xdU]);
    vlSelfRef.__PVT__modified_words[0xeU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (7U 
                                                & (((IData)(0xeU) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(0xeU) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xeU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xeU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xeU]);
    vlSelfRef.__PVT__modified_words[0xfU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (7U 
                                                & (((IData)(0xfU) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(0xfU) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xfU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xfU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xfU]);
    vlSelfRef.__Vcellinp__u_adder_tree__in[0U] = vlSelfRef.__PVT__modified_words
        [0U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[1U] = vlSelfRef.__PVT__modified_words
        [1U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[2U] = vlSelfRef.__PVT__modified_words
        [2U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[3U] = vlSelfRef.__PVT__modified_words
        [3U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[4U] = vlSelfRef.__PVT__modified_words
        [4U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[5U] = vlSelfRef.__PVT__modified_words
        [5U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[6U] = vlSelfRef.__PVT__modified_words
        [6U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[7U] = vlSelfRef.__PVT__modified_words
        [7U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[8U] = vlSelfRef.__PVT__modified_words
        [8U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[9U] = vlSelfRef.__PVT__modified_words
        [9U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xaU] = 
        vlSelfRef.__PVT__modified_words[0xaU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xbU] = 
        vlSelfRef.__PVT__modified_words[0xbU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xcU] = 
        vlSelfRef.__PVT__modified_words[0xcU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xdU] = 
        vlSelfRef.__PVT__modified_words[0xdU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xeU] = 
        vlSelfRef.__PVT__modified_words[0xeU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xfU] = 
        vlSelfRef.__PVT__modified_words[0xfU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][1U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[1U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][2U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[2U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][3U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[3U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][4U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[4U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][5U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[5U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][6U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[6U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][7U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[7U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][8U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[8U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][9U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[9U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xaU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xaU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xbU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xbU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xcU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xcU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xdU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xdU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xeU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xeU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xfU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xfU];
    vlSelfRef.__PVT__ad_out = vlSelfRef.__PVT__u_adder_tree__DOT__stage
        [4U][0U];
    vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_b 
        = ((0U == (0x1fU & ((IData)(vlSelfRef.__PVT__ad_out) 
                            >> 0xaU))) ? (0x3ffU & (IData)(vlSelfRef.__PVT__ad_out))
            : (0x400U | (0x3ffU & (IData)(vlSelfRef.__PVT__ad_out))));
}

VL_ATTR_COLD void Vtop_partial_dot___stl_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__1__KET____DOT__u_partial_dot__0(Vtop_partial_dot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_partial_dot___stl_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__1__KET____DOT__u_partial_dot__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_a 
        = ((0U == (0x1fU & ((IData)(vlSelfRef.accum_dout) 
                            >> 0xaU))) ? (0x3ffU & (IData)(vlSelfRef.accum_dout))
            : (0x400U | (0x3ffU & (IData)(vlSelfRef.accum_dout))));
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
    vlSelfRef.__PVT__class_words[0U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [1U][0U]);
    vlSelfRef.__PVT__class_words[1U] = (vlSymsp->TOP.top__DOT__class_words
                                        [1U][0U] >> 0x10U);
    vlSelfRef.__PVT__class_words[2U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [1U][1U]);
    vlSelfRef.__PVT__class_words[3U] = (vlSymsp->TOP.top__DOT__class_words
                                        [1U][1U] >> 0x10U);
    vlSelfRef.__PVT__class_words[4U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [1U][2U]);
    vlSelfRef.__PVT__class_words[5U] = (vlSymsp->TOP.top__DOT__class_words
                                        [1U][2U] >> 0x10U);
    vlSelfRef.__PVT__class_words[6U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [1U][3U]);
    vlSelfRef.__PVT__class_words[7U] = (vlSymsp->TOP.top__DOT__class_words
                                        [1U][3U] >> 0x10U);
    vlSelfRef.__PVT__class_words[8U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [1U][4U]);
    vlSelfRef.__PVT__class_words[9U] = (vlSymsp->TOP.top__DOT__class_words
                                        [1U][4U] >> 0x10U);
    vlSelfRef.__PVT__class_words[0xaU] = (0xffffU & 
                                          vlSymsp->TOP.top__DOT__class_words
                                          [1U][5U]);
    vlSelfRef.__PVT__class_words[0xbU] = (vlSymsp->TOP.top__DOT__class_words
                                          [1U][5U] 
                                          >> 0x10U);
    vlSelfRef.__PVT__class_words[0xcU] = (0xffffU & 
                                          vlSymsp->TOP.top__DOT__class_words
                                          [1U][6U]);
    vlSelfRef.__PVT__class_words[0xdU] = (vlSymsp->TOP.top__DOT__class_words
                                          [1U][6U] 
                                          >> 0x10U);
    vlSelfRef.__PVT__class_words[0xeU] = (0xffffU & 
                                          vlSymsp->TOP.top__DOT__class_words
                                          [1U][7U]);
    vlSelfRef.__PVT__class_words[0xfU] = (vlSymsp->TOP.top__DOT__class_words
                                          [1U][7U] 
                                          >> 0x10U);
    vlSelfRef.__PVT__modified_words[0U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x100U) 
                                                    + 
                                                    (0xffU 
                                                     & VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x100U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [0U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [0U]))
                                            : vlSelfRef.__PVT__class_words
                                           [0U]);
    vlSelfRef.__PVT__modified_words[1U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x100U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x100U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(1U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [1U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [1U]))
                                            : vlSelfRef.__PVT__class_words
                                           [1U]);
    vlSelfRef.__PVT__modified_words[2U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x100U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x100U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(2U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [2U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [2U]))
                                            : vlSelfRef.__PVT__class_words
                                           [2U]);
    vlSelfRef.__PVT__modified_words[3U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x100U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x100U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(3U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [3U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [3U]))
                                            : vlSelfRef.__PVT__class_words
                                           [3U]);
    vlSelfRef.__PVT__modified_words[4U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x100U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(4U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x100U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(4U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [4U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [4U]))
                                            : vlSelfRef.__PVT__class_words
                                           [4U]);
    vlSelfRef.__PVT__modified_words[5U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x100U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(5U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x100U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(5U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [5U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [5U]))
                                            : vlSelfRef.__PVT__class_words
                                           [5U]);
    vlSelfRef.__PVT__modified_words[6U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x100U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(6U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x100U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(6U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [6U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [6U]))
                                            : vlSelfRef.__PVT__class_words
                                           [6U]);
    vlSelfRef.__PVT__modified_words[7U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x100U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(7U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x100U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(7U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [7U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [7U]))
                                            : vlSelfRef.__PVT__class_words
                                           [7U]);
    vlSelfRef.__PVT__modified_words[8U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x100U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x100U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(8U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [8U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [8U]))
                                            : vlSelfRef.__PVT__class_words
                                           [8U]);
    vlSelfRef.__PVT__modified_words[9U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x100U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(9U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x100U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(9U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [9U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [9U]))
                                            : vlSelfRef.__PVT__class_words
                                           [9U]);
    vlSelfRef.__PVT__modified_words[0xaU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0x100U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xaU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x100U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xaU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xaU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xaU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xaU]);
    vlSelfRef.__PVT__modified_words[0xbU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0x100U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xbU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x100U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xbU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xbU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xbU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xbU]);
    vlSelfRef.__PVT__modified_words[0xcU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0x100U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xcU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x100U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xcU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xcU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xcU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xcU]);
    vlSelfRef.__PVT__modified_words[0xdU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0x100U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xdU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x100U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xdU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xdU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xdU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xdU]);
    vlSelfRef.__PVT__modified_words[0xeU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0x100U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xeU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x100U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xeU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xeU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xeU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xeU]);
    vlSelfRef.__PVT__modified_words[0xfU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0x100U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xfU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x100U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xfU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xfU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xfU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xfU]);
    vlSelfRef.__Vcellinp__u_adder_tree__in[0U] = vlSelfRef.__PVT__modified_words
        [0U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[1U] = vlSelfRef.__PVT__modified_words
        [1U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[2U] = vlSelfRef.__PVT__modified_words
        [2U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[3U] = vlSelfRef.__PVT__modified_words
        [3U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[4U] = vlSelfRef.__PVT__modified_words
        [4U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[5U] = vlSelfRef.__PVT__modified_words
        [5U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[6U] = vlSelfRef.__PVT__modified_words
        [6U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[7U] = vlSelfRef.__PVT__modified_words
        [7U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[8U] = vlSelfRef.__PVT__modified_words
        [8U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[9U] = vlSelfRef.__PVT__modified_words
        [9U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xaU] = 
        vlSelfRef.__PVT__modified_words[0xaU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xbU] = 
        vlSelfRef.__PVT__modified_words[0xbU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xcU] = 
        vlSelfRef.__PVT__modified_words[0xcU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xdU] = 
        vlSelfRef.__PVT__modified_words[0xdU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xeU] = 
        vlSelfRef.__PVT__modified_words[0xeU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xfU] = 
        vlSelfRef.__PVT__modified_words[0xfU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][1U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[1U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][2U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[2U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][3U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[3U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][4U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[4U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][5U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[5U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][6U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[6U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][7U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[7U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][8U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[8U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][9U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[9U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xaU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xaU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xbU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xbU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xcU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xcU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xdU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xdU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xeU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xeU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xfU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xfU];
    vlSelfRef.__PVT__ad_out = vlSelfRef.__PVT__u_adder_tree__DOT__stage
        [4U][0U];
    vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_b 
        = ((0U == (0x1fU & ((IData)(vlSelfRef.__PVT__ad_out) 
                            >> 0xaU))) ? (0x3ffU & (IData)(vlSelfRef.__PVT__ad_out))
            : (0x400U | (0x3ffU & (IData)(vlSelfRef.__PVT__ad_out))));
}

VL_ATTR_COLD void Vtop_partial_dot___stl_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__2__KET____DOT__u_partial_dot__0(Vtop_partial_dot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_partial_dot___stl_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__2__KET____DOT__u_partial_dot__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_a 
        = ((0U == (0x1fU & ((IData)(vlSelfRef.accum_dout) 
                            >> 0xaU))) ? (0x3ffU & (IData)(vlSelfRef.accum_dout))
            : (0x400U | (0x3ffU & (IData)(vlSelfRef.accum_dout))));
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
    vlSelfRef.__PVT__class_words[0U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [2U][0U]);
    vlSelfRef.__PVT__class_words[1U] = (vlSymsp->TOP.top__DOT__class_words
                                        [2U][0U] >> 0x10U);
    vlSelfRef.__PVT__class_words[2U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [2U][1U]);
    vlSelfRef.__PVT__class_words[3U] = (vlSymsp->TOP.top__DOT__class_words
                                        [2U][1U] >> 0x10U);
    vlSelfRef.__PVT__class_words[4U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [2U][2U]);
    vlSelfRef.__PVT__class_words[5U] = (vlSymsp->TOP.top__DOT__class_words
                                        [2U][2U] >> 0x10U);
    vlSelfRef.__PVT__class_words[6U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [2U][3U]);
    vlSelfRef.__PVT__class_words[7U] = (vlSymsp->TOP.top__DOT__class_words
                                        [2U][3U] >> 0x10U);
    vlSelfRef.__PVT__class_words[8U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [2U][4U]);
    vlSelfRef.__PVT__class_words[9U] = (vlSymsp->TOP.top__DOT__class_words
                                        [2U][4U] >> 0x10U);
    vlSelfRef.__PVT__class_words[0xaU] = (0xffffU & 
                                          vlSymsp->TOP.top__DOT__class_words
                                          [2U][5U]);
    vlSelfRef.__PVT__class_words[0xbU] = (vlSymsp->TOP.top__DOT__class_words
                                          [2U][5U] 
                                          >> 0x10U);
    vlSelfRef.__PVT__class_words[0xcU] = (0xffffU & 
                                          vlSymsp->TOP.top__DOT__class_words
                                          [2U][6U]);
    vlSelfRef.__PVT__class_words[0xdU] = (vlSymsp->TOP.top__DOT__class_words
                                          [2U][6U] 
                                          >> 0x10U);
    vlSelfRef.__PVT__class_words[0xeU] = (0xffffU & 
                                          vlSymsp->TOP.top__DOT__class_words
                                          [2U][7U]);
    vlSelfRef.__PVT__class_words[0xfU] = (vlSymsp->TOP.top__DOT__class_words
                                          [2U][7U] 
                                          >> 0x10U);
    vlSelfRef.__PVT__modified_words[0U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x200U) 
                                                    + 
                                                    (0xffU 
                                                     & VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x200U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [0U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [0U]))
                                            : vlSelfRef.__PVT__class_words
                                           [0U]);
    vlSelfRef.__PVT__modified_words[1U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x200U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x200U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(1U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [1U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [1U]))
                                            : vlSelfRef.__PVT__class_words
                                           [1U]);
    vlSelfRef.__PVT__modified_words[2U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x200U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x200U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(2U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [2U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [2U]))
                                            : vlSelfRef.__PVT__class_words
                                           [2U]);
    vlSelfRef.__PVT__modified_words[3U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x200U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x200U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(3U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [3U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [3U]))
                                            : vlSelfRef.__PVT__class_words
                                           [3U]);
    vlSelfRef.__PVT__modified_words[4U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x200U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(4U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x200U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(4U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [4U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [4U]))
                                            : vlSelfRef.__PVT__class_words
                                           [4U]);
    vlSelfRef.__PVT__modified_words[5U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x200U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(5U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x200U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(5U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [5U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [5U]))
                                            : vlSelfRef.__PVT__class_words
                                           [5U]);
    vlSelfRef.__PVT__modified_words[6U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x200U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(6U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x200U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(6U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [6U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [6U]))
                                            : vlSelfRef.__PVT__class_words
                                           [6U]);
    vlSelfRef.__PVT__modified_words[7U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x200U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(7U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x200U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(7U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [7U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [7U]))
                                            : vlSelfRef.__PVT__class_words
                                           [7U]);
    vlSelfRef.__PVT__modified_words[8U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x200U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x200U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(8U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [8U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [8U]))
                                            : vlSelfRef.__PVT__class_words
                                           [8U]);
    vlSelfRef.__PVT__modified_words[9U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x200U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(9U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x200U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(9U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [9U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [9U]))
                                            : vlSelfRef.__PVT__class_words
                                           [9U]);
    vlSelfRef.__PVT__modified_words[0xaU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0x200U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xaU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x200U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xaU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xaU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xaU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xaU]);
    vlSelfRef.__PVT__modified_words[0xbU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0x200U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xbU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x200U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xbU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xbU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xbU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xbU]);
    vlSelfRef.__PVT__modified_words[0xcU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0x200U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xcU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x200U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xcU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xcU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xcU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xcU]);
    vlSelfRef.__PVT__modified_words[0xdU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0x200U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xdU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x200U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xdU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xdU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xdU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xdU]);
    vlSelfRef.__PVT__modified_words[0xeU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0x200U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xeU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x200U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xeU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xeU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xeU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xeU]);
    vlSelfRef.__PVT__modified_words[0xfU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0x200U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xfU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x200U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xfU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xfU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xfU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xfU]);
    vlSelfRef.__Vcellinp__u_adder_tree__in[0U] = vlSelfRef.__PVT__modified_words
        [0U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[1U] = vlSelfRef.__PVT__modified_words
        [1U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[2U] = vlSelfRef.__PVT__modified_words
        [2U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[3U] = vlSelfRef.__PVT__modified_words
        [3U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[4U] = vlSelfRef.__PVT__modified_words
        [4U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[5U] = vlSelfRef.__PVT__modified_words
        [5U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[6U] = vlSelfRef.__PVT__modified_words
        [6U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[7U] = vlSelfRef.__PVT__modified_words
        [7U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[8U] = vlSelfRef.__PVT__modified_words
        [8U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[9U] = vlSelfRef.__PVT__modified_words
        [9U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xaU] = 
        vlSelfRef.__PVT__modified_words[0xaU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xbU] = 
        vlSelfRef.__PVT__modified_words[0xbU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xcU] = 
        vlSelfRef.__PVT__modified_words[0xcU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xdU] = 
        vlSelfRef.__PVT__modified_words[0xdU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xeU] = 
        vlSelfRef.__PVT__modified_words[0xeU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xfU] = 
        vlSelfRef.__PVT__modified_words[0xfU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][1U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[1U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][2U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[2U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][3U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[3U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][4U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[4U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][5U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[5U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][6U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[6U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][7U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[7U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][8U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[8U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][9U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[9U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xaU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xaU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xbU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xbU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xcU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xcU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xdU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xdU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xeU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xeU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xfU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xfU];
    vlSelfRef.__PVT__ad_out = vlSelfRef.__PVT__u_adder_tree__DOT__stage
        [4U][0U];
    vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_b 
        = ((0U == (0x1fU & ((IData)(vlSelfRef.__PVT__ad_out) 
                            >> 0xaU))) ? (0x3ffU & (IData)(vlSelfRef.__PVT__ad_out))
            : (0x400U | (0x3ffU & (IData)(vlSelfRef.__PVT__ad_out))));
}

VL_ATTR_COLD void Vtop_partial_dot___stl_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__3__KET____DOT__u_partial_dot__0(Vtop_partial_dot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_partial_dot___stl_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__3__KET____DOT__u_partial_dot__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_a 
        = ((0U == (0x1fU & ((IData)(vlSelfRef.accum_dout) 
                            >> 0xaU))) ? (0x3ffU & (IData)(vlSelfRef.accum_dout))
            : (0x400U | (0x3ffU & (IData)(vlSelfRef.accum_dout))));
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
    vlSelfRef.__PVT__class_words[0U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [3U][0U]);
    vlSelfRef.__PVT__class_words[1U] = (vlSymsp->TOP.top__DOT__class_words
                                        [3U][0U] >> 0x10U);
    vlSelfRef.__PVT__class_words[2U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [3U][1U]);
    vlSelfRef.__PVT__class_words[3U] = (vlSymsp->TOP.top__DOT__class_words
                                        [3U][1U] >> 0x10U);
    vlSelfRef.__PVT__class_words[4U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [3U][2U]);
    vlSelfRef.__PVT__class_words[5U] = (vlSymsp->TOP.top__DOT__class_words
                                        [3U][2U] >> 0x10U);
    vlSelfRef.__PVT__class_words[6U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [3U][3U]);
    vlSelfRef.__PVT__class_words[7U] = (vlSymsp->TOP.top__DOT__class_words
                                        [3U][3U] >> 0x10U);
    vlSelfRef.__PVT__class_words[8U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [3U][4U]);
    vlSelfRef.__PVT__class_words[9U] = (vlSymsp->TOP.top__DOT__class_words
                                        [3U][4U] >> 0x10U);
    vlSelfRef.__PVT__class_words[0xaU] = (0xffffU & 
                                          vlSymsp->TOP.top__DOT__class_words
                                          [3U][5U]);
    vlSelfRef.__PVT__class_words[0xbU] = (vlSymsp->TOP.top__DOT__class_words
                                          [3U][5U] 
                                          >> 0x10U);
    vlSelfRef.__PVT__class_words[0xcU] = (0xffffU & 
                                          vlSymsp->TOP.top__DOT__class_words
                                          [3U][6U]);
    vlSelfRef.__PVT__class_words[0xdU] = (vlSymsp->TOP.top__DOT__class_words
                                          [3U][6U] 
                                          >> 0x10U);
    vlSelfRef.__PVT__class_words[0xeU] = (0xffffU & 
                                          vlSymsp->TOP.top__DOT__class_words
                                          [3U][7U]);
    vlSelfRef.__PVT__class_words[0xfU] = (vlSymsp->TOP.top__DOT__class_words
                                          [3U][7U] 
                                          >> 0x10U);
    vlSelfRef.__PVT__modified_words[0U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x300U) 
                                                    + 
                                                    (0xffU 
                                                     & VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x300U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [0U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [0U]))
                                            : vlSelfRef.__PVT__class_words
                                           [0U]);
    vlSelfRef.__PVT__modified_words[1U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x300U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x300U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(1U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [1U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [1U]))
                                            : vlSelfRef.__PVT__class_words
                                           [1U]);
    vlSelfRef.__PVT__modified_words[2U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x300U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x300U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(2U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [2U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [2U]))
                                            : vlSelfRef.__PVT__class_words
                                           [2U]);
    vlSelfRef.__PVT__modified_words[3U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x300U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x300U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(3U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [3U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [3U]))
                                            : vlSelfRef.__PVT__class_words
                                           [3U]);
    vlSelfRef.__PVT__modified_words[4U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x300U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(4U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x300U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(4U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [4U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [4U]))
                                            : vlSelfRef.__PVT__class_words
                                           [4U]);
    vlSelfRef.__PVT__modified_words[5U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x300U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(5U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x300U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(5U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [5U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [5U]))
                                            : vlSelfRef.__PVT__class_words
                                           [5U]);
    vlSelfRef.__PVT__modified_words[6U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x300U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(6U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x300U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(6U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [6U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [6U]))
                                            : vlSelfRef.__PVT__class_words
                                           [6U]);
    vlSelfRef.__PVT__modified_words[7U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x300U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(7U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x300U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(7U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [7U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [7U]))
                                            : vlSelfRef.__PVT__class_words
                                           [7U]);
    vlSelfRef.__PVT__modified_words[8U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x300U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x300U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(8U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [8U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [8U]))
                                            : vlSelfRef.__PVT__class_words
                                           [8U]);
    vlSelfRef.__PVT__modified_words[9U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x300U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(9U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x300U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(9U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [9U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [9U]))
                                            : vlSelfRef.__PVT__class_words
                                           [9U]);
    vlSelfRef.__PVT__modified_words[0xaU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0x300U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xaU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x300U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xaU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xaU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xaU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xaU]);
    vlSelfRef.__PVT__modified_words[0xbU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0x300U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xbU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x300U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xbU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xbU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xbU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xbU]);
    vlSelfRef.__PVT__modified_words[0xcU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0x300U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xcU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x300U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xcU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xcU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xcU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xcU]);
    vlSelfRef.__PVT__modified_words[0xdU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0x300U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xdU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x300U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xdU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xdU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xdU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xdU]);
    vlSelfRef.__PVT__modified_words[0xeU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0x300U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xeU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x300U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xeU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xeU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xeU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xeU]);
    vlSelfRef.__PVT__modified_words[0xfU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0x300U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xfU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x300U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xfU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xfU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xfU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xfU]);
    vlSelfRef.__Vcellinp__u_adder_tree__in[0U] = vlSelfRef.__PVT__modified_words
        [0U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[1U] = vlSelfRef.__PVT__modified_words
        [1U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[2U] = vlSelfRef.__PVT__modified_words
        [2U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[3U] = vlSelfRef.__PVT__modified_words
        [3U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[4U] = vlSelfRef.__PVT__modified_words
        [4U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[5U] = vlSelfRef.__PVT__modified_words
        [5U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[6U] = vlSelfRef.__PVT__modified_words
        [6U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[7U] = vlSelfRef.__PVT__modified_words
        [7U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[8U] = vlSelfRef.__PVT__modified_words
        [8U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[9U] = vlSelfRef.__PVT__modified_words
        [9U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xaU] = 
        vlSelfRef.__PVT__modified_words[0xaU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xbU] = 
        vlSelfRef.__PVT__modified_words[0xbU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xcU] = 
        vlSelfRef.__PVT__modified_words[0xcU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xdU] = 
        vlSelfRef.__PVT__modified_words[0xdU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xeU] = 
        vlSelfRef.__PVT__modified_words[0xeU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xfU] = 
        vlSelfRef.__PVT__modified_words[0xfU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][1U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[1U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][2U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[2U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][3U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[3U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][4U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[4U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][5U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[5U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][6U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[6U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][7U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[7U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][8U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[8U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][9U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[9U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xaU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xaU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xbU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xbU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xcU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xcU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xdU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xdU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xeU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xeU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xfU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xfU];
    vlSelfRef.__PVT__ad_out = vlSelfRef.__PVT__u_adder_tree__DOT__stage
        [4U][0U];
    vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_b 
        = ((0U == (0x1fU & ((IData)(vlSelfRef.__PVT__ad_out) 
                            >> 0xaU))) ? (0x3ffU & (IData)(vlSelfRef.__PVT__ad_out))
            : (0x400U | (0x3ffU & (IData)(vlSelfRef.__PVT__ad_out))));
}

VL_ATTR_COLD void Vtop_partial_dot___stl_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__4__KET____DOT__u_partial_dot__0(Vtop_partial_dot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_partial_dot___stl_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__4__KET____DOT__u_partial_dot__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_a 
        = ((0U == (0x1fU & ((IData)(vlSelfRef.accum_dout) 
                            >> 0xaU))) ? (0x3ffU & (IData)(vlSelfRef.accum_dout))
            : (0x400U | (0x3ffU & (IData)(vlSelfRef.accum_dout))));
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
    vlSelfRef.__PVT__class_words[0U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [4U][0U]);
    vlSelfRef.__PVT__class_words[1U] = (vlSymsp->TOP.top__DOT__class_words
                                        [4U][0U] >> 0x10U);
    vlSelfRef.__PVT__class_words[2U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [4U][1U]);
    vlSelfRef.__PVT__class_words[3U] = (vlSymsp->TOP.top__DOT__class_words
                                        [4U][1U] >> 0x10U);
    vlSelfRef.__PVT__class_words[4U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [4U][2U]);
    vlSelfRef.__PVT__class_words[5U] = (vlSymsp->TOP.top__DOT__class_words
                                        [4U][2U] >> 0x10U);
    vlSelfRef.__PVT__class_words[6U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [4U][3U]);
    vlSelfRef.__PVT__class_words[7U] = (vlSymsp->TOP.top__DOT__class_words
                                        [4U][3U] >> 0x10U);
    vlSelfRef.__PVT__class_words[8U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [4U][4U]);
    vlSelfRef.__PVT__class_words[9U] = (vlSymsp->TOP.top__DOT__class_words
                                        [4U][4U] >> 0x10U);
    vlSelfRef.__PVT__class_words[0xaU] = (0xffffU & 
                                          vlSymsp->TOP.top__DOT__class_words
                                          [4U][5U]);
    vlSelfRef.__PVT__class_words[0xbU] = (vlSymsp->TOP.top__DOT__class_words
                                          [4U][5U] 
                                          >> 0x10U);
    vlSelfRef.__PVT__class_words[0xcU] = (0xffffU & 
                                          vlSymsp->TOP.top__DOT__class_words
                                          [4U][6U]);
    vlSelfRef.__PVT__class_words[0xdU] = (vlSymsp->TOP.top__DOT__class_words
                                          [4U][6U] 
                                          >> 0x10U);
    vlSelfRef.__PVT__class_words[0xeU] = (0xffffU & 
                                          vlSymsp->TOP.top__DOT__class_words
                                          [4U][7U]);
    vlSelfRef.__PVT__class_words[0xfU] = (vlSymsp->TOP.top__DOT__class_words
                                          [4U][7U] 
                                          >> 0x10U);
    vlSelfRef.__PVT__modified_words[0U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x400U) 
                                                    + 
                                                    (0xffU 
                                                     & VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x400U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [0U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [0U]))
                                            : vlSelfRef.__PVT__class_words
                                           [0U]);
    vlSelfRef.__PVT__modified_words[1U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x400U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x400U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(1U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [1U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [1U]))
                                            : vlSelfRef.__PVT__class_words
                                           [1U]);
    vlSelfRef.__PVT__modified_words[2U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x400U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x400U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(2U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [2U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [2U]))
                                            : vlSelfRef.__PVT__class_words
                                           [2U]);
    vlSelfRef.__PVT__modified_words[3U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x400U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x400U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(3U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [3U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [3U]))
                                            : vlSelfRef.__PVT__class_words
                                           [3U]);
    vlSelfRef.__PVT__modified_words[4U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x400U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(4U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x400U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(4U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [4U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [4U]))
                                            : vlSelfRef.__PVT__class_words
                                           [4U]);
    vlSelfRef.__PVT__modified_words[5U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x400U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(5U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x400U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(5U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [5U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [5U]))
                                            : vlSelfRef.__PVT__class_words
                                           [5U]);
    vlSelfRef.__PVT__modified_words[6U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x400U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(6U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x400U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(6U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [6U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [6U]))
                                            : vlSelfRef.__PVT__class_words
                                           [6U]);
    vlSelfRef.__PVT__modified_words[7U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x400U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(7U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x400U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(7U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [7U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [7U]))
                                            : vlSelfRef.__PVT__class_words
                                           [7U]);
    vlSelfRef.__PVT__modified_words[8U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x400U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x400U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(8U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [8U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [8U]))
                                            : vlSelfRef.__PVT__class_words
                                           [8U]);
    vlSelfRef.__PVT__modified_words[9U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x400U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(9U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x400U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(9U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [9U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [9U]))
                                            : vlSelfRef.__PVT__class_words
                                           [9U]);
    vlSelfRef.__PVT__modified_words[0xaU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0x400U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xaU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x400U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xaU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xaU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xaU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xaU]);
    vlSelfRef.__PVT__modified_words[0xbU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0x400U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xbU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x400U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xbU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xbU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xbU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xbU]);
    vlSelfRef.__PVT__modified_words[0xcU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0x400U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xcU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x400U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xcU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xcU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xcU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xcU]);
    vlSelfRef.__PVT__modified_words[0xdU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0x400U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xdU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x400U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xdU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xdU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xdU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xdU]);
    vlSelfRef.__PVT__modified_words[0xeU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0x400U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xeU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x400U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xeU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xeU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xeU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xeU]);
    vlSelfRef.__PVT__modified_words[0xfU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0x400U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xfU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x400U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xfU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xfU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xfU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xfU]);
    vlSelfRef.__Vcellinp__u_adder_tree__in[0U] = vlSelfRef.__PVT__modified_words
        [0U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[1U] = vlSelfRef.__PVT__modified_words
        [1U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[2U] = vlSelfRef.__PVT__modified_words
        [2U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[3U] = vlSelfRef.__PVT__modified_words
        [3U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[4U] = vlSelfRef.__PVT__modified_words
        [4U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[5U] = vlSelfRef.__PVT__modified_words
        [5U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[6U] = vlSelfRef.__PVT__modified_words
        [6U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[7U] = vlSelfRef.__PVT__modified_words
        [7U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[8U] = vlSelfRef.__PVT__modified_words
        [8U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[9U] = vlSelfRef.__PVT__modified_words
        [9U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xaU] = 
        vlSelfRef.__PVT__modified_words[0xaU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xbU] = 
        vlSelfRef.__PVT__modified_words[0xbU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xcU] = 
        vlSelfRef.__PVT__modified_words[0xcU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xdU] = 
        vlSelfRef.__PVT__modified_words[0xdU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xeU] = 
        vlSelfRef.__PVT__modified_words[0xeU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xfU] = 
        vlSelfRef.__PVT__modified_words[0xfU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][1U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[1U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][2U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[2U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][3U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[3U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][4U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[4U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][5U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[5U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][6U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[6U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][7U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[7U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][8U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[8U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][9U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[9U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xaU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xaU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xbU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xbU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xcU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xcU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xdU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xdU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xeU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xeU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xfU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xfU];
    vlSelfRef.__PVT__ad_out = vlSelfRef.__PVT__u_adder_tree__DOT__stage
        [4U][0U];
    vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_b 
        = ((0U == (0x1fU & ((IData)(vlSelfRef.__PVT__ad_out) 
                            >> 0xaU))) ? (0x3ffU & (IData)(vlSelfRef.__PVT__ad_out))
            : (0x400U | (0x3ffU & (IData)(vlSelfRef.__PVT__ad_out))));
}

VL_ATTR_COLD void Vtop_partial_dot___stl_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__5__KET____DOT__u_partial_dot__0(Vtop_partial_dot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_partial_dot___stl_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__5__KET____DOT__u_partial_dot__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_a 
        = ((0U == (0x1fU & ((IData)(vlSelfRef.accum_dout) 
                            >> 0xaU))) ? (0x3ffU & (IData)(vlSelfRef.accum_dout))
            : (0x400U | (0x3ffU & (IData)(vlSelfRef.accum_dout))));
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
    vlSelfRef.__PVT__class_words[0U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [5U][0U]);
    vlSelfRef.__PVT__class_words[1U] = (vlSymsp->TOP.top__DOT__class_words
                                        [5U][0U] >> 0x10U);
    vlSelfRef.__PVT__class_words[2U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [5U][1U]);
    vlSelfRef.__PVT__class_words[3U] = (vlSymsp->TOP.top__DOT__class_words
                                        [5U][1U] >> 0x10U);
    vlSelfRef.__PVT__class_words[4U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [5U][2U]);
    vlSelfRef.__PVT__class_words[5U] = (vlSymsp->TOP.top__DOT__class_words
                                        [5U][2U] >> 0x10U);
    vlSelfRef.__PVT__class_words[6U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [5U][3U]);
    vlSelfRef.__PVT__class_words[7U] = (vlSymsp->TOP.top__DOT__class_words
                                        [5U][3U] >> 0x10U);
    vlSelfRef.__PVT__class_words[8U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [5U][4U]);
    vlSelfRef.__PVT__class_words[9U] = (vlSymsp->TOP.top__DOT__class_words
                                        [5U][4U] >> 0x10U);
    vlSelfRef.__PVT__class_words[0xaU] = (0xffffU & 
                                          vlSymsp->TOP.top__DOT__class_words
                                          [5U][5U]);
    vlSelfRef.__PVT__class_words[0xbU] = (vlSymsp->TOP.top__DOT__class_words
                                          [5U][5U] 
                                          >> 0x10U);
    vlSelfRef.__PVT__class_words[0xcU] = (0xffffU & 
                                          vlSymsp->TOP.top__DOT__class_words
                                          [5U][6U]);
    vlSelfRef.__PVT__class_words[0xdU] = (vlSymsp->TOP.top__DOT__class_words
                                          [5U][6U] 
                                          >> 0x10U);
    vlSelfRef.__PVT__class_words[0xeU] = (0xffffU & 
                                          vlSymsp->TOP.top__DOT__class_words
                                          [5U][7U]);
    vlSelfRef.__PVT__class_words[0xfU] = (vlSymsp->TOP.top__DOT__class_words
                                          [5U][7U] 
                                          >> 0x10U);
    vlSelfRef.__PVT__modified_words[0U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x500U) 
                                                    + 
                                                    (0xffU 
                                                     & VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x500U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [0U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [0U]))
                                            : vlSelfRef.__PVT__class_words
                                           [0U]);
    vlSelfRef.__PVT__modified_words[1U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x500U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x500U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(1U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [1U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [1U]))
                                            : vlSelfRef.__PVT__class_words
                                           [1U]);
    vlSelfRef.__PVT__modified_words[2U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x500U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x500U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(2U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [2U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [2U]))
                                            : vlSelfRef.__PVT__class_words
                                           [2U]);
    vlSelfRef.__PVT__modified_words[3U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x500U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x500U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(3U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [3U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [3U]))
                                            : vlSelfRef.__PVT__class_words
                                           [3U]);
    vlSelfRef.__PVT__modified_words[4U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x500U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(4U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x500U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(4U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [4U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [4U]))
                                            : vlSelfRef.__PVT__class_words
                                           [4U]);
    vlSelfRef.__PVT__modified_words[5U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x500U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(5U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x500U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(5U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [5U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [5U]))
                                            : vlSelfRef.__PVT__class_words
                                           [5U]);
    vlSelfRef.__PVT__modified_words[6U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x500U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(6U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x500U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(6U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [6U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [6U]))
                                            : vlSelfRef.__PVT__class_words
                                           [6U]);
    vlSelfRef.__PVT__modified_words[7U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x500U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(7U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x500U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(7U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [7U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [7U]))
                                            : vlSelfRef.__PVT__class_words
                                           [7U]);
    vlSelfRef.__PVT__modified_words[8U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x500U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x500U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(8U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [8U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [8U]))
                                            : vlSelfRef.__PVT__class_words
                                           [8U]);
    vlSelfRef.__PVT__modified_words[9U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x500U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(9U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x500U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(9U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [9U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [9U]))
                                            : vlSelfRef.__PVT__class_words
                                           [9U]);
    vlSelfRef.__PVT__modified_words[0xaU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0x500U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xaU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x500U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xaU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xaU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xaU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xaU]);
    vlSelfRef.__PVT__modified_words[0xbU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0x500U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xbU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x500U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xbU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xbU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xbU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xbU]);
    vlSelfRef.__PVT__modified_words[0xcU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0x500U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xcU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x500U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xcU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xcU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xcU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xcU]);
    vlSelfRef.__PVT__modified_words[0xdU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0x500U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xdU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x500U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xdU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xdU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xdU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xdU]);
    vlSelfRef.__PVT__modified_words[0xeU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0x500U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xeU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x500U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xeU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xeU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xeU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xeU]);
    vlSelfRef.__PVT__modified_words[0xfU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0x500U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xfU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x500U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xfU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xfU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xfU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xfU]);
    vlSelfRef.__Vcellinp__u_adder_tree__in[0U] = vlSelfRef.__PVT__modified_words
        [0U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[1U] = vlSelfRef.__PVT__modified_words
        [1U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[2U] = vlSelfRef.__PVT__modified_words
        [2U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[3U] = vlSelfRef.__PVT__modified_words
        [3U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[4U] = vlSelfRef.__PVT__modified_words
        [4U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[5U] = vlSelfRef.__PVT__modified_words
        [5U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[6U] = vlSelfRef.__PVT__modified_words
        [6U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[7U] = vlSelfRef.__PVT__modified_words
        [7U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[8U] = vlSelfRef.__PVT__modified_words
        [8U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[9U] = vlSelfRef.__PVT__modified_words
        [9U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xaU] = 
        vlSelfRef.__PVT__modified_words[0xaU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xbU] = 
        vlSelfRef.__PVT__modified_words[0xbU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xcU] = 
        vlSelfRef.__PVT__modified_words[0xcU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xdU] = 
        vlSelfRef.__PVT__modified_words[0xdU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xeU] = 
        vlSelfRef.__PVT__modified_words[0xeU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xfU] = 
        vlSelfRef.__PVT__modified_words[0xfU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][1U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[1U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][2U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[2U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][3U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[3U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][4U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[4U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][5U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[5U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][6U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[6U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][7U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[7U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][8U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[8U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][9U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[9U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xaU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xaU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xbU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xbU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xcU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xcU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xdU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xdU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xeU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xeU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xfU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xfU];
    vlSelfRef.__PVT__ad_out = vlSelfRef.__PVT__u_adder_tree__DOT__stage
        [4U][0U];
    vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_b 
        = ((0U == (0x1fU & ((IData)(vlSelfRef.__PVT__ad_out) 
                            >> 0xaU))) ? (0x3ffU & (IData)(vlSelfRef.__PVT__ad_out))
            : (0x400U | (0x3ffU & (IData)(vlSelfRef.__PVT__ad_out))));
}

VL_ATTR_COLD void Vtop_partial_dot___stl_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__6__KET____DOT__u_partial_dot__0(Vtop_partial_dot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_partial_dot___stl_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__6__KET____DOT__u_partial_dot__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_a 
        = ((0U == (0x1fU & ((IData)(vlSelfRef.accum_dout) 
                            >> 0xaU))) ? (0x3ffU & (IData)(vlSelfRef.accum_dout))
            : (0x400U | (0x3ffU & (IData)(vlSelfRef.accum_dout))));
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
    vlSelfRef.__PVT__class_words[0U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [6U][0U]);
    vlSelfRef.__PVT__class_words[1U] = (vlSymsp->TOP.top__DOT__class_words
                                        [6U][0U] >> 0x10U);
    vlSelfRef.__PVT__class_words[2U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [6U][1U]);
    vlSelfRef.__PVT__class_words[3U] = (vlSymsp->TOP.top__DOT__class_words
                                        [6U][1U] >> 0x10U);
    vlSelfRef.__PVT__class_words[4U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [6U][2U]);
    vlSelfRef.__PVT__class_words[5U] = (vlSymsp->TOP.top__DOT__class_words
                                        [6U][2U] >> 0x10U);
    vlSelfRef.__PVT__class_words[6U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [6U][3U]);
    vlSelfRef.__PVT__class_words[7U] = (vlSymsp->TOP.top__DOT__class_words
                                        [6U][3U] >> 0x10U);
    vlSelfRef.__PVT__class_words[8U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [6U][4U]);
    vlSelfRef.__PVT__class_words[9U] = (vlSymsp->TOP.top__DOT__class_words
                                        [6U][4U] >> 0x10U);
    vlSelfRef.__PVT__class_words[0xaU] = (0xffffU & 
                                          vlSymsp->TOP.top__DOT__class_words
                                          [6U][5U]);
    vlSelfRef.__PVT__class_words[0xbU] = (vlSymsp->TOP.top__DOT__class_words
                                          [6U][5U] 
                                          >> 0x10U);
    vlSelfRef.__PVT__class_words[0xcU] = (0xffffU & 
                                          vlSymsp->TOP.top__DOT__class_words
                                          [6U][6U]);
    vlSelfRef.__PVT__class_words[0xdU] = (vlSymsp->TOP.top__DOT__class_words
                                          [6U][6U] 
                                          >> 0x10U);
    vlSelfRef.__PVT__class_words[0xeU] = (0xffffU & 
                                          vlSymsp->TOP.top__DOT__class_words
                                          [6U][7U]);
    vlSelfRef.__PVT__class_words[0xfU] = (vlSymsp->TOP.top__DOT__class_words
                                          [6U][7U] 
                                          >> 0x10U);
    vlSelfRef.__PVT__modified_words[0U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x600U) 
                                                    + 
                                                    (0xffU 
                                                     & VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x600U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [0U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [0U]))
                                            : vlSelfRef.__PVT__class_words
                                           [0U]);
    vlSelfRef.__PVT__modified_words[1U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x600U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x600U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(1U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [1U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [1U]))
                                            : vlSelfRef.__PVT__class_words
                                           [1U]);
    vlSelfRef.__PVT__modified_words[2U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x600U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x600U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(2U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [2U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [2U]))
                                            : vlSelfRef.__PVT__class_words
                                           [2U]);
    vlSelfRef.__PVT__modified_words[3U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x600U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x600U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(3U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [3U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [3U]))
                                            : vlSelfRef.__PVT__class_words
                                           [3U]);
    vlSelfRef.__PVT__modified_words[4U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x600U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(4U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x600U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(4U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [4U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [4U]))
                                            : vlSelfRef.__PVT__class_words
                                           [4U]);
    vlSelfRef.__PVT__modified_words[5U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x600U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(5U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x600U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(5U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [5U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [5U]))
                                            : vlSelfRef.__PVT__class_words
                                           [5U]);
    vlSelfRef.__PVT__modified_words[6U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x600U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(6U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x600U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(6U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [6U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [6U]))
                                            : vlSelfRef.__PVT__class_words
                                           [6U]);
    vlSelfRef.__PVT__modified_words[7U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x600U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(7U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x600U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(7U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [7U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [7U]))
                                            : vlSelfRef.__PVT__class_words
                                           [7U]);
    vlSelfRef.__PVT__modified_words[8U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x600U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x600U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(8U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [8U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [8U]))
                                            : vlSelfRef.__PVT__class_words
                                           [8U]);
    vlSelfRef.__PVT__modified_words[9U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x600U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(9U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x600U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(9U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [9U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [9U]))
                                            : vlSelfRef.__PVT__class_words
                                           [9U]);
    vlSelfRef.__PVT__modified_words[0xaU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0x600U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xaU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x600U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xaU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xaU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xaU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xaU]);
    vlSelfRef.__PVT__modified_words[0xbU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0x600U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xbU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x600U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xbU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xbU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xbU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xbU]);
    vlSelfRef.__PVT__modified_words[0xcU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0x600U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xcU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x600U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xcU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xcU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xcU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xcU]);
    vlSelfRef.__PVT__modified_words[0xdU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0x600U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xdU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x600U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xdU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xdU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xdU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xdU]);
    vlSelfRef.__PVT__modified_words[0xeU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0x600U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xeU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x600U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xeU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xeU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xeU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xeU]);
    vlSelfRef.__PVT__modified_words[0xfU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0x600U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xfU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x600U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xfU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xfU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xfU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xfU]);
    vlSelfRef.__Vcellinp__u_adder_tree__in[0U] = vlSelfRef.__PVT__modified_words
        [0U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[1U] = vlSelfRef.__PVT__modified_words
        [1U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[2U] = vlSelfRef.__PVT__modified_words
        [2U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[3U] = vlSelfRef.__PVT__modified_words
        [3U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[4U] = vlSelfRef.__PVT__modified_words
        [4U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[5U] = vlSelfRef.__PVT__modified_words
        [5U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[6U] = vlSelfRef.__PVT__modified_words
        [6U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[7U] = vlSelfRef.__PVT__modified_words
        [7U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[8U] = vlSelfRef.__PVT__modified_words
        [8U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[9U] = vlSelfRef.__PVT__modified_words
        [9U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xaU] = 
        vlSelfRef.__PVT__modified_words[0xaU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xbU] = 
        vlSelfRef.__PVT__modified_words[0xbU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xcU] = 
        vlSelfRef.__PVT__modified_words[0xcU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xdU] = 
        vlSelfRef.__PVT__modified_words[0xdU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xeU] = 
        vlSelfRef.__PVT__modified_words[0xeU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xfU] = 
        vlSelfRef.__PVT__modified_words[0xfU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][1U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[1U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][2U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[2U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][3U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[3U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][4U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[4U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][5U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[5U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][6U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[6U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][7U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[7U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][8U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[8U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][9U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[9U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xaU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xaU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xbU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xbU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xcU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xcU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xdU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xdU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xeU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xeU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xfU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xfU];
    vlSelfRef.__PVT__ad_out = vlSelfRef.__PVT__u_adder_tree__DOT__stage
        [4U][0U];
    vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_b 
        = ((0U == (0x1fU & ((IData)(vlSelfRef.__PVT__ad_out) 
                            >> 0xaU))) ? (0x3ffU & (IData)(vlSelfRef.__PVT__ad_out))
            : (0x400U | (0x3ffU & (IData)(vlSelfRef.__PVT__ad_out))));
}

VL_ATTR_COLD void Vtop_partial_dot___stl_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__7__KET____DOT__u_partial_dot__0(Vtop_partial_dot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_partial_dot___stl_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__7__KET____DOT__u_partial_dot__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_a 
        = ((0U == (0x1fU & ((IData)(vlSelfRef.accum_dout) 
                            >> 0xaU))) ? (0x3ffU & (IData)(vlSelfRef.accum_dout))
            : (0x400U | (0x3ffU & (IData)(vlSelfRef.accum_dout))));
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
    vlSelfRef.__PVT__class_words[0U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [7U][0U]);
    vlSelfRef.__PVT__class_words[1U] = (vlSymsp->TOP.top__DOT__class_words
                                        [7U][0U] >> 0x10U);
    vlSelfRef.__PVT__class_words[2U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [7U][1U]);
    vlSelfRef.__PVT__class_words[3U] = (vlSymsp->TOP.top__DOT__class_words
                                        [7U][1U] >> 0x10U);
    vlSelfRef.__PVT__class_words[4U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [7U][2U]);
    vlSelfRef.__PVT__class_words[5U] = (vlSymsp->TOP.top__DOT__class_words
                                        [7U][2U] >> 0x10U);
    vlSelfRef.__PVT__class_words[6U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [7U][3U]);
    vlSelfRef.__PVT__class_words[7U] = (vlSymsp->TOP.top__DOT__class_words
                                        [7U][3U] >> 0x10U);
    vlSelfRef.__PVT__class_words[8U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [7U][4U]);
    vlSelfRef.__PVT__class_words[9U] = (vlSymsp->TOP.top__DOT__class_words
                                        [7U][4U] >> 0x10U);
    vlSelfRef.__PVT__class_words[0xaU] = (0xffffU & 
                                          vlSymsp->TOP.top__DOT__class_words
                                          [7U][5U]);
    vlSelfRef.__PVT__class_words[0xbU] = (vlSymsp->TOP.top__DOT__class_words
                                          [7U][5U] 
                                          >> 0x10U);
    vlSelfRef.__PVT__class_words[0xcU] = (0xffffU & 
                                          vlSymsp->TOP.top__DOT__class_words
                                          [7U][6U]);
    vlSelfRef.__PVT__class_words[0xdU] = (vlSymsp->TOP.top__DOT__class_words
                                          [7U][6U] 
                                          >> 0x10U);
    vlSelfRef.__PVT__class_words[0xeU] = (0xffffU & 
                                          vlSymsp->TOP.top__DOT__class_words
                                          [7U][7U]);
    vlSelfRef.__PVT__class_words[0xfU] = (vlSymsp->TOP.top__DOT__class_words
                                          [7U][7U] 
                                          >> 0x10U);
    vlSelfRef.__PVT__modified_words[0U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x700U) 
                                                    + 
                                                    (0xffU 
                                                     & VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x700U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [0U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [0U]))
                                            : vlSelfRef.__PVT__class_words
                                           [0U]);
    vlSelfRef.__PVT__modified_words[1U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x700U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x700U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(1U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [1U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [1U]))
                                            : vlSelfRef.__PVT__class_words
                                           [1U]);
    vlSelfRef.__PVT__modified_words[2U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x700U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x700U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(2U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [2U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [2U]))
                                            : vlSelfRef.__PVT__class_words
                                           [2U]);
    vlSelfRef.__PVT__modified_words[3U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x700U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x700U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(3U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [3U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [3U]))
                                            : vlSelfRef.__PVT__class_words
                                           [3U]);
    vlSelfRef.__PVT__modified_words[4U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x700U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(4U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x700U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(4U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [4U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [4U]))
                                            : vlSelfRef.__PVT__class_words
                                           [4U]);
    vlSelfRef.__PVT__modified_words[5U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x700U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(5U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x700U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(5U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [5U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [5U]))
                                            : vlSelfRef.__PVT__class_words
                                           [5U]);
    vlSelfRef.__PVT__modified_words[6U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x700U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(6U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x700U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(6U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [6U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [6U]))
                                            : vlSelfRef.__PVT__class_words
                                           [6U]);
    vlSelfRef.__PVT__modified_words[7U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x700U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(7U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x700U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(7U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [7U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [7U]))
                                            : vlSelfRef.__PVT__class_words
                                           [7U]);
    vlSelfRef.__PVT__modified_words[8U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x700U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x700U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(8U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [8U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [8U]))
                                            : vlSelfRef.__PVT__class_words
                                           [8U]);
    vlSelfRef.__PVT__modified_words[9U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x700U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(9U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x700U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(9U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [9U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [9U]))
                                            : vlSelfRef.__PVT__class_words
                                           [9U]);
    vlSelfRef.__PVT__modified_words[0xaU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0x700U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xaU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x700U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xaU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xaU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xaU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xaU]);
    vlSelfRef.__PVT__modified_words[0xbU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0x700U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xbU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x700U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xbU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xbU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xbU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xbU]);
    vlSelfRef.__PVT__modified_words[0xcU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0x700U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xcU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x700U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xcU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xcU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xcU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xcU]);
    vlSelfRef.__PVT__modified_words[0xdU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0x700U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xdU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x700U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xdU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xdU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xdU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xdU]);
    vlSelfRef.__PVT__modified_words[0xeU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0x700U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xeU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x700U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xeU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xeU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xeU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xeU]);
    vlSelfRef.__PVT__modified_words[0xfU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0x700U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xfU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x700U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xfU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xfU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xfU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xfU]);
    vlSelfRef.__Vcellinp__u_adder_tree__in[0U] = vlSelfRef.__PVT__modified_words
        [0U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[1U] = vlSelfRef.__PVT__modified_words
        [1U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[2U] = vlSelfRef.__PVT__modified_words
        [2U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[3U] = vlSelfRef.__PVT__modified_words
        [3U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[4U] = vlSelfRef.__PVT__modified_words
        [4U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[5U] = vlSelfRef.__PVT__modified_words
        [5U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[6U] = vlSelfRef.__PVT__modified_words
        [6U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[7U] = vlSelfRef.__PVT__modified_words
        [7U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[8U] = vlSelfRef.__PVT__modified_words
        [8U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[9U] = vlSelfRef.__PVT__modified_words
        [9U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xaU] = 
        vlSelfRef.__PVT__modified_words[0xaU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xbU] = 
        vlSelfRef.__PVT__modified_words[0xbU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xcU] = 
        vlSelfRef.__PVT__modified_words[0xcU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xdU] = 
        vlSelfRef.__PVT__modified_words[0xdU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xeU] = 
        vlSelfRef.__PVT__modified_words[0xeU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xfU] = 
        vlSelfRef.__PVT__modified_words[0xfU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][1U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[1U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][2U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[2U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][3U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[3U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][4U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[4U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][5U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[5U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][6U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[6U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][7U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[7U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][8U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[8U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][9U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[9U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xaU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xaU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xbU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xbU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xcU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xcU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xdU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xdU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xeU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xeU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xfU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xfU];
    vlSelfRef.__PVT__ad_out = vlSelfRef.__PVT__u_adder_tree__DOT__stage
        [4U][0U];
    vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_b 
        = ((0U == (0x1fU & ((IData)(vlSelfRef.__PVT__ad_out) 
                            >> 0xaU))) ? (0x3ffU & (IData)(vlSelfRef.__PVT__ad_out))
            : (0x400U | (0x3ffU & (IData)(vlSelfRef.__PVT__ad_out))));
}

VL_ATTR_COLD void Vtop_partial_dot___stl_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot__0(Vtop_partial_dot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_partial_dot___stl_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_a 
        = ((0U == (0x1fU & ((IData)(vlSelfRef.accum_dout) 
                            >> 0xaU))) ? (0x3ffU & (IData)(vlSelfRef.accum_dout))
            : (0x400U | (0x3ffU & (IData)(vlSelfRef.accum_dout))));
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
    vlSelfRef.__PVT__class_words[0U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [8U][0U]);
    vlSelfRef.__PVT__class_words[1U] = (vlSymsp->TOP.top__DOT__class_words
                                        [8U][0U] >> 0x10U);
    vlSelfRef.__PVT__class_words[2U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [8U][1U]);
    vlSelfRef.__PVT__class_words[3U] = (vlSymsp->TOP.top__DOT__class_words
                                        [8U][1U] >> 0x10U);
    vlSelfRef.__PVT__class_words[4U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [8U][2U]);
    vlSelfRef.__PVT__class_words[5U] = (vlSymsp->TOP.top__DOT__class_words
                                        [8U][2U] >> 0x10U);
    vlSelfRef.__PVT__class_words[6U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [8U][3U]);
    vlSelfRef.__PVT__class_words[7U] = (vlSymsp->TOP.top__DOT__class_words
                                        [8U][3U] >> 0x10U);
    vlSelfRef.__PVT__class_words[8U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [8U][4U]);
    vlSelfRef.__PVT__class_words[9U] = (vlSymsp->TOP.top__DOT__class_words
                                        [8U][4U] >> 0x10U);
    vlSelfRef.__PVT__class_words[0xaU] = (0xffffU & 
                                          vlSymsp->TOP.top__DOT__class_words
                                          [8U][5U]);
    vlSelfRef.__PVT__class_words[0xbU] = (vlSymsp->TOP.top__DOT__class_words
                                          [8U][5U] 
                                          >> 0x10U);
    vlSelfRef.__PVT__class_words[0xcU] = (0xffffU & 
                                          vlSymsp->TOP.top__DOT__class_words
                                          [8U][6U]);
    vlSelfRef.__PVT__class_words[0xdU] = (vlSymsp->TOP.top__DOT__class_words
                                          [8U][6U] 
                                          >> 0x10U);
    vlSelfRef.__PVT__class_words[0xeU] = (0xffffU & 
                                          vlSymsp->TOP.top__DOT__class_words
                                          [8U][7U]);
    vlSelfRef.__PVT__class_words[0xfU] = (vlSymsp->TOP.top__DOT__class_words
                                          [8U][7U] 
                                          >> 0x10U);
    vlSelfRef.__PVT__modified_words[0U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x800U) 
                                                    + 
                                                    (0xffU 
                                                     & VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x800U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [0U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [0U]))
                                            : vlSelfRef.__PVT__class_words
                                           [0U]);
    vlSelfRef.__PVT__modified_words[1U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x800U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x800U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(1U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [1U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [1U]))
                                            : vlSelfRef.__PVT__class_words
                                           [1U]);
    vlSelfRef.__PVT__modified_words[2U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x800U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x800U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(2U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [2U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [2U]))
                                            : vlSelfRef.__PVT__class_words
                                           [2U]);
    vlSelfRef.__PVT__modified_words[3U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x800U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x800U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(3U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [3U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [3U]))
                                            : vlSelfRef.__PVT__class_words
                                           [3U]);
    vlSelfRef.__PVT__modified_words[4U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x800U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(4U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x800U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(4U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [4U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [4U]))
                                            : vlSelfRef.__PVT__class_words
                                           [4U]);
    vlSelfRef.__PVT__modified_words[5U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x800U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(5U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x800U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(5U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [5U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [5U]))
                                            : vlSelfRef.__PVT__class_words
                                           [5U]);
    vlSelfRef.__PVT__modified_words[6U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x800U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(6U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x800U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(6U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [6U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [6U]))
                                            : vlSelfRef.__PVT__class_words
                                           [6U]);
    vlSelfRef.__PVT__modified_words[7U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x800U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(7U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x800U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(7U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [7U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [7U]))
                                            : vlSelfRef.__PVT__class_words
                                           [7U]);
    vlSelfRef.__PVT__modified_words[8U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x800U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x800U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(8U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [8U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [8U]))
                                            : vlSelfRef.__PVT__class_words
                                           [8U]);
    vlSelfRef.__PVT__modified_words[9U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x800U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(9U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x800U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(9U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [9U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [9U]))
                                            : vlSelfRef.__PVT__class_words
                                           [9U]);
    vlSelfRef.__PVT__modified_words[0xaU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0x800U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xaU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x800U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xaU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xaU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xaU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xaU]);
    vlSelfRef.__PVT__modified_words[0xbU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0x800U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xbU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x800U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xbU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xbU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xbU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xbU]);
    vlSelfRef.__PVT__modified_words[0xcU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0x800U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xcU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x800U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xcU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xcU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xcU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xcU]);
    vlSelfRef.__PVT__modified_words[0xdU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0x800U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xdU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x800U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xdU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xdU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xdU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xdU]);
    vlSelfRef.__PVT__modified_words[0xeU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0x800U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xeU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x800U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xeU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xeU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xeU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xeU]);
    vlSelfRef.__PVT__modified_words[0xfU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0x800U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xfU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x800U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xfU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xfU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xfU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xfU]);
    vlSelfRef.__Vcellinp__u_adder_tree__in[0U] = vlSelfRef.__PVT__modified_words
        [0U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[1U] = vlSelfRef.__PVT__modified_words
        [1U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[2U] = vlSelfRef.__PVT__modified_words
        [2U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[3U] = vlSelfRef.__PVT__modified_words
        [3U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[4U] = vlSelfRef.__PVT__modified_words
        [4U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[5U] = vlSelfRef.__PVT__modified_words
        [5U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[6U] = vlSelfRef.__PVT__modified_words
        [6U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[7U] = vlSelfRef.__PVT__modified_words
        [7U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[8U] = vlSelfRef.__PVT__modified_words
        [8U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[9U] = vlSelfRef.__PVT__modified_words
        [9U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xaU] = 
        vlSelfRef.__PVT__modified_words[0xaU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xbU] = 
        vlSelfRef.__PVT__modified_words[0xbU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xcU] = 
        vlSelfRef.__PVT__modified_words[0xcU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xdU] = 
        vlSelfRef.__PVT__modified_words[0xdU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xeU] = 
        vlSelfRef.__PVT__modified_words[0xeU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xfU] = 
        vlSelfRef.__PVT__modified_words[0xfU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][1U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[1U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][2U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[2U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][3U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[3U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][4U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[4U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][5U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[5U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][6U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[6U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][7U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[7U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][8U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[8U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][9U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[9U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xaU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xaU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xbU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xbU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xcU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xcU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xdU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xdU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xeU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xeU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xfU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xfU];
    vlSelfRef.__PVT__ad_out = vlSelfRef.__PVT__u_adder_tree__DOT__stage
        [4U][0U];
    vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_b 
        = ((0U == (0x1fU & ((IData)(vlSelfRef.__PVT__ad_out) 
                            >> 0xaU))) ? (0x3ffU & (IData)(vlSelfRef.__PVT__ad_out))
            : (0x400U | (0x3ffU & (IData)(vlSelfRef.__PVT__ad_out))));
}

VL_ATTR_COLD void Vtop_partial_dot___stl_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot__0(Vtop_partial_dot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_partial_dot___stl_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_a 
        = ((0U == (0x1fU & ((IData)(vlSelfRef.accum_dout) 
                            >> 0xaU))) ? (0x3ffU & (IData)(vlSelfRef.accum_dout))
            : (0x400U | (0x3ffU & (IData)(vlSelfRef.accum_dout))));
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
    vlSelfRef.__PVT__class_words[0U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [9U][0U]);
    vlSelfRef.__PVT__class_words[1U] = (vlSymsp->TOP.top__DOT__class_words
                                        [9U][0U] >> 0x10U);
    vlSelfRef.__PVT__class_words[2U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [9U][1U]);
    vlSelfRef.__PVT__class_words[3U] = (vlSymsp->TOP.top__DOT__class_words
                                        [9U][1U] >> 0x10U);
    vlSelfRef.__PVT__class_words[4U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [9U][2U]);
    vlSelfRef.__PVT__class_words[5U] = (vlSymsp->TOP.top__DOT__class_words
                                        [9U][2U] >> 0x10U);
    vlSelfRef.__PVT__class_words[6U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [9U][3U]);
    vlSelfRef.__PVT__class_words[7U] = (vlSymsp->TOP.top__DOT__class_words
                                        [9U][3U] >> 0x10U);
    vlSelfRef.__PVT__class_words[8U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [9U][4U]);
    vlSelfRef.__PVT__class_words[9U] = (vlSymsp->TOP.top__DOT__class_words
                                        [9U][4U] >> 0x10U);
    vlSelfRef.__PVT__class_words[0xaU] = (0xffffU & 
                                          vlSymsp->TOP.top__DOT__class_words
                                          [9U][5U]);
    vlSelfRef.__PVT__class_words[0xbU] = (vlSymsp->TOP.top__DOT__class_words
                                          [9U][5U] 
                                          >> 0x10U);
    vlSelfRef.__PVT__class_words[0xcU] = (0xffffU & 
                                          vlSymsp->TOP.top__DOT__class_words
                                          [9U][6U]);
    vlSelfRef.__PVT__class_words[0xdU] = (vlSymsp->TOP.top__DOT__class_words
                                          [9U][6U] 
                                          >> 0x10U);
    vlSelfRef.__PVT__class_words[0xeU] = (0xffffU & 
                                          vlSymsp->TOP.top__DOT__class_words
                                          [9U][7U]);
    vlSelfRef.__PVT__class_words[0xfU] = (vlSymsp->TOP.top__DOT__class_words
                                          [9U][7U] 
                                          >> 0x10U);
    vlSelfRef.__PVT__modified_words[0U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x900U) 
                                                    + 
                                                    (0xffU 
                                                     & VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x900U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [0U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [0U]))
                                            : vlSelfRef.__PVT__class_words
                                           [0U]);
    vlSelfRef.__PVT__modified_words[1U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x900U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x900U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(1U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [1U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [1U]))
                                            : vlSelfRef.__PVT__class_words
                                           [1U]);
    vlSelfRef.__PVT__modified_words[2U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x900U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x900U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(2U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [2U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [2U]))
                                            : vlSelfRef.__PVT__class_words
                                           [2U]);
    vlSelfRef.__PVT__modified_words[3U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x900U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x900U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(3U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [3U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [3U]))
                                            : vlSelfRef.__PVT__class_words
                                           [3U]);
    vlSelfRef.__PVT__modified_words[4U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x900U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(4U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x900U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(4U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [4U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [4U]))
                                            : vlSelfRef.__PVT__class_words
                                           [4U]);
    vlSelfRef.__PVT__modified_words[5U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x900U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(5U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x900U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(5U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [5U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [5U]))
                                            : vlSelfRef.__PVT__class_words
                                           [5U]);
    vlSelfRef.__PVT__modified_words[6U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x900U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(6U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x900U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(6U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [6U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [6U]))
                                            : vlSelfRef.__PVT__class_words
                                           [6U]);
    vlSelfRef.__PVT__modified_words[7U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x900U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(7U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x900U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(7U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [7U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [7U]))
                                            : vlSelfRef.__PVT__class_words
                                           [7U]);
    vlSelfRef.__PVT__modified_words[8U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x900U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x900U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(8U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [8U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [8U]))
                                            : vlSelfRef.__PVT__class_words
                                           [8U]);
    vlSelfRef.__PVT__modified_words[9U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0x900U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(9U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x900U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(9U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [9U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [9U]))
                                            : vlSelfRef.__PVT__class_words
                                           [9U]);
    vlSelfRef.__PVT__modified_words[0xaU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0x900U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xaU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x900U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xaU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xaU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xaU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xaU]);
    vlSelfRef.__PVT__modified_words[0xbU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0x900U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xbU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x900U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xbU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xbU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xbU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xbU]);
    vlSelfRef.__PVT__modified_words[0xcU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0x900U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xcU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x900U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xcU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xcU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xcU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xcU]);
    vlSelfRef.__PVT__modified_words[0xdU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0x900U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xdU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x900U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xdU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xdU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xdU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xdU]);
    vlSelfRef.__PVT__modified_words[0xeU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0x900U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xeU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x900U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xeU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xeU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xeU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xeU]);
    vlSelfRef.__PVT__modified_words[0xfU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0x900U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xfU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x900U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xfU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xfU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xfU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xfU]);
    vlSelfRef.__Vcellinp__u_adder_tree__in[0U] = vlSelfRef.__PVT__modified_words
        [0U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[1U] = vlSelfRef.__PVT__modified_words
        [1U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[2U] = vlSelfRef.__PVT__modified_words
        [2U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[3U] = vlSelfRef.__PVT__modified_words
        [3U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[4U] = vlSelfRef.__PVT__modified_words
        [4U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[5U] = vlSelfRef.__PVT__modified_words
        [5U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[6U] = vlSelfRef.__PVT__modified_words
        [6U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[7U] = vlSelfRef.__PVT__modified_words
        [7U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[8U] = vlSelfRef.__PVT__modified_words
        [8U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[9U] = vlSelfRef.__PVT__modified_words
        [9U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xaU] = 
        vlSelfRef.__PVT__modified_words[0xaU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xbU] = 
        vlSelfRef.__PVT__modified_words[0xbU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xcU] = 
        vlSelfRef.__PVT__modified_words[0xcU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xdU] = 
        vlSelfRef.__PVT__modified_words[0xdU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xeU] = 
        vlSelfRef.__PVT__modified_words[0xeU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xfU] = 
        vlSelfRef.__PVT__modified_words[0xfU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][1U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[1U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][2U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[2U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][3U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[3U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][4U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[4U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][5U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[5U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][6U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[6U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][7U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[7U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][8U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[8U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][9U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[9U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xaU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xaU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xbU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xbU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xcU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xcU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xdU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xdU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xeU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xeU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xfU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xfU];
    vlSelfRef.__PVT__ad_out = vlSelfRef.__PVT__u_adder_tree__DOT__stage
        [4U][0U];
    vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_b 
        = ((0U == (0x1fU & ((IData)(vlSelfRef.__PVT__ad_out) 
                            >> 0xaU))) ? (0x3ffU & (IData)(vlSelfRef.__PVT__ad_out))
            : (0x400U | (0x3ffU & (IData)(vlSelfRef.__PVT__ad_out))));
}

VL_ATTR_COLD void Vtop_partial_dot___stl_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot__0(Vtop_partial_dot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_partial_dot___stl_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_a 
        = ((0U == (0x1fU & ((IData)(vlSelfRef.accum_dout) 
                            >> 0xaU))) ? (0x3ffU & (IData)(vlSelfRef.accum_dout))
            : (0x400U | (0x3ffU & (IData)(vlSelfRef.accum_dout))));
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
    vlSelfRef.__PVT__class_words[0U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [0xaU][0U]);
    vlSelfRef.__PVT__class_words[1U] = (vlSymsp->TOP.top__DOT__class_words
                                        [0xaU][0U] 
                                        >> 0x10U);
    vlSelfRef.__PVT__class_words[2U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [0xaU][1U]);
    vlSelfRef.__PVT__class_words[3U] = (vlSymsp->TOP.top__DOT__class_words
                                        [0xaU][1U] 
                                        >> 0x10U);
    vlSelfRef.__PVT__class_words[4U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [0xaU][2U]);
    vlSelfRef.__PVT__class_words[5U] = (vlSymsp->TOP.top__DOT__class_words
                                        [0xaU][2U] 
                                        >> 0x10U);
    vlSelfRef.__PVT__class_words[6U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [0xaU][3U]);
    vlSelfRef.__PVT__class_words[7U] = (vlSymsp->TOP.top__DOT__class_words
                                        [0xaU][3U] 
                                        >> 0x10U);
    vlSelfRef.__PVT__class_words[8U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [0xaU][4U]);
    vlSelfRef.__PVT__class_words[9U] = (vlSymsp->TOP.top__DOT__class_words
                                        [0xaU][4U] 
                                        >> 0x10U);
    vlSelfRef.__PVT__class_words[0xaU] = (0xffffU & 
                                          vlSymsp->TOP.top__DOT__class_words
                                          [0xaU][5U]);
    vlSelfRef.__PVT__class_words[0xbU] = (vlSymsp->TOP.top__DOT__class_words
                                          [0xaU][5U] 
                                          >> 0x10U);
    vlSelfRef.__PVT__class_words[0xcU] = (0xffffU & 
                                          vlSymsp->TOP.top__DOT__class_words
                                          [0xaU][6U]);
    vlSelfRef.__PVT__class_words[0xdU] = (vlSymsp->TOP.top__DOT__class_words
                                          [0xaU][6U] 
                                          >> 0x10U);
    vlSelfRef.__PVT__class_words[0xeU] = (0xffffU & 
                                          vlSymsp->TOP.top__DOT__class_words
                                          [0xaU][7U]);
    vlSelfRef.__PVT__class_words[0xfU] = (vlSymsp->TOP.top__DOT__class_words
                                          [0xaU][7U] 
                                          >> 0x10U);
    vlSelfRef.__PVT__modified_words[0U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0xa00U) 
                                                    + 
                                                    (0xffU 
                                                     & VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0xa00U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [0U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [0U]))
                                            : vlSelfRef.__PVT__class_words
                                           [0U]);
    vlSelfRef.__PVT__modified_words[1U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0xa00U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0xa00U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(1U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [1U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [1U]))
                                            : vlSelfRef.__PVT__class_words
                                           [1U]);
    vlSelfRef.__PVT__modified_words[2U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0xa00U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0xa00U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(2U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [2U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [2U]))
                                            : vlSelfRef.__PVT__class_words
                                           [2U]);
    vlSelfRef.__PVT__modified_words[3U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0xa00U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0xa00U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(3U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [3U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [3U]))
                                            : vlSelfRef.__PVT__class_words
                                           [3U]);
    vlSelfRef.__PVT__modified_words[4U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0xa00U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(4U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0xa00U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(4U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [4U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [4U]))
                                            : vlSelfRef.__PVT__class_words
                                           [4U]);
    vlSelfRef.__PVT__modified_words[5U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0xa00U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(5U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0xa00U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(5U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [5U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [5U]))
                                            : vlSelfRef.__PVT__class_words
                                           [5U]);
    vlSelfRef.__PVT__modified_words[6U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0xa00U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(6U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0xa00U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(6U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [6U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [6U]))
                                            : vlSelfRef.__PVT__class_words
                                           [6U]);
    vlSelfRef.__PVT__modified_words[7U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0xa00U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(7U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0xa00U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(7U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [7U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [7U]))
                                            : vlSelfRef.__PVT__class_words
                                           [7U]);
    vlSelfRef.__PVT__modified_words[8U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0xa00U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0xa00U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(8U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [8U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [8U]))
                                            : vlSelfRef.__PVT__class_words
                                           [8U]);
    vlSelfRef.__PVT__modified_words[9U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0xa00U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(9U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0xa00U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(9U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [9U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [9U]))
                                            : vlSelfRef.__PVT__class_words
                                           [9U]);
    vlSelfRef.__PVT__modified_words[0xaU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0xa00U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xaU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0xa00U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xaU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xaU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xaU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xaU]);
    vlSelfRef.__PVT__modified_words[0xbU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0xa00U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xbU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0xa00U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xbU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xbU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xbU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xbU]);
    vlSelfRef.__PVT__modified_words[0xcU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0xa00U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xcU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0xa00U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xcU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xcU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xcU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xcU]);
    vlSelfRef.__PVT__modified_words[0xdU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0xa00U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xdU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0xa00U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xdU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xdU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xdU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xdU]);
    vlSelfRef.__PVT__modified_words[0xeU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0xa00U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xeU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0xa00U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xeU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xeU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xeU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xeU]);
    vlSelfRef.__PVT__modified_words[0xfU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0xa00U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xfU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0xa00U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xfU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xfU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xfU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xfU]);
    vlSelfRef.__Vcellinp__u_adder_tree__in[0U] = vlSelfRef.__PVT__modified_words
        [0U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[1U] = vlSelfRef.__PVT__modified_words
        [1U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[2U] = vlSelfRef.__PVT__modified_words
        [2U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[3U] = vlSelfRef.__PVT__modified_words
        [3U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[4U] = vlSelfRef.__PVT__modified_words
        [4U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[5U] = vlSelfRef.__PVT__modified_words
        [5U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[6U] = vlSelfRef.__PVT__modified_words
        [6U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[7U] = vlSelfRef.__PVT__modified_words
        [7U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[8U] = vlSelfRef.__PVT__modified_words
        [8U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[9U] = vlSelfRef.__PVT__modified_words
        [9U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xaU] = 
        vlSelfRef.__PVT__modified_words[0xaU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xbU] = 
        vlSelfRef.__PVT__modified_words[0xbU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xcU] = 
        vlSelfRef.__PVT__modified_words[0xcU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xdU] = 
        vlSelfRef.__PVT__modified_words[0xdU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xeU] = 
        vlSelfRef.__PVT__modified_words[0xeU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xfU] = 
        vlSelfRef.__PVT__modified_words[0xfU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][1U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[1U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][2U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[2U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][3U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[3U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][4U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[4U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][5U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[5U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][6U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[6U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][7U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[7U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][8U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[8U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][9U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[9U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xaU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xaU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xbU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xbU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xcU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xcU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xdU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xdU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xeU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xeU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xfU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xfU];
    vlSelfRef.__PVT__ad_out = vlSelfRef.__PVT__u_adder_tree__DOT__stage
        [4U][0U];
    vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_b 
        = ((0U == (0x1fU & ((IData)(vlSelfRef.__PVT__ad_out) 
                            >> 0xaU))) ? (0x3ffU & (IData)(vlSelfRef.__PVT__ad_out))
            : (0x400U | (0x3ffU & (IData)(vlSelfRef.__PVT__ad_out))));
}

VL_ATTR_COLD void Vtop_partial_dot___stl_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__11__KET____DOT__u_partial_dot__0(Vtop_partial_dot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_partial_dot___stl_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__11__KET____DOT__u_partial_dot__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_a 
        = ((0U == (0x1fU & ((IData)(vlSelfRef.accum_dout) 
                            >> 0xaU))) ? (0x3ffU & (IData)(vlSelfRef.accum_dout))
            : (0x400U | (0x3ffU & (IData)(vlSelfRef.accum_dout))));
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
    vlSelfRef.__PVT__class_words[0U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [0xbU][0U]);
    vlSelfRef.__PVT__class_words[1U] = (vlSymsp->TOP.top__DOT__class_words
                                        [0xbU][0U] 
                                        >> 0x10U);
    vlSelfRef.__PVT__class_words[2U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [0xbU][1U]);
    vlSelfRef.__PVT__class_words[3U] = (vlSymsp->TOP.top__DOT__class_words
                                        [0xbU][1U] 
                                        >> 0x10U);
    vlSelfRef.__PVT__class_words[4U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [0xbU][2U]);
    vlSelfRef.__PVT__class_words[5U] = (vlSymsp->TOP.top__DOT__class_words
                                        [0xbU][2U] 
                                        >> 0x10U);
    vlSelfRef.__PVT__class_words[6U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [0xbU][3U]);
    vlSelfRef.__PVT__class_words[7U] = (vlSymsp->TOP.top__DOT__class_words
                                        [0xbU][3U] 
                                        >> 0x10U);
    vlSelfRef.__PVT__class_words[8U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [0xbU][4U]);
    vlSelfRef.__PVT__class_words[9U] = (vlSymsp->TOP.top__DOT__class_words
                                        [0xbU][4U] 
                                        >> 0x10U);
    vlSelfRef.__PVT__class_words[0xaU] = (0xffffU & 
                                          vlSymsp->TOP.top__DOT__class_words
                                          [0xbU][5U]);
    vlSelfRef.__PVT__class_words[0xbU] = (vlSymsp->TOP.top__DOT__class_words
                                          [0xbU][5U] 
                                          >> 0x10U);
    vlSelfRef.__PVT__class_words[0xcU] = (0xffffU & 
                                          vlSymsp->TOP.top__DOT__class_words
                                          [0xbU][6U]);
    vlSelfRef.__PVT__class_words[0xdU] = (vlSymsp->TOP.top__DOT__class_words
                                          [0xbU][6U] 
                                          >> 0x10U);
    vlSelfRef.__PVT__class_words[0xeU] = (0xffffU & 
                                          vlSymsp->TOP.top__DOT__class_words
                                          [0xbU][7U]);
    vlSelfRef.__PVT__class_words[0xfU] = (vlSymsp->TOP.top__DOT__class_words
                                          [0xbU][7U] 
                                          >> 0x10U);
    vlSelfRef.__PVT__modified_words[0U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0xb00U) 
                                                    + 
                                                    (0xffU 
                                                     & VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0xb00U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [0U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [0U]))
                                            : vlSelfRef.__PVT__class_words
                                           [0U]);
    vlSelfRef.__PVT__modified_words[1U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0xb00U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0xb00U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(1U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [1U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [1U]))
                                            : vlSelfRef.__PVT__class_words
                                           [1U]);
    vlSelfRef.__PVT__modified_words[2U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0xb00U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0xb00U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(2U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [2U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [2U]))
                                            : vlSelfRef.__PVT__class_words
                                           [2U]);
    vlSelfRef.__PVT__modified_words[3U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0xb00U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0xb00U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(3U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [3U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [3U]))
                                            : vlSelfRef.__PVT__class_words
                                           [3U]);
    vlSelfRef.__PVT__modified_words[4U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0xb00U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(4U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0xb00U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(4U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [4U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [4U]))
                                            : vlSelfRef.__PVT__class_words
                                           [4U]);
    vlSelfRef.__PVT__modified_words[5U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0xb00U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(5U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0xb00U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(5U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [5U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [5U]))
                                            : vlSelfRef.__PVT__class_words
                                           [5U]);
    vlSelfRef.__PVT__modified_words[6U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0xb00U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(6U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0xb00U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(6U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [6U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [6U]))
                                            : vlSelfRef.__PVT__class_words
                                           [6U]);
    vlSelfRef.__PVT__modified_words[7U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0xb00U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(7U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0xb00U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(7U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [7U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [7U]))
                                            : vlSelfRef.__PVT__class_words
                                           [7U]);
    vlSelfRef.__PVT__modified_words[8U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0xb00U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0xb00U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(8U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [8U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [8U]))
                                            : vlSelfRef.__PVT__class_words
                                           [8U]);
    vlSelfRef.__PVT__modified_words[9U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0xb00U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(9U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0xb00U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(9U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [9U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [9U]))
                                            : vlSelfRef.__PVT__class_words
                                           [9U]);
    vlSelfRef.__PVT__modified_words[0xaU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0xb00U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xaU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0xb00U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xaU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xaU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xaU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xaU]);
    vlSelfRef.__PVT__modified_words[0xbU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0xb00U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xbU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0xb00U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xbU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xbU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xbU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xbU]);
    vlSelfRef.__PVT__modified_words[0xcU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0xb00U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xcU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0xb00U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xcU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xcU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xcU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xcU]);
    vlSelfRef.__PVT__modified_words[0xdU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0xb00U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xdU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0xb00U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xdU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xdU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xdU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xdU]);
    vlSelfRef.__PVT__modified_words[0xeU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0xb00U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xeU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0xb00U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xeU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xeU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xeU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xeU]);
    vlSelfRef.__PVT__modified_words[0xfU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0xb00U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xfU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0xb00U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xfU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xfU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xfU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xfU]);
    vlSelfRef.__Vcellinp__u_adder_tree__in[0U] = vlSelfRef.__PVT__modified_words
        [0U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[1U] = vlSelfRef.__PVT__modified_words
        [1U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[2U] = vlSelfRef.__PVT__modified_words
        [2U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[3U] = vlSelfRef.__PVT__modified_words
        [3U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[4U] = vlSelfRef.__PVT__modified_words
        [4U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[5U] = vlSelfRef.__PVT__modified_words
        [5U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[6U] = vlSelfRef.__PVT__modified_words
        [6U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[7U] = vlSelfRef.__PVT__modified_words
        [7U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[8U] = vlSelfRef.__PVT__modified_words
        [8U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[9U] = vlSelfRef.__PVT__modified_words
        [9U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xaU] = 
        vlSelfRef.__PVT__modified_words[0xaU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xbU] = 
        vlSelfRef.__PVT__modified_words[0xbU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xcU] = 
        vlSelfRef.__PVT__modified_words[0xcU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xdU] = 
        vlSelfRef.__PVT__modified_words[0xdU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xeU] = 
        vlSelfRef.__PVT__modified_words[0xeU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xfU] = 
        vlSelfRef.__PVT__modified_words[0xfU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][1U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[1U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][2U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[2U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][3U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[3U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][4U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[4U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][5U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[5U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][6U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[6U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][7U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[7U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][8U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[8U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][9U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[9U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xaU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xaU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xbU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xbU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xcU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xcU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xdU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xdU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xeU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xeU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xfU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xfU];
    vlSelfRef.__PVT__ad_out = vlSelfRef.__PVT__u_adder_tree__DOT__stage
        [4U][0U];
    vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_b 
        = ((0U == (0x1fU & ((IData)(vlSelfRef.__PVT__ad_out) 
                            >> 0xaU))) ? (0x3ffU & (IData)(vlSelfRef.__PVT__ad_out))
            : (0x400U | (0x3ffU & (IData)(vlSelfRef.__PVT__ad_out))));
}

VL_ATTR_COLD void Vtop_partial_dot___stl_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__12__KET____DOT__u_partial_dot__0(Vtop_partial_dot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_partial_dot___stl_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__12__KET____DOT__u_partial_dot__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_a 
        = ((0U == (0x1fU & ((IData)(vlSelfRef.accum_dout) 
                            >> 0xaU))) ? (0x3ffU & (IData)(vlSelfRef.accum_dout))
            : (0x400U | (0x3ffU & (IData)(vlSelfRef.accum_dout))));
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
    vlSelfRef.__PVT__class_words[0U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [0xcU][0U]);
    vlSelfRef.__PVT__class_words[1U] = (vlSymsp->TOP.top__DOT__class_words
                                        [0xcU][0U] 
                                        >> 0x10U);
    vlSelfRef.__PVT__class_words[2U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [0xcU][1U]);
    vlSelfRef.__PVT__class_words[3U] = (vlSymsp->TOP.top__DOT__class_words
                                        [0xcU][1U] 
                                        >> 0x10U);
    vlSelfRef.__PVT__class_words[4U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [0xcU][2U]);
    vlSelfRef.__PVT__class_words[5U] = (vlSymsp->TOP.top__DOT__class_words
                                        [0xcU][2U] 
                                        >> 0x10U);
    vlSelfRef.__PVT__class_words[6U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [0xcU][3U]);
    vlSelfRef.__PVT__class_words[7U] = (vlSymsp->TOP.top__DOT__class_words
                                        [0xcU][3U] 
                                        >> 0x10U);
    vlSelfRef.__PVT__class_words[8U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [0xcU][4U]);
    vlSelfRef.__PVT__class_words[9U] = (vlSymsp->TOP.top__DOT__class_words
                                        [0xcU][4U] 
                                        >> 0x10U);
    vlSelfRef.__PVT__class_words[0xaU] = (0xffffU & 
                                          vlSymsp->TOP.top__DOT__class_words
                                          [0xcU][5U]);
    vlSelfRef.__PVT__class_words[0xbU] = (vlSymsp->TOP.top__DOT__class_words
                                          [0xcU][5U] 
                                          >> 0x10U);
    vlSelfRef.__PVT__class_words[0xcU] = (0xffffU & 
                                          vlSymsp->TOP.top__DOT__class_words
                                          [0xcU][6U]);
    vlSelfRef.__PVT__class_words[0xdU] = (vlSymsp->TOP.top__DOT__class_words
                                          [0xcU][6U] 
                                          >> 0x10U);
    vlSelfRef.__PVT__class_words[0xeU] = (0xffffU & 
                                          vlSymsp->TOP.top__DOT__class_words
                                          [0xcU][7U]);
    vlSelfRef.__PVT__class_words[0xfU] = (vlSymsp->TOP.top__DOT__class_words
                                          [0xcU][7U] 
                                          >> 0x10U);
    vlSelfRef.__PVT__modified_words[0U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0xc00U) 
                                                    + 
                                                    (0xffU 
                                                     & VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0xc00U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [0U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [0U]))
                                            : vlSelfRef.__PVT__class_words
                                           [0U]);
    vlSelfRef.__PVT__modified_words[1U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0xc00U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0xc00U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(1U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [1U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [1U]))
                                            : vlSelfRef.__PVT__class_words
                                           [1U]);
    vlSelfRef.__PVT__modified_words[2U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0xc00U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0xc00U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(2U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [2U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [2U]))
                                            : vlSelfRef.__PVT__class_words
                                           [2U]);
    vlSelfRef.__PVT__modified_words[3U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0xc00U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0xc00U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(3U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [3U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [3U]))
                                            : vlSelfRef.__PVT__class_words
                                           [3U]);
    vlSelfRef.__PVT__modified_words[4U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0xc00U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(4U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0xc00U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(4U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [4U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [4U]))
                                            : vlSelfRef.__PVT__class_words
                                           [4U]);
    vlSelfRef.__PVT__modified_words[5U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0xc00U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(5U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0xc00U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(5U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [5U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [5U]))
                                            : vlSelfRef.__PVT__class_words
                                           [5U]);
    vlSelfRef.__PVT__modified_words[6U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0xc00U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(6U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0xc00U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(6U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [6U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [6U]))
                                            : vlSelfRef.__PVT__class_words
                                           [6U]);
    vlSelfRef.__PVT__modified_words[7U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0xc00U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(7U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0xc00U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(7U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [7U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [7U]))
                                            : vlSelfRef.__PVT__class_words
                                           [7U]);
    vlSelfRef.__PVT__modified_words[8U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0xc00U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0xc00U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(8U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [8U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [8U]))
                                            : vlSelfRef.__PVT__class_words
                                           [8U]);
    vlSelfRef.__PVT__modified_words[9U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0xc00U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(9U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0xc00U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(9U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [9U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [9U]))
                                            : vlSelfRef.__PVT__class_words
                                           [9U]);
    vlSelfRef.__PVT__modified_words[0xaU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0xc00U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xaU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0xc00U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xaU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xaU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xaU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xaU]);
    vlSelfRef.__PVT__modified_words[0xbU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0xc00U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xbU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0xc00U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xbU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xbU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xbU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xbU]);
    vlSelfRef.__PVT__modified_words[0xcU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0xc00U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xcU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0xc00U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xcU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xcU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xcU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xcU]);
    vlSelfRef.__PVT__modified_words[0xdU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0xc00U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xdU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0xc00U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xdU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xdU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xdU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xdU]);
    vlSelfRef.__PVT__modified_words[0xeU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0xc00U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xeU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0xc00U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xeU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xeU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xeU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xeU]);
    vlSelfRef.__PVT__modified_words[0xfU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0xc00U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xfU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0xc00U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xfU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xfU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xfU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xfU]);
    vlSelfRef.__Vcellinp__u_adder_tree__in[0U] = vlSelfRef.__PVT__modified_words
        [0U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[1U] = vlSelfRef.__PVT__modified_words
        [1U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[2U] = vlSelfRef.__PVT__modified_words
        [2U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[3U] = vlSelfRef.__PVT__modified_words
        [3U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[4U] = vlSelfRef.__PVT__modified_words
        [4U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[5U] = vlSelfRef.__PVT__modified_words
        [5U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[6U] = vlSelfRef.__PVT__modified_words
        [6U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[7U] = vlSelfRef.__PVT__modified_words
        [7U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[8U] = vlSelfRef.__PVT__modified_words
        [8U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[9U] = vlSelfRef.__PVT__modified_words
        [9U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xaU] = 
        vlSelfRef.__PVT__modified_words[0xaU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xbU] = 
        vlSelfRef.__PVT__modified_words[0xbU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xcU] = 
        vlSelfRef.__PVT__modified_words[0xcU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xdU] = 
        vlSelfRef.__PVT__modified_words[0xdU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xeU] = 
        vlSelfRef.__PVT__modified_words[0xeU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xfU] = 
        vlSelfRef.__PVT__modified_words[0xfU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][1U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[1U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][2U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[2U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][3U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[3U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][4U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[4U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][5U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[5U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][6U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[6U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][7U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[7U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][8U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[8U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][9U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[9U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xaU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xaU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xbU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xbU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xcU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xcU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xdU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xdU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xeU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xeU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xfU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xfU];
    vlSelfRef.__PVT__ad_out = vlSelfRef.__PVT__u_adder_tree__DOT__stage
        [4U][0U];
    vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_b 
        = ((0U == (0x1fU & ((IData)(vlSelfRef.__PVT__ad_out) 
                            >> 0xaU))) ? (0x3ffU & (IData)(vlSelfRef.__PVT__ad_out))
            : (0x400U | (0x3ffU & (IData)(vlSelfRef.__PVT__ad_out))));
}

VL_ATTR_COLD void Vtop_partial_dot___stl_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__13__KET____DOT__u_partial_dot__0(Vtop_partial_dot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_partial_dot___stl_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__13__KET____DOT__u_partial_dot__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_a 
        = ((0U == (0x1fU & ((IData)(vlSelfRef.accum_dout) 
                            >> 0xaU))) ? (0x3ffU & (IData)(vlSelfRef.accum_dout))
            : (0x400U | (0x3ffU & (IData)(vlSelfRef.accum_dout))));
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
    vlSelfRef.__PVT__class_words[0U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [0xdU][0U]);
    vlSelfRef.__PVT__class_words[1U] = (vlSymsp->TOP.top__DOT__class_words
                                        [0xdU][0U] 
                                        >> 0x10U);
    vlSelfRef.__PVT__class_words[2U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [0xdU][1U]);
    vlSelfRef.__PVT__class_words[3U] = (vlSymsp->TOP.top__DOT__class_words
                                        [0xdU][1U] 
                                        >> 0x10U);
    vlSelfRef.__PVT__class_words[4U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [0xdU][2U]);
    vlSelfRef.__PVT__class_words[5U] = (vlSymsp->TOP.top__DOT__class_words
                                        [0xdU][2U] 
                                        >> 0x10U);
    vlSelfRef.__PVT__class_words[6U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [0xdU][3U]);
    vlSelfRef.__PVT__class_words[7U] = (vlSymsp->TOP.top__DOT__class_words
                                        [0xdU][3U] 
                                        >> 0x10U);
    vlSelfRef.__PVT__class_words[8U] = (0xffffU & vlSymsp->TOP.top__DOT__class_words
                                        [0xdU][4U]);
    vlSelfRef.__PVT__class_words[9U] = (vlSymsp->TOP.top__DOT__class_words
                                        [0xdU][4U] 
                                        >> 0x10U);
    vlSelfRef.__PVT__class_words[0xaU] = (0xffffU & 
                                          vlSymsp->TOP.top__DOT__class_words
                                          [0xdU][5U]);
    vlSelfRef.__PVT__class_words[0xbU] = (vlSymsp->TOP.top__DOT__class_words
                                          [0xdU][5U] 
                                          >> 0x10U);
    vlSelfRef.__PVT__class_words[0xcU] = (0xffffU & 
                                          vlSymsp->TOP.top__DOT__class_words
                                          [0xdU][6U]);
    vlSelfRef.__PVT__class_words[0xdU] = (vlSymsp->TOP.top__DOT__class_words
                                          [0xdU][6U] 
                                          >> 0x10U);
    vlSelfRef.__PVT__class_words[0xeU] = (0xffffU & 
                                          vlSymsp->TOP.top__DOT__class_words
                                          [0xdU][7U]);
    vlSelfRef.__PVT__class_words[0xfU] = (vlSymsp->TOP.top__DOT__class_words
                                          [0xdU][7U] 
                                          >> 0x10U);
    vlSelfRef.__PVT__modified_words[0U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0xd00U) 
                                                    + 
                                                    (0xffU 
                                                     & VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0xd00U) 
                                                      + 
                                                      (0xffU 
                                                       & VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [0U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [0U]))
                                            : vlSelfRef.__PVT__class_words
                                           [0U]);
    vlSelfRef.__PVT__modified_words[1U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0xd00U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0xd00U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(1U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [1U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [1U]))
                                            : vlSelfRef.__PVT__class_words
                                           [1U]);
    vlSelfRef.__PVT__modified_words[2U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0xd00U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0xd00U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(2U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [2U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [2U]))
                                            : vlSelfRef.__PVT__class_words
                                           [2U]);
    vlSelfRef.__PVT__modified_words[3U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0xd00U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0xd00U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(3U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [3U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [3U]))
                                            : vlSelfRef.__PVT__class_words
                                           [3U]);
    vlSelfRef.__PVT__modified_words[4U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0xd00U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(4U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0xd00U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(4U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [4U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [4U]))
                                            : vlSelfRef.__PVT__class_words
                                           [4U]);
    vlSelfRef.__PVT__modified_words[5U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0xd00U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(5U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0xd00U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(5U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [5U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [5U]))
                                            : vlSelfRef.__PVT__class_words
                                           [5U]);
    vlSelfRef.__PVT__modified_words[6U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0xd00U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(6U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0xd00U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(6U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [6U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [6U]))
                                            : vlSelfRef.__PVT__class_words
                                           [6U]);
    vlSelfRef.__PVT__modified_words[7U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0xd00U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(7U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0xd00U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(7U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [7U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [7U]))
                                            : vlSelfRef.__PVT__class_words
                                           [7U]);
    vlSelfRef.__PVT__modified_words[8U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0xd00U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0xd00U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(8U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [8U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [8U]))
                                            : vlSelfRef.__PVT__class_words
                                           [8U]);
    vlSelfRef.__PVT__modified_words[9U] = ((1U & (vlSymsp->TOP.in_hv[
                                                  (((IData)(0xd00U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(9U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0xd00U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(9U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                            ? ((0x8000U 
                                                & ((~ 
                                                    (vlSelfRef.__PVT__class_words
                                                     [9U] 
                                                     >> 0xfU)) 
                                                   << 0xfU)) 
                                               | (0x7fffU 
                                                  & vlSelfRef.__PVT__class_words
                                                  [9U]))
                                            : vlSelfRef.__PVT__class_words
                                           [9U]);
    vlSelfRef.__PVT__modified_words[0xaU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0xd00U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xaU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0xd00U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xaU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xaU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xaU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xaU]);
    vlSelfRef.__PVT__modified_words[0xbU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0xd00U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xbU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0xd00U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xbU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xbU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xbU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xbU]);
    vlSelfRef.__PVT__modified_words[0xcU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0xd00U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xcU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0xd00U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xcU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xcU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xcU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xcU]);
    vlSelfRef.__PVT__modified_words[0xdU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0xd00U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xdU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0xd00U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xdU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xdU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xdU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xdU]);
    vlSelfRef.__PVT__modified_words[0xeU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0xd00U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xeU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0xd00U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xeU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xeU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xeU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xeU]);
    vlSelfRef.__PVT__modified_words[0xfU] = ((1U & 
                                              (vlSymsp->TOP.in_hv[
                                               (((IData)(0xd00U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0xfU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0xd00U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0xfU) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(0x10U), vlSelfRef.__PVT__cent_idx)))))))
                                              ? ((0x8000U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__class_words
                                                       [0xfU] 
                                                       >> 0xfU)) 
                                                     << 0xfU)) 
                                                 | (0x7fffU 
                                                    & vlSelfRef.__PVT__class_words
                                                    [0xfU]))
                                              : vlSelfRef.__PVT__class_words
                                             [0xfU]);
    vlSelfRef.__Vcellinp__u_adder_tree__in[0U] = vlSelfRef.__PVT__modified_words
        [0U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[1U] = vlSelfRef.__PVT__modified_words
        [1U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[2U] = vlSelfRef.__PVT__modified_words
        [2U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[3U] = vlSelfRef.__PVT__modified_words
        [3U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[4U] = vlSelfRef.__PVT__modified_words
        [4U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[5U] = vlSelfRef.__PVT__modified_words
        [5U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[6U] = vlSelfRef.__PVT__modified_words
        [6U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[7U] = vlSelfRef.__PVT__modified_words
        [7U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[8U] = vlSelfRef.__PVT__modified_words
        [8U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[9U] = vlSelfRef.__PVT__modified_words
        [9U];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xaU] = 
        vlSelfRef.__PVT__modified_words[0xaU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xbU] = 
        vlSelfRef.__PVT__modified_words[0xbU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xcU] = 
        vlSelfRef.__PVT__modified_words[0xcU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xdU] = 
        vlSelfRef.__PVT__modified_words[0xdU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xeU] = 
        vlSelfRef.__PVT__modified_words[0xeU];
    vlSelfRef.__Vcellinp__u_adder_tree__in[0xfU] = 
        vlSelfRef.__PVT__modified_words[0xfU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][1U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[1U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][2U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[2U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][3U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[3U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][4U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[4U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][5U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[5U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][6U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[6U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][7U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[7U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][8U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[8U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][9U] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[9U];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xaU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xaU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xbU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xbU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xcU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xcU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xdU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xdU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xeU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xeU];
    vlSelfRef.__PVT__u_adder_tree__DOT__stage[0U][0xfU] 
        = vlSelfRef.__Vcellinp__u_adder_tree__in[0xfU];
    vlSelfRef.__PVT__ad_out = vlSelfRef.__PVT__u_adder_tree__DOT__stage
        [4U][0U];
    vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_b 
        = ((0U == (0x1fU & ((IData)(vlSelfRef.__PVT__ad_out) 
                            >> 0xaU))) ? (0x3ffU & (IData)(vlSelfRef.__PVT__ad_out))
            : (0x400U | (0x3ffU & (IData)(vlSelfRef.__PVT__ad_out))));
}

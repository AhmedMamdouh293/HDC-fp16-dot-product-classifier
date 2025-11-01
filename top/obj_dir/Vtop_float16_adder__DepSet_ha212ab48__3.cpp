// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop_float16_adder.h"

VL_INLINE_OPT void Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__3__KET____DOT__adder__0(Vtop_float16_adder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__3__KET____DOT__adder__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sig_a = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [6U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [0U][6U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [0U]
                                                  [6U])));
    vlSelfRef.__PVT__sig_b = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [7U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [0U][7U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [0U]
                                                  [7U])));
    if (((0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                   [0U][6U] >> 0xaU)) > (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [0U]
                                                  [7U] 
                                                  >> 0xaU)))) {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [6U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [0U]
                                                 [7U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_a_aligned = ((IData)(vlSelfRef.__PVT__sig_a) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_b_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_b));
        } else {
            vlSelfRef.__PVT__sig_b_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_b) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_b_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_b_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_b) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [0U][6U] 
                                             >> 0xaU));
    } else {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [7U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [0U]
                                                 [6U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_b_aligned = ((IData)(vlSelfRef.__PVT__sig_b) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_a_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_a));
        } else {
            vlSelfRef.__PVT__sig_a_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_a) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_a_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_a_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_a) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [0U][7U] 
                                             >> 0xaU));
    }
    if (((1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                [0U][6U] >> 0xfU)) == (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [0U][7U] 
                                             >> 0xfU)))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               + (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][6U] 
                                              >> 0xfU));
    } else if (((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                >= (IData)(vlSelfRef.__PVT__sig_b_aligned))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][6U] 
                                              >> 0xfU));
    } else {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_b_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_a_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][7U] 
                                              >> 0xfU));
    }
    vlSelfRef.__PVT__exp_result = vlSelfRef.__PVT__exp_max;
    if ((0x4000U & (IData)(vlSelfRef.__PVT__sig_sum))) {
        vlSelfRef.__PVT__exp_result = (0x1fU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__exp_result)));
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 4U));
    } else {
        while ((((~ ((IData)(vlSelfRef.__PVT__sig_sum) 
                     >> 0xdU)) & (0U < (IData)(vlSelfRef.__PVT__exp_result))) 
                & (0U != (IData)(vlSelfRef.__PVT__sig_sum)))) {
            vlSelfRef.__PVT__sig_sum = (0x7fffU & VL_SHIFTL_III(15,15,32, (IData)(vlSelfRef.__PVT__sig_sum), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(vlSelfRef.__PVT__exp_result) 
                                            - (IData)(1U)));
        }
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 3U));
    }
    vlSelfRef.__PVT__guard = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                    >> 2U));
    vlSelfRef.__PVT__round_bit = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                        >> 1U));
    vlSelfRef.__PVT__sticky = (1U & (IData)(vlSelfRef.__PVT__sig_sum));
    if (((IData)(vlSelfRef.__PVT__guard) & (((IData)(vlSelfRef.__PVT__round_bit) 
                                             | (IData)(vlSelfRef.__PVT__sticky)) 
                                            | (IData)(vlSelfRef.__PVT__sig_result)))) {
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__sig_result)));
        if (((0x400U == (IData)(vlSelfRef.__PVT__sig_result)) 
             | (0U == (IData)(vlSelfRef.__PVT__sig_result)))) {
            vlSelfRef.__PVT__sig_result = (0x7ffU & 
                                           VL_SHIFTR_III(11,11,32, (IData)(vlSelfRef.__PVT__sig_result), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__exp_result)));
        }
    }
    vlSelfRef.__PVT__temp_result = (((0U == (IData)(vlSelfRef.__PVT__exp_result)) 
                                     | (0U == (IData)(vlSelfRef.__PVT__sig_sum)))
                                     ? 0U : (((IData)(vlSelfRef.__PVT__result_sign) 
                                              << 0xfU) 
                                             | (((IData)(vlSelfRef.__PVT__exp_result) 
                                                 << 0xaU) 
                                                | (0x3ffU 
                                                   & (IData)(vlSelfRef.__PVT__sig_result)))));
}

VL_INLINE_OPT void Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__4__KET____DOT__adder__0(Vtop_float16_adder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__4__KET____DOT__adder__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sig_a = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [8U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [0U][8U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [0U]
                                                  [8U])));
    vlSelfRef.__PVT__sig_b = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [9U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [0U][9U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [0U]
                                                  [9U])));
    if (((0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                   [0U][8U] >> 0xaU)) > (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [0U]
                                                  [9U] 
                                                  >> 0xaU)))) {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [8U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [0U]
                                                 [9U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_a_aligned = ((IData)(vlSelfRef.__PVT__sig_a) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_b_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_b));
        } else {
            vlSelfRef.__PVT__sig_b_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_b) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_b_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_b_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_b) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [0U][8U] 
                                             >> 0xaU));
    } else {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [9U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [0U]
                                                 [8U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_b_aligned = ((IData)(vlSelfRef.__PVT__sig_b) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_a_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_a));
        } else {
            vlSelfRef.__PVT__sig_a_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_a) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_a_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_a_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_a) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [0U][9U] 
                                             >> 0xaU));
    }
    if (((1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                [0U][8U] >> 0xfU)) == (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [0U][9U] 
                                             >> 0xfU)))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               + (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][8U] 
                                              >> 0xfU));
    } else if (((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                >= (IData)(vlSelfRef.__PVT__sig_b_aligned))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][8U] 
                                              >> 0xfU));
    } else {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_b_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_a_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][9U] 
                                              >> 0xfU));
    }
    vlSelfRef.__PVT__exp_result = vlSelfRef.__PVT__exp_max;
    if ((0x4000U & (IData)(vlSelfRef.__PVT__sig_sum))) {
        vlSelfRef.__PVT__exp_result = (0x1fU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__exp_result)));
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 4U));
    } else {
        while ((((~ ((IData)(vlSelfRef.__PVT__sig_sum) 
                     >> 0xdU)) & (0U < (IData)(vlSelfRef.__PVT__exp_result))) 
                & (0U != (IData)(vlSelfRef.__PVT__sig_sum)))) {
            vlSelfRef.__PVT__sig_sum = (0x7fffU & VL_SHIFTL_III(15,15,32, (IData)(vlSelfRef.__PVT__sig_sum), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(vlSelfRef.__PVT__exp_result) 
                                            - (IData)(1U)));
        }
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 3U));
    }
    vlSelfRef.__PVT__guard = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                    >> 2U));
    vlSelfRef.__PVT__round_bit = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                        >> 1U));
    vlSelfRef.__PVT__sticky = (1U & (IData)(vlSelfRef.__PVT__sig_sum));
    if (((IData)(vlSelfRef.__PVT__guard) & (((IData)(vlSelfRef.__PVT__round_bit) 
                                             | (IData)(vlSelfRef.__PVT__sticky)) 
                                            | (IData)(vlSelfRef.__PVT__sig_result)))) {
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__sig_result)));
        if (((0x400U == (IData)(vlSelfRef.__PVT__sig_result)) 
             | (0U == (IData)(vlSelfRef.__PVT__sig_result)))) {
            vlSelfRef.__PVT__sig_result = (0x7ffU & 
                                           VL_SHIFTR_III(11,11,32, (IData)(vlSelfRef.__PVT__sig_result), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__exp_result)));
        }
    }
    vlSelfRef.__PVT__temp_result = (((0U == (IData)(vlSelfRef.__PVT__exp_result)) 
                                     | (0U == (IData)(vlSelfRef.__PVT__sig_sum)))
                                     ? 0U : (((IData)(vlSelfRef.__PVT__result_sign) 
                                              << 0xfU) 
                                             | (((IData)(vlSelfRef.__PVT__exp_result) 
                                                 << 0xaU) 
                                                | (0x3ffU 
                                                   & (IData)(vlSelfRef.__PVT__sig_result)))));
}

VL_INLINE_OPT void Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__5__KET____DOT__adder__0(Vtop_float16_adder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__5__KET____DOT__adder__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sig_a = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [0xaU] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [0U][0xaU]) : (0x400U 
                                                 | (0x3ffU 
                                                    & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                    [0U]
                                                    [0xaU])));
    vlSelfRef.__PVT__sig_b = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [0xbU] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [0U][0xbU]) : (0x400U 
                                                 | (0x3ffU 
                                                    & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                    [0U]
                                                    [0xbU])));
    if (((0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                   [0U][0xaU] >> 0xaU)) > (0x1fU & 
                                           (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                            [0U][0xbU] 
                                            >> 0xaU)))) {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [0xaU] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [0U]
                                                 [0xbU] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_a_aligned = ((IData)(vlSelfRef.__PVT__sig_a) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_b_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_b));
        } else {
            vlSelfRef.__PVT__sig_b_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_b) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_b_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_b_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_b) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [0U][0xaU] 
                                             >> 0xaU));
    } else {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [0xbU] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [0U]
                                                 [0xaU] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_b_aligned = ((IData)(vlSelfRef.__PVT__sig_b) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_a_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_a));
        } else {
            vlSelfRef.__PVT__sig_a_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_a) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_a_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_a_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_a) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [0U][0xbU] 
                                             >> 0xaU));
    }
    if (((1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                [0U][0xaU] >> 0xfU)) == (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [0xbU] 
                                               >> 0xfU)))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               + (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][0xaU] 
                                              >> 0xfU));
    } else if (((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                >= (IData)(vlSelfRef.__PVT__sig_b_aligned))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][0xaU] 
                                              >> 0xfU));
    } else {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_b_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_a_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][0xbU] 
                                              >> 0xfU));
    }
    vlSelfRef.__PVT__exp_result = vlSelfRef.__PVT__exp_max;
    if ((0x4000U & (IData)(vlSelfRef.__PVT__sig_sum))) {
        vlSelfRef.__PVT__exp_result = (0x1fU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__exp_result)));
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 4U));
    } else {
        while ((((~ ((IData)(vlSelfRef.__PVT__sig_sum) 
                     >> 0xdU)) & (0U < (IData)(vlSelfRef.__PVT__exp_result))) 
                & (0U != (IData)(vlSelfRef.__PVT__sig_sum)))) {
            vlSelfRef.__PVT__sig_sum = (0x7fffU & VL_SHIFTL_III(15,15,32, (IData)(vlSelfRef.__PVT__sig_sum), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(vlSelfRef.__PVT__exp_result) 
                                            - (IData)(1U)));
        }
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 3U));
    }
    vlSelfRef.__PVT__guard = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                    >> 2U));
    vlSelfRef.__PVT__round_bit = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                        >> 1U));
    vlSelfRef.__PVT__sticky = (1U & (IData)(vlSelfRef.__PVT__sig_sum));
    if (((IData)(vlSelfRef.__PVT__guard) & (((IData)(vlSelfRef.__PVT__round_bit) 
                                             | (IData)(vlSelfRef.__PVT__sticky)) 
                                            | (IData)(vlSelfRef.__PVT__sig_result)))) {
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__sig_result)));
        if (((0x400U == (IData)(vlSelfRef.__PVT__sig_result)) 
             | (0U == (IData)(vlSelfRef.__PVT__sig_result)))) {
            vlSelfRef.__PVT__sig_result = (0x7ffU & 
                                           VL_SHIFTR_III(11,11,32, (IData)(vlSelfRef.__PVT__sig_result), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__exp_result)));
        }
    }
    vlSelfRef.__PVT__temp_result = (((0U == (IData)(vlSelfRef.__PVT__exp_result)) 
                                     | (0U == (IData)(vlSelfRef.__PVT__sig_sum)))
                                     ? 0U : (((IData)(vlSelfRef.__PVT__result_sign) 
                                              << 0xfU) 
                                             | (((IData)(vlSelfRef.__PVT__exp_result) 
                                                 << 0xaU) 
                                                | (0x3ffU 
                                                   & (IData)(vlSelfRef.__PVT__sig_result)))));
}

VL_INLINE_OPT void Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__6__KET____DOT__adder__0(Vtop_float16_adder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__6__KET____DOT__adder__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sig_a = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [0xcU] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [0U][0xcU]) : (0x400U 
                                                 | (0x3ffU 
                                                    & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                    [0U]
                                                    [0xcU])));
    vlSelfRef.__PVT__sig_b = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [0xdU] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [0U][0xdU]) : (0x400U 
                                                 | (0x3ffU 
                                                    & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                    [0U]
                                                    [0xdU])));
    if (((0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                   [0U][0xcU] >> 0xaU)) > (0x1fU & 
                                           (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                            [0U][0xdU] 
                                            >> 0xaU)))) {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [0xcU] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [0U]
                                                 [0xdU] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_a_aligned = ((IData)(vlSelfRef.__PVT__sig_a) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_b_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_b));
        } else {
            vlSelfRef.__PVT__sig_b_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_b) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_b_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_b_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_b) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [0U][0xcU] 
                                             >> 0xaU));
    } else {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [0xdU] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [0U]
                                                 [0xcU] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_b_aligned = ((IData)(vlSelfRef.__PVT__sig_b) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_a_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_a));
        } else {
            vlSelfRef.__PVT__sig_a_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_a) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_a_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_a_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_a) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [0U][0xdU] 
                                             >> 0xaU));
    }
    if (((1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                [0U][0xcU] >> 0xfU)) == (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [0xdU] 
                                               >> 0xfU)))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               + (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][0xcU] 
                                              >> 0xfU));
    } else if (((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                >= (IData)(vlSelfRef.__PVT__sig_b_aligned))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][0xcU] 
                                              >> 0xfU));
    } else {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_b_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_a_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][0xdU] 
                                              >> 0xfU));
    }
    vlSelfRef.__PVT__exp_result = vlSelfRef.__PVT__exp_max;
    if ((0x4000U & (IData)(vlSelfRef.__PVT__sig_sum))) {
        vlSelfRef.__PVT__exp_result = (0x1fU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__exp_result)));
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 4U));
    } else {
        while ((((~ ((IData)(vlSelfRef.__PVT__sig_sum) 
                     >> 0xdU)) & (0U < (IData)(vlSelfRef.__PVT__exp_result))) 
                & (0U != (IData)(vlSelfRef.__PVT__sig_sum)))) {
            vlSelfRef.__PVT__sig_sum = (0x7fffU & VL_SHIFTL_III(15,15,32, (IData)(vlSelfRef.__PVT__sig_sum), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(vlSelfRef.__PVT__exp_result) 
                                            - (IData)(1U)));
        }
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 3U));
    }
    vlSelfRef.__PVT__guard = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                    >> 2U));
    vlSelfRef.__PVT__round_bit = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                        >> 1U));
    vlSelfRef.__PVT__sticky = (1U & (IData)(vlSelfRef.__PVT__sig_sum));
    if (((IData)(vlSelfRef.__PVT__guard) & (((IData)(vlSelfRef.__PVT__round_bit) 
                                             | (IData)(vlSelfRef.__PVT__sticky)) 
                                            | (IData)(vlSelfRef.__PVT__sig_result)))) {
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__sig_result)));
        if (((0x400U == (IData)(vlSelfRef.__PVT__sig_result)) 
             | (0U == (IData)(vlSelfRef.__PVT__sig_result)))) {
            vlSelfRef.__PVT__sig_result = (0x7ffU & 
                                           VL_SHIFTR_III(11,11,32, (IData)(vlSelfRef.__PVT__sig_result), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__exp_result)));
        }
    }
    vlSelfRef.__PVT__temp_result = (((0U == (IData)(vlSelfRef.__PVT__exp_result)) 
                                     | (0U == (IData)(vlSelfRef.__PVT__sig_sum)))
                                     ? 0U : (((IData)(vlSelfRef.__PVT__result_sign) 
                                              << 0xfU) 
                                             | (((IData)(vlSelfRef.__PVT__exp_result) 
                                                 << 0xaU) 
                                                | (0x3ffU 
                                                   & (IData)(vlSelfRef.__PVT__sig_result)))));
}

VL_INLINE_OPT void Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__7__KET____DOT__adder__0(Vtop_float16_adder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__7__KET____DOT__adder__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sig_a = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [0xeU] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [0U][0xeU]) : (0x400U 
                                                 | (0x3ffU 
                                                    & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                    [0U]
                                                    [0xeU])));
    vlSelfRef.__PVT__sig_b = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [0xfU] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [0U][0xfU]) : (0x400U 
                                                 | (0x3ffU 
                                                    & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                    [0U]
                                                    [0xfU])));
    if (((0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                   [0U][0xeU] >> 0xaU)) > (0x1fU & 
                                           (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                            [0U][0xfU] 
                                            >> 0xaU)))) {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [0xeU] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [0U]
                                                 [0xfU] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_a_aligned = ((IData)(vlSelfRef.__PVT__sig_a) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_b_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_b));
        } else {
            vlSelfRef.__PVT__sig_b_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_b) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_b_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_b_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_b) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [0U][0xeU] 
                                             >> 0xaU));
    } else {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [0xfU] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [0U]
                                                 [0xeU] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_b_aligned = ((IData)(vlSelfRef.__PVT__sig_b) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_a_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_a));
        } else {
            vlSelfRef.__PVT__sig_a_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_a) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_a_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_a_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_a) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [0U][0xfU] 
                                             >> 0xaU));
    }
    if (((1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                [0U][0xeU] >> 0xfU)) == (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [0xfU] 
                                               >> 0xfU)))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               + (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][0xeU] 
                                              >> 0xfU));
    } else if (((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                >= (IData)(vlSelfRef.__PVT__sig_b_aligned))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][0xeU] 
                                              >> 0xfU));
    } else {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_b_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_a_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][0xfU] 
                                              >> 0xfU));
    }
    vlSelfRef.__PVT__exp_result = vlSelfRef.__PVT__exp_max;
    if ((0x4000U & (IData)(vlSelfRef.__PVT__sig_sum))) {
        vlSelfRef.__PVT__exp_result = (0x1fU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__exp_result)));
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 4U));
    } else {
        while ((((~ ((IData)(vlSelfRef.__PVT__sig_sum) 
                     >> 0xdU)) & (0U < (IData)(vlSelfRef.__PVT__exp_result))) 
                & (0U != (IData)(vlSelfRef.__PVT__sig_sum)))) {
            vlSelfRef.__PVT__sig_sum = (0x7fffU & VL_SHIFTL_III(15,15,32, (IData)(vlSelfRef.__PVT__sig_sum), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(vlSelfRef.__PVT__exp_result) 
                                            - (IData)(1U)));
        }
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 3U));
    }
    vlSelfRef.__PVT__guard = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                    >> 2U));
    vlSelfRef.__PVT__round_bit = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                        >> 1U));
    vlSelfRef.__PVT__sticky = (1U & (IData)(vlSelfRef.__PVT__sig_sum));
    if (((IData)(vlSelfRef.__PVT__guard) & (((IData)(vlSelfRef.__PVT__round_bit) 
                                             | (IData)(vlSelfRef.__PVT__sticky)) 
                                            | (IData)(vlSelfRef.__PVT__sig_result)))) {
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__sig_result)));
        if (((0x400U == (IData)(vlSelfRef.__PVT__sig_result)) 
             | (0U == (IData)(vlSelfRef.__PVT__sig_result)))) {
            vlSelfRef.__PVT__sig_result = (0x7ffU & 
                                           VL_SHIFTR_III(11,11,32, (IData)(vlSelfRef.__PVT__sig_result), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__exp_result)));
        }
    }
    vlSelfRef.__PVT__temp_result = (((0U == (IData)(vlSelfRef.__PVT__exp_result)) 
                                     | (0U == (IData)(vlSelfRef.__PVT__sig_sum)))
                                     ? 0U : (((IData)(vlSelfRef.__PVT__result_sign) 
                                              << 0xfU) 
                                             | (((IData)(vlSelfRef.__PVT__exp_result) 
                                                 << 0xaU) 
                                                | (0x3ffU 
                                                   & (IData)(vlSelfRef.__PVT__sig_result)))));
}

VL_INLINE_OPT void Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__1__KET____DOT__gen_adder__BRA__0__KET____DOT__adder__0(Vtop_float16_adder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__1__KET____DOT__gen_adder__BRA__0__KET____DOT__adder__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sig_a = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [1U]
                                               [0U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [1U][0U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [1U]
                                                  [0U])));
    vlSelfRef.__PVT__sig_b = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [1U]
                                               [1U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [1U][1U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [1U]
                                                  [1U])));
    if (((0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                   [1U][0U] >> 0xaU)) > (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [1U]
                                                  [1U] 
                                                  >> 0xaU)))) {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [1U]
                                               [0U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [1U]
                                                 [1U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_a_aligned = ((IData)(vlSelfRef.__PVT__sig_a) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_b_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_b));
        } else {
            vlSelfRef.__PVT__sig_b_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_b) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_b_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_b_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_b) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [1U][0U] 
                                             >> 0xaU));
    } else {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [1U]
                                               [1U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [1U]
                                                 [0U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_b_aligned = ((IData)(vlSelfRef.__PVT__sig_b) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_a_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_a));
        } else {
            vlSelfRef.__PVT__sig_a_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_a) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_a_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_a_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_a) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [1U][1U] 
                                             >> 0xaU));
    }
    if (((1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                [1U][0U] >> 0xfU)) == (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [1U][1U] 
                                             >> 0xfU)))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               + (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [1U][0U] 
                                              >> 0xfU));
    } else if (((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                >= (IData)(vlSelfRef.__PVT__sig_b_aligned))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [1U][0U] 
                                              >> 0xfU));
    } else {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_b_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_a_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [1U][1U] 
                                              >> 0xfU));
    }
    vlSelfRef.__PVT__exp_result = vlSelfRef.__PVT__exp_max;
    if ((0x4000U & (IData)(vlSelfRef.__PVT__sig_sum))) {
        vlSelfRef.__PVT__exp_result = (0x1fU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__exp_result)));
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 4U));
    } else {
        while ((((~ ((IData)(vlSelfRef.__PVT__sig_sum) 
                     >> 0xdU)) & (0U < (IData)(vlSelfRef.__PVT__exp_result))) 
                & (0U != (IData)(vlSelfRef.__PVT__sig_sum)))) {
            vlSelfRef.__PVT__sig_sum = (0x7fffU & VL_SHIFTL_III(15,15,32, (IData)(vlSelfRef.__PVT__sig_sum), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(vlSelfRef.__PVT__exp_result) 
                                            - (IData)(1U)));
        }
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 3U));
    }
    vlSelfRef.__PVT__guard = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                    >> 2U));
    vlSelfRef.__PVT__round_bit = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                        >> 1U));
    vlSelfRef.__PVT__sticky = (1U & (IData)(vlSelfRef.__PVT__sig_sum));
    if (((IData)(vlSelfRef.__PVT__guard) & (((IData)(vlSelfRef.__PVT__round_bit) 
                                             | (IData)(vlSelfRef.__PVT__sticky)) 
                                            | (IData)(vlSelfRef.__PVT__sig_result)))) {
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__sig_result)));
        if (((0x400U == (IData)(vlSelfRef.__PVT__sig_result)) 
             | (0U == (IData)(vlSelfRef.__PVT__sig_result)))) {
            vlSelfRef.__PVT__sig_result = (0x7ffU & 
                                           VL_SHIFTR_III(11,11,32, (IData)(vlSelfRef.__PVT__sig_result), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__exp_result)));
        }
    }
    vlSelfRef.__PVT__temp_result = (((0U == (IData)(vlSelfRef.__PVT__exp_result)) 
                                     | (0U == (IData)(vlSelfRef.__PVT__sig_sum)))
                                     ? 0U : (((IData)(vlSelfRef.__PVT__result_sign) 
                                              << 0xfU) 
                                             | (((IData)(vlSelfRef.__PVT__exp_result) 
                                                 << 0xaU) 
                                                | (0x3ffU 
                                                   & (IData)(vlSelfRef.__PVT__sig_result)))));
}

VL_INLINE_OPT void Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__1__KET____DOT__gen_adder__BRA__1__KET____DOT__adder__0(Vtop_float16_adder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__1__KET____DOT__gen_adder__BRA__1__KET____DOT__adder__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sig_a = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [1U]
                                               [2U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [1U][2U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [1U]
                                                  [2U])));
    vlSelfRef.__PVT__sig_b = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [1U]
                                               [3U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [1U][3U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [1U]
                                                  [3U])));
    if (((0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                   [1U][2U] >> 0xaU)) > (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [1U]
                                                  [3U] 
                                                  >> 0xaU)))) {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [1U]
                                               [2U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [1U]
                                                 [3U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_a_aligned = ((IData)(vlSelfRef.__PVT__sig_a) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_b_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_b));
        } else {
            vlSelfRef.__PVT__sig_b_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_b) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_b_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_b_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_b) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [1U][2U] 
                                             >> 0xaU));
    } else {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [1U]
                                               [3U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [1U]
                                                 [2U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_b_aligned = ((IData)(vlSelfRef.__PVT__sig_b) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_a_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_a));
        } else {
            vlSelfRef.__PVT__sig_a_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_a) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_a_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_a_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_a) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [1U][3U] 
                                             >> 0xaU));
    }
    if (((1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                [1U][2U] >> 0xfU)) == (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [1U][3U] 
                                             >> 0xfU)))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               + (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [1U][2U] 
                                              >> 0xfU));
    } else if (((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                >= (IData)(vlSelfRef.__PVT__sig_b_aligned))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [1U][2U] 
                                              >> 0xfU));
    } else {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_b_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_a_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [1U][3U] 
                                              >> 0xfU));
    }
    vlSelfRef.__PVT__exp_result = vlSelfRef.__PVT__exp_max;
    if ((0x4000U & (IData)(vlSelfRef.__PVT__sig_sum))) {
        vlSelfRef.__PVT__exp_result = (0x1fU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__exp_result)));
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 4U));
    } else {
        while ((((~ ((IData)(vlSelfRef.__PVT__sig_sum) 
                     >> 0xdU)) & (0U < (IData)(vlSelfRef.__PVT__exp_result))) 
                & (0U != (IData)(vlSelfRef.__PVT__sig_sum)))) {
            vlSelfRef.__PVT__sig_sum = (0x7fffU & VL_SHIFTL_III(15,15,32, (IData)(vlSelfRef.__PVT__sig_sum), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(vlSelfRef.__PVT__exp_result) 
                                            - (IData)(1U)));
        }
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 3U));
    }
    vlSelfRef.__PVT__guard = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                    >> 2U));
    vlSelfRef.__PVT__round_bit = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                        >> 1U));
    vlSelfRef.__PVT__sticky = (1U & (IData)(vlSelfRef.__PVT__sig_sum));
    if (((IData)(vlSelfRef.__PVT__guard) & (((IData)(vlSelfRef.__PVT__round_bit) 
                                             | (IData)(vlSelfRef.__PVT__sticky)) 
                                            | (IData)(vlSelfRef.__PVT__sig_result)))) {
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__sig_result)));
        if (((0x400U == (IData)(vlSelfRef.__PVT__sig_result)) 
             | (0U == (IData)(vlSelfRef.__PVT__sig_result)))) {
            vlSelfRef.__PVT__sig_result = (0x7ffU & 
                                           VL_SHIFTR_III(11,11,32, (IData)(vlSelfRef.__PVT__sig_result), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__exp_result)));
        }
    }
    vlSelfRef.__PVT__temp_result = (((0U == (IData)(vlSelfRef.__PVT__exp_result)) 
                                     | (0U == (IData)(vlSelfRef.__PVT__sig_sum)))
                                     ? 0U : (((IData)(vlSelfRef.__PVT__result_sign) 
                                              << 0xfU) 
                                             | (((IData)(vlSelfRef.__PVT__exp_result) 
                                                 << 0xaU) 
                                                | (0x3ffU 
                                                   & (IData)(vlSelfRef.__PVT__sig_result)))));
}

VL_INLINE_OPT void Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__1__KET____DOT__gen_adder__BRA__2__KET____DOT__adder__0(Vtop_float16_adder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__1__KET____DOT__gen_adder__BRA__2__KET____DOT__adder__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sig_a = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [1U]
                                               [4U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [1U][4U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [1U]
                                                  [4U])));
    vlSelfRef.__PVT__sig_b = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [1U]
                                               [5U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [1U][5U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [1U]
                                                  [5U])));
    if (((0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                   [1U][4U] >> 0xaU)) > (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [1U]
                                                  [5U] 
                                                  >> 0xaU)))) {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [1U]
                                               [4U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [1U]
                                                 [5U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_a_aligned = ((IData)(vlSelfRef.__PVT__sig_a) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_b_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_b));
        } else {
            vlSelfRef.__PVT__sig_b_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_b) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_b_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_b_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_b) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [1U][4U] 
                                             >> 0xaU));
    } else {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [1U]
                                               [5U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [1U]
                                                 [4U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_b_aligned = ((IData)(vlSelfRef.__PVT__sig_b) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_a_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_a));
        } else {
            vlSelfRef.__PVT__sig_a_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_a) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_a_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_a_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_a) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [1U][5U] 
                                             >> 0xaU));
    }
    if (((1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                [1U][4U] >> 0xfU)) == (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [1U][5U] 
                                             >> 0xfU)))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               + (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [1U][4U] 
                                              >> 0xfU));
    } else if (((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                >= (IData)(vlSelfRef.__PVT__sig_b_aligned))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [1U][4U] 
                                              >> 0xfU));
    } else {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_b_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_a_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [1U][5U] 
                                              >> 0xfU));
    }
    vlSelfRef.__PVT__exp_result = vlSelfRef.__PVT__exp_max;
    if ((0x4000U & (IData)(vlSelfRef.__PVT__sig_sum))) {
        vlSelfRef.__PVT__exp_result = (0x1fU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__exp_result)));
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 4U));
    } else {
        while ((((~ ((IData)(vlSelfRef.__PVT__sig_sum) 
                     >> 0xdU)) & (0U < (IData)(vlSelfRef.__PVT__exp_result))) 
                & (0U != (IData)(vlSelfRef.__PVT__sig_sum)))) {
            vlSelfRef.__PVT__sig_sum = (0x7fffU & VL_SHIFTL_III(15,15,32, (IData)(vlSelfRef.__PVT__sig_sum), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(vlSelfRef.__PVT__exp_result) 
                                            - (IData)(1U)));
        }
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 3U));
    }
    vlSelfRef.__PVT__guard = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                    >> 2U));
    vlSelfRef.__PVT__round_bit = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                        >> 1U));
    vlSelfRef.__PVT__sticky = (1U & (IData)(vlSelfRef.__PVT__sig_sum));
    if (((IData)(vlSelfRef.__PVT__guard) & (((IData)(vlSelfRef.__PVT__round_bit) 
                                             | (IData)(vlSelfRef.__PVT__sticky)) 
                                            | (IData)(vlSelfRef.__PVT__sig_result)))) {
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__sig_result)));
        if (((0x400U == (IData)(vlSelfRef.__PVT__sig_result)) 
             | (0U == (IData)(vlSelfRef.__PVT__sig_result)))) {
            vlSelfRef.__PVT__sig_result = (0x7ffU & 
                                           VL_SHIFTR_III(11,11,32, (IData)(vlSelfRef.__PVT__sig_result), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__exp_result)));
        }
    }
    vlSelfRef.__PVT__temp_result = (((0U == (IData)(vlSelfRef.__PVT__exp_result)) 
                                     | (0U == (IData)(vlSelfRef.__PVT__sig_sum)))
                                     ? 0U : (((IData)(vlSelfRef.__PVT__result_sign) 
                                              << 0xfU) 
                                             | (((IData)(vlSelfRef.__PVT__exp_result) 
                                                 << 0xaU) 
                                                | (0x3ffU 
                                                   & (IData)(vlSelfRef.__PVT__sig_result)))));
}

VL_INLINE_OPT void Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__1__KET____DOT__gen_adder__BRA__3__KET____DOT__adder__0(Vtop_float16_adder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__1__KET____DOT__gen_adder__BRA__3__KET____DOT__adder__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sig_a = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [1U]
                                               [6U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [1U][6U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [1U]
                                                  [6U])));
    vlSelfRef.__PVT__sig_b = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [1U]
                                               [7U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [1U][7U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [1U]
                                                  [7U])));
    if (((0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                   [1U][6U] >> 0xaU)) > (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [1U]
                                                  [7U] 
                                                  >> 0xaU)))) {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [1U]
                                               [6U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [1U]
                                                 [7U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_a_aligned = ((IData)(vlSelfRef.__PVT__sig_a) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_b_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_b));
        } else {
            vlSelfRef.__PVT__sig_b_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_b) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_b_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_b_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_b) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [1U][6U] 
                                             >> 0xaU));
    } else {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [1U]
                                               [7U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [1U]
                                                 [6U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_b_aligned = ((IData)(vlSelfRef.__PVT__sig_b) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_a_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_a));
        } else {
            vlSelfRef.__PVT__sig_a_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_a) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_a_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_a_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_a) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [1U][7U] 
                                             >> 0xaU));
    }
    if (((1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                [1U][6U] >> 0xfU)) == (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [1U][7U] 
                                             >> 0xfU)))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               + (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [1U][6U] 
                                              >> 0xfU));
    } else if (((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                >= (IData)(vlSelfRef.__PVT__sig_b_aligned))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [1U][6U] 
                                              >> 0xfU));
    } else {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_b_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_a_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [1U][7U] 
                                              >> 0xfU));
    }
    vlSelfRef.__PVT__exp_result = vlSelfRef.__PVT__exp_max;
    if ((0x4000U & (IData)(vlSelfRef.__PVT__sig_sum))) {
        vlSelfRef.__PVT__exp_result = (0x1fU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__exp_result)));
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 4U));
    } else {
        while ((((~ ((IData)(vlSelfRef.__PVT__sig_sum) 
                     >> 0xdU)) & (0U < (IData)(vlSelfRef.__PVT__exp_result))) 
                & (0U != (IData)(vlSelfRef.__PVT__sig_sum)))) {
            vlSelfRef.__PVT__sig_sum = (0x7fffU & VL_SHIFTL_III(15,15,32, (IData)(vlSelfRef.__PVT__sig_sum), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(vlSelfRef.__PVT__exp_result) 
                                            - (IData)(1U)));
        }
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 3U));
    }
    vlSelfRef.__PVT__guard = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                    >> 2U));
    vlSelfRef.__PVT__round_bit = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                        >> 1U));
    vlSelfRef.__PVT__sticky = (1U & (IData)(vlSelfRef.__PVT__sig_sum));
    if (((IData)(vlSelfRef.__PVT__guard) & (((IData)(vlSelfRef.__PVT__round_bit) 
                                             | (IData)(vlSelfRef.__PVT__sticky)) 
                                            | (IData)(vlSelfRef.__PVT__sig_result)))) {
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__sig_result)));
        if (((0x400U == (IData)(vlSelfRef.__PVT__sig_result)) 
             | (0U == (IData)(vlSelfRef.__PVT__sig_result)))) {
            vlSelfRef.__PVT__sig_result = (0x7ffU & 
                                           VL_SHIFTR_III(11,11,32, (IData)(vlSelfRef.__PVT__sig_result), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__exp_result)));
        }
    }
    vlSelfRef.__PVT__temp_result = (((0U == (IData)(vlSelfRef.__PVT__exp_result)) 
                                     | (0U == (IData)(vlSelfRef.__PVT__sig_sum)))
                                     ? 0U : (((IData)(vlSelfRef.__PVT__result_sign) 
                                              << 0xfU) 
                                             | (((IData)(vlSelfRef.__PVT__exp_result) 
                                                 << 0xaU) 
                                                | (0x3ffU 
                                                   & (IData)(vlSelfRef.__PVT__sig_result)))));
}

VL_INLINE_OPT void Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__2__KET____DOT__gen_adder__BRA__0__KET____DOT__adder__0(Vtop_float16_adder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__2__KET____DOT__gen_adder__BRA__0__KET____DOT__adder__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sig_a = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [2U]
                                               [0U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [2U][0U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [2U]
                                                  [0U])));
    vlSelfRef.__PVT__sig_b = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [2U]
                                               [1U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [2U][1U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [2U]
                                                  [1U])));
    if (((0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                   [2U][0U] >> 0xaU)) > (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [2U]
                                                  [1U] 
                                                  >> 0xaU)))) {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [2U]
                                               [0U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [2U]
                                                 [1U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_a_aligned = ((IData)(vlSelfRef.__PVT__sig_a) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_b_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_b));
        } else {
            vlSelfRef.__PVT__sig_b_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_b) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_b_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_b_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_b) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [2U][0U] 
                                             >> 0xaU));
    } else {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [2U]
                                               [1U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [2U]
                                                 [0U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_b_aligned = ((IData)(vlSelfRef.__PVT__sig_b) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_a_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_a));
        } else {
            vlSelfRef.__PVT__sig_a_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_a) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_a_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_a_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_a) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [2U][1U] 
                                             >> 0xaU));
    }
    if (((1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                [2U][0U] >> 0xfU)) == (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [2U][1U] 
                                             >> 0xfU)))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               + (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [2U][0U] 
                                              >> 0xfU));
    } else if (((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                >= (IData)(vlSelfRef.__PVT__sig_b_aligned))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [2U][0U] 
                                              >> 0xfU));
    } else {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_b_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_a_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [2U][1U] 
                                              >> 0xfU));
    }
    vlSelfRef.__PVT__exp_result = vlSelfRef.__PVT__exp_max;
    if ((0x4000U & (IData)(vlSelfRef.__PVT__sig_sum))) {
        vlSelfRef.__PVT__exp_result = (0x1fU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__exp_result)));
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 4U));
    } else {
        while ((((~ ((IData)(vlSelfRef.__PVT__sig_sum) 
                     >> 0xdU)) & (0U < (IData)(vlSelfRef.__PVT__exp_result))) 
                & (0U != (IData)(vlSelfRef.__PVT__sig_sum)))) {
            vlSelfRef.__PVT__sig_sum = (0x7fffU & VL_SHIFTL_III(15,15,32, (IData)(vlSelfRef.__PVT__sig_sum), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(vlSelfRef.__PVT__exp_result) 
                                            - (IData)(1U)));
        }
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 3U));
    }
    vlSelfRef.__PVT__guard = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                    >> 2U));
    vlSelfRef.__PVT__round_bit = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                        >> 1U));
    vlSelfRef.__PVT__sticky = (1U & (IData)(vlSelfRef.__PVT__sig_sum));
    if (((IData)(vlSelfRef.__PVT__guard) & (((IData)(vlSelfRef.__PVT__round_bit) 
                                             | (IData)(vlSelfRef.__PVT__sticky)) 
                                            | (IData)(vlSelfRef.__PVT__sig_result)))) {
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__sig_result)));
        if (((0x400U == (IData)(vlSelfRef.__PVT__sig_result)) 
             | (0U == (IData)(vlSelfRef.__PVT__sig_result)))) {
            vlSelfRef.__PVT__sig_result = (0x7ffU & 
                                           VL_SHIFTR_III(11,11,32, (IData)(vlSelfRef.__PVT__sig_result), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__exp_result)));
        }
    }
    vlSelfRef.__PVT__temp_result = (((0U == (IData)(vlSelfRef.__PVT__exp_result)) 
                                     | (0U == (IData)(vlSelfRef.__PVT__sig_sum)))
                                     ? 0U : (((IData)(vlSelfRef.__PVT__result_sign) 
                                              << 0xfU) 
                                             | (((IData)(vlSelfRef.__PVT__exp_result) 
                                                 << 0xaU) 
                                                | (0x3ffU 
                                                   & (IData)(vlSelfRef.__PVT__sig_result)))));
}

VL_INLINE_OPT void Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__2__KET____DOT__gen_adder__BRA__1__KET____DOT__adder__0(Vtop_float16_adder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__2__KET____DOT__gen_adder__BRA__1__KET____DOT__adder__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sig_a = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [2U]
                                               [2U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [2U][2U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [2U]
                                                  [2U])));
    vlSelfRef.__PVT__sig_b = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [2U]
                                               [3U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [2U][3U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [2U]
                                                  [3U])));
    if (((0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                   [2U][2U] >> 0xaU)) > (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [2U]
                                                  [3U] 
                                                  >> 0xaU)))) {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [2U]
                                               [2U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [2U]
                                                 [3U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_a_aligned = ((IData)(vlSelfRef.__PVT__sig_a) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_b_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_b));
        } else {
            vlSelfRef.__PVT__sig_b_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_b) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_b_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_b_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_b) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [2U][2U] 
                                             >> 0xaU));
    } else {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [2U]
                                               [3U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [2U]
                                                 [2U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_b_aligned = ((IData)(vlSelfRef.__PVT__sig_b) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_a_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_a));
        } else {
            vlSelfRef.__PVT__sig_a_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_a) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_a_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_a_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_a) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [2U][3U] 
                                             >> 0xaU));
    }
    if (((1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                [2U][2U] >> 0xfU)) == (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [2U][3U] 
                                             >> 0xfU)))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               + (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [2U][2U] 
                                              >> 0xfU));
    } else if (((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                >= (IData)(vlSelfRef.__PVT__sig_b_aligned))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [2U][2U] 
                                              >> 0xfU));
    } else {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_b_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_a_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [2U][3U] 
                                              >> 0xfU));
    }
    vlSelfRef.__PVT__exp_result = vlSelfRef.__PVT__exp_max;
    if ((0x4000U & (IData)(vlSelfRef.__PVT__sig_sum))) {
        vlSelfRef.__PVT__exp_result = (0x1fU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__exp_result)));
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 4U));
    } else {
        while ((((~ ((IData)(vlSelfRef.__PVT__sig_sum) 
                     >> 0xdU)) & (0U < (IData)(vlSelfRef.__PVT__exp_result))) 
                & (0U != (IData)(vlSelfRef.__PVT__sig_sum)))) {
            vlSelfRef.__PVT__sig_sum = (0x7fffU & VL_SHIFTL_III(15,15,32, (IData)(vlSelfRef.__PVT__sig_sum), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(vlSelfRef.__PVT__exp_result) 
                                            - (IData)(1U)));
        }
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 3U));
    }
    vlSelfRef.__PVT__guard = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                    >> 2U));
    vlSelfRef.__PVT__round_bit = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                        >> 1U));
    vlSelfRef.__PVT__sticky = (1U & (IData)(vlSelfRef.__PVT__sig_sum));
    if (((IData)(vlSelfRef.__PVT__guard) & (((IData)(vlSelfRef.__PVT__round_bit) 
                                             | (IData)(vlSelfRef.__PVT__sticky)) 
                                            | (IData)(vlSelfRef.__PVT__sig_result)))) {
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__sig_result)));
        if (((0x400U == (IData)(vlSelfRef.__PVT__sig_result)) 
             | (0U == (IData)(vlSelfRef.__PVT__sig_result)))) {
            vlSelfRef.__PVT__sig_result = (0x7ffU & 
                                           VL_SHIFTR_III(11,11,32, (IData)(vlSelfRef.__PVT__sig_result), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__exp_result)));
        }
    }
    vlSelfRef.__PVT__temp_result = (((0U == (IData)(vlSelfRef.__PVT__exp_result)) 
                                     | (0U == (IData)(vlSelfRef.__PVT__sig_sum)))
                                     ? 0U : (((IData)(vlSelfRef.__PVT__result_sign) 
                                              << 0xfU) 
                                             | (((IData)(vlSelfRef.__PVT__exp_result) 
                                                 << 0xaU) 
                                                | (0x3ffU 
                                                   & (IData)(vlSelfRef.__PVT__sig_result)))));
}

VL_INLINE_OPT void Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__3__KET____DOT__gen_adder__BRA__0__KET____DOT__adder__0(Vtop_float16_adder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__3__KET____DOT__gen_adder__BRA__0__KET____DOT__adder__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sig_a = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [3U]
                                               [0U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [3U][0U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [3U]
                                                  [0U])));
    vlSelfRef.__PVT__sig_b = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [3U]
                                               [1U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [3U][1U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [3U]
                                                  [1U])));
    if (((0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                   [3U][0U] >> 0xaU)) > (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [3U]
                                                  [1U] 
                                                  >> 0xaU)))) {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [3U]
                                               [0U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [3U]
                                                 [1U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_a_aligned = ((IData)(vlSelfRef.__PVT__sig_a) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_b_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_b));
        } else {
            vlSelfRef.__PVT__sig_b_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_b) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_b_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_b_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_b) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [3U][0U] 
                                             >> 0xaU));
    } else {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [3U]
                                               [1U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [3U]
                                                 [0U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_b_aligned = ((IData)(vlSelfRef.__PVT__sig_b) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_a_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_a));
        } else {
            vlSelfRef.__PVT__sig_a_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_a) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_a_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_a_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_a) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [3U][1U] 
                                             >> 0xaU));
    }
    if (((1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                [3U][0U] >> 0xfU)) == (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [3U][1U] 
                                             >> 0xfU)))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               + (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [3U][0U] 
                                              >> 0xfU));
    } else if (((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                >= (IData)(vlSelfRef.__PVT__sig_b_aligned))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [3U][0U] 
                                              >> 0xfU));
    } else {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_b_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_a_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [3U][1U] 
                                              >> 0xfU));
    }
    vlSelfRef.__PVT__exp_result = vlSelfRef.__PVT__exp_max;
    if ((0x4000U & (IData)(vlSelfRef.__PVT__sig_sum))) {
        vlSelfRef.__PVT__exp_result = (0x1fU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__exp_result)));
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 4U));
    } else {
        while ((((~ ((IData)(vlSelfRef.__PVT__sig_sum) 
                     >> 0xdU)) & (0U < (IData)(vlSelfRef.__PVT__exp_result))) 
                & (0U != (IData)(vlSelfRef.__PVT__sig_sum)))) {
            vlSelfRef.__PVT__sig_sum = (0x7fffU & VL_SHIFTL_III(15,15,32, (IData)(vlSelfRef.__PVT__sig_sum), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(vlSelfRef.__PVT__exp_result) 
                                            - (IData)(1U)));
        }
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 3U));
    }
    vlSelfRef.__PVT__guard = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                    >> 2U));
    vlSelfRef.__PVT__round_bit = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                        >> 1U));
    vlSelfRef.__PVT__sticky = (1U & (IData)(vlSelfRef.__PVT__sig_sum));
    if (((IData)(vlSelfRef.__PVT__guard) & (((IData)(vlSelfRef.__PVT__round_bit) 
                                             | (IData)(vlSelfRef.__PVT__sticky)) 
                                            | (IData)(vlSelfRef.__PVT__sig_result)))) {
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__sig_result)));
        if (((0x400U == (IData)(vlSelfRef.__PVT__sig_result)) 
             | (0U == (IData)(vlSelfRef.__PVT__sig_result)))) {
            vlSelfRef.__PVT__sig_result = (0x7ffU & 
                                           VL_SHIFTR_III(11,11,32, (IData)(vlSelfRef.__PVT__sig_result), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__exp_result)));
        }
    }
    vlSelfRef.__PVT__temp_result = (((0U == (IData)(vlSelfRef.__PVT__exp_result)) 
                                     | (0U == (IData)(vlSelfRef.__PVT__sig_sum)))
                                     ? 0U : (((IData)(vlSelfRef.__PVT__result_sign) 
                                              << 0xfU) 
                                             | (((IData)(vlSelfRef.__PVT__exp_result) 
                                                 << 0xaU) 
                                                | (0x3ffU 
                                                   & (IData)(vlSelfRef.__PVT__sig_result)))));
}

VL_INLINE_OPT void Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__0__KET____DOT__adder__0(Vtop_float16_adder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__0__KET____DOT__adder__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sig_a = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [0U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [0U][0U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [0U]
                                                  [0U])));
    vlSelfRef.__PVT__sig_b = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [1U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [0U][1U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [0U]
                                                  [1U])));
    if (((0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                   [0U][0U] >> 0xaU)) > (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [0U]
                                                  [1U] 
                                                  >> 0xaU)))) {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [0U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [0U]
                                                 [1U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_a_aligned = ((IData)(vlSelfRef.__PVT__sig_a) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_b_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_b));
        } else {
            vlSelfRef.__PVT__sig_b_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_b) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_b_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_b_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_b) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [0U][0U] 
                                             >> 0xaU));
    } else {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [1U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [0U]
                                                 [0U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_b_aligned = ((IData)(vlSelfRef.__PVT__sig_b) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_a_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_a));
        } else {
            vlSelfRef.__PVT__sig_a_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_a) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_a_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_a_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_a) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [0U][1U] 
                                             >> 0xaU));
    }
    if (((1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                [0U][0U] >> 0xfU)) == (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [0U][1U] 
                                             >> 0xfU)))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               + (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][0U] 
                                              >> 0xfU));
    } else if (((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                >= (IData)(vlSelfRef.__PVT__sig_b_aligned))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][0U] 
                                              >> 0xfU));
    } else {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_b_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_a_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][1U] 
                                              >> 0xfU));
    }
    vlSelfRef.__PVT__exp_result = vlSelfRef.__PVT__exp_max;
    if ((0x4000U & (IData)(vlSelfRef.__PVT__sig_sum))) {
        vlSelfRef.__PVT__exp_result = (0x1fU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__exp_result)));
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 4U));
    } else {
        while ((((~ ((IData)(vlSelfRef.__PVT__sig_sum) 
                     >> 0xdU)) & (0U < (IData)(vlSelfRef.__PVT__exp_result))) 
                & (0U != (IData)(vlSelfRef.__PVT__sig_sum)))) {
            vlSelfRef.__PVT__sig_sum = (0x7fffU & VL_SHIFTL_III(15,15,32, (IData)(vlSelfRef.__PVT__sig_sum), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(vlSelfRef.__PVT__exp_result) 
                                            - (IData)(1U)));
        }
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 3U));
    }
    vlSelfRef.__PVT__guard = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                    >> 2U));
    vlSelfRef.__PVT__round_bit = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                        >> 1U));
    vlSelfRef.__PVT__sticky = (1U & (IData)(vlSelfRef.__PVT__sig_sum));
    if (((IData)(vlSelfRef.__PVT__guard) & (((IData)(vlSelfRef.__PVT__round_bit) 
                                             | (IData)(vlSelfRef.__PVT__sticky)) 
                                            | (IData)(vlSelfRef.__PVT__sig_result)))) {
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__sig_result)));
        if (((0x400U == (IData)(vlSelfRef.__PVT__sig_result)) 
             | (0U == (IData)(vlSelfRef.__PVT__sig_result)))) {
            vlSelfRef.__PVT__sig_result = (0x7ffU & 
                                           VL_SHIFTR_III(11,11,32, (IData)(vlSelfRef.__PVT__sig_result), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__exp_result)));
        }
    }
    vlSelfRef.__PVT__temp_result = (((0U == (IData)(vlSelfRef.__PVT__exp_result)) 
                                     | (0U == (IData)(vlSelfRef.__PVT__sig_sum)))
                                     ? 0U : (((IData)(vlSelfRef.__PVT__result_sign) 
                                              << 0xfU) 
                                             | (((IData)(vlSelfRef.__PVT__exp_result) 
                                                 << 0xaU) 
                                                | (0x3ffU 
                                                   & (IData)(vlSelfRef.__PVT__sig_result)))));
}

VL_INLINE_OPT void Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__1__KET____DOT__adder__0(Vtop_float16_adder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__1__KET____DOT__adder__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sig_a = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [2U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [0U][2U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [0U]
                                                  [2U])));
    vlSelfRef.__PVT__sig_b = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [3U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [0U][3U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [0U]
                                                  [3U])));
    if (((0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                   [0U][2U] >> 0xaU)) > (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [0U]
                                                  [3U] 
                                                  >> 0xaU)))) {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [2U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [0U]
                                                 [3U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_a_aligned = ((IData)(vlSelfRef.__PVT__sig_a) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_b_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_b));
        } else {
            vlSelfRef.__PVT__sig_b_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_b) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_b_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_b_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_b) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [0U][2U] 
                                             >> 0xaU));
    } else {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [3U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [0U]
                                                 [2U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_b_aligned = ((IData)(vlSelfRef.__PVT__sig_b) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_a_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_a));
        } else {
            vlSelfRef.__PVT__sig_a_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_a) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_a_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_a_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_a) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [0U][3U] 
                                             >> 0xaU));
    }
    if (((1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                [0U][2U] >> 0xfU)) == (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [0U][3U] 
                                             >> 0xfU)))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               + (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][2U] 
                                              >> 0xfU));
    } else if (((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                >= (IData)(vlSelfRef.__PVT__sig_b_aligned))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][2U] 
                                              >> 0xfU));
    } else {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_b_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_a_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][3U] 
                                              >> 0xfU));
    }
    vlSelfRef.__PVT__exp_result = vlSelfRef.__PVT__exp_max;
    if ((0x4000U & (IData)(vlSelfRef.__PVT__sig_sum))) {
        vlSelfRef.__PVT__exp_result = (0x1fU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__exp_result)));
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 4U));
    } else {
        while ((((~ ((IData)(vlSelfRef.__PVT__sig_sum) 
                     >> 0xdU)) & (0U < (IData)(vlSelfRef.__PVT__exp_result))) 
                & (0U != (IData)(vlSelfRef.__PVT__sig_sum)))) {
            vlSelfRef.__PVT__sig_sum = (0x7fffU & VL_SHIFTL_III(15,15,32, (IData)(vlSelfRef.__PVT__sig_sum), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(vlSelfRef.__PVT__exp_result) 
                                            - (IData)(1U)));
        }
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 3U));
    }
    vlSelfRef.__PVT__guard = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                    >> 2U));
    vlSelfRef.__PVT__round_bit = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                        >> 1U));
    vlSelfRef.__PVT__sticky = (1U & (IData)(vlSelfRef.__PVT__sig_sum));
    if (((IData)(vlSelfRef.__PVT__guard) & (((IData)(vlSelfRef.__PVT__round_bit) 
                                             | (IData)(vlSelfRef.__PVT__sticky)) 
                                            | (IData)(vlSelfRef.__PVT__sig_result)))) {
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__sig_result)));
        if (((0x400U == (IData)(vlSelfRef.__PVT__sig_result)) 
             | (0U == (IData)(vlSelfRef.__PVT__sig_result)))) {
            vlSelfRef.__PVT__sig_result = (0x7ffU & 
                                           VL_SHIFTR_III(11,11,32, (IData)(vlSelfRef.__PVT__sig_result), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__exp_result)));
        }
    }
    vlSelfRef.__PVT__temp_result = (((0U == (IData)(vlSelfRef.__PVT__exp_result)) 
                                     | (0U == (IData)(vlSelfRef.__PVT__sig_sum)))
                                     ? 0U : (((IData)(vlSelfRef.__PVT__result_sign) 
                                              << 0xfU) 
                                             | (((IData)(vlSelfRef.__PVT__exp_result) 
                                                 << 0xaU) 
                                                | (0x3ffU 
                                                   & (IData)(vlSelfRef.__PVT__sig_result)))));
}

VL_INLINE_OPT void Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__2__KET____DOT__adder__0(Vtop_float16_adder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__2__KET____DOT__adder__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sig_a = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [4U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [0U][4U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [0U]
                                                  [4U])));
    vlSelfRef.__PVT__sig_b = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [5U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [0U][5U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [0U]
                                                  [5U])));
    if (((0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                   [0U][4U] >> 0xaU)) > (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [0U]
                                                  [5U] 
                                                  >> 0xaU)))) {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [4U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [0U]
                                                 [5U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_a_aligned = ((IData)(vlSelfRef.__PVT__sig_a) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_b_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_b));
        } else {
            vlSelfRef.__PVT__sig_b_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_b) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_b_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_b_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_b) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [0U][4U] 
                                             >> 0xaU));
    } else {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [5U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [0U]
                                                 [4U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_b_aligned = ((IData)(vlSelfRef.__PVT__sig_b) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_a_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_a));
        } else {
            vlSelfRef.__PVT__sig_a_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_a) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_a_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_a_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_a) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [0U][5U] 
                                             >> 0xaU));
    }
    if (((1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                [0U][4U] >> 0xfU)) == (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [0U][5U] 
                                             >> 0xfU)))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               + (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][4U] 
                                              >> 0xfU));
    } else if (((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                >= (IData)(vlSelfRef.__PVT__sig_b_aligned))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][4U] 
                                              >> 0xfU));
    } else {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_b_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_a_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][5U] 
                                              >> 0xfU));
    }
    vlSelfRef.__PVT__exp_result = vlSelfRef.__PVT__exp_max;
    if ((0x4000U & (IData)(vlSelfRef.__PVT__sig_sum))) {
        vlSelfRef.__PVT__exp_result = (0x1fU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__exp_result)));
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 4U));
    } else {
        while ((((~ ((IData)(vlSelfRef.__PVT__sig_sum) 
                     >> 0xdU)) & (0U < (IData)(vlSelfRef.__PVT__exp_result))) 
                & (0U != (IData)(vlSelfRef.__PVT__sig_sum)))) {
            vlSelfRef.__PVT__sig_sum = (0x7fffU & VL_SHIFTL_III(15,15,32, (IData)(vlSelfRef.__PVT__sig_sum), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(vlSelfRef.__PVT__exp_result) 
                                            - (IData)(1U)));
        }
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 3U));
    }
    vlSelfRef.__PVT__guard = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                    >> 2U));
    vlSelfRef.__PVT__round_bit = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                        >> 1U));
    vlSelfRef.__PVT__sticky = (1U & (IData)(vlSelfRef.__PVT__sig_sum));
    if (((IData)(vlSelfRef.__PVT__guard) & (((IData)(vlSelfRef.__PVT__round_bit) 
                                             | (IData)(vlSelfRef.__PVT__sticky)) 
                                            | (IData)(vlSelfRef.__PVT__sig_result)))) {
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__sig_result)));
        if (((0x400U == (IData)(vlSelfRef.__PVT__sig_result)) 
             | (0U == (IData)(vlSelfRef.__PVT__sig_result)))) {
            vlSelfRef.__PVT__sig_result = (0x7ffU & 
                                           VL_SHIFTR_III(11,11,32, (IData)(vlSelfRef.__PVT__sig_result), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__exp_result)));
        }
    }
    vlSelfRef.__PVT__temp_result = (((0U == (IData)(vlSelfRef.__PVT__exp_result)) 
                                     | (0U == (IData)(vlSelfRef.__PVT__sig_sum)))
                                     ? 0U : (((IData)(vlSelfRef.__PVT__result_sign) 
                                              << 0xfU) 
                                             | (((IData)(vlSelfRef.__PVT__exp_result) 
                                                 << 0xaU) 
                                                | (0x3ffU 
                                                   & (IData)(vlSelfRef.__PVT__sig_result)))));
}

VL_INLINE_OPT void Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__3__KET____DOT__adder__0(Vtop_float16_adder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__3__KET____DOT__adder__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sig_a = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [6U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [0U][6U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [0U]
                                                  [6U])));
    vlSelfRef.__PVT__sig_b = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [7U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [0U][7U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [0U]
                                                  [7U])));
    if (((0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                   [0U][6U] >> 0xaU)) > (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [0U]
                                                  [7U] 
                                                  >> 0xaU)))) {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [6U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [0U]
                                                 [7U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_a_aligned = ((IData)(vlSelfRef.__PVT__sig_a) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_b_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_b));
        } else {
            vlSelfRef.__PVT__sig_b_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_b) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_b_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_b_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_b) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [0U][6U] 
                                             >> 0xaU));
    } else {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [7U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [0U]
                                                 [6U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_b_aligned = ((IData)(vlSelfRef.__PVT__sig_b) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_a_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_a));
        } else {
            vlSelfRef.__PVT__sig_a_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_a) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_a_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_a_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_a) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [0U][7U] 
                                             >> 0xaU));
    }
    if (((1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                [0U][6U] >> 0xfU)) == (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [0U][7U] 
                                             >> 0xfU)))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               + (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][6U] 
                                              >> 0xfU));
    } else if (((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                >= (IData)(vlSelfRef.__PVT__sig_b_aligned))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][6U] 
                                              >> 0xfU));
    } else {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_b_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_a_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][7U] 
                                              >> 0xfU));
    }
    vlSelfRef.__PVT__exp_result = vlSelfRef.__PVT__exp_max;
    if ((0x4000U & (IData)(vlSelfRef.__PVT__sig_sum))) {
        vlSelfRef.__PVT__exp_result = (0x1fU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__exp_result)));
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 4U));
    } else {
        while ((((~ ((IData)(vlSelfRef.__PVT__sig_sum) 
                     >> 0xdU)) & (0U < (IData)(vlSelfRef.__PVT__exp_result))) 
                & (0U != (IData)(vlSelfRef.__PVT__sig_sum)))) {
            vlSelfRef.__PVT__sig_sum = (0x7fffU & VL_SHIFTL_III(15,15,32, (IData)(vlSelfRef.__PVT__sig_sum), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(vlSelfRef.__PVT__exp_result) 
                                            - (IData)(1U)));
        }
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 3U));
    }
    vlSelfRef.__PVT__guard = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                    >> 2U));
    vlSelfRef.__PVT__round_bit = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                        >> 1U));
    vlSelfRef.__PVT__sticky = (1U & (IData)(vlSelfRef.__PVT__sig_sum));
    if (((IData)(vlSelfRef.__PVT__guard) & (((IData)(vlSelfRef.__PVT__round_bit) 
                                             | (IData)(vlSelfRef.__PVT__sticky)) 
                                            | (IData)(vlSelfRef.__PVT__sig_result)))) {
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__sig_result)));
        if (((0x400U == (IData)(vlSelfRef.__PVT__sig_result)) 
             | (0U == (IData)(vlSelfRef.__PVT__sig_result)))) {
            vlSelfRef.__PVT__sig_result = (0x7ffU & 
                                           VL_SHIFTR_III(11,11,32, (IData)(vlSelfRef.__PVT__sig_result), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__exp_result)));
        }
    }
    vlSelfRef.__PVT__temp_result = (((0U == (IData)(vlSelfRef.__PVT__exp_result)) 
                                     | (0U == (IData)(vlSelfRef.__PVT__sig_sum)))
                                     ? 0U : (((IData)(vlSelfRef.__PVT__result_sign) 
                                              << 0xfU) 
                                             | (((IData)(vlSelfRef.__PVT__exp_result) 
                                                 << 0xaU) 
                                                | (0x3ffU 
                                                   & (IData)(vlSelfRef.__PVT__sig_result)))));
}

VL_INLINE_OPT void Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__4__KET____DOT__adder__0(Vtop_float16_adder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__4__KET____DOT__adder__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sig_a = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [8U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [0U][8U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [0U]
                                                  [8U])));
    vlSelfRef.__PVT__sig_b = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [9U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [0U][9U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [0U]
                                                  [9U])));
    if (((0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                   [0U][8U] >> 0xaU)) > (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [0U]
                                                  [9U] 
                                                  >> 0xaU)))) {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [8U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [0U]
                                                 [9U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_a_aligned = ((IData)(vlSelfRef.__PVT__sig_a) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_b_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_b));
        } else {
            vlSelfRef.__PVT__sig_b_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_b) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_b_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_b_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_b) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [0U][8U] 
                                             >> 0xaU));
    } else {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [9U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [0U]
                                                 [8U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_b_aligned = ((IData)(vlSelfRef.__PVT__sig_b) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_a_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_a));
        } else {
            vlSelfRef.__PVT__sig_a_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_a) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_a_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_a_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_a) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [0U][9U] 
                                             >> 0xaU));
    }
    if (((1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                [0U][8U] >> 0xfU)) == (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [0U][9U] 
                                             >> 0xfU)))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               + (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][8U] 
                                              >> 0xfU));
    } else if (((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                >= (IData)(vlSelfRef.__PVT__sig_b_aligned))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][8U] 
                                              >> 0xfU));
    } else {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_b_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_a_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][9U] 
                                              >> 0xfU));
    }
    vlSelfRef.__PVT__exp_result = vlSelfRef.__PVT__exp_max;
    if ((0x4000U & (IData)(vlSelfRef.__PVT__sig_sum))) {
        vlSelfRef.__PVT__exp_result = (0x1fU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__exp_result)));
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 4U));
    } else {
        while ((((~ ((IData)(vlSelfRef.__PVT__sig_sum) 
                     >> 0xdU)) & (0U < (IData)(vlSelfRef.__PVT__exp_result))) 
                & (0U != (IData)(vlSelfRef.__PVT__sig_sum)))) {
            vlSelfRef.__PVT__sig_sum = (0x7fffU & VL_SHIFTL_III(15,15,32, (IData)(vlSelfRef.__PVT__sig_sum), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(vlSelfRef.__PVT__exp_result) 
                                            - (IData)(1U)));
        }
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 3U));
    }
    vlSelfRef.__PVT__guard = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                    >> 2U));
    vlSelfRef.__PVT__round_bit = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                        >> 1U));
    vlSelfRef.__PVT__sticky = (1U & (IData)(vlSelfRef.__PVT__sig_sum));
    if (((IData)(vlSelfRef.__PVT__guard) & (((IData)(vlSelfRef.__PVT__round_bit) 
                                             | (IData)(vlSelfRef.__PVT__sticky)) 
                                            | (IData)(vlSelfRef.__PVT__sig_result)))) {
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__sig_result)));
        if (((0x400U == (IData)(vlSelfRef.__PVT__sig_result)) 
             | (0U == (IData)(vlSelfRef.__PVT__sig_result)))) {
            vlSelfRef.__PVT__sig_result = (0x7ffU & 
                                           VL_SHIFTR_III(11,11,32, (IData)(vlSelfRef.__PVT__sig_result), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__exp_result)));
        }
    }
    vlSelfRef.__PVT__temp_result = (((0U == (IData)(vlSelfRef.__PVT__exp_result)) 
                                     | (0U == (IData)(vlSelfRef.__PVT__sig_sum)))
                                     ? 0U : (((IData)(vlSelfRef.__PVT__result_sign) 
                                              << 0xfU) 
                                             | (((IData)(vlSelfRef.__PVT__exp_result) 
                                                 << 0xaU) 
                                                | (0x3ffU 
                                                   & (IData)(vlSelfRef.__PVT__sig_result)))));
}

VL_INLINE_OPT void Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__5__KET____DOT__adder__0(Vtop_float16_adder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__5__KET____DOT__adder__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sig_a = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [0xaU] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [0U][0xaU]) : (0x400U 
                                                 | (0x3ffU 
                                                    & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                    [0U]
                                                    [0xaU])));
    vlSelfRef.__PVT__sig_b = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [0xbU] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [0U][0xbU]) : (0x400U 
                                                 | (0x3ffU 
                                                    & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                    [0U]
                                                    [0xbU])));
    if (((0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                   [0U][0xaU] >> 0xaU)) > (0x1fU & 
                                           (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                            [0U][0xbU] 
                                            >> 0xaU)))) {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [0xaU] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [0U]
                                                 [0xbU] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_a_aligned = ((IData)(vlSelfRef.__PVT__sig_a) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_b_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_b));
        } else {
            vlSelfRef.__PVT__sig_b_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_b) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_b_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_b_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_b) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [0U][0xaU] 
                                             >> 0xaU));
    } else {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [0xbU] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [0U]
                                                 [0xaU] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_b_aligned = ((IData)(vlSelfRef.__PVT__sig_b) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_a_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_a));
        } else {
            vlSelfRef.__PVT__sig_a_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_a) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_a_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_a_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_a) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [0U][0xbU] 
                                             >> 0xaU));
    }
    if (((1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                [0U][0xaU] >> 0xfU)) == (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [0xbU] 
                                               >> 0xfU)))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               + (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][0xaU] 
                                              >> 0xfU));
    } else if (((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                >= (IData)(vlSelfRef.__PVT__sig_b_aligned))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][0xaU] 
                                              >> 0xfU));
    } else {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_b_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_a_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][0xbU] 
                                              >> 0xfU));
    }
    vlSelfRef.__PVT__exp_result = vlSelfRef.__PVT__exp_max;
    if ((0x4000U & (IData)(vlSelfRef.__PVT__sig_sum))) {
        vlSelfRef.__PVT__exp_result = (0x1fU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__exp_result)));
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 4U));
    } else {
        while ((((~ ((IData)(vlSelfRef.__PVT__sig_sum) 
                     >> 0xdU)) & (0U < (IData)(vlSelfRef.__PVT__exp_result))) 
                & (0U != (IData)(vlSelfRef.__PVT__sig_sum)))) {
            vlSelfRef.__PVT__sig_sum = (0x7fffU & VL_SHIFTL_III(15,15,32, (IData)(vlSelfRef.__PVT__sig_sum), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(vlSelfRef.__PVT__exp_result) 
                                            - (IData)(1U)));
        }
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 3U));
    }
    vlSelfRef.__PVT__guard = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                    >> 2U));
    vlSelfRef.__PVT__round_bit = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                        >> 1U));
    vlSelfRef.__PVT__sticky = (1U & (IData)(vlSelfRef.__PVT__sig_sum));
    if (((IData)(vlSelfRef.__PVT__guard) & (((IData)(vlSelfRef.__PVT__round_bit) 
                                             | (IData)(vlSelfRef.__PVT__sticky)) 
                                            | (IData)(vlSelfRef.__PVT__sig_result)))) {
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__sig_result)));
        if (((0x400U == (IData)(vlSelfRef.__PVT__sig_result)) 
             | (0U == (IData)(vlSelfRef.__PVT__sig_result)))) {
            vlSelfRef.__PVT__sig_result = (0x7ffU & 
                                           VL_SHIFTR_III(11,11,32, (IData)(vlSelfRef.__PVT__sig_result), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__exp_result)));
        }
    }
    vlSelfRef.__PVT__temp_result = (((0U == (IData)(vlSelfRef.__PVT__exp_result)) 
                                     | (0U == (IData)(vlSelfRef.__PVT__sig_sum)))
                                     ? 0U : (((IData)(vlSelfRef.__PVT__result_sign) 
                                              << 0xfU) 
                                             | (((IData)(vlSelfRef.__PVT__exp_result) 
                                                 << 0xaU) 
                                                | (0x3ffU 
                                                   & (IData)(vlSelfRef.__PVT__sig_result)))));
}

VL_INLINE_OPT void Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__6__KET____DOT__adder__0(Vtop_float16_adder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__6__KET____DOT__adder__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sig_a = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [0xcU] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [0U][0xcU]) : (0x400U 
                                                 | (0x3ffU 
                                                    & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                    [0U]
                                                    [0xcU])));
    vlSelfRef.__PVT__sig_b = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [0xdU] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [0U][0xdU]) : (0x400U 
                                                 | (0x3ffU 
                                                    & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                    [0U]
                                                    [0xdU])));
    if (((0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                   [0U][0xcU] >> 0xaU)) > (0x1fU & 
                                           (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                            [0U][0xdU] 
                                            >> 0xaU)))) {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [0xcU] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [0U]
                                                 [0xdU] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_a_aligned = ((IData)(vlSelfRef.__PVT__sig_a) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_b_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_b));
        } else {
            vlSelfRef.__PVT__sig_b_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_b) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_b_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_b_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_b) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [0U][0xcU] 
                                             >> 0xaU));
    } else {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [0xdU] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [0U]
                                                 [0xcU] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_b_aligned = ((IData)(vlSelfRef.__PVT__sig_b) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_a_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_a));
        } else {
            vlSelfRef.__PVT__sig_a_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_a) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_a_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_a_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_a) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [0U][0xdU] 
                                             >> 0xaU));
    }
    if (((1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                [0U][0xcU] >> 0xfU)) == (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [0xdU] 
                                               >> 0xfU)))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               + (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][0xcU] 
                                              >> 0xfU));
    } else if (((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                >= (IData)(vlSelfRef.__PVT__sig_b_aligned))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][0xcU] 
                                              >> 0xfU));
    } else {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_b_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_a_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][0xdU] 
                                              >> 0xfU));
    }
    vlSelfRef.__PVT__exp_result = vlSelfRef.__PVT__exp_max;
    if ((0x4000U & (IData)(vlSelfRef.__PVT__sig_sum))) {
        vlSelfRef.__PVT__exp_result = (0x1fU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__exp_result)));
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 4U));
    } else {
        while ((((~ ((IData)(vlSelfRef.__PVT__sig_sum) 
                     >> 0xdU)) & (0U < (IData)(vlSelfRef.__PVT__exp_result))) 
                & (0U != (IData)(vlSelfRef.__PVT__sig_sum)))) {
            vlSelfRef.__PVT__sig_sum = (0x7fffU & VL_SHIFTL_III(15,15,32, (IData)(vlSelfRef.__PVT__sig_sum), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(vlSelfRef.__PVT__exp_result) 
                                            - (IData)(1U)));
        }
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 3U));
    }
    vlSelfRef.__PVT__guard = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                    >> 2U));
    vlSelfRef.__PVT__round_bit = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                        >> 1U));
    vlSelfRef.__PVT__sticky = (1U & (IData)(vlSelfRef.__PVT__sig_sum));
    if (((IData)(vlSelfRef.__PVT__guard) & (((IData)(vlSelfRef.__PVT__round_bit) 
                                             | (IData)(vlSelfRef.__PVT__sticky)) 
                                            | (IData)(vlSelfRef.__PVT__sig_result)))) {
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__sig_result)));
        if (((0x400U == (IData)(vlSelfRef.__PVT__sig_result)) 
             | (0U == (IData)(vlSelfRef.__PVT__sig_result)))) {
            vlSelfRef.__PVT__sig_result = (0x7ffU & 
                                           VL_SHIFTR_III(11,11,32, (IData)(vlSelfRef.__PVT__sig_result), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__exp_result)));
        }
    }
    vlSelfRef.__PVT__temp_result = (((0U == (IData)(vlSelfRef.__PVT__exp_result)) 
                                     | (0U == (IData)(vlSelfRef.__PVT__sig_sum)))
                                     ? 0U : (((IData)(vlSelfRef.__PVT__result_sign) 
                                              << 0xfU) 
                                             | (((IData)(vlSelfRef.__PVT__exp_result) 
                                                 << 0xaU) 
                                                | (0x3ffU 
                                                   & (IData)(vlSelfRef.__PVT__sig_result)))));
}

VL_INLINE_OPT void Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__7__KET____DOT__adder__0(Vtop_float16_adder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__7__KET____DOT__adder__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sig_a = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [0xeU] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [0U][0xeU]) : (0x400U 
                                                 | (0x3ffU 
                                                    & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                    [0U]
                                                    [0xeU])));
    vlSelfRef.__PVT__sig_b = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [0xfU] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [0U][0xfU]) : (0x400U 
                                                 | (0x3ffU 
                                                    & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                    [0U]
                                                    [0xfU])));
    if (((0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                   [0U][0xeU] >> 0xaU)) > (0x1fU & 
                                           (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                            [0U][0xfU] 
                                            >> 0xaU)))) {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [0xeU] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [0U]
                                                 [0xfU] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_a_aligned = ((IData)(vlSelfRef.__PVT__sig_a) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_b_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_b));
        } else {
            vlSelfRef.__PVT__sig_b_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_b) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_b_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_b_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_b) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [0U][0xeU] 
                                             >> 0xaU));
    } else {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [0xfU] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [0U]
                                                 [0xeU] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_b_aligned = ((IData)(vlSelfRef.__PVT__sig_b) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_a_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_a));
        } else {
            vlSelfRef.__PVT__sig_a_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_a) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_a_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_a_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_a) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [0U][0xfU] 
                                             >> 0xaU));
    }
    if (((1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                [0U][0xeU] >> 0xfU)) == (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [0xfU] 
                                               >> 0xfU)))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               + (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][0xeU] 
                                              >> 0xfU));
    } else if (((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                >= (IData)(vlSelfRef.__PVT__sig_b_aligned))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][0xeU] 
                                              >> 0xfU));
    } else {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_b_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_a_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][0xfU] 
                                              >> 0xfU));
    }
    vlSelfRef.__PVT__exp_result = vlSelfRef.__PVT__exp_max;
    if ((0x4000U & (IData)(vlSelfRef.__PVT__sig_sum))) {
        vlSelfRef.__PVT__exp_result = (0x1fU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__exp_result)));
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 4U));
    } else {
        while ((((~ ((IData)(vlSelfRef.__PVT__sig_sum) 
                     >> 0xdU)) & (0U < (IData)(vlSelfRef.__PVT__exp_result))) 
                & (0U != (IData)(vlSelfRef.__PVT__sig_sum)))) {
            vlSelfRef.__PVT__sig_sum = (0x7fffU & VL_SHIFTL_III(15,15,32, (IData)(vlSelfRef.__PVT__sig_sum), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(vlSelfRef.__PVT__exp_result) 
                                            - (IData)(1U)));
        }
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 3U));
    }
    vlSelfRef.__PVT__guard = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                    >> 2U));
    vlSelfRef.__PVT__round_bit = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                        >> 1U));
    vlSelfRef.__PVT__sticky = (1U & (IData)(vlSelfRef.__PVT__sig_sum));
    if (((IData)(vlSelfRef.__PVT__guard) & (((IData)(vlSelfRef.__PVT__round_bit) 
                                             | (IData)(vlSelfRef.__PVT__sticky)) 
                                            | (IData)(vlSelfRef.__PVT__sig_result)))) {
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__sig_result)));
        if (((0x400U == (IData)(vlSelfRef.__PVT__sig_result)) 
             | (0U == (IData)(vlSelfRef.__PVT__sig_result)))) {
            vlSelfRef.__PVT__sig_result = (0x7ffU & 
                                           VL_SHIFTR_III(11,11,32, (IData)(vlSelfRef.__PVT__sig_result), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__exp_result)));
        }
    }
    vlSelfRef.__PVT__temp_result = (((0U == (IData)(vlSelfRef.__PVT__exp_result)) 
                                     | (0U == (IData)(vlSelfRef.__PVT__sig_sum)))
                                     ? 0U : (((IData)(vlSelfRef.__PVT__result_sign) 
                                              << 0xfU) 
                                             | (((IData)(vlSelfRef.__PVT__exp_result) 
                                                 << 0xaU) 
                                                | (0x3ffU 
                                                   & (IData)(vlSelfRef.__PVT__sig_result)))));
}

VL_INLINE_OPT void Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__1__KET____DOT__gen_adder__BRA__0__KET____DOT__adder__0(Vtop_float16_adder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__1__KET____DOT__gen_adder__BRA__0__KET____DOT__adder__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sig_a = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [1U]
                                               [0U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [1U][0U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [1U]
                                                  [0U])));
    vlSelfRef.__PVT__sig_b = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [1U]
                                               [1U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [1U][1U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [1U]
                                                  [1U])));
    if (((0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                   [1U][0U] >> 0xaU)) > (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [1U]
                                                  [1U] 
                                                  >> 0xaU)))) {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [1U]
                                               [0U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [1U]
                                                 [1U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_a_aligned = ((IData)(vlSelfRef.__PVT__sig_a) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_b_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_b));
        } else {
            vlSelfRef.__PVT__sig_b_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_b) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_b_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_b_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_b) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [1U][0U] 
                                             >> 0xaU));
    } else {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [1U]
                                               [1U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [1U]
                                                 [0U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_b_aligned = ((IData)(vlSelfRef.__PVT__sig_b) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_a_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_a));
        } else {
            vlSelfRef.__PVT__sig_a_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_a) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_a_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_a_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_a) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [1U][1U] 
                                             >> 0xaU));
    }
    if (((1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                [1U][0U] >> 0xfU)) == (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [1U][1U] 
                                             >> 0xfU)))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               + (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [1U][0U] 
                                              >> 0xfU));
    } else if (((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                >= (IData)(vlSelfRef.__PVT__sig_b_aligned))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [1U][0U] 
                                              >> 0xfU));
    } else {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_b_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_a_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [1U][1U] 
                                              >> 0xfU));
    }
    vlSelfRef.__PVT__exp_result = vlSelfRef.__PVT__exp_max;
    if ((0x4000U & (IData)(vlSelfRef.__PVT__sig_sum))) {
        vlSelfRef.__PVT__exp_result = (0x1fU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__exp_result)));
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 4U));
    } else {
        while ((((~ ((IData)(vlSelfRef.__PVT__sig_sum) 
                     >> 0xdU)) & (0U < (IData)(vlSelfRef.__PVT__exp_result))) 
                & (0U != (IData)(vlSelfRef.__PVT__sig_sum)))) {
            vlSelfRef.__PVT__sig_sum = (0x7fffU & VL_SHIFTL_III(15,15,32, (IData)(vlSelfRef.__PVT__sig_sum), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(vlSelfRef.__PVT__exp_result) 
                                            - (IData)(1U)));
        }
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 3U));
    }
    vlSelfRef.__PVT__guard = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                    >> 2U));
    vlSelfRef.__PVT__round_bit = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                        >> 1U));
    vlSelfRef.__PVT__sticky = (1U & (IData)(vlSelfRef.__PVT__sig_sum));
    if (((IData)(vlSelfRef.__PVT__guard) & (((IData)(vlSelfRef.__PVT__round_bit) 
                                             | (IData)(vlSelfRef.__PVT__sticky)) 
                                            | (IData)(vlSelfRef.__PVT__sig_result)))) {
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__sig_result)));
        if (((0x400U == (IData)(vlSelfRef.__PVT__sig_result)) 
             | (0U == (IData)(vlSelfRef.__PVT__sig_result)))) {
            vlSelfRef.__PVT__sig_result = (0x7ffU & 
                                           VL_SHIFTR_III(11,11,32, (IData)(vlSelfRef.__PVT__sig_result), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__exp_result)));
        }
    }
    vlSelfRef.__PVT__temp_result = (((0U == (IData)(vlSelfRef.__PVT__exp_result)) 
                                     | (0U == (IData)(vlSelfRef.__PVT__sig_sum)))
                                     ? 0U : (((IData)(vlSelfRef.__PVT__result_sign) 
                                              << 0xfU) 
                                             | (((IData)(vlSelfRef.__PVT__exp_result) 
                                                 << 0xaU) 
                                                | (0x3ffU 
                                                   & (IData)(vlSelfRef.__PVT__sig_result)))));
}

VL_INLINE_OPT void Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__1__KET____DOT__gen_adder__BRA__1__KET____DOT__adder__0(Vtop_float16_adder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__1__KET____DOT__gen_adder__BRA__1__KET____DOT__adder__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sig_a = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [1U]
                                               [2U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [1U][2U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [1U]
                                                  [2U])));
    vlSelfRef.__PVT__sig_b = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [1U]
                                               [3U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [1U][3U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [1U]
                                                  [3U])));
    if (((0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                   [1U][2U] >> 0xaU)) > (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [1U]
                                                  [3U] 
                                                  >> 0xaU)))) {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [1U]
                                               [2U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [1U]
                                                 [3U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_a_aligned = ((IData)(vlSelfRef.__PVT__sig_a) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_b_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_b));
        } else {
            vlSelfRef.__PVT__sig_b_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_b) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_b_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_b_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_b) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [1U][2U] 
                                             >> 0xaU));
    } else {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [1U]
                                               [3U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [1U]
                                                 [2U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_b_aligned = ((IData)(vlSelfRef.__PVT__sig_b) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_a_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_a));
        } else {
            vlSelfRef.__PVT__sig_a_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_a) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_a_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_a_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_a) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [1U][3U] 
                                             >> 0xaU));
    }
    if (((1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                [1U][2U] >> 0xfU)) == (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [1U][3U] 
                                             >> 0xfU)))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               + (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [1U][2U] 
                                              >> 0xfU));
    } else if (((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                >= (IData)(vlSelfRef.__PVT__sig_b_aligned))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [1U][2U] 
                                              >> 0xfU));
    } else {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_b_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_a_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [1U][3U] 
                                              >> 0xfU));
    }
    vlSelfRef.__PVT__exp_result = vlSelfRef.__PVT__exp_max;
    if ((0x4000U & (IData)(vlSelfRef.__PVT__sig_sum))) {
        vlSelfRef.__PVT__exp_result = (0x1fU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__exp_result)));
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 4U));
    } else {
        while ((((~ ((IData)(vlSelfRef.__PVT__sig_sum) 
                     >> 0xdU)) & (0U < (IData)(vlSelfRef.__PVT__exp_result))) 
                & (0U != (IData)(vlSelfRef.__PVT__sig_sum)))) {
            vlSelfRef.__PVT__sig_sum = (0x7fffU & VL_SHIFTL_III(15,15,32, (IData)(vlSelfRef.__PVT__sig_sum), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(vlSelfRef.__PVT__exp_result) 
                                            - (IData)(1U)));
        }
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 3U));
    }
    vlSelfRef.__PVT__guard = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                    >> 2U));
    vlSelfRef.__PVT__round_bit = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                        >> 1U));
    vlSelfRef.__PVT__sticky = (1U & (IData)(vlSelfRef.__PVT__sig_sum));
    if (((IData)(vlSelfRef.__PVT__guard) & (((IData)(vlSelfRef.__PVT__round_bit) 
                                             | (IData)(vlSelfRef.__PVT__sticky)) 
                                            | (IData)(vlSelfRef.__PVT__sig_result)))) {
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__sig_result)));
        if (((0x400U == (IData)(vlSelfRef.__PVT__sig_result)) 
             | (0U == (IData)(vlSelfRef.__PVT__sig_result)))) {
            vlSelfRef.__PVT__sig_result = (0x7ffU & 
                                           VL_SHIFTR_III(11,11,32, (IData)(vlSelfRef.__PVT__sig_result), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__exp_result)));
        }
    }
    vlSelfRef.__PVT__temp_result = (((0U == (IData)(vlSelfRef.__PVT__exp_result)) 
                                     | (0U == (IData)(vlSelfRef.__PVT__sig_sum)))
                                     ? 0U : (((IData)(vlSelfRef.__PVT__result_sign) 
                                              << 0xfU) 
                                             | (((IData)(vlSelfRef.__PVT__exp_result) 
                                                 << 0xaU) 
                                                | (0x3ffU 
                                                   & (IData)(vlSelfRef.__PVT__sig_result)))));
}

VL_INLINE_OPT void Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__1__KET____DOT__gen_adder__BRA__2__KET____DOT__adder__0(Vtop_float16_adder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__1__KET____DOT__gen_adder__BRA__2__KET____DOT__adder__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sig_a = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [1U]
                                               [4U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [1U][4U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [1U]
                                                  [4U])));
    vlSelfRef.__PVT__sig_b = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [1U]
                                               [5U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [1U][5U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [1U]
                                                  [5U])));
    if (((0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                   [1U][4U] >> 0xaU)) > (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [1U]
                                                  [5U] 
                                                  >> 0xaU)))) {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [1U]
                                               [4U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [1U]
                                                 [5U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_a_aligned = ((IData)(vlSelfRef.__PVT__sig_a) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_b_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_b));
        } else {
            vlSelfRef.__PVT__sig_b_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_b) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_b_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_b_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_b) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [1U][4U] 
                                             >> 0xaU));
    } else {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [1U]
                                               [5U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [1U]
                                                 [4U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_b_aligned = ((IData)(vlSelfRef.__PVT__sig_b) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_a_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_a));
        } else {
            vlSelfRef.__PVT__sig_a_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_a) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_a_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_a_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_a) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [1U][5U] 
                                             >> 0xaU));
    }
    if (((1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                [1U][4U] >> 0xfU)) == (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [1U][5U] 
                                             >> 0xfU)))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               + (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [1U][4U] 
                                              >> 0xfU));
    } else if (((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                >= (IData)(vlSelfRef.__PVT__sig_b_aligned))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [1U][4U] 
                                              >> 0xfU));
    } else {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_b_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_a_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [1U][5U] 
                                              >> 0xfU));
    }
    vlSelfRef.__PVT__exp_result = vlSelfRef.__PVT__exp_max;
    if ((0x4000U & (IData)(vlSelfRef.__PVT__sig_sum))) {
        vlSelfRef.__PVT__exp_result = (0x1fU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__exp_result)));
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 4U));
    } else {
        while ((((~ ((IData)(vlSelfRef.__PVT__sig_sum) 
                     >> 0xdU)) & (0U < (IData)(vlSelfRef.__PVT__exp_result))) 
                & (0U != (IData)(vlSelfRef.__PVT__sig_sum)))) {
            vlSelfRef.__PVT__sig_sum = (0x7fffU & VL_SHIFTL_III(15,15,32, (IData)(vlSelfRef.__PVT__sig_sum), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(vlSelfRef.__PVT__exp_result) 
                                            - (IData)(1U)));
        }
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 3U));
    }
    vlSelfRef.__PVT__guard = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                    >> 2U));
    vlSelfRef.__PVT__round_bit = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                        >> 1U));
    vlSelfRef.__PVT__sticky = (1U & (IData)(vlSelfRef.__PVT__sig_sum));
    if (((IData)(vlSelfRef.__PVT__guard) & (((IData)(vlSelfRef.__PVT__round_bit) 
                                             | (IData)(vlSelfRef.__PVT__sticky)) 
                                            | (IData)(vlSelfRef.__PVT__sig_result)))) {
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__sig_result)));
        if (((0x400U == (IData)(vlSelfRef.__PVT__sig_result)) 
             | (0U == (IData)(vlSelfRef.__PVT__sig_result)))) {
            vlSelfRef.__PVT__sig_result = (0x7ffU & 
                                           VL_SHIFTR_III(11,11,32, (IData)(vlSelfRef.__PVT__sig_result), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__exp_result)));
        }
    }
    vlSelfRef.__PVT__temp_result = (((0U == (IData)(vlSelfRef.__PVT__exp_result)) 
                                     | (0U == (IData)(vlSelfRef.__PVT__sig_sum)))
                                     ? 0U : (((IData)(vlSelfRef.__PVT__result_sign) 
                                              << 0xfU) 
                                             | (((IData)(vlSelfRef.__PVT__exp_result) 
                                                 << 0xaU) 
                                                | (0x3ffU 
                                                   & (IData)(vlSelfRef.__PVT__sig_result)))));
}

VL_INLINE_OPT void Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__1__KET____DOT__gen_adder__BRA__3__KET____DOT__adder__0(Vtop_float16_adder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__1__KET____DOT__gen_adder__BRA__3__KET____DOT__adder__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sig_a = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [1U]
                                               [6U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [1U][6U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [1U]
                                                  [6U])));
    vlSelfRef.__PVT__sig_b = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [1U]
                                               [7U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [1U][7U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [1U]
                                                  [7U])));
    if (((0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                   [1U][6U] >> 0xaU)) > (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [1U]
                                                  [7U] 
                                                  >> 0xaU)))) {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [1U]
                                               [6U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [1U]
                                                 [7U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_a_aligned = ((IData)(vlSelfRef.__PVT__sig_a) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_b_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_b));
        } else {
            vlSelfRef.__PVT__sig_b_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_b) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_b_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_b_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_b) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [1U][6U] 
                                             >> 0xaU));
    } else {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [1U]
                                               [7U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [1U]
                                                 [6U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_b_aligned = ((IData)(vlSelfRef.__PVT__sig_b) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_a_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_a));
        } else {
            vlSelfRef.__PVT__sig_a_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_a) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_a_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_a_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_a) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [1U][7U] 
                                             >> 0xaU));
    }
    if (((1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                [1U][6U] >> 0xfU)) == (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [1U][7U] 
                                             >> 0xfU)))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               + (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [1U][6U] 
                                              >> 0xfU));
    } else if (((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                >= (IData)(vlSelfRef.__PVT__sig_b_aligned))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [1U][6U] 
                                              >> 0xfU));
    } else {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_b_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_a_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [1U][7U] 
                                              >> 0xfU));
    }
    vlSelfRef.__PVT__exp_result = vlSelfRef.__PVT__exp_max;
    if ((0x4000U & (IData)(vlSelfRef.__PVT__sig_sum))) {
        vlSelfRef.__PVT__exp_result = (0x1fU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__exp_result)));
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 4U));
    } else {
        while ((((~ ((IData)(vlSelfRef.__PVT__sig_sum) 
                     >> 0xdU)) & (0U < (IData)(vlSelfRef.__PVT__exp_result))) 
                & (0U != (IData)(vlSelfRef.__PVT__sig_sum)))) {
            vlSelfRef.__PVT__sig_sum = (0x7fffU & VL_SHIFTL_III(15,15,32, (IData)(vlSelfRef.__PVT__sig_sum), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(vlSelfRef.__PVT__exp_result) 
                                            - (IData)(1U)));
        }
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 3U));
    }
    vlSelfRef.__PVT__guard = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                    >> 2U));
    vlSelfRef.__PVT__round_bit = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                        >> 1U));
    vlSelfRef.__PVT__sticky = (1U & (IData)(vlSelfRef.__PVT__sig_sum));
    if (((IData)(vlSelfRef.__PVT__guard) & (((IData)(vlSelfRef.__PVT__round_bit) 
                                             | (IData)(vlSelfRef.__PVT__sticky)) 
                                            | (IData)(vlSelfRef.__PVT__sig_result)))) {
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__sig_result)));
        if (((0x400U == (IData)(vlSelfRef.__PVT__sig_result)) 
             | (0U == (IData)(vlSelfRef.__PVT__sig_result)))) {
            vlSelfRef.__PVT__sig_result = (0x7ffU & 
                                           VL_SHIFTR_III(11,11,32, (IData)(vlSelfRef.__PVT__sig_result), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__exp_result)));
        }
    }
    vlSelfRef.__PVT__temp_result = (((0U == (IData)(vlSelfRef.__PVT__exp_result)) 
                                     | (0U == (IData)(vlSelfRef.__PVT__sig_sum)))
                                     ? 0U : (((IData)(vlSelfRef.__PVT__result_sign) 
                                              << 0xfU) 
                                             | (((IData)(vlSelfRef.__PVT__exp_result) 
                                                 << 0xaU) 
                                                | (0x3ffU 
                                                   & (IData)(vlSelfRef.__PVT__sig_result)))));
}

VL_INLINE_OPT void Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__2__KET____DOT__gen_adder__BRA__0__KET____DOT__adder__0(Vtop_float16_adder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__2__KET____DOT__gen_adder__BRA__0__KET____DOT__adder__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sig_a = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [2U]
                                               [0U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [2U][0U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [2U]
                                                  [0U])));
    vlSelfRef.__PVT__sig_b = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [2U]
                                               [1U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [2U][1U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [2U]
                                                  [1U])));
    if (((0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                   [2U][0U] >> 0xaU)) > (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [2U]
                                                  [1U] 
                                                  >> 0xaU)))) {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [2U]
                                               [0U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [2U]
                                                 [1U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_a_aligned = ((IData)(vlSelfRef.__PVT__sig_a) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_b_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_b));
        } else {
            vlSelfRef.__PVT__sig_b_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_b) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_b_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_b_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_b) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [2U][0U] 
                                             >> 0xaU));
    } else {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [2U]
                                               [1U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [2U]
                                                 [0U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_b_aligned = ((IData)(vlSelfRef.__PVT__sig_b) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_a_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_a));
        } else {
            vlSelfRef.__PVT__sig_a_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_a) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_a_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_a_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_a) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [2U][1U] 
                                             >> 0xaU));
    }
    if (((1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                [2U][0U] >> 0xfU)) == (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [2U][1U] 
                                             >> 0xfU)))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               + (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [2U][0U] 
                                              >> 0xfU));
    } else if (((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                >= (IData)(vlSelfRef.__PVT__sig_b_aligned))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [2U][0U] 
                                              >> 0xfU));
    } else {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_b_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_a_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [2U][1U] 
                                              >> 0xfU));
    }
    vlSelfRef.__PVT__exp_result = vlSelfRef.__PVT__exp_max;
    if ((0x4000U & (IData)(vlSelfRef.__PVT__sig_sum))) {
        vlSelfRef.__PVT__exp_result = (0x1fU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__exp_result)));
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 4U));
    } else {
        while ((((~ ((IData)(vlSelfRef.__PVT__sig_sum) 
                     >> 0xdU)) & (0U < (IData)(vlSelfRef.__PVT__exp_result))) 
                & (0U != (IData)(vlSelfRef.__PVT__sig_sum)))) {
            vlSelfRef.__PVT__sig_sum = (0x7fffU & VL_SHIFTL_III(15,15,32, (IData)(vlSelfRef.__PVT__sig_sum), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(vlSelfRef.__PVT__exp_result) 
                                            - (IData)(1U)));
        }
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 3U));
    }
    vlSelfRef.__PVT__guard = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                    >> 2U));
    vlSelfRef.__PVT__round_bit = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                        >> 1U));
    vlSelfRef.__PVT__sticky = (1U & (IData)(vlSelfRef.__PVT__sig_sum));
    if (((IData)(vlSelfRef.__PVT__guard) & (((IData)(vlSelfRef.__PVT__round_bit) 
                                             | (IData)(vlSelfRef.__PVT__sticky)) 
                                            | (IData)(vlSelfRef.__PVT__sig_result)))) {
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__sig_result)));
        if (((0x400U == (IData)(vlSelfRef.__PVT__sig_result)) 
             | (0U == (IData)(vlSelfRef.__PVT__sig_result)))) {
            vlSelfRef.__PVT__sig_result = (0x7ffU & 
                                           VL_SHIFTR_III(11,11,32, (IData)(vlSelfRef.__PVT__sig_result), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__exp_result)));
        }
    }
    vlSelfRef.__PVT__temp_result = (((0U == (IData)(vlSelfRef.__PVT__exp_result)) 
                                     | (0U == (IData)(vlSelfRef.__PVT__sig_sum)))
                                     ? 0U : (((IData)(vlSelfRef.__PVT__result_sign) 
                                              << 0xfU) 
                                             | (((IData)(vlSelfRef.__PVT__exp_result) 
                                                 << 0xaU) 
                                                | (0x3ffU 
                                                   & (IData)(vlSelfRef.__PVT__sig_result)))));
}

VL_INLINE_OPT void Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__2__KET____DOT__gen_adder__BRA__1__KET____DOT__adder__0(Vtop_float16_adder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__2__KET____DOT__gen_adder__BRA__1__KET____DOT__adder__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sig_a = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [2U]
                                               [2U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [2U][2U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [2U]
                                                  [2U])));
    vlSelfRef.__PVT__sig_b = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [2U]
                                               [3U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [2U][3U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [2U]
                                                  [3U])));
    if (((0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                   [2U][2U] >> 0xaU)) > (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [2U]
                                                  [3U] 
                                                  >> 0xaU)))) {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [2U]
                                               [2U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [2U]
                                                 [3U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_a_aligned = ((IData)(vlSelfRef.__PVT__sig_a) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_b_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_b));
        } else {
            vlSelfRef.__PVT__sig_b_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_b) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_b_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_b_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_b) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [2U][2U] 
                                             >> 0xaU));
    } else {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [2U]
                                               [3U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [2U]
                                                 [2U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_b_aligned = ((IData)(vlSelfRef.__PVT__sig_b) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_a_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_a));
        } else {
            vlSelfRef.__PVT__sig_a_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_a) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_a_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_a_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_a) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [2U][3U] 
                                             >> 0xaU));
    }
    if (((1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                [2U][2U] >> 0xfU)) == (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [2U][3U] 
                                             >> 0xfU)))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               + (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [2U][2U] 
                                              >> 0xfU));
    } else if (((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                >= (IData)(vlSelfRef.__PVT__sig_b_aligned))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [2U][2U] 
                                              >> 0xfU));
    } else {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_b_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_a_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [2U][3U] 
                                              >> 0xfU));
    }
    vlSelfRef.__PVT__exp_result = vlSelfRef.__PVT__exp_max;
    if ((0x4000U & (IData)(vlSelfRef.__PVT__sig_sum))) {
        vlSelfRef.__PVT__exp_result = (0x1fU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__exp_result)));
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 4U));
    } else {
        while ((((~ ((IData)(vlSelfRef.__PVT__sig_sum) 
                     >> 0xdU)) & (0U < (IData)(vlSelfRef.__PVT__exp_result))) 
                & (0U != (IData)(vlSelfRef.__PVT__sig_sum)))) {
            vlSelfRef.__PVT__sig_sum = (0x7fffU & VL_SHIFTL_III(15,15,32, (IData)(vlSelfRef.__PVT__sig_sum), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(vlSelfRef.__PVT__exp_result) 
                                            - (IData)(1U)));
        }
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 3U));
    }
    vlSelfRef.__PVT__guard = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                    >> 2U));
    vlSelfRef.__PVT__round_bit = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                        >> 1U));
    vlSelfRef.__PVT__sticky = (1U & (IData)(vlSelfRef.__PVT__sig_sum));
    if (((IData)(vlSelfRef.__PVT__guard) & (((IData)(vlSelfRef.__PVT__round_bit) 
                                             | (IData)(vlSelfRef.__PVT__sticky)) 
                                            | (IData)(vlSelfRef.__PVT__sig_result)))) {
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__sig_result)));
        if (((0x400U == (IData)(vlSelfRef.__PVT__sig_result)) 
             | (0U == (IData)(vlSelfRef.__PVT__sig_result)))) {
            vlSelfRef.__PVT__sig_result = (0x7ffU & 
                                           VL_SHIFTR_III(11,11,32, (IData)(vlSelfRef.__PVT__sig_result), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__exp_result)));
        }
    }
    vlSelfRef.__PVT__temp_result = (((0U == (IData)(vlSelfRef.__PVT__exp_result)) 
                                     | (0U == (IData)(vlSelfRef.__PVT__sig_sum)))
                                     ? 0U : (((IData)(vlSelfRef.__PVT__result_sign) 
                                              << 0xfU) 
                                             | (((IData)(vlSelfRef.__PVT__exp_result) 
                                                 << 0xaU) 
                                                | (0x3ffU 
                                                   & (IData)(vlSelfRef.__PVT__sig_result)))));
}

VL_INLINE_OPT void Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__3__KET____DOT__gen_adder__BRA__0__KET____DOT__adder__0(Vtop_float16_adder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__3__KET____DOT__gen_adder__BRA__0__KET____DOT__adder__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sig_a = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [3U]
                                               [0U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [3U][0U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [3U]
                                                  [0U])));
    vlSelfRef.__PVT__sig_b = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [3U]
                                               [1U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [3U][1U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [3U]
                                                  [1U])));
    if (((0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                   [3U][0U] >> 0xaU)) > (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [3U]
                                                  [1U] 
                                                  >> 0xaU)))) {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [3U]
                                               [0U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [3U]
                                                 [1U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_a_aligned = ((IData)(vlSelfRef.__PVT__sig_a) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_b_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_b));
        } else {
            vlSelfRef.__PVT__sig_b_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_b) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_b_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_b_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_b) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [3U][0U] 
                                             >> 0xaU));
    } else {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [3U]
                                               [1U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [3U]
                                                 [0U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_b_aligned = ((IData)(vlSelfRef.__PVT__sig_b) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_a_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_a));
        } else {
            vlSelfRef.__PVT__sig_a_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_a) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_a_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_a_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_a) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [3U][1U] 
                                             >> 0xaU));
    }
    if (((1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                [3U][0U] >> 0xfU)) == (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [3U][1U] 
                                             >> 0xfU)))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               + (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [3U][0U] 
                                              >> 0xfU));
    } else if (((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                >= (IData)(vlSelfRef.__PVT__sig_b_aligned))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [3U][0U] 
                                              >> 0xfU));
    } else {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_b_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_a_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [3U][1U] 
                                              >> 0xfU));
    }
    vlSelfRef.__PVT__exp_result = vlSelfRef.__PVT__exp_max;
    if ((0x4000U & (IData)(vlSelfRef.__PVT__sig_sum))) {
        vlSelfRef.__PVT__exp_result = (0x1fU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__exp_result)));
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 4U));
    } else {
        while ((((~ ((IData)(vlSelfRef.__PVT__sig_sum) 
                     >> 0xdU)) & (0U < (IData)(vlSelfRef.__PVT__exp_result))) 
                & (0U != (IData)(vlSelfRef.__PVT__sig_sum)))) {
            vlSelfRef.__PVT__sig_sum = (0x7fffU & VL_SHIFTL_III(15,15,32, (IData)(vlSelfRef.__PVT__sig_sum), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(vlSelfRef.__PVT__exp_result) 
                                            - (IData)(1U)));
        }
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 3U));
    }
    vlSelfRef.__PVT__guard = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                    >> 2U));
    vlSelfRef.__PVT__round_bit = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                        >> 1U));
    vlSelfRef.__PVT__sticky = (1U & (IData)(vlSelfRef.__PVT__sig_sum));
    if (((IData)(vlSelfRef.__PVT__guard) & (((IData)(vlSelfRef.__PVT__round_bit) 
                                             | (IData)(vlSelfRef.__PVT__sticky)) 
                                            | (IData)(vlSelfRef.__PVT__sig_result)))) {
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__sig_result)));
        if (((0x400U == (IData)(vlSelfRef.__PVT__sig_result)) 
             | (0U == (IData)(vlSelfRef.__PVT__sig_result)))) {
            vlSelfRef.__PVT__sig_result = (0x7ffU & 
                                           VL_SHIFTR_III(11,11,32, (IData)(vlSelfRef.__PVT__sig_result), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__exp_result)));
        }
    }
    vlSelfRef.__PVT__temp_result = (((0U == (IData)(vlSelfRef.__PVT__exp_result)) 
                                     | (0U == (IData)(vlSelfRef.__PVT__sig_sum)))
                                     ? 0U : (((IData)(vlSelfRef.__PVT__result_sign) 
                                              << 0xfU) 
                                             | (((IData)(vlSelfRef.__PVT__exp_result) 
                                                 << 0xaU) 
                                                | (0x3ffU 
                                                   & (IData)(vlSelfRef.__PVT__sig_result)))));
}

VL_INLINE_OPT void Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__0__KET____DOT__adder__0(Vtop_float16_adder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__0__KET____DOT__adder__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sig_a = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [0U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [0U][0U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [0U]
                                                  [0U])));
    vlSelfRef.__PVT__sig_b = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [1U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [0U][1U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [0U]
                                                  [1U])));
    if (((0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                   [0U][0U] >> 0xaU)) > (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [0U]
                                                  [1U] 
                                                  >> 0xaU)))) {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [0U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [0U]
                                                 [1U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_a_aligned = ((IData)(vlSelfRef.__PVT__sig_a) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_b_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_b));
        } else {
            vlSelfRef.__PVT__sig_b_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_b) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_b_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_b_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_b) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [0U][0U] 
                                             >> 0xaU));
    } else {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [1U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [0U]
                                                 [0U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_b_aligned = ((IData)(vlSelfRef.__PVT__sig_b) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_a_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_a));
        } else {
            vlSelfRef.__PVT__sig_a_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_a) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_a_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_a_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_a) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [0U][1U] 
                                             >> 0xaU));
    }
    if (((1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                [0U][0U] >> 0xfU)) == (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [0U][1U] 
                                             >> 0xfU)))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               + (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][0U] 
                                              >> 0xfU));
    } else if (((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                >= (IData)(vlSelfRef.__PVT__sig_b_aligned))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][0U] 
                                              >> 0xfU));
    } else {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_b_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_a_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][1U] 
                                              >> 0xfU));
    }
    vlSelfRef.__PVT__exp_result = vlSelfRef.__PVT__exp_max;
    if ((0x4000U & (IData)(vlSelfRef.__PVT__sig_sum))) {
        vlSelfRef.__PVT__exp_result = (0x1fU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__exp_result)));
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 4U));
    } else {
        while ((((~ ((IData)(vlSelfRef.__PVT__sig_sum) 
                     >> 0xdU)) & (0U < (IData)(vlSelfRef.__PVT__exp_result))) 
                & (0U != (IData)(vlSelfRef.__PVT__sig_sum)))) {
            vlSelfRef.__PVT__sig_sum = (0x7fffU & VL_SHIFTL_III(15,15,32, (IData)(vlSelfRef.__PVT__sig_sum), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(vlSelfRef.__PVT__exp_result) 
                                            - (IData)(1U)));
        }
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 3U));
    }
    vlSelfRef.__PVT__guard = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                    >> 2U));
    vlSelfRef.__PVT__round_bit = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                        >> 1U));
    vlSelfRef.__PVT__sticky = (1U & (IData)(vlSelfRef.__PVT__sig_sum));
    if (((IData)(vlSelfRef.__PVT__guard) & (((IData)(vlSelfRef.__PVT__round_bit) 
                                             | (IData)(vlSelfRef.__PVT__sticky)) 
                                            | (IData)(vlSelfRef.__PVT__sig_result)))) {
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__sig_result)));
        if (((0x400U == (IData)(vlSelfRef.__PVT__sig_result)) 
             | (0U == (IData)(vlSelfRef.__PVT__sig_result)))) {
            vlSelfRef.__PVT__sig_result = (0x7ffU & 
                                           VL_SHIFTR_III(11,11,32, (IData)(vlSelfRef.__PVT__sig_result), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__exp_result)));
        }
    }
    vlSelfRef.__PVT__temp_result = (((0U == (IData)(vlSelfRef.__PVT__exp_result)) 
                                     | (0U == (IData)(vlSelfRef.__PVT__sig_sum)))
                                     ? 0U : (((IData)(vlSelfRef.__PVT__result_sign) 
                                              << 0xfU) 
                                             | (((IData)(vlSelfRef.__PVT__exp_result) 
                                                 << 0xaU) 
                                                | (0x3ffU 
                                                   & (IData)(vlSelfRef.__PVT__sig_result)))));
}

VL_INLINE_OPT void Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__1__KET____DOT__adder__0(Vtop_float16_adder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__1__KET____DOT__adder__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sig_a = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [2U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [0U][2U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [0U]
                                                  [2U])));
    vlSelfRef.__PVT__sig_b = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [3U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [0U][3U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [0U]
                                                  [3U])));
    if (((0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                   [0U][2U] >> 0xaU)) > (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [0U]
                                                  [3U] 
                                                  >> 0xaU)))) {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [2U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [0U]
                                                 [3U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_a_aligned = ((IData)(vlSelfRef.__PVT__sig_a) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_b_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_b));
        } else {
            vlSelfRef.__PVT__sig_b_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_b) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_b_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_b_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_b) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [0U][2U] 
                                             >> 0xaU));
    } else {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [3U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [0U]
                                                 [2U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_b_aligned = ((IData)(vlSelfRef.__PVT__sig_b) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_a_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_a));
        } else {
            vlSelfRef.__PVT__sig_a_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_a) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_a_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_a_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_a) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [0U][3U] 
                                             >> 0xaU));
    }
    if (((1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                [0U][2U] >> 0xfU)) == (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [0U][3U] 
                                             >> 0xfU)))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               + (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][2U] 
                                              >> 0xfU));
    } else if (((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                >= (IData)(vlSelfRef.__PVT__sig_b_aligned))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][2U] 
                                              >> 0xfU));
    } else {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_b_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_a_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][3U] 
                                              >> 0xfU));
    }
    vlSelfRef.__PVT__exp_result = vlSelfRef.__PVT__exp_max;
    if ((0x4000U & (IData)(vlSelfRef.__PVT__sig_sum))) {
        vlSelfRef.__PVT__exp_result = (0x1fU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__exp_result)));
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 4U));
    } else {
        while ((((~ ((IData)(vlSelfRef.__PVT__sig_sum) 
                     >> 0xdU)) & (0U < (IData)(vlSelfRef.__PVT__exp_result))) 
                & (0U != (IData)(vlSelfRef.__PVT__sig_sum)))) {
            vlSelfRef.__PVT__sig_sum = (0x7fffU & VL_SHIFTL_III(15,15,32, (IData)(vlSelfRef.__PVT__sig_sum), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(vlSelfRef.__PVT__exp_result) 
                                            - (IData)(1U)));
        }
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 3U));
    }
    vlSelfRef.__PVT__guard = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                    >> 2U));
    vlSelfRef.__PVT__round_bit = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                        >> 1U));
    vlSelfRef.__PVT__sticky = (1U & (IData)(vlSelfRef.__PVT__sig_sum));
    if (((IData)(vlSelfRef.__PVT__guard) & (((IData)(vlSelfRef.__PVT__round_bit) 
                                             | (IData)(vlSelfRef.__PVT__sticky)) 
                                            | (IData)(vlSelfRef.__PVT__sig_result)))) {
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__sig_result)));
        if (((0x400U == (IData)(vlSelfRef.__PVT__sig_result)) 
             | (0U == (IData)(vlSelfRef.__PVT__sig_result)))) {
            vlSelfRef.__PVT__sig_result = (0x7ffU & 
                                           VL_SHIFTR_III(11,11,32, (IData)(vlSelfRef.__PVT__sig_result), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__exp_result)));
        }
    }
    vlSelfRef.__PVT__temp_result = (((0U == (IData)(vlSelfRef.__PVT__exp_result)) 
                                     | (0U == (IData)(vlSelfRef.__PVT__sig_sum)))
                                     ? 0U : (((IData)(vlSelfRef.__PVT__result_sign) 
                                              << 0xfU) 
                                             | (((IData)(vlSelfRef.__PVT__exp_result) 
                                                 << 0xaU) 
                                                | (0x3ffU 
                                                   & (IData)(vlSelfRef.__PVT__sig_result)))));
}

VL_INLINE_OPT void Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__2__KET____DOT__adder__0(Vtop_float16_adder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__2__KET____DOT__adder__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sig_a = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [4U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [0U][4U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [0U]
                                                  [4U])));
    vlSelfRef.__PVT__sig_b = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [5U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [0U][5U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [0U]
                                                  [5U])));
    if (((0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                   [0U][4U] >> 0xaU)) > (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [0U]
                                                  [5U] 
                                                  >> 0xaU)))) {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [4U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [0U]
                                                 [5U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_a_aligned = ((IData)(vlSelfRef.__PVT__sig_a) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_b_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_b));
        } else {
            vlSelfRef.__PVT__sig_b_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_b) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_b_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_b_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_b) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [0U][4U] 
                                             >> 0xaU));
    } else {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [5U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [0U]
                                                 [4U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_b_aligned = ((IData)(vlSelfRef.__PVT__sig_b) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_a_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_a));
        } else {
            vlSelfRef.__PVT__sig_a_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_a) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_a_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_a_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_a) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [0U][5U] 
                                             >> 0xaU));
    }
    if (((1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                [0U][4U] >> 0xfU)) == (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [0U][5U] 
                                             >> 0xfU)))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               + (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][4U] 
                                              >> 0xfU));
    } else if (((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                >= (IData)(vlSelfRef.__PVT__sig_b_aligned))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][4U] 
                                              >> 0xfU));
    } else {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_b_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_a_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][5U] 
                                              >> 0xfU));
    }
    vlSelfRef.__PVT__exp_result = vlSelfRef.__PVT__exp_max;
    if ((0x4000U & (IData)(vlSelfRef.__PVT__sig_sum))) {
        vlSelfRef.__PVT__exp_result = (0x1fU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__exp_result)));
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 4U));
    } else {
        while ((((~ ((IData)(vlSelfRef.__PVT__sig_sum) 
                     >> 0xdU)) & (0U < (IData)(vlSelfRef.__PVT__exp_result))) 
                & (0U != (IData)(vlSelfRef.__PVT__sig_sum)))) {
            vlSelfRef.__PVT__sig_sum = (0x7fffU & VL_SHIFTL_III(15,15,32, (IData)(vlSelfRef.__PVT__sig_sum), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(vlSelfRef.__PVT__exp_result) 
                                            - (IData)(1U)));
        }
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 3U));
    }
    vlSelfRef.__PVT__guard = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                    >> 2U));
    vlSelfRef.__PVT__round_bit = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                        >> 1U));
    vlSelfRef.__PVT__sticky = (1U & (IData)(vlSelfRef.__PVT__sig_sum));
    if (((IData)(vlSelfRef.__PVT__guard) & (((IData)(vlSelfRef.__PVT__round_bit) 
                                             | (IData)(vlSelfRef.__PVT__sticky)) 
                                            | (IData)(vlSelfRef.__PVT__sig_result)))) {
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__sig_result)));
        if (((0x400U == (IData)(vlSelfRef.__PVT__sig_result)) 
             | (0U == (IData)(vlSelfRef.__PVT__sig_result)))) {
            vlSelfRef.__PVT__sig_result = (0x7ffU & 
                                           VL_SHIFTR_III(11,11,32, (IData)(vlSelfRef.__PVT__sig_result), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__exp_result)));
        }
    }
    vlSelfRef.__PVT__temp_result = (((0U == (IData)(vlSelfRef.__PVT__exp_result)) 
                                     | (0U == (IData)(vlSelfRef.__PVT__sig_sum)))
                                     ? 0U : (((IData)(vlSelfRef.__PVT__result_sign) 
                                              << 0xfU) 
                                             | (((IData)(vlSelfRef.__PVT__exp_result) 
                                                 << 0xaU) 
                                                | (0x3ffU 
                                                   & (IData)(vlSelfRef.__PVT__sig_result)))));
}

VL_INLINE_OPT void Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__3__KET____DOT__adder__0(Vtop_float16_adder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__3__KET____DOT__adder__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sig_a = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [6U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [0U][6U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [0U]
                                                  [6U])));
    vlSelfRef.__PVT__sig_b = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [7U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [0U][7U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [0U]
                                                  [7U])));
    if (((0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                   [0U][6U] >> 0xaU)) > (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [0U]
                                                  [7U] 
                                                  >> 0xaU)))) {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [6U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [0U]
                                                 [7U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_a_aligned = ((IData)(vlSelfRef.__PVT__sig_a) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_b_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_b));
        } else {
            vlSelfRef.__PVT__sig_b_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_b) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_b_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_b_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_b) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [0U][6U] 
                                             >> 0xaU));
    } else {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [7U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [0U]
                                                 [6U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_b_aligned = ((IData)(vlSelfRef.__PVT__sig_b) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_a_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_a));
        } else {
            vlSelfRef.__PVT__sig_a_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_a) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_a_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_a_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_a) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [0U][7U] 
                                             >> 0xaU));
    }
    if (((1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                [0U][6U] >> 0xfU)) == (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [0U][7U] 
                                             >> 0xfU)))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               + (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][6U] 
                                              >> 0xfU));
    } else if (((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                >= (IData)(vlSelfRef.__PVT__sig_b_aligned))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][6U] 
                                              >> 0xfU));
    } else {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_b_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_a_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][7U] 
                                              >> 0xfU));
    }
    vlSelfRef.__PVT__exp_result = vlSelfRef.__PVT__exp_max;
    if ((0x4000U & (IData)(vlSelfRef.__PVT__sig_sum))) {
        vlSelfRef.__PVT__exp_result = (0x1fU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__exp_result)));
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 4U));
    } else {
        while ((((~ ((IData)(vlSelfRef.__PVT__sig_sum) 
                     >> 0xdU)) & (0U < (IData)(vlSelfRef.__PVT__exp_result))) 
                & (0U != (IData)(vlSelfRef.__PVT__sig_sum)))) {
            vlSelfRef.__PVT__sig_sum = (0x7fffU & VL_SHIFTL_III(15,15,32, (IData)(vlSelfRef.__PVT__sig_sum), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(vlSelfRef.__PVT__exp_result) 
                                            - (IData)(1U)));
        }
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 3U));
    }
    vlSelfRef.__PVT__guard = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                    >> 2U));
    vlSelfRef.__PVT__round_bit = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                        >> 1U));
    vlSelfRef.__PVT__sticky = (1U & (IData)(vlSelfRef.__PVT__sig_sum));
    if (((IData)(vlSelfRef.__PVT__guard) & (((IData)(vlSelfRef.__PVT__round_bit) 
                                             | (IData)(vlSelfRef.__PVT__sticky)) 
                                            | (IData)(vlSelfRef.__PVT__sig_result)))) {
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__sig_result)));
        if (((0x400U == (IData)(vlSelfRef.__PVT__sig_result)) 
             | (0U == (IData)(vlSelfRef.__PVT__sig_result)))) {
            vlSelfRef.__PVT__sig_result = (0x7ffU & 
                                           VL_SHIFTR_III(11,11,32, (IData)(vlSelfRef.__PVT__sig_result), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__exp_result)));
        }
    }
    vlSelfRef.__PVT__temp_result = (((0U == (IData)(vlSelfRef.__PVT__exp_result)) 
                                     | (0U == (IData)(vlSelfRef.__PVT__sig_sum)))
                                     ? 0U : (((IData)(vlSelfRef.__PVT__result_sign) 
                                              << 0xfU) 
                                             | (((IData)(vlSelfRef.__PVT__exp_result) 
                                                 << 0xaU) 
                                                | (0x3ffU 
                                                   & (IData)(vlSelfRef.__PVT__sig_result)))));
}

VL_INLINE_OPT void Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__4__KET____DOT__adder__0(Vtop_float16_adder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__4__KET____DOT__adder__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sig_a = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [8U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [0U][8U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [0U]
                                                  [8U])));
    vlSelfRef.__PVT__sig_b = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [9U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [0U][9U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [0U]
                                                  [9U])));
    if (((0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                   [0U][8U] >> 0xaU)) > (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [0U]
                                                  [9U] 
                                                  >> 0xaU)))) {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [8U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [0U]
                                                 [9U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_a_aligned = ((IData)(vlSelfRef.__PVT__sig_a) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_b_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_b));
        } else {
            vlSelfRef.__PVT__sig_b_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_b) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_b_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_b_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_b) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [0U][8U] 
                                             >> 0xaU));
    } else {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [9U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [0U]
                                                 [8U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_b_aligned = ((IData)(vlSelfRef.__PVT__sig_b) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_a_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_a));
        } else {
            vlSelfRef.__PVT__sig_a_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_a) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_a_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_a_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_a) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [0U][9U] 
                                             >> 0xaU));
    }
    if (((1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                [0U][8U] >> 0xfU)) == (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [0U][9U] 
                                             >> 0xfU)))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               + (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][8U] 
                                              >> 0xfU));
    } else if (((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                >= (IData)(vlSelfRef.__PVT__sig_b_aligned))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][8U] 
                                              >> 0xfU));
    } else {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_b_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_a_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][9U] 
                                              >> 0xfU));
    }
    vlSelfRef.__PVT__exp_result = vlSelfRef.__PVT__exp_max;
    if ((0x4000U & (IData)(vlSelfRef.__PVT__sig_sum))) {
        vlSelfRef.__PVT__exp_result = (0x1fU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__exp_result)));
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 4U));
    } else {
        while ((((~ ((IData)(vlSelfRef.__PVT__sig_sum) 
                     >> 0xdU)) & (0U < (IData)(vlSelfRef.__PVT__exp_result))) 
                & (0U != (IData)(vlSelfRef.__PVT__sig_sum)))) {
            vlSelfRef.__PVT__sig_sum = (0x7fffU & VL_SHIFTL_III(15,15,32, (IData)(vlSelfRef.__PVT__sig_sum), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(vlSelfRef.__PVT__exp_result) 
                                            - (IData)(1U)));
        }
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 3U));
    }
    vlSelfRef.__PVT__guard = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                    >> 2U));
    vlSelfRef.__PVT__round_bit = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                        >> 1U));
    vlSelfRef.__PVT__sticky = (1U & (IData)(vlSelfRef.__PVT__sig_sum));
    if (((IData)(vlSelfRef.__PVT__guard) & (((IData)(vlSelfRef.__PVT__round_bit) 
                                             | (IData)(vlSelfRef.__PVT__sticky)) 
                                            | (IData)(vlSelfRef.__PVT__sig_result)))) {
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__sig_result)));
        if (((0x400U == (IData)(vlSelfRef.__PVT__sig_result)) 
             | (0U == (IData)(vlSelfRef.__PVT__sig_result)))) {
            vlSelfRef.__PVT__sig_result = (0x7ffU & 
                                           VL_SHIFTR_III(11,11,32, (IData)(vlSelfRef.__PVT__sig_result), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__exp_result)));
        }
    }
    vlSelfRef.__PVT__temp_result = (((0U == (IData)(vlSelfRef.__PVT__exp_result)) 
                                     | (0U == (IData)(vlSelfRef.__PVT__sig_sum)))
                                     ? 0U : (((IData)(vlSelfRef.__PVT__result_sign) 
                                              << 0xfU) 
                                             | (((IData)(vlSelfRef.__PVT__exp_result) 
                                                 << 0xaU) 
                                                | (0x3ffU 
                                                   & (IData)(vlSelfRef.__PVT__sig_result)))));
}

VL_INLINE_OPT void Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__5__KET____DOT__adder__0(Vtop_float16_adder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__5__KET____DOT__adder__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sig_a = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [0xaU] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [0U][0xaU]) : (0x400U 
                                                 | (0x3ffU 
                                                    & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                    [0U]
                                                    [0xaU])));
    vlSelfRef.__PVT__sig_b = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [0xbU] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [0U][0xbU]) : (0x400U 
                                                 | (0x3ffU 
                                                    & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                    [0U]
                                                    [0xbU])));
    if (((0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                   [0U][0xaU] >> 0xaU)) > (0x1fU & 
                                           (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                            [0U][0xbU] 
                                            >> 0xaU)))) {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [0xaU] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [0U]
                                                 [0xbU] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_a_aligned = ((IData)(vlSelfRef.__PVT__sig_a) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_b_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_b));
        } else {
            vlSelfRef.__PVT__sig_b_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_b) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_b_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_b_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_b) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [0U][0xaU] 
                                             >> 0xaU));
    } else {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [0xbU] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [0U]
                                                 [0xaU] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_b_aligned = ((IData)(vlSelfRef.__PVT__sig_b) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_a_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_a));
        } else {
            vlSelfRef.__PVT__sig_a_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_a) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_a_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_a_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_a) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [0U][0xbU] 
                                             >> 0xaU));
    }
    if (((1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                [0U][0xaU] >> 0xfU)) == (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [0xbU] 
                                               >> 0xfU)))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               + (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][0xaU] 
                                              >> 0xfU));
    } else if (((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                >= (IData)(vlSelfRef.__PVT__sig_b_aligned))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][0xaU] 
                                              >> 0xfU));
    } else {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_b_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_a_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][0xbU] 
                                              >> 0xfU));
    }
    vlSelfRef.__PVT__exp_result = vlSelfRef.__PVT__exp_max;
    if ((0x4000U & (IData)(vlSelfRef.__PVT__sig_sum))) {
        vlSelfRef.__PVT__exp_result = (0x1fU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__exp_result)));
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 4U));
    } else {
        while ((((~ ((IData)(vlSelfRef.__PVT__sig_sum) 
                     >> 0xdU)) & (0U < (IData)(vlSelfRef.__PVT__exp_result))) 
                & (0U != (IData)(vlSelfRef.__PVT__sig_sum)))) {
            vlSelfRef.__PVT__sig_sum = (0x7fffU & VL_SHIFTL_III(15,15,32, (IData)(vlSelfRef.__PVT__sig_sum), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(vlSelfRef.__PVT__exp_result) 
                                            - (IData)(1U)));
        }
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 3U));
    }
    vlSelfRef.__PVT__guard = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                    >> 2U));
    vlSelfRef.__PVT__round_bit = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                        >> 1U));
    vlSelfRef.__PVT__sticky = (1U & (IData)(vlSelfRef.__PVT__sig_sum));
    if (((IData)(vlSelfRef.__PVT__guard) & (((IData)(vlSelfRef.__PVT__round_bit) 
                                             | (IData)(vlSelfRef.__PVT__sticky)) 
                                            | (IData)(vlSelfRef.__PVT__sig_result)))) {
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__sig_result)));
        if (((0x400U == (IData)(vlSelfRef.__PVT__sig_result)) 
             | (0U == (IData)(vlSelfRef.__PVT__sig_result)))) {
            vlSelfRef.__PVT__sig_result = (0x7ffU & 
                                           VL_SHIFTR_III(11,11,32, (IData)(vlSelfRef.__PVT__sig_result), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__exp_result)));
        }
    }
    vlSelfRef.__PVT__temp_result = (((0U == (IData)(vlSelfRef.__PVT__exp_result)) 
                                     | (0U == (IData)(vlSelfRef.__PVT__sig_sum)))
                                     ? 0U : (((IData)(vlSelfRef.__PVT__result_sign) 
                                              << 0xfU) 
                                             | (((IData)(vlSelfRef.__PVT__exp_result) 
                                                 << 0xaU) 
                                                | (0x3ffU 
                                                   & (IData)(vlSelfRef.__PVT__sig_result)))));
}

VL_INLINE_OPT void Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__6__KET____DOT__adder__0(Vtop_float16_adder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__6__KET____DOT__adder__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sig_a = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [0xcU] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [0U][0xcU]) : (0x400U 
                                                 | (0x3ffU 
                                                    & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                    [0U]
                                                    [0xcU])));
    vlSelfRef.__PVT__sig_b = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [0xdU] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [0U][0xdU]) : (0x400U 
                                                 | (0x3ffU 
                                                    & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                    [0U]
                                                    [0xdU])));
    if (((0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                   [0U][0xcU] >> 0xaU)) > (0x1fU & 
                                           (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                            [0U][0xdU] 
                                            >> 0xaU)))) {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [0xcU] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [0U]
                                                 [0xdU] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_a_aligned = ((IData)(vlSelfRef.__PVT__sig_a) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_b_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_b));
        } else {
            vlSelfRef.__PVT__sig_b_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_b) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_b_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_b_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_b) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [0U][0xcU] 
                                             >> 0xaU));
    } else {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [0xdU] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [0U]
                                                 [0xcU] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_b_aligned = ((IData)(vlSelfRef.__PVT__sig_b) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_a_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_a));
        } else {
            vlSelfRef.__PVT__sig_a_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_a) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_a_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_a_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_a) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [0U][0xdU] 
                                             >> 0xaU));
    }
    if (((1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                [0U][0xcU] >> 0xfU)) == (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [0xdU] 
                                               >> 0xfU)))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               + (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][0xcU] 
                                              >> 0xfU));
    } else if (((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                >= (IData)(vlSelfRef.__PVT__sig_b_aligned))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][0xcU] 
                                              >> 0xfU));
    } else {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_b_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_a_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][0xdU] 
                                              >> 0xfU));
    }
    vlSelfRef.__PVT__exp_result = vlSelfRef.__PVT__exp_max;
    if ((0x4000U & (IData)(vlSelfRef.__PVT__sig_sum))) {
        vlSelfRef.__PVT__exp_result = (0x1fU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__exp_result)));
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 4U));
    } else {
        while ((((~ ((IData)(vlSelfRef.__PVT__sig_sum) 
                     >> 0xdU)) & (0U < (IData)(vlSelfRef.__PVT__exp_result))) 
                & (0U != (IData)(vlSelfRef.__PVT__sig_sum)))) {
            vlSelfRef.__PVT__sig_sum = (0x7fffU & VL_SHIFTL_III(15,15,32, (IData)(vlSelfRef.__PVT__sig_sum), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(vlSelfRef.__PVT__exp_result) 
                                            - (IData)(1U)));
        }
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 3U));
    }
    vlSelfRef.__PVT__guard = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                    >> 2U));
    vlSelfRef.__PVT__round_bit = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                        >> 1U));
    vlSelfRef.__PVT__sticky = (1U & (IData)(vlSelfRef.__PVT__sig_sum));
    if (((IData)(vlSelfRef.__PVT__guard) & (((IData)(vlSelfRef.__PVT__round_bit) 
                                             | (IData)(vlSelfRef.__PVT__sticky)) 
                                            | (IData)(vlSelfRef.__PVT__sig_result)))) {
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__sig_result)));
        if (((0x400U == (IData)(vlSelfRef.__PVT__sig_result)) 
             | (0U == (IData)(vlSelfRef.__PVT__sig_result)))) {
            vlSelfRef.__PVT__sig_result = (0x7ffU & 
                                           VL_SHIFTR_III(11,11,32, (IData)(vlSelfRef.__PVT__sig_result), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__exp_result)));
        }
    }
    vlSelfRef.__PVT__temp_result = (((0U == (IData)(vlSelfRef.__PVT__exp_result)) 
                                     | (0U == (IData)(vlSelfRef.__PVT__sig_sum)))
                                     ? 0U : (((IData)(vlSelfRef.__PVT__result_sign) 
                                              << 0xfU) 
                                             | (((IData)(vlSelfRef.__PVT__exp_result) 
                                                 << 0xaU) 
                                                | (0x3ffU 
                                                   & (IData)(vlSelfRef.__PVT__sig_result)))));
}

VL_INLINE_OPT void Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__7__KET____DOT__adder__0(Vtop_float16_adder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__7__KET____DOT__adder__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sig_a = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [0xeU] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [0U][0xeU]) : (0x400U 
                                                 | (0x3ffU 
                                                    & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                    [0U]
                                                    [0xeU])));
    vlSelfRef.__PVT__sig_b = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [0xfU] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [0U][0xfU]) : (0x400U 
                                                 | (0x3ffU 
                                                    & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                    [0U]
                                                    [0xfU])));
    if (((0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                   [0U][0xeU] >> 0xaU)) > (0x1fU & 
                                           (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                            [0U][0xfU] 
                                            >> 0xaU)))) {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [0xeU] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [0U]
                                                 [0xfU] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_a_aligned = ((IData)(vlSelfRef.__PVT__sig_a) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_b_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_b));
        } else {
            vlSelfRef.__PVT__sig_b_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_b) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_b_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_b_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_b) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [0U][0xeU] 
                                             >> 0xaU));
    } else {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [0xfU] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [0U]
                                                 [0xeU] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_b_aligned = ((IData)(vlSelfRef.__PVT__sig_b) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_a_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_a));
        } else {
            vlSelfRef.__PVT__sig_a_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_a) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_a_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_a_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_a) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [0U][0xfU] 
                                             >> 0xaU));
    }
    if (((1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                [0U][0xeU] >> 0xfU)) == (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [0U]
                                               [0xfU] 
                                               >> 0xfU)))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               + (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][0xeU] 
                                              >> 0xfU));
    } else if (((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                >= (IData)(vlSelfRef.__PVT__sig_b_aligned))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][0xeU] 
                                              >> 0xfU));
    } else {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_b_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_a_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [0U][0xfU] 
                                              >> 0xfU));
    }
    vlSelfRef.__PVT__exp_result = vlSelfRef.__PVT__exp_max;
    if ((0x4000U & (IData)(vlSelfRef.__PVT__sig_sum))) {
        vlSelfRef.__PVT__exp_result = (0x1fU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__exp_result)));
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 4U));
    } else {
        while ((((~ ((IData)(vlSelfRef.__PVT__sig_sum) 
                     >> 0xdU)) & (0U < (IData)(vlSelfRef.__PVT__exp_result))) 
                & (0U != (IData)(vlSelfRef.__PVT__sig_sum)))) {
            vlSelfRef.__PVT__sig_sum = (0x7fffU & VL_SHIFTL_III(15,15,32, (IData)(vlSelfRef.__PVT__sig_sum), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(vlSelfRef.__PVT__exp_result) 
                                            - (IData)(1U)));
        }
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 3U));
    }
    vlSelfRef.__PVT__guard = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                    >> 2U));
    vlSelfRef.__PVT__round_bit = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                        >> 1U));
    vlSelfRef.__PVT__sticky = (1U & (IData)(vlSelfRef.__PVT__sig_sum));
    if (((IData)(vlSelfRef.__PVT__guard) & (((IData)(vlSelfRef.__PVT__round_bit) 
                                             | (IData)(vlSelfRef.__PVT__sticky)) 
                                            | (IData)(vlSelfRef.__PVT__sig_result)))) {
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__sig_result)));
        if (((0x400U == (IData)(vlSelfRef.__PVT__sig_result)) 
             | (0U == (IData)(vlSelfRef.__PVT__sig_result)))) {
            vlSelfRef.__PVT__sig_result = (0x7ffU & 
                                           VL_SHIFTR_III(11,11,32, (IData)(vlSelfRef.__PVT__sig_result), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__exp_result)));
        }
    }
    vlSelfRef.__PVT__temp_result = (((0U == (IData)(vlSelfRef.__PVT__exp_result)) 
                                     | (0U == (IData)(vlSelfRef.__PVT__sig_sum)))
                                     ? 0U : (((IData)(vlSelfRef.__PVT__result_sign) 
                                              << 0xfU) 
                                             | (((IData)(vlSelfRef.__PVT__exp_result) 
                                                 << 0xaU) 
                                                | (0x3ffU 
                                                   & (IData)(vlSelfRef.__PVT__sig_result)))));
}

VL_INLINE_OPT void Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__1__KET____DOT__gen_adder__BRA__0__KET____DOT__adder__0(Vtop_float16_adder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__1__KET____DOT__gen_adder__BRA__0__KET____DOT__adder__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sig_a = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [1U]
                                               [0U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [1U][0U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [1U]
                                                  [0U])));
    vlSelfRef.__PVT__sig_b = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [1U]
                                               [1U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [1U][1U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [1U]
                                                  [1U])));
    if (((0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                   [1U][0U] >> 0xaU)) > (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [1U]
                                                  [1U] 
                                                  >> 0xaU)))) {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [1U]
                                               [0U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [1U]
                                                 [1U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_a_aligned = ((IData)(vlSelfRef.__PVT__sig_a) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_b_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_b));
        } else {
            vlSelfRef.__PVT__sig_b_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_b) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_b_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_b_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_b) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [1U][0U] 
                                             >> 0xaU));
    } else {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [1U]
                                               [1U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [1U]
                                                 [0U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_b_aligned = ((IData)(vlSelfRef.__PVT__sig_b) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_a_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_a));
        } else {
            vlSelfRef.__PVT__sig_a_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_a) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_a_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_a_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_a) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [1U][1U] 
                                             >> 0xaU));
    }
    if (((1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                [1U][0U] >> 0xfU)) == (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [1U][1U] 
                                             >> 0xfU)))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               + (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [1U][0U] 
                                              >> 0xfU));
    } else if (((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                >= (IData)(vlSelfRef.__PVT__sig_b_aligned))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [1U][0U] 
                                              >> 0xfU));
    } else {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_b_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_a_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [1U][1U] 
                                              >> 0xfU));
    }
    vlSelfRef.__PVT__exp_result = vlSelfRef.__PVT__exp_max;
    if ((0x4000U & (IData)(vlSelfRef.__PVT__sig_sum))) {
        vlSelfRef.__PVT__exp_result = (0x1fU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__exp_result)));
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 4U));
    } else {
        while ((((~ ((IData)(vlSelfRef.__PVT__sig_sum) 
                     >> 0xdU)) & (0U < (IData)(vlSelfRef.__PVT__exp_result))) 
                & (0U != (IData)(vlSelfRef.__PVT__sig_sum)))) {
            vlSelfRef.__PVT__sig_sum = (0x7fffU & VL_SHIFTL_III(15,15,32, (IData)(vlSelfRef.__PVT__sig_sum), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(vlSelfRef.__PVT__exp_result) 
                                            - (IData)(1U)));
        }
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 3U));
    }
    vlSelfRef.__PVT__guard = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                    >> 2U));
    vlSelfRef.__PVT__round_bit = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                        >> 1U));
    vlSelfRef.__PVT__sticky = (1U & (IData)(vlSelfRef.__PVT__sig_sum));
    if (((IData)(vlSelfRef.__PVT__guard) & (((IData)(vlSelfRef.__PVT__round_bit) 
                                             | (IData)(vlSelfRef.__PVT__sticky)) 
                                            | (IData)(vlSelfRef.__PVT__sig_result)))) {
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__sig_result)));
        if (((0x400U == (IData)(vlSelfRef.__PVT__sig_result)) 
             | (0U == (IData)(vlSelfRef.__PVT__sig_result)))) {
            vlSelfRef.__PVT__sig_result = (0x7ffU & 
                                           VL_SHIFTR_III(11,11,32, (IData)(vlSelfRef.__PVT__sig_result), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__exp_result)));
        }
    }
    vlSelfRef.__PVT__temp_result = (((0U == (IData)(vlSelfRef.__PVT__exp_result)) 
                                     | (0U == (IData)(vlSelfRef.__PVT__sig_sum)))
                                     ? 0U : (((IData)(vlSelfRef.__PVT__result_sign) 
                                              << 0xfU) 
                                             | (((IData)(vlSelfRef.__PVT__exp_result) 
                                                 << 0xaU) 
                                                | (0x3ffU 
                                                   & (IData)(vlSelfRef.__PVT__sig_result)))));
}

VL_INLINE_OPT void Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__1__KET____DOT__gen_adder__BRA__1__KET____DOT__adder__0(Vtop_float16_adder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__1__KET____DOT__gen_adder__BRA__1__KET____DOT__adder__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sig_a = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [1U]
                                               [2U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [1U][2U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [1U]
                                                  [2U])));
    vlSelfRef.__PVT__sig_b = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [1U]
                                               [3U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [1U][3U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [1U]
                                                  [3U])));
    if (((0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                   [1U][2U] >> 0xaU)) > (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [1U]
                                                  [3U] 
                                                  >> 0xaU)))) {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [1U]
                                               [2U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [1U]
                                                 [3U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_a_aligned = ((IData)(vlSelfRef.__PVT__sig_a) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_b_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_b));
        } else {
            vlSelfRef.__PVT__sig_b_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_b) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_b_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_b_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_b) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [1U][2U] 
                                             >> 0xaU));
    } else {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [1U]
                                               [3U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [1U]
                                                 [2U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_b_aligned = ((IData)(vlSelfRef.__PVT__sig_b) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_a_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_a));
        } else {
            vlSelfRef.__PVT__sig_a_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_a) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_a_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_a_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_a) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [1U][3U] 
                                             >> 0xaU));
    }
    if (((1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                [1U][2U] >> 0xfU)) == (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [1U][3U] 
                                             >> 0xfU)))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               + (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [1U][2U] 
                                              >> 0xfU));
    } else if (((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                >= (IData)(vlSelfRef.__PVT__sig_b_aligned))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [1U][2U] 
                                              >> 0xfU));
    } else {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_b_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_a_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [1U][3U] 
                                              >> 0xfU));
    }
    vlSelfRef.__PVT__exp_result = vlSelfRef.__PVT__exp_max;
    if ((0x4000U & (IData)(vlSelfRef.__PVT__sig_sum))) {
        vlSelfRef.__PVT__exp_result = (0x1fU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__exp_result)));
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 4U));
    } else {
        while ((((~ ((IData)(vlSelfRef.__PVT__sig_sum) 
                     >> 0xdU)) & (0U < (IData)(vlSelfRef.__PVT__exp_result))) 
                & (0U != (IData)(vlSelfRef.__PVT__sig_sum)))) {
            vlSelfRef.__PVT__sig_sum = (0x7fffU & VL_SHIFTL_III(15,15,32, (IData)(vlSelfRef.__PVT__sig_sum), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(vlSelfRef.__PVT__exp_result) 
                                            - (IData)(1U)));
        }
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 3U));
    }
    vlSelfRef.__PVT__guard = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                    >> 2U));
    vlSelfRef.__PVT__round_bit = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                        >> 1U));
    vlSelfRef.__PVT__sticky = (1U & (IData)(vlSelfRef.__PVT__sig_sum));
    if (((IData)(vlSelfRef.__PVT__guard) & (((IData)(vlSelfRef.__PVT__round_bit) 
                                             | (IData)(vlSelfRef.__PVT__sticky)) 
                                            | (IData)(vlSelfRef.__PVT__sig_result)))) {
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__sig_result)));
        if (((0x400U == (IData)(vlSelfRef.__PVT__sig_result)) 
             | (0U == (IData)(vlSelfRef.__PVT__sig_result)))) {
            vlSelfRef.__PVT__sig_result = (0x7ffU & 
                                           VL_SHIFTR_III(11,11,32, (IData)(vlSelfRef.__PVT__sig_result), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__exp_result)));
        }
    }
    vlSelfRef.__PVT__temp_result = (((0U == (IData)(vlSelfRef.__PVT__exp_result)) 
                                     | (0U == (IData)(vlSelfRef.__PVT__sig_sum)))
                                     ? 0U : (((IData)(vlSelfRef.__PVT__result_sign) 
                                              << 0xfU) 
                                             | (((IData)(vlSelfRef.__PVT__exp_result) 
                                                 << 0xaU) 
                                                | (0x3ffU 
                                                   & (IData)(vlSelfRef.__PVT__sig_result)))));
}

VL_INLINE_OPT void Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__1__KET____DOT__gen_adder__BRA__2__KET____DOT__adder__0(Vtop_float16_adder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__1__KET____DOT__gen_adder__BRA__2__KET____DOT__adder__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sig_a = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [1U]
                                               [4U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [1U][4U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [1U]
                                                  [4U])));
    vlSelfRef.__PVT__sig_b = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [1U]
                                               [5U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [1U][5U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [1U]
                                                  [5U])));
    if (((0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                   [1U][4U] >> 0xaU)) > (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [1U]
                                                  [5U] 
                                                  >> 0xaU)))) {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [1U]
                                               [4U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [1U]
                                                 [5U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_a_aligned = ((IData)(vlSelfRef.__PVT__sig_a) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_b_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_b));
        } else {
            vlSelfRef.__PVT__sig_b_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_b) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_b_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_b_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_b) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [1U][4U] 
                                             >> 0xaU));
    } else {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [1U]
                                               [5U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [1U]
                                                 [4U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_b_aligned = ((IData)(vlSelfRef.__PVT__sig_b) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_a_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_a));
        } else {
            vlSelfRef.__PVT__sig_a_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_a) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_a_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_a_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_a) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [1U][5U] 
                                             >> 0xaU));
    }
    if (((1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                [1U][4U] >> 0xfU)) == (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [1U][5U] 
                                             >> 0xfU)))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               + (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [1U][4U] 
                                              >> 0xfU));
    } else if (((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                >= (IData)(vlSelfRef.__PVT__sig_b_aligned))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [1U][4U] 
                                              >> 0xfU));
    } else {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_b_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_a_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [1U][5U] 
                                              >> 0xfU));
    }
    vlSelfRef.__PVT__exp_result = vlSelfRef.__PVT__exp_max;
    if ((0x4000U & (IData)(vlSelfRef.__PVT__sig_sum))) {
        vlSelfRef.__PVT__exp_result = (0x1fU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__exp_result)));
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 4U));
    } else {
        while ((((~ ((IData)(vlSelfRef.__PVT__sig_sum) 
                     >> 0xdU)) & (0U < (IData)(vlSelfRef.__PVT__exp_result))) 
                & (0U != (IData)(vlSelfRef.__PVT__sig_sum)))) {
            vlSelfRef.__PVT__sig_sum = (0x7fffU & VL_SHIFTL_III(15,15,32, (IData)(vlSelfRef.__PVT__sig_sum), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(vlSelfRef.__PVT__exp_result) 
                                            - (IData)(1U)));
        }
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 3U));
    }
    vlSelfRef.__PVT__guard = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                    >> 2U));
    vlSelfRef.__PVT__round_bit = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                        >> 1U));
    vlSelfRef.__PVT__sticky = (1U & (IData)(vlSelfRef.__PVT__sig_sum));
    if (((IData)(vlSelfRef.__PVT__guard) & (((IData)(vlSelfRef.__PVT__round_bit) 
                                             | (IData)(vlSelfRef.__PVT__sticky)) 
                                            | (IData)(vlSelfRef.__PVT__sig_result)))) {
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__sig_result)));
        if (((0x400U == (IData)(vlSelfRef.__PVT__sig_result)) 
             | (0U == (IData)(vlSelfRef.__PVT__sig_result)))) {
            vlSelfRef.__PVT__sig_result = (0x7ffU & 
                                           VL_SHIFTR_III(11,11,32, (IData)(vlSelfRef.__PVT__sig_result), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__exp_result)));
        }
    }
    vlSelfRef.__PVT__temp_result = (((0U == (IData)(vlSelfRef.__PVT__exp_result)) 
                                     | (0U == (IData)(vlSelfRef.__PVT__sig_sum)))
                                     ? 0U : (((IData)(vlSelfRef.__PVT__result_sign) 
                                              << 0xfU) 
                                             | (((IData)(vlSelfRef.__PVT__exp_result) 
                                                 << 0xaU) 
                                                | (0x3ffU 
                                                   & (IData)(vlSelfRef.__PVT__sig_result)))));
}

VL_INLINE_OPT void Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__1__KET____DOT__gen_adder__BRA__3__KET____DOT__adder__0(Vtop_float16_adder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__1__KET____DOT__gen_adder__BRA__3__KET____DOT__adder__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sig_a = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [1U]
                                               [6U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [1U][6U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [1U]
                                                  [6U])));
    vlSelfRef.__PVT__sig_b = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [1U]
                                               [7U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [1U][7U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [1U]
                                                  [7U])));
    if (((0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                   [1U][6U] >> 0xaU)) > (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [1U]
                                                  [7U] 
                                                  >> 0xaU)))) {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [1U]
                                               [6U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [1U]
                                                 [7U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_a_aligned = ((IData)(vlSelfRef.__PVT__sig_a) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_b_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_b));
        } else {
            vlSelfRef.__PVT__sig_b_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_b) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_b_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_b_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_b) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [1U][6U] 
                                             >> 0xaU));
    } else {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [1U]
                                               [7U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [1U]
                                                 [6U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_b_aligned = ((IData)(vlSelfRef.__PVT__sig_b) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_a_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_a));
        } else {
            vlSelfRef.__PVT__sig_a_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_a) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_a_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_a_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_a) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [1U][7U] 
                                             >> 0xaU));
    }
    if (((1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                [1U][6U] >> 0xfU)) == (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [1U][7U] 
                                             >> 0xfU)))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               + (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [1U][6U] 
                                              >> 0xfU));
    } else if (((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                >= (IData)(vlSelfRef.__PVT__sig_b_aligned))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [1U][6U] 
                                              >> 0xfU));
    } else {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_b_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_a_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [1U][7U] 
                                              >> 0xfU));
    }
    vlSelfRef.__PVT__exp_result = vlSelfRef.__PVT__exp_max;
    if ((0x4000U & (IData)(vlSelfRef.__PVT__sig_sum))) {
        vlSelfRef.__PVT__exp_result = (0x1fU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__exp_result)));
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 4U));
    } else {
        while ((((~ ((IData)(vlSelfRef.__PVT__sig_sum) 
                     >> 0xdU)) & (0U < (IData)(vlSelfRef.__PVT__exp_result))) 
                & (0U != (IData)(vlSelfRef.__PVT__sig_sum)))) {
            vlSelfRef.__PVT__sig_sum = (0x7fffU & VL_SHIFTL_III(15,15,32, (IData)(vlSelfRef.__PVT__sig_sum), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(vlSelfRef.__PVT__exp_result) 
                                            - (IData)(1U)));
        }
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 3U));
    }
    vlSelfRef.__PVT__guard = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                    >> 2U));
    vlSelfRef.__PVT__round_bit = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                        >> 1U));
    vlSelfRef.__PVT__sticky = (1U & (IData)(vlSelfRef.__PVT__sig_sum));
    if (((IData)(vlSelfRef.__PVT__guard) & (((IData)(vlSelfRef.__PVT__round_bit) 
                                             | (IData)(vlSelfRef.__PVT__sticky)) 
                                            | (IData)(vlSelfRef.__PVT__sig_result)))) {
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__sig_result)));
        if (((0x400U == (IData)(vlSelfRef.__PVT__sig_result)) 
             | (0U == (IData)(vlSelfRef.__PVT__sig_result)))) {
            vlSelfRef.__PVT__sig_result = (0x7ffU & 
                                           VL_SHIFTR_III(11,11,32, (IData)(vlSelfRef.__PVT__sig_result), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__exp_result)));
        }
    }
    vlSelfRef.__PVT__temp_result = (((0U == (IData)(vlSelfRef.__PVT__exp_result)) 
                                     | (0U == (IData)(vlSelfRef.__PVT__sig_sum)))
                                     ? 0U : (((IData)(vlSelfRef.__PVT__result_sign) 
                                              << 0xfU) 
                                             | (((IData)(vlSelfRef.__PVT__exp_result) 
                                                 << 0xaU) 
                                                | (0x3ffU 
                                                   & (IData)(vlSelfRef.__PVT__sig_result)))));
}

VL_INLINE_OPT void Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__2__KET____DOT__gen_adder__BRA__0__KET____DOT__adder__0(Vtop_float16_adder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__2__KET____DOT__gen_adder__BRA__0__KET____DOT__adder__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sig_a = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [2U]
                                               [0U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [2U][0U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [2U]
                                                  [0U])));
    vlSelfRef.__PVT__sig_b = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [2U]
                                               [1U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [2U][1U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [2U]
                                                  [1U])));
    if (((0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                   [2U][0U] >> 0xaU)) > (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [2U]
                                                  [1U] 
                                                  >> 0xaU)))) {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [2U]
                                               [0U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [2U]
                                                 [1U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_a_aligned = ((IData)(vlSelfRef.__PVT__sig_a) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_b_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_b));
        } else {
            vlSelfRef.__PVT__sig_b_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_b) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_b_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_b_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_b) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [2U][0U] 
                                             >> 0xaU));
    } else {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [2U]
                                               [1U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [2U]
                                                 [0U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_b_aligned = ((IData)(vlSelfRef.__PVT__sig_b) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_a_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_a));
        } else {
            vlSelfRef.__PVT__sig_a_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_a) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_a_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_a_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_a) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [2U][1U] 
                                             >> 0xaU));
    }
    if (((1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                [2U][0U] >> 0xfU)) == (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [2U][1U] 
                                             >> 0xfU)))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               + (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [2U][0U] 
                                              >> 0xfU));
    } else if (((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                >= (IData)(vlSelfRef.__PVT__sig_b_aligned))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [2U][0U] 
                                              >> 0xfU));
    } else {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_b_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_a_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [2U][1U] 
                                              >> 0xfU));
    }
    vlSelfRef.__PVT__exp_result = vlSelfRef.__PVT__exp_max;
    if ((0x4000U & (IData)(vlSelfRef.__PVT__sig_sum))) {
        vlSelfRef.__PVT__exp_result = (0x1fU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__exp_result)));
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 4U));
    } else {
        while ((((~ ((IData)(vlSelfRef.__PVT__sig_sum) 
                     >> 0xdU)) & (0U < (IData)(vlSelfRef.__PVT__exp_result))) 
                & (0U != (IData)(vlSelfRef.__PVT__sig_sum)))) {
            vlSelfRef.__PVT__sig_sum = (0x7fffU & VL_SHIFTL_III(15,15,32, (IData)(vlSelfRef.__PVT__sig_sum), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(vlSelfRef.__PVT__exp_result) 
                                            - (IData)(1U)));
        }
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 3U));
    }
    vlSelfRef.__PVT__guard = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                    >> 2U));
    vlSelfRef.__PVT__round_bit = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                        >> 1U));
    vlSelfRef.__PVT__sticky = (1U & (IData)(vlSelfRef.__PVT__sig_sum));
    if (((IData)(vlSelfRef.__PVT__guard) & (((IData)(vlSelfRef.__PVT__round_bit) 
                                             | (IData)(vlSelfRef.__PVT__sticky)) 
                                            | (IData)(vlSelfRef.__PVT__sig_result)))) {
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__sig_result)));
        if (((0x400U == (IData)(vlSelfRef.__PVT__sig_result)) 
             | (0U == (IData)(vlSelfRef.__PVT__sig_result)))) {
            vlSelfRef.__PVT__sig_result = (0x7ffU & 
                                           VL_SHIFTR_III(11,11,32, (IData)(vlSelfRef.__PVT__sig_result), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__exp_result)));
        }
    }
    vlSelfRef.__PVT__temp_result = (((0U == (IData)(vlSelfRef.__PVT__exp_result)) 
                                     | (0U == (IData)(vlSelfRef.__PVT__sig_sum)))
                                     ? 0U : (((IData)(vlSelfRef.__PVT__result_sign) 
                                              << 0xfU) 
                                             | (((IData)(vlSelfRef.__PVT__exp_result) 
                                                 << 0xaU) 
                                                | (0x3ffU 
                                                   & (IData)(vlSelfRef.__PVT__sig_result)))));
}

VL_INLINE_OPT void Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__2__KET____DOT__gen_adder__BRA__1__KET____DOT__adder__0(Vtop_float16_adder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_float16_adder___ico_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot__u_adder_tree__DOT__gen_stage__BRA__2__KET____DOT__gen_adder__BRA__1__KET____DOT__adder__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sig_a = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [2U]
                                               [2U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [2U][2U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [2U]
                                                  [2U])));
    vlSelfRef.__PVT__sig_b = ((0U == (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [2U]
                                               [3U] 
                                               >> 0xaU)))
                               ? (0x3ffU & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                  [2U][3U]) : (0x400U 
                                               | (0x3ffU 
                                                  & vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [2U]
                                                  [3U])));
    if (((0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                   [2U][2U] >> 0xaU)) > (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                  [2U]
                                                  [3U] 
                                                  >> 0xaU)))) {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [2U]
                                               [2U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [2U]
                                                 [3U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_a_aligned = ((IData)(vlSelfRef.__PVT__sig_a) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_b_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_b));
        } else {
            vlSelfRef.__PVT__sig_b_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_b) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_b_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_b_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_b) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [2U][2U] 
                                             >> 0xaU));
    } else {
        vlSelfRef.__PVT__exp_diff = (0x1fU & ((vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                               [2U]
                                               [3U] 
                                               >> 0xaU) 
                                              - (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                                 [2U]
                                                 [2U] 
                                                 >> 0xaU)));
        vlSelfRef.__PVT__sig_b_aligned = ((IData)(vlSelfRef.__PVT__sig_b) 
                                          << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__exp_diff))) {
            vlSelfRef.__PVT__sig_a_aligned = (0U != (IData)(vlSelfRef.__PVT__sig_a));
        } else {
            vlSelfRef.__PVT__sig_a_aligned = (0x3fffU 
                                              & (((IData)(vlSelfRef.__PVT__sig_a) 
                                                  << 3U) 
                                                 >> (IData)(vlSelfRef.__PVT__exp_diff)));
            vlSelfRef.__PVT__sig_a_aligned = ((0x3ffeU 
                                               & (IData)(vlSelfRef.__PVT__sig_a_aligned)) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & VL_SHIFTL_III(14,14,32, 
                                                                  ((IData)(vlSelfRef.__PVT__sig_a) 
                                                                   << 3U), 
                                                                  ((IData)(0xeU) 
                                                                   - (IData)(vlSelfRef.__PVT__exp_diff))))));
        }
        vlSelfRef.__PVT__exp_max = (0x1fU & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [2U][3U] 
                                             >> 0xaU));
    }
    if (((1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                [2U][2U] >> 0xfU)) == (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                             [2U][3U] 
                                             >> 0xfU)))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               + (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [2U][2U] 
                                              >> 0xfU));
    } else if (((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                >= (IData)(vlSelfRef.__PVT__sig_b_aligned))) {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_a_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_b_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [2U][2U] 
                                              >> 0xfU));
    } else {
        vlSelfRef.__PVT__sig_sum = (0x7fffU & ((IData)(vlSelfRef.__PVT__sig_b_aligned) 
                                               - (IData)(vlSelfRef.__PVT__sig_a_aligned)));
        vlSelfRef.__PVT__result_sign = (1U & (vlSymsp->TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot.__PVT__u_adder_tree__DOT__stage
                                              [2U][3U] 
                                              >> 0xfU));
    }
    vlSelfRef.__PVT__exp_result = vlSelfRef.__PVT__exp_max;
    if ((0x4000U & (IData)(vlSelfRef.__PVT__sig_sum))) {
        vlSelfRef.__PVT__exp_result = (0x1fU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__exp_result)));
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 4U));
    } else {
        while ((((~ ((IData)(vlSelfRef.__PVT__sig_sum) 
                     >> 0xdU)) & (0U < (IData)(vlSelfRef.__PVT__exp_result))) 
                & (0U != (IData)(vlSelfRef.__PVT__sig_sum)))) {
            vlSelfRef.__PVT__sig_sum = (0x7fffU & VL_SHIFTL_III(15,15,32, (IData)(vlSelfRef.__PVT__sig_sum), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(vlSelfRef.__PVT__exp_result) 
                                            - (IData)(1U)));
        }
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                                 >> 3U));
    }
    vlSelfRef.__PVT__guard = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                    >> 2U));
    vlSelfRef.__PVT__round_bit = (1U & ((IData)(vlSelfRef.__PVT__sig_sum) 
                                        >> 1U));
    vlSelfRef.__PVT__sticky = (1U & (IData)(vlSelfRef.__PVT__sig_sum));
    if (((IData)(vlSelfRef.__PVT__guard) & (((IData)(vlSelfRef.__PVT__round_bit) 
                                             | (IData)(vlSelfRef.__PVT__sticky)) 
                                            | (IData)(vlSelfRef.__PVT__sig_result)))) {
        vlSelfRef.__PVT__sig_result = (0x7ffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__sig_result)));
        if (((0x400U == (IData)(vlSelfRef.__PVT__sig_result)) 
             | (0U == (IData)(vlSelfRef.__PVT__sig_result)))) {
            vlSelfRef.__PVT__sig_result = (0x7ffU & 
                                           VL_SHIFTR_III(11,11,32, (IData)(vlSelfRef.__PVT__sig_result), 1U));
            vlSelfRef.__PVT__exp_result = (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__exp_result)));
        }
    }
    vlSelfRef.__PVT__temp_result = (((0U == (IData)(vlSelfRef.__PVT__exp_result)) 
                                     | (0U == (IData)(vlSelfRef.__PVT__sig_sum)))
                                     ? 0U : (((IData)(vlSelfRef.__PVT__result_sign) 
                                              << 0xfU) 
                                             | (((IData)(vlSelfRef.__PVT__exp_result) 
                                                 << 0xaU) 
                                                | (0x3ffU 
                                                   & (IData)(vlSelfRef.__PVT__sig_result)))));
}

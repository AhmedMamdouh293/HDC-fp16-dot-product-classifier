// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop_partial_dot.h"

VL_INLINE_OPT void Vtop_partial_dot___nba_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__0__KET____DOT__u_partial_dot__2(Vtop_partial_dot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_partial_dot___nba_sequent__TOP__top__DOT__GEN_PARTIAL__BRA__0__KET____DOT__u_partial_dot__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((0x1fU & ((IData)(vlSelfRef.accum_dout) >> 0xaU)) 
         > (0x1fU & ((IData)(vlSelfRef.__PVT__ad_out) 
                     >> 0xaU)))) {
        vlSelfRef.__PVT__u_accum__DOT__adder__DOT__exp_diff 
            = (0x1fU & (((IData)(vlSelfRef.accum_dout) 
                         >> 0xaU) - ((IData)(vlSelfRef.__PVT__ad_out) 
                                     >> 0xaU)));
        vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_a_aligned 
            = ((IData)(vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_a) 
               << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__u_accum__DOT__adder__DOT__exp_diff))) {
            vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_b_aligned 
                = (0U != (IData)(vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_b));
        } else {
            vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_b_aligned 
                = (0x3fffU & (((IData)(vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_b) 
                               << 3U) >> (IData)(vlSelfRef.__PVT__u_accum__DOT__adder__DOT__exp_diff)));
            vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_b_aligned 
                = ((0x3ffeU & (IData)(vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_b_aligned)) 
                   | (0U != (0x3fffU & VL_SHIFTL_III(14,14,32, 
                                                     ((IData)(vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_b) 
                                                      << 3U), 
                                                     ((IData)(0xeU) 
                                                      - (IData)(vlSelfRef.__PVT__u_accum__DOT__adder__DOT__exp_diff))))));
        }
        vlSelfRef.__PVT__u_accum__DOT__adder__DOT__exp_max 
            = (0x1fU & ((IData)(vlSelfRef.accum_dout) 
                        >> 0xaU));
    } else {
        vlSelfRef.__PVT__u_accum__DOT__adder__DOT__exp_diff 
            = (0x1fU & (((IData)(vlSelfRef.__PVT__ad_out) 
                         >> 0xaU) - ((IData)(vlSelfRef.accum_dout) 
                                     >> 0xaU)));
        vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_b_aligned 
            = ((IData)(vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_b) 
               << 3U);
        if ((0xdU <= (IData)(vlSelfRef.__PVT__u_accum__DOT__adder__DOT__exp_diff))) {
            vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_a_aligned 
                = (0U != (IData)(vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_a));
        } else {
            vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_a_aligned 
                = (0x3fffU & (((IData)(vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_a) 
                               << 3U) >> (IData)(vlSelfRef.__PVT__u_accum__DOT__adder__DOT__exp_diff)));
            vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_a_aligned 
                = ((0x3ffeU & (IData)(vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_a_aligned)) 
                   | (0U != (0x3fffU & VL_SHIFTL_III(14,14,32, 
                                                     ((IData)(vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_a) 
                                                      << 3U), 
                                                     ((IData)(0xeU) 
                                                      - (IData)(vlSelfRef.__PVT__u_accum__DOT__adder__DOT__exp_diff))))));
        }
        vlSelfRef.__PVT__u_accum__DOT__adder__DOT__exp_max 
            = (0x1fU & ((IData)(vlSelfRef.__PVT__ad_out) 
                        >> 0xaU));
    }
    if (((1U & ((IData)(vlSelfRef.accum_dout) >> 0xfU)) 
         == (1U & ((IData)(vlSelfRef.__PVT__ad_out) 
                   >> 0xfU)))) {
        vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_sum 
            = (0x7fffU & ((IData)(vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_a_aligned) 
                          + (IData)(vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_b_aligned)));
        vlSelfRef.__PVT__u_accum__DOT__adder__DOT__result_sign 
            = (1U & ((IData)(vlSelfRef.accum_dout) 
                     >> 0xfU));
    } else if (((IData)(vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_a_aligned) 
                >= (IData)(vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_b_aligned))) {
        vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_sum 
            = (0x7fffU & ((IData)(vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_a_aligned) 
                          - (IData)(vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_b_aligned)));
        vlSelfRef.__PVT__u_accum__DOT__adder__DOT__result_sign 
            = (1U & ((IData)(vlSelfRef.accum_dout) 
                     >> 0xfU));
    } else {
        vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_sum 
            = (0x7fffU & ((IData)(vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_b_aligned) 
                          - (IData)(vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_a_aligned)));
        vlSelfRef.__PVT__u_accum__DOT__adder__DOT__result_sign 
            = (1U & ((IData)(vlSelfRef.__PVT__ad_out) 
                     >> 0xfU));
    }
    vlSelfRef.__PVT__u_accum__DOT__adder__DOT__exp_result 
        = vlSelfRef.__PVT__u_accum__DOT__adder__DOT__exp_max;
    if ((0x4000U & (IData)(vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_sum))) {
        vlSelfRef.__PVT__u_accum__DOT__adder__DOT__exp_result 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_accum__DOT__adder__DOT__exp_result)));
        vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_result 
            = (0x7ffU & ((IData)(vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_sum) 
                         >> 4U));
    } else {
        while ((((~ ((IData)(vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_sum) 
                     >> 0xdU)) & (0U < (IData)(vlSelfRef.__PVT__u_accum__DOT__adder__DOT__exp_result))) 
                & (0U != (IData)(vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_sum)))) {
            vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_sum 
                = (0x7fffU & VL_SHIFTL_III(15,15,32, (IData)(vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_sum), 1U));
            vlSelfRef.__PVT__u_accum__DOT__adder__DOT__exp_result 
                = (0x1fU & ((IData)(vlSelfRef.__PVT__u_accum__DOT__adder__DOT__exp_result) 
                            - (IData)(1U)));
        }
        vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_result 
            = (0x7ffU & ((IData)(vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_sum) 
                         >> 3U));
    }
    vlSelfRef.__PVT__u_accum__DOT__adder__DOT__guard 
        = (1U & ((IData)(vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_sum) 
                 >> 2U));
    vlSelfRef.__PVT__u_accum__DOT__adder__DOT__round_bit 
        = (1U & ((IData)(vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_sum) 
                 >> 1U));
    vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sticky 
        = (1U & (IData)(vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_sum));
    if (((IData)(vlSelfRef.__PVT__u_accum__DOT__adder__DOT__guard) 
         & (((IData)(vlSelfRef.__PVT__u_accum__DOT__adder__DOT__round_bit) 
             | (IData)(vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sticky)) 
            | (IData)(vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_result)))) {
        vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_result 
            = (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_result)));
        if (((0x400U == (IData)(vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_result)) 
             | (0U == (IData)(vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_result)))) {
            vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_result 
                = (0x7ffU & VL_SHIFTR_III(11,11,32, (IData)(vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_result), 1U));
            vlSelfRef.__PVT__u_accum__DOT__adder__DOT__exp_result 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_accum__DOT__adder__DOT__exp_result)));
        }
    }
    vlSelfRef.__PVT__u_accum__DOT__temp = (((0U == (IData)(vlSelfRef.__PVT__u_accum__DOT__adder__DOT__exp_result)) 
                                            | (0U == (IData)(vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_sum)))
                                            ? 0U : 
                                           (((IData)(vlSelfRef.__PVT__u_accum__DOT__adder__DOT__result_sign) 
                                             << 0xfU) 
                                            | (((IData)(vlSelfRef.__PVT__u_accum__DOT__adder__DOT__exp_result) 
                                                << 0xaU) 
                                               | (0x3ffU 
                                                  & (IData)(vlSelfRef.__PVT__u_accum__DOT__adder__DOT__sig_result)))));
}

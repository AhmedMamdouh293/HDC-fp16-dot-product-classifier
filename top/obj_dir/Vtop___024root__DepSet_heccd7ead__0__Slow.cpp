// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("top.sv", 8, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @( top.GEN_PARTIAL[0].u_partial_dot.ad_out)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @( top.GEN_PARTIAL[0].u_partial_dot.accum_dout)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @( top.GEN_PARTIAL[1].u_partial_dot.ad_out)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @( top.GEN_PARTIAL[1].u_partial_dot.accum_dout)\n");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @( top.GEN_PARTIAL[2].u_partial_dot.ad_out)\n");
    }
    if ((0x80ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @( top.GEN_PARTIAL[2].u_partial_dot.accum_dout)\n");
    }
    if ((0x100ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @( top.GEN_PARTIAL[3].u_partial_dot.ad_out)\n");
    }
    if ((0x200ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @( top.GEN_PARTIAL[3].u_partial_dot.accum_dout)\n");
    }
    if ((0x400ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @( top.GEN_PARTIAL[4].u_partial_dot.ad_out)\n");
    }
    if ((0x800ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 11 is active: @( top.GEN_PARTIAL[4].u_partial_dot.accum_dout)\n");
    }
    if ((0x1000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 12 is active: @( top.GEN_PARTIAL[5].u_partial_dot.ad_out)\n");
    }
    if ((0x2000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 13 is active: @( top.GEN_PARTIAL[5].u_partial_dot.accum_dout)\n");
    }
    if ((0x4000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 14 is active: @( top.GEN_PARTIAL[6].u_partial_dot.ad_out)\n");
    }
    if ((0x8000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 15 is active: @( top.GEN_PARTIAL[6].u_partial_dot.accum_dout)\n");
    }
    if ((0x10000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 16 is active: @( top.GEN_PARTIAL[7].u_partial_dot.ad_out)\n");
    }
    if ((0x20000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 17 is active: @( top.GEN_PARTIAL[7].u_partial_dot.accum_dout)\n");
    }
    if ((0x40000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 18 is active: @( top.GEN_PARTIAL[8].u_partial_dot.ad_out)\n");
    }
    if ((0x80000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 19 is active: @( top.GEN_PARTIAL[8].u_partial_dot.accum_dout)\n");
    }
    if ((0x100000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 20 is active: @( top.GEN_PARTIAL[9].u_partial_dot.ad_out)\n");
    }
    if ((0x200000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 21 is active: @( top.GEN_PARTIAL[9].u_partial_dot.accum_dout)\n");
    }
    if ((0x400000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 22 is active: @( top.GEN_PARTIAL[10].u_partial_dot.ad_out)\n");
    }
    if ((0x800000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 23 is active: @( top.GEN_PARTIAL[10].u_partial_dot.accum_dout)\n");
    }
    if ((0x1000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 24 is active: @( top.GEN_PARTIAL[11].u_partial_dot.ad_out)\n");
    }
    if ((0x2000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 25 is active: @( top.GEN_PARTIAL[11].u_partial_dot.accum_dout)\n");
    }
    if ((0x4000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 26 is active: @( top.GEN_PARTIAL[12].u_partial_dot.ad_out)\n");
    }
    if ((0x8000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 27 is active: @( top.GEN_PARTIAL[12].u_partial_dot.accum_dout)\n");
    }
    if ((0x10000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 28 is active: @( top.GEN_PARTIAL[13].u_partial_dot.ad_out)\n");
    }
    if ((0x20000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 29 is active: @( top.GEN_PARTIAL[13].u_partial_dot.accum_dout)\n");
    }
    if ((0x40000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 30 is active: @( top.GEN_PARTIAL[14].u_partial_dot.ad_out)\n");
    }
    if ((0x80000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 31 is active: @( top.GEN_PARTIAL[14].u_partial_dot.accum_dout)\n");
    }
    if ((0x100000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 32 is active: @( top.GEN_PARTIAL[15].u_partial_dot.ad_out)\n");
    }
    if ((0x200000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 33 is active: @( top.GEN_PARTIAL[15].u_partial_dot.accum_dout)\n");
    }
    if ((0x400000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 34 is active: @( top.GEN_PARTIAL[16].u_partial_dot.ad_out)\n");
    }
    if ((0x800000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 35 is active: @( top.GEN_PARTIAL[16].u_partial_dot.accum_dout)\n");
    }
    if ((0x1000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 36 is active: @( top.GEN_PARTIAL[17].u_partial_dot.ad_out)\n");
    }
    if ((0x2000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 37 is active: @( top.GEN_PARTIAL[17].u_partial_dot.accum_dout)\n");
    }
    if ((0x4000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 38 is active: @( top.GEN_PARTIAL[18].u_partial_dot.ad_out)\n");
    }
    if ((0x8000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 39 is active: @( top.GEN_PARTIAL[18].u_partial_dot.accum_dout)\n");
    }
    if ((0x10000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 40 is active: @( top.GEN_PARTIAL[19].u_partial_dot.ad_out)\n");
    }
    if ((0x20000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 41 is active: @( top.GEN_PARTIAL[19].u_partial_dot.accum_dout)\n");
    }
    if ((0x40000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 42 is active: @( top.GEN_PARTIAL[20].u_partial_dot.ad_out)\n");
    }
    if ((0x80000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 43 is active: @( top.GEN_PARTIAL[20].u_partial_dot.accum_dout)\n");
    }
    if ((0x100000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 44 is active: @( top.GEN_PARTIAL[21].u_partial_dot.ad_out)\n");
    }
    if ((0x200000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 45 is active: @( top.GEN_PARTIAL[21].u_partial_dot.accum_dout)\n");
    }
    if ((0x400000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 46 is active: @( top.GEN_PARTIAL[22].u_partial_dot.ad_out)\n");
    }
    if ((0x800000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 47 is active: @( top.GEN_PARTIAL[22].u_partial_dot.accum_dout)\n");
    }
    if ((0x1000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 48 is active: @( top.GEN_PARTIAL[23].u_partial_dot.ad_out)\n");
    }
    if ((0x2000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 49 is active: @( top.GEN_PARTIAL[23].u_partial_dot.accum_dout)\n");
    }
    if ((0x4000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 50 is active: @( top.GEN_PARTIAL[24].u_partial_dot.ad_out)\n");
    }
    if ((0x8000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 51 is active: @( top.GEN_PARTIAL[24].u_partial_dot.accum_dout)\n");
    }
    if ((0x10000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 52 is active: @( top.GEN_PARTIAL[25].u_partial_dot.ad_out)\n");
    }
    if ((0x20000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 53 is active: @( top.GEN_PARTIAL[25].u_partial_dot.accum_dout)\n");
    }
    if ((0x40000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 54 is active: @( top.GEN_PARTIAL[26].u_partial_dot.ad_out)\n");
    }
    if ((0x80000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 55 is active: @( top.GEN_PARTIAL[26].u_partial_dot.accum_dout)\n");
    }
    if ((0x100000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 56 is active: @( top.GEN_PARTIAL[27].u_partial_dot.ad_out)\n");
    }
    if ((0x200000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 57 is active: @( top.GEN_PARTIAL[27].u_partial_dot.accum_dout)\n");
    }
    if ((0x400000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 58 is active: @( top.GEN_PARTIAL[28].u_partial_dot.ad_out)\n");
    }
    if ((0x800000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 59 is active: @( top.GEN_PARTIAL[28].u_partial_dot.accum_dout)\n");
    }
    if ((0x1000000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 60 is active: @( top.GEN_PARTIAL[29].u_partial_dot.ad_out)\n");
    }
    if ((0x2000000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 61 is active: @( top.GEN_PARTIAL[29].u_partial_dot.accum_dout)\n");
    }
    if ((0x4000000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 62 is active: @( top.GEN_PARTIAL[30].u_partial_dot.ad_out)\n");
    }
    if ((0x8000000000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 63 is active: @( top.GEN_PARTIAL[30].u_partial_dot.accum_dout)\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 64 is active: @( top.GEN_PARTIAL[31].u_partial_dot.ad_out)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 65 is active: @( top.GEN_PARTIAL[31].u_partial_dot.accum_dout)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @( top.GEN_PARTIAL[0].u_partial_dot.ad_out)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @( top.GEN_PARTIAL[0].u_partial_dot.accum_dout)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @( top.GEN_PARTIAL[1].u_partial_dot.ad_out)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @( top.GEN_PARTIAL[1].u_partial_dot.accum_dout)\n");
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @( top.GEN_PARTIAL[2].u_partial_dot.ad_out)\n");
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @( top.GEN_PARTIAL[2].u_partial_dot.accum_dout)\n");
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @( top.GEN_PARTIAL[3].u_partial_dot.ad_out)\n");
    }
    if ((0x200ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @( top.GEN_PARTIAL[3].u_partial_dot.accum_dout)\n");
    }
    if ((0x400ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @( top.GEN_PARTIAL[4].u_partial_dot.ad_out)\n");
    }
    if ((0x800ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 11 is active: @( top.GEN_PARTIAL[4].u_partial_dot.accum_dout)\n");
    }
    if ((0x1000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 12 is active: @( top.GEN_PARTIAL[5].u_partial_dot.ad_out)\n");
    }
    if ((0x2000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 13 is active: @( top.GEN_PARTIAL[5].u_partial_dot.accum_dout)\n");
    }
    if ((0x4000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 14 is active: @( top.GEN_PARTIAL[6].u_partial_dot.ad_out)\n");
    }
    if ((0x8000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 15 is active: @( top.GEN_PARTIAL[6].u_partial_dot.accum_dout)\n");
    }
    if ((0x10000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 16 is active: @( top.GEN_PARTIAL[7].u_partial_dot.ad_out)\n");
    }
    if ((0x20000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 17 is active: @( top.GEN_PARTIAL[7].u_partial_dot.accum_dout)\n");
    }
    if ((0x40000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 18 is active: @( top.GEN_PARTIAL[8].u_partial_dot.ad_out)\n");
    }
    if ((0x80000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 19 is active: @( top.GEN_PARTIAL[8].u_partial_dot.accum_dout)\n");
    }
    if ((0x100000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 20 is active: @( top.GEN_PARTIAL[9].u_partial_dot.ad_out)\n");
    }
    if ((0x200000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 21 is active: @( top.GEN_PARTIAL[9].u_partial_dot.accum_dout)\n");
    }
    if ((0x400000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 22 is active: @( top.GEN_PARTIAL[10].u_partial_dot.ad_out)\n");
    }
    if ((0x800000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 23 is active: @( top.GEN_PARTIAL[10].u_partial_dot.accum_dout)\n");
    }
    if ((0x1000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 24 is active: @( top.GEN_PARTIAL[11].u_partial_dot.ad_out)\n");
    }
    if ((0x2000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 25 is active: @( top.GEN_PARTIAL[11].u_partial_dot.accum_dout)\n");
    }
    if ((0x4000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 26 is active: @( top.GEN_PARTIAL[12].u_partial_dot.ad_out)\n");
    }
    if ((0x8000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 27 is active: @( top.GEN_PARTIAL[12].u_partial_dot.accum_dout)\n");
    }
    if ((0x10000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 28 is active: @( top.GEN_PARTIAL[13].u_partial_dot.ad_out)\n");
    }
    if ((0x20000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 29 is active: @( top.GEN_PARTIAL[13].u_partial_dot.accum_dout)\n");
    }
    if ((0x40000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 30 is active: @( top.GEN_PARTIAL[14].u_partial_dot.ad_out)\n");
    }
    if ((0x80000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 31 is active: @( top.GEN_PARTIAL[14].u_partial_dot.accum_dout)\n");
    }
    if ((0x100000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 32 is active: @( top.GEN_PARTIAL[15].u_partial_dot.ad_out)\n");
    }
    if ((0x200000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 33 is active: @( top.GEN_PARTIAL[15].u_partial_dot.accum_dout)\n");
    }
    if ((0x400000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 34 is active: @( top.GEN_PARTIAL[16].u_partial_dot.ad_out)\n");
    }
    if ((0x800000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 35 is active: @( top.GEN_PARTIAL[16].u_partial_dot.accum_dout)\n");
    }
    if ((0x1000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 36 is active: @( top.GEN_PARTIAL[17].u_partial_dot.ad_out)\n");
    }
    if ((0x2000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 37 is active: @( top.GEN_PARTIAL[17].u_partial_dot.accum_dout)\n");
    }
    if ((0x4000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 38 is active: @( top.GEN_PARTIAL[18].u_partial_dot.ad_out)\n");
    }
    if ((0x8000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 39 is active: @( top.GEN_PARTIAL[18].u_partial_dot.accum_dout)\n");
    }
    if ((0x10000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 40 is active: @( top.GEN_PARTIAL[19].u_partial_dot.ad_out)\n");
    }
    if ((0x20000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 41 is active: @( top.GEN_PARTIAL[19].u_partial_dot.accum_dout)\n");
    }
    if ((0x40000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 42 is active: @( top.GEN_PARTIAL[20].u_partial_dot.ad_out)\n");
    }
    if ((0x80000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 43 is active: @( top.GEN_PARTIAL[20].u_partial_dot.accum_dout)\n");
    }
    if ((0x100000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 44 is active: @( top.GEN_PARTIAL[21].u_partial_dot.ad_out)\n");
    }
    if ((0x200000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 45 is active: @( top.GEN_PARTIAL[21].u_partial_dot.accum_dout)\n");
    }
    if ((0x400000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 46 is active: @( top.GEN_PARTIAL[22].u_partial_dot.ad_out)\n");
    }
    if ((0x800000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 47 is active: @( top.GEN_PARTIAL[22].u_partial_dot.accum_dout)\n");
    }
    if ((0x1000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 48 is active: @( top.GEN_PARTIAL[23].u_partial_dot.ad_out)\n");
    }
    if ((0x2000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 49 is active: @( top.GEN_PARTIAL[23].u_partial_dot.accum_dout)\n");
    }
    if ((0x4000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 50 is active: @( top.GEN_PARTIAL[24].u_partial_dot.ad_out)\n");
    }
    if ((0x8000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 51 is active: @( top.GEN_PARTIAL[24].u_partial_dot.accum_dout)\n");
    }
    if ((0x10000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 52 is active: @( top.GEN_PARTIAL[25].u_partial_dot.ad_out)\n");
    }
    if ((0x20000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 53 is active: @( top.GEN_PARTIAL[25].u_partial_dot.accum_dout)\n");
    }
    if ((0x40000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 54 is active: @( top.GEN_PARTIAL[26].u_partial_dot.ad_out)\n");
    }
    if ((0x80000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 55 is active: @( top.GEN_PARTIAL[26].u_partial_dot.accum_dout)\n");
    }
    if ((0x100000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 56 is active: @( top.GEN_PARTIAL[27].u_partial_dot.ad_out)\n");
    }
    if ((0x200000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 57 is active: @( top.GEN_PARTIAL[27].u_partial_dot.accum_dout)\n");
    }
    if ((0x400000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 58 is active: @( top.GEN_PARTIAL[28].u_partial_dot.ad_out)\n");
    }
    if ((0x800000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 59 is active: @( top.GEN_PARTIAL[28].u_partial_dot.accum_dout)\n");
    }
    if ((0x1000000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 60 is active: @( top.GEN_PARTIAL[29].u_partial_dot.ad_out)\n");
    }
    if ((0x2000000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 61 is active: @( top.GEN_PARTIAL[29].u_partial_dot.accum_dout)\n");
    }
    if ((0x4000000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 62 is active: @( top.GEN_PARTIAL[30].u_partial_dot.ad_out)\n");
    }
    if ((0x8000000000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 63 is active: @( top.GEN_PARTIAL[30].u_partial_dot.accum_dout)\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 64 is active: @( top.GEN_PARTIAL[31].u_partial_dot.ad_out)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 65 is active: @( top.GEN_PARTIAL[31].u_partial_dot.accum_dout)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root____Vm_traceActivitySetAll(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vm_traceActivitySetAll\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
    vlSelfRef.__Vm_traceActivity[6U] = 1U;
    vlSelfRef.__Vm_traceActivity[7U] = 1U;
    vlSelfRef.__Vm_traceActivity[8U] = 1U;
    vlSelfRef.__Vm_traceActivity[9U] = 1U;
    vlSelfRef.__Vm_traceActivity[0xaU] = 1U;
    vlSelfRef.__Vm_traceActivity[0xbU] = 1U;
    vlSelfRef.__Vm_traceActivity[0xcU] = 1U;
    vlSelfRef.__Vm_traceActivity[0xdU] = 1U;
    vlSelfRef.__Vm_traceActivity[0xeU] = 1U;
    vlSelfRef.__Vm_traceActivity[0xfU] = 1U;
    vlSelfRef.__Vm_traceActivity[0x10U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x11U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x12U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x13U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x14U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x15U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x16U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x17U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x18U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x19U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x1aU] = 1U;
    vlSelfRef.__Vm_traceActivity[0x1bU] = 1U;
    vlSelfRef.__Vm_traceActivity[0x1cU] = 1U;
    vlSelfRef.__Vm_traceActivity[0x1dU] = 1U;
    vlSelfRef.__Vm_traceActivity[0x1eU] = 1U;
    vlSelfRef.__Vm_traceActivity[0x1fU] = 1U;
    vlSelfRef.__Vm_traceActivity[0x20U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x21U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x22U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x23U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9867861323841650631ull);
    VL_SCOPED_RAND_RESET_W(8192, vlSelf->in_hv, __VscopeHash, 17881134281694348607ull);
    VL_SCOPED_RAND_RESET_W(8192, vlSelf->class_hv, __VscopeHash, 15203233143838593081ull);
    vlSelf->class_L = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15239358415403312113ull);
    vlSelf->next_cent = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16472635580176796808ull);
    vlSelf->next_class_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14986725472303451327ull);
    vlSelf->pred_label = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18108495200057459415ull);
    vlSelf->done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10296494685231209730ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__pd_out[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 664920245119641599ull);
    }
    vlSelf->top__DOT__done_d = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 708749387674329274ull);
    vlSelf->top__DOT__next_class_d = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7868074359676415105ull);
    vlSelf->top__DOT__label_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16163943948502075440ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(256, vlSelf->top__DOT__class_words[__Vi0], __VscopeHash, 2346213576629742044ull);
    }
    vlSelf->top__DOT__max_clr_d = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15580279166580577727ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT____Vcellinp__u_adder_tree__in[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16761206921157227126ull);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 32; ++__Vi1) {
            vlSelf->top__DOT__u_adder_tree__DOT__stage[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11604144577976281971ull);
        }
    }
    vlSelf->top__DOT__u_adder_tree__DOT__done_pipe = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6995519330661633556ull);
    vlSelf->top__DOT__u_adder_tree__DOT__done_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15652759843169310832ull);
    vlSelf->top__DOT__max_inst__DOT__reg_v = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11759782122272143610ull);
    vlSelf->top__DOT__max_inst__DOT__reg_in = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2780879418101938441ull);
    vlSelf->top__DOT__max_inst__DOT__cmp_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2495317378862077125ull);
    vlSelf->top__DOT__max_inst__DOT__reg_l = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2496695091280404079ull);
    vlSelf->top__DOT__max_inst__DOT__label_in = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14537553055653763152ull);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9526919608049418986ull);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14803524876191471008ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__0__KET____DOT__u_partial_dot____PVT__ad_out__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4045931711521187682ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__0__KET____DOT__u_partial_dot__accum_dout__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12555489868005013803ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__1__KET____DOT__u_partial_dot____PVT__ad_out__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9113952917717592462ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__1__KET____DOT__u_partial_dot__accum_dout__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15809130499692919452ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__2__KET____DOT__u_partial_dot____PVT__ad_out__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16057429604419938177ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__2__KET____DOT__u_partial_dot__accum_dout__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9144170386853499526ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__3__KET____DOT__u_partial_dot____PVT__ad_out__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14092083847006329575ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__3__KET____DOT__u_partial_dot__accum_dout__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8382114544034115435ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__4__KET____DOT__u_partial_dot____PVT__ad_out__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9763027871004125381ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__4__KET____DOT__u_partial_dot__accum_dout__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10814075748089217055ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__5__KET____DOT__u_partial_dot____PVT__ad_out__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4805427656531418132ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__5__KET____DOT__u_partial_dot__accum_dout__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12537507916896928831ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__6__KET____DOT__u_partial_dot____PVT__ad_out__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17000133816209959448ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__6__KET____DOT__u_partial_dot__accum_dout__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12461488659217497030ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__7__KET____DOT__u_partial_dot____PVT__ad_out__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14281177546999783251ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__7__KET____DOT__u_partial_dot__accum_dout__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9763188448415057143ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot____PVT__ad_out__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15712058733234350354ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot__accum_dout__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13695299732323118988ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot____PVT__ad_out__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17598620834343251251ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot__accum_dout__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6130183422244283882ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot____PVT__ad_out__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 386834041648746607ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot__accum_dout__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13024536117913811105ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__11__KET____DOT__u_partial_dot____PVT__ad_out__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12938398938823026952ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__11__KET____DOT__u_partial_dot__accum_dout__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17491601500957826427ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__12__KET____DOT__u_partial_dot____PVT__ad_out__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14479213902130529440ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__12__KET____DOT__u_partial_dot__accum_dout__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1462901395398016886ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__13__KET____DOT__u_partial_dot____PVT__ad_out__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9305817176771293029ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__13__KET____DOT__u_partial_dot__accum_dout__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14498847567038796224ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__14__KET____DOT__u_partial_dot____PVT__ad_out__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2456831135822603351ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__14__KET____DOT__u_partial_dot__accum_dout__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7189395711658110522ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__15__KET____DOT__u_partial_dot____PVT__ad_out__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2838945526944216704ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__15__KET____DOT__u_partial_dot__accum_dout__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6092799480834401815ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__16__KET____DOT__u_partial_dot____PVT__ad_out__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13473668148171083828ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__16__KET____DOT__u_partial_dot__accum_dout__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17161125888162521579ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__17__KET____DOT__u_partial_dot____PVT__ad_out__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 605151143948212899ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__17__KET____DOT__u_partial_dot__accum_dout__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11213903780035217099ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__18__KET____DOT__u_partial_dot____PVT__ad_out__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16065527388951963343ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__18__KET____DOT__u_partial_dot__accum_dout__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1147047111079341647ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__19__KET____DOT__u_partial_dot____PVT__ad_out__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1014239955438047888ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__19__KET____DOT__u_partial_dot__accum_dout__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3538436862936177199ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__20__KET____DOT__u_partial_dot____PVT__ad_out__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3757567676238625626ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__20__KET____DOT__u_partial_dot__accum_dout__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7972762428759700238ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__21__KET____DOT__u_partial_dot____PVT__ad_out__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8778791183949174917ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__21__KET____DOT__u_partial_dot__accum_dout__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5826651159677047466ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__22__KET____DOT__u_partial_dot____PVT__ad_out__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13633943213359529052ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__22__KET____DOT__u_partial_dot__accum_dout__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5721451226047310204ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__23__KET____DOT__u_partial_dot____PVT__ad_out__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8337912505696243529ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__23__KET____DOT__u_partial_dot__accum_dout__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14352699528048841161ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__24__KET____DOT__u_partial_dot____PVT__ad_out__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6890665683723440780ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__24__KET____DOT__u_partial_dot__accum_dout__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18082262251096735ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__25__KET____DOT__u_partial_dot____PVT__ad_out__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18124987217822563213ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__25__KET____DOT__u_partial_dot__accum_dout__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5928043835182526847ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__26__KET____DOT__u_partial_dot____PVT__ad_out__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13705702179098122849ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__26__KET____DOT__u_partial_dot__accum_dout__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12337552367482698605ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__27__KET____DOT__u_partial_dot____PVT__ad_out__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9127760482357483956ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__27__KET____DOT__u_partial_dot__accum_dout__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9883218797116624614ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__28__KET____DOT__u_partial_dot____PVT__ad_out__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10048428911848060762ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__28__KET____DOT__u_partial_dot__accum_dout__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16954405918926879145ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__29__KET____DOT__u_partial_dot____PVT__ad_out__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5971933121185330674ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__29__KET____DOT__u_partial_dot__accum_dout__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 225302176025310993ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__30__KET____DOT__u_partial_dot____PVT__ad_out__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 817988730975819497ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__30__KET____DOT__u_partial_dot__accum_dout__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11685753389228084295ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__31__KET____DOT__u_partial_dot____PVT__ad_out__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14333525973538733969ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__GEN_PARTIAL__BRA__31__KET____DOT__u_partial_dot__accum_dout__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16909404874313927702ull);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 36; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop_float16_adder.h"

VL_ATTR_COLD void Vtop_float16_adder___ctor_var_reset(Vtop_float16_adder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_float16_adder___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 510903276987443985ull);
    vlSelf->b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16900879642891266615ull);
    vlSelf->result = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16664408842984530663ull);
    vlSelf->__PVT__sig_a = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6276398345496070351ull);
    vlSelf->__PVT__sig_b = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 14567657960555063034ull);
    vlSelf->__PVT__exp_diff = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7919643938583336329ull);
    vlSelf->__PVT__sig_a_aligned = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 11215444909888945512ull);
    vlSelf->__PVT__sig_b_aligned = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 6219005070671573458ull);
    vlSelf->__PVT__exp_max = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7152733739622104895ull);
    vlSelf->__PVT__sig_sum = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 17786921967395634007ull);
    vlSelf->__PVT__result_sign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17308944629488939394ull);
    vlSelf->__PVT__exp_result = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11991866297123337945ull);
    vlSelf->__PVT__sig_result = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 17780971867504319544ull);
    vlSelf->__PVT__temp_result = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10300313687733462792ull);
    vlSelf->__PVT__guard = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15864825159782906778ull);
    vlSelf->__PVT__round_bit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5131993818149268831ull);
    vlSelf->__PVT__sticky = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3222081622511111336ull);
}

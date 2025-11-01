// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop_partial_dot.h"

VL_ATTR_COLD void Vtop_partial_dot___ctor_var_reset(Vtop_partial_dot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_partial_dot___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9867861323841650631ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->in_hv, __VscopeHash, 17881134281694348607ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->class_hv, __VscopeHash, 15203233143838593081ull);
    vlSelf->next_cent = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16472635580176796808ull);
    vlSelf->next_class = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15963080721189754542ull);
    vlSelf->max_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7338469415079796552ull);
    vlSelf->max_clr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9840729595464270469ull);
    vlSelf->accum_dout = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13115388535435319917ull);
    vlSelf->done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10296494685231209730ull);
    vlSelf->__PVT__ad_out = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10578481321748810039ull);
    vlSelf->__PVT__ad_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11263736110664454470ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__modified_words[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 452701158740021987ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__Vcellinp__u_adder_tree__in[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 51836143791320137ull);
    }
    vlSelf->__PVT__accum_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2427464723524283587ull);
    vlSelf->__PVT__accum_clr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6960069818724474469ull);
    vlSelf->__PVT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9404372463396948974ull);
    vlSelf->__PVT__next_state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10383377256973303270ull);
    vlSelf->__PVT__class_idx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16185119897206780474ull);
    vlSelf->__PVT__cent_idx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8770652954889748573ull);
    vlSelf->__PVT__data_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3296321098809439440ull);
    vlSelf->__PVT__wait_cnt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8137609131559635390ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__class_words[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12834589981097393075ull);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 16; ++__Vi1) {
            vlSelf->__PVT__u_adder_tree__DOT__stage[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3822156530570676156ull);
        }
    }
    vlSelf->__PVT__u_adder_tree__DOT__done_pipe = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1968783886585064600ull);
    vlSelf->__PVT__u_adder_tree__DOT__done_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15086430534288029082ull);
    vlSelf->__PVT__u_accum__DOT__temp = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 876326331534220936ull);
    vlSelf->__PVT__u_accum__DOT__adder__DOT__sig_a = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1015613336135247720ull);
    vlSelf->__PVT__u_accum__DOT__adder__DOT__sig_b = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 16379430521278662580ull);
    vlSelf->__PVT__u_accum__DOT__adder__DOT__exp_diff = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6414852061175379761ull);
    vlSelf->__PVT__u_accum__DOT__adder__DOT__sig_a_aligned = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 4146602462735544415ull);
    vlSelf->__PVT__u_accum__DOT__adder__DOT__sig_b_aligned = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 8703069430194759199ull);
    vlSelf->__PVT__u_accum__DOT__adder__DOT__exp_max = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4421898367370064106ull);
    vlSelf->__PVT__u_accum__DOT__adder__DOT__sig_sum = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 6425523612425088002ull);
    vlSelf->__PVT__u_accum__DOT__adder__DOT__result_sign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14707678112877537537ull);
    vlSelf->__PVT__u_accum__DOT__adder__DOT__exp_result = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10883219714645066818ull);
    vlSelf->__PVT__u_accum__DOT__adder__DOT__sig_result = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 7636322978752192772ull);
    vlSelf->__PVT__u_accum__DOT__adder__DOT__guard = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 85775051389300870ull);
    vlSelf->__PVT__u_accum__DOT__adder__DOT__round_bit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8035119995995634795ull);
    vlSelf->__PVT__u_accum__DOT__adder__DOT__sticky = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6800409475876004681ull);
    vlSelf->__Vdly__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15137669457351727936ull);
    vlSelf->__Vdly__cent_idx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2690019752927758506ull);
    vlSelf->__Vdly__u_adder_tree__DOT__done_pipe = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4657005063071027795ull);
}

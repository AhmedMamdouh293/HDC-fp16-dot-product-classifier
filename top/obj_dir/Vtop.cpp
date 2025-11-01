// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtop__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtop::Vtop(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtop__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , start{vlSymsp->TOP.start}
    , class_L{vlSymsp->TOP.class_L}
    , next_cent{vlSymsp->TOP.next_cent}
    , next_class_o{vlSymsp->TOP.next_class_o}
    , pred_label{vlSymsp->TOP.pred_label}
    , done{vlSymsp->TOP.done}
    , in_hv{vlSymsp->TOP.in_hv}
    , class_hv{vlSymsp->TOP.class_hv}
    , __PVT__top__DOT__GEN_PARTIAL__BRA__0__KET____DOT__u_partial_dot{vlSymsp->TOP.__PVT__top__DOT__GEN_PARTIAL__BRA__0__KET____DOT__u_partial_dot}
    , __PVT__top__DOT__GEN_PARTIAL__BRA__1__KET____DOT__u_partial_dot{vlSymsp->TOP.__PVT__top__DOT__GEN_PARTIAL__BRA__1__KET____DOT__u_partial_dot}
    , __PVT__top__DOT__GEN_PARTIAL__BRA__2__KET____DOT__u_partial_dot{vlSymsp->TOP.__PVT__top__DOT__GEN_PARTIAL__BRA__2__KET____DOT__u_partial_dot}
    , __PVT__top__DOT__GEN_PARTIAL__BRA__3__KET____DOT__u_partial_dot{vlSymsp->TOP.__PVT__top__DOT__GEN_PARTIAL__BRA__3__KET____DOT__u_partial_dot}
    , __PVT__top__DOT__GEN_PARTIAL__BRA__4__KET____DOT__u_partial_dot{vlSymsp->TOP.__PVT__top__DOT__GEN_PARTIAL__BRA__4__KET____DOT__u_partial_dot}
    , __PVT__top__DOT__GEN_PARTIAL__BRA__5__KET____DOT__u_partial_dot{vlSymsp->TOP.__PVT__top__DOT__GEN_PARTIAL__BRA__5__KET____DOT__u_partial_dot}
    , __PVT__top__DOT__GEN_PARTIAL__BRA__6__KET____DOT__u_partial_dot{vlSymsp->TOP.__PVT__top__DOT__GEN_PARTIAL__BRA__6__KET____DOT__u_partial_dot}
    , __PVT__top__DOT__GEN_PARTIAL__BRA__7__KET____DOT__u_partial_dot{vlSymsp->TOP.__PVT__top__DOT__GEN_PARTIAL__BRA__7__KET____DOT__u_partial_dot}
    , __PVT__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot{vlSymsp->TOP.__PVT__top__DOT__GEN_PARTIAL__BRA__8__KET____DOT__u_partial_dot}
    , __PVT__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot{vlSymsp->TOP.__PVT__top__DOT__GEN_PARTIAL__BRA__9__KET____DOT__u_partial_dot}
    , __PVT__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot{vlSymsp->TOP.__PVT__top__DOT__GEN_PARTIAL__BRA__10__KET____DOT__u_partial_dot}
    , __PVT__top__DOT__GEN_PARTIAL__BRA__11__KET____DOT__u_partial_dot{vlSymsp->TOP.__PVT__top__DOT__GEN_PARTIAL__BRA__11__KET____DOT__u_partial_dot}
    , __PVT__top__DOT__GEN_PARTIAL__BRA__12__KET____DOT__u_partial_dot{vlSymsp->TOP.__PVT__top__DOT__GEN_PARTIAL__BRA__12__KET____DOT__u_partial_dot}
    , __PVT__top__DOT__GEN_PARTIAL__BRA__13__KET____DOT__u_partial_dot{vlSymsp->TOP.__PVT__top__DOT__GEN_PARTIAL__BRA__13__KET____DOT__u_partial_dot}
    , __PVT__top__DOT__GEN_PARTIAL__BRA__14__KET____DOT__u_partial_dot{vlSymsp->TOP.__PVT__top__DOT__GEN_PARTIAL__BRA__14__KET____DOT__u_partial_dot}
    , __PVT__top__DOT__GEN_PARTIAL__BRA__15__KET____DOT__u_partial_dot{vlSymsp->TOP.__PVT__top__DOT__GEN_PARTIAL__BRA__15__KET____DOT__u_partial_dot}
    , __PVT__top__DOT__GEN_PARTIAL__BRA__16__KET____DOT__u_partial_dot{vlSymsp->TOP.__PVT__top__DOT__GEN_PARTIAL__BRA__16__KET____DOT__u_partial_dot}
    , __PVT__top__DOT__GEN_PARTIAL__BRA__17__KET____DOT__u_partial_dot{vlSymsp->TOP.__PVT__top__DOT__GEN_PARTIAL__BRA__17__KET____DOT__u_partial_dot}
    , __PVT__top__DOT__GEN_PARTIAL__BRA__18__KET____DOT__u_partial_dot{vlSymsp->TOP.__PVT__top__DOT__GEN_PARTIAL__BRA__18__KET____DOT__u_partial_dot}
    , __PVT__top__DOT__GEN_PARTIAL__BRA__19__KET____DOT__u_partial_dot{vlSymsp->TOP.__PVT__top__DOT__GEN_PARTIAL__BRA__19__KET____DOT__u_partial_dot}
    , __PVT__top__DOT__GEN_PARTIAL__BRA__20__KET____DOT__u_partial_dot{vlSymsp->TOP.__PVT__top__DOT__GEN_PARTIAL__BRA__20__KET____DOT__u_partial_dot}
    , __PVT__top__DOT__GEN_PARTIAL__BRA__21__KET____DOT__u_partial_dot{vlSymsp->TOP.__PVT__top__DOT__GEN_PARTIAL__BRA__21__KET____DOT__u_partial_dot}
    , __PVT__top__DOT__GEN_PARTIAL__BRA__22__KET____DOT__u_partial_dot{vlSymsp->TOP.__PVT__top__DOT__GEN_PARTIAL__BRA__22__KET____DOT__u_partial_dot}
    , __PVT__top__DOT__GEN_PARTIAL__BRA__23__KET____DOT__u_partial_dot{vlSymsp->TOP.__PVT__top__DOT__GEN_PARTIAL__BRA__23__KET____DOT__u_partial_dot}
    , __PVT__top__DOT__GEN_PARTIAL__BRA__24__KET____DOT__u_partial_dot{vlSymsp->TOP.__PVT__top__DOT__GEN_PARTIAL__BRA__24__KET____DOT__u_partial_dot}
    , __PVT__top__DOT__GEN_PARTIAL__BRA__25__KET____DOT__u_partial_dot{vlSymsp->TOP.__PVT__top__DOT__GEN_PARTIAL__BRA__25__KET____DOT__u_partial_dot}
    , __PVT__top__DOT__GEN_PARTIAL__BRA__26__KET____DOT__u_partial_dot{vlSymsp->TOP.__PVT__top__DOT__GEN_PARTIAL__BRA__26__KET____DOT__u_partial_dot}
    , __PVT__top__DOT__GEN_PARTIAL__BRA__27__KET____DOT__u_partial_dot{vlSymsp->TOP.__PVT__top__DOT__GEN_PARTIAL__BRA__27__KET____DOT__u_partial_dot}
    , __PVT__top__DOT__GEN_PARTIAL__BRA__28__KET____DOT__u_partial_dot{vlSymsp->TOP.__PVT__top__DOT__GEN_PARTIAL__BRA__28__KET____DOT__u_partial_dot}
    , __PVT__top__DOT__GEN_PARTIAL__BRA__29__KET____DOT__u_partial_dot{vlSymsp->TOP.__PVT__top__DOT__GEN_PARTIAL__BRA__29__KET____DOT__u_partial_dot}
    , __PVT__top__DOT__GEN_PARTIAL__BRA__30__KET____DOT__u_partial_dot{vlSymsp->TOP.__PVT__top__DOT__GEN_PARTIAL__BRA__30__KET____DOT__u_partial_dot}
    , __PVT__top__DOT__GEN_PARTIAL__BRA__31__KET____DOT__u_partial_dot{vlSymsp->TOP.__PVT__top__DOT__GEN_PARTIAL__BRA__31__KET____DOT__u_partial_dot}
    , __PVT__top__DOT__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__0__KET____DOT__adder{vlSymsp->TOP.__PVT__top__DOT__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__0__KET____DOT__adder}
    , __PVT__top__DOT__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__1__KET____DOT__adder{vlSymsp->TOP.__PVT__top__DOT__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__1__KET____DOT__adder}
    , __PVT__top__DOT__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__2__KET____DOT__adder{vlSymsp->TOP.__PVT__top__DOT__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__2__KET____DOT__adder}
    , __PVT__top__DOT__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__3__KET____DOT__adder{vlSymsp->TOP.__PVT__top__DOT__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__3__KET____DOT__adder}
    , __PVT__top__DOT__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__4__KET____DOT__adder{vlSymsp->TOP.__PVT__top__DOT__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__4__KET____DOT__adder}
    , __PVT__top__DOT__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__5__KET____DOT__adder{vlSymsp->TOP.__PVT__top__DOT__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__5__KET____DOT__adder}
    , __PVT__top__DOT__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__6__KET____DOT__adder{vlSymsp->TOP.__PVT__top__DOT__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__6__KET____DOT__adder}
    , __PVT__top__DOT__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__7__KET____DOT__adder{vlSymsp->TOP.__PVT__top__DOT__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__7__KET____DOT__adder}
    , __PVT__top__DOT__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__8__KET____DOT__adder{vlSymsp->TOP.__PVT__top__DOT__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__8__KET____DOT__adder}
    , __PVT__top__DOT__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__9__KET____DOT__adder{vlSymsp->TOP.__PVT__top__DOT__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__9__KET____DOT__adder}
    , __PVT__top__DOT__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__10__KET____DOT__adder{vlSymsp->TOP.__PVT__top__DOT__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__10__KET____DOT__adder}
    , __PVT__top__DOT__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__11__KET____DOT__adder{vlSymsp->TOP.__PVT__top__DOT__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__11__KET____DOT__adder}
    , __PVT__top__DOT__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__12__KET____DOT__adder{vlSymsp->TOP.__PVT__top__DOT__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__12__KET____DOT__adder}
    , __PVT__top__DOT__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__13__KET____DOT__adder{vlSymsp->TOP.__PVT__top__DOT__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__13__KET____DOT__adder}
    , __PVT__top__DOT__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__14__KET____DOT__adder{vlSymsp->TOP.__PVT__top__DOT__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__14__KET____DOT__adder}
    , __PVT__top__DOT__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__15__KET____DOT__adder{vlSymsp->TOP.__PVT__top__DOT__u_adder_tree__DOT__gen_stage__BRA__0__KET____DOT__gen_adder__BRA__15__KET____DOT__adder}
    , __PVT__top__DOT__u_adder_tree__DOT__gen_stage__BRA__1__KET____DOT__gen_adder__BRA__0__KET____DOT__adder{vlSymsp->TOP.__PVT__top__DOT__u_adder_tree__DOT__gen_stage__BRA__1__KET____DOT__gen_adder__BRA__0__KET____DOT__adder}
    , __PVT__top__DOT__u_adder_tree__DOT__gen_stage__BRA__1__KET____DOT__gen_adder__BRA__1__KET____DOT__adder{vlSymsp->TOP.__PVT__top__DOT__u_adder_tree__DOT__gen_stage__BRA__1__KET____DOT__gen_adder__BRA__1__KET____DOT__adder}
    , __PVT__top__DOT__u_adder_tree__DOT__gen_stage__BRA__1__KET____DOT__gen_adder__BRA__2__KET____DOT__adder{vlSymsp->TOP.__PVT__top__DOT__u_adder_tree__DOT__gen_stage__BRA__1__KET____DOT__gen_adder__BRA__2__KET____DOT__adder}
    , __PVT__top__DOT__u_adder_tree__DOT__gen_stage__BRA__1__KET____DOT__gen_adder__BRA__3__KET____DOT__adder{vlSymsp->TOP.__PVT__top__DOT__u_adder_tree__DOT__gen_stage__BRA__1__KET____DOT__gen_adder__BRA__3__KET____DOT__adder}
    , __PVT__top__DOT__u_adder_tree__DOT__gen_stage__BRA__1__KET____DOT__gen_adder__BRA__4__KET____DOT__adder{vlSymsp->TOP.__PVT__top__DOT__u_adder_tree__DOT__gen_stage__BRA__1__KET____DOT__gen_adder__BRA__4__KET____DOT__adder}
    , __PVT__top__DOT__u_adder_tree__DOT__gen_stage__BRA__1__KET____DOT__gen_adder__BRA__5__KET____DOT__adder{vlSymsp->TOP.__PVT__top__DOT__u_adder_tree__DOT__gen_stage__BRA__1__KET____DOT__gen_adder__BRA__5__KET____DOT__adder}
    , __PVT__top__DOT__u_adder_tree__DOT__gen_stage__BRA__1__KET____DOT__gen_adder__BRA__6__KET____DOT__adder{vlSymsp->TOP.__PVT__top__DOT__u_adder_tree__DOT__gen_stage__BRA__1__KET____DOT__gen_adder__BRA__6__KET____DOT__adder}
    , __PVT__top__DOT__u_adder_tree__DOT__gen_stage__BRA__1__KET____DOT__gen_adder__BRA__7__KET____DOT__adder{vlSymsp->TOP.__PVT__top__DOT__u_adder_tree__DOT__gen_stage__BRA__1__KET____DOT__gen_adder__BRA__7__KET____DOT__adder}
    , __PVT__top__DOT__u_adder_tree__DOT__gen_stage__BRA__2__KET____DOT__gen_adder__BRA__0__KET____DOT__adder{vlSymsp->TOP.__PVT__top__DOT__u_adder_tree__DOT__gen_stage__BRA__2__KET____DOT__gen_adder__BRA__0__KET____DOT__adder}
    , __PVT__top__DOT__u_adder_tree__DOT__gen_stage__BRA__2__KET____DOT__gen_adder__BRA__1__KET____DOT__adder{vlSymsp->TOP.__PVT__top__DOT__u_adder_tree__DOT__gen_stage__BRA__2__KET____DOT__gen_adder__BRA__1__KET____DOT__adder}
    , __PVT__top__DOT__u_adder_tree__DOT__gen_stage__BRA__2__KET____DOT__gen_adder__BRA__2__KET____DOT__adder{vlSymsp->TOP.__PVT__top__DOT__u_adder_tree__DOT__gen_stage__BRA__2__KET____DOT__gen_adder__BRA__2__KET____DOT__adder}
    , __PVT__top__DOT__u_adder_tree__DOT__gen_stage__BRA__2__KET____DOT__gen_adder__BRA__3__KET____DOT__adder{vlSymsp->TOP.__PVT__top__DOT__u_adder_tree__DOT__gen_stage__BRA__2__KET____DOT__gen_adder__BRA__3__KET____DOT__adder}
    , __PVT__top__DOT__u_adder_tree__DOT__gen_stage__BRA__3__KET____DOT__gen_adder__BRA__0__KET____DOT__adder{vlSymsp->TOP.__PVT__top__DOT__u_adder_tree__DOT__gen_stage__BRA__3__KET____DOT__gen_adder__BRA__0__KET____DOT__adder}
    , __PVT__top__DOT__u_adder_tree__DOT__gen_stage__BRA__3__KET____DOT__gen_adder__BRA__1__KET____DOT__adder{vlSymsp->TOP.__PVT__top__DOT__u_adder_tree__DOT__gen_stage__BRA__3__KET____DOT__gen_adder__BRA__1__KET____DOT__adder}
    , __PVT__top__DOT__u_adder_tree__DOT__gen_stage__BRA__4__KET____DOT__gen_adder__BRA__0__KET____DOT__adder{vlSymsp->TOP.__PVT__top__DOT__u_adder_tree__DOT__gen_stage__BRA__4__KET____DOT__gen_adder__BRA__0__KET____DOT__adder}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vtop::Vtop(const char* _vcname__)
    : Vtop(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtop::~Vtop() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___eval_static(Vtop___024root* vlSelf);
void Vtop___024root___eval_initial(Vtop___024root* vlSelf);
void Vtop___024root___eval_settle(Vtop___024root* vlSelf);
void Vtop___024root___eval(Vtop___024root* vlSelf);

void Vtop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtop___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtop___024root___eval_static(&(vlSymsp->TOP));
        Vtop___024root___eval_initial(&(vlSymsp->TOP));
        Vtop___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtop___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtop::eventsPending() { return false; }

uint64_t Vtop::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtop::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtop___024root___eval_final(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop::final() {
    Vtop___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtop::hierName() const { return vlSymsp->name(); }
const char* Vtop::modelName() const { return "Vtop"; }
unsigned Vtop::threads() const { return 1; }
void Vtop::prepareClone() const { contextp()->prepareClone(); }
void Vtop::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtop::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtop___024root__trace_decl_types(VerilatedVcd* tracep);

void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop___024root__trace_decl_types(tracep);
    Vtop___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtop::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtop::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtop___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}

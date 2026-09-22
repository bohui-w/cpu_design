// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop___024root___eval_sample(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_sample\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in);
void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

bool Vtop___024root___eval_ico(Vtop___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    vlSelfRef.__VicoTriggered[1U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[1U]) 
                                     | (IData)((IData)(firstIteration)));
    {
        // Inlined CFunc: _eval_triggers_vec__ico
        vlSelfRef.__VicoTriggered[0U] = (QData)((IData)(
                                                        (((vlSelfRef.inst 
                                                           != vlSelfRef.__Vtrigprevexpr___TOP__inst__0) 
                                                          << 4U) 
                                                         | (((((IData)(vlSelfRef.M_rdata8) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__M_rdata8__0)) 
                                                              << 3U) 
                                                             | ((vlSelfRef.M_rdata32 
                                                                 != vlSelfRef.__Vtrigprevexpr___TOP__M_rdata32__0) 
                                                                << 2U)) 
                                                            | ((((IData)(vlSelfRef.rst) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst__0)) 
                                                                << 1U) 
                                                               | ((IData)(vlSelfRef.clk) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
        vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
        vlSelfRef.__Vtrigprevexpr___TOP__M_rdata32__0 
            = vlSelfRef.M_rdata32;
        vlSelfRef.__Vtrigprevexpr___TOP__M_rdata8__0 
            = vlSelfRef.M_rdata8;
        vlSelfRef.__Vtrigprevexpr___TOP__inst__0 = vlSelfRef.inst;
        if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VicoDidInit)))))) {
            vlSelfRef.__VicoDidInit = 1U;
            vlSelfRef.__VicoTriggered[0U] = (1ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (2ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (4ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (8ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (0x0000000000000010ULL 
                                             | vlSelfRef.__VicoTriggered[0U]);
        }
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vtop___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        {
            // Inlined CFunc: _eval_body__ico
            if ((0x0000000000000010ULL & vlSelfRef.__VicoTriggered[0U])) {
                Vtop___024root___ico_sequent__TOP__0(vlSelf);
            }
        }
    }
    return (__VicoExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
void Vtop___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);

bool Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((IData)(vlSelfRef.clk) 
                                                         & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__1)))));
        vlSelfRef.__Vtrigprevexpr___TOP__clk__1 = vlSelfRef.clk;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtop___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

bool Vtop___024root___eval_inact(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_inact\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtop___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtop___024root___nba_sequent__TOP__0(vlSelf);
            }
        }
        Vtop___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vtop___024root___eval_obs(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_obs\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vtop___024root___eval_react(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_react\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vtop___024root___eval_postponed(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_postponed\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((2U > n));
    return (0U);
}

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ top__DOT__u_exu__DOT__u_alu__DOT__and_out;
    top__DOT__u_exu__DOT__u_alu__DOT__and_out = 0;
    IData/*31:0*/ top__DOT__u_exu__DOT__u_alu__DOT__xor_out;
    top__DOT__u_exu__DOT__u_alu__DOT__xor_out = 0;
    IData/*31:0*/ top__DOT__u_exu__DOT__u_alu__DOT____Vcellinp__u_adder__b;
    top__DOT__u_exu__DOT__u_alu__DOT____Vcellinp__u_adder__b = 0;
    CData/*0:0*/ top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__30__KET__;
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__30__KET__ = 0;
    CData/*0:0*/ top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__29__KET__;
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__29__KET__ = 0;
    CData/*0:0*/ top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__28__KET__;
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__28__KET__ = 0;
    CData/*0:0*/ top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__27__KET__;
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__27__KET__ = 0;
    CData/*0:0*/ top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__26__KET__;
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__26__KET__ = 0;
    CData/*0:0*/ top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__25__KET__;
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__25__KET__ = 0;
    CData/*0:0*/ top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__24__KET__;
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__24__KET__ = 0;
    CData/*0:0*/ top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__23__KET__;
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__23__KET__ = 0;
    CData/*0:0*/ top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__22__KET__;
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__22__KET__ = 0;
    CData/*0:0*/ top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__21__KET__;
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__21__KET__ = 0;
    CData/*0:0*/ top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__20__KET__;
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__20__KET__ = 0;
    CData/*0:0*/ top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__19__KET__;
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__19__KET__ = 0;
    CData/*0:0*/ top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__18__KET__;
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__18__KET__ = 0;
    CData/*0:0*/ top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__17__KET__;
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__17__KET__ = 0;
    CData/*0:0*/ top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__16__KET__;
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__16__KET__ = 0;
    CData/*0:0*/ top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__15__KET__;
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__15__KET__ = 0;
    CData/*0:0*/ top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__14__KET__;
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__14__KET__ = 0;
    CData/*0:0*/ top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__13__KET__;
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__13__KET__ = 0;
    CData/*0:0*/ top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__12__KET__;
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__12__KET__ = 0;
    CData/*0:0*/ top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__11__KET__;
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__11__KET__ = 0;
    CData/*0:0*/ top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__10__KET__;
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__10__KET__ = 0;
    CData/*0:0*/ top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__9__KET__;
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__9__KET__ = 0;
    CData/*0:0*/ top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__8__KET__;
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__8__KET__ = 0;
    CData/*0:0*/ top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__7__KET__;
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__7__KET__ = 0;
    CData/*0:0*/ top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__6__KET__;
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__6__KET__ = 0;
    CData/*0:0*/ top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__5__KET__;
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__5__KET__ = 0;
    CData/*0:0*/ top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__4__KET__;
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__4__KET__ = 0;
    CData/*0:0*/ top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__3__KET__;
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__3__KET__ = 0;
    CData/*0:0*/ top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__2__KET__;
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__2__KET__ = 0;
    IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_1;
    __VdfgRegularize_h6e95ff9d_0_1 = 0;
    IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_6;
    __VdfgRegularize_h6e95ff9d_0_6 = 0;
    // Body
    vlSelfRef.is_ebreak = (0x00100073U == vlSelfRef.inst);
    __VdfgRegularize_h6e95ff9d_0_1 = (((- (IData)((vlSelfRef.inst 
                                                   >> 0x0000001fU))) 
                                       << 0x0000000cU) 
                                      | (vlSelfRef.inst 
                                         >> 0x00000014U));
    __VdfgRegularize_h6e95ff9d_0_6 = (((- (IData)((vlSelfRef.inst 
                                                   >> 0x0000001fU))) 
                                       << 0x0000000cU) 
                                      | ((0x00000fe0U 
                                          & (vlSelfRef.inst 
                                             >> 0x00000014U)) 
                                         | (0x0000001fU 
                                            & (vlSelfRef.inst 
                                               >> 7U))));
    vlSelfRef.top__DOT__u_idu__DOT__is_sb = (IData)(
                                                    (0x00000023U 
                                                     == 
                                                     (0x0000707fU 
                                                      & vlSelfRef.inst)));
    vlSelfRef.top__DOT__u_idu__DOT__is_lw = (IData)(
                                                    (0x00002003U 
                                                     == 
                                                     (0x0000707fU 
                                                      & vlSelfRef.inst)));
    vlSelfRef.top__DOT__u_idu__DOT__is_lbu = (IData)(
                                                     (0x00004003U 
                                                      == 
                                                      (0x0000707fU 
                                                       & vlSelfRef.inst)));
    vlSelfRef.top__DOT__u_idu__DOT__is_sw = (IData)(
                                                    (0x00002023U 
                                                     == 
                                                     (0x0000707fU 
                                                      & vlSelfRef.inst)));
    vlSelfRef.top__DOT__u_idu__DOT__is_addi = (IData)(
                                                      (0x00000013U 
                                                       == 
                                                       (0x0000707fU 
                                                        & vlSelfRef.inst)));
    vlSelfRef.top__DOT__u_idu__DOT__is_jalr = (IData)(
                                                      (0x00000067U 
                                                       == 
                                                       (0x0000707fU 
                                                        & vlSelfRef.inst)));
    vlSelfRef.top__DOT__u_idu__DOT__is_add = (IData)(
                                                     (0x00000033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelfRef.inst)));
    if (vlSelfRef.top__DOT__u_idu__DOT__is_addi) {
        vlSelfRef.top__DOT__wbu_op = 2U;
        vlSelfRef.top__DOT__imm = __VdfgRegularize_h6e95ff9d_0_1;
    } else {
        vlSelfRef.top__DOT__wbu_op = (3U & (((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_add)
                                              ? 2U : 
                                             (1U & 
                                              (- (IData)(
                                                         (0x37U 
                                                          == 
                                                          (0x0000007fU 
                                                           & vlSelfRef.inst)))))) 
                                            | (- (IData)((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_jalr)))));
        vlSelfRef.top__DOT__imm = ((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_jalr)
                                    ? __VdfgRegularize_h6e95ff9d_0_1
                                    : (((0x37U == (0x0000007fU 
                                                   & vlSelfRef.inst))
                                         ? (0xfffff000U 
                                            & vlSelfRef.inst)
                                         : ((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_lw)
                                             ? __VdfgRegularize_h6e95ff9d_0_1
                                             : ((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_lbu)
                                                 ? __VdfgRegularize_h6e95ff9d_0_1
                                                 : 
                                                ((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_sw)
                                                  ? __VdfgRegularize_h6e95ff9d_0_6
                                                  : 
                                                 (__VdfgRegularize_h6e95ff9d_0_6 
                                                  & (- (IData)((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_sb)))))))) 
                                       & (- (IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.top__DOT__u_idu__DOT__is_add)))))));
    }
    vlSelfRef.M_op = ((~ (IData)(vlSelfRef.top__DOT__u_idu__DOT__is_addi)) 
                      & ((~ (IData)(vlSelfRef.top__DOT__u_idu__DOT__is_jalr)) 
                         & ((~ (IData)(vlSelfRef.top__DOT__u_idu__DOT__is_add)) 
                            & ((0x37U != (0x0000007fU 
                                          & vlSelfRef.inst)) 
                               & ((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_lw) 
                                  | ((~ (IData)(vlSelfRef.top__DOT__u_idu__DOT__is_lbu)) 
                                     & (IData)(vlSelfRef.top__DOT__u_idu__DOT__is_sw)))))));
    vlSelfRef.M_w_en = ((~ (IData)(vlSelfRef.top__DOT__u_idu__DOT__is_addi)) 
                        & ((~ (IData)(vlSelfRef.top__DOT__u_idu__DOT__is_jalr)) 
                           & ((0x37U != (0x0000007fU 
                                         & vlSelfRef.inst)) 
                              & ((~ (IData)(vlSelfRef.top__DOT__u_idu__DOT__is_lw)) 
                                 & ((~ (IData)(vlSelfRef.top__DOT__u_idu__DOT__is_lbu)) 
                                    & ((~ (IData)(vlSelfRef.top__DOT__u_idu__DOT__is_add)) 
                                       & ((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_sb) 
                                          | (IData)(vlSelfRef.top__DOT__u_idu__DOT__is_sw))))))));
    vlSelfRef.M_wdata32 = vlSelfRef.top__DOT__u_gpr__DOT__reg_file
        [(0x0000001fU & ((- (IData)((1U & (~ (IData)(vlSelfRef.top__DOT__u_idu__DOT__is_jalr))))) 
                         & (((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_add)
                              ? (vlSelfRef.inst >> 0x00000014U)
                              : ((- (IData)((1U & (~ (IData)(vlSelfRef.top__DOT__u_idu__DOT__is_lw))))) 
                                 & ((- (IData)((1U 
                                                & (~ (IData)(vlSelfRef.top__DOT__u_idu__DOT__is_lbu))))) 
                                    & (((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_sw)
                                         ? (vlSelfRef.inst 
                                            >> 0x00000014U)
                                         : ((vlSelfRef.inst 
                                             >> 0x00000014U) 
                                            & (- (IData)((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_sb))))) 
                                       & (- (IData)(
                                                    (0x37U 
                                                     != 
                                                     (0x0000007fU 
                                                      & vlSelfRef.inst)))))))) 
                            & (- (IData)((1U & (~ (IData)(vlSelfRef.top__DOT__u_idu__DOT__is_addi))))))))];
    vlSelfRef.M_wdata8 = (0x000000ffU & vlSelfRef.M_wdata32);
    top__DOT__u_exu__DOT__u_alu__DOT____Vcellinp__u_adder__b 
        = (((~ (IData)(vlSelfRef.top__DOT__u_idu__DOT__is_addi)) 
            & ((~ (IData)(vlSelfRef.top__DOT__u_idu__DOT__is_jalr)) 
               & (IData)(vlSelfRef.top__DOT__u_idu__DOT__is_add)))
            ? vlSelfRef.M_wdata32 : vlSelfRef.top__DOT__imm);
    top__DOT__u_exu__DOT__u_alu__DOT__and_out = (top__DOT__u_exu__DOT__u_alu__DOT____Vcellinp__u_adder__b 
                                                 & vlSelfRef.top__DOT__u_gpr__DOT__reg_file
                                                 [(0x0000001fU 
                                                   & ((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_addi)
                                                       ? 
                                                      (vlSelfRef.inst 
                                                       >> 0x0000000fU)
                                                       : 
                                                      ((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_jalr)
                                                        ? 
                                                       (vlSelfRef.inst 
                                                        >> 0x0000000fU)
                                                        : 
                                                       ((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_add)
                                                         ? 
                                                        (vlSelfRef.inst 
                                                         >> 0x0000000fU)
                                                         : 
                                                        (((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_lw)
                                                           ? 
                                                          (vlSelfRef.inst 
                                                           >> 0x0000000fU)
                                                           : 
                                                          ((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_lbu)
                                                            ? 
                                                           (vlSelfRef.inst 
                                                            >> 0x0000000fU)
                                                            : 
                                                           ((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_sw)
                                                             ? 
                                                            (vlSelfRef.inst 
                                                             >> 0x0000000fU)
                                                             : 
                                                            ((vlSelfRef.inst 
                                                              >> 0x0000000fU) 
                                                             & (- (IData)((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_sb))))))) 
                                                         & (- (IData)(
                                                                      (0x37U 
                                                                       != 
                                                                       (0x0000007fU 
                                                                        & vlSelfRef.inst)))))))))]);
    top__DOT__u_exu__DOT__u_alu__DOT__xor_out = (top__DOT__u_exu__DOT__u_alu__DOT____Vcellinp__u_adder__b 
                                                 ^ vlSelfRef.top__DOT__u_gpr__DOT__reg_file
                                                 [(0x0000001fU 
                                                   & ((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_addi)
                                                       ? 
                                                      (vlSelfRef.inst 
                                                       >> 0x0000000fU)
                                                       : 
                                                      ((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_jalr)
                                                        ? 
                                                       (vlSelfRef.inst 
                                                        >> 0x0000000fU)
                                                        : 
                                                       ((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_add)
                                                         ? 
                                                        (vlSelfRef.inst 
                                                         >> 0x0000000fU)
                                                         : 
                                                        (((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_lw)
                                                           ? 
                                                          (vlSelfRef.inst 
                                                           >> 0x0000000fU)
                                                           : 
                                                          ((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_lbu)
                                                            ? 
                                                           (vlSelfRef.inst 
                                                            >> 0x0000000fU)
                                                            : 
                                                           ((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_sw)
                                                             ? 
                                                            (vlSelfRef.inst 
                                                             >> 0x0000000fU)
                                                             : 
                                                            ((vlSelfRef.inst 
                                                              >> 0x0000000fU) 
                                                             & (- (IData)((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_sb))))))) 
                                                         & (- (IData)(
                                                                      (0x37U 
                                                                       != 
                                                                       (0x0000007fU 
                                                                        & vlSelfRef.inst)))))))))]);
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__2__KET__ 
        = (1U & ((top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                  >> 1U) | (top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                            & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                               >> 1U))));
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__3__KET__ 
        = (1U & ((top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                  >> 2U) | ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__2__KET__) 
                            & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                               >> 2U))));
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__4__KET__ 
        = (1U & ((top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                  >> 3U) | ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__3__KET__) 
                            & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                               >> 3U))));
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__5__KET__ 
        = (1U & ((top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                  >> 4U) | ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__4__KET__) 
                            & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                               >> 4U))));
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__6__KET__ 
        = (1U & ((top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                  >> 5U) | ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__5__KET__) 
                            & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                               >> 5U))));
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__7__KET__ 
        = (1U & ((top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                  >> 6U) | ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__6__KET__) 
                            & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                               >> 6U))));
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__8__KET__ 
        = (1U & ((top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                  >> 7U) | ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__7__KET__) 
                            & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                               >> 7U))));
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__9__KET__ 
        = (1U & ((top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                  >> 8U) | ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__8__KET__) 
                            & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                               >> 8U))));
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__10__KET__ 
        = (1U & ((top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                  >> 9U) | ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__9__KET__) 
                            & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                               >> 9U))));
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__11__KET__ 
        = (1U & ((top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                  >> 0x0000000aU) | ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__10__KET__) 
                                     & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                        >> 0x0000000aU))));
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__12__KET__ 
        = (1U & ((top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                  >> 0x0000000bU) | ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__11__KET__) 
                                     & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                        >> 0x0000000bU))));
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__13__KET__ 
        = (1U & ((top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                  >> 0x0000000cU) | ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__12__KET__) 
                                     & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                        >> 0x0000000cU))));
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__14__KET__ 
        = (1U & ((top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                  >> 0x0000000dU) | ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__13__KET__) 
                                     & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                        >> 0x0000000dU))));
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__15__KET__ 
        = (1U & ((top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                  >> 0x0000000eU) | ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__14__KET__) 
                                     & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                        >> 0x0000000eU))));
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__16__KET__ 
        = (1U & ((top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                  >> 0x0000000fU) | ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__15__KET__) 
                                     & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                        >> 0x0000000fU))));
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__17__KET__ 
        = (1U & ((top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                  >> 0x00000010U) | ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__16__KET__) 
                                     & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                        >> 0x00000010U))));
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__18__KET__ 
        = (1U & ((top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                  >> 0x00000011U) | ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__17__KET__) 
                                     & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                        >> 0x00000011U))));
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__19__KET__ 
        = (1U & ((top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                  >> 0x00000012U) | ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__18__KET__) 
                                     & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                        >> 0x00000012U))));
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__20__KET__ 
        = (1U & ((top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                  >> 0x00000013U) | ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__19__KET__) 
                                     & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                        >> 0x00000013U))));
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__21__KET__ 
        = (1U & ((top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                  >> 0x00000014U) | ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__20__KET__) 
                                     & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                        >> 0x00000014U))));
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__22__KET__ 
        = (1U & ((top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                  >> 0x00000015U) | ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__21__KET__) 
                                     & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                        >> 0x00000015U))));
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__23__KET__ 
        = (1U & ((top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                  >> 0x00000016U) | ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__22__KET__) 
                                     & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                        >> 0x00000016U))));
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__24__KET__ 
        = (1U & ((top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                  >> 0x00000017U) | ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__23__KET__) 
                                     & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                        >> 0x00000017U))));
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__25__KET__ 
        = (1U & ((top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                  >> 0x00000018U) | ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__24__KET__) 
                                     & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                        >> 0x00000018U))));
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__26__KET__ 
        = (1U & ((top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                  >> 0x00000019U) | ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__25__KET__) 
                                     & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                        >> 0x00000019U))));
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__27__KET__ 
        = (1U & ((top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                  >> 0x0000001aU) | ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__26__KET__) 
                                     & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                        >> 0x0000001aU))));
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__28__KET__ 
        = (1U & ((top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                  >> 0x0000001bU) | ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__27__KET__) 
                                     & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                        >> 0x0000001bU))));
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__29__KET__ 
        = (1U & ((top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                  >> 0x0000001cU) | ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__28__KET__) 
                                     & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                        >> 0x0000001cU))));
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__30__KET__ 
        = (1U & ((top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                  >> 0x0000001dU) | ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__29__KET__) 
                                     & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                        >> 0x0000001dU))));
    vlSelfRef.M_addr = ((((((((2U & ((((top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                                        >> 0x0000001eU) 
                                       | ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__30__KET__) 
                                          & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                             >> 0x0000001eU))) 
                                      ^ (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                         >> 0x0000001fU)) 
                                     << 1U)) | (1U 
                                                & ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__30__KET__) 
                                                   ^ 
                                                   (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                                    >> 0x0000001eU)))) 
                             << 6U) | (((2U & (((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__29__KET__) 
                                                << 1U) 
                                               ^ (0x0000000eU 
                                                  & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                                     >> 0x0000001cU)))) 
                                        | (1U & ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__28__KET__) 
                                                 ^ 
                                                 (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                                  >> 0x0000001cU)))) 
                                       << 4U)) | ((
                                                   ((2U 
                                                     & (((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__27__KET__) 
                                                         << 1U) 
                                                        ^ 
                                                        (0x0000003eU 
                                                         & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                                            >> 0x0000001aU)))) 
                                                    | (1U 
                                                       & ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__26__KET__) 
                                                          ^ 
                                                          (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                                           >> 0x0000001aU)))) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & (((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__25__KET__) 
                                                          << 1U) 
                                                         ^ 
                                                         (0x000000feU 
                                                          & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                                             >> 0x00000018U)))) 
                                                     | (1U 
                                                        & ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__24__KET__) 
                                                           ^ 
                                                           (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                                            >> 0x00000018U)))))) 
                          << 0x00000018U) | ((((((2U 
                                                  & (((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__23__KET__) 
                                                      << 1U) 
                                                     ^ 
                                                     (0x000003feU 
                                                      & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                                         >> 0x00000016U)))) 
                                                 | (1U 
                                                    & ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__22__KET__) 
                                                       ^ 
                                                       (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                                        >> 0x00000016U)))) 
                                                << 6U) 
                                               | (((2U 
                                                    & (((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__21__KET__) 
                                                        << 1U) 
                                                       ^ 
                                                       (0x00000ffeU 
                                                        & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                                           >> 0x00000014U)))) 
                                                   | (1U 
                                                      & ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__20__KET__) 
                                                         ^ 
                                                         (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                                          >> 0x00000014U)))) 
                                                  << 4U)) 
                                              | ((((2U 
                                                    & (((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__19__KET__) 
                                                        << 1U) 
                                                       ^ 
                                                       (0x00003ffeU 
                                                        & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                                           >> 0x00000012U)))) 
                                                   | (1U 
                                                      & ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__18__KET__) 
                                                         ^ 
                                                         (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                                          >> 0x00000012U)))) 
                                                  << 2U) 
                                                 | ((2U 
                                                     & (((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__17__KET__) 
                                                         << 1U) 
                                                        ^ 
                                                        (0x0000fffeU 
                                                         & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                                            >> 0x00000010U)))) 
                                                    | (1U 
                                                       & ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__16__KET__) 
                                                          ^ 
                                                          (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                                           >> 0x00000010U)))))) 
                                             << 0x00000010U)) 
                        | (((((((2U & (((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__15__KET__) 
                                        << 1U) ^ (0x0003fffeU 
                                                  & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                                     >> 0x0000000eU)))) 
                                | (1U & ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__14__KET__) 
                                         ^ (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                            >> 0x0000000eU)))) 
                               << 6U) | (((2U & (((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__13__KET__) 
                                                  << 1U) 
                                                 ^ 
                                                 (0x000ffffeU 
                                                  & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                                     >> 0x0000000cU)))) 
                                          | (1U & ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__12__KET__) 
                                                   ^ 
                                                   (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                                    >> 0x0000000cU)))) 
                                         << 4U)) | 
                             ((((2U & (((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__11__KET__) 
                                        << 1U) ^ (0x003ffffeU 
                                                  & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                                     >> 0x0000000aU)))) 
                                | (1U & ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__10__KET__) 
                                         ^ (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                            >> 0x0000000aU)))) 
                               << 2U) | ((2U & (((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__9__KET__) 
                                                 << 1U) 
                                                ^ (0x00fffffeU 
                                                   & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                                      >> 8U)))) 
                                         | (1U & ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__8__KET__) 
                                                  ^ 
                                                  (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                                   >> 8U)))))) 
                            << 8U) | (((((2U & (((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__7__KET__) 
                                                 << 1U) 
                                                ^ (0x03fffffeU 
                                                   & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                                      >> 6U)))) 
                                         | (1U & ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__6__KET__) 
                                                  ^ 
                                                  (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                                   >> 6U)))) 
                                        << 6U) | ((
                                                   (2U 
                                                    & (((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__5__KET__) 
                                                        << 1U) 
                                                       ^ 
                                                       (0x0ffffffeU 
                                                        & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                                           >> 4U)))) 
                                                   | (1U 
                                                      & ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__4__KET__) 
                                                         ^ 
                                                         (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                                          >> 4U)))) 
                                                  << 4U)) 
                                      | ((((2U & (((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__3__KET__) 
                                                   << 1U) 
                                                  ^ 
                                                  (0x3ffffffeU 
                                                   & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                                      >> 2U)))) 
                                           | (1U & 
                                              ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__2__KET__) 
                                               ^ (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                                  >> 2U)))) 
                                          << 2U) | 
                                         ((2U & ((top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                                                  << 1U) 
                                                 ^ 
                                                 (0xfffffffeU 
                                                  & top__DOT__u_exu__DOT__u_alu__DOT__xor_out))) 
                                          | (1U & top__DOT__u_exu__DOT__u_alu__DOT__xor_out))))));
}

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ top__DOT__u_exu__DOT__u_alu__DOT__and_out;
    top__DOT__u_exu__DOT__u_alu__DOT__and_out = 0;
    IData/*31:0*/ top__DOT__u_exu__DOT__u_alu__DOT__xor_out;
    top__DOT__u_exu__DOT__u_alu__DOT__xor_out = 0;
    IData/*31:0*/ top__DOT__u_exu__DOT__u_alu__DOT____Vcellinp__u_adder__b;
    top__DOT__u_exu__DOT__u_alu__DOT____Vcellinp__u_adder__b = 0;
    CData/*0:0*/ top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__30__KET__;
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__30__KET__ = 0;
    CData/*0:0*/ top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__29__KET__;
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__29__KET__ = 0;
    CData/*0:0*/ top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__28__KET__;
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__28__KET__ = 0;
    CData/*0:0*/ top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__27__KET__;
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__27__KET__ = 0;
    CData/*0:0*/ top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__26__KET__;
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__26__KET__ = 0;
    CData/*0:0*/ top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__25__KET__;
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__25__KET__ = 0;
    CData/*0:0*/ top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__24__KET__;
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__24__KET__ = 0;
    CData/*0:0*/ top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__23__KET__;
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__23__KET__ = 0;
    CData/*0:0*/ top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__22__KET__;
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__22__KET__ = 0;
    CData/*0:0*/ top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__21__KET__;
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__21__KET__ = 0;
    CData/*0:0*/ top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__20__KET__;
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__20__KET__ = 0;
    CData/*0:0*/ top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__19__KET__;
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__19__KET__ = 0;
    CData/*0:0*/ top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__18__KET__;
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__18__KET__ = 0;
    CData/*0:0*/ top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__17__KET__;
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__17__KET__ = 0;
    CData/*0:0*/ top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__16__KET__;
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__16__KET__ = 0;
    CData/*0:0*/ top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__15__KET__;
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__15__KET__ = 0;
    CData/*0:0*/ top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__14__KET__;
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__14__KET__ = 0;
    CData/*0:0*/ top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__13__KET__;
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__13__KET__ = 0;
    CData/*0:0*/ top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__12__KET__;
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__12__KET__ = 0;
    CData/*0:0*/ top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__11__KET__;
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__11__KET__ = 0;
    CData/*0:0*/ top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__10__KET__;
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__10__KET__ = 0;
    CData/*0:0*/ top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__9__KET__;
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__9__KET__ = 0;
    CData/*0:0*/ top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__8__KET__;
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__8__KET__ = 0;
    CData/*0:0*/ top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__7__KET__;
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__7__KET__ = 0;
    CData/*0:0*/ top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__6__KET__;
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__6__KET__ = 0;
    CData/*0:0*/ top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__5__KET__;
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__5__KET__ = 0;
    CData/*0:0*/ top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__4__KET__;
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__4__KET__ = 0;
    CData/*0:0*/ top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__3__KET__;
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__3__KET__ = 0;
    CData/*0:0*/ top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__2__KET__;
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__2__KET__ = 0;
    VlUnpacked<IData/*31:0*/, 32> __Vdly__top__DOT__u_gpr__DOT__reg_file;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        __Vdly__top__DOT__u_gpr__DOT__reg_file[__Vi0] = 0;
    }
    IData/*31:0*/ __Vdly__inst_addr;
    __Vdly__inst_addr = 0;
    // Body
    __Vdly__inst_addr = vlSelfRef.inst_addr;
    __Vdly__top__DOT__u_gpr__DOT__reg_file = vlSelfRef.top__DOT__u_gpr__DOT__reg_file;
    if (vlSelfRef.rst) {
        __Vdly__inst_addr = 0x80000000U;
        __Vdly__top__DOT__u_gpr__DOT__reg_file[0U] = 0U;
        __Vdly__top__DOT__u_gpr__DOT__reg_file[1U] = 0U;
        __Vdly__top__DOT__u_gpr__DOT__reg_file[2U] = 0U;
        __Vdly__top__DOT__u_gpr__DOT__reg_file[3U] = 0U;
        __Vdly__top__DOT__u_gpr__DOT__reg_file[4U] = 0U;
        __Vdly__top__DOT__u_gpr__DOT__reg_file[5U] = 0U;
        __Vdly__top__DOT__u_gpr__DOT__reg_file[6U] = 0U;
        __Vdly__top__DOT__u_gpr__DOT__reg_file[7U] = 0U;
        __Vdly__top__DOT__u_gpr__DOT__reg_file[8U] = 0U;
        __Vdly__top__DOT__u_gpr__DOT__reg_file[9U] = 0U;
        __Vdly__top__DOT__u_gpr__DOT__reg_file[10U] = 0U;
        __Vdly__top__DOT__u_gpr__DOT__reg_file[11U] = 0U;
        __Vdly__top__DOT__u_gpr__DOT__reg_file[12U] = 0U;
        __Vdly__top__DOT__u_gpr__DOT__reg_file[13U] = 0U;
        __Vdly__top__DOT__u_gpr__DOT__reg_file[14U] = 0U;
        __Vdly__top__DOT__u_gpr__DOT__reg_file[15U] = 0U;
        __Vdly__top__DOT__u_gpr__DOT__reg_file[16U] = 0U;
        __Vdly__top__DOT__u_gpr__DOT__reg_file[17U] = 0U;
        __Vdly__top__DOT__u_gpr__DOT__reg_file[18U] = 0U;
        __Vdly__top__DOT__u_gpr__DOT__reg_file[19U] = 0U;
        __Vdly__top__DOT__u_gpr__DOT__reg_file[20U] = 0U;
        __Vdly__top__DOT__u_gpr__DOT__reg_file[21U] = 0U;
        __Vdly__top__DOT__u_gpr__DOT__reg_file[22U] = 0U;
        __Vdly__top__DOT__u_gpr__DOT__reg_file[23U] = 0U;
        __Vdly__top__DOT__u_gpr__DOT__reg_file[24U] = 0U;
        __Vdly__top__DOT__u_gpr__DOT__reg_file[25U] = 0U;
        __Vdly__top__DOT__u_gpr__DOT__reg_file[26U] = 0U;
        __Vdly__top__DOT__u_gpr__DOT__reg_file[27U] = 0U;
        __Vdly__top__DOT__u_gpr__DOT__reg_file[28U] = 0U;
        __Vdly__top__DOT__u_gpr__DOT__reg_file[29U] = 0U;
        __Vdly__top__DOT__u_gpr__DOT__reg_file[30U] = 0U;
        __Vdly__top__DOT__u_gpr__DOT__reg_file[31U] = 0U;
    } else {
        __Vdly__inst_addr = (((~ (IData)(vlSelfRef.top__DOT__u_idu__DOT__is_addi)) 
                              & (IData)(vlSelfRef.top__DOT__u_idu__DOT__is_jalr))
                              ? (0xfffffffeU & vlSelfRef.M_addr)
                              : ((IData)(4U) + vlSelfRef.inst_addr));
        if (((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_addi) 
             | ((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_jalr) 
                | ((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_add) 
                   | ((0x37U == (0x0000007fU & vlSelfRef.inst)) 
                      | ((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_lw) 
                         | (IData)(vlSelfRef.top__DOT__u_idu__DOT__is_lbu))))))) {
            __Vdly__top__DOT__u_gpr__DOT__reg_file[(0x0000001fU 
                                                    & ((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_addi)
                                                        ? 
                                                       (vlSelfRef.inst 
                                                        >> 7U)
                                                        : 
                                                       ((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_jalr)
                                                         ? 
                                                        (vlSelfRef.inst 
                                                         >> 7U)
                                                         : 
                                                        ((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_add)
                                                          ? 
                                                         (vlSelfRef.inst 
                                                          >> 7U)
                                                          : 
                                                         ((0x37U 
                                                           == 
                                                           (0x0000007fU 
                                                            & vlSelfRef.inst))
                                                           ? 
                                                          (vlSelfRef.inst 
                                                           >> 7U)
                                                           : 
                                                          ((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_lw)
                                                            ? 
                                                           (vlSelfRef.inst 
                                                            >> 7U)
                                                            : 
                                                           ((vlSelfRef.inst 
                                                             >> 7U) 
                                                            & (- (IData)((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_lbu))))))))))] 
                = ((2U & (IData)(vlSelfRef.top__DOT__wbu_op))
                    ? ((1U & (IData)(vlSelfRef.top__DOT__wbu_op))
                        ? ((IData)(4U) + vlSelfRef.inst_addr)
                        : vlSelfRef.M_addr) : ((1U 
                                                & (IData)(vlSelfRef.top__DOT__wbu_op))
                                                ? vlSelfRef.top__DOT__imm
                                                : ((IData)(vlSelfRef.M_op)
                                                    ? vlSelfRef.M_rdata32
                                                    : (IData)(vlSelfRef.M_rdata8))));
        } else {
            __Vdly__top__DOT__u_gpr__DOT__reg_file 
                = vlSelfRef.top__DOT__u_gpr__DOT__reg_file;
        }
    }
    __Vdly__top__DOT__u_gpr__DOT__reg_file[0U] = 0U;
    vlSelfRef.inst_addr = __Vdly__inst_addr;
    vlSelfRef.top__DOT__u_gpr__DOT__reg_file = __Vdly__top__DOT__u_gpr__DOT__reg_file;
    vlSelfRef.M_wdata32 = vlSelfRef.top__DOT__u_gpr__DOT__reg_file
        [(0x0000001fU & ((- (IData)((1U & (~ (IData)(vlSelfRef.top__DOT__u_idu__DOT__is_jalr))))) 
                         & (((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_add)
                              ? (vlSelfRef.inst >> 0x00000014U)
                              : ((- (IData)((1U & (~ (IData)(vlSelfRef.top__DOT__u_idu__DOT__is_lw))))) 
                                 & ((- (IData)((1U 
                                                & (~ (IData)(vlSelfRef.top__DOT__u_idu__DOT__is_lbu))))) 
                                    & (((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_sw)
                                         ? (vlSelfRef.inst 
                                            >> 0x00000014U)
                                         : ((vlSelfRef.inst 
                                             >> 0x00000014U) 
                                            & (- (IData)((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_sb))))) 
                                       & (- (IData)(
                                                    (0x37U 
                                                     != 
                                                     (0x0000007fU 
                                                      & vlSelfRef.inst)))))))) 
                            & (- (IData)((1U & (~ (IData)(vlSelfRef.top__DOT__u_idu__DOT__is_addi))))))))];
    vlSelfRef.M_wdata8 = (0x000000ffU & vlSelfRef.M_wdata32);
    top__DOT__u_exu__DOT__u_alu__DOT____Vcellinp__u_adder__b 
        = (((~ (IData)(vlSelfRef.top__DOT__u_idu__DOT__is_addi)) 
            & ((~ (IData)(vlSelfRef.top__DOT__u_idu__DOT__is_jalr)) 
               & (IData)(vlSelfRef.top__DOT__u_idu__DOT__is_add)))
            ? vlSelfRef.M_wdata32 : vlSelfRef.top__DOT__imm);
    top__DOT__u_exu__DOT__u_alu__DOT__and_out = (top__DOT__u_exu__DOT__u_alu__DOT____Vcellinp__u_adder__b 
                                                 & vlSelfRef.top__DOT__u_gpr__DOT__reg_file
                                                 [(0x0000001fU 
                                                   & ((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_addi)
                                                       ? 
                                                      (vlSelfRef.inst 
                                                       >> 0x0000000fU)
                                                       : 
                                                      ((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_jalr)
                                                        ? 
                                                       (vlSelfRef.inst 
                                                        >> 0x0000000fU)
                                                        : 
                                                       ((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_add)
                                                         ? 
                                                        (vlSelfRef.inst 
                                                         >> 0x0000000fU)
                                                         : 
                                                        (((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_lw)
                                                           ? 
                                                          (vlSelfRef.inst 
                                                           >> 0x0000000fU)
                                                           : 
                                                          ((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_lbu)
                                                            ? 
                                                           (vlSelfRef.inst 
                                                            >> 0x0000000fU)
                                                            : 
                                                           ((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_sw)
                                                             ? 
                                                            (vlSelfRef.inst 
                                                             >> 0x0000000fU)
                                                             : 
                                                            ((vlSelfRef.inst 
                                                              >> 0x0000000fU) 
                                                             & (- (IData)((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_sb))))))) 
                                                         & (- (IData)(
                                                                      (0x37U 
                                                                       != 
                                                                       (0x0000007fU 
                                                                        & vlSelfRef.inst)))))))))]);
    top__DOT__u_exu__DOT__u_alu__DOT__xor_out = (top__DOT__u_exu__DOT__u_alu__DOT____Vcellinp__u_adder__b 
                                                 ^ vlSelfRef.top__DOT__u_gpr__DOT__reg_file
                                                 [(0x0000001fU 
                                                   & ((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_addi)
                                                       ? 
                                                      (vlSelfRef.inst 
                                                       >> 0x0000000fU)
                                                       : 
                                                      ((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_jalr)
                                                        ? 
                                                       (vlSelfRef.inst 
                                                        >> 0x0000000fU)
                                                        : 
                                                       ((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_add)
                                                         ? 
                                                        (vlSelfRef.inst 
                                                         >> 0x0000000fU)
                                                         : 
                                                        (((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_lw)
                                                           ? 
                                                          (vlSelfRef.inst 
                                                           >> 0x0000000fU)
                                                           : 
                                                          ((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_lbu)
                                                            ? 
                                                           (vlSelfRef.inst 
                                                            >> 0x0000000fU)
                                                            : 
                                                           ((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_sw)
                                                             ? 
                                                            (vlSelfRef.inst 
                                                             >> 0x0000000fU)
                                                             : 
                                                            ((vlSelfRef.inst 
                                                              >> 0x0000000fU) 
                                                             & (- (IData)((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_sb))))))) 
                                                         & (- (IData)(
                                                                      (0x37U 
                                                                       != 
                                                                       (0x0000007fU 
                                                                        & vlSelfRef.inst)))))))))]);
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__2__KET__ 
        = (1U & ((top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                  >> 1U) | (top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                            & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                               >> 1U))));
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__3__KET__ 
        = (1U & ((top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                  >> 2U) | ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__2__KET__) 
                            & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                               >> 2U))));
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__4__KET__ 
        = (1U & ((top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                  >> 3U) | ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__3__KET__) 
                            & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                               >> 3U))));
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__5__KET__ 
        = (1U & ((top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                  >> 4U) | ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__4__KET__) 
                            & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                               >> 4U))));
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__6__KET__ 
        = (1U & ((top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                  >> 5U) | ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__5__KET__) 
                            & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                               >> 5U))));
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__7__KET__ 
        = (1U & ((top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                  >> 6U) | ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__6__KET__) 
                            & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                               >> 6U))));
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__8__KET__ 
        = (1U & ((top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                  >> 7U) | ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__7__KET__) 
                            & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                               >> 7U))));
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__9__KET__ 
        = (1U & ((top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                  >> 8U) | ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__8__KET__) 
                            & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                               >> 8U))));
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__10__KET__ 
        = (1U & ((top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                  >> 9U) | ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__9__KET__) 
                            & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                               >> 9U))));
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__11__KET__ 
        = (1U & ((top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                  >> 0x0000000aU) | ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__10__KET__) 
                                     & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                        >> 0x0000000aU))));
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__12__KET__ 
        = (1U & ((top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                  >> 0x0000000bU) | ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__11__KET__) 
                                     & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                        >> 0x0000000bU))));
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__13__KET__ 
        = (1U & ((top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                  >> 0x0000000cU) | ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__12__KET__) 
                                     & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                        >> 0x0000000cU))));
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__14__KET__ 
        = (1U & ((top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                  >> 0x0000000dU) | ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__13__KET__) 
                                     & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                        >> 0x0000000dU))));
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__15__KET__ 
        = (1U & ((top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                  >> 0x0000000eU) | ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__14__KET__) 
                                     & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                        >> 0x0000000eU))));
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__16__KET__ 
        = (1U & ((top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                  >> 0x0000000fU) | ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__15__KET__) 
                                     & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                        >> 0x0000000fU))));
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__17__KET__ 
        = (1U & ((top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                  >> 0x00000010U) | ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__16__KET__) 
                                     & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                        >> 0x00000010U))));
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__18__KET__ 
        = (1U & ((top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                  >> 0x00000011U) | ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__17__KET__) 
                                     & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                        >> 0x00000011U))));
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__19__KET__ 
        = (1U & ((top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                  >> 0x00000012U) | ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__18__KET__) 
                                     & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                        >> 0x00000012U))));
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__20__KET__ 
        = (1U & ((top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                  >> 0x00000013U) | ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__19__KET__) 
                                     & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                        >> 0x00000013U))));
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__21__KET__ 
        = (1U & ((top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                  >> 0x00000014U) | ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__20__KET__) 
                                     & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                        >> 0x00000014U))));
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__22__KET__ 
        = (1U & ((top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                  >> 0x00000015U) | ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__21__KET__) 
                                     & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                        >> 0x00000015U))));
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__23__KET__ 
        = (1U & ((top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                  >> 0x00000016U) | ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__22__KET__) 
                                     & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                        >> 0x00000016U))));
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__24__KET__ 
        = (1U & ((top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                  >> 0x00000017U) | ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__23__KET__) 
                                     & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                        >> 0x00000017U))));
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__25__KET__ 
        = (1U & ((top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                  >> 0x00000018U) | ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__24__KET__) 
                                     & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                        >> 0x00000018U))));
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__26__KET__ 
        = (1U & ((top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                  >> 0x00000019U) | ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__25__KET__) 
                                     & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                        >> 0x00000019U))));
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__27__KET__ 
        = (1U & ((top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                  >> 0x0000001aU) | ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__26__KET__) 
                                     & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                        >> 0x0000001aU))));
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__28__KET__ 
        = (1U & ((top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                  >> 0x0000001bU) | ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__27__KET__) 
                                     & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                        >> 0x0000001bU))));
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__29__KET__ 
        = (1U & ((top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                  >> 0x0000001cU) | ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__28__KET__) 
                                     & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                        >> 0x0000001cU))));
    top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__30__KET__ 
        = (1U & ((top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                  >> 0x0000001dU) | ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__29__KET__) 
                                     & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                        >> 0x0000001dU))));
    vlSelfRef.M_addr = ((((((((2U & ((((top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                                        >> 0x0000001eU) 
                                       | ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__30__KET__) 
                                          & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                             >> 0x0000001eU))) 
                                      ^ (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                         >> 0x0000001fU)) 
                                     << 1U)) | (1U 
                                                & ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__30__KET__) 
                                                   ^ 
                                                   (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                                    >> 0x0000001eU)))) 
                             << 6U) | (((2U & (((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__29__KET__) 
                                                << 1U) 
                                               ^ (0x0000000eU 
                                                  & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                                     >> 0x0000001cU)))) 
                                        | (1U & ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__28__KET__) 
                                                 ^ 
                                                 (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                                  >> 0x0000001cU)))) 
                                       << 4U)) | ((
                                                   ((2U 
                                                     & (((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__27__KET__) 
                                                         << 1U) 
                                                        ^ 
                                                        (0x0000003eU 
                                                         & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                                            >> 0x0000001aU)))) 
                                                    | (1U 
                                                       & ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__26__KET__) 
                                                          ^ 
                                                          (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                                           >> 0x0000001aU)))) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & (((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__25__KET__) 
                                                          << 1U) 
                                                         ^ 
                                                         (0x000000feU 
                                                          & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                                             >> 0x00000018U)))) 
                                                     | (1U 
                                                        & ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__24__KET__) 
                                                           ^ 
                                                           (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                                            >> 0x00000018U)))))) 
                          << 0x00000018U) | ((((((2U 
                                                  & (((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__23__KET__) 
                                                      << 1U) 
                                                     ^ 
                                                     (0x000003feU 
                                                      & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                                         >> 0x00000016U)))) 
                                                 | (1U 
                                                    & ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__22__KET__) 
                                                       ^ 
                                                       (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                                        >> 0x00000016U)))) 
                                                << 6U) 
                                               | (((2U 
                                                    & (((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__21__KET__) 
                                                        << 1U) 
                                                       ^ 
                                                       (0x00000ffeU 
                                                        & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                                           >> 0x00000014U)))) 
                                                   | (1U 
                                                      & ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__20__KET__) 
                                                         ^ 
                                                         (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                                          >> 0x00000014U)))) 
                                                  << 4U)) 
                                              | ((((2U 
                                                    & (((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__19__KET__) 
                                                        << 1U) 
                                                       ^ 
                                                       (0x00003ffeU 
                                                        & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                                           >> 0x00000012U)))) 
                                                   | (1U 
                                                      & ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__18__KET__) 
                                                         ^ 
                                                         (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                                          >> 0x00000012U)))) 
                                                  << 2U) 
                                                 | ((2U 
                                                     & (((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__17__KET__) 
                                                         << 1U) 
                                                        ^ 
                                                        (0x0000fffeU 
                                                         & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                                            >> 0x00000010U)))) 
                                                    | (1U 
                                                       & ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__16__KET__) 
                                                          ^ 
                                                          (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                                           >> 0x00000010U)))))) 
                                             << 0x00000010U)) 
                        | (((((((2U & (((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__15__KET__) 
                                        << 1U) ^ (0x0003fffeU 
                                                  & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                                     >> 0x0000000eU)))) 
                                | (1U & ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__14__KET__) 
                                         ^ (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                            >> 0x0000000eU)))) 
                               << 6U) | (((2U & (((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__13__KET__) 
                                                  << 1U) 
                                                 ^ 
                                                 (0x000ffffeU 
                                                  & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                                     >> 0x0000000cU)))) 
                                          | (1U & ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__12__KET__) 
                                                   ^ 
                                                   (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                                    >> 0x0000000cU)))) 
                                         << 4U)) | 
                             ((((2U & (((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__11__KET__) 
                                        << 1U) ^ (0x003ffffeU 
                                                  & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                                     >> 0x0000000aU)))) 
                                | (1U & ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__10__KET__) 
                                         ^ (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                            >> 0x0000000aU)))) 
                               << 2U) | ((2U & (((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__9__KET__) 
                                                 << 1U) 
                                                ^ (0x00fffffeU 
                                                   & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                                      >> 8U)))) 
                                         | (1U & ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__8__KET__) 
                                                  ^ 
                                                  (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                                   >> 8U)))))) 
                            << 8U) | (((((2U & (((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__7__KET__) 
                                                 << 1U) 
                                                ^ (0x03fffffeU 
                                                   & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                                      >> 6U)))) 
                                         | (1U & ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__6__KET__) 
                                                  ^ 
                                                  (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                                   >> 6U)))) 
                                        << 6U) | ((
                                                   (2U 
                                                    & (((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__5__KET__) 
                                                        << 1U) 
                                                       ^ 
                                                       (0x0ffffffeU 
                                                        & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                                           >> 4U)))) 
                                                   | (1U 
                                                      & ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__4__KET__) 
                                                         ^ 
                                                         (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                                          >> 4U)))) 
                                                  << 4U)) 
                                      | ((((2U & (((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__3__KET__) 
                                                   << 1U) 
                                                  ^ 
                                                  (0x3ffffffeU 
                                                   & (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                                      >> 2U)))) 
                                           | (1U & 
                                              ((IData)(top__DOT__u_exu__DOT__u_alu__DOT__u_adder__DOT__carry__BRA__2__KET__) 
                                               ^ (top__DOT__u_exu__DOT__u_alu__DOT__xor_out 
                                                  >> 2U)))) 
                                          << 2U) | 
                                         ((2U & ((top__DOT__u_exu__DOT__u_alu__DOT__and_out 
                                                  << 1U) 
                                                 ^ 
                                                 (0xfffffffeU 
                                                  & top__DOT__u_exu__DOT__u_alu__DOT__xor_out))) 
                                          | (1U & top__DOT__u_exu__DOT__u_alu__DOT__xor_out))))));
}

void Vtop___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vtop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");
    }
}
#endif  // VL_DEBUG

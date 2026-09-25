// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
    vlSelfRef.__Vtrigprevexpr___TOP__M_rdata32__0 = vlSelfRef.M_rdata32;
    vlSelfRef.__Vtrigprevexpr___TOP__M_rdata8__0 = vlSelfRef.M_rdata8;
    vlSelfRef.__Vtrigprevexpr___TOP__inst__0 = vlSelfRef.inst;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__1 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);
VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_stl(Vtop___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtop___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_body__stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vtop___024root___stl_sequent__TOP__0(vlSelf);
            }
        }
    }
    return (__VstlExecute);
}

VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_dump_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_dump_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_dump_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_dump_triggers__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtop___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__obs(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_dump_triggers__obs\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_dump_triggers__react(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_dump_triggers__react\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
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
    // Body
    vlSelfRef.inst_addr = vlSelfRef.top__DOT__u_ifu__DOT__ifu_pc;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 = (((- (IData)(
                                                            (vlSelfRef.inst 
                                                             >> 0x0000001fU))) 
                                                 << 0x0000000cU) 
                                                | (vlSelfRef.inst 
                                                   >> 0x00000014U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6 = (((- (IData)(
                                                            (vlSelfRef.inst 
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
    vlSelfRef.top__DOT__u_idu__DOT__is_sw = (IData)(
                                                    (0x00002023U 
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
    vlSelfRef.top__DOT__ifu_valid = ((1U == (IData)(vlSelfRef.top__DOT__u_ifu__DOT__state)) 
                                     | (2U == (IData)(vlSelfRef.top__DOT__u_ifu__DOT__state)));
    vlSelfRef.top__DOT__ifu_ls = ((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_lw) 
                                  | (IData)(vlSelfRef.top__DOT__u_idu__DOT__is_lbu));
    vlSelfRef.is_ebreak = ((0x00100073U == vlSelfRef.inst) 
                           & (IData)(vlSelfRef.top__DOT__ifu_valid));
    vlSelfRef.top__DOT__wbu_op = (3U & (((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_addi)
                                          ? 2U : (((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_add)
                                                    ? 2U
                                                    : 
                                                   (1U 
                                                    & (- (IData)(
                                                                 (0x37U 
                                                                  == 
                                                                  (0x0000007fU 
                                                                   & vlSelfRef.inst)))))) 
                                                  | (- (IData)((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_jalr))))) 
                                        & (- (IData)((IData)(vlSelfRef.top__DOT__ifu_valid)))));
    vlSelfRef.M_op = ((~ (IData)(vlSelfRef.top__DOT__u_idu__DOT__is_addi)) 
                      & ((~ (IData)(vlSelfRef.top__DOT__u_idu__DOT__is_jalr)) 
                         & ((~ (IData)(vlSelfRef.top__DOT__u_idu__DOT__is_add)) 
                            & ((0x37U != (0x0000007fU 
                                          & vlSelfRef.inst)) 
                               & ((IData)(vlSelfRef.top__DOT__ifu_valid) 
                                  & ((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_lw) 
                                     | ((~ (IData)(vlSelfRef.top__DOT__u_idu__DOT__is_lbu)) 
                                        & (IData)(vlSelfRef.top__DOT__u_idu__DOT__is_sw))))))));
    vlSelfRef.M_w_en = ((~ (IData)(vlSelfRef.top__DOT__u_idu__DOT__is_addi)) 
                        & ((~ (IData)(vlSelfRef.top__DOT__u_idu__DOT__is_jalr)) 
                           & ((0x37U != (0x0000007fU 
                                         & vlSelfRef.inst)) 
                              & ((~ (IData)(vlSelfRef.top__DOT__u_idu__DOT__is_lw)) 
                                 & ((~ (IData)(vlSelfRef.top__DOT__u_idu__DOT__is_lbu)) 
                                    & ((IData)(vlSelfRef.top__DOT__ifu_valid) 
                                       & ((~ (IData)(vlSelfRef.top__DOT__u_idu__DOT__is_add)) 
                                          & ((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_sb) 
                                             | (IData)(vlSelfRef.top__DOT__u_idu__DOT__is_sw)))))))));
    vlSelfRef.top__DOT__imm = (((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_addi)
                                 ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1
                                 : ((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_jalr)
                                     ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1
                                     : (((0x37U == 
                                          (0x0000007fU 
                                           & vlSelfRef.inst))
                                          ? (0xfffff000U 
                                             & vlSelfRef.inst)
                                          : ((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_lw)
                                              ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1
                                              : ((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_lbu)
                                                  ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1
                                                  : 
                                                 ((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_sw)
                                                   ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6
                                                   : 
                                                  (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6 
                                                   & (- (IData)((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_sb)))))))) 
                                        & (- (IData)(
                                                     (1U 
                                                      & (~ (IData)(vlSelfRef.top__DOT__u_idu__DOT__is_add)))))))) 
                               & (- (IData)((IData)(vlSelfRef.top__DOT__ifu_valid))));
    vlSelfRef.M_wdata32 = vlSelfRef.top__DOT__u_gpr__DOT__reg_file
        [(0x0000001fU & ((- (IData)((1U & (~ (IData)(vlSelfRef.top__DOT__u_idu__DOT__is_addi))))) 
                         & ((- (IData)((1U & (~ (IData)(vlSelfRef.top__DOT__u_idu__DOT__is_jalr))))) 
                            & (((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_add)
                                 ? (vlSelfRef.inst 
                                    >> 0x00000014U)
                                 : ((- (IData)((1U 
                                                & (~ (IData)(vlSelfRef.top__DOT__u_idu__DOT__is_lw))))) 
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
                               & (- (IData)((IData)(vlSelfRef.top__DOT__ifu_valid)))))))];
    vlSelfRef.ifu_done = ((2U == (IData)(vlSelfRef.top__DOT__u_ifu__DOT__state)) 
                          | ((~ (IData)(vlSelfRef.top__DOT__ifu_ls)) 
                             & (1U == (IData)(vlSelfRef.top__DOT__u_ifu__DOT__state))));
    vlSelfRef.M_wdata8 = (0x000000ffU & vlSelfRef.M_wdata32);
    top__DOT__u_exu__DOT__u_alu__DOT____Vcellinp__u_adder__b 
        = (((IData)(vlSelfRef.top__DOT__ifu_valid) 
            & ((~ (IData)(vlSelfRef.top__DOT__u_idu__DOT__is_addi)) 
               & ((~ (IData)(vlSelfRef.top__DOT__u_idu__DOT__is_jalr)) 
                  & (IData)(vlSelfRef.top__DOT__u_idu__DOT__is_add))))
            ? vlSelfRef.M_wdata32 : vlSelfRef.top__DOT__imm);
    top__DOT__u_exu__DOT__u_alu__DOT__and_out = (top__DOT__u_exu__DOT__u_alu__DOT____Vcellinp__u_adder__b 
                                                 & vlSelfRef.top__DOT__u_gpr__DOT__reg_file
                                                 [(0x0000001fU 
                                                   & (((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_addi)
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
                                                                         & vlSelfRef.inst)))))))) 
                                                      & (- (IData)((IData)(vlSelfRef.top__DOT__ifu_valid)))))]);
    top__DOT__u_exu__DOT__u_alu__DOT__xor_out = (top__DOT__u_exu__DOT__u_alu__DOT____Vcellinp__u_adder__b 
                                                 ^ vlSelfRef.top__DOT__u_gpr__DOT__reg_file
                                                 [(0x0000001fU 
                                                   & (((IData)(vlSelfRef.top__DOT__u_idu__DOT__is_addi)
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
                                                                         & vlSelfRef.inst)))))))) 
                                                      & (- (IData)((IData)(vlSelfRef.top__DOT__ifu_valid)))))]);
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

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @( clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @( rst)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @( M_rdata32)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @( M_rdata8)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @( inst)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = 0;
    vlSelf->rst = 0;
    vlSelf->M_w_en = 0;
    vlSelf->M_op = 0;
    vlSelf->M_addr = 0;
    vlSelf->M_wdata32 = 0;
    vlSelf->M_wdata8 = 0;
    vlSelf->M_rdata32 = 0;
    vlSelf->M_rdata8 = 0;
    vlSelf->inst_addr = 0;
    vlSelf->inst = 0;
    vlSelf->ifu_done = 0;
    vlSelf->is_ebreak = 0;
    vlSelf->top__DOT__imm = 0;
    vlSelf->top__DOT__wbu_op = 0;
    vlSelf->top__DOT__ifu_valid = 0;
    vlSelf->top__DOT__ifu_ls = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__u_gpr__DOT__reg_file[__Vi0] = 0;
    }
    vlSelf->top__DOT__u_idu__DOT__is_addi = 0;
    vlSelf->top__DOT__u_idu__DOT__is_jalr = 0;
    vlSelf->top__DOT__u_idu__DOT__is_add = 0;
    vlSelf->top__DOT__u_idu__DOT__is_lw = 0;
    vlSelf->top__DOT__u_idu__DOT__is_lbu = 0;
    vlSelf->top__DOT__u_idu__DOT__is_sw = 0;
    vlSelf->top__DOT__u_idu__DOT__is_sb = 0;
    vlSelf->top__DOT__u_ifu__DOT__ifu_pc = 0;
    vlSelf->top__DOT__u_ifu__DOT__state = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_1 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_6 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__M_rdata32__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__M_rdata8__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__inst__0 = 0;
    vlSelf->__VicoDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__1 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}

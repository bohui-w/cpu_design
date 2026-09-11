// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

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

void Vtop___024root___ico_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ top__DOT__io_data;
    top__DOT__io_data = 0;
    // Body
    vlSelfRef.top__DOT__io_in = (QData)((IData)((((IData)(vlSelfRef.io_in1) 
                                                  << 8U) 
                                                 | (IData)(vlSelfRef.io_in0))));
    top__DOT__io_data = 0U;
    if ((0U == (7U & (IData)(vlSelfRef.top__DOT__command)))) {
        top__DOT__io_data = (0x000000ffU & (IData)(vlSelfRef.top__DOT__io_in));
    }
    if ((1U == (7U & (IData)(vlSelfRef.top__DOT__command)))) {
        top__DOT__io_data = (0x000000ffU & (IData)(
                                                   (vlSelfRef.top__DOT__io_in 
                                                    >> 8U)));
    }
    if ((2U == (7U & (IData)(vlSelfRef.top__DOT__command)))) {
        top__DOT__io_data = (0x000000ffU & (IData)(
                                                   (vlSelfRef.top__DOT__io_in 
                                                    >> 0x10U)));
    }
    if ((3U == (7U & (IData)(vlSelfRef.top__DOT__command)))) {
        top__DOT__io_data = (0x000000ffU & (IData)(
                                                   (vlSelfRef.top__DOT__io_in 
                                                    >> 0x18U)));
    }
    if ((4U == (7U & (IData)(vlSelfRef.top__DOT__command)))) {
        top__DOT__io_data = (0x000000ffU & (IData)(
                                                   (vlSelfRef.top__DOT__io_in 
                                                    >> 0x20U)));
    }
    if ((5U == (7U & (IData)(vlSelfRef.top__DOT__command)))) {
        top__DOT__io_data = (0x000000ffU & (IData)(
                                                   (vlSelfRef.top__DOT__io_in 
                                                    >> 0x28U)));
    }
    if ((6U == (7U & (IData)(vlSelfRef.top__DOT__command)))) {
        top__DOT__io_data = (0x000000ffU & (IData)(
                                                   (vlSelfRef.top__DOT__io_in 
                                                    >> 0x30U)));
    }
    if ((7U == (7U & (IData)(vlSelfRef.top__DOT__command)))) {
        top__DOT__io_data = (0x000000ffU & (IData)(
                                                   (vlSelfRef.top__DOT__io_in 
                                                    >> 0x38U)));
    }
    vlSelfRef.top__DOT__wdata = (0x000000ffU & ((0x00000080U 
                                                 & (IData)(vlSelfRef.top__DOT__command))
                                                 ? 
                                                ((0x00000040U 
                                                  & (IData)(vlSelfRef.top__DOT__command))
                                                  ? 0U
                                                  : 
                                                 ((3U 
                                                   & (IData)(vlSelfRef.top__DOT__command)) 
                                                  << 
                                                  (6U 
                                                   & ((IData)(vlSelfRef.top__DOT__command) 
                                                      >> 1U))))
                                                 : 
                                                ((0x00000040U 
                                                  & (IData)(vlSelfRef.top__DOT__command))
                                                  ? (IData)(top__DOT__io_data)
                                                  : 
                                                 (((((2U 
                                                      & (((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                                            >> 6U) 
                                                           | ((IData)(vlSelfRef.top__DOT__u_adder__DOT__carry__BRA__6__KET__) 
                                                              & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                                 >> 6U))) 
                                                          ^ 
                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                           >> 7U)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & ((IData)(vlSelfRef.top__DOT__u_adder__DOT__carry__BRA__6__KET__) 
                                                           ^ 
                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                            >> 6U)))) 
                                                    << 6U) 
                                                   | (((2U 
                                                        & (((IData)(vlSelfRef.top__DOT__u_adder__DOT__carry__BRA__5__KET__) 
                                                            << 1U) 
                                                           ^ 
                                                           (0x0ffffffeU 
                                                            & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                               >> 4U)))) 
                                                       | (1U 
                                                          & ((IData)(vlSelfRef.top__DOT__u_adder__DOT__carry__BRA__4__KET__) 
                                                             ^ 
                                                             ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                              >> 4U)))) 
                                                      << 4U)) 
                                                  | ((((2U 
                                                        & (((IData)(vlSelfRef.top__DOT__u_adder__DOT__carry__BRA__3__KET__) 
                                                            << 1U) 
                                                           ^ 
                                                           (0x3ffffffeU 
                                                            & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                               >> 2U)))) 
                                                       | (1U 
                                                          & ((IData)(vlSelfRef.top__DOT__u_adder__DOT__carry__BRA__2__KET__) 
                                                             ^ 
                                                             ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                              >> 2U)))) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                                             << 1U) 
                                                            ^ 
                                                            (0xfffffffeU 
                                                             & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)))) 
                                                        | (1U 
                                                           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))))))));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__ico
        vlSelfRef.__VicoTriggered[0U] = (QData)((IData)(
                                                        (((((IData)(vlSelfRef.io_in1) 
                                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__io_in1__0)) 
                                                           << 3U) 
                                                          | (((IData)(vlSelfRef.io_in0) 
                                                              != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__io_in0__0)) 
                                                             << 2U)) 
                                                         | ((((IData)(vlSelfRef.rst) 
                                                              != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.clk) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))))));
        vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
        vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
        vlSelfRef.__Vtrigprevexpr___TOP__io_in0__0 
            = vlSelfRef.io_in0;
        vlSelfRef.__Vtrigprevexpr___TOP__io_in1__0 
            = vlSelfRef.io_in1;
        if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VicoDidInit)))))) {
            vlSelfRef.__VicoDidInit = 1U;
            vlSelfRef.__VicoTriggered[0U] = (1ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (2ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (4ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (8ULL | vlSelfRef.__VicoTriggered[0U]);
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
            // Inlined CFunc: _eval_ico
            if ((0x000000000000000cULL & vlSelfRef.__VicoTriggered[0U])) {
                Vtop___024root___ico_comb__TOP__0(vlSelf);
            }
        }
    }
    return (__VicoExecute);
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
    CData/*1:0*/ top__DOT__wddr;
    top__DOT__wddr = 0;
    CData/*1:0*/ top__DOT__rddr1;
    top__DOT__rddr1 = 0;
    CData/*1:0*/ top__DOT__rddr2;
    top__DOT__rddr2 = 0;
    CData/*0:0*/ top__DOT__gpr_en;
    top__DOT__gpr_en = 0;
    CData/*7:0*/ top__DOT__io_data;
    top__DOT__io_data = 0;
    IData/*31:0*/ top__DOT__u_gpr__DOT__mid_Q;
    top__DOT__u_gpr__DOT__mid_Q = 0;
    // Body
    if (vlSelfRef.rst) {
        vlSelfRef.top__DOT__u_io_bank__DOT____Vcellout__io_gen__BRA__1__KET____DOT__u_io__iow_out = 0U;
        vlSelfRef.top__DOT__u_io_bank__DOT____Vcellout__io_gen__BRA__0__KET____DOT__u_io__iow_out = 0U;
        vlSelfRef.top__DOT__pc_out = 0U;
        vlSelfRef.top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__3__KET____DOT__u_reg__dout = 0U;
        vlSelfRef.top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__2__KET____DOT__u_reg__dout = 0U;
        vlSelfRef.top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__1__KET____DOT__u_reg__dout = 0U;
        vlSelfRef.top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__0__KET____DOT__u_reg__dout = 0U;
    } else {
        vlSelfRef.top__DOT__u_io_bank__DOT____Vcellout__io_gen__BRA__1__KET____DOT__u_io__iow_out 
            = (((IData)(vlSelfRef.top__DOT__io_en) 
                & ((IData)(vlSelfRef.top__DOT__u_io_bank__DOT__select) 
                   >> 1U)) ? (IData)(vlSelfRef.top__DOT__Q1)
                : (IData)(vlSelfRef.top__DOT__u_io_bank__DOT____Vcellout__io_gen__BRA__1__KET____DOT__u_io__iow_out));
        vlSelfRef.top__DOT__u_io_bank__DOT____Vcellout__io_gen__BRA__0__KET____DOT__u_io__iow_out 
            = (((IData)(vlSelfRef.top__DOT__io_en) 
                & (IData)(vlSelfRef.top__DOT__u_io_bank__DOT__select))
                ? (IData)(vlSelfRef.top__DOT__Q1) : (IData)(vlSelfRef.top__DOT__u_io_bank__DOT____Vcellout__io_gen__BRA__0__KET____DOT__u_io__iow_out));
        vlSelfRef.top__DOT__pc_out = (0x0000000fU & 
                                      ((((IData)(vlSelfRef.top__DOT__u_scommand_code__DOT__out_mod) 
                                         >> 3U) & ((IData)(vlSelfRef.top__DOT__Q1) 
                                                   != (IData)(vlSelfRef.top__DOT__Q2)))
                                        ? ((IData)(vlSelfRef.top__DOT__pc_out) 
                                           + ((IData)(vlSelfRef.top__DOT__command) 
                                              >> 2U))
                                        : ((IData)(1U) 
                                           + (IData)(vlSelfRef.top__DOT__pc_out))));
        if ((8U & (IData)(vlSelfRef.top__DOT__u_gpr__DOT__mid_en))) {
            vlSelfRef.top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__3__KET____DOT__u_reg__dout 
                = vlSelfRef.top__DOT__wdata;
        }
        if ((4U & (IData)(vlSelfRef.top__DOT__u_gpr__DOT__mid_en))) {
            vlSelfRef.top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__2__KET____DOT__u_reg__dout 
                = vlSelfRef.top__DOT__wdata;
        }
        if ((2U & (IData)(vlSelfRef.top__DOT__u_gpr__DOT__mid_en))) {
            vlSelfRef.top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__1__KET____DOT__u_reg__dout 
                = vlSelfRef.top__DOT__wdata;
        }
        if ((1U & (IData)(vlSelfRef.top__DOT__u_gpr__DOT__mid_en))) {
            vlSelfRef.top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__0__KET____DOT__u_reg__dout 
                = vlSelfRef.top__DOT__wdata;
        }
    }
    vlSelfRef.led_bar = (((IData)(vlSelfRef.top__DOT__u_io_bank__DOT____Vcellout__io_gen__BRA__1__KET____DOT__u_io__iow_out) 
                          << 8U) | (IData)(vlSelfRef.top__DOT__u_io_bank__DOT____Vcellout__io_gen__BRA__0__KET____DOT__u_io__iow_out));
    vlSelfRef.top__DOT__command = ((0xc2U & (- (IData)(
                                                       (0x0dU 
                                                        == (IData)(vlSelfRef.top__DOT__pc_out))))) 
                                   | ((0x59U & (- (IData)(
                                                          (0x0cU 
                                                           == (IData)(vlSelfRef.top__DOT__pc_out))))) 
                                      | ((0xfaU & (- (IData)(
                                                             (0x0bU 
                                                              == (IData)(vlSelfRef.top__DOT__pc_out))))) 
                                         | ((0xcbU 
                                             & (- (IData)(
                                                          (0x0aU 
                                                           == (IData)(vlSelfRef.top__DOT__pc_out))))) 
                                            | ((0x71U 
                                                & (- (IData)(
                                                             (9U 
                                                              == (IData)(vlSelfRef.top__DOT__pc_out))))) 
                                               | ((0x80U 
                                                   & (- (IData)(
                                                                (8U 
                                                                 == (IData)(vlSelfRef.top__DOT__pc_out))))) 
                                                  | ((0xf6U 
                                                      & (- (IData)(
                                                                   (7U 
                                                                    == (IData)(vlSelfRef.top__DOT__pc_out))))) 
                                                     | ((0x48U 
                                                         & (- (IData)(
                                                                      (6U 
                                                                       == (IData)(vlSelfRef.top__DOT__pc_out))))) 
                                                        | ((0x14U 
                                                            & (- (IData)(
                                                                         (5U 
                                                                          == (IData)(vlSelfRef.top__DOT__pc_out))))) 
                                                           | ((3U 
                                                               & (- (IData)(
                                                                            (4U 
                                                                             == (IData)(vlSelfRef.top__DOT__pc_out))))) 
                                                              | ((0xb1U 
                                                                  & (- (IData)(
                                                                               (3U 
                                                                                == (IData)(vlSelfRef.top__DOT__pc_out))))) 
                                                                 | ((0x90U 
                                                                     & (- (IData)(
                                                                                (2U 
                                                                                == (IData)(vlSelfRef.top__DOT__pc_out))))) 
                                                                    | ((0x60U 
                                                                        & (- (IData)(
                                                                                (0U 
                                                                                == (IData)(vlSelfRef.top__DOT__pc_out))))) 
                                                                       | (0x80U 
                                                                          & (- (IData)(
                                                                                (1U 
                                                                                == (IData)(vlSelfRef.top__DOT__pc_out))))))))))))))))));
    top__DOT__u_gpr__DOT__mid_Q = ((((IData)(vlSelfRef.top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__3__KET____DOT__u_reg__dout) 
                                     << 0x00000018U) 
                                    | ((IData)(vlSelfRef.top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__2__KET____DOT__u_reg__dout) 
                                       << 0x00000010U)) 
                                   | (((IData)(vlSelfRef.top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__1__KET____DOT__u_reg__dout) 
                                       << 8U) | (IData)(vlSelfRef.top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__0__KET____DOT__u_reg__dout)));
    vlSelfRef.top__DOT__u_io_bank__DOT__select = 0U;
    if ((0U == (7U & (IData)(vlSelfRef.top__DOT__command)))) {
        vlSelfRef.top__DOT__u_io_bank__DOT__select 
            = (1U | (IData)(vlSelfRef.top__DOT__u_io_bank__DOT__select));
    }
    if ((1U == (7U & (IData)(vlSelfRef.top__DOT__command)))) {
        vlSelfRef.top__DOT__u_io_bank__DOT__select 
            = (2U | (IData)(vlSelfRef.top__DOT__u_io_bank__DOT__select));
    }
    if ((2U == (7U & (IData)(vlSelfRef.top__DOT__command)))) {
        vlSelfRef.top__DOT__u_io_bank__DOT__select 
            = (4U | (IData)(vlSelfRef.top__DOT__u_io_bank__DOT__select));
    }
    if ((3U == (7U & (IData)(vlSelfRef.top__DOT__command)))) {
        vlSelfRef.top__DOT__u_io_bank__DOT__select 
            = (8U | (IData)(vlSelfRef.top__DOT__u_io_bank__DOT__select));
    }
    if ((4U == (7U & (IData)(vlSelfRef.top__DOT__command)))) {
        vlSelfRef.top__DOT__u_io_bank__DOT__select 
            = (0x00000010U | (IData)(vlSelfRef.top__DOT__u_io_bank__DOT__select));
    }
    if ((5U == (7U & (IData)(vlSelfRef.top__DOT__command)))) {
        vlSelfRef.top__DOT__u_io_bank__DOT__select 
            = (0x00000020U | (IData)(vlSelfRef.top__DOT__u_io_bank__DOT__select));
    }
    if ((6U == (7U & (IData)(vlSelfRef.top__DOT__command)))) {
        vlSelfRef.top__DOT__u_io_bank__DOT__select 
            = (0x00000040U | (IData)(vlSelfRef.top__DOT__u_io_bank__DOT__select));
    }
    vlSelfRef.top__DOT__u_scommand_code__DOT__out_mod = 0U;
    if ((0U == (3U & ((IData)(vlSelfRef.top__DOT__command) 
                      >> 6U)))) {
        vlSelfRef.top__DOT__u_scommand_code__DOT__out_mod 
            = (1U | (IData)(vlSelfRef.top__DOT__u_scommand_code__DOT__out_mod));
    }
    if ((1U == (3U & ((IData)(vlSelfRef.top__DOT__command) 
                      >> 6U)))) {
        vlSelfRef.top__DOT__u_scommand_code__DOT__out_mod 
            = (2U | (IData)(vlSelfRef.top__DOT__u_scommand_code__DOT__out_mod));
    }
    if ((2U == (3U & ((IData)(vlSelfRef.top__DOT__command) 
                      >> 6U)))) {
        vlSelfRef.top__DOT__u_scommand_code__DOT__out_mod 
            = (4U | (IData)(vlSelfRef.top__DOT__u_scommand_code__DOT__out_mod));
    }
    if ((3U == (3U & ((IData)(vlSelfRef.top__DOT__command) 
                      >> 6U)))) {
        vlSelfRef.top__DOT__u_scommand_code__DOT__out_mod 
            = (8U | (IData)(vlSelfRef.top__DOT__u_scommand_code__DOT__out_mod));
    }
    top__DOT__io_data = 0U;
    if ((0U == (7U & (IData)(vlSelfRef.top__DOT__command)))) {
        top__DOT__io_data = (0x000000ffU & (IData)(vlSelfRef.top__DOT__io_in));
    }
    if ((1U == (7U & (IData)(vlSelfRef.top__DOT__command)))) {
        top__DOT__io_data = (0x000000ffU & (IData)(
                                                   (vlSelfRef.top__DOT__io_in 
                                                    >> 8U)));
    }
    if ((2U == (7U & (IData)(vlSelfRef.top__DOT__command)))) {
        top__DOT__io_data = (0x000000ffU & (IData)(
                                                   (vlSelfRef.top__DOT__io_in 
                                                    >> 0x10U)));
    }
    if ((3U == (7U & (IData)(vlSelfRef.top__DOT__command)))) {
        top__DOT__io_data = (0x000000ffU & (IData)(
                                                   (vlSelfRef.top__DOT__io_in 
                                                    >> 0x18U)));
    }
    if ((4U == (7U & (IData)(vlSelfRef.top__DOT__command)))) {
        top__DOT__io_data = (0x000000ffU & (IData)(
                                                   (vlSelfRef.top__DOT__io_in 
                                                    >> 0x20U)));
    }
    if ((5U == (7U & (IData)(vlSelfRef.top__DOT__command)))) {
        top__DOT__io_data = (0x000000ffU & (IData)(
                                                   (vlSelfRef.top__DOT__io_in 
                                                    >> 0x28U)));
    }
    if ((6U == (7U & (IData)(vlSelfRef.top__DOT__command)))) {
        top__DOT__io_data = (0x000000ffU & (IData)(
                                                   (vlSelfRef.top__DOT__io_in 
                                                    >> 0x30U)));
    }
    if ((7U == (7U & (IData)(vlSelfRef.top__DOT__command)))) {
        vlSelfRef.top__DOT__u_io_bank__DOT__select 
            = (0x00000080U | (IData)(vlSelfRef.top__DOT__u_io_bank__DOT__select));
        top__DOT__io_data = (0x000000ffU & (IData)(
                                                   (vlSelfRef.top__DOT__io_in 
                                                    >> 0x38U)));
    }
    if ((0x00000080U & (IData)(vlSelfRef.top__DOT__command))) {
        top__DOT__wddr = (3U & ((0x00000040U & (IData)(vlSelfRef.top__DOT__command))
                                 ? 0U : ((IData)(vlSelfRef.top__DOT__command) 
                                         >> 4U)));
        top__DOT__gpr_en = (1U & (~ ((IData)(vlSelfRef.top__DOT__command) 
                                     >> 6U)));
    } else {
        top__DOT__wddr = (3U & ((0x00000040U & (IData)(vlSelfRef.top__DOT__command))
                                 ? ((IData)(vlSelfRef.top__DOT__command) 
                                    >> 4U) : ((IData)(vlSelfRef.top__DOT__command) 
                                              >> 4U)));
        top__DOT__gpr_en = (1U & ((1U & (~ ((IData)(vlSelfRef.top__DOT__command) 
                                            >> 6U))) 
                                  || (1U & (~ ((IData)(vlSelfRef.top__DOT__command) 
                                               >> 3U)))));
    }
    if (top__DOT__gpr_en) {
        vlSelfRef.top__DOT__u_gpr__DOT__mid_en = 0U;
        if ((0U == (IData)(top__DOT__wddr))) {
            vlSelfRef.top__DOT__u_gpr__DOT__mid_en 
                = (1U | (IData)(vlSelfRef.top__DOT__u_gpr__DOT__mid_en));
        }
        if ((1U == (IData)(top__DOT__wddr))) {
            vlSelfRef.top__DOT__u_gpr__DOT__mid_en 
                = (2U | (IData)(vlSelfRef.top__DOT__u_gpr__DOT__mid_en));
        }
        if ((2U == (IData)(top__DOT__wddr))) {
            vlSelfRef.top__DOT__u_gpr__DOT__mid_en 
                = (4U | (IData)(vlSelfRef.top__DOT__u_gpr__DOT__mid_en));
        }
        if ((3U == (IData)(top__DOT__wddr))) {
            vlSelfRef.top__DOT__u_gpr__DOT__mid_en 
                = (8U | (IData)(vlSelfRef.top__DOT__u_gpr__DOT__mid_en));
        }
    } else {
        vlSelfRef.top__DOT__u_gpr__DOT__mid_en = 0U;
    }
    vlSelfRef.top__DOT__io_en = (1U & (((IData)(vlSelfRef.top__DOT__command) 
                                        >> 3U) & ((IData)(vlSelfRef.top__DOT__u_scommand_code__DOT__out_mod) 
                                                  >> 1U)));
    vlSelfRef.top__DOT__Q1 = 0U;
    top__DOT__rddr1 = ((0x00000080U & (IData)(vlSelfRef.top__DOT__command))
                        ? 0U : (3U & ((0x00000040U 
                                       & (IData)(vlSelfRef.top__DOT__command))
                                       ? ((IData)(vlSelfRef.top__DOT__command) 
                                          >> 4U) : 
                                      ((IData)(vlSelfRef.top__DOT__command) 
                                       >> 2U))));
    if ((0U == (IData)(top__DOT__rddr1))) {
        vlSelfRef.top__DOT__Q1 = (0x000000ffU & top__DOT__u_gpr__DOT__mid_Q);
    }
    if ((1U == (IData)(top__DOT__rddr1))) {
        vlSelfRef.top__DOT__Q1 = (0x000000ffU & (top__DOT__u_gpr__DOT__mid_Q 
                                                 >> 8U));
    }
    if ((2U == (IData)(top__DOT__rddr1))) {
        vlSelfRef.top__DOT__Q1 = (0x000000ffU & (top__DOT__u_gpr__DOT__mid_Q 
                                                 >> 0x10U));
    }
    if ((3U == (IData)(top__DOT__rddr1))) {
        vlSelfRef.top__DOT__Q1 = (top__DOT__u_gpr__DOT__mid_Q 
                                  >> 0x18U);
    }
    vlSelfRef.top__DOT__Q2 = 0U;
    top__DOT__rddr2 = (3U & ((0x00000080U & (IData)(vlSelfRef.top__DOT__command))
                              ? ((0x00000040U & (IData)(vlSelfRef.top__DOT__command))
                                  ? (IData)(vlSelfRef.top__DOT__command)
                                  : 0U) : ((0x00000040U 
                                            & (IData)(vlSelfRef.top__DOT__command))
                                            ? 0U : (IData)(vlSelfRef.top__DOT__command))));
    if ((0U == (IData)(top__DOT__rddr2))) {
        vlSelfRef.top__DOT__Q2 = (0x000000ffU & top__DOT__u_gpr__DOT__mid_Q);
    }
    if ((1U == (IData)(top__DOT__rddr2))) {
        vlSelfRef.top__DOT__Q2 = (0x000000ffU & (top__DOT__u_gpr__DOT__mid_Q 
                                                 >> 8U));
    }
    if ((2U == (IData)(top__DOT__rddr2))) {
        vlSelfRef.top__DOT__Q2 = (0x000000ffU & (top__DOT__u_gpr__DOT__mid_Q 
                                                 >> 0x10U));
    }
    if ((3U == (IData)(top__DOT__rddr2))) {
        vlSelfRef.top__DOT__Q2 = (top__DOT__u_gpr__DOT__mid_Q 
                                  >> 0x18U);
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = ((IData)(vlSelfRef.top__DOT__Q1) 
                                                ^ (IData)(vlSelfRef.top__DOT__Q2));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 = ((IData)(vlSelfRef.top__DOT__Q1) 
                                                & (IData)(vlSelfRef.top__DOT__Q2));
    vlSelfRef.top__DOT__u_adder__DOT__carry__BRA__2__KET__ 
        = (1U & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                  >> 1U) | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                            & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                               >> 1U))));
    vlSelfRef.top__DOT__u_adder__DOT__carry__BRA__3__KET__ 
        = (1U & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                  >> 2U) | ((IData)(vlSelfRef.top__DOT__u_adder__DOT__carry__BRA__2__KET__) 
                            & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                               >> 2U))));
    vlSelfRef.top__DOT__u_adder__DOT__carry__BRA__4__KET__ 
        = (1U & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                  >> 3U) | ((IData)(vlSelfRef.top__DOT__u_adder__DOT__carry__BRA__3__KET__) 
                            & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                               >> 3U))));
    vlSelfRef.top__DOT__u_adder__DOT__carry__BRA__5__KET__ 
        = (1U & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                  >> 4U) | ((IData)(vlSelfRef.top__DOT__u_adder__DOT__carry__BRA__4__KET__) 
                            & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                               >> 4U))));
    vlSelfRef.top__DOT__u_adder__DOT__carry__BRA__6__KET__ 
        = (1U & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                  >> 5U) | ((IData)(vlSelfRef.top__DOT__u_adder__DOT__carry__BRA__5__KET__) 
                            & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                               >> 5U))));
    vlSelfRef.top__DOT__wdata = (0x000000ffU & ((0x00000080U 
                                                 & (IData)(vlSelfRef.top__DOT__command))
                                                 ? 
                                                ((0x00000040U 
                                                  & (IData)(vlSelfRef.top__DOT__command))
                                                  ? 0U
                                                  : 
                                                 ((3U 
                                                   & (IData)(vlSelfRef.top__DOT__command)) 
                                                  << 
                                                  (6U 
                                                   & ((IData)(vlSelfRef.top__DOT__command) 
                                                      >> 1U))))
                                                 : 
                                                ((0x00000040U 
                                                  & (IData)(vlSelfRef.top__DOT__command))
                                                  ? (IData)(top__DOT__io_data)
                                                  : 
                                                 (((((2U 
                                                      & (((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                                            >> 6U) 
                                                           | ((IData)(vlSelfRef.top__DOT__u_adder__DOT__carry__BRA__6__KET__) 
                                                              & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                                 >> 6U))) 
                                                          ^ 
                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                           >> 7U)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & ((IData)(vlSelfRef.top__DOT__u_adder__DOT__carry__BRA__6__KET__) 
                                                           ^ 
                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                            >> 6U)))) 
                                                    << 6U) 
                                                   | (((2U 
                                                        & (((IData)(vlSelfRef.top__DOT__u_adder__DOT__carry__BRA__5__KET__) 
                                                            << 1U) 
                                                           ^ 
                                                           (0x0ffffffeU 
                                                            & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                               >> 4U)))) 
                                                       | (1U 
                                                          & ((IData)(vlSelfRef.top__DOT__u_adder__DOT__carry__BRA__4__KET__) 
                                                             ^ 
                                                             ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                              >> 4U)))) 
                                                      << 4U)) 
                                                  | ((((2U 
                                                        & (((IData)(vlSelfRef.top__DOT__u_adder__DOT__carry__BRA__3__KET__) 
                                                            << 1U) 
                                                           ^ 
                                                           (0x3ffffffeU 
                                                            & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                               >> 2U)))) 
                                                       | (1U 
                                                          & ((IData)(vlSelfRef.top__DOT__u_adder__DOT__carry__BRA__2__KET__) 
                                                             ^ 
                                                             ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                              >> 2U)))) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                                             << 1U) 
                                                            ^ 
                                                            (0xfffffffeU 
                                                             & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)))) 
                                                        | (1U 
                                                           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))))))));
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

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
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

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtop___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtop___024root___nba_sequent__TOP__0(vlSelf);
            }
        }
        Vtop___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("/home/cresthush/Desktop/project/example/vsrc/top.v", 1, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vtop___024root___eval_phase__ico(vlSelf);
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/home/cresthush/Desktop/project/example/vsrc/top.v", 1, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/home/cresthush/Desktop/project/example/vsrc/top.v", 1, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vtop___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtop___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
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
    if (VL_UNLIKELY(((vlSelfRef.io_in1 & 0xfeU)))) {
        Verilated::overWidthError("io_in1");
    }
}
#endif  // VL_DEBUG

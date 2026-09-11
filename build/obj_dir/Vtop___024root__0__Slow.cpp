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
    vlSelfRef.__Vtrigprevexpr___TOP__io_in0__0 = vlSelfRef.io_in0;
    vlSelfRef.__Vtrigprevexpr___TOP__io_in1__0 = vlSelfRef.io_in1;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__1 = vlSelfRef.clk;
}

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
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/home/cresthush/Desktop/project/example/vsrc/top.v", 1, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtop___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

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
    vlSelfRef.led_bar = (((IData)(vlSelfRef.top__DOT__u_io_bank__DOT____Vcellout__io_gen__BRA__1__KET____DOT__u_io__iow_out) 
                          << 8U) | (IData)(vlSelfRef.top__DOT__u_io_bank__DOT____Vcellout__io_gen__BRA__0__KET____DOT__u_io__iow_out));
    vlSelfRef.top__DOT__io_in = (QData)((IData)((((IData)(vlSelfRef.io_in1) 
                                                  << 8U) 
                                                 | (IData)(vlSelfRef.io_in0))));
    top__DOT__u_gpr__DOT__mid_Q = ((((IData)(vlSelfRef.top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__3__KET____DOT__u_reg__dout) 
                                     << 0x00000018U) 
                                    | ((IData)(vlSelfRef.top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__2__KET____DOT__u_reg__dout) 
                                       << 0x00000010U)) 
                                   | (((IData)(vlSelfRef.top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__1__KET____DOT__u_reg__dout) 
                                       << 8U) | (IData)(vlSelfRef.top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__0__KET____DOT__u_reg__dout)));
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

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__stl
        vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                          & vlSelfRef.__VstlTriggered[0U]) 
                                         | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtop___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vtop___024root___stl_sequent__TOP__0(vlSelf);
            }
        }
    }
    return (__VstlExecute);
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
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @( io_in0)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @( io_in1)\n");
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
    vlSelf->led_bar = 0;
    vlSelf->io_in0 = 0;
    vlSelf->io_in1 = 0;
    vlSelf->top__DOT__pc_out = 0;
    vlSelf->top__DOT__command = 0;
    vlSelf->top__DOT__wdata = 0;
    vlSelf->top__DOT__Q1 = 0;
    vlSelf->top__DOT__Q2 = 0;
    vlSelf->top__DOT__io_en = 0;
    vlSelf->top__DOT__io_in = 0;
    vlSelf->top__DOT__u_io_bank__DOT__select = 0;
    vlSelf->top__DOT__u_io_bank__DOT____Vcellout__io_gen__BRA__0__KET____DOT__u_io__iow_out = 0;
    vlSelf->top__DOT__u_io_bank__DOT____Vcellout__io_gen__BRA__1__KET____DOT__u_io__iow_out = 0;
    vlSelf->top__DOT__u_adder__DOT__carry__BRA__6__KET__ = 0;
    vlSelf->top__DOT__u_adder__DOT__carry__BRA__5__KET__ = 0;
    vlSelf->top__DOT__u_adder__DOT__carry__BRA__4__KET__ = 0;
    vlSelf->top__DOT__u_adder__DOT__carry__BRA__3__KET__ = 0;
    vlSelf->top__DOT__u_adder__DOT__carry__BRA__2__KET__ = 0;
    vlSelf->top__DOT__u_gpr__DOT__mid_en = 0;
    vlSelf->top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__0__KET____DOT__u_reg__dout = 0;
    vlSelf->top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__1__KET____DOT__u_reg__dout = 0;
    vlSelf->top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__2__KET____DOT__u_reg__dout = 0;
    vlSelf->top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__3__KET____DOT__u_reg__dout = 0;
    vlSelf->top__DOT__u_scommand_code__DOT__out_mod = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_0 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_1 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__io_in0__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__io_in1__0 = 0;
    vlSelf->__VicoDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__1 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}

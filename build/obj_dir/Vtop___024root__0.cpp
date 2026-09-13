// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

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

extern const VlWide<256>/*8191:0*/ Vtop__ConstPool__CONST_ha2b63504_0;

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vfunc_top__DOT__u_decoder__DOT__scan2ascii__0__code;
    __Vfunc_top__DOT__u_decoder__DOT__scan2ascii__0__code = 0;
    CData/*7:0*/ __Vfunc_top__DOT__u_decoder__DOT__scan2ascii__1__code;
    __Vfunc_top__DOT__u_decoder__DOT__scan2ascii__1__code = 0;
    CData/*0:0*/ __Vdly__top__DOT__u_decoder__DOT__state;
    __Vdly__top__DOT__u_decoder__DOT__state = 0;
    VlWide<4>/*127:0*/ __Vdly__top__DOT__ascill;
    VL_ZERO_W(128, __Vdly__top__DOT__ascill);
    CData/*2:0*/ __Vdly__top__DOT__u_kbd__DOT__ps2_clk_sync;
    __Vdly__top__DOT__u_kbd__DOT__ps2_clk_sync = 0;
    CData/*3:0*/ __Vdly__top__DOT__u_kbd__DOT__count;
    __Vdly__top__DOT__u_kbd__DOT__count = 0;
    CData/*2:0*/ __Vdly__top__DOT__u_kbd__DOT__w_ptr;
    __Vdly__top__DOT__u_kbd__DOT__w_ptr = 0;
    CData/*2:0*/ __Vdly__top__DOT__u_kbd__DOT__r_ptr;
    __Vdly__top__DOT__u_kbd__DOT__r_ptr = 0;
    CData/*0:0*/ __Vdly__top__DOT__u_kbd__DOT__overflow;
    __Vdly__top__DOT__u_kbd__DOT__overflow = 0;
    CData/*0:0*/ __Vdly__top__DOT__ready;
    __Vdly__top__DOT__ready = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__u_kbd__DOT__fifo__v0;
    __VdlyVal__top__DOT__u_kbd__DOT__fifo__v0 = 0;
    CData/*2:0*/ __VdlyDim0__top__DOT__u_kbd__DOT__fifo__v0;
    __VdlyDim0__top__DOT__u_kbd__DOT__fifo__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__u_kbd__DOT__fifo__v0;
    __VdlySet__top__DOT__u_kbd__DOT__fifo__v0 = 0;
    // Body
    __Vdly__top__DOT__u_kbd__DOT__ps2_clk_sync = vlSelfRef.top__DOT__u_kbd__DOT__ps2_clk_sync;
    if (VL_UNLIKELY((vlSelfRef.top__DOT__ready))) {
        VL_WRITEF_NX("data=0x%02x state=%d ascill[97]=%d nextdata_n=%d\n",4
                     , '#',8,vlSelfRef.top__DOT__u_kbd__DOT__fifo
                     [vlSelfRef.top__DOT__u_kbd__DOT__r_ptr]
                     , '#',1,vlSelfRef.top__DOT__u_decoder__DOT__state
                     , '#',1,(1U & (vlSelfRef.top__DOT__ascill[3U] 
                                    >> 1U)), '#',1,
                     (1U & (~ (IData)(vlSelfRef.top__DOT__ready))));
        __Vdly__top__DOT__u_decoder__DOT__state = vlSelfRef.top__DOT__u_decoder__DOT__state;
        __Vdly__top__DOT__ascill[0U] = vlSelfRef.top__DOT__ascill[0U];
        __Vdly__top__DOT__ascill[1U] = vlSelfRef.top__DOT__ascill[1U];
        __Vdly__top__DOT__ascill[2U] = vlSelfRef.top__DOT__ascill[2U];
        __Vdly__top__DOT__ascill[3U] = vlSelfRef.top__DOT__ascill[3U];
        __Vdly__top__DOT__u_kbd__DOT__count = vlSelfRef.top__DOT__u_kbd__DOT__count;
        __Vdly__top__DOT__u_kbd__DOT__w_ptr = vlSelfRef.top__DOT__u_kbd__DOT__w_ptr;
        __Vdly__top__DOT__u_kbd__DOT__r_ptr = vlSelfRef.top__DOT__u_kbd__DOT__r_ptr;
        __Vdly__top__DOT__u_kbd__DOT__overflow = vlSelfRef.top__DOT__u_kbd__DOT__overflow;
        __VdlySet__top__DOT__u_kbd__DOT__fifo__v0 = 0U;
        __Vdly__top__DOT__ready = 1U;
    } else {
        __Vdly__top__DOT__u_decoder__DOT__state = vlSelfRef.top__DOT__u_decoder__DOT__state;
        __Vdly__top__DOT__ascill[0U] = vlSelfRef.top__DOT__ascill[0U];
        __Vdly__top__DOT__ascill[1U] = vlSelfRef.top__DOT__ascill[1U];
        __Vdly__top__DOT__ascill[2U] = vlSelfRef.top__DOT__ascill[2U];
        __Vdly__top__DOT__ascill[3U] = vlSelfRef.top__DOT__ascill[3U];
        __Vdly__top__DOT__u_kbd__DOT__count = vlSelfRef.top__DOT__u_kbd__DOT__count;
        __Vdly__top__DOT__u_kbd__DOT__w_ptr = vlSelfRef.top__DOT__u_kbd__DOT__w_ptr;
        __Vdly__top__DOT__u_kbd__DOT__r_ptr = vlSelfRef.top__DOT__u_kbd__DOT__r_ptr;
        __Vdly__top__DOT__u_kbd__DOT__overflow = vlSelfRef.top__DOT__u_kbd__DOT__overflow;
        __VdlySet__top__DOT__u_kbd__DOT__fifo__v0 = 0U;
        __Vdly__top__DOT__ready = 0U;
    }
    __Vdly__top__DOT__u_kbd__DOT__ps2_clk_sync = ((6U 
                                                   & ((IData)(vlSelfRef.top__DOT__u_kbd__DOT__ps2_clk_sync) 
                                                      << 1U)) 
                                                  | (IData)(vlSelfRef.PS2_CLK));
    __Vdly__top__DOT__u_decoder__DOT__state = ((~ (IData)(vlSelfRef.rst)) 
                                               & ((IData)(vlSelfRef.top__DOT__u_decoder__DOT__state)
                                                   ? 
                                                  ((~ (IData)(vlSelfRef.top__DOT__ready)) 
                                                   & (IData)(vlSelfRef.top__DOT__u_decoder__DOT__state))
                                                   : 
                                                  ((IData)(vlSelfRef.top__DOT__u_decoder__DOT__state) 
                                                   | ((IData)(vlSelfRef.top__DOT__ready) 
                                                      & (0xf0U 
                                                         == vlSelfRef.top__DOT__u_kbd__DOT__fifo
                                                         [vlSelfRef.top__DOT__u_kbd__DOT__r_ptr])))));
    if (vlSelfRef.rst) {
        __Vdly__top__DOT__ascill[0U] = 0U;
        __Vdly__top__DOT__ascill[1U] = 0U;
        __Vdly__top__DOT__ascill[2U] = 0U;
        __Vdly__top__DOT__ascill[3U] = 0U;
        __Vdly__top__DOT__u_kbd__DOT__count = 0U;
        __Vdly__top__DOT__u_kbd__DOT__w_ptr = 0U;
        __Vdly__top__DOT__u_kbd__DOT__r_ptr = 0U;
        __Vdly__top__DOT__u_kbd__DOT__overflow = 0U;
        __Vdly__top__DOT__ready = 0U;
    } else {
        if (((0xf0U == vlSelfRef.top__DOT__u_kbd__DOT__fifo
              [vlSelfRef.top__DOT__u_kbd__DOT__r_ptr]) 
             | (0xe0U == vlSelfRef.top__DOT__u_kbd__DOT__fifo
                [vlSelfRef.top__DOT__u_kbd__DOT__r_ptr]))) {
            __Vdly__top__DOT__ascill[0U] = vlSelfRef.top__DOT__ascill[0U];
            __Vdly__top__DOT__ascill[1U] = vlSelfRef.top__DOT__ascill[1U];
            __Vdly__top__DOT__ascill[2U] = vlSelfRef.top__DOT__ascill[2U];
            __Vdly__top__DOT__ascill[3U] = vlSelfRef.top__DOT__ascill[3U];
        } else if (((~ (IData)(vlSelfRef.top__DOT__u_decoder__DOT__state)) 
                    & (IData)(vlSelfRef.top__DOT__ready))) {
            __Vfunc_top__DOT__u_decoder__DOT__scan2ascii__0__code 
                = vlSelfRef.top__DOT__u_kbd__DOT__fifo
                [vlSelfRef.top__DOT__u_kbd__DOT__r_ptr];
            vlSelfRef.top__DOT__u_decoder__DOT____VlemCall_0__scan2ascii 
                = (0x000000ffU & Vtop__ConstPool__CONST_ha2b63504_0
                   [(0x07ffffffU & (IData)(__Vfunc_top__DOT__u_decoder__DOT__scan2ascii__0__code))]);
            __Vdly__top__DOT__ascill[(3U & ((IData)(vlSelfRef.top__DOT__u_decoder__DOT____VlemCall_0__scan2ascii) 
                                            >> 5U))] 
                = (__Vdly__top__DOT__ascill[(3U & ((IData)(vlSelfRef.top__DOT__u_decoder__DOT____VlemCall_0__scan2ascii) 
                                                   >> 5U))] 
                   | ((IData)(1U) << (0x0000001fU & (IData)(vlSelfRef.top__DOT__u_decoder__DOT____VlemCall_0__scan2ascii))));
        } else if (((IData)(vlSelfRef.top__DOT__u_decoder__DOT__state) 
                    & (IData)(vlSelfRef.top__DOT__ready))) {
            __Vfunc_top__DOT__u_decoder__DOT__scan2ascii__1__code 
                = vlSelfRef.top__DOT__u_kbd__DOT__fifo
                [vlSelfRef.top__DOT__u_kbd__DOT__r_ptr];
            vlSelfRef.top__DOT__u_decoder__DOT____VlemCall_1__scan2ascii 
                = (0x000000ffU & Vtop__ConstPool__CONST_ha2b63504_0
                   [(0x07ffffffU & (IData)(__Vfunc_top__DOT__u_decoder__DOT__scan2ascii__1__code))]);
            __Vdly__top__DOT__ascill[(3U & ((IData)(vlSelfRef.top__DOT__u_decoder__DOT____VlemCall_1__scan2ascii) 
                                            >> 5U))] 
                = ((~ ((IData)(1U) << (0x0000001fU 
                                       & (IData)(vlSelfRef.top__DOT__u_decoder__DOT____VlemCall_1__scan2ascii)))) 
                   & __Vdly__top__DOT__ascill[(3U & 
                                               ((IData)(vlSelfRef.top__DOT__u_decoder__DOT____VlemCall_1__scan2ascii) 
                                                >> 5U))]);
        } else {
            __Vdly__top__DOT__ascill[0U] = vlSelfRef.top__DOT__ascill[0U];
            __Vdly__top__DOT__ascill[1U] = vlSelfRef.top__DOT__ascill[1U];
            __Vdly__top__DOT__ascill[2U] = vlSelfRef.top__DOT__ascill[2U];
            __Vdly__top__DOT__ascill[3U] = vlSelfRef.top__DOT__ascill[3U];
        }
        if (vlSelfRef.top__DOT__ready) {
            if ((1U & (~ (IData)(vlSelfRef.top__DOT__nextdata_n)))) {
                __Vdly__top__DOT__u_kbd__DOT__r_ptr 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__u_kbd__DOT__r_ptr)));
                if (((IData)(vlSelfRef.top__DOT__u_kbd__DOT__w_ptr) 
                     == (7U & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__u_kbd__DOT__r_ptr))))) {
                    __Vdly__top__DOT__ready = 0U;
                }
            }
        }
        if ((IData)((4U == (6U & (IData)(vlSelfRef.top__DOT__u_kbd__DOT__ps2_clk_sync))))) {
            if ((0x0aU == (IData)(vlSelfRef.top__DOT__u_kbd__DOT__count))) {
                if ((((~ (IData)(vlSelfRef.top__DOT__u_kbd__DOT__buffer)) 
                      & (IData)(vlSelfRef.PS2_DAT)) 
                     & VL_REDXOR_32((0x000001ffU & 
                                     ((IData)(vlSelfRef.top__DOT__u_kbd__DOT__buffer) 
                                      >> 1U))))) {
                    __VdlyVal__top__DOT__u_kbd__DOT__fifo__v0 
                        = (0x000000ffU & ((IData)(vlSelfRef.top__DOT__u_kbd__DOT__buffer) 
                                          >> 1U));
                    __VdlyDim0__top__DOT__u_kbd__DOT__fifo__v0 
                        = vlSelfRef.top__DOT__u_kbd__DOT__w_ptr;
                    __VdlySet__top__DOT__u_kbd__DOT__fifo__v0 = 1U;
                    __Vdly__top__DOT__ready = 1U;
                    __Vdly__top__DOT__u_kbd__DOT__w_ptr 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__u_kbd__DOT__w_ptr)));
                    __Vdly__top__DOT__u_kbd__DOT__overflow 
                        = ((IData)(vlSelfRef.top__DOT__u_kbd__DOT__overflow) 
                           | ((IData)(vlSelfRef.top__DOT__u_kbd__DOT__r_ptr) 
                              == (7U & ((IData)(1U) 
                                        + (IData)(vlSelfRef.top__DOT__u_kbd__DOT__w_ptr)))));
                }
                __Vdly__top__DOT__u_kbd__DOT__count = 0U;
            } else {
                if ((9U >= (IData)(vlSelfRef.top__DOT__u_kbd__DOT__count))) {
                    vlSelfRef.top__DOT__u_kbd__DOT__buffer 
                        = (((~ ((IData)(1U) << (IData)(vlSelfRef.top__DOT__u_kbd__DOT__count))) 
                            & (IData)(vlSelfRef.top__DOT__u_kbd__DOT__buffer)) 
                           | (0x03ffU & ((IData)(vlSelfRef.PS2_DAT) 
                                         << (IData)(vlSelfRef.top__DOT__u_kbd__DOT__count))));
                }
                __Vdly__top__DOT__u_kbd__DOT__count 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__u_kbd__DOT__count)));
            }
        }
    }
    vlSelfRef.top__DOT__u_decoder__DOT__state = __Vdly__top__DOT__u_decoder__DOT__state;
    vlSelfRef.top__DOT__ascill[0U] = __Vdly__top__DOT__ascill[0U];
    vlSelfRef.top__DOT__ascill[1U] = __Vdly__top__DOT__ascill[1U];
    vlSelfRef.top__DOT__ascill[2U] = __Vdly__top__DOT__ascill[2U];
    vlSelfRef.top__DOT__ascill[3U] = __Vdly__top__DOT__ascill[3U];
    vlSelfRef.top__DOT__u_kbd__DOT__count = __Vdly__top__DOT__u_kbd__DOT__count;
    vlSelfRef.top__DOT__u_kbd__DOT__w_ptr = __Vdly__top__DOT__u_kbd__DOT__w_ptr;
    vlSelfRef.top__DOT__u_kbd__DOT__overflow = __Vdly__top__DOT__u_kbd__DOT__overflow;
    vlSelfRef.top__DOT__u_kbd__DOT__ps2_clk_sync = __Vdly__top__DOT__u_kbd__DOT__ps2_clk_sync;
    vlSelfRef.top__DOT__u_kbd__DOT__r_ptr = __Vdly__top__DOT__u_kbd__DOT__r_ptr;
    if (__VdlySet__top__DOT__u_kbd__DOT__fifo__v0) {
        vlSelfRef.top__DOT__u_kbd__DOT__fifo[__VdlyDim0__top__DOT__u_kbd__DOT__fifo__v0] 
            = __VdlyVal__top__DOT__u_kbd__DOT__fifo__v0;
    }
    vlSelfRef.top__DOT__ready = __Vdly__top__DOT__ready;
    vlSelfRef.led = (0x0000ffffU & (vlSelfRef.top__DOT__ascill[3U] 
                                    >> 1U));
    vlSelfRef.top__DOT__nextdata_n = (1U & (~ (IData)(vlSelfRef.top__DOT__ready)));
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
                                                         & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)))));
        vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
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
    IData/*31:0*/ __VnbaIterCount;
    // Body
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
    if (VL_UNLIKELY(((vlSelfRef.PS2_CLK & 0xfeU)))) {
        Verilated::overWidthError("PS2_CLK");
    }
    if (VL_UNLIKELY(((vlSelfRef.PS2_DAT & 0xfeU)))) {
        Verilated::overWidthError("PS2_DAT");
    }
}
#endif  // VL_DEBUG

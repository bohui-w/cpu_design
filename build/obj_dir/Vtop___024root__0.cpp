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

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ top__DOT__h_addr;
    top__DOT__h_addr = 0;
    SData/*9:0*/ top__DOT__v_addr;
    top__DOT__v_addr = 0;
    IData/*23:0*/ top__DOT__vga_data;
    top__DOT__vga_data = 0;
    SData/*13:0*/ top__DOT__u_vmem__DOT__addr;
    top__DOT__u_vmem__DOT__addr = 0;
    CData/*0:0*/ top__DOT__u_vga_ctrl__DOT__h_valid;
    top__DOT__u_vga_ctrl__DOT__h_valid = 0;
    CData/*0:0*/ top__DOT__u_vga_ctrl__DOT__v_valid;
    top__DOT__u_vga_ctrl__DOT__v_valid = 0;
    IData/*25:0*/ __Vdly__top__DOT__u_image_control__DOT__cnt;
    __Vdly__top__DOT__u_image_control__DOT__cnt = 0;
    SData/*9:0*/ __Vdly__top__DOT__x_addr;
    __Vdly__top__DOT__x_addr = 0;
    SData/*9:0*/ __Vdly__top__DOT__y_addr;
    __Vdly__top__DOT__y_addr = 0;
    CData/*0:0*/ __Vdly__top__DOT__u_image_control__DOT__x_sped;
    __Vdly__top__DOT__u_image_control__DOT__x_sped = 0;
    CData/*0:0*/ __Vdly__top__DOT__u_image_control__DOT__y_sped;
    __Vdly__top__DOT__u_image_control__DOT__y_sped = 0;
    SData/*9:0*/ __Vdly__top__DOT__u_vga_ctrl__DOT__x_cnt;
    __Vdly__top__DOT__u_vga_ctrl__DOT__x_cnt = 0;
    SData/*9:0*/ __Vdly__top__DOT__u_vga_ctrl__DOT__y_cnt;
    __Vdly__top__DOT__u_vga_ctrl__DOT__y_cnt = 0;
    // Body
    __Vdly__top__DOT__u_image_control__DOT__cnt = vlSelfRef.top__DOT__u_image_control__DOT__cnt;
    __Vdly__top__DOT__u_image_control__DOT__x_sped 
        = vlSelfRef.top__DOT__u_image_control__DOT__x_sped;
    __Vdly__top__DOT__u_image_control__DOT__y_sped 
        = vlSelfRef.top__DOT__u_image_control__DOT__y_sped;
    __Vdly__top__DOT__x_addr = vlSelfRef.top__DOT__x_addr;
    __Vdly__top__DOT__y_addr = vlSelfRef.top__DOT__y_addr;
    __Vdly__top__DOT__u_vga_ctrl__DOT__x_cnt = vlSelfRef.top__DOT__u_vga_ctrl__DOT__x_cnt;
    __Vdly__top__DOT__u_vga_ctrl__DOT__y_cnt = vlSelfRef.top__DOT__u_vga_ctrl__DOT__y_cnt;
    if (vlSelfRef.rst) {
        __Vdly__top__DOT__u_image_control__DOT__cnt = 0U;
        __Vdly__top__DOT__u_image_control__DOT__x_sped = 1U;
        __Vdly__top__DOT__u_image_control__DOT__y_sped = 1U;
        __Vdly__top__DOT__x_addr = 0U;
        __Vdly__top__DOT__y_addr = 0U;
        __Vdly__top__DOT__u_vga_ctrl__DOT__x_cnt = 1U;
        __Vdly__top__DOT__u_vga_ctrl__DOT__y_cnt = 1U;
    } else {
        __Vdly__top__DOT__u_image_control__DOT__cnt 
            = ((0x0001869fU > vlSelfRef.top__DOT__u_image_control__DOT__cnt)
                ? (0x03ffffffU & ((IData)(1U) + vlSelfRef.top__DOT__u_image_control__DOT__cnt))
                : 0U);
        if ((0x0001869fU == vlSelfRef.top__DOT__u_image_control__DOT__cnt)) {
            __Vdly__top__DOT__x_addr = (0x000003ffU 
                                        & ((IData)(vlSelfRef.top__DOT__u_image_control__DOT__x_sped)
                                            ? ((IData)(1U) 
                                               + (IData)(vlSelfRef.top__DOT__x_addr))
                                            : ((IData)(vlSelfRef.top__DOT__x_addr) 
                                               - (IData)(1U))));
            __Vdly__top__DOT__y_addr = (0x000003ffU 
                                        & ((IData)(vlSelfRef.top__DOT__u_image_control__DOT__y_sped)
                                            ? ((IData)(1U) 
                                               + (IData)(vlSelfRef.top__DOT__y_addr))
                                            : ((IData)(vlSelfRef.top__DOT__y_addr) 
                                               - (IData)(1U))));
        }
        __Vdly__top__DOT__u_vga_ctrl__DOT__x_cnt = 
            ((0x0320U == (IData)(vlSelfRef.top__DOT__u_vga_ctrl__DOT__x_cnt))
              ? 1U : (0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__u_vga_ctrl__DOT__x_cnt))));
        if (((0x020dU == (IData)(vlSelfRef.top__DOT__u_vga_ctrl__DOT__y_cnt)) 
             & (0x0320U == (IData)(vlSelfRef.top__DOT__u_vga_ctrl__DOT__x_cnt)))) {
            __Vdly__top__DOT__u_vga_ctrl__DOT__y_cnt = 1U;
        } else if ((0x0320U == (IData)(vlSelfRef.top__DOT__u_vga_ctrl__DOT__x_cnt))) {
            __Vdly__top__DOT__u_vga_ctrl__DOT__y_cnt 
                = (0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__u_vga_ctrl__DOT__y_cnt)));
        }
    }
    __Vdly__top__DOT__u_image_control__DOT__x_sped 
        = ((1U >= (IData)(vlSelfRef.top__DOT__x_addr)) 
           | ((0x021aU > (IData)(vlSelfRef.top__DOT__x_addr)) 
              & (IData)(vlSelfRef.top__DOT__u_image_control__DOT__x_sped)));
    __Vdly__top__DOT__u_image_control__DOT__y_sped 
        = ((1U >= (IData)(vlSelfRef.top__DOT__y_addr)) 
           | ((0x017aU > (IData)(vlSelfRef.top__DOT__y_addr)) 
              & (IData)(vlSelfRef.top__DOT__u_image_control__DOT__y_sped)));
    vlSelfRef.top__DOT__u_image_control__DOT__x_sped 
        = __Vdly__top__DOT__u_image_control__DOT__x_sped;
    vlSelfRef.top__DOT__x_addr = __Vdly__top__DOT__x_addr;
    vlSelfRef.top__DOT__u_image_control__DOT__y_sped 
        = __Vdly__top__DOT__u_image_control__DOT__y_sped;
    vlSelfRef.top__DOT__u_image_control__DOT__cnt = __Vdly__top__DOT__u_image_control__DOT__cnt;
    vlSelfRef.top__DOT__y_addr = __Vdly__top__DOT__y_addr;
    vlSelfRef.top__DOT__u_vga_ctrl__DOT__y_cnt = __Vdly__top__DOT__u_vga_ctrl__DOT__y_cnt;
    vlSelfRef.top__DOT__u_vga_ctrl__DOT__x_cnt = __Vdly__top__DOT__u_vga_ctrl__DOT__x_cnt;
    vlSelfRef.vsync = (2U < (IData)(vlSelfRef.top__DOT__u_vga_ctrl__DOT__y_cnt));
    top__DOT__u_vga_ctrl__DOT__v_valid = ((0x0023U 
                                           < (IData)(vlSelfRef.top__DOT__u_vga_ctrl__DOT__y_cnt)) 
                                          & (0x0203U 
                                             >= (IData)(vlSelfRef.top__DOT__u_vga_ctrl__DOT__y_cnt)));
    vlSelfRef.hsync = (0x0060U < (IData)(vlSelfRef.top__DOT__u_vga_ctrl__DOT__x_cnt));
    top__DOT__u_vga_ctrl__DOT__h_valid = ((0x0090U 
                                           < (IData)(vlSelfRef.top__DOT__u_vga_ctrl__DOT__x_cnt)) 
                                          & (0x0310U 
                                             >= (IData)(vlSelfRef.top__DOT__u_vga_ctrl__DOT__x_cnt)));
    top__DOT__v_addr = (0x000003ffU & (((IData)(vlSelfRef.top__DOT__u_vga_ctrl__DOT__y_cnt) 
                                        - (IData)(0x0024U)) 
                                       & (- (IData)((IData)(top__DOT__u_vga_ctrl__DOT__v_valid)))));
    vlSelfRef.valid = ((IData)(top__DOT__u_vga_ctrl__DOT__h_valid) 
                       & (IData)(top__DOT__u_vga_ctrl__DOT__v_valid));
    top__DOT__h_addr = (0x000003ffU & (((IData)(vlSelfRef.top__DOT__u_vga_ctrl__DOT__x_cnt) 
                                        - (IData)(0x0091U)) 
                                       & (- (IData)((IData)(top__DOT__u_vga_ctrl__DOT__h_valid)))));
    top__DOT__u_vmem__DOT__addr = (0x00003fffU & (((IData)(top__DOT__h_addr) 
                                                   - (IData)(vlSelfRef.top__DOT__x_addr)) 
                                                  + 
                                                  ((IData)(0x00000064U) 
                                                   * 
                                                   (0x00003fffU 
                                                    & ((IData)(top__DOT__v_addr) 
                                                       - (IData)(vlSelfRef.top__DOT__y_addr))))));
    top__DOT__vga_data = (vlSelfRef.top__DOT__u_vmem__DOT__mem
                          [top__DOT__u_vmem__DOT__addr] 
                          & (- (IData)(((0x270fU >= (IData)(top__DOT__u_vmem__DOT__addr)) 
                                        & (((IData)(top__DOT__h_addr) 
                                            < ((IData)(0x00000064U) 
                                               + (IData)(vlSelfRef.top__DOT__x_addr))) 
                                           & (((IData)(top__DOT__h_addr) 
                                               >= (IData)(vlSelfRef.top__DOT__x_addr)) 
                                              & (((IData)(top__DOT__v_addr) 
                                                  < 
                                                  ((IData)(0x00000064U) 
                                                   + (IData)(vlSelfRef.top__DOT__y_addr))) 
                                                 & ((IData)(top__DOT__v_addr) 
                                                    >= (IData)(vlSelfRef.top__DOT__y_addr)))))))));
    vlSelfRef.vga_r = (0x000000ffU & (top__DOT__vga_data 
                                      >> 0x00000010U));
    vlSelfRef.vga_g = (0x000000ffU & (top__DOT__vga_data 
                                      >> 8U));
    vlSelfRef.vga_b = (0x000000ffU & top__DOT__vga_data);
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
}
#endif  // VL_DEBUG

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
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        VL_READMEM_N(true, 24, 10000, 0, "picture.hex"s
                     ,  &(vlSelfRef.top__DOT__u_vmem__DOT__mem)
                     , 0, ~0ULL);
    }
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
                {
                    // Inlined CFunc: _stl_sequent__TOP__0
                    SData/*9:0*/ __Vinline_0__eval_stl___Vinline_0__stl_sequent__TOP__0_top__DOT__h_addr;
                    __Vinline_0__eval_stl___Vinline_0__stl_sequent__TOP__0_top__DOT__h_addr = 0;
                    SData/*9:0*/ __Vinline_0__eval_stl___Vinline_0__stl_sequent__TOP__0_top__DOT__v_addr;
                    __Vinline_0__eval_stl___Vinline_0__stl_sequent__TOP__0_top__DOT__v_addr = 0;
                    IData/*23:0*/ __Vinline_0__eval_stl___Vinline_0__stl_sequent__TOP__0_top__DOT__vga_data;
                    __Vinline_0__eval_stl___Vinline_0__stl_sequent__TOP__0_top__DOT__vga_data = 0;
                    SData/*13:0*/ __Vinline_0__eval_stl___Vinline_0__stl_sequent__TOP__0_top__DOT__u_vmem__DOT__addr;
                    __Vinline_0__eval_stl___Vinline_0__stl_sequent__TOP__0_top__DOT__u_vmem__DOT__addr = 0;
                    CData/*0:0*/ __Vinline_0__eval_stl___Vinline_0__stl_sequent__TOP__0_top__DOT__u_vga_ctrl__DOT__h_valid;
                    __Vinline_0__eval_stl___Vinline_0__stl_sequent__TOP__0_top__DOT__u_vga_ctrl__DOT__h_valid = 0;
                    CData/*0:0*/ __Vinline_0__eval_stl___Vinline_0__stl_sequent__TOP__0_top__DOT__u_vga_ctrl__DOT__v_valid;
                    __Vinline_0__eval_stl___Vinline_0__stl_sequent__TOP__0_top__DOT__u_vga_ctrl__DOT__v_valid = 0;
                    vlSelfRef.hsync = (0x0060U < (IData)(vlSelfRef.top__DOT__u_vga_ctrl__DOT__x_cnt));
                    vlSelfRef.vsync = (2U < (IData)(vlSelfRef.top__DOT__u_vga_ctrl__DOT__y_cnt));
                    __Vinline_0__eval_stl___Vinline_0__stl_sequent__TOP__0_top__DOT__u_vga_ctrl__DOT__h_valid 
                        = ((0x0090U < (IData)(vlSelfRef.top__DOT__u_vga_ctrl__DOT__x_cnt)) 
                           & (0x0310U >= (IData)(vlSelfRef.top__DOT__u_vga_ctrl__DOT__x_cnt)));
                    __Vinline_0__eval_stl___Vinline_0__stl_sequent__TOP__0_top__DOT__u_vga_ctrl__DOT__v_valid 
                        = ((0x0023U < (IData)(vlSelfRef.top__DOT__u_vga_ctrl__DOT__y_cnt)) 
                           & (0x0203U >= (IData)(vlSelfRef.top__DOT__u_vga_ctrl__DOT__y_cnt)));
                    __Vinline_0__eval_stl___Vinline_0__stl_sequent__TOP__0_top__DOT__h_addr 
                        = (0x000003ffU & (((IData)(vlSelfRef.top__DOT__u_vga_ctrl__DOT__x_cnt) 
                                           - (IData)(0x0091U)) 
                                          & (- (IData)(__Vinline_0__eval_stl___Vinline_0__stl_sequent__TOP__0_top__DOT__u_vga_ctrl__DOT__h_valid))));
                    vlSelfRef.valid = (__Vinline_0__eval_stl___Vinline_0__stl_sequent__TOP__0_top__DOT__u_vga_ctrl__DOT__h_valid 
                                       & __Vinline_0__eval_stl___Vinline_0__stl_sequent__TOP__0_top__DOT__u_vga_ctrl__DOT__v_valid);
                    __Vinline_0__eval_stl___Vinline_0__stl_sequent__TOP__0_top__DOT__v_addr 
                        = (0x000003ffU & (((IData)(vlSelfRef.top__DOT__u_vga_ctrl__DOT__y_cnt) 
                                           - (IData)(0x0024U)) 
                                          & (- (IData)(__Vinline_0__eval_stl___Vinline_0__stl_sequent__TOP__0_top__DOT__u_vga_ctrl__DOT__v_valid))));
                    __Vinline_0__eval_stl___Vinline_0__stl_sequent__TOP__0_top__DOT__u_vmem__DOT__addr 
                        = (0x00003fffU & (((IData)(__Vinline_0__eval_stl___Vinline_0__stl_sequent__TOP__0_top__DOT__h_addr) 
                                           - (IData)(vlSelfRef.top__DOT__x_addr)) 
                                          + ((IData)(0x00000064U) 
                                             * (0x00003fffU 
                                                & ((IData)(__Vinline_0__eval_stl___Vinline_0__stl_sequent__TOP__0_top__DOT__v_addr) 
                                                   - (IData)(vlSelfRef.top__DOT__y_addr))))));
                    __Vinline_0__eval_stl___Vinline_0__stl_sequent__TOP__0_top__DOT__vga_data 
                        = (vlSelfRef.top__DOT__u_vmem__DOT__mem
                           [__Vinline_0__eval_stl___Vinline_0__stl_sequent__TOP__0_top__DOT__u_vmem__DOT__addr] 
                           & (- (IData)(((0x270fU >= __Vinline_0__eval_stl___Vinline_0__stl_sequent__TOP__0_top__DOT__u_vmem__DOT__addr) 
                                         & ((__Vinline_0__eval_stl___Vinline_0__stl_sequent__TOP__0_top__DOT__h_addr 
                                             < ((IData)(0x00000064U) 
                                                + (IData)(vlSelfRef.top__DOT__x_addr))) 
                                            & ((__Vinline_0__eval_stl___Vinline_0__stl_sequent__TOP__0_top__DOT__h_addr 
                                                >= (IData)(vlSelfRef.top__DOT__x_addr)) 
                                               & ((__Vinline_0__eval_stl___Vinline_0__stl_sequent__TOP__0_top__DOT__v_addr 
                                                   < 
                                                   ((IData)(0x00000064U) 
                                                    + (IData)(vlSelfRef.top__DOT__y_addr))) 
                                                  & (__Vinline_0__eval_stl___Vinline_0__stl_sequent__TOP__0_top__DOT__v_addr 
                                                     >= (IData)(vlSelfRef.top__DOT__y_addr)))))))));
                    vlSelfRef.vga_r = (0x000000ffU 
                                       & (__Vinline_0__eval_stl___Vinline_0__stl_sequent__TOP__0_top__DOT__vga_data 
                                          >> 0x00000010U));
                    vlSelfRef.vga_g = (0x000000ffU 
                                       & (__Vinline_0__eval_stl___Vinline_0__stl_sequent__TOP__0_top__DOT__vga_data 
                                          >> 8U));
                    vlSelfRef.vga_b = (0x000000ffU 
                                       & __Vinline_0__eval_stl___Vinline_0__stl_sequent__TOP__0_top__DOT__vga_data);
                }
            }
        }
    }
    return (__VstlExecute);
}

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
    vlSelf->hsync = 0;
    vlSelf->vsync = 0;
    vlSelf->valid = 0;
    vlSelf->vga_r = 0;
    vlSelf->vga_g = 0;
    vlSelf->vga_b = 0;
    vlSelf->top__DOT__x_addr = 0;
    vlSelf->top__DOT__y_addr = 0;
    vlSelf->top__DOT__u_image_control__DOT__cnt = 0;
    vlSelf->top__DOT__u_image_control__DOT__x_sped = 0;
    vlSelf->top__DOT__u_image_control__DOT__y_sped = 0;
    for (int __Vi0 = 0; __Vi0 < 10000; ++__Vi0) {
        vlSelf->top__DOT__u_vmem__DOT__mem[__Vi0] = 0;
    }
    vlSelf->top__DOT__u_vga_ctrl__DOT__x_cnt = 0;
    vlSelf->top__DOT__u_vga_ctrl__DOT__y_cnt = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}

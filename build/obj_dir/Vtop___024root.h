// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(io_in0,7,0);
    VL_IN8(io_in1,0,0);
    CData/*3:0*/ top__DOT__pc_out;
    CData/*7:0*/ top__DOT__command;
    CData/*7:0*/ top__DOT__wdata;
    CData/*7:0*/ top__DOT__Q1;
    CData/*7:0*/ top__DOT__Q2;
    CData/*0:0*/ top__DOT__io_en;
    CData/*7:0*/ top__DOT__u_io_bank__DOT__select;
    CData/*7:0*/ top__DOT__u_io_bank__DOT____Vcellout__io_gen__BRA__0__KET____DOT__u_io__iow_out;
    CData/*7:0*/ top__DOT__u_io_bank__DOT____Vcellout__io_gen__BRA__1__KET____DOT__u_io__iow_out;
    CData/*0:0*/ top__DOT__u_adder__DOT__carry__BRA__6__KET__;
    CData/*0:0*/ top__DOT__u_adder__DOT__carry__BRA__5__KET__;
    CData/*0:0*/ top__DOT__u_adder__DOT__carry__BRA__4__KET__;
    CData/*0:0*/ top__DOT__u_adder__DOT__carry__BRA__3__KET__;
    CData/*0:0*/ top__DOT__u_adder__DOT__carry__BRA__2__KET__;
    CData/*3:0*/ top__DOT__u_gpr__DOT__mid_en;
    CData/*7:0*/ top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__0__KET____DOT__u_reg__dout;
    CData/*7:0*/ top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__1__KET____DOT__u_reg__dout;
    CData/*7:0*/ top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__2__KET____DOT__u_reg__dout;
    CData/*7:0*/ top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__3__KET____DOT__u_reg__dout;
    CData/*3:0*/ top__DOT__u_scommand_code__DOT__out_mod;
    CData/*7:0*/ __VdfgRegularize_h6e95ff9d_0_0;
    CData/*7:0*/ __VdfgRegularize_h6e95ff9d_0_1;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
    CData/*7:0*/ __Vtrigprevexpr___TOP__io_in0__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__io_in1__0;
    CData/*0:0*/ __VicoDidInit;
    CData/*0:0*/ __VicoPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__1;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    VL_OUT16(led_bar,15,0);
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ top__DOT__io_in;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 2> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* namep);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

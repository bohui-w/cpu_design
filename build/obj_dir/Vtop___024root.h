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
    VL_IN8(PS2_CLK,0,0);
    VL_IN8(PS2_DAT,0,0);
    CData/*0:0*/ top__DOT__ready;
    CData/*0:0*/ top__DOT__nextdata_n;
    CData/*7:0*/ top__DOT__u_decoder__DOT____VlemCall_1__scan2ascii;
    CData/*7:0*/ top__DOT__u_decoder__DOT____VlemCall_0__scan2ascii;
    CData/*0:0*/ top__DOT__u_decoder__DOT__state;
    CData/*0:0*/ top__DOT__u_kbd__DOT__overflow;
    CData/*2:0*/ top__DOT__u_kbd__DOT__w_ptr;
    CData/*2:0*/ top__DOT__u_kbd__DOT__r_ptr;
    CData/*3:0*/ top__DOT__u_kbd__DOT__count;
    CData/*2:0*/ top__DOT__u_kbd__DOT__ps2_clk_sync;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    VL_OUT16(led,15,0);
    SData/*9:0*/ top__DOT__u_kbd__DOT__buffer;
    VlWide<4>/*127:0*/ top__DOT__ascill;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 8> top__DOT__u_kbd__DOT__fifo;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
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

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
    VL_OUT8(M_w_en,0,0);
    VL_OUT8(M_op,0,0);
    VL_OUT8(M_wdata8,7,0);
    VL_IN8(M_rdata8,7,0);
    VL_OUT8(is_ebreak,0,0);
    CData/*4:0*/ top__DOT__rd;
    CData/*4:0*/ top__DOT__rs1;
    CData/*4:0*/ top__DOT__rs2;
    CData/*2:0*/ top__DOT__exu_op;
    CData/*0:0*/ top__DOT__exu_data_sel;
    CData/*0:0*/ top__DOT__w_en;
    CData/*0:0*/ top__DOT__pc_op;
    CData/*0:0*/ top__DOT__mem_op;
    CData/*1:0*/ top__DOT__wbu_op;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
    CData/*7:0*/ __Vtrigprevexpr___TOP__M_rdata8__0;
    CData/*0:0*/ __VicoDidInit;
    CData/*0:0*/ __VicoPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__1;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    VL_OUT(inst_addr,31,0);
    VL_OUT(M_addr,31,0);
    VL_OUT(M_wdata32,31,0);
    VL_IN(M_rdata32,31,0);
    VL_IN(inst,31,0);
    IData/*31:0*/ top__DOT__imm;
    IData/*31:0*/ top__DOT__exu_d;
    IData/*31:0*/ __Vtrigprevexpr___TOP__M_rdata32__0;
    IData/*31:0*/ __Vtrigprevexpr___TOP__inst__0;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> top__DOT__u_gpr__DOT__reg_file;
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

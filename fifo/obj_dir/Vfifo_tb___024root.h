// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfifo_tb.h for the primary calling header

#ifndef VERILATED_VFIFO_TB___024ROOT_H_
#define VERILATED_VFIFO_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vfifo_tb_fifo_if__D4;
class Vfifo_tb_fifo_if__D4__03a__03a__VDynScope_7;
class Vfifo_tb_fifo_if__D4__03a__03a__VDynScope_7__Vclpkg;


class Vfifo_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfifo_tb___024root final {
  public:
    // CELLS
    Vfifo_tb_fifo_if__D4* __PVT__fifo_tb__DOT__fif;
    Vfifo_tb_fifo_if__D4__03a__03a__VDynScope_7__Vclpkg* fifo_if__D4__03a__03a__VDynScope_7__Vclpkg;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ fifo_tb__DOT__clk;
    CData/*7:0*/ fifo_tb__DOT__received;
    CData/*2:0*/ fifo_tb__DOT__dut__DOT__rd_pointer;
    CData/*2:0*/ fifo_tb__DOT__dut__DOT__wr_pointer;
    CData/*0:0*/ __VdlySet__rst_n__v0_hierarchical;
    CData/*0:0*/ __VdlySet__wr_en__v1_hierarchical;
    CData/*7:0*/ __VdlyVal__datain__v2_hierarchical;
    CData/*0:0*/ __VdlySet__datain__v2_hierarchical;
    CData/*0:0*/ __VdlySet__wr_en__v3_hierarchical;
    CData/*0:0*/ __VdlySet__wr_en__v4_hierarchical;
    CData/*7:0*/ __VdlyVal__datain__v5_hierarchical;
    CData/*0:0*/ __VdlySet__datain__v5_hierarchical;
    CData/*0:0*/ __VdlySet__wr_en__v6_hierarchical;
    CData/*0:0*/ __VdlySet__rd_en__v7_hierarchical;
    CData/*0:0*/ __VdlySet__rd_en__v8_hierarchical;
    CData/*7:0*/ __VdlyVal____Vtask___VforkTask_0__4____VDynScope_read_1__v0;
    CData/*0:0*/ __VdlySet____Vtask___VforkTask_0__4____VDynScope_read_1__v0;
    CData/*7:0*/ __VdlyVal__fifo_tb__DOT__dut__DOT__data__v0;
    CData/*1:0*/ __VdlyDim0__fifo_tb__DOT__dut__DOT__data__v0;
    CData/*0:0*/ __VdlySet__fifo_tb__DOT__dut__DOT__data__v0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__fifo_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__fifo_tb__DOT__fif__rst_n__0;
    IData/*31:0*/ fifo_tb__DOT__unnamedblk1__DOT__round;
    IData/*31:0*/ fifo_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i;
    IData/*31:0*/ fifo_tb__DOT__unnamedblk1__DOT__unnamedblk3__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 4> fifo_tb__DOT__dut__DOT__data;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hda59b0a2__0;
    VlTriggerScheduler __VtrigSched_hda59b0e3__0;
    VlClassRef<Vfifo_tb_fifo_if__D4__03a__03a__VDynScope_7> __Vtask___VforkTask_0__4____VDynScope_read_1;

    // INTERNAL VARIABLES
    Vfifo_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vfifo_tb___024root(Vfifo_tb__Syms* symsp, const char* namep);
    ~Vfifo_tb___024root();
    VL_UNCOPYABLE(Vfifo_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

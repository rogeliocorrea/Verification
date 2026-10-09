// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfifo_tb.h for the primary calling header

#ifndef VERILATED_VFIFO_TB_FIFO_IF__D4_H_
#define VERILATED_VFIFO_TB_FIFO_IF__D4_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vfifo_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfifo_tb_fifo_if__D4 final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    CData/*0:0*/ rst_n;
    CData/*7:0*/ datain;
    CData/*7:0*/ dataout;
    CData/*0:0*/ full;
    CData/*0:0*/ empty;
    CData/*0:0*/ wr_en;
    CData/*0:0*/ rd_en;

    // INTERNAL VARIABLES
    Vfifo_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vfifo_tb_fifo_if__D4() = default;
    ~Vfifo_tb_fifo_if__D4() = default;
    void ctor(Vfifo_tb__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vfifo_tb_fifo_if__D4);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vfifo_tb_fifo_if__D4* obj);

#endif  // guard

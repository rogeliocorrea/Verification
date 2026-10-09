// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfifo_tb.h for the primary calling header

#ifndef VERILATED_VFIFO_TB_FIFO_IF__D4__03A__03A__VDYNSCOPE_7__VCLPKG_H_
#define VERILATED_VFIFO_TB_FIFO_IF__D4__03A__03A__VDYNSCOPE_7__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vfifo_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfifo_tb_fifo_if__D4__03a__03a__VDynScope_7__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vfifo_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vfifo_tb_fifo_if__D4__03a__03a__VDynScope_7__Vclpkg() = default;
    ~Vfifo_tb_fifo_if__D4__03a__03a__VDynScope_7__Vclpkg() = default;
    void ctor(Vfifo_tb__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vfifo_tb_fifo_if__D4__03a__03a__VDynScope_7__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vfifo_tb__Syms;

class Vfifo_tb_fifo_if__D4__03a__03a__VDynScope_7 : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*7:0*/ __PVT__data;
  private:
    void _ctor_var_reset(Vfifo_tb__Syms* __restrict vlSymsp);
  public:
    Vfifo_tb_fifo_if__D4__03a__03a__VDynScope_7(Vfifo_tb__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vfifo_tb_fifo_if__D4__03a__03a__VDynScope_7() {}
};

std::string VL_TO_STRING(const VlClassRef<Vfifo_tb_fifo_if__D4__03a__03a__VDynScope_7>& obj);

#endif  // guard

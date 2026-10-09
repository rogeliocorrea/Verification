// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VFIFO_TB__SYMS_H_
#define VERILATED_VFIFO_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vfifo_tb.h"

// INCLUDE MODULE CLASSES
#include "Vfifo_tb___024root.h"
#include "Vfifo_tb_fifo_if__D4.h"
#include "Vfifo_tb_fifo_if__D4__03a__03a__VDynScope_7__Vclpkg.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vfifo_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vfifo_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vfifo_tb___024root             TOP;
    Vfifo_tb_fifo_if__D4           TOP__fifo_tb__DOT__fif;
    Vfifo_tb_fifo_if__D4__03a__03a__VDynScope_7__Vclpkg TOP__fifo_if__D4__03a__03a__VDynScope_7__Vclpkg;

    // CONSTRUCTORS
    Vfifo_tb__Syms(VerilatedContext* contextp, const char* namep, Vfifo_tb* modelp);
    ~Vfifo_tb__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard

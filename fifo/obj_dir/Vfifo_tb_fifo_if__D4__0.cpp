// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfifo_tb.h for the primary calling header

#include "Vfifo_tb__pch.h"

void Vfifo_tb_fifo_if__D4___nba_sequent__TOP__fifo_tb__DOT__fif__1(Vfifo_tb_fifo_if__D4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_tb_fifo_if__D4___nba_sequent__TOP__fifo_tb__DOT__fif__1\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.empty = ((IData)(vlSymsp->TOP.fifo_tb__DOT__dut__DOT__rd_pointer) 
                       == (IData)(vlSymsp->TOP.fifo_tb__DOT__dut__DOT__wr_pointer));
    vlSelfRef.full = (((1U & ((IData)(vlSymsp->TOP.fifo_tb__DOT__dut__DOT__wr_pointer) 
                              >> 2U)) != (1U & ((IData)(vlSymsp->TOP.fifo_tb__DOT__dut__DOT__rd_pointer) 
                                                >> 2U))) 
                      & ((3U & (IData)(vlSymsp->TOP.fifo_tb__DOT__dut__DOT__wr_pointer)) 
                         == (3U & (IData)(vlSymsp->TOP.fifo_tb__DOT__dut__DOT__rd_pointer))));
}

void Vfifo_tb_fifo_if__D4___nba_sequent__TOP__fifo_tb__DOT__fif__2(Vfifo_tb_fifo_if__D4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_tb_fifo_if__D4___nba_sequent__TOP__fifo_tb__DOT__fif__2\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.__VdlySet__datain__v2_hierarchical) {
        vlSymsp->TOP.__VdlySet__datain__v2_hierarchical = 0U;
        vlSelfRef.datain = vlSymsp->TOP.__VdlyVal__datain__v2_hierarchical;
    }
    if (vlSymsp->TOP.__VdlySet__datain__v5_hierarchical) {
        vlSymsp->TOP.__VdlySet__datain__v5_hierarchical = 0U;
        vlSelfRef.datain = vlSymsp->TOP.__VdlyVal__datain__v5_hierarchical;
    }
    if (vlSymsp->TOP.__VdlySet__wr_en__v1_hierarchical) {
        vlSymsp->TOP.__VdlySet__wr_en__v1_hierarchical = 0U;
        vlSelfRef.wr_en = 1U;
    }
    if (vlSymsp->TOP.__VdlySet__wr_en__v3_hierarchical) {
        vlSymsp->TOP.__VdlySet__wr_en__v3_hierarchical = 0U;
        vlSelfRef.wr_en = 0U;
    }
    if (vlSymsp->TOP.__VdlySet__wr_en__v4_hierarchical) {
        vlSymsp->TOP.__VdlySet__wr_en__v4_hierarchical = 0U;
        vlSelfRef.wr_en = 1U;
    }
    if (vlSymsp->TOP.__VdlySet__wr_en__v6_hierarchical) {
        vlSymsp->TOP.__VdlySet__wr_en__v6_hierarchical = 0U;
        vlSelfRef.wr_en = 0U;
    }
    if (vlSymsp->TOP.__VdlySet__rst_n__v0_hierarchical) {
        vlSymsp->TOP.__VdlySet__rst_n__v0_hierarchical = 0U;
        vlSelfRef.rst_n = 1U;
    }
    if (vlSymsp->TOP.__VdlySet__rd_en__v7_hierarchical) {
        vlSymsp->TOP.__VdlySet__rd_en__v7_hierarchical = 0U;
        vlSelfRef.rd_en = 1U;
    }
    if (vlSymsp->TOP.__VdlySet__rd_en__v8_hierarchical) {
        vlSymsp->TOP.__VdlySet__rd_en__v8_hierarchical = 0U;
        vlSelfRef.rd_en = 0U;
    }
}

std::string VL_TO_STRING(const Vfifo_tb_fifo_if__D4* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfifo_tb_fifo_if__D4::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->vlNamep : "null");
}

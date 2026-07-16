// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__2(Vtop_PulseGenerator* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.io_freq_valid = vlSymsp->TOP.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1_io_freq_valid;
    vlSelfRef.io_phase_valid = vlSymsp->TOP.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1_io_phase_valid;
    vlSelfRef.io_amp_valid = vlSymsp->TOP.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1_io_amp_valid;
    vlSelfRef.io_addr_valid = vlSymsp->TOP.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1_io_addr_valid;
    vlSelfRef.io_dur_valid = vlSymsp->TOP.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1_io_dur_valid;
    vlSelfRef.freqCQ__DOT__io_push_valid = vlSelfRef.io_freq_valid;
    vlSelfRef.freqPQ__DOT__io_push_valid = vlSelfRef.io_freq_valid;
    vlSelfRef.phaseQ__DOT__io_push_valid = vlSelfRef.io_phase_valid;
    vlSelfRef.ampQ__DOT__io_push_valid = vlSelfRef.io_amp_valid;
    vlSelfRef.addrQ__DOT__io_push_valid = vlSelfRef.io_addr_valid;
    vlSelfRef.durQ__DOT__io_push_valid = vlSelfRef.io_dur_valid;
    vlSelfRef.freqCQ__DOT__logic_fifo__DOT__io_push_valid 
        = vlSelfRef.freqCQ__DOT__io_push_valid;
    vlSelfRef.freqPQ__DOT__logic_fifo__DOT__io_push_valid 
        = vlSelfRef.freqPQ__DOT__io_push_valid;
    vlSelfRef.phaseQ__DOT__logic_fifo__DOT__io_push_valid 
        = vlSelfRef.phaseQ__DOT__io_push_valid;
    vlSelfRef.ampQ__DOT__logic_fifo__DOT__io_push_valid 
        = vlSelfRef.ampQ__DOT__io_push_valid;
    vlSelfRef.addrQ__DOT__logic_fifo__DOT__io_push_valid 
        = vlSelfRef.addrQ__DOT__io_push_valid;
    vlSelfRef.durQ__DOT__logic_fifo__DOT__io_push_valid 
        = vlSelfRef.durQ__DOT__io_push_valid;
}

void Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__11(Vtop_PulseGenerator* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__11\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_289;
    __VdfgRegularize_h6e95ff9d_0_289 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_290;
    __VdfgRegularize_h6e95ff9d_0_290 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_291;
    __VdfgRegularize_h6e95ff9d_0_291 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_292;
    __VdfgRegularize_h6e95ff9d_0_292 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_293;
    __VdfgRegularize_h6e95ff9d_0_293 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_294;
    __VdfgRegularize_h6e95ff9d_0_294 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_295;
    __VdfgRegularize_h6e95ff9d_0_295 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_296;
    __VdfgRegularize_h6e95ff9d_0_296 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_297;
    __VdfgRegularize_h6e95ff9d_0_297 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_298;
    __VdfgRegularize_h6e95ff9d_0_298 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_299;
    __VdfgRegularize_h6e95ff9d_0_299 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_300;
    __VdfgRegularize_h6e95ff9d_0_300 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_301;
    __VdfgRegularize_h6e95ff9d_0_301 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_302;
    __VdfgRegularize_h6e95ff9d_0_302 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_303;
    __VdfgRegularize_h6e95ff9d_0_303 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_304;
    __VdfgRegularize_h6e95ff9d_0_304 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_305;
    __VdfgRegularize_h6e95ff9d_0_305 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_306;
    __VdfgRegularize_h6e95ff9d_0_306 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_307;
    __VdfgRegularize_h6e95ff9d_0_307 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_308;
    __VdfgRegularize_h6e95ff9d_0_308 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_309;
    __VdfgRegularize_h6e95ff9d_0_309 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_310;
    __VdfgRegularize_h6e95ff9d_0_310 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_311;
    __VdfgRegularize_h6e95ff9d_0_311 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_312;
    __VdfgRegularize_h6e95ff9d_0_312 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_313;
    __VdfgRegularize_h6e95ff9d_0_313 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_314;
    __VdfgRegularize_h6e95ff9d_0_314 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_315;
    __VdfgRegularize_h6e95ff9d_0_315 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_316;
    __VdfgRegularize_h6e95ff9d_0_316 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_317;
    __VdfgRegularize_h6e95ff9d_0_317 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_318;
    __VdfgRegularize_h6e95ff9d_0_318 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_319;
    __VdfgRegularize_h6e95ff9d_0_319 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_320;
    __VdfgRegularize_h6e95ff9d_0_320 = 0;
    // Body
    vlSelfRef.carrierGen__DOT__cordic_6__DOT__imOut 
        = (0x0000ffffU & vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_imOut);
    vlSelfRef.carrierGen__DOT__cordic_6__DOT__reOut 
        = (0x0000ffffU & vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_reOut);
    if (vlSelfRef.carrierGen__DOT__cordic_6__DOT__when_Cordic_l128_16) {
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_17 
            = (0x03ffffffU & ((IData)(0x00000080U) 
                              + vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_17_1));
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_17 
            = (0x03ffffffU & ((IData)(0x00000080U) 
                              + vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_17_1));
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_17 
            = (0x00ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_16 
                              - (IData)(0x00000029U)));
    } else {
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_17 
            = (0x03ffffffU & ((IData)(0x00000080U) 
                              + vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_17_3));
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_17 
            = (0x03ffffffU & ((IData)(0x00000080U) 
                              + vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_17_3));
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_17 
            = (0x00ffffffU & ((IData)(0x00000029U) 
                              + vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_16));
    }
    vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_0 = 0U;
    if (vlSelfRef.carrierGen__DOT__cordic_6__DOT__when_Cordic_l128_15) {
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_16 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_16_2;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_16 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_16_1;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_16 
            = (0x00ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_15 
                              - (IData)(0x00000051U)));
    } else {
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_16 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_16_4;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_16 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_16_3;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_16 
            = (0x00ffffffU & ((IData)(0x00000051U) 
                              + vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_15));
    }
    if (vlSelfRef.carrierGen__DOT__cordic_6__DOT__when_Cordic_l128_14) {
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_15 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_15_2;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_15 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_15_1;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_15 
            = (0x00ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_14 
                              - (IData)(0x000000a3U)));
    } else {
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_15 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_15_4;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_15 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_15_3;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_15 
            = (0x00ffffffU & ((IData)(0x000000a3U) 
                              + vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_14));
    }
    if (vlSelfRef.carrierGen__DOT__cordic_6__DOT__when_Cordic_l128_13) {
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_14 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_14_1;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_14 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_14_2;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_14 
            = (0x00ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_13 
                              - (IData)(0x00000146U)));
    } else {
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_14 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_14_3;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_14 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_14_4;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_14 
            = (0x00ffffffU & ((IData)(0x00000146U) 
                              + vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_13));
    }
    if (vlSelfRef.carrierGen__DOT__cordic_6__DOT__when_Cordic_l128_12) {
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_13 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_13_2;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_13 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_13_1;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_13 
            = (0x00ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_12 
                              - (IData)(0x0000028cU)));
    } else {
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_13 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_13_4;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_13 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_13_3;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_13 
            = (0x00ffffffU & ((IData)(0x0000028cU) 
                              + vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_12));
    }
    if (vlSelfRef.carrierGen__DOT__cordic_6__DOT__when_Cordic_l128_11) {
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_12 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_12_1;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_12 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_12_2;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_12 
            = (0x00ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_11 
                              - (IData)(0x00000518U)));
    } else {
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_12 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_12_3;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_12 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_12_4;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_12 
            = (0x00ffffffU & ((IData)(0x00000518U) 
                              + vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_11));
    }
    if (vlSelfRef.carrierGen__DOT__cordic_6__DOT__when_Cordic_l128_10) {
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_11 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_11_1;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_11 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_11_2;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_11 
            = (0x00ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_10 
                              - (IData)(0x00000a30U)));
    } else {
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_11 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_11_3;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_11 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_11_4;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_11 
            = (0x00ffffffU & ((IData)(0x00000a30U) 
                              + vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_10));
    }
    if (vlSelfRef.carrierGen__DOT__cordic_6__DOT__when_Cordic_l128_9) {
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_10 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_10_1;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_10 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_10_2;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_10 
            = (0x00ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_9 
                              - (IData)(0x0000145fU)));
    } else {
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_10 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_10_3;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_10 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_10_4;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_10 
            = (0x00ffffffU & ((IData)(0x0000145fU) 
                              + vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_9));
    }
    if (vlSelfRef.carrierGen__DOT__cordic_6__DOT__when_Cordic_l128_8) {
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_9 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_9_1;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_9 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_9_2;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_9 
            = (0x00ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_8 
                              - (IData)(0x000028beU)));
    } else {
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_9 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_9_3;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_9 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_9_4;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_9 
            = (0x00ffffffU & ((IData)(0x000028beU) 
                              + vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_8));
    }
    if (vlSelfRef.carrierGen__DOT__cordic_6__DOT__when_Cordic_l128_7) {
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_8 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_8_1;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_8 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_8_2;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_8 
            = (0x00ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_7 
                              - (IData)(0x0000517cU)));
    } else {
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_8 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_8_3;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_8 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_8_4;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_8 
            = (0x00ffffffU & ((IData)(0x0000517cU) 
                              + vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_7));
    }
    if (vlSelfRef.carrierGen__DOT__cordic_6__DOT__when_Cordic_l128_6) {
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_7 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_7_1;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_7 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_7_2;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_7 
            = (0x00ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_6 
                              - (IData)(0x0000a2f6U)));
    } else {
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_7 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_7_3;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_7 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_7_4;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_7 
            = (0x00ffffffU & ((IData)(0x0000a2f6U) 
                              + vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_6));
    }
    if (vlSelfRef.carrierGen__DOT__cordic_6__DOT__when_Cordic_l128_5) {
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_6 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_6_1;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_6 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_6_2;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_6 
            = (0x00ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_5 
                              - (IData)(0x000145d8U)));
    } else {
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_6 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_6_3;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_6 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_6_4;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_6 
            = (0x00ffffffU & ((IData)(0x000145d8U) 
                              + vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_5));
    }
    if (vlSelfRef.carrierGen__DOT__cordic_6__DOT__when_Cordic_l128_4) {
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_5 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_5_1;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_5 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_5_2;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_5 
            = (0x00ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_4 
                              - (IData)(0x00028b0dU)));
    } else {
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_5 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_5_3;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_5 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_5_4;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_5 
            = (0x00ffffffU & ((IData)(0x00028b0dU) 
                              + vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_4));
    }
    if (vlSelfRef.carrierGen__DOT__cordic_6__DOT__when_Cordic_l128_3) {
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_4 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_4_2;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_4 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_4_1;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_4 
            = (0x00ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_3 
                              - (IData)(0x00051112U)));
    } else {
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_4 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_4_4;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_4 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_4_3;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_4 
            = (0x00ffffffU & ((IData)(0x00051112U) 
                              + vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_3));
    }
    if (vlSelfRef.carrierGen__DOT__cordic_6__DOT__when_Cordic_l128_2) {
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_3 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_3_2;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_3 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_3_1;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_3 
            = (0x00ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_2 
                              - (IData)(0x0009fb38U)));
    } else {
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_3 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_3_4;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_3 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_3_3;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_3 
            = (0x00ffffffU & ((IData)(0x0009fb38U) 
                              + vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_2));
    }
    if (vlSelfRef.carrierGen__DOT__cordic_6__DOT__when_Cordic_l128_1) {
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_2 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_2_2;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_2 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_2_1;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_2 
            = (0x00ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_1 
                              - (IData)(0x0012e405U)));
    } else {
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_2 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_2_4;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_2 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_2_3;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_2 
            = (0x00ffffffU & ((IData)(0x0012e405U) 
                              + vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_1));
    }
    if (vlSelfRef.carrierGen__DOT__cordic_6__DOT__when_Cordic_l128) {
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_1 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_1_1;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_1 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_1_2;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_1 
            = (0x00ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_0 
                              - (IData)(0x00200000U)));
    } else {
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_1 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_1_2;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_1 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_1_3;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_1 
            = (0x00ffffffU & ((IData)(0x00200000U) 
                              + vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_0));
    }
    if (vlSelfRef.carrierGen__DOT__cordic_6__DOT__pre) {
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_0 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_0;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_0 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT__zFlip;
    } else {
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_0 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT__xLoad;
        vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_0 
            = vlSelfRef.carrierGen__DOT__cordic_6__DOT__zLoad;
    }
    vlSelfRef.carrierGen__DOT__cordic_6__DOT__io_cmd_valid_delay_19 
        = vlSelfRef.carrierGen__DOT__cordic_6__DOT__io_cmd_valid_delay_18;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT__io_rsp_payload_im 
        = vlSelfRef.carrierGen__DOT__cordic_6__DOT__imOut;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT__io_rsp_payload_re 
        = vlSelfRef.carrierGen__DOT__cordic_6__DOT__reOut;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_reOut 
        = (0x0003ffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_17 
                          >> 8U));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_imOut 
        = (0x0003ffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_17 
                          >> 8U));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_1 
        = vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_0;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_1 
        = vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_0;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_15 
        = (0x00000fffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_14 
                          >> 0x0eU));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_14 
        = (0x00001fffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_13 
                          >> 0x0dU));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_13 
        = (0x00003fffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_12 
                          >> 0x0cU));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_13 
        = (0x00003fffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_12 
                          >> 0x0cU));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_12 
        = (0x00007fffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_11 
                          >> 0x0bU));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_12 
        = (0x00007fffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_11 
                          >> 0x0bU));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_11 
        = (0x0000ffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_10 
                          >> 0x0aU));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_11 
        = (0x0000ffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_10 
                          >> 0x0aU));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_10 
        = (0x0001ffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_9 
                          >> 9U));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_10 
        = (0x0001ffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_9 
                          >> 9U));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_9 
        = (0x0003ffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_8 
                          >> 8U));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_9 
        = (0x0003ffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_8 
                          >> 8U));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_8 
        = (0x0007ffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_7 
                          >> 7U));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_3 
        = (0x00ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_2 
                          >> 2U));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_6 
        = (0x001fffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_5 
                          >> 5U));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_5 
        = (0x003fffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_4 
                          >> 4U));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_2 
        = (0x01ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_1 
                          >> 1U));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_2 
        = (0x01ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_1 
                          >> 1U));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_5 
        = (0x003fffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_4 
                          >> 4U));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_15 
        = (0x00000fffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_14 
                          >> 0x0eU));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_16 
        = (0x000007ffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_15 
                          >> 0x0fU));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_17 
        = (0x000003ffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_16 
                          >> 0x10U));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_4 
        = (0x007fffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_3 
                          >> 3U));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_7 
        = (0x000fffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_6 
                          >> 6U));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_14 
        = (0x00001fffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_13 
                          >> 0x0dU));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_4 
        = (0x007fffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_3 
                          >> 3U));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_3 
        = (0x00ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_2 
                          >> 2U));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_6 
        = (0x001fffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_5 
                          >> 5U));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_7 
        = (0x000fffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_6 
                          >> 6U));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_8 
        = (0x0007ffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_7 
                          >> 7U));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_16 
        = (0x000007ffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_15 
                          >> 0x0fU));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_17 
        = (0x000003ffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_16 
                          >> 0x10U));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT__io_rsp_valid 
        = vlSelfRef.carrierGen__DOT__cordic_6__DOT__io_cmd_valid_delay_19;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT__io_cmd_valid_delay_18 
        = vlSelfRef.carrierGen__DOT__cordic_6__DOT__io_cmd_valid_delay_17;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_1_2 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_0 
                          - vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_1));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_1_3 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_0 
                          + vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_1));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_1_1 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_0 
                          + vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_1));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_1_2 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_0 
                          - vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_1));
    __VdfgRegularize_h6e95ff9d_0_315 = ((0x03fff000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_15) 
                                                           >> 0x0000000bU)))) 
                                            << 0x0000000cU)) 
                                        | (IData)(vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_15));
    __VdfgRegularize_h6e95ff9d_0_314 = ((0x03ffe000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_14) 
                                                           >> 0x0000000cU)))) 
                                            << 0x0000000dU)) 
                                        | (IData)(vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_14));
    __VdfgRegularize_h6e95ff9d_0_311 = ((0x03ffc000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_13) 
                                                           >> 0x0000000dU)))) 
                                            << 0x0000000eU)) 
                                        | (IData)(vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_13));
    __VdfgRegularize_h6e95ff9d_0_312 = ((0x03ffc000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_13) 
                                                           >> 0x0000000dU)))) 
                                            << 0x0000000eU)) 
                                        | (IData)(vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_13));
    __VdfgRegularize_h6e95ff9d_0_309 = ((0x03ff8000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_12) 
                                                           >> 0x0000000eU)))) 
                                            << 0x0000000fU)) 
                                        | (IData)(vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_12));
    __VdfgRegularize_h6e95ff9d_0_310 = ((0x03ff8000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_12) 
                                                           >> 0x0000000eU)))) 
                                            << 0x0000000fU)) 
                                        | (IData)(vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_12));
    __VdfgRegularize_h6e95ff9d_0_307 = ((0x03ff0000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_11) 
                                                           >> 0x0000000fU)))) 
                                            << 0x00000010U)) 
                                        | (IData)(vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_11));
    __VdfgRegularize_h6e95ff9d_0_308 = ((0x03ff0000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_11) 
                                                           >> 0x0000000fU)))) 
                                            << 0x00000010U)) 
                                        | (IData)(vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_11));
    __VdfgRegularize_h6e95ff9d_0_305 = ((0x03fe0000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_10 
                                                           >> 0x00000010U)))) 
                                            << 0x00000011U)) 
                                        | vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_10);
    __VdfgRegularize_h6e95ff9d_0_306 = ((0x03fe0000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_10 
                                                           >> 0x00000010U)))) 
                                            << 0x00000011U)) 
                                        | vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_10);
    __VdfgRegularize_h6e95ff9d_0_303 = ((0x03fc0000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_9 
                                                           >> 0x00000011U)))) 
                                            << 0x00000012U)) 
                                        | vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_9);
    __VdfgRegularize_h6e95ff9d_0_304 = ((0x03fc0000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_9 
                                                           >> 0x00000011U)))) 
                                            << 0x00000012U)) 
                                        | vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_9);
    __VdfgRegularize_h6e95ff9d_0_301 = ((0x03f80000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_8 
                                                           >> 0x00000012U)))) 
                                            << 0x00000013U)) 
                                        | vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_8);
    __VdfgRegularize_h6e95ff9d_0_292 = ((0x03000000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_3 
                                                           >> 0x00000017U)))) 
                                            << 0x00000018U)) 
                                        | vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_3);
    __VdfgRegularize_h6e95ff9d_0_297 = ((0x03e00000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_6 
                                                           >> 0x00000014U)))) 
                                            << 0x00000015U)) 
                                        | vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_6);
    __VdfgRegularize_h6e95ff9d_0_296 = ((0x03c00000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_5 
                                                           >> 0x00000015U)))) 
                                            << 0x00000016U)) 
                                        | vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_5);
    __VdfgRegularize_h6e95ff9d_0_289 = ((0x02000000U 
                                         & (vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_2 
                                            << 1U)) 
                                        | vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_2);
    __VdfgRegularize_h6e95ff9d_0_290 = ((0x02000000U 
                                         & (vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_2 
                                            << 1U)) 
                                        | vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_2);
    __VdfgRegularize_h6e95ff9d_0_295 = ((0x03c00000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_5 
                                                           >> 0x00000015U)))) 
                                            << 0x00000016U)) 
                                        | vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_5);
    __VdfgRegularize_h6e95ff9d_0_316 = ((0x03fff000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_15) 
                                                           >> 0x0000000bU)))) 
                                            << 0x0000000cU)) 
                                        | (IData)(vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_15));
    __VdfgRegularize_h6e95ff9d_0_318 = ((0x03fff800U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_16) 
                                                           >> 0x0000000aU)))) 
                                            << 0x0000000bU)) 
                                        | (IData)(vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_16));
    __VdfgRegularize_h6e95ff9d_0_320 = ((0x03fffc00U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_17) 
                                                           >> 9U)))) 
                                            << 0x0000000aU)) 
                                        | (IData)(vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_17));
    __VdfgRegularize_h6e95ff9d_0_294 = ((0x03800000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_4 
                                                           >> 0x00000016U)))) 
                                            << 0x00000017U)) 
                                        | vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_4);
    __VdfgRegularize_h6e95ff9d_0_299 = ((0x03f00000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_7 
                                                           >> 0x00000013U)))) 
                                            << 0x00000014U)) 
                                        | vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_7);
    __VdfgRegularize_h6e95ff9d_0_313 = ((0x03ffe000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_14) 
                                                           >> 0x0000000cU)))) 
                                            << 0x0000000dU)) 
                                        | (IData)(vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_14));
    __VdfgRegularize_h6e95ff9d_0_293 = ((0x03800000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_4 
                                                           >> 0x00000016U)))) 
                                            << 0x00000017U)) 
                                        | vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_4);
    __VdfgRegularize_h6e95ff9d_0_291 = ((0x03000000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_3 
                                                           >> 0x00000017U)))) 
                                            << 0x00000018U)) 
                                        | vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_3);
    __VdfgRegularize_h6e95ff9d_0_298 = ((0x03e00000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_6 
                                                           >> 0x00000014U)))) 
                                            << 0x00000015U)) 
                                        | vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_6);
    __VdfgRegularize_h6e95ff9d_0_300 = ((0x03f00000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_7 
                                                           >> 0x00000013U)))) 
                                            << 0x00000014U)) 
                                        | vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_7);
    __VdfgRegularize_h6e95ff9d_0_302 = ((0x03f80000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_8 
                                                           >> 0x00000012U)))) 
                                            << 0x00000013U)) 
                                        | vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_8);
    __VdfgRegularize_h6e95ff9d_0_317 = ((0x03fff800U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_16) 
                                                           >> 0x0000000aU)))) 
                                            << 0x0000000bU)) 
                                        | (IData)(vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_16));
    __VdfgRegularize_h6e95ff9d_0_319 = ((0x03fffc00U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_17) 
                                                           >> 9U)))) 
                                            << 0x0000000aU)) 
                                        | (IData)(vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_17));
    vlSelfRef.carrierGen__DOT__cordic_6_io_rsp_valid 
        = vlSelfRef.carrierGen__DOT__cordic_6__DOT__io_rsp_valid;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_15_3 
        = __VdfgRegularize_h6e95ff9d_0_315;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_15_5 
        = __VdfgRegularize_h6e95ff9d_0_315;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_14_2 
        = __VdfgRegularize_h6e95ff9d_0_314;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_14_4 
        = __VdfgRegularize_h6e95ff9d_0_314;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_13_3 
        = __VdfgRegularize_h6e95ff9d_0_311;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_13_5 
        = __VdfgRegularize_h6e95ff9d_0_311;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_13_2 
        = __VdfgRegularize_h6e95ff9d_0_312;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_13_4 
        = __VdfgRegularize_h6e95ff9d_0_312;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_12_3 
        = __VdfgRegularize_h6e95ff9d_0_309;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_12_5 
        = __VdfgRegularize_h6e95ff9d_0_309;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_12_2 
        = __VdfgRegularize_h6e95ff9d_0_310;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_12_4 
        = __VdfgRegularize_h6e95ff9d_0_310;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_11_3 
        = __VdfgRegularize_h6e95ff9d_0_307;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_11_5 
        = __VdfgRegularize_h6e95ff9d_0_307;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_11_2 
        = __VdfgRegularize_h6e95ff9d_0_308;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_11_4 
        = __VdfgRegularize_h6e95ff9d_0_308;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_10_3 
        = __VdfgRegularize_h6e95ff9d_0_305;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_10_5 
        = __VdfgRegularize_h6e95ff9d_0_305;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_10_2 
        = __VdfgRegularize_h6e95ff9d_0_306;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_10_4 
        = __VdfgRegularize_h6e95ff9d_0_306;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_9_3 
        = __VdfgRegularize_h6e95ff9d_0_303;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_9_5 
        = __VdfgRegularize_h6e95ff9d_0_303;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_9_2 
        = __VdfgRegularize_h6e95ff9d_0_304;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_9_4 
        = __VdfgRegularize_h6e95ff9d_0_304;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_8_3 
        = __VdfgRegularize_h6e95ff9d_0_301;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_8_5 
        = __VdfgRegularize_h6e95ff9d_0_301;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_3_2 
        = __VdfgRegularize_h6e95ff9d_0_292;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_3_4 
        = __VdfgRegularize_h6e95ff9d_0_292;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_6_3 
        = __VdfgRegularize_h6e95ff9d_0_297;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_6_5 
        = __VdfgRegularize_h6e95ff9d_0_297;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_5_2 
        = __VdfgRegularize_h6e95ff9d_0_296;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_5_4 
        = __VdfgRegularize_h6e95ff9d_0_296;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_2_3 
        = __VdfgRegularize_h6e95ff9d_0_289;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_2_5 
        = __VdfgRegularize_h6e95ff9d_0_289;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_2_2 
        = __VdfgRegularize_h6e95ff9d_0_290;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_2_4 
        = __VdfgRegularize_h6e95ff9d_0_290;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_5_3 
        = __VdfgRegularize_h6e95ff9d_0_295;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_5_5 
        = __VdfgRegularize_h6e95ff9d_0_295;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_15_2 
        = __VdfgRegularize_h6e95ff9d_0_316;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_15_4 
        = __VdfgRegularize_h6e95ff9d_0_316;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_16_2 
        = __VdfgRegularize_h6e95ff9d_0_318;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_16_4 
        = __VdfgRegularize_h6e95ff9d_0_318;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_17_2 
        = __VdfgRegularize_h6e95ff9d_0_320;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_17_4 
        = __VdfgRegularize_h6e95ff9d_0_320;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_4_2 
        = __VdfgRegularize_h6e95ff9d_0_294;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_4_4 
        = __VdfgRegularize_h6e95ff9d_0_294;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_7_3 
        = __VdfgRegularize_h6e95ff9d_0_299;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_7_5 
        = __VdfgRegularize_h6e95ff9d_0_299;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_14_3 
        = __VdfgRegularize_h6e95ff9d_0_313;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_14_5 
        = __VdfgRegularize_h6e95ff9d_0_313;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_4_3 
        = __VdfgRegularize_h6e95ff9d_0_293;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_4_5 
        = __VdfgRegularize_h6e95ff9d_0_293;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_3_3 
        = __VdfgRegularize_h6e95ff9d_0_291;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_3_5 
        = __VdfgRegularize_h6e95ff9d_0_291;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_6_2 
        = __VdfgRegularize_h6e95ff9d_0_298;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_6_4 
        = __VdfgRegularize_h6e95ff9d_0_298;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_7_2 
        = __VdfgRegularize_h6e95ff9d_0_300;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_7_4 
        = __VdfgRegularize_h6e95ff9d_0_300;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_8_2 
        = __VdfgRegularize_h6e95ff9d_0_302;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_8_4 
        = __VdfgRegularize_h6e95ff9d_0_302;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_16_3 
        = __VdfgRegularize_h6e95ff9d_0_317;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_16_5 
        = __VdfgRegularize_h6e95ff9d_0_317;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_17_2 
        = __VdfgRegularize_h6e95ff9d_0_319;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_17_4 
        = __VdfgRegularize_h6e95ff9d_0_319;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT__io_cmd_valid_delay_17 
        = vlSelfRef.carrierGen__DOT__cordic_6__DOT__io_cmd_valid_delay_16;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT__when_Cordic_l128_16 
        = (1U & (~ (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_16 
                    >> 0x00000017U)));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_15_2 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_14 
                          - vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_15_3));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_15_4 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_14 
                          + vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_15_5));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_14_1 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_13 
                          + vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_14_2));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_14_3 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_13 
                          - vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_14_4));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_13_2 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_12 
                          - vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_13_3));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_13_4 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_12 
                          + vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_13_5));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_13_1 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_12 
                          + vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_13_2));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_13_3 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_12 
                          - vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_13_4));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_12_2 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_11 
                          - vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_12_3));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_12_4 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_11 
                          + vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_12_5));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_12_1 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_11 
                          + vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_12_2));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_12_3 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_11 
                          - vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_12_4));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_11_2 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_10 
                          - vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_11_3));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_11_4 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_10 
                          + vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_11_5));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_11_1 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_10 
                          + vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_11_2));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_11_3 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_10 
                          - vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_11_4));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_10_2 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_9 
                          - vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_10_3));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_10_4 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_9 
                          + vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_10_5));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_10_1 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_9 
                          + vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_10_2));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_10_3 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_9 
                          - vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_10_4));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_9_2 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_8 
                          - vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_9_3));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_9_4 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_8 
                          + vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_9_5));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_9_1 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_8 
                          + vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_9_2));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_9_3 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_8 
                          - vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_9_4));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_8_2 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_7 
                          - vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_8_3));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_8_4 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_7 
                          + vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_8_5));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_3_1 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_2 
                          + vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_3_2));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_3_3 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_2 
                          - vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_3_4));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_6_2 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_5 
                          - vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_6_3));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_6_4 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_5 
                          + vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_6_5));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_5_1 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_4 
                          + vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_5_2));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_5_3 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_4 
                          - vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_5_4));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_2_2 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_1 
                          - vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_2_3));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_2_4 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_1 
                          + vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_2_5));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_2_1 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_1 
                          + vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_2_2));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_2_3 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_1 
                          - vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_2_4));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_5_2 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_4 
                          - vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_5_3));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_5_4 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_4 
                          + vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_5_5));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_15_1 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_14 
                          + vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_15_2));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_15_3 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_14 
                          - vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_15_4));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_16_1 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_15 
                          + vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_16_2));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_16_3 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_15 
                          - vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_16_4));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_17_1 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_16 
                          + vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_17_2));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_17_3 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_16 
                          - vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_17_4));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_4_1 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_3 
                          + vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_4_2));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_4_3 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_3 
                          - vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_4_4));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_7_2 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_6 
                          - vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_7_3));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_7_4 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_6 
                          + vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_7_5));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_14_2 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_13 
                          - vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_14_3));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_14_4 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_13 
                          + vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_14_5));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_4_2 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_3 
                          - vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_4_3));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_4_4 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_3 
                          + vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_4_5));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_3_2 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_2 
                          - vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_3_3));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_3_4 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_2 
                          + vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_3_5));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_6_1 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_5 
                          + vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_6_2));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_6_3 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_5 
                          - vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_6_4));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_7_1 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_6 
                          + vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_7_2));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_7_3 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_6 
                          - vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_7_4));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_8_1 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_7 
                          + vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_8_2));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_8_3 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Y_7 
                          - vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_Y_8_4));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_16_2 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_15 
                          - vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_16_3));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_16_4 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_15 
                          + vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_16_5));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_17_1 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_16 
                          - vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_17_2));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_17_3 
        = (0x03ffffffU & (vlSelfRef.carrierGen__DOT__cordic_6__DOT__X_16 
                          + vlSelfRef.carrierGen__DOT__cordic_6__DOT___zz_X_17_4));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT__io_cmd_valid_delay_16 
        = vlSelfRef.carrierGen__DOT__cordic_6__DOT__io_cmd_valid_delay_15;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT__when_Cordic_l128_15 
        = (1U & (~ (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_15 
                    >> 0x00000017U)));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT__io_cmd_valid_delay_15 
        = vlSelfRef.carrierGen__DOT__cordic_6__DOT__io_cmd_valid_delay_14;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT__when_Cordic_l128_14 
        = (1U & (~ (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_14 
                    >> 0x00000017U)));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT__io_cmd_valid_delay_14 
        = vlSelfRef.carrierGen__DOT__cordic_6__DOT__io_cmd_valid_delay_13;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT__when_Cordic_l128_13 
        = (1U & (~ (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_13 
                    >> 0x00000017U)));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT__io_cmd_valid_delay_13 
        = vlSelfRef.carrierGen__DOT__cordic_6__DOT__io_cmd_valid_delay_12;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT__when_Cordic_l128_12 
        = (1U & (~ (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_12 
                    >> 0x00000017U)));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT__io_cmd_valid_delay_12 
        = vlSelfRef.carrierGen__DOT__cordic_6__DOT__io_cmd_valid_delay_11;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT__when_Cordic_l128_11 
        = (1U & (~ (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_11 
                    >> 0x00000017U)));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT__io_cmd_valid_delay_11 
        = vlSelfRef.carrierGen__DOT__cordic_6__DOT__io_cmd_valid_delay_10;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT__when_Cordic_l128_10 
        = (1U & (~ (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_10 
                    >> 0x00000017U)));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT__io_cmd_valid_delay_10 
        = vlSelfRef.carrierGen__DOT__cordic_6__DOT__io_cmd_valid_delay_9;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT__when_Cordic_l128_9 
        = (1U & (~ (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_9 
                    >> 0x00000017U)));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT__io_cmd_valid_delay_9 
        = vlSelfRef.carrierGen__DOT__cordic_6__DOT__io_cmd_valid_delay_8;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT__when_Cordic_l128_8 
        = (1U & (~ (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_8 
                    >> 0x00000017U)));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT__io_cmd_valid_delay_8 
        = vlSelfRef.carrierGen__DOT__cordic_6__DOT__io_cmd_valid_delay_7;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT__when_Cordic_l128_7 
        = (1U & (~ (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_7 
                    >> 0x00000017U)));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT__io_cmd_valid_delay_7 
        = vlSelfRef.carrierGen__DOT__cordic_6__DOT__io_cmd_valid_delay_6;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT__when_Cordic_l128_6 
        = (1U & (~ (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_6 
                    >> 0x00000017U)));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT__io_cmd_valid_delay_6 
        = vlSelfRef.carrierGen__DOT__cordic_6__DOT__io_cmd_valid_delay_5;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT__when_Cordic_l128_5 
        = (1U & (~ (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_5 
                    >> 0x00000017U)));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT__io_cmd_valid_delay_5 
        = vlSelfRef.carrierGen__DOT__cordic_6__DOT__io_cmd_valid_delay_4;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT__when_Cordic_l128_4 
        = (1U & (~ (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_4 
                    >> 0x00000017U)));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT__io_cmd_valid_delay_4 
        = vlSelfRef.carrierGen__DOT__cordic_6__DOT__io_cmd_valid_delay_3;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT__when_Cordic_l128_3 
        = (1U & (~ (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_3 
                    >> 0x00000017U)));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT__io_cmd_valid_delay_3 
        = vlSelfRef.carrierGen__DOT__cordic_6__DOT__io_cmd_valid_delay_2;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT__when_Cordic_l128_2 
        = (1U & (~ (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_2 
                    >> 0x00000017U)));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT__io_cmd_valid_delay_2 
        = vlSelfRef.carrierGen__DOT__cordic_6__DOT__io_cmd_valid_delay_1;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT__when_Cordic_l128_1 
        = (1U & (~ (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_1 
                    >> 0x00000017U)));
    vlSelfRef.carrierGen__DOT__cordic_6__DOT__io_cmd_valid_delay_1 = 1U;
    vlSelfRef.carrierGen__DOT__cordic_6__DOT__when_Cordic_l128 
        = (1U & (~ (vlSelfRef.carrierGen__DOT__cordic_6__DOT__Z_0 
                    >> 0x00000017U)));
}

void Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__12(Vtop_PulseGenerator* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__12\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_321;
    __VdfgRegularize_h6e95ff9d_0_321 = 0;
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_322;
    __VdfgRegularize_h6e95ff9d_0_322 = 0;
    // Body
    vlSelfRef.carrierGen__DOT__muls_0__DOT__db3 = (0x0001ffffU 
                                                   & (vlSelfRef.carrierGen__DOT__muls_0__DOT___zz_db3 
                                                      - vlSelfRef.carrierGen__DOT__muls_0__DOT___zz_db3_1));
    vlSelfRef.carrierGen__DOT__muls_0__DOT__sb3 = (0x0001ffffU 
                                                   & (vlSelfRef.carrierGen__DOT__muls_0__DOT___zz_sb3 
                                                      + vlSelfRef.carrierGen__DOT__muls_0__DOT___zz_sb3_1));
    vlSelfRef.carrierGen__DOT__muls_0__DOT__da1 = (0x0001ffffU 
                                                   & (vlSelfRef.carrierGen__DOT__muls_0__DOT___zz_da1 
                                                      - vlSelfRef.carrierGen__DOT__muls_0__DOT___zz_da1_1));
    vlSelfRef.carrierGen__DOT__muls_0__DOT__pre4 = vlSelfRef.carrierGen__DOT__muls_0__DOT__mulPre;
    vlSelfRef.carrierGen__DOT__muls_0__DOT__pim4 = vlSelfRef.carrierGen__DOT__muls_0__DOT__mulPim;
    vlSelfRef.carrierGen__DOT__muls_0__DOT__sre5 = 
        (0x00000007ffffffffULL & (0x0000000000004000ULL 
                                  + vlSelfRef.carrierGen__DOT__muls_0__DOT___zz_sre5));
    vlSelfRef.carrierGen__DOT__muls_0__DOT__sim5 = 
        (0x00000007ffffffffULL & (0x0000000000004000ULL 
                                  + vlSelfRef.carrierGen__DOT__muls_0__DOT___zz_sim5));
    vlSelfRef.carrierGen__DOT__muls_0__DOT__br2 = vlSelfRef.carrierGen__DOT__muls_0__DOT__br1;
    vlSelfRef.carrierGen__DOT__muls_0__DOT__mcr4 = vlSelfRef.carrierGen__DOT__muls_0__DOT__m3;
    vlSelfRef.carrierGen__DOT__muls_0__DOT__mci4 = vlSelfRef.carrierGen__DOT__muls_0__DOT__m3;
    vlSelfRef.carrierGen__DOT__muls_0__DOT__bi2 = vlSelfRef.carrierGen__DOT__muls_0__DOT__bi1;
    vlSelfRef.carrierGen__DOT__muls_0__DOT__ai3 = vlSelfRef.carrierGen__DOT__muls_0__DOT__ai2;
    vlSelfRef.carrierGen__DOT__muls_0__DOT__ar3 = vlSelfRef.carrierGen__DOT__muls_0__DOT__ar2;
    vlSelfRef.carrierGen__DOT__muls_0__DOT__io_cmd_valid_delay_6 
        = vlSelfRef.carrierGen__DOT__muls_0__DOT__io_cmd_valid_delay_5;
    vlSelfRef.carrierGen__DOT__muls_0__DOT___zz_sre5_1 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_0__DOT__pre4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_0__DOT__pre4);
    vlSelfRef.carrierGen__DOT__muls_0__DOT___zz_sim5_1 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_0__DOT__pim4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_0__DOT__pim4);
    vlSelfRef.carrierGen__DOT__muls_0__DOT___zz_reN 
        = (0x000fffffU & (IData)((vlSelfRef.carrierGen__DOT__muls_0__DOT__sre5 
                                  >> 0x0fU)));
    vlSelfRef.carrierGen__DOT__muls_0__DOT___zz_imN 
        = (0x000fffffU & (IData)((vlSelfRef.carrierGen__DOT__muls_0__DOT__sim5 
                                  >> 0x0fU)));
    __VdfgRegularize_h6e95ff9d_0_321 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.carrierGen__DOT__muls_0__DOT__br2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.carrierGen__DOT__muls_0__DOT__br2));
    vlSelfRef.carrierGen__DOT__muls_0__DOT__br1 = vlSelfRef.carrierGen__DOT__muls_0__DOT__br0;
    vlSelfRef.carrierGen__DOT__muls_0__DOT___zz_sre5_2 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_0__DOT__mcr4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_0__DOT__mcr4);
    vlSelfRef.carrierGen__DOT__muls_0__DOT___zz_sim5_2 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_0__DOT__mci4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_0__DOT__mci4);
    vlSelfRef.carrierGen__DOT__muls_0__DOT__m3 = vlSelfRef.carrierGen__DOT__muls_0__DOT__m2;
    __VdfgRegularize_h6e95ff9d_0_322 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.carrierGen__DOT__muls_0__DOT__bi2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.carrierGen__DOT__muls_0__DOT__bi2));
    vlSelfRef.carrierGen__DOT__muls_0__DOT__bi1 = vlSelfRef.carrierGen__DOT__muls_0__DOT__bi0;
    vlSelfRef.carrierGen__DOT__muls_0__DOT__mulPim 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.carrierGen__DOT__muls_0__DOT__sb3)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.carrierGen__DOT__muls_0__DOT__ai3)))));
    vlSelfRef.carrierGen__DOT__muls_0__DOT__ai2 = vlSelfRef.carrierGen__DOT__muls_0__DOT__ai1;
    vlSelfRef.carrierGen__DOT__muls_0__DOT__mulPre 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.carrierGen__DOT__muls_0__DOT__db3)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.carrierGen__DOT__muls_0__DOT__ar3)))));
    vlSelfRef.carrierGen__DOT__muls_0__DOT__ar2 = vlSelfRef.carrierGen__DOT__muls_0__DOT__ar1;
    vlSelfRef.carrierGen__DOT__muls_0__DOT__io_rsp_valid 
        = vlSelfRef.carrierGen__DOT__muls_0__DOT__io_cmd_valid_delay_6;
    vlSelfRef.carrierGen__DOT__muls_0__DOT__io_cmd_valid_delay_5 
        = vlSelfRef.carrierGen__DOT__muls_0__DOT__io_cmd_valid_delay_4;
    vlSelfRef.carrierGen__DOT__muls_0__DOT__reN = (0x0000ffffU 
                                                   & vlSelfRef.carrierGen__DOT__muls_0__DOT___zz_reN);
    vlSelfRef.carrierGen__DOT__muls_0__DOT__imN = (0x0000ffffU 
                                                   & vlSelfRef.carrierGen__DOT__muls_0__DOT___zz_imN);
    vlSelfRef.carrierGen__DOT__muls_0__DOT___zz_db3 
        = __VdfgRegularize_h6e95ff9d_0_321;
    vlSelfRef.carrierGen__DOT__muls_0__DOT___zz_sb3 
        = __VdfgRegularize_h6e95ff9d_0_321;
    vlSelfRef.carrierGen__DOT__muls_0__DOT___zz_sre5 
        = (0x00000007ffffffffULL & (vlSelfRef.carrierGen__DOT__muls_0__DOT___zz_sre5_1 
                                    + vlSelfRef.carrierGen__DOT__muls_0__DOT___zz_sre5_2));
    vlSelfRef.carrierGen__DOT__muls_0__DOT___zz_sim5 
        = (0x00000007ffffffffULL & (vlSelfRef.carrierGen__DOT__muls_0__DOT___zz_sim5_1 
                                    + vlSelfRef.carrierGen__DOT__muls_0__DOT___zz_sim5_2));
    vlSelfRef.carrierGen__DOT__muls_0__DOT___zz_db3_1 
        = __VdfgRegularize_h6e95ff9d_0_322;
    vlSelfRef.carrierGen__DOT__muls_0__DOT___zz_sb3_1 
        = __VdfgRegularize_h6e95ff9d_0_322;
    vlSelfRef.carrierGen__DOT__muls_0_io_rsp_valid 
        = vlSelfRef.carrierGen__DOT__muls_0__DOT__io_rsp_valid;
    vlSelfRef.carrierGen__DOT__muls_0__DOT__io_rsp_payload_re 
        = vlSelfRef.carrierGen__DOT__muls_0__DOT__reN;
    vlSelfRef.carrierGen__DOT__muls_0__DOT__io_rsp_payload_im 
        = vlSelfRef.carrierGen__DOT__muls_0__DOT__imN;
    vlSelfRef.carrierGen__DOT__muls_0__DOT__br0 = vlSelfRef.carrierGen__DOT__muls_0__DOT__io_cmd_payload_b_re;
    vlSelfRef.carrierGen__DOT__muls_0__DOT__m2 = vlSelfRef.carrierGen__DOT__muls_0__DOT__mulM;
    vlSelfRef.carrierGen__DOT__muls_0__DOT__bi0 = vlSelfRef.carrierGen__DOT__muls_0__DOT__io_cmd_payload_b_im;
    vlSelfRef.carrierGen__DOT__muls_0__DOT__ai1 = vlSelfRef.carrierGen__DOT__muls_0__DOT__ai0;
    vlSelfRef.carrierGen__DOT__muls_0__DOT__ar1 = vlSelfRef.carrierGen__DOT__muls_0__DOT__ar0;
    vlSelfRef.carrierGen__DOT__muls_0__DOT__io_cmd_valid_delay_4 
        = vlSelfRef.carrierGen__DOT__muls_0__DOT__io_cmd_valid_delay_3;
    vlSelfRef.carrierGen__DOT__muls_0_io_rsp_payload_re 
        = vlSelfRef.carrierGen__DOT__muls_0__DOT__io_rsp_payload_re;
    vlSelfRef.carrierGen__DOT__muls_0_io_rsp_payload_im 
        = vlSelfRef.carrierGen__DOT__muls_0__DOT__io_rsp_payload_im;
    vlSelfRef.carrierGen__DOT__muls_0__DOT__mulM = 
        (0x00000001ffffffffULL & VL_MULS_QQQ(33, (0x00000001ffffffffULL 
                                                  & VL_EXTENDS_QI(33,17, vlSelfRef.carrierGen__DOT__muls_0__DOT__da1)), 
                                             (0x00000001ffffffffULL 
                                              & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.carrierGen__DOT__muls_0__DOT__bi1)))));
    vlSelfRef.carrierGen__DOT__io_carrier_0_re = vlSelfRef.carrierGen__DOT__muls_0_io_rsp_payload_re;
    vlSelfRef.carrierGen__DOT__io_carrier_0_im = vlSelfRef.carrierGen__DOT__muls_0_io_rsp_payload_im;
    vlSelfRef.carrierGen__DOT__muls_0__DOT__ai0 = vlSelfRef.carrierGen__DOT__muls_0__DOT__io_cmd_payload_a_im;
    vlSelfRef.carrierGen__DOT__muls_0__DOT__ar0 = vlSelfRef.carrierGen__DOT__muls_0__DOT__io_cmd_payload_a_re;
    vlSelfRef.carrierGen__DOT__muls_0__DOT__io_cmd_valid_delay_3 
        = vlSelfRef.carrierGen__DOT__muls_0__DOT__io_cmd_valid_delay_2;
    vlSelfRef.carrierGen_io_carrier_0_re = vlSelfRef.carrierGen__DOT__io_carrier_0_re;
    vlSelfRef.carrierGen_io_carrier_0_im = vlSelfRef.carrierGen__DOT__io_carrier_0_im;
    vlSelfRef.carrierGen__DOT__muls_0__DOT___zz_da1_1 
        = ((0x00010000U & ((IData)(vlSelfRef.carrierGen__DOT__muls_0__DOT__ai0) 
                           << 1U)) | (IData)(vlSelfRef.carrierGen__DOT__muls_0__DOT__ai0));
    vlSelfRef.carrierGen__DOT__muls_0__DOT___zz_da1 
        = ((0x00010000U & ((IData)(vlSelfRef.carrierGen__DOT__muls_0__DOT__ar0) 
                           << 1U)) | (IData)(vlSelfRef.carrierGen__DOT__muls_0__DOT__ar0));
    vlSelfRef.carrierGen__DOT__muls_0__DOT__io_cmd_valid_delay_2 
        = vlSelfRef.carrierGen__DOT__muls_0__DOT__io_cmd_valid_delay_1;
    vlSelfRef.carrierGen__DOT__muls_0__DOT__io_cmd_valid_delay_1 = 1U;
}

void Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__13(Vtop_PulseGenerator* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__13\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_323;
    __VdfgRegularize_h6e95ff9d_0_323 = 0;
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_324;
    __VdfgRegularize_h6e95ff9d_0_324 = 0;
    // Body
    vlSelfRef.carrierGen__DOT__muls_1__DOT__db3 = (0x0001ffffU 
                                                   & (vlSelfRef.carrierGen__DOT__muls_1__DOT___zz_db3 
                                                      - vlSelfRef.carrierGen__DOT__muls_1__DOT___zz_db3_1));
    vlSelfRef.carrierGen__DOT__muls_1__DOT__sb3 = (0x0001ffffU 
                                                   & (vlSelfRef.carrierGen__DOT__muls_1__DOT___zz_sb3 
                                                      + vlSelfRef.carrierGen__DOT__muls_1__DOT___zz_sb3_1));
    vlSelfRef.carrierGen__DOT__muls_1__DOT__da1 = (0x0001ffffU 
                                                   & (vlSelfRef.carrierGen__DOT__muls_1__DOT___zz_da1 
                                                      - vlSelfRef.carrierGen__DOT__muls_1__DOT___zz_da1_1));
    vlSelfRef.carrierGen__DOT__muls_1__DOT__pre4 = vlSelfRef.carrierGen__DOT__muls_1__DOT__mulPre;
    vlSelfRef.carrierGen__DOT__muls_1__DOT__pim4 = vlSelfRef.carrierGen__DOT__muls_1__DOT__mulPim;
    vlSelfRef.carrierGen__DOT__muls_1__DOT__sre5 = 
        (0x00000007ffffffffULL & (0x0000000000004000ULL 
                                  + vlSelfRef.carrierGen__DOT__muls_1__DOT___zz_sre5));
    vlSelfRef.carrierGen__DOT__muls_1__DOT__sim5 = 
        (0x00000007ffffffffULL & (0x0000000000004000ULL 
                                  + vlSelfRef.carrierGen__DOT__muls_1__DOT___zz_sim5));
    vlSelfRef.carrierGen__DOT__muls_1__DOT__br2 = vlSelfRef.carrierGen__DOT__muls_1__DOT__br1;
    vlSelfRef.carrierGen__DOT__muls_1__DOT__mcr4 = vlSelfRef.carrierGen__DOT__muls_1__DOT__m3;
    vlSelfRef.carrierGen__DOT__muls_1__DOT__mci4 = vlSelfRef.carrierGen__DOT__muls_1__DOT__m3;
    vlSelfRef.carrierGen__DOT__muls_1__DOT__bi2 = vlSelfRef.carrierGen__DOT__muls_1__DOT__bi1;
    vlSelfRef.carrierGen__DOT__muls_1__DOT__ai3 = vlSelfRef.carrierGen__DOT__muls_1__DOT__ai2;
    vlSelfRef.carrierGen__DOT__muls_1__DOT__ar3 = vlSelfRef.carrierGen__DOT__muls_1__DOT__ar2;
    vlSelfRef.carrierGen__DOT__muls_1__DOT__io_cmd_valid_delay_6 
        = vlSelfRef.carrierGen__DOT__muls_1__DOT__io_cmd_valid_delay_5;
    vlSelfRef.carrierGen__DOT__muls_1__DOT___zz_sre5_1 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_1__DOT__pre4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_1__DOT__pre4);
    vlSelfRef.carrierGen__DOT__muls_1__DOT___zz_sim5_1 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_1__DOT__pim4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_1__DOT__pim4);
    vlSelfRef.carrierGen__DOT__muls_1__DOT___zz_reN 
        = (0x000fffffU & (IData)((vlSelfRef.carrierGen__DOT__muls_1__DOT__sre5 
                                  >> 0x0fU)));
    vlSelfRef.carrierGen__DOT__muls_1__DOT___zz_imN 
        = (0x000fffffU & (IData)((vlSelfRef.carrierGen__DOT__muls_1__DOT__sim5 
                                  >> 0x0fU)));
    __VdfgRegularize_h6e95ff9d_0_323 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.carrierGen__DOT__muls_1__DOT__br2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.carrierGen__DOT__muls_1__DOT__br2));
    vlSelfRef.carrierGen__DOT__muls_1__DOT__br1 = vlSelfRef.carrierGen__DOT__muls_1__DOT__br0;
    vlSelfRef.carrierGen__DOT__muls_1__DOT___zz_sre5_2 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_1__DOT__mcr4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_1__DOT__mcr4);
    vlSelfRef.carrierGen__DOT__muls_1__DOT___zz_sim5_2 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_1__DOT__mci4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_1__DOT__mci4);
    vlSelfRef.carrierGen__DOT__muls_1__DOT__m3 = vlSelfRef.carrierGen__DOT__muls_1__DOT__m2;
    __VdfgRegularize_h6e95ff9d_0_324 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.carrierGen__DOT__muls_1__DOT__bi2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.carrierGen__DOT__muls_1__DOT__bi2));
    vlSelfRef.carrierGen__DOT__muls_1__DOT__bi1 = vlSelfRef.carrierGen__DOT__muls_1__DOT__bi0;
    vlSelfRef.carrierGen__DOT__muls_1__DOT__mulPim 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.carrierGen__DOT__muls_1__DOT__sb3)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.carrierGen__DOT__muls_1__DOT__ai3)))));
    vlSelfRef.carrierGen__DOT__muls_1__DOT__ai2 = vlSelfRef.carrierGen__DOT__muls_1__DOT__ai1;
    vlSelfRef.carrierGen__DOT__muls_1__DOT__mulPre 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.carrierGen__DOT__muls_1__DOT__db3)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.carrierGen__DOT__muls_1__DOT__ar3)))));
    vlSelfRef.carrierGen__DOT__muls_1__DOT__ar2 = vlSelfRef.carrierGen__DOT__muls_1__DOT__ar1;
    vlSelfRef.carrierGen__DOT__muls_1__DOT__io_rsp_valid 
        = vlSelfRef.carrierGen__DOT__muls_1__DOT__io_cmd_valid_delay_6;
    vlSelfRef.carrierGen__DOT__muls_1__DOT__io_cmd_valid_delay_5 
        = vlSelfRef.carrierGen__DOT__muls_1__DOT__io_cmd_valid_delay_4;
    vlSelfRef.carrierGen__DOT__muls_1__DOT__reN = (0x0000ffffU 
                                                   & vlSelfRef.carrierGen__DOT__muls_1__DOT___zz_reN);
    vlSelfRef.carrierGen__DOT__muls_1__DOT__imN = (0x0000ffffU 
                                                   & vlSelfRef.carrierGen__DOT__muls_1__DOT___zz_imN);
    vlSelfRef.carrierGen__DOT__muls_1__DOT___zz_db3 
        = __VdfgRegularize_h6e95ff9d_0_323;
    vlSelfRef.carrierGen__DOT__muls_1__DOT___zz_sb3 
        = __VdfgRegularize_h6e95ff9d_0_323;
    vlSelfRef.carrierGen__DOT__muls_1__DOT___zz_sre5 
        = (0x00000007ffffffffULL & (vlSelfRef.carrierGen__DOT__muls_1__DOT___zz_sre5_1 
                                    + vlSelfRef.carrierGen__DOT__muls_1__DOT___zz_sre5_2));
    vlSelfRef.carrierGen__DOT__muls_1__DOT___zz_sim5 
        = (0x00000007ffffffffULL & (vlSelfRef.carrierGen__DOT__muls_1__DOT___zz_sim5_1 
                                    + vlSelfRef.carrierGen__DOT__muls_1__DOT___zz_sim5_2));
    vlSelfRef.carrierGen__DOT__muls_1__DOT___zz_db3_1 
        = __VdfgRegularize_h6e95ff9d_0_324;
    vlSelfRef.carrierGen__DOT__muls_1__DOT___zz_sb3_1 
        = __VdfgRegularize_h6e95ff9d_0_324;
    vlSelfRef.carrierGen__DOT__muls_1_io_rsp_valid 
        = vlSelfRef.carrierGen__DOT__muls_1__DOT__io_rsp_valid;
    vlSelfRef.carrierGen__DOT__muls_1__DOT__io_rsp_payload_re 
        = vlSelfRef.carrierGen__DOT__muls_1__DOT__reN;
    vlSelfRef.carrierGen__DOT__muls_1__DOT__io_rsp_payload_im 
        = vlSelfRef.carrierGen__DOT__muls_1__DOT__imN;
    vlSelfRef.carrierGen__DOT__muls_1__DOT__br0 = vlSelfRef.carrierGen__DOT__muls_1__DOT__io_cmd_payload_b_re;
    vlSelfRef.carrierGen__DOT__muls_1__DOT__m2 = vlSelfRef.carrierGen__DOT__muls_1__DOT__mulM;
    vlSelfRef.carrierGen__DOT__muls_1__DOT__bi0 = vlSelfRef.carrierGen__DOT__muls_1__DOT__io_cmd_payload_b_im;
    vlSelfRef.carrierGen__DOT__muls_1__DOT__ai1 = vlSelfRef.carrierGen__DOT__muls_1__DOT__ai0;
    vlSelfRef.carrierGen__DOT__muls_1__DOT__ar1 = vlSelfRef.carrierGen__DOT__muls_1__DOT__ar0;
    vlSelfRef.carrierGen__DOT__muls_1__DOT__io_cmd_valid_delay_4 
        = vlSelfRef.carrierGen__DOT__muls_1__DOT__io_cmd_valid_delay_3;
    vlSelfRef.carrierGen__DOT__muls_1_io_rsp_payload_re 
        = vlSelfRef.carrierGen__DOT__muls_1__DOT__io_rsp_payload_re;
    vlSelfRef.carrierGen__DOT__muls_1_io_rsp_payload_im 
        = vlSelfRef.carrierGen__DOT__muls_1__DOT__io_rsp_payload_im;
    vlSelfRef.carrierGen__DOT__muls_1__DOT__mulM = 
        (0x00000001ffffffffULL & VL_MULS_QQQ(33, (0x00000001ffffffffULL 
                                                  & VL_EXTENDS_QI(33,17, vlSelfRef.carrierGen__DOT__muls_1__DOT__da1)), 
                                             (0x00000001ffffffffULL 
                                              & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.carrierGen__DOT__muls_1__DOT__bi1)))));
    vlSelfRef.carrierGen__DOT__io_carrier_1_re = vlSelfRef.carrierGen__DOT__muls_1_io_rsp_payload_re;
    vlSelfRef.carrierGen__DOT__io_carrier_1_im = vlSelfRef.carrierGen__DOT__muls_1_io_rsp_payload_im;
    vlSelfRef.carrierGen__DOT__muls_1__DOT__ai0 = vlSelfRef.carrierGen__DOT__muls_1__DOT__io_cmd_payload_a_im;
    vlSelfRef.carrierGen__DOT__muls_1__DOT__ar0 = vlSelfRef.carrierGen__DOT__muls_1__DOT__io_cmd_payload_a_re;
    vlSelfRef.carrierGen__DOT__muls_1__DOT__io_cmd_valid_delay_3 
        = vlSelfRef.carrierGen__DOT__muls_1__DOT__io_cmd_valid_delay_2;
    vlSelfRef.carrierGen_io_carrier_1_re = vlSelfRef.carrierGen__DOT__io_carrier_1_re;
    vlSelfRef.carrierGen_io_carrier_1_im = vlSelfRef.carrierGen__DOT__io_carrier_1_im;
    vlSelfRef.carrierGen__DOT__muls_1__DOT___zz_da1_1 
        = ((0x00010000U & ((IData)(vlSelfRef.carrierGen__DOT__muls_1__DOT__ai0) 
                           << 1U)) | (IData)(vlSelfRef.carrierGen__DOT__muls_1__DOT__ai0));
    vlSelfRef.carrierGen__DOT__muls_1__DOT___zz_da1 
        = ((0x00010000U & ((IData)(vlSelfRef.carrierGen__DOT__muls_1__DOT__ar0) 
                           << 1U)) | (IData)(vlSelfRef.carrierGen__DOT__muls_1__DOT__ar0));
    vlSelfRef.carrierGen__DOT__muls_1__DOT__io_cmd_valid_delay_2 
        = vlSelfRef.carrierGen__DOT__muls_1__DOT__io_cmd_valid_delay_1;
    vlSelfRef.carrierGen__DOT__muls_1__DOT__io_cmd_valid_delay_1 = 1U;
}

void Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__14(Vtop_PulseGenerator* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__14\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_325;
    __VdfgRegularize_h6e95ff9d_0_325 = 0;
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_326;
    __VdfgRegularize_h6e95ff9d_0_326 = 0;
    // Body
    vlSelfRef.carrierGen__DOT__muls_2__DOT__db3 = (0x0001ffffU 
                                                   & (vlSelfRef.carrierGen__DOT__muls_2__DOT___zz_db3 
                                                      - vlSelfRef.carrierGen__DOT__muls_2__DOT___zz_db3_1));
    vlSelfRef.carrierGen__DOT__muls_2__DOT__sb3 = (0x0001ffffU 
                                                   & (vlSelfRef.carrierGen__DOT__muls_2__DOT___zz_sb3 
                                                      + vlSelfRef.carrierGen__DOT__muls_2__DOT___zz_sb3_1));
    vlSelfRef.carrierGen__DOT__muls_2__DOT__da1 = (0x0001ffffU 
                                                   & (vlSelfRef.carrierGen__DOT__muls_2__DOT___zz_da1 
                                                      - vlSelfRef.carrierGen__DOT__muls_2__DOT___zz_da1_1));
    vlSelfRef.carrierGen__DOT__muls_2__DOT__pre4 = vlSelfRef.carrierGen__DOT__muls_2__DOT__mulPre;
    vlSelfRef.carrierGen__DOT__muls_2__DOT__pim4 = vlSelfRef.carrierGen__DOT__muls_2__DOT__mulPim;
    vlSelfRef.carrierGen__DOT__muls_2__DOT__sre5 = 
        (0x00000007ffffffffULL & (0x0000000000004000ULL 
                                  + vlSelfRef.carrierGen__DOT__muls_2__DOT___zz_sre5));
    vlSelfRef.carrierGen__DOT__muls_2__DOT__sim5 = 
        (0x00000007ffffffffULL & (0x0000000000004000ULL 
                                  + vlSelfRef.carrierGen__DOT__muls_2__DOT___zz_sim5));
    vlSelfRef.carrierGen__DOT__muls_2__DOT__br2 = vlSelfRef.carrierGen__DOT__muls_2__DOT__br1;
    vlSelfRef.carrierGen__DOT__muls_2__DOT__mcr4 = vlSelfRef.carrierGen__DOT__muls_2__DOT__m3;
    vlSelfRef.carrierGen__DOT__muls_2__DOT__mci4 = vlSelfRef.carrierGen__DOT__muls_2__DOT__m3;
    vlSelfRef.carrierGen__DOT__muls_2__DOT__bi2 = vlSelfRef.carrierGen__DOT__muls_2__DOT__bi1;
    vlSelfRef.carrierGen__DOT__muls_2__DOT__ai3 = vlSelfRef.carrierGen__DOT__muls_2__DOT__ai2;
    vlSelfRef.carrierGen__DOT__muls_2__DOT__ar3 = vlSelfRef.carrierGen__DOT__muls_2__DOT__ar2;
    vlSelfRef.carrierGen__DOT__muls_2__DOT__io_cmd_valid_delay_6 
        = vlSelfRef.carrierGen__DOT__muls_2__DOT__io_cmd_valid_delay_5;
    vlSelfRef.carrierGen__DOT__muls_2__DOT___zz_sre5_1 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_2__DOT__pre4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_2__DOT__pre4);
    vlSelfRef.carrierGen__DOT__muls_2__DOT___zz_sim5_1 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_2__DOT__pim4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_2__DOT__pim4);
    vlSelfRef.carrierGen__DOT__muls_2__DOT___zz_reN 
        = (0x000fffffU & (IData)((vlSelfRef.carrierGen__DOT__muls_2__DOT__sre5 
                                  >> 0x0fU)));
    vlSelfRef.carrierGen__DOT__muls_2__DOT___zz_imN 
        = (0x000fffffU & (IData)((vlSelfRef.carrierGen__DOT__muls_2__DOT__sim5 
                                  >> 0x0fU)));
    __VdfgRegularize_h6e95ff9d_0_325 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.carrierGen__DOT__muls_2__DOT__br2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.carrierGen__DOT__muls_2__DOT__br2));
    vlSelfRef.carrierGen__DOT__muls_2__DOT__br1 = vlSelfRef.carrierGen__DOT__muls_2__DOT__br0;
    vlSelfRef.carrierGen__DOT__muls_2__DOT___zz_sre5_2 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_2__DOT__mcr4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_2__DOT__mcr4);
    vlSelfRef.carrierGen__DOT__muls_2__DOT___zz_sim5_2 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_2__DOT__mci4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_2__DOT__mci4);
    vlSelfRef.carrierGen__DOT__muls_2__DOT__m3 = vlSelfRef.carrierGen__DOT__muls_2__DOT__m2;
    __VdfgRegularize_h6e95ff9d_0_326 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.carrierGen__DOT__muls_2__DOT__bi2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.carrierGen__DOT__muls_2__DOT__bi2));
    vlSelfRef.carrierGen__DOT__muls_2__DOT__bi1 = vlSelfRef.carrierGen__DOT__muls_2__DOT__bi0;
    vlSelfRef.carrierGen__DOT__muls_2__DOT__mulPim 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.carrierGen__DOT__muls_2__DOT__sb3)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.carrierGen__DOT__muls_2__DOT__ai3)))));
    vlSelfRef.carrierGen__DOT__muls_2__DOT__ai2 = vlSelfRef.carrierGen__DOT__muls_2__DOT__ai1;
    vlSelfRef.carrierGen__DOT__muls_2__DOT__mulPre 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.carrierGen__DOT__muls_2__DOT__db3)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.carrierGen__DOT__muls_2__DOT__ar3)))));
    vlSelfRef.carrierGen__DOT__muls_2__DOT__ar2 = vlSelfRef.carrierGen__DOT__muls_2__DOT__ar1;
    vlSelfRef.carrierGen__DOT__muls_2__DOT__io_rsp_valid 
        = vlSelfRef.carrierGen__DOT__muls_2__DOT__io_cmd_valid_delay_6;
    vlSelfRef.carrierGen__DOT__muls_2__DOT__io_cmd_valid_delay_5 
        = vlSelfRef.carrierGen__DOT__muls_2__DOT__io_cmd_valid_delay_4;
    vlSelfRef.carrierGen__DOT__muls_2__DOT__reN = (0x0000ffffU 
                                                   & vlSelfRef.carrierGen__DOT__muls_2__DOT___zz_reN);
    vlSelfRef.carrierGen__DOT__muls_2__DOT__imN = (0x0000ffffU 
                                                   & vlSelfRef.carrierGen__DOT__muls_2__DOT___zz_imN);
    vlSelfRef.carrierGen__DOT__muls_2__DOT___zz_db3 
        = __VdfgRegularize_h6e95ff9d_0_325;
    vlSelfRef.carrierGen__DOT__muls_2__DOT___zz_sb3 
        = __VdfgRegularize_h6e95ff9d_0_325;
    vlSelfRef.carrierGen__DOT__muls_2__DOT___zz_sre5 
        = (0x00000007ffffffffULL & (vlSelfRef.carrierGen__DOT__muls_2__DOT___zz_sre5_1 
                                    + vlSelfRef.carrierGen__DOT__muls_2__DOT___zz_sre5_2));
    vlSelfRef.carrierGen__DOT__muls_2__DOT___zz_sim5 
        = (0x00000007ffffffffULL & (vlSelfRef.carrierGen__DOT__muls_2__DOT___zz_sim5_1 
                                    + vlSelfRef.carrierGen__DOT__muls_2__DOT___zz_sim5_2));
    vlSelfRef.carrierGen__DOT__muls_2__DOT___zz_db3_1 
        = __VdfgRegularize_h6e95ff9d_0_326;
    vlSelfRef.carrierGen__DOT__muls_2__DOT___zz_sb3_1 
        = __VdfgRegularize_h6e95ff9d_0_326;
    vlSelfRef.carrierGen__DOT__muls_2_io_rsp_valid 
        = vlSelfRef.carrierGen__DOT__muls_2__DOT__io_rsp_valid;
    vlSelfRef.carrierGen__DOT__muls_2__DOT__io_rsp_payload_re 
        = vlSelfRef.carrierGen__DOT__muls_2__DOT__reN;
    vlSelfRef.carrierGen__DOT__muls_2__DOT__io_rsp_payload_im 
        = vlSelfRef.carrierGen__DOT__muls_2__DOT__imN;
    vlSelfRef.carrierGen__DOT__muls_2__DOT__br0 = vlSelfRef.carrierGen__DOT__muls_2__DOT__io_cmd_payload_b_re;
    vlSelfRef.carrierGen__DOT__muls_2__DOT__m2 = vlSelfRef.carrierGen__DOT__muls_2__DOT__mulM;
    vlSelfRef.carrierGen__DOT__muls_2__DOT__bi0 = vlSelfRef.carrierGen__DOT__muls_2__DOT__io_cmd_payload_b_im;
    vlSelfRef.carrierGen__DOT__muls_2__DOT__ai1 = vlSelfRef.carrierGen__DOT__muls_2__DOT__ai0;
    vlSelfRef.carrierGen__DOT__muls_2__DOT__ar1 = vlSelfRef.carrierGen__DOT__muls_2__DOT__ar0;
    vlSelfRef.carrierGen__DOT__muls_2__DOT__io_cmd_valid_delay_4 
        = vlSelfRef.carrierGen__DOT__muls_2__DOT__io_cmd_valid_delay_3;
    vlSelfRef.carrierGen__DOT__muls_2_io_rsp_payload_re 
        = vlSelfRef.carrierGen__DOT__muls_2__DOT__io_rsp_payload_re;
    vlSelfRef.carrierGen__DOT__muls_2_io_rsp_payload_im 
        = vlSelfRef.carrierGen__DOT__muls_2__DOT__io_rsp_payload_im;
    vlSelfRef.carrierGen__DOT__muls_2__DOT__mulM = 
        (0x00000001ffffffffULL & VL_MULS_QQQ(33, (0x00000001ffffffffULL 
                                                  & VL_EXTENDS_QI(33,17, vlSelfRef.carrierGen__DOT__muls_2__DOT__da1)), 
                                             (0x00000001ffffffffULL 
                                              & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.carrierGen__DOT__muls_2__DOT__bi1)))));
    vlSelfRef.carrierGen__DOT__io_carrier_2_re = vlSelfRef.carrierGen__DOT__muls_2_io_rsp_payload_re;
    vlSelfRef.carrierGen__DOT__io_carrier_2_im = vlSelfRef.carrierGen__DOT__muls_2_io_rsp_payload_im;
    vlSelfRef.carrierGen__DOT__muls_2__DOT__ai0 = vlSelfRef.carrierGen__DOT__muls_2__DOT__io_cmd_payload_a_im;
    vlSelfRef.carrierGen__DOT__muls_2__DOT__ar0 = vlSelfRef.carrierGen__DOT__muls_2__DOT__io_cmd_payload_a_re;
    vlSelfRef.carrierGen__DOT__muls_2__DOT__io_cmd_valid_delay_3 
        = vlSelfRef.carrierGen__DOT__muls_2__DOT__io_cmd_valid_delay_2;
    vlSelfRef.carrierGen_io_carrier_2_re = vlSelfRef.carrierGen__DOT__io_carrier_2_re;
    vlSelfRef.carrierGen_io_carrier_2_im = vlSelfRef.carrierGen__DOT__io_carrier_2_im;
    vlSelfRef.carrierGen__DOT__muls_2__DOT___zz_da1_1 
        = ((0x00010000U & ((IData)(vlSelfRef.carrierGen__DOT__muls_2__DOT__ai0) 
                           << 1U)) | (IData)(vlSelfRef.carrierGen__DOT__muls_2__DOT__ai0));
    vlSelfRef.carrierGen__DOT__muls_2__DOT___zz_da1 
        = ((0x00010000U & ((IData)(vlSelfRef.carrierGen__DOT__muls_2__DOT__ar0) 
                           << 1U)) | (IData)(vlSelfRef.carrierGen__DOT__muls_2__DOT__ar0));
    vlSelfRef.carrierGen__DOT__muls_2__DOT__io_cmd_valid_delay_2 
        = vlSelfRef.carrierGen__DOT__muls_2__DOT__io_cmd_valid_delay_1;
    vlSelfRef.carrierGen__DOT__muls_2__DOT__io_cmd_valid_delay_1 = 1U;
}

void Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__15(Vtop_PulseGenerator* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__15\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_327;
    __VdfgRegularize_h6e95ff9d_0_327 = 0;
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_328;
    __VdfgRegularize_h6e95ff9d_0_328 = 0;
    // Body
    vlSelfRef.carrierGen__DOT__muls_3__DOT__db3 = (0x0001ffffU 
                                                   & (vlSelfRef.carrierGen__DOT__muls_3__DOT___zz_db3 
                                                      - vlSelfRef.carrierGen__DOT__muls_3__DOT___zz_db3_1));
    vlSelfRef.carrierGen__DOT__muls_3__DOT__sb3 = (0x0001ffffU 
                                                   & (vlSelfRef.carrierGen__DOT__muls_3__DOT___zz_sb3 
                                                      + vlSelfRef.carrierGen__DOT__muls_3__DOT___zz_sb3_1));
    vlSelfRef.carrierGen__DOT__muls_3__DOT__da1 = (0x0001ffffU 
                                                   & (vlSelfRef.carrierGen__DOT__muls_3__DOT___zz_da1 
                                                      - vlSelfRef.carrierGen__DOT__muls_3__DOT___zz_da1_1));
    vlSelfRef.carrierGen__DOT__muls_3__DOT__pre4 = vlSelfRef.carrierGen__DOT__muls_3__DOT__mulPre;
    vlSelfRef.carrierGen__DOT__muls_3__DOT__pim4 = vlSelfRef.carrierGen__DOT__muls_3__DOT__mulPim;
    vlSelfRef.carrierGen__DOT__muls_3__DOT__sre5 = 
        (0x00000007ffffffffULL & (0x0000000000004000ULL 
                                  + vlSelfRef.carrierGen__DOT__muls_3__DOT___zz_sre5));
    vlSelfRef.carrierGen__DOT__muls_3__DOT__sim5 = 
        (0x00000007ffffffffULL & (0x0000000000004000ULL 
                                  + vlSelfRef.carrierGen__DOT__muls_3__DOT___zz_sim5));
    vlSelfRef.carrierGen__DOT__muls_3__DOT__br2 = vlSelfRef.carrierGen__DOT__muls_3__DOT__br1;
    vlSelfRef.carrierGen__DOT__muls_3__DOT__mcr4 = vlSelfRef.carrierGen__DOT__muls_3__DOT__m3;
    vlSelfRef.carrierGen__DOT__muls_3__DOT__mci4 = vlSelfRef.carrierGen__DOT__muls_3__DOT__m3;
    vlSelfRef.carrierGen__DOT__muls_3__DOT__bi2 = vlSelfRef.carrierGen__DOT__muls_3__DOT__bi1;
    vlSelfRef.carrierGen__DOT__muls_3__DOT__ai3 = vlSelfRef.carrierGen__DOT__muls_3__DOT__ai2;
    vlSelfRef.carrierGen__DOT__muls_3__DOT__ar3 = vlSelfRef.carrierGen__DOT__muls_3__DOT__ar2;
    vlSelfRef.carrierGen__DOT__muls_3__DOT__io_cmd_valid_delay_6 
        = vlSelfRef.carrierGen__DOT__muls_3__DOT__io_cmd_valid_delay_5;
    vlSelfRef.carrierGen__DOT__muls_3__DOT___zz_sre5_1 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_3__DOT__pre4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_3__DOT__pre4);
    vlSelfRef.carrierGen__DOT__muls_3__DOT___zz_sim5_1 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_3__DOT__pim4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_3__DOT__pim4);
    vlSelfRef.carrierGen__DOT__muls_3__DOT___zz_reN 
        = (0x000fffffU & (IData)((vlSelfRef.carrierGen__DOT__muls_3__DOT__sre5 
                                  >> 0x0fU)));
    vlSelfRef.carrierGen__DOT__muls_3__DOT___zz_imN 
        = (0x000fffffU & (IData)((vlSelfRef.carrierGen__DOT__muls_3__DOT__sim5 
                                  >> 0x0fU)));
    __VdfgRegularize_h6e95ff9d_0_327 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.carrierGen__DOT__muls_3__DOT__br2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.carrierGen__DOT__muls_3__DOT__br2));
    vlSelfRef.carrierGen__DOT__muls_3__DOT__br1 = vlSelfRef.carrierGen__DOT__muls_3__DOT__br0;
    vlSelfRef.carrierGen__DOT__muls_3__DOT___zz_sre5_2 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_3__DOT__mcr4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_3__DOT__mcr4);
    vlSelfRef.carrierGen__DOT__muls_3__DOT___zz_sim5_2 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_3__DOT__mci4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_3__DOT__mci4);
    vlSelfRef.carrierGen__DOT__muls_3__DOT__m3 = vlSelfRef.carrierGen__DOT__muls_3__DOT__m2;
    __VdfgRegularize_h6e95ff9d_0_328 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.carrierGen__DOT__muls_3__DOT__bi2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.carrierGen__DOT__muls_3__DOT__bi2));
    vlSelfRef.carrierGen__DOT__muls_3__DOT__bi1 = vlSelfRef.carrierGen__DOT__muls_3__DOT__bi0;
    vlSelfRef.carrierGen__DOT__muls_3__DOT__mulPim 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.carrierGen__DOT__muls_3__DOT__sb3)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.carrierGen__DOT__muls_3__DOT__ai3)))));
    vlSelfRef.carrierGen__DOT__muls_3__DOT__ai2 = vlSelfRef.carrierGen__DOT__muls_3__DOT__ai1;
    vlSelfRef.carrierGen__DOT__muls_3__DOT__mulPre 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.carrierGen__DOT__muls_3__DOT__db3)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.carrierGen__DOT__muls_3__DOT__ar3)))));
    vlSelfRef.carrierGen__DOT__muls_3__DOT__ar2 = vlSelfRef.carrierGen__DOT__muls_3__DOT__ar1;
    vlSelfRef.carrierGen__DOT__muls_3__DOT__io_rsp_valid 
        = vlSelfRef.carrierGen__DOT__muls_3__DOT__io_cmd_valid_delay_6;
    vlSelfRef.carrierGen__DOT__muls_3__DOT__io_cmd_valid_delay_5 
        = vlSelfRef.carrierGen__DOT__muls_3__DOT__io_cmd_valid_delay_4;
    vlSelfRef.carrierGen__DOT__muls_3__DOT__reN = (0x0000ffffU 
                                                   & vlSelfRef.carrierGen__DOT__muls_3__DOT___zz_reN);
    vlSelfRef.carrierGen__DOT__muls_3__DOT__imN = (0x0000ffffU 
                                                   & vlSelfRef.carrierGen__DOT__muls_3__DOT___zz_imN);
    vlSelfRef.carrierGen__DOT__muls_3__DOT___zz_db3 
        = __VdfgRegularize_h6e95ff9d_0_327;
    vlSelfRef.carrierGen__DOT__muls_3__DOT___zz_sb3 
        = __VdfgRegularize_h6e95ff9d_0_327;
    vlSelfRef.carrierGen__DOT__muls_3__DOT___zz_sre5 
        = (0x00000007ffffffffULL & (vlSelfRef.carrierGen__DOT__muls_3__DOT___zz_sre5_1 
                                    + vlSelfRef.carrierGen__DOT__muls_3__DOT___zz_sre5_2));
    vlSelfRef.carrierGen__DOT__muls_3__DOT___zz_sim5 
        = (0x00000007ffffffffULL & (vlSelfRef.carrierGen__DOT__muls_3__DOT___zz_sim5_1 
                                    + vlSelfRef.carrierGen__DOT__muls_3__DOT___zz_sim5_2));
    vlSelfRef.carrierGen__DOT__muls_3__DOT___zz_db3_1 
        = __VdfgRegularize_h6e95ff9d_0_328;
    vlSelfRef.carrierGen__DOT__muls_3__DOT___zz_sb3_1 
        = __VdfgRegularize_h6e95ff9d_0_328;
    vlSelfRef.carrierGen__DOT__muls_3_io_rsp_valid 
        = vlSelfRef.carrierGen__DOT__muls_3__DOT__io_rsp_valid;
    vlSelfRef.carrierGen__DOT__muls_3__DOT__io_rsp_payload_re 
        = vlSelfRef.carrierGen__DOT__muls_3__DOT__reN;
    vlSelfRef.carrierGen__DOT__muls_3__DOT__io_rsp_payload_im 
        = vlSelfRef.carrierGen__DOT__muls_3__DOT__imN;
    vlSelfRef.carrierGen__DOT__muls_3__DOT__br0 = vlSelfRef.carrierGen__DOT__muls_3__DOT__io_cmd_payload_b_re;
    vlSelfRef.carrierGen__DOT__muls_3__DOT__m2 = vlSelfRef.carrierGen__DOT__muls_3__DOT__mulM;
    vlSelfRef.carrierGen__DOT__muls_3__DOT__bi0 = vlSelfRef.carrierGen__DOT__muls_3__DOT__io_cmd_payload_b_im;
    vlSelfRef.carrierGen__DOT__muls_3__DOT__ai1 = vlSelfRef.carrierGen__DOT__muls_3__DOT__ai0;
    vlSelfRef.carrierGen__DOT__muls_3__DOT__ar1 = vlSelfRef.carrierGen__DOT__muls_3__DOT__ar0;
    vlSelfRef.carrierGen__DOT__muls_3__DOT__io_cmd_valid_delay_4 
        = vlSelfRef.carrierGen__DOT__muls_3__DOT__io_cmd_valid_delay_3;
    vlSelfRef.carrierGen__DOT__muls_3_io_rsp_payload_re 
        = vlSelfRef.carrierGen__DOT__muls_3__DOT__io_rsp_payload_re;
    vlSelfRef.carrierGen__DOT__muls_3_io_rsp_payload_im 
        = vlSelfRef.carrierGen__DOT__muls_3__DOT__io_rsp_payload_im;
    vlSelfRef.carrierGen__DOT__muls_3__DOT__mulM = 
        (0x00000001ffffffffULL & VL_MULS_QQQ(33, (0x00000001ffffffffULL 
                                                  & VL_EXTENDS_QI(33,17, vlSelfRef.carrierGen__DOT__muls_3__DOT__da1)), 
                                             (0x00000001ffffffffULL 
                                              & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.carrierGen__DOT__muls_3__DOT__bi1)))));
    vlSelfRef.carrierGen__DOT__io_carrier_3_re = vlSelfRef.carrierGen__DOT__muls_3_io_rsp_payload_re;
    vlSelfRef.carrierGen__DOT__io_carrier_3_im = vlSelfRef.carrierGen__DOT__muls_3_io_rsp_payload_im;
    vlSelfRef.carrierGen__DOT__muls_3__DOT__ai0 = vlSelfRef.carrierGen__DOT__muls_3__DOT__io_cmd_payload_a_im;
    vlSelfRef.carrierGen__DOT__muls_3__DOT__ar0 = vlSelfRef.carrierGen__DOT__muls_3__DOT__io_cmd_payload_a_re;
    vlSelfRef.carrierGen__DOT__muls_3__DOT__io_cmd_valid_delay_3 
        = vlSelfRef.carrierGen__DOT__muls_3__DOT__io_cmd_valid_delay_2;
    vlSelfRef.carrierGen_io_carrier_3_re = vlSelfRef.carrierGen__DOT__io_carrier_3_re;
    vlSelfRef.carrierGen_io_carrier_3_im = vlSelfRef.carrierGen__DOT__io_carrier_3_im;
    vlSelfRef.carrierGen__DOT__muls_3__DOT___zz_da1_1 
        = ((0x00010000U & ((IData)(vlSelfRef.carrierGen__DOT__muls_3__DOT__ai0) 
                           << 1U)) | (IData)(vlSelfRef.carrierGen__DOT__muls_3__DOT__ai0));
    vlSelfRef.carrierGen__DOT__muls_3__DOT___zz_da1 
        = ((0x00010000U & ((IData)(vlSelfRef.carrierGen__DOT__muls_3__DOT__ar0) 
                           << 1U)) | (IData)(vlSelfRef.carrierGen__DOT__muls_3__DOT__ar0));
    vlSelfRef.carrierGen__DOT__muls_3__DOT__io_cmd_valid_delay_2 
        = vlSelfRef.carrierGen__DOT__muls_3__DOT__io_cmd_valid_delay_1;
    vlSelfRef.carrierGen__DOT__muls_3__DOT__io_cmd_valid_delay_1 = 1U;
}

void Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__16(Vtop_PulseGenerator* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__16\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_329;
    __VdfgRegularize_h6e95ff9d_0_329 = 0;
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_330;
    __VdfgRegularize_h6e95ff9d_0_330 = 0;
    // Body
    vlSelfRef.carrierGen__DOT__muls_4__DOT__db3 = (0x0001ffffU 
                                                   & (vlSelfRef.carrierGen__DOT__muls_4__DOT___zz_db3 
                                                      - vlSelfRef.carrierGen__DOT__muls_4__DOT___zz_db3_1));
    vlSelfRef.carrierGen__DOT__muls_4__DOT__sb3 = (0x0001ffffU 
                                                   & (vlSelfRef.carrierGen__DOT__muls_4__DOT___zz_sb3 
                                                      + vlSelfRef.carrierGen__DOT__muls_4__DOT___zz_sb3_1));
    vlSelfRef.carrierGen__DOT__muls_4__DOT__da1 = (0x0001ffffU 
                                                   & (vlSelfRef.carrierGen__DOT__muls_4__DOT___zz_da1 
                                                      - vlSelfRef.carrierGen__DOT__muls_4__DOT___zz_da1_1));
    vlSelfRef.carrierGen__DOT__muls_4__DOT__pre4 = vlSelfRef.carrierGen__DOT__muls_4__DOT__mulPre;
    vlSelfRef.carrierGen__DOT__muls_4__DOT__pim4 = vlSelfRef.carrierGen__DOT__muls_4__DOT__mulPim;
    vlSelfRef.carrierGen__DOT__muls_4__DOT__sre5 = 
        (0x00000007ffffffffULL & (0x0000000000004000ULL 
                                  + vlSelfRef.carrierGen__DOT__muls_4__DOT___zz_sre5));
    vlSelfRef.carrierGen__DOT__muls_4__DOT__sim5 = 
        (0x00000007ffffffffULL & (0x0000000000004000ULL 
                                  + vlSelfRef.carrierGen__DOT__muls_4__DOT___zz_sim5));
    vlSelfRef.carrierGen__DOT__muls_4__DOT__br2 = vlSelfRef.carrierGen__DOT__muls_4__DOT__br1;
    vlSelfRef.carrierGen__DOT__muls_4__DOT__mcr4 = vlSelfRef.carrierGen__DOT__muls_4__DOT__m3;
    vlSelfRef.carrierGen__DOT__muls_4__DOT__mci4 = vlSelfRef.carrierGen__DOT__muls_4__DOT__m3;
    vlSelfRef.carrierGen__DOT__muls_4__DOT__bi2 = vlSelfRef.carrierGen__DOT__muls_4__DOT__bi1;
    vlSelfRef.carrierGen__DOT__muls_4__DOT__ai3 = vlSelfRef.carrierGen__DOT__muls_4__DOT__ai2;
    vlSelfRef.carrierGen__DOT__muls_4__DOT__ar3 = vlSelfRef.carrierGen__DOT__muls_4__DOT__ar2;
    vlSelfRef.carrierGen__DOT__muls_4__DOT__io_cmd_valid_delay_6 
        = vlSelfRef.carrierGen__DOT__muls_4__DOT__io_cmd_valid_delay_5;
    vlSelfRef.carrierGen__DOT__muls_4__DOT___zz_sre5_1 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_4__DOT__pre4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_4__DOT__pre4);
    vlSelfRef.carrierGen__DOT__muls_4__DOT___zz_sim5_1 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_4__DOT__pim4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_4__DOT__pim4);
    vlSelfRef.carrierGen__DOT__muls_4__DOT___zz_reN 
        = (0x000fffffU & (IData)((vlSelfRef.carrierGen__DOT__muls_4__DOT__sre5 
                                  >> 0x0fU)));
    vlSelfRef.carrierGen__DOT__muls_4__DOT___zz_imN 
        = (0x000fffffU & (IData)((vlSelfRef.carrierGen__DOT__muls_4__DOT__sim5 
                                  >> 0x0fU)));
    __VdfgRegularize_h6e95ff9d_0_329 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.carrierGen__DOT__muls_4__DOT__br2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.carrierGen__DOT__muls_4__DOT__br2));
    vlSelfRef.carrierGen__DOT__muls_4__DOT__br1 = vlSelfRef.carrierGen__DOT__muls_4__DOT__br0;
    vlSelfRef.carrierGen__DOT__muls_4__DOT___zz_sre5_2 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_4__DOT__mcr4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_4__DOT__mcr4);
    vlSelfRef.carrierGen__DOT__muls_4__DOT___zz_sim5_2 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_4__DOT__mci4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_4__DOT__mci4);
    vlSelfRef.carrierGen__DOT__muls_4__DOT__m3 = vlSelfRef.carrierGen__DOT__muls_4__DOT__m2;
    __VdfgRegularize_h6e95ff9d_0_330 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.carrierGen__DOT__muls_4__DOT__bi2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.carrierGen__DOT__muls_4__DOT__bi2));
    vlSelfRef.carrierGen__DOT__muls_4__DOT__bi1 = vlSelfRef.carrierGen__DOT__muls_4__DOT__bi0;
    vlSelfRef.carrierGen__DOT__muls_4__DOT__mulPim 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.carrierGen__DOT__muls_4__DOT__sb3)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.carrierGen__DOT__muls_4__DOT__ai3)))));
    vlSelfRef.carrierGen__DOT__muls_4__DOT__ai2 = vlSelfRef.carrierGen__DOT__muls_4__DOT__ai1;
    vlSelfRef.carrierGen__DOT__muls_4__DOT__mulPre 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.carrierGen__DOT__muls_4__DOT__db3)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.carrierGen__DOT__muls_4__DOT__ar3)))));
    vlSelfRef.carrierGen__DOT__muls_4__DOT__ar2 = vlSelfRef.carrierGen__DOT__muls_4__DOT__ar1;
    vlSelfRef.carrierGen__DOT__muls_4__DOT__io_rsp_valid 
        = vlSelfRef.carrierGen__DOT__muls_4__DOT__io_cmd_valid_delay_6;
    vlSelfRef.carrierGen__DOT__muls_4__DOT__io_cmd_valid_delay_5 
        = vlSelfRef.carrierGen__DOT__muls_4__DOT__io_cmd_valid_delay_4;
    vlSelfRef.carrierGen__DOT__muls_4__DOT__reN = (0x0000ffffU 
                                                   & vlSelfRef.carrierGen__DOT__muls_4__DOT___zz_reN);
    vlSelfRef.carrierGen__DOT__muls_4__DOT__imN = (0x0000ffffU 
                                                   & vlSelfRef.carrierGen__DOT__muls_4__DOT___zz_imN);
    vlSelfRef.carrierGen__DOT__muls_4__DOT___zz_db3 
        = __VdfgRegularize_h6e95ff9d_0_329;
    vlSelfRef.carrierGen__DOT__muls_4__DOT___zz_sb3 
        = __VdfgRegularize_h6e95ff9d_0_329;
    vlSelfRef.carrierGen__DOT__muls_4__DOT___zz_sre5 
        = (0x00000007ffffffffULL & (vlSelfRef.carrierGen__DOT__muls_4__DOT___zz_sre5_1 
                                    + vlSelfRef.carrierGen__DOT__muls_4__DOT___zz_sre5_2));
    vlSelfRef.carrierGen__DOT__muls_4__DOT___zz_sim5 
        = (0x00000007ffffffffULL & (vlSelfRef.carrierGen__DOT__muls_4__DOT___zz_sim5_1 
                                    + vlSelfRef.carrierGen__DOT__muls_4__DOT___zz_sim5_2));
    vlSelfRef.carrierGen__DOT__muls_4__DOT___zz_db3_1 
        = __VdfgRegularize_h6e95ff9d_0_330;
    vlSelfRef.carrierGen__DOT__muls_4__DOT___zz_sb3_1 
        = __VdfgRegularize_h6e95ff9d_0_330;
    vlSelfRef.carrierGen__DOT__muls_4_io_rsp_valid 
        = vlSelfRef.carrierGen__DOT__muls_4__DOT__io_rsp_valid;
    vlSelfRef.carrierGen__DOT__muls_4__DOT__io_rsp_payload_re 
        = vlSelfRef.carrierGen__DOT__muls_4__DOT__reN;
    vlSelfRef.carrierGen__DOT__muls_4__DOT__io_rsp_payload_im 
        = vlSelfRef.carrierGen__DOT__muls_4__DOT__imN;
    vlSelfRef.carrierGen__DOT__muls_4__DOT__br0 = vlSelfRef.carrierGen__DOT__muls_4__DOT__io_cmd_payload_b_re;
    vlSelfRef.carrierGen__DOT__muls_4__DOT__m2 = vlSelfRef.carrierGen__DOT__muls_4__DOT__mulM;
    vlSelfRef.carrierGen__DOT__muls_4__DOT__bi0 = vlSelfRef.carrierGen__DOT__muls_4__DOT__io_cmd_payload_b_im;
    vlSelfRef.carrierGen__DOT__muls_4__DOT__ai1 = vlSelfRef.carrierGen__DOT__muls_4__DOT__ai0;
    vlSelfRef.carrierGen__DOT__muls_4__DOT__ar1 = vlSelfRef.carrierGen__DOT__muls_4__DOT__ar0;
    vlSelfRef.carrierGen__DOT__muls_4__DOT__io_cmd_valid_delay_4 
        = vlSelfRef.carrierGen__DOT__muls_4__DOT__io_cmd_valid_delay_3;
    vlSelfRef.carrierGen__DOT__muls_4_io_rsp_payload_re 
        = vlSelfRef.carrierGen__DOT__muls_4__DOT__io_rsp_payload_re;
    vlSelfRef.carrierGen__DOT__muls_4_io_rsp_payload_im 
        = vlSelfRef.carrierGen__DOT__muls_4__DOT__io_rsp_payload_im;
    vlSelfRef.carrierGen__DOT__muls_4__DOT__mulM = 
        (0x00000001ffffffffULL & VL_MULS_QQQ(33, (0x00000001ffffffffULL 
                                                  & VL_EXTENDS_QI(33,17, vlSelfRef.carrierGen__DOT__muls_4__DOT__da1)), 
                                             (0x00000001ffffffffULL 
                                              & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.carrierGen__DOT__muls_4__DOT__bi1)))));
    vlSelfRef.carrierGen__DOT__io_carrier_4_re = vlSelfRef.carrierGen__DOT__muls_4_io_rsp_payload_re;
    vlSelfRef.carrierGen__DOT__io_carrier_4_im = vlSelfRef.carrierGen__DOT__muls_4_io_rsp_payload_im;
    vlSelfRef.carrierGen__DOT__muls_4__DOT__ai0 = vlSelfRef.carrierGen__DOT__muls_4__DOT__io_cmd_payload_a_im;
    vlSelfRef.carrierGen__DOT__muls_4__DOT__ar0 = vlSelfRef.carrierGen__DOT__muls_4__DOT__io_cmd_payload_a_re;
    vlSelfRef.carrierGen__DOT__muls_4__DOT__io_cmd_valid_delay_3 
        = vlSelfRef.carrierGen__DOT__muls_4__DOT__io_cmd_valid_delay_2;
    vlSelfRef.carrierGen_io_carrier_4_re = vlSelfRef.carrierGen__DOT__io_carrier_4_re;
    vlSelfRef.carrierGen_io_carrier_4_im = vlSelfRef.carrierGen__DOT__io_carrier_4_im;
    vlSelfRef.carrierGen__DOT__muls_4__DOT___zz_da1_1 
        = ((0x00010000U & ((IData)(vlSelfRef.carrierGen__DOT__muls_4__DOT__ai0) 
                           << 1U)) | (IData)(vlSelfRef.carrierGen__DOT__muls_4__DOT__ai0));
    vlSelfRef.carrierGen__DOT__muls_4__DOT___zz_da1 
        = ((0x00010000U & ((IData)(vlSelfRef.carrierGen__DOT__muls_4__DOT__ar0) 
                           << 1U)) | (IData)(vlSelfRef.carrierGen__DOT__muls_4__DOT__ar0));
    vlSelfRef.carrierGen__DOT__muls_4__DOT__io_cmd_valid_delay_2 
        = vlSelfRef.carrierGen__DOT__muls_4__DOT__io_cmd_valid_delay_1;
    vlSelfRef.carrierGen__DOT__muls_4__DOT__io_cmd_valid_delay_1 = 1U;
}

void Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__17(Vtop_PulseGenerator* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__17\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_331;
    __VdfgRegularize_h6e95ff9d_0_331 = 0;
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_332;
    __VdfgRegularize_h6e95ff9d_0_332 = 0;
    // Body
    vlSelfRef.carrierGen__DOT__muls_5__DOT__db3 = (0x0001ffffU 
                                                   & (vlSelfRef.carrierGen__DOT__muls_5__DOT___zz_db3 
                                                      - vlSelfRef.carrierGen__DOT__muls_5__DOT___zz_db3_1));
    vlSelfRef.carrierGen__DOT__muls_5__DOT__sb3 = (0x0001ffffU 
                                                   & (vlSelfRef.carrierGen__DOT__muls_5__DOT___zz_sb3 
                                                      + vlSelfRef.carrierGen__DOT__muls_5__DOT___zz_sb3_1));
    vlSelfRef.carrierGen__DOT__muls_5__DOT__da1 = (0x0001ffffU 
                                                   & (vlSelfRef.carrierGen__DOT__muls_5__DOT___zz_da1 
                                                      - vlSelfRef.carrierGen__DOT__muls_5__DOT___zz_da1_1));
    vlSelfRef.carrierGen__DOT__muls_5__DOT__pre4 = vlSelfRef.carrierGen__DOT__muls_5__DOT__mulPre;
    vlSelfRef.carrierGen__DOT__muls_5__DOT__pim4 = vlSelfRef.carrierGen__DOT__muls_5__DOT__mulPim;
    vlSelfRef.carrierGen__DOT__muls_5__DOT__sre5 = 
        (0x00000007ffffffffULL & (0x0000000000004000ULL 
                                  + vlSelfRef.carrierGen__DOT__muls_5__DOT___zz_sre5));
    vlSelfRef.carrierGen__DOT__muls_5__DOT__sim5 = 
        (0x00000007ffffffffULL & (0x0000000000004000ULL 
                                  + vlSelfRef.carrierGen__DOT__muls_5__DOT___zz_sim5));
    vlSelfRef.carrierGen__DOT__muls_5__DOT__br2 = vlSelfRef.carrierGen__DOT__muls_5__DOT__br1;
    vlSelfRef.carrierGen__DOT__muls_5__DOT__mcr4 = vlSelfRef.carrierGen__DOT__muls_5__DOT__m3;
    vlSelfRef.carrierGen__DOT__muls_5__DOT__mci4 = vlSelfRef.carrierGen__DOT__muls_5__DOT__m3;
    vlSelfRef.carrierGen__DOT__muls_5__DOT__bi2 = vlSelfRef.carrierGen__DOT__muls_5__DOT__bi1;
    vlSelfRef.carrierGen__DOT__muls_5__DOT__ai3 = vlSelfRef.carrierGen__DOT__muls_5__DOT__ai2;
    vlSelfRef.carrierGen__DOT__muls_5__DOT__ar3 = vlSelfRef.carrierGen__DOT__muls_5__DOT__ar2;
    vlSelfRef.carrierGen__DOT__muls_5__DOT__io_cmd_valid_delay_6 
        = vlSelfRef.carrierGen__DOT__muls_5__DOT__io_cmd_valid_delay_5;
    vlSelfRef.carrierGen__DOT__muls_5__DOT___zz_sre5_1 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_5__DOT__pre4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_5__DOT__pre4);
    vlSelfRef.carrierGen__DOT__muls_5__DOT___zz_sim5_1 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_5__DOT__pim4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_5__DOT__pim4);
    vlSelfRef.carrierGen__DOT__muls_5__DOT___zz_reN 
        = (0x000fffffU & (IData)((vlSelfRef.carrierGen__DOT__muls_5__DOT__sre5 
                                  >> 0x0fU)));
    vlSelfRef.carrierGen__DOT__muls_5__DOT___zz_imN 
        = (0x000fffffU & (IData)((vlSelfRef.carrierGen__DOT__muls_5__DOT__sim5 
                                  >> 0x0fU)));
    __VdfgRegularize_h6e95ff9d_0_331 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.carrierGen__DOT__muls_5__DOT__br2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.carrierGen__DOT__muls_5__DOT__br2));
    vlSelfRef.carrierGen__DOT__muls_5__DOT__br1 = vlSelfRef.carrierGen__DOT__muls_5__DOT__br0;
    vlSelfRef.carrierGen__DOT__muls_5__DOT___zz_sre5_2 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_5__DOT__mcr4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_5__DOT__mcr4);
    vlSelfRef.carrierGen__DOT__muls_5__DOT___zz_sim5_2 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_5__DOT__mci4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_5__DOT__mci4);
    vlSelfRef.carrierGen__DOT__muls_5__DOT__m3 = vlSelfRef.carrierGen__DOT__muls_5__DOT__m2;
    __VdfgRegularize_h6e95ff9d_0_332 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.carrierGen__DOT__muls_5__DOT__bi2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.carrierGen__DOT__muls_5__DOT__bi2));
    vlSelfRef.carrierGen__DOT__muls_5__DOT__bi1 = vlSelfRef.carrierGen__DOT__muls_5__DOT__bi0;
    vlSelfRef.carrierGen__DOT__muls_5__DOT__mulPim 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.carrierGen__DOT__muls_5__DOT__sb3)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.carrierGen__DOT__muls_5__DOT__ai3)))));
    vlSelfRef.carrierGen__DOT__muls_5__DOT__ai2 = vlSelfRef.carrierGen__DOT__muls_5__DOT__ai1;
    vlSelfRef.carrierGen__DOT__muls_5__DOT__mulPre 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.carrierGen__DOT__muls_5__DOT__db3)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.carrierGen__DOT__muls_5__DOT__ar3)))));
    vlSelfRef.carrierGen__DOT__muls_5__DOT__ar2 = vlSelfRef.carrierGen__DOT__muls_5__DOT__ar1;
    vlSelfRef.carrierGen__DOT__muls_5__DOT__io_rsp_valid 
        = vlSelfRef.carrierGen__DOT__muls_5__DOT__io_cmd_valid_delay_6;
    vlSelfRef.carrierGen__DOT__muls_5__DOT__io_cmd_valid_delay_5 
        = vlSelfRef.carrierGen__DOT__muls_5__DOT__io_cmd_valid_delay_4;
    vlSelfRef.carrierGen__DOT__muls_5__DOT__reN = (0x0000ffffU 
                                                   & vlSelfRef.carrierGen__DOT__muls_5__DOT___zz_reN);
    vlSelfRef.carrierGen__DOT__muls_5__DOT__imN = (0x0000ffffU 
                                                   & vlSelfRef.carrierGen__DOT__muls_5__DOT___zz_imN);
    vlSelfRef.carrierGen__DOT__muls_5__DOT___zz_db3 
        = __VdfgRegularize_h6e95ff9d_0_331;
    vlSelfRef.carrierGen__DOT__muls_5__DOT___zz_sb3 
        = __VdfgRegularize_h6e95ff9d_0_331;
    vlSelfRef.carrierGen__DOT__muls_5__DOT___zz_sre5 
        = (0x00000007ffffffffULL & (vlSelfRef.carrierGen__DOT__muls_5__DOT___zz_sre5_1 
                                    + vlSelfRef.carrierGen__DOT__muls_5__DOT___zz_sre5_2));
    vlSelfRef.carrierGen__DOT__muls_5__DOT___zz_sim5 
        = (0x00000007ffffffffULL & (vlSelfRef.carrierGen__DOT__muls_5__DOT___zz_sim5_1 
                                    + vlSelfRef.carrierGen__DOT__muls_5__DOT___zz_sim5_2));
    vlSelfRef.carrierGen__DOT__muls_5__DOT___zz_db3_1 
        = __VdfgRegularize_h6e95ff9d_0_332;
    vlSelfRef.carrierGen__DOT__muls_5__DOT___zz_sb3_1 
        = __VdfgRegularize_h6e95ff9d_0_332;
    vlSelfRef.carrierGen__DOT__muls_5_io_rsp_valid 
        = vlSelfRef.carrierGen__DOT__muls_5__DOT__io_rsp_valid;
    vlSelfRef.carrierGen__DOT__muls_5__DOT__io_rsp_payload_re 
        = vlSelfRef.carrierGen__DOT__muls_5__DOT__reN;
    vlSelfRef.carrierGen__DOT__muls_5__DOT__io_rsp_payload_im 
        = vlSelfRef.carrierGen__DOT__muls_5__DOT__imN;
    vlSelfRef.carrierGen__DOT__muls_5__DOT__br0 = vlSelfRef.carrierGen__DOT__muls_5__DOT__io_cmd_payload_b_re;
    vlSelfRef.carrierGen__DOT__muls_5__DOT__m2 = vlSelfRef.carrierGen__DOT__muls_5__DOT__mulM;
    vlSelfRef.carrierGen__DOT__muls_5__DOT__bi0 = vlSelfRef.carrierGen__DOT__muls_5__DOT__io_cmd_payload_b_im;
    vlSelfRef.carrierGen__DOT__muls_5__DOT__ai1 = vlSelfRef.carrierGen__DOT__muls_5__DOT__ai0;
    vlSelfRef.carrierGen__DOT__muls_5__DOT__ar1 = vlSelfRef.carrierGen__DOT__muls_5__DOT__ar0;
    vlSelfRef.carrierGen__DOT__muls_5__DOT__io_cmd_valid_delay_4 
        = vlSelfRef.carrierGen__DOT__muls_5__DOT__io_cmd_valid_delay_3;
    vlSelfRef.carrierGen__DOT__muls_5_io_rsp_payload_re 
        = vlSelfRef.carrierGen__DOT__muls_5__DOT__io_rsp_payload_re;
    vlSelfRef.carrierGen__DOT__muls_5_io_rsp_payload_im 
        = vlSelfRef.carrierGen__DOT__muls_5__DOT__io_rsp_payload_im;
    vlSelfRef.carrierGen__DOT__muls_5__DOT__mulM = 
        (0x00000001ffffffffULL & VL_MULS_QQQ(33, (0x00000001ffffffffULL 
                                                  & VL_EXTENDS_QI(33,17, vlSelfRef.carrierGen__DOT__muls_5__DOT__da1)), 
                                             (0x00000001ffffffffULL 
                                              & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.carrierGen__DOT__muls_5__DOT__bi1)))));
    vlSelfRef.carrierGen__DOT__io_carrier_5_re = vlSelfRef.carrierGen__DOT__muls_5_io_rsp_payload_re;
    vlSelfRef.carrierGen__DOT__io_carrier_5_im = vlSelfRef.carrierGen__DOT__muls_5_io_rsp_payload_im;
    vlSelfRef.carrierGen__DOT__muls_5__DOT__ai0 = vlSelfRef.carrierGen__DOT__muls_5__DOT__io_cmd_payload_a_im;
    vlSelfRef.carrierGen__DOT__muls_5__DOT__ar0 = vlSelfRef.carrierGen__DOT__muls_5__DOT__io_cmd_payload_a_re;
    vlSelfRef.carrierGen__DOT__muls_5__DOT__io_cmd_valid_delay_3 
        = vlSelfRef.carrierGen__DOT__muls_5__DOT__io_cmd_valid_delay_2;
    vlSelfRef.carrierGen_io_carrier_5_re = vlSelfRef.carrierGen__DOT__io_carrier_5_re;
    vlSelfRef.carrierGen_io_carrier_5_im = vlSelfRef.carrierGen__DOT__io_carrier_5_im;
    vlSelfRef.carrierGen__DOT__muls_5__DOT___zz_da1_1 
        = ((0x00010000U & ((IData)(vlSelfRef.carrierGen__DOT__muls_5__DOT__ai0) 
                           << 1U)) | (IData)(vlSelfRef.carrierGen__DOT__muls_5__DOT__ai0));
    vlSelfRef.carrierGen__DOT__muls_5__DOT___zz_da1 
        = ((0x00010000U & ((IData)(vlSelfRef.carrierGen__DOT__muls_5__DOT__ar0) 
                           << 1U)) | (IData)(vlSelfRef.carrierGen__DOT__muls_5__DOT__ar0));
    vlSelfRef.carrierGen__DOT__muls_5__DOT__io_cmd_valid_delay_2 
        = vlSelfRef.carrierGen__DOT__muls_5__DOT__io_cmd_valid_delay_1;
    vlSelfRef.carrierGen__DOT__muls_5__DOT__io_cmd_valid_delay_1 = 1U;
}

void Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__18(Vtop_PulseGenerator* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__18\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_333;
    __VdfgRegularize_h6e95ff9d_0_333 = 0;
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_334;
    __VdfgRegularize_h6e95ff9d_0_334 = 0;
    // Body
    vlSelfRef.carrierGen__DOT__muls_6__DOT__db3 = (0x0001ffffU 
                                                   & (vlSelfRef.carrierGen__DOT__muls_6__DOT___zz_db3 
                                                      - vlSelfRef.carrierGen__DOT__muls_6__DOT___zz_db3_1));
    vlSelfRef.carrierGen__DOT__muls_6__DOT__sb3 = (0x0001ffffU 
                                                   & (vlSelfRef.carrierGen__DOT__muls_6__DOT___zz_sb3 
                                                      + vlSelfRef.carrierGen__DOT__muls_6__DOT___zz_sb3_1));
    vlSelfRef.carrierGen__DOT__muls_6__DOT__da1 = (0x0001ffffU 
                                                   & (vlSelfRef.carrierGen__DOT__muls_6__DOT___zz_da1 
                                                      - vlSelfRef.carrierGen__DOT__muls_6__DOT___zz_da1_1));
    vlSelfRef.carrierGen__DOT__muls_6__DOT__pre4 = vlSelfRef.carrierGen__DOT__muls_6__DOT__mulPre;
    vlSelfRef.carrierGen__DOT__muls_6__DOT__pim4 = vlSelfRef.carrierGen__DOT__muls_6__DOT__mulPim;
    vlSelfRef.carrierGen__DOT__muls_6__DOT__sre5 = 
        (0x00000007ffffffffULL & (0x0000000000004000ULL 
                                  + vlSelfRef.carrierGen__DOT__muls_6__DOT___zz_sre5));
    vlSelfRef.carrierGen__DOT__muls_6__DOT__sim5 = 
        (0x00000007ffffffffULL & (0x0000000000004000ULL 
                                  + vlSelfRef.carrierGen__DOT__muls_6__DOT___zz_sim5));
    vlSelfRef.carrierGen__DOT__muls_6__DOT__br2 = vlSelfRef.carrierGen__DOT__muls_6__DOT__br1;
    vlSelfRef.carrierGen__DOT__muls_6__DOT__mcr4 = vlSelfRef.carrierGen__DOT__muls_6__DOT__m3;
    vlSelfRef.carrierGen__DOT__muls_6__DOT__mci4 = vlSelfRef.carrierGen__DOT__muls_6__DOT__m3;
    vlSelfRef.carrierGen__DOT__muls_6__DOT__bi2 = vlSelfRef.carrierGen__DOT__muls_6__DOT__bi1;
    vlSelfRef.carrierGen__DOT__muls_6__DOT__ai3 = vlSelfRef.carrierGen__DOT__muls_6__DOT__ai2;
    vlSelfRef.carrierGen__DOT__muls_6__DOT__ar3 = vlSelfRef.carrierGen__DOT__muls_6__DOT__ar2;
    vlSelfRef.carrierGen__DOT__muls_6__DOT__io_cmd_valid_delay_6 
        = vlSelfRef.carrierGen__DOT__muls_6__DOT__io_cmd_valid_delay_5;
    vlSelfRef.carrierGen__DOT__muls_6__DOT___zz_sre5_1 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_6__DOT__pre4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_6__DOT__pre4);
    vlSelfRef.carrierGen__DOT__muls_6__DOT___zz_sim5_1 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_6__DOT__pim4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_6__DOT__pim4);
    vlSelfRef.carrierGen__DOT__muls_6__DOT___zz_reN 
        = (0x000fffffU & (IData)((vlSelfRef.carrierGen__DOT__muls_6__DOT__sre5 
                                  >> 0x0fU)));
    vlSelfRef.carrierGen__DOT__muls_6__DOT___zz_imN 
        = (0x000fffffU & (IData)((vlSelfRef.carrierGen__DOT__muls_6__DOT__sim5 
                                  >> 0x0fU)));
    __VdfgRegularize_h6e95ff9d_0_333 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.carrierGen__DOT__muls_6__DOT__br2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.carrierGen__DOT__muls_6__DOT__br2));
    vlSelfRef.carrierGen__DOT__muls_6__DOT__br1 = vlSelfRef.carrierGen__DOT__muls_6__DOT__br0;
    vlSelfRef.carrierGen__DOT__muls_6__DOT___zz_sre5_2 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_6__DOT__mcr4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_6__DOT__mcr4);
    vlSelfRef.carrierGen__DOT__muls_6__DOT___zz_sim5_2 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_6__DOT__mci4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_6__DOT__mci4);
    vlSelfRef.carrierGen__DOT__muls_6__DOT__m3 = vlSelfRef.carrierGen__DOT__muls_6__DOT__m2;
    __VdfgRegularize_h6e95ff9d_0_334 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.carrierGen__DOT__muls_6__DOT__bi2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.carrierGen__DOT__muls_6__DOT__bi2));
    vlSelfRef.carrierGen__DOT__muls_6__DOT__bi1 = vlSelfRef.carrierGen__DOT__muls_6__DOT__bi0;
    vlSelfRef.carrierGen__DOT__muls_6__DOT__mulPim 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.carrierGen__DOT__muls_6__DOT__sb3)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.carrierGen__DOT__muls_6__DOT__ai3)))));
    vlSelfRef.carrierGen__DOT__muls_6__DOT__ai2 = vlSelfRef.carrierGen__DOT__muls_6__DOT__ai1;
    vlSelfRef.carrierGen__DOT__muls_6__DOT__mulPre 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.carrierGen__DOT__muls_6__DOT__db3)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.carrierGen__DOT__muls_6__DOT__ar3)))));
    vlSelfRef.carrierGen__DOT__muls_6__DOT__ar2 = vlSelfRef.carrierGen__DOT__muls_6__DOT__ar1;
    vlSelfRef.carrierGen__DOT__muls_6__DOT__io_rsp_valid 
        = vlSelfRef.carrierGen__DOT__muls_6__DOT__io_cmd_valid_delay_6;
    vlSelfRef.carrierGen__DOT__muls_6__DOT__io_cmd_valid_delay_5 
        = vlSelfRef.carrierGen__DOT__muls_6__DOT__io_cmd_valid_delay_4;
    vlSelfRef.carrierGen__DOT__muls_6__DOT__reN = (0x0000ffffU 
                                                   & vlSelfRef.carrierGen__DOT__muls_6__DOT___zz_reN);
    vlSelfRef.carrierGen__DOT__muls_6__DOT__imN = (0x0000ffffU 
                                                   & vlSelfRef.carrierGen__DOT__muls_6__DOT___zz_imN);
    vlSelfRef.carrierGen__DOT__muls_6__DOT___zz_db3 
        = __VdfgRegularize_h6e95ff9d_0_333;
    vlSelfRef.carrierGen__DOT__muls_6__DOT___zz_sb3 
        = __VdfgRegularize_h6e95ff9d_0_333;
    vlSelfRef.carrierGen__DOT__muls_6__DOT___zz_sre5 
        = (0x00000007ffffffffULL & (vlSelfRef.carrierGen__DOT__muls_6__DOT___zz_sre5_1 
                                    + vlSelfRef.carrierGen__DOT__muls_6__DOT___zz_sre5_2));
    vlSelfRef.carrierGen__DOT__muls_6__DOT___zz_sim5 
        = (0x00000007ffffffffULL & (vlSelfRef.carrierGen__DOT__muls_6__DOT___zz_sim5_1 
                                    + vlSelfRef.carrierGen__DOT__muls_6__DOT___zz_sim5_2));
    vlSelfRef.carrierGen__DOT__muls_6__DOT___zz_db3_1 
        = __VdfgRegularize_h6e95ff9d_0_334;
    vlSelfRef.carrierGen__DOT__muls_6__DOT___zz_sb3_1 
        = __VdfgRegularize_h6e95ff9d_0_334;
    vlSelfRef.carrierGen__DOT__muls_6_io_rsp_valid 
        = vlSelfRef.carrierGen__DOT__muls_6__DOT__io_rsp_valid;
    vlSelfRef.carrierGen__DOT__muls_6__DOT__io_rsp_payload_re 
        = vlSelfRef.carrierGen__DOT__muls_6__DOT__reN;
    vlSelfRef.carrierGen__DOT__muls_6__DOT__io_rsp_payload_im 
        = vlSelfRef.carrierGen__DOT__muls_6__DOT__imN;
    vlSelfRef.carrierGen__DOT__muls_6__DOT__br0 = vlSelfRef.carrierGen__DOT__muls_6__DOT__io_cmd_payload_b_re;
    vlSelfRef.carrierGen__DOT__muls_6__DOT__m2 = vlSelfRef.carrierGen__DOT__muls_6__DOT__mulM;
    vlSelfRef.carrierGen__DOT__muls_6__DOT__bi0 = vlSelfRef.carrierGen__DOT__muls_6__DOT__io_cmd_payload_b_im;
    vlSelfRef.carrierGen__DOT__muls_6__DOT__ai1 = vlSelfRef.carrierGen__DOT__muls_6__DOT__ai0;
    vlSelfRef.carrierGen__DOT__muls_6__DOT__ar1 = vlSelfRef.carrierGen__DOT__muls_6__DOT__ar0;
    vlSelfRef.carrierGen__DOT__muls_6__DOT__io_cmd_valid_delay_4 
        = vlSelfRef.carrierGen__DOT__muls_6__DOT__io_cmd_valid_delay_3;
    vlSelfRef.carrierGen__DOT__muls_6_io_rsp_payload_re 
        = vlSelfRef.carrierGen__DOT__muls_6__DOT__io_rsp_payload_re;
    vlSelfRef.carrierGen__DOT__muls_6_io_rsp_payload_im 
        = vlSelfRef.carrierGen__DOT__muls_6__DOT__io_rsp_payload_im;
    vlSelfRef.carrierGen__DOT__muls_6__DOT__mulM = 
        (0x00000001ffffffffULL & VL_MULS_QQQ(33, (0x00000001ffffffffULL 
                                                  & VL_EXTENDS_QI(33,17, vlSelfRef.carrierGen__DOT__muls_6__DOT__da1)), 
                                             (0x00000001ffffffffULL 
                                              & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.carrierGen__DOT__muls_6__DOT__bi1)))));
    vlSelfRef.carrierGen__DOT__io_carrier_6_re = vlSelfRef.carrierGen__DOT__muls_6_io_rsp_payload_re;
    vlSelfRef.carrierGen__DOT__io_carrier_6_im = vlSelfRef.carrierGen__DOT__muls_6_io_rsp_payload_im;
    vlSelfRef.carrierGen__DOT__muls_6__DOT__ai0 = vlSelfRef.carrierGen__DOT__muls_6__DOT__io_cmd_payload_a_im;
    vlSelfRef.carrierGen__DOT__muls_6__DOT__ar0 = vlSelfRef.carrierGen__DOT__muls_6__DOT__io_cmd_payload_a_re;
    vlSelfRef.carrierGen__DOT__muls_6__DOT__io_cmd_valid_delay_3 
        = vlSelfRef.carrierGen__DOT__muls_6__DOT__io_cmd_valid_delay_2;
    vlSelfRef.carrierGen_io_carrier_6_re = vlSelfRef.carrierGen__DOT__io_carrier_6_re;
    vlSelfRef.carrierGen_io_carrier_6_im = vlSelfRef.carrierGen__DOT__io_carrier_6_im;
    vlSelfRef.carrierGen__DOT__muls_6__DOT___zz_da1_1 
        = ((0x00010000U & ((IData)(vlSelfRef.carrierGen__DOT__muls_6__DOT__ai0) 
                           << 1U)) | (IData)(vlSelfRef.carrierGen__DOT__muls_6__DOT__ai0));
    vlSelfRef.carrierGen__DOT__muls_6__DOT___zz_da1 
        = ((0x00010000U & ((IData)(vlSelfRef.carrierGen__DOT__muls_6__DOT__ar0) 
                           << 1U)) | (IData)(vlSelfRef.carrierGen__DOT__muls_6__DOT__ar0));
    vlSelfRef.carrierGen__DOT__muls_6__DOT__io_cmd_valid_delay_2 
        = vlSelfRef.carrierGen__DOT__muls_6__DOT__io_cmd_valid_delay_1;
    vlSelfRef.carrierGen__DOT__muls_6__DOT__io_cmd_valid_delay_1 = 1U;
}

void Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__19(Vtop_PulseGenerator* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__19\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_335;
    __VdfgRegularize_h6e95ff9d_0_335 = 0;
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_336;
    __VdfgRegularize_h6e95ff9d_0_336 = 0;
    // Body
    vlSelfRef.carrierGen__DOT__muls_7__DOT__db3 = (0x0001ffffU 
                                                   & (vlSelfRef.carrierGen__DOT__muls_7__DOT___zz_db3 
                                                      - vlSelfRef.carrierGen__DOT__muls_7__DOT___zz_db3_1));
    vlSelfRef.carrierGen__DOT__muls_7__DOT__sb3 = (0x0001ffffU 
                                                   & (vlSelfRef.carrierGen__DOT__muls_7__DOT___zz_sb3 
                                                      + vlSelfRef.carrierGen__DOT__muls_7__DOT___zz_sb3_1));
    vlSelfRef.carrierGen__DOT__muls_7__DOT__da1 = (0x0001ffffU 
                                                   & (vlSelfRef.carrierGen__DOT__muls_7__DOT___zz_da1 
                                                      - vlSelfRef.carrierGen__DOT__muls_7__DOT___zz_da1_1));
    vlSelfRef.carrierGen__DOT__muls_7__DOT__pre4 = vlSelfRef.carrierGen__DOT__muls_7__DOT__mulPre;
    vlSelfRef.carrierGen__DOT__muls_7__DOT__pim4 = vlSelfRef.carrierGen__DOT__muls_7__DOT__mulPim;
    vlSelfRef.carrierGen__DOT__muls_7__DOT__sre5 = 
        (0x00000007ffffffffULL & (0x0000000000004000ULL 
                                  + vlSelfRef.carrierGen__DOT__muls_7__DOT___zz_sre5));
    vlSelfRef.carrierGen__DOT__muls_7__DOT__sim5 = 
        (0x00000007ffffffffULL & (0x0000000000004000ULL 
                                  + vlSelfRef.carrierGen__DOT__muls_7__DOT___zz_sim5));
    vlSelfRef.carrierGen__DOT__muls_7__DOT__br2 = vlSelfRef.carrierGen__DOT__muls_7__DOT__br1;
    vlSelfRef.carrierGen__DOT__muls_7__DOT__mcr4 = vlSelfRef.carrierGen__DOT__muls_7__DOT__m3;
    vlSelfRef.carrierGen__DOT__muls_7__DOT__mci4 = vlSelfRef.carrierGen__DOT__muls_7__DOT__m3;
    vlSelfRef.carrierGen__DOT__muls_7__DOT__bi2 = vlSelfRef.carrierGen__DOT__muls_7__DOT__bi1;
    vlSelfRef.carrierGen__DOT__muls_7__DOT__ai3 = vlSelfRef.carrierGen__DOT__muls_7__DOT__ai2;
    vlSelfRef.carrierGen__DOT__muls_7__DOT__ar3 = vlSelfRef.carrierGen__DOT__muls_7__DOT__ar2;
    vlSelfRef.carrierGen__DOT__muls_7__DOT__io_cmd_valid_delay_6 
        = vlSelfRef.carrierGen__DOT__muls_7__DOT__io_cmd_valid_delay_5;
    vlSelfRef.carrierGen__DOT__muls_7__DOT___zz_sre5_1 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_7__DOT__pre4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_7__DOT__pre4);
    vlSelfRef.carrierGen__DOT__muls_7__DOT___zz_sim5_1 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_7__DOT__pim4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_7__DOT__pim4);
    vlSelfRef.carrierGen__DOT__muls_7__DOT___zz_reN 
        = (0x000fffffU & (IData)((vlSelfRef.carrierGen__DOT__muls_7__DOT__sre5 
                                  >> 0x0fU)));
    vlSelfRef.carrierGen__DOT__muls_7__DOT___zz_imN 
        = (0x000fffffU & (IData)((vlSelfRef.carrierGen__DOT__muls_7__DOT__sim5 
                                  >> 0x0fU)));
    __VdfgRegularize_h6e95ff9d_0_335 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.carrierGen__DOT__muls_7__DOT__br2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.carrierGen__DOT__muls_7__DOT__br2));
    vlSelfRef.carrierGen__DOT__muls_7__DOT__br1 = vlSelfRef.carrierGen__DOT__muls_7__DOT__br0;
    vlSelfRef.carrierGen__DOT__muls_7__DOT___zz_sre5_2 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_7__DOT__mcr4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_7__DOT__mcr4);
    vlSelfRef.carrierGen__DOT__muls_7__DOT___zz_sim5_2 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_7__DOT__mci4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_7__DOT__mci4);
    vlSelfRef.carrierGen__DOT__muls_7__DOT__m3 = vlSelfRef.carrierGen__DOT__muls_7__DOT__m2;
    __VdfgRegularize_h6e95ff9d_0_336 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.carrierGen__DOT__muls_7__DOT__bi2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.carrierGen__DOT__muls_7__DOT__bi2));
    vlSelfRef.carrierGen__DOT__muls_7__DOT__bi1 = vlSelfRef.carrierGen__DOT__muls_7__DOT__bi0;
    vlSelfRef.carrierGen__DOT__muls_7__DOT__mulPim 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.carrierGen__DOT__muls_7__DOT__sb3)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.carrierGen__DOT__muls_7__DOT__ai3)))));
    vlSelfRef.carrierGen__DOT__muls_7__DOT__ai2 = vlSelfRef.carrierGen__DOT__muls_7__DOT__ai1;
    vlSelfRef.carrierGen__DOT__muls_7__DOT__mulPre 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.carrierGen__DOT__muls_7__DOT__db3)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.carrierGen__DOT__muls_7__DOT__ar3)))));
    vlSelfRef.carrierGen__DOT__muls_7__DOT__ar2 = vlSelfRef.carrierGen__DOT__muls_7__DOT__ar1;
    vlSelfRef.carrierGen__DOT__muls_7__DOT__io_rsp_valid 
        = vlSelfRef.carrierGen__DOT__muls_7__DOT__io_cmd_valid_delay_6;
    vlSelfRef.carrierGen__DOT__muls_7__DOT__io_cmd_valid_delay_5 
        = vlSelfRef.carrierGen__DOT__muls_7__DOT__io_cmd_valid_delay_4;
    vlSelfRef.carrierGen__DOT__muls_7__DOT__reN = (0x0000ffffU 
                                                   & vlSelfRef.carrierGen__DOT__muls_7__DOT___zz_reN);
    vlSelfRef.carrierGen__DOT__muls_7__DOT__imN = (0x0000ffffU 
                                                   & vlSelfRef.carrierGen__DOT__muls_7__DOT___zz_imN);
    vlSelfRef.carrierGen__DOT__muls_7__DOT___zz_db3 
        = __VdfgRegularize_h6e95ff9d_0_335;
    vlSelfRef.carrierGen__DOT__muls_7__DOT___zz_sb3 
        = __VdfgRegularize_h6e95ff9d_0_335;
    vlSelfRef.carrierGen__DOT__muls_7__DOT___zz_sre5 
        = (0x00000007ffffffffULL & (vlSelfRef.carrierGen__DOT__muls_7__DOT___zz_sre5_1 
                                    + vlSelfRef.carrierGen__DOT__muls_7__DOT___zz_sre5_2));
    vlSelfRef.carrierGen__DOT__muls_7__DOT___zz_sim5 
        = (0x00000007ffffffffULL & (vlSelfRef.carrierGen__DOT__muls_7__DOT___zz_sim5_1 
                                    + vlSelfRef.carrierGen__DOT__muls_7__DOT___zz_sim5_2));
    vlSelfRef.carrierGen__DOT__muls_7__DOT___zz_db3_1 
        = __VdfgRegularize_h6e95ff9d_0_336;
    vlSelfRef.carrierGen__DOT__muls_7__DOT___zz_sb3_1 
        = __VdfgRegularize_h6e95ff9d_0_336;
    vlSelfRef.carrierGen__DOT__muls_7_io_rsp_valid 
        = vlSelfRef.carrierGen__DOT__muls_7__DOT__io_rsp_valid;
    vlSelfRef.carrierGen__DOT__muls_7__DOT__io_rsp_payload_re 
        = vlSelfRef.carrierGen__DOT__muls_7__DOT__reN;
    vlSelfRef.carrierGen__DOT__muls_7__DOT__io_rsp_payload_im 
        = vlSelfRef.carrierGen__DOT__muls_7__DOT__imN;
    vlSelfRef.carrierGen__DOT__muls_7__DOT__br0 = vlSelfRef.carrierGen__DOT__muls_7__DOT__io_cmd_payload_b_re;
    vlSelfRef.carrierGen__DOT__muls_7__DOT__m2 = vlSelfRef.carrierGen__DOT__muls_7__DOT__mulM;
    vlSelfRef.carrierGen__DOT__muls_7__DOT__bi0 = vlSelfRef.carrierGen__DOT__muls_7__DOT__io_cmd_payload_b_im;
    vlSelfRef.carrierGen__DOT__muls_7__DOT__ai1 = vlSelfRef.carrierGen__DOT__muls_7__DOT__ai0;
    vlSelfRef.carrierGen__DOT__muls_7__DOT__ar1 = vlSelfRef.carrierGen__DOT__muls_7__DOT__ar0;
    vlSelfRef.carrierGen__DOT__muls_7__DOT__io_cmd_valid_delay_4 
        = vlSelfRef.carrierGen__DOT__muls_7__DOT__io_cmd_valid_delay_3;
    vlSelfRef.carrierGen__DOT__muls_7_io_rsp_payload_re 
        = vlSelfRef.carrierGen__DOT__muls_7__DOT__io_rsp_payload_re;
    vlSelfRef.carrierGen__DOT__muls_7_io_rsp_payload_im 
        = vlSelfRef.carrierGen__DOT__muls_7__DOT__io_rsp_payload_im;
    vlSelfRef.carrierGen__DOT__muls_7__DOT__mulM = 
        (0x00000001ffffffffULL & VL_MULS_QQQ(33, (0x00000001ffffffffULL 
                                                  & VL_EXTENDS_QI(33,17, vlSelfRef.carrierGen__DOT__muls_7__DOT__da1)), 
                                             (0x00000001ffffffffULL 
                                              & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.carrierGen__DOT__muls_7__DOT__bi1)))));
    vlSelfRef.carrierGen__DOT__io_carrier_7_re = vlSelfRef.carrierGen__DOT__muls_7_io_rsp_payload_re;
    vlSelfRef.carrierGen__DOT__io_carrier_7_im = vlSelfRef.carrierGen__DOT__muls_7_io_rsp_payload_im;
    vlSelfRef.carrierGen__DOT__muls_7__DOT__ai0 = vlSelfRef.carrierGen__DOT__muls_7__DOT__io_cmd_payload_a_im;
    vlSelfRef.carrierGen__DOT__muls_7__DOT__ar0 = vlSelfRef.carrierGen__DOT__muls_7__DOT__io_cmd_payload_a_re;
    vlSelfRef.carrierGen__DOT__muls_7__DOT__io_cmd_valid_delay_3 
        = vlSelfRef.carrierGen__DOT__muls_7__DOT__io_cmd_valid_delay_2;
    vlSelfRef.carrierGen_io_carrier_7_re = vlSelfRef.carrierGen__DOT__io_carrier_7_re;
    vlSelfRef.carrierGen_io_carrier_7_im = vlSelfRef.carrierGen__DOT__io_carrier_7_im;
    vlSelfRef.carrierGen__DOT__muls_7__DOT___zz_da1_1 
        = ((0x00010000U & ((IData)(vlSelfRef.carrierGen__DOT__muls_7__DOT__ai0) 
                           << 1U)) | (IData)(vlSelfRef.carrierGen__DOT__muls_7__DOT__ai0));
    vlSelfRef.carrierGen__DOT__muls_7__DOT___zz_da1 
        = ((0x00010000U & ((IData)(vlSelfRef.carrierGen__DOT__muls_7__DOT__ar0) 
                           << 1U)) | (IData)(vlSelfRef.carrierGen__DOT__muls_7__DOT__ar0));
    vlSelfRef.carrierGen__DOT__muls_7__DOT__io_cmd_valid_delay_2 
        = vlSelfRef.carrierGen__DOT__muls_7__DOT__io_cmd_valid_delay_1;
    vlSelfRef.carrierGen__DOT__muls_7__DOT__io_cmd_valid_delay_1 = 1U;
}

void Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__20(Vtop_PulseGenerator* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__20\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_337;
    __VdfgRegularize_h6e95ff9d_0_337 = 0;
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_338;
    __VdfgRegularize_h6e95ff9d_0_338 = 0;
    // Body
    vlSelfRef.carrierGen__DOT__muls_8__DOT__db3 = (0x0001ffffU 
                                                   & (vlSelfRef.carrierGen__DOT__muls_8__DOT___zz_db3 
                                                      - vlSelfRef.carrierGen__DOT__muls_8__DOT___zz_db3_1));
    vlSelfRef.carrierGen__DOT__muls_8__DOT__sb3 = (0x0001ffffU 
                                                   & (vlSelfRef.carrierGen__DOT__muls_8__DOT___zz_sb3 
                                                      + vlSelfRef.carrierGen__DOT__muls_8__DOT___zz_sb3_1));
    vlSelfRef.carrierGen__DOT__muls_8__DOT__da1 = (0x0001ffffU 
                                                   & (vlSelfRef.carrierGen__DOT__muls_8__DOT___zz_da1 
                                                      - vlSelfRef.carrierGen__DOT__muls_8__DOT___zz_da1_1));
    vlSelfRef.carrierGen__DOT__muls_8__DOT__pre4 = vlSelfRef.carrierGen__DOT__muls_8__DOT__mulPre;
    vlSelfRef.carrierGen__DOT__muls_8__DOT__pim4 = vlSelfRef.carrierGen__DOT__muls_8__DOT__mulPim;
    vlSelfRef.carrierGen__DOT__muls_8__DOT__sre5 = 
        (0x00000007ffffffffULL & (0x0000000000004000ULL 
                                  + vlSelfRef.carrierGen__DOT__muls_8__DOT___zz_sre5));
    vlSelfRef.carrierGen__DOT__muls_8__DOT__sim5 = 
        (0x00000007ffffffffULL & (0x0000000000004000ULL 
                                  + vlSelfRef.carrierGen__DOT__muls_8__DOT___zz_sim5));
    vlSelfRef.carrierGen__DOT__muls_8__DOT__br2 = vlSelfRef.carrierGen__DOT__muls_8__DOT__br1;
    vlSelfRef.carrierGen__DOT__muls_8__DOT__mcr4 = vlSelfRef.carrierGen__DOT__muls_8__DOT__m3;
    vlSelfRef.carrierGen__DOT__muls_8__DOT__mci4 = vlSelfRef.carrierGen__DOT__muls_8__DOT__m3;
    vlSelfRef.carrierGen__DOT__muls_8__DOT__bi2 = vlSelfRef.carrierGen__DOT__muls_8__DOT__bi1;
    vlSelfRef.carrierGen__DOT__muls_8__DOT__ai3 = vlSelfRef.carrierGen__DOT__muls_8__DOT__ai2;
    vlSelfRef.carrierGen__DOT__muls_8__DOT__ar3 = vlSelfRef.carrierGen__DOT__muls_8__DOT__ar2;
    vlSelfRef.carrierGen__DOT__muls_8__DOT__io_cmd_valid_delay_6 
        = vlSelfRef.carrierGen__DOT__muls_8__DOT__io_cmd_valid_delay_5;
    vlSelfRef.carrierGen__DOT__muls_8__DOT___zz_sre5_1 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_8__DOT__pre4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_8__DOT__pre4);
    vlSelfRef.carrierGen__DOT__muls_8__DOT___zz_sim5_1 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_8__DOT__pim4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_8__DOT__pim4);
    vlSelfRef.carrierGen__DOT__muls_8__DOT___zz_reN 
        = (0x000fffffU & (IData)((vlSelfRef.carrierGen__DOT__muls_8__DOT__sre5 
                                  >> 0x0fU)));
    vlSelfRef.carrierGen__DOT__muls_8__DOT___zz_imN 
        = (0x000fffffU & (IData)((vlSelfRef.carrierGen__DOT__muls_8__DOT__sim5 
                                  >> 0x0fU)));
    __VdfgRegularize_h6e95ff9d_0_337 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.carrierGen__DOT__muls_8__DOT__br2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.carrierGen__DOT__muls_8__DOT__br2));
    vlSelfRef.carrierGen__DOT__muls_8__DOT__br1 = vlSelfRef.carrierGen__DOT__muls_8__DOT__br0;
    vlSelfRef.carrierGen__DOT__muls_8__DOT___zz_sre5_2 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_8__DOT__mcr4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_8__DOT__mcr4);
    vlSelfRef.carrierGen__DOT__muls_8__DOT___zz_sim5_2 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_8__DOT__mci4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_8__DOT__mci4);
    vlSelfRef.carrierGen__DOT__muls_8__DOT__m3 = vlSelfRef.carrierGen__DOT__muls_8__DOT__m2;
    __VdfgRegularize_h6e95ff9d_0_338 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.carrierGen__DOT__muls_8__DOT__bi2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.carrierGen__DOT__muls_8__DOT__bi2));
    vlSelfRef.carrierGen__DOT__muls_8__DOT__bi1 = vlSelfRef.carrierGen__DOT__muls_8__DOT__bi0;
    vlSelfRef.carrierGen__DOT__muls_8__DOT__mulPim 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.carrierGen__DOT__muls_8__DOT__sb3)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.carrierGen__DOT__muls_8__DOT__ai3)))));
    vlSelfRef.carrierGen__DOT__muls_8__DOT__ai2 = vlSelfRef.carrierGen__DOT__muls_8__DOT__ai1;
    vlSelfRef.carrierGen__DOT__muls_8__DOT__mulPre 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.carrierGen__DOT__muls_8__DOT__db3)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.carrierGen__DOT__muls_8__DOT__ar3)))));
    vlSelfRef.carrierGen__DOT__muls_8__DOT__ar2 = vlSelfRef.carrierGen__DOT__muls_8__DOT__ar1;
    vlSelfRef.carrierGen__DOT__muls_8__DOT__io_rsp_valid 
        = vlSelfRef.carrierGen__DOT__muls_8__DOT__io_cmd_valid_delay_6;
    vlSelfRef.carrierGen__DOT__muls_8__DOT__io_cmd_valid_delay_5 
        = vlSelfRef.carrierGen__DOT__muls_8__DOT__io_cmd_valid_delay_4;
    vlSelfRef.carrierGen__DOT__muls_8__DOT__reN = (0x0000ffffU 
                                                   & vlSelfRef.carrierGen__DOT__muls_8__DOT___zz_reN);
    vlSelfRef.carrierGen__DOT__muls_8__DOT__imN = (0x0000ffffU 
                                                   & vlSelfRef.carrierGen__DOT__muls_8__DOT___zz_imN);
    vlSelfRef.carrierGen__DOT__muls_8__DOT___zz_db3 
        = __VdfgRegularize_h6e95ff9d_0_337;
    vlSelfRef.carrierGen__DOT__muls_8__DOT___zz_sb3 
        = __VdfgRegularize_h6e95ff9d_0_337;
    vlSelfRef.carrierGen__DOT__muls_8__DOT___zz_sre5 
        = (0x00000007ffffffffULL & (vlSelfRef.carrierGen__DOT__muls_8__DOT___zz_sre5_1 
                                    + vlSelfRef.carrierGen__DOT__muls_8__DOT___zz_sre5_2));
    vlSelfRef.carrierGen__DOT__muls_8__DOT___zz_sim5 
        = (0x00000007ffffffffULL & (vlSelfRef.carrierGen__DOT__muls_8__DOT___zz_sim5_1 
                                    + vlSelfRef.carrierGen__DOT__muls_8__DOT___zz_sim5_2));
    vlSelfRef.carrierGen__DOT__muls_8__DOT___zz_db3_1 
        = __VdfgRegularize_h6e95ff9d_0_338;
    vlSelfRef.carrierGen__DOT__muls_8__DOT___zz_sb3_1 
        = __VdfgRegularize_h6e95ff9d_0_338;
    vlSelfRef.carrierGen__DOT__muls_8_io_rsp_valid 
        = vlSelfRef.carrierGen__DOT__muls_8__DOT__io_rsp_valid;
    vlSelfRef.carrierGen__DOT__muls_8__DOT__io_rsp_payload_re 
        = vlSelfRef.carrierGen__DOT__muls_8__DOT__reN;
    vlSelfRef.carrierGen__DOT__muls_8__DOT__io_rsp_payload_im 
        = vlSelfRef.carrierGen__DOT__muls_8__DOT__imN;
    vlSelfRef.carrierGen__DOT__muls_8__DOT__br0 = vlSelfRef.carrierGen__DOT__muls_8__DOT__io_cmd_payload_b_re;
    vlSelfRef.carrierGen__DOT__muls_8__DOT__m2 = vlSelfRef.carrierGen__DOT__muls_8__DOT__mulM;
    vlSelfRef.carrierGen__DOT__muls_8__DOT__bi0 = vlSelfRef.carrierGen__DOT__muls_8__DOT__io_cmd_payload_b_im;
    vlSelfRef.carrierGen__DOT__muls_8__DOT__ai1 = vlSelfRef.carrierGen__DOT__muls_8__DOT__ai0;
    vlSelfRef.carrierGen__DOT__muls_8__DOT__ar1 = vlSelfRef.carrierGen__DOT__muls_8__DOT__ar0;
    vlSelfRef.carrierGen__DOT__muls_8__DOT__io_cmd_valid_delay_4 
        = vlSelfRef.carrierGen__DOT__muls_8__DOT__io_cmd_valid_delay_3;
    vlSelfRef.carrierGen__DOT__muls_8_io_rsp_payload_re 
        = vlSelfRef.carrierGen__DOT__muls_8__DOT__io_rsp_payload_re;
    vlSelfRef.carrierGen__DOT__muls_8_io_rsp_payload_im 
        = vlSelfRef.carrierGen__DOT__muls_8__DOT__io_rsp_payload_im;
    vlSelfRef.carrierGen__DOT__muls_8__DOT__mulM = 
        (0x00000001ffffffffULL & VL_MULS_QQQ(33, (0x00000001ffffffffULL 
                                                  & VL_EXTENDS_QI(33,17, vlSelfRef.carrierGen__DOT__muls_8__DOT__da1)), 
                                             (0x00000001ffffffffULL 
                                              & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.carrierGen__DOT__muls_8__DOT__bi1)))));
    vlSelfRef.carrierGen__DOT__io_carrier_8_re = vlSelfRef.carrierGen__DOT__muls_8_io_rsp_payload_re;
    vlSelfRef.carrierGen__DOT__io_carrier_8_im = vlSelfRef.carrierGen__DOT__muls_8_io_rsp_payload_im;
    vlSelfRef.carrierGen__DOT__muls_8__DOT__ai0 = vlSelfRef.carrierGen__DOT__muls_8__DOT__io_cmd_payload_a_im;
    vlSelfRef.carrierGen__DOT__muls_8__DOT__ar0 = vlSelfRef.carrierGen__DOT__muls_8__DOT__io_cmd_payload_a_re;
    vlSelfRef.carrierGen__DOT__muls_8__DOT__io_cmd_valid_delay_3 
        = vlSelfRef.carrierGen__DOT__muls_8__DOT__io_cmd_valid_delay_2;
    vlSelfRef.carrierGen_io_carrier_8_re = vlSelfRef.carrierGen__DOT__io_carrier_8_re;
    vlSelfRef.carrierGen_io_carrier_8_im = vlSelfRef.carrierGen__DOT__io_carrier_8_im;
    vlSelfRef.carrierGen__DOT__muls_8__DOT___zz_da1_1 
        = ((0x00010000U & ((IData)(vlSelfRef.carrierGen__DOT__muls_8__DOT__ai0) 
                           << 1U)) | (IData)(vlSelfRef.carrierGen__DOT__muls_8__DOT__ai0));
    vlSelfRef.carrierGen__DOT__muls_8__DOT___zz_da1 
        = ((0x00010000U & ((IData)(vlSelfRef.carrierGen__DOT__muls_8__DOT__ar0) 
                           << 1U)) | (IData)(vlSelfRef.carrierGen__DOT__muls_8__DOT__ar0));
    vlSelfRef.carrierGen__DOT__muls_8__DOT__io_cmd_valid_delay_2 
        = vlSelfRef.carrierGen__DOT__muls_8__DOT__io_cmd_valid_delay_1;
    vlSelfRef.carrierGen__DOT__muls_8__DOT__io_cmd_valid_delay_1 = 1U;
}

void Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__21(Vtop_PulseGenerator* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__21\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_339;
    __VdfgRegularize_h6e95ff9d_0_339 = 0;
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_340;
    __VdfgRegularize_h6e95ff9d_0_340 = 0;
    // Body
    vlSelfRef.carrierGen__DOT__muls_9__DOT__db3 = (0x0001ffffU 
                                                   & (vlSelfRef.carrierGen__DOT__muls_9__DOT___zz_db3 
                                                      - vlSelfRef.carrierGen__DOT__muls_9__DOT___zz_db3_1));
    vlSelfRef.carrierGen__DOT__muls_9__DOT__sb3 = (0x0001ffffU 
                                                   & (vlSelfRef.carrierGen__DOT__muls_9__DOT___zz_sb3 
                                                      + vlSelfRef.carrierGen__DOT__muls_9__DOT___zz_sb3_1));
    vlSelfRef.carrierGen__DOT__muls_9__DOT__da1 = (0x0001ffffU 
                                                   & (vlSelfRef.carrierGen__DOT__muls_9__DOT___zz_da1 
                                                      - vlSelfRef.carrierGen__DOT__muls_9__DOT___zz_da1_1));
    vlSelfRef.carrierGen__DOT__muls_9__DOT__pre4 = vlSelfRef.carrierGen__DOT__muls_9__DOT__mulPre;
    vlSelfRef.carrierGen__DOT__muls_9__DOT__pim4 = vlSelfRef.carrierGen__DOT__muls_9__DOT__mulPim;
    vlSelfRef.carrierGen__DOT__muls_9__DOT__sre5 = 
        (0x00000007ffffffffULL & (0x0000000000004000ULL 
                                  + vlSelfRef.carrierGen__DOT__muls_9__DOT___zz_sre5));
    vlSelfRef.carrierGen__DOT__muls_9__DOT__sim5 = 
        (0x00000007ffffffffULL & (0x0000000000004000ULL 
                                  + vlSelfRef.carrierGen__DOT__muls_9__DOT___zz_sim5));
    vlSelfRef.carrierGen__DOT__muls_9__DOT__br2 = vlSelfRef.carrierGen__DOT__muls_9__DOT__br1;
    vlSelfRef.carrierGen__DOT__muls_9__DOT__mcr4 = vlSelfRef.carrierGen__DOT__muls_9__DOT__m3;
    vlSelfRef.carrierGen__DOT__muls_9__DOT__mci4 = vlSelfRef.carrierGen__DOT__muls_9__DOT__m3;
    vlSelfRef.carrierGen__DOT__muls_9__DOT__bi2 = vlSelfRef.carrierGen__DOT__muls_9__DOT__bi1;
    vlSelfRef.carrierGen__DOT__muls_9__DOT__ai3 = vlSelfRef.carrierGen__DOT__muls_9__DOT__ai2;
    vlSelfRef.carrierGen__DOT__muls_9__DOT__ar3 = vlSelfRef.carrierGen__DOT__muls_9__DOT__ar2;
    vlSelfRef.carrierGen__DOT__muls_9__DOT__io_cmd_valid_delay_6 
        = vlSelfRef.carrierGen__DOT__muls_9__DOT__io_cmd_valid_delay_5;
    vlSelfRef.carrierGen__DOT__muls_9__DOT___zz_sre5_1 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_9__DOT__pre4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_9__DOT__pre4);
    vlSelfRef.carrierGen__DOT__muls_9__DOT___zz_sim5_1 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_9__DOT__pim4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_9__DOT__pim4);
    vlSelfRef.carrierGen__DOT__muls_9__DOT___zz_reN 
        = (0x000fffffU & (IData)((vlSelfRef.carrierGen__DOT__muls_9__DOT__sre5 
                                  >> 0x0fU)));
    vlSelfRef.carrierGen__DOT__muls_9__DOT___zz_imN 
        = (0x000fffffU & (IData)((vlSelfRef.carrierGen__DOT__muls_9__DOT__sim5 
                                  >> 0x0fU)));
    __VdfgRegularize_h6e95ff9d_0_339 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.carrierGen__DOT__muls_9__DOT__br2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.carrierGen__DOT__muls_9__DOT__br2));
    vlSelfRef.carrierGen__DOT__muls_9__DOT__br1 = vlSelfRef.carrierGen__DOT__muls_9__DOT__br0;
    vlSelfRef.carrierGen__DOT__muls_9__DOT___zz_sre5_2 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_9__DOT__mcr4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_9__DOT__mcr4);
    vlSelfRef.carrierGen__DOT__muls_9__DOT___zz_sim5_2 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_9__DOT__mci4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_9__DOT__mci4);
    vlSelfRef.carrierGen__DOT__muls_9__DOT__m3 = vlSelfRef.carrierGen__DOT__muls_9__DOT__m2;
    __VdfgRegularize_h6e95ff9d_0_340 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.carrierGen__DOT__muls_9__DOT__bi2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.carrierGen__DOT__muls_9__DOT__bi2));
    vlSelfRef.carrierGen__DOT__muls_9__DOT__bi1 = vlSelfRef.carrierGen__DOT__muls_9__DOT__bi0;
    vlSelfRef.carrierGen__DOT__muls_9__DOT__mulPim 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.carrierGen__DOT__muls_9__DOT__sb3)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.carrierGen__DOT__muls_9__DOT__ai3)))));
    vlSelfRef.carrierGen__DOT__muls_9__DOT__ai2 = vlSelfRef.carrierGen__DOT__muls_9__DOT__ai1;
    vlSelfRef.carrierGen__DOT__muls_9__DOT__mulPre 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.carrierGen__DOT__muls_9__DOT__db3)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.carrierGen__DOT__muls_9__DOT__ar3)))));
    vlSelfRef.carrierGen__DOT__muls_9__DOT__ar2 = vlSelfRef.carrierGen__DOT__muls_9__DOT__ar1;
    vlSelfRef.carrierGen__DOT__muls_9__DOT__io_rsp_valid 
        = vlSelfRef.carrierGen__DOT__muls_9__DOT__io_cmd_valid_delay_6;
    vlSelfRef.carrierGen__DOT__muls_9__DOT__io_cmd_valid_delay_5 
        = vlSelfRef.carrierGen__DOT__muls_9__DOT__io_cmd_valid_delay_4;
    vlSelfRef.carrierGen__DOT__muls_9__DOT__reN = (0x0000ffffU 
                                                   & vlSelfRef.carrierGen__DOT__muls_9__DOT___zz_reN);
    vlSelfRef.carrierGen__DOT__muls_9__DOT__imN = (0x0000ffffU 
                                                   & vlSelfRef.carrierGen__DOT__muls_9__DOT___zz_imN);
    vlSelfRef.carrierGen__DOT__muls_9__DOT___zz_db3 
        = __VdfgRegularize_h6e95ff9d_0_339;
    vlSelfRef.carrierGen__DOT__muls_9__DOT___zz_sb3 
        = __VdfgRegularize_h6e95ff9d_0_339;
    vlSelfRef.carrierGen__DOT__muls_9__DOT___zz_sre5 
        = (0x00000007ffffffffULL & (vlSelfRef.carrierGen__DOT__muls_9__DOT___zz_sre5_1 
                                    + vlSelfRef.carrierGen__DOT__muls_9__DOT___zz_sre5_2));
    vlSelfRef.carrierGen__DOT__muls_9__DOT___zz_sim5 
        = (0x00000007ffffffffULL & (vlSelfRef.carrierGen__DOT__muls_9__DOT___zz_sim5_1 
                                    + vlSelfRef.carrierGen__DOT__muls_9__DOT___zz_sim5_2));
    vlSelfRef.carrierGen__DOT__muls_9__DOT___zz_db3_1 
        = __VdfgRegularize_h6e95ff9d_0_340;
    vlSelfRef.carrierGen__DOT__muls_9__DOT___zz_sb3_1 
        = __VdfgRegularize_h6e95ff9d_0_340;
    vlSelfRef.carrierGen__DOT__muls_9_io_rsp_valid 
        = vlSelfRef.carrierGen__DOT__muls_9__DOT__io_rsp_valid;
    vlSelfRef.carrierGen__DOT__muls_9__DOT__io_rsp_payload_re 
        = vlSelfRef.carrierGen__DOT__muls_9__DOT__reN;
    vlSelfRef.carrierGen__DOT__muls_9__DOT__io_rsp_payload_im 
        = vlSelfRef.carrierGen__DOT__muls_9__DOT__imN;
    vlSelfRef.carrierGen__DOT__muls_9__DOT__br0 = vlSelfRef.carrierGen__DOT__muls_9__DOT__io_cmd_payload_b_re;
    vlSelfRef.carrierGen__DOT__muls_9__DOT__m2 = vlSelfRef.carrierGen__DOT__muls_9__DOT__mulM;
    vlSelfRef.carrierGen__DOT__muls_9__DOT__bi0 = vlSelfRef.carrierGen__DOT__muls_9__DOT__io_cmd_payload_b_im;
    vlSelfRef.carrierGen__DOT__muls_9__DOT__ai1 = vlSelfRef.carrierGen__DOT__muls_9__DOT__ai0;
    vlSelfRef.carrierGen__DOT__muls_9__DOT__ar1 = vlSelfRef.carrierGen__DOT__muls_9__DOT__ar0;
    vlSelfRef.carrierGen__DOT__muls_9__DOT__io_cmd_valid_delay_4 
        = vlSelfRef.carrierGen__DOT__muls_9__DOT__io_cmd_valid_delay_3;
    vlSelfRef.carrierGen__DOT__muls_9_io_rsp_payload_re 
        = vlSelfRef.carrierGen__DOT__muls_9__DOT__io_rsp_payload_re;
    vlSelfRef.carrierGen__DOT__muls_9_io_rsp_payload_im 
        = vlSelfRef.carrierGen__DOT__muls_9__DOT__io_rsp_payload_im;
    vlSelfRef.carrierGen__DOT__muls_9__DOT__mulM = 
        (0x00000001ffffffffULL & VL_MULS_QQQ(33, (0x00000001ffffffffULL 
                                                  & VL_EXTENDS_QI(33,17, vlSelfRef.carrierGen__DOT__muls_9__DOT__da1)), 
                                             (0x00000001ffffffffULL 
                                              & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.carrierGen__DOT__muls_9__DOT__bi1)))));
    vlSelfRef.carrierGen__DOT__io_carrier_9_re = vlSelfRef.carrierGen__DOT__muls_9_io_rsp_payload_re;
    vlSelfRef.carrierGen__DOT__io_carrier_9_im = vlSelfRef.carrierGen__DOT__muls_9_io_rsp_payload_im;
    vlSelfRef.carrierGen__DOT__muls_9__DOT__ai0 = vlSelfRef.carrierGen__DOT__muls_9__DOT__io_cmd_payload_a_im;
    vlSelfRef.carrierGen__DOT__muls_9__DOT__ar0 = vlSelfRef.carrierGen__DOT__muls_9__DOT__io_cmd_payload_a_re;
    vlSelfRef.carrierGen__DOT__muls_9__DOT__io_cmd_valid_delay_3 
        = vlSelfRef.carrierGen__DOT__muls_9__DOT__io_cmd_valid_delay_2;
    vlSelfRef.carrierGen_io_carrier_9_re = vlSelfRef.carrierGen__DOT__io_carrier_9_re;
    vlSelfRef.carrierGen_io_carrier_9_im = vlSelfRef.carrierGen__DOT__io_carrier_9_im;
    vlSelfRef.carrierGen__DOT__muls_9__DOT___zz_da1_1 
        = ((0x00010000U & ((IData)(vlSelfRef.carrierGen__DOT__muls_9__DOT__ai0) 
                           << 1U)) | (IData)(vlSelfRef.carrierGen__DOT__muls_9__DOT__ai0));
    vlSelfRef.carrierGen__DOT__muls_9__DOT___zz_da1 
        = ((0x00010000U & ((IData)(vlSelfRef.carrierGen__DOT__muls_9__DOT__ar0) 
                           << 1U)) | (IData)(vlSelfRef.carrierGen__DOT__muls_9__DOT__ar0));
    vlSelfRef.carrierGen__DOT__muls_9__DOT__io_cmd_valid_delay_2 
        = vlSelfRef.carrierGen__DOT__muls_9__DOT__io_cmd_valid_delay_1;
    vlSelfRef.carrierGen__DOT__muls_9__DOT__io_cmd_valid_delay_1 = 1U;
}

void Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__22(Vtop_PulseGenerator* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__22\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_341;
    __VdfgRegularize_h6e95ff9d_0_341 = 0;
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_342;
    __VdfgRegularize_h6e95ff9d_0_342 = 0;
    // Body
    vlSelfRef.carrierGen__DOT__muls_10__DOT__db3 = 
        (0x0001ffffU & (vlSelfRef.carrierGen__DOT__muls_10__DOT___zz_db3 
                        - vlSelfRef.carrierGen__DOT__muls_10__DOT___zz_db3_1));
    vlSelfRef.carrierGen__DOT__muls_10__DOT__sb3 = 
        (0x0001ffffU & (vlSelfRef.carrierGen__DOT__muls_10__DOT___zz_sb3 
                        + vlSelfRef.carrierGen__DOT__muls_10__DOT___zz_sb3_1));
    vlSelfRef.carrierGen__DOT__muls_10__DOT__da1 = 
        (0x0001ffffU & (vlSelfRef.carrierGen__DOT__muls_10__DOT___zz_da1 
                        - vlSelfRef.carrierGen__DOT__muls_10__DOT___zz_da1_1));
    vlSelfRef.carrierGen__DOT__muls_10__DOT__pre4 = vlSelfRef.carrierGen__DOT__muls_10__DOT__mulPre;
    vlSelfRef.carrierGen__DOT__muls_10__DOT__pim4 = vlSelfRef.carrierGen__DOT__muls_10__DOT__mulPim;
    vlSelfRef.carrierGen__DOT__muls_10__DOT__sre5 = 
        (0x00000007ffffffffULL & (0x0000000000004000ULL 
                                  + vlSelfRef.carrierGen__DOT__muls_10__DOT___zz_sre5));
    vlSelfRef.carrierGen__DOT__muls_10__DOT__sim5 = 
        (0x00000007ffffffffULL & (0x0000000000004000ULL 
                                  + vlSelfRef.carrierGen__DOT__muls_10__DOT___zz_sim5));
    vlSelfRef.carrierGen__DOT__muls_10__DOT__br2 = vlSelfRef.carrierGen__DOT__muls_10__DOT__br1;
    vlSelfRef.carrierGen__DOT__muls_10__DOT__mcr4 = vlSelfRef.carrierGen__DOT__muls_10__DOT__m3;
    vlSelfRef.carrierGen__DOT__muls_10__DOT__mci4 = vlSelfRef.carrierGen__DOT__muls_10__DOT__m3;
    vlSelfRef.carrierGen__DOT__muls_10__DOT__bi2 = vlSelfRef.carrierGen__DOT__muls_10__DOT__bi1;
    vlSelfRef.carrierGen__DOT__muls_10__DOT__ai3 = vlSelfRef.carrierGen__DOT__muls_10__DOT__ai2;
    vlSelfRef.carrierGen__DOT__muls_10__DOT__ar3 = vlSelfRef.carrierGen__DOT__muls_10__DOT__ar2;
    vlSelfRef.carrierGen__DOT__muls_10__DOT__io_cmd_valid_delay_6 
        = vlSelfRef.carrierGen__DOT__muls_10__DOT__io_cmd_valid_delay_5;
    vlSelfRef.carrierGen__DOT__muls_10__DOT___zz_sre5_1 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_10__DOT__pre4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_10__DOT__pre4);
    vlSelfRef.carrierGen__DOT__muls_10__DOT___zz_sim5_1 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_10__DOT__pim4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_10__DOT__pim4);
    vlSelfRef.carrierGen__DOT__muls_10__DOT___zz_reN 
        = (0x000fffffU & (IData)((vlSelfRef.carrierGen__DOT__muls_10__DOT__sre5 
                                  >> 0x0fU)));
    vlSelfRef.carrierGen__DOT__muls_10__DOT___zz_imN 
        = (0x000fffffU & (IData)((vlSelfRef.carrierGen__DOT__muls_10__DOT__sim5 
                                  >> 0x0fU)));
    __VdfgRegularize_h6e95ff9d_0_341 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.carrierGen__DOT__muls_10__DOT__br2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.carrierGen__DOT__muls_10__DOT__br2));
    vlSelfRef.carrierGen__DOT__muls_10__DOT__br1 = vlSelfRef.carrierGen__DOT__muls_10__DOT__br0;
    vlSelfRef.carrierGen__DOT__muls_10__DOT___zz_sre5_2 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_10__DOT__mcr4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_10__DOT__mcr4);
    vlSelfRef.carrierGen__DOT__muls_10__DOT___zz_sim5_2 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_10__DOT__mci4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_10__DOT__mci4);
    vlSelfRef.carrierGen__DOT__muls_10__DOT__m3 = vlSelfRef.carrierGen__DOT__muls_10__DOT__m2;
    __VdfgRegularize_h6e95ff9d_0_342 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.carrierGen__DOT__muls_10__DOT__bi2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.carrierGen__DOT__muls_10__DOT__bi2));
    vlSelfRef.carrierGen__DOT__muls_10__DOT__bi1 = vlSelfRef.carrierGen__DOT__muls_10__DOT__bi0;
    vlSelfRef.carrierGen__DOT__muls_10__DOT__mulPim 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.carrierGen__DOT__muls_10__DOT__sb3)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.carrierGen__DOT__muls_10__DOT__ai3)))));
    vlSelfRef.carrierGen__DOT__muls_10__DOT__ai2 = vlSelfRef.carrierGen__DOT__muls_10__DOT__ai1;
    vlSelfRef.carrierGen__DOT__muls_10__DOT__mulPre 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.carrierGen__DOT__muls_10__DOT__db3)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.carrierGen__DOT__muls_10__DOT__ar3)))));
    vlSelfRef.carrierGen__DOT__muls_10__DOT__ar2 = vlSelfRef.carrierGen__DOT__muls_10__DOT__ar1;
    vlSelfRef.carrierGen__DOT__muls_10__DOT__io_rsp_valid 
        = vlSelfRef.carrierGen__DOT__muls_10__DOT__io_cmd_valid_delay_6;
    vlSelfRef.carrierGen__DOT__muls_10__DOT__io_cmd_valid_delay_5 
        = vlSelfRef.carrierGen__DOT__muls_10__DOT__io_cmd_valid_delay_4;
    vlSelfRef.carrierGen__DOT__muls_10__DOT__reN = 
        (0x0000ffffU & vlSelfRef.carrierGen__DOT__muls_10__DOT___zz_reN);
    vlSelfRef.carrierGen__DOT__muls_10__DOT__imN = 
        (0x0000ffffU & vlSelfRef.carrierGen__DOT__muls_10__DOT___zz_imN);
    vlSelfRef.carrierGen__DOT__muls_10__DOT___zz_db3 
        = __VdfgRegularize_h6e95ff9d_0_341;
    vlSelfRef.carrierGen__DOT__muls_10__DOT___zz_sb3 
        = __VdfgRegularize_h6e95ff9d_0_341;
    vlSelfRef.carrierGen__DOT__muls_10__DOT___zz_sre5 
        = (0x00000007ffffffffULL & (vlSelfRef.carrierGen__DOT__muls_10__DOT___zz_sre5_1 
                                    + vlSelfRef.carrierGen__DOT__muls_10__DOT___zz_sre5_2));
    vlSelfRef.carrierGen__DOT__muls_10__DOT___zz_sim5 
        = (0x00000007ffffffffULL & (vlSelfRef.carrierGen__DOT__muls_10__DOT___zz_sim5_1 
                                    + vlSelfRef.carrierGen__DOT__muls_10__DOT___zz_sim5_2));
    vlSelfRef.carrierGen__DOT__muls_10__DOT___zz_db3_1 
        = __VdfgRegularize_h6e95ff9d_0_342;
    vlSelfRef.carrierGen__DOT__muls_10__DOT___zz_sb3_1 
        = __VdfgRegularize_h6e95ff9d_0_342;
    vlSelfRef.carrierGen__DOT__muls_10_io_rsp_valid 
        = vlSelfRef.carrierGen__DOT__muls_10__DOT__io_rsp_valid;
    vlSelfRef.carrierGen__DOT__muls_10__DOT__io_rsp_payload_re 
        = vlSelfRef.carrierGen__DOT__muls_10__DOT__reN;
    vlSelfRef.carrierGen__DOT__muls_10__DOT__io_rsp_payload_im 
        = vlSelfRef.carrierGen__DOT__muls_10__DOT__imN;
    vlSelfRef.carrierGen__DOT__muls_10__DOT__br0 = vlSelfRef.carrierGen__DOT__muls_10__DOT__io_cmd_payload_b_re;
    vlSelfRef.carrierGen__DOT__muls_10__DOT__m2 = vlSelfRef.carrierGen__DOT__muls_10__DOT__mulM;
    vlSelfRef.carrierGen__DOT__muls_10__DOT__bi0 = vlSelfRef.carrierGen__DOT__muls_10__DOT__io_cmd_payload_b_im;
    vlSelfRef.carrierGen__DOT__muls_10__DOT__ai1 = vlSelfRef.carrierGen__DOT__muls_10__DOT__ai0;
    vlSelfRef.carrierGen__DOT__muls_10__DOT__ar1 = vlSelfRef.carrierGen__DOT__muls_10__DOT__ar0;
    vlSelfRef.carrierGen__DOT__muls_10__DOT__io_cmd_valid_delay_4 
        = vlSelfRef.carrierGen__DOT__muls_10__DOT__io_cmd_valid_delay_3;
    vlSelfRef.carrierGen__DOT__muls_10_io_rsp_payload_re 
        = vlSelfRef.carrierGen__DOT__muls_10__DOT__io_rsp_payload_re;
    vlSelfRef.carrierGen__DOT__muls_10_io_rsp_payload_im 
        = vlSelfRef.carrierGen__DOT__muls_10__DOT__io_rsp_payload_im;
    vlSelfRef.carrierGen__DOT__muls_10__DOT__mulM = 
        (0x00000001ffffffffULL & VL_MULS_QQQ(33, (0x00000001ffffffffULL 
                                                  & VL_EXTENDS_QI(33,17, vlSelfRef.carrierGen__DOT__muls_10__DOT__da1)), 
                                             (0x00000001ffffffffULL 
                                              & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.carrierGen__DOT__muls_10__DOT__bi1)))));
    vlSelfRef.carrierGen__DOT__io_carrier_10_re = vlSelfRef.carrierGen__DOT__muls_10_io_rsp_payload_re;
    vlSelfRef.carrierGen__DOT__io_carrier_10_im = vlSelfRef.carrierGen__DOT__muls_10_io_rsp_payload_im;
    vlSelfRef.carrierGen__DOT__muls_10__DOT__ai0 = vlSelfRef.carrierGen__DOT__muls_10__DOT__io_cmd_payload_a_im;
    vlSelfRef.carrierGen__DOT__muls_10__DOT__ar0 = vlSelfRef.carrierGen__DOT__muls_10__DOT__io_cmd_payload_a_re;
    vlSelfRef.carrierGen__DOT__muls_10__DOT__io_cmd_valid_delay_3 
        = vlSelfRef.carrierGen__DOT__muls_10__DOT__io_cmd_valid_delay_2;
    vlSelfRef.carrierGen_io_carrier_10_re = vlSelfRef.carrierGen__DOT__io_carrier_10_re;
    vlSelfRef.carrierGen_io_carrier_10_im = vlSelfRef.carrierGen__DOT__io_carrier_10_im;
    vlSelfRef.carrierGen__DOT__muls_10__DOT___zz_da1_1 
        = ((0x00010000U & ((IData)(vlSelfRef.carrierGen__DOT__muls_10__DOT__ai0) 
                           << 1U)) | (IData)(vlSelfRef.carrierGen__DOT__muls_10__DOT__ai0));
    vlSelfRef.carrierGen__DOT__muls_10__DOT___zz_da1 
        = ((0x00010000U & ((IData)(vlSelfRef.carrierGen__DOT__muls_10__DOT__ar0) 
                           << 1U)) | (IData)(vlSelfRef.carrierGen__DOT__muls_10__DOT__ar0));
    vlSelfRef.carrierGen__DOT__muls_10__DOT__io_cmd_valid_delay_2 
        = vlSelfRef.carrierGen__DOT__muls_10__DOT__io_cmd_valid_delay_1;
    vlSelfRef.carrierGen__DOT__muls_10__DOT__io_cmd_valid_delay_1 = 1U;
}

void Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__23(Vtop_PulseGenerator* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__23\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_343;
    __VdfgRegularize_h6e95ff9d_0_343 = 0;
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_344;
    __VdfgRegularize_h6e95ff9d_0_344 = 0;
    // Body
    vlSelfRef.carrierGen__DOT__muls_11__DOT__db3 = 
        (0x0001ffffU & (vlSelfRef.carrierGen__DOT__muls_11__DOT___zz_db3 
                        - vlSelfRef.carrierGen__DOT__muls_11__DOT___zz_db3_1));
    vlSelfRef.carrierGen__DOT__muls_11__DOT__sb3 = 
        (0x0001ffffU & (vlSelfRef.carrierGen__DOT__muls_11__DOT___zz_sb3 
                        + vlSelfRef.carrierGen__DOT__muls_11__DOT___zz_sb3_1));
    vlSelfRef.carrierGen__DOT__muls_11__DOT__da1 = 
        (0x0001ffffU & (vlSelfRef.carrierGen__DOT__muls_11__DOT___zz_da1 
                        - vlSelfRef.carrierGen__DOT__muls_11__DOT___zz_da1_1));
    vlSelfRef.carrierGen__DOT__muls_11__DOT__pre4 = vlSelfRef.carrierGen__DOT__muls_11__DOT__mulPre;
    vlSelfRef.carrierGen__DOT__muls_11__DOT__pim4 = vlSelfRef.carrierGen__DOT__muls_11__DOT__mulPim;
    vlSelfRef.carrierGen__DOT__muls_11__DOT__sre5 = 
        (0x00000007ffffffffULL & (0x0000000000004000ULL 
                                  + vlSelfRef.carrierGen__DOT__muls_11__DOT___zz_sre5));
    vlSelfRef.carrierGen__DOT__muls_11__DOT__sim5 = 
        (0x00000007ffffffffULL & (0x0000000000004000ULL 
                                  + vlSelfRef.carrierGen__DOT__muls_11__DOT___zz_sim5));
    vlSelfRef.carrierGen__DOT__muls_11__DOT__br2 = vlSelfRef.carrierGen__DOT__muls_11__DOT__br1;
    vlSelfRef.carrierGen__DOT__muls_11__DOT__mcr4 = vlSelfRef.carrierGen__DOT__muls_11__DOT__m3;
    vlSelfRef.carrierGen__DOT__muls_11__DOT__mci4 = vlSelfRef.carrierGen__DOT__muls_11__DOT__m3;
    vlSelfRef.carrierGen__DOT__muls_11__DOT__bi2 = vlSelfRef.carrierGen__DOT__muls_11__DOT__bi1;
    vlSelfRef.carrierGen__DOT__muls_11__DOT__ai3 = vlSelfRef.carrierGen__DOT__muls_11__DOT__ai2;
    vlSelfRef.carrierGen__DOT__muls_11__DOT__ar3 = vlSelfRef.carrierGen__DOT__muls_11__DOT__ar2;
    vlSelfRef.carrierGen__DOT__muls_11__DOT__io_cmd_valid_delay_6 
        = vlSelfRef.carrierGen__DOT__muls_11__DOT__io_cmd_valid_delay_5;
    vlSelfRef.carrierGen__DOT__muls_11__DOT___zz_sre5_1 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_11__DOT__pre4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_11__DOT__pre4);
    vlSelfRef.carrierGen__DOT__muls_11__DOT___zz_sim5_1 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_11__DOT__pim4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_11__DOT__pim4);
    vlSelfRef.carrierGen__DOT__muls_11__DOT___zz_reN 
        = (0x000fffffU & (IData)((vlSelfRef.carrierGen__DOT__muls_11__DOT__sre5 
                                  >> 0x0fU)));
    vlSelfRef.carrierGen__DOT__muls_11__DOT___zz_imN 
        = (0x000fffffU & (IData)((vlSelfRef.carrierGen__DOT__muls_11__DOT__sim5 
                                  >> 0x0fU)));
    __VdfgRegularize_h6e95ff9d_0_343 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.carrierGen__DOT__muls_11__DOT__br2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.carrierGen__DOT__muls_11__DOT__br2));
    vlSelfRef.carrierGen__DOT__muls_11__DOT__br1 = vlSelfRef.carrierGen__DOT__muls_11__DOT__br0;
    vlSelfRef.carrierGen__DOT__muls_11__DOT___zz_sre5_2 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_11__DOT__mcr4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_11__DOT__mcr4);
    vlSelfRef.carrierGen__DOT__muls_11__DOT___zz_sim5_2 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_11__DOT__mci4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_11__DOT__mci4);
    vlSelfRef.carrierGen__DOT__muls_11__DOT__m3 = vlSelfRef.carrierGen__DOT__muls_11__DOT__m2;
    __VdfgRegularize_h6e95ff9d_0_344 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.carrierGen__DOT__muls_11__DOT__bi2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.carrierGen__DOT__muls_11__DOT__bi2));
    vlSelfRef.carrierGen__DOT__muls_11__DOT__bi1 = vlSelfRef.carrierGen__DOT__muls_11__DOT__bi0;
    vlSelfRef.carrierGen__DOT__muls_11__DOT__mulPim 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.carrierGen__DOT__muls_11__DOT__sb3)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.carrierGen__DOT__muls_11__DOT__ai3)))));
    vlSelfRef.carrierGen__DOT__muls_11__DOT__ai2 = vlSelfRef.carrierGen__DOT__muls_11__DOT__ai1;
    vlSelfRef.carrierGen__DOT__muls_11__DOT__mulPre 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.carrierGen__DOT__muls_11__DOT__db3)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.carrierGen__DOT__muls_11__DOT__ar3)))));
    vlSelfRef.carrierGen__DOT__muls_11__DOT__ar2 = vlSelfRef.carrierGen__DOT__muls_11__DOT__ar1;
    vlSelfRef.carrierGen__DOT__muls_11__DOT__io_rsp_valid 
        = vlSelfRef.carrierGen__DOT__muls_11__DOT__io_cmd_valid_delay_6;
    vlSelfRef.carrierGen__DOT__muls_11__DOT__io_cmd_valid_delay_5 
        = vlSelfRef.carrierGen__DOT__muls_11__DOT__io_cmd_valid_delay_4;
    vlSelfRef.carrierGen__DOT__muls_11__DOT__reN = 
        (0x0000ffffU & vlSelfRef.carrierGen__DOT__muls_11__DOT___zz_reN);
    vlSelfRef.carrierGen__DOT__muls_11__DOT__imN = 
        (0x0000ffffU & vlSelfRef.carrierGen__DOT__muls_11__DOT___zz_imN);
    vlSelfRef.carrierGen__DOT__muls_11__DOT___zz_db3 
        = __VdfgRegularize_h6e95ff9d_0_343;
    vlSelfRef.carrierGen__DOT__muls_11__DOT___zz_sb3 
        = __VdfgRegularize_h6e95ff9d_0_343;
    vlSelfRef.carrierGen__DOT__muls_11__DOT___zz_sre5 
        = (0x00000007ffffffffULL & (vlSelfRef.carrierGen__DOT__muls_11__DOT___zz_sre5_1 
                                    + vlSelfRef.carrierGen__DOT__muls_11__DOT___zz_sre5_2));
    vlSelfRef.carrierGen__DOT__muls_11__DOT___zz_sim5 
        = (0x00000007ffffffffULL & (vlSelfRef.carrierGen__DOT__muls_11__DOT___zz_sim5_1 
                                    + vlSelfRef.carrierGen__DOT__muls_11__DOT___zz_sim5_2));
    vlSelfRef.carrierGen__DOT__muls_11__DOT___zz_db3_1 
        = __VdfgRegularize_h6e95ff9d_0_344;
    vlSelfRef.carrierGen__DOT__muls_11__DOT___zz_sb3_1 
        = __VdfgRegularize_h6e95ff9d_0_344;
    vlSelfRef.carrierGen__DOT__muls_11_io_rsp_valid 
        = vlSelfRef.carrierGen__DOT__muls_11__DOT__io_rsp_valid;
    vlSelfRef.carrierGen__DOT__muls_11__DOT__io_rsp_payload_re 
        = vlSelfRef.carrierGen__DOT__muls_11__DOT__reN;
    vlSelfRef.carrierGen__DOT__muls_11__DOT__io_rsp_payload_im 
        = vlSelfRef.carrierGen__DOT__muls_11__DOT__imN;
    vlSelfRef.carrierGen__DOT__muls_11__DOT__br0 = vlSelfRef.carrierGen__DOT__muls_11__DOT__io_cmd_payload_b_re;
    vlSelfRef.carrierGen__DOT__muls_11__DOT__m2 = vlSelfRef.carrierGen__DOT__muls_11__DOT__mulM;
    vlSelfRef.carrierGen__DOT__muls_11__DOT__bi0 = vlSelfRef.carrierGen__DOT__muls_11__DOT__io_cmd_payload_b_im;
    vlSelfRef.carrierGen__DOT__muls_11__DOT__ai1 = vlSelfRef.carrierGen__DOT__muls_11__DOT__ai0;
    vlSelfRef.carrierGen__DOT__muls_11__DOT__ar1 = vlSelfRef.carrierGen__DOT__muls_11__DOT__ar0;
    vlSelfRef.carrierGen__DOT__muls_11__DOT__io_cmd_valid_delay_4 
        = vlSelfRef.carrierGen__DOT__muls_11__DOT__io_cmd_valid_delay_3;
    vlSelfRef.carrierGen__DOT__muls_11_io_rsp_payload_re 
        = vlSelfRef.carrierGen__DOT__muls_11__DOT__io_rsp_payload_re;
    vlSelfRef.carrierGen__DOT__muls_11_io_rsp_payload_im 
        = vlSelfRef.carrierGen__DOT__muls_11__DOT__io_rsp_payload_im;
    vlSelfRef.carrierGen__DOT__muls_11__DOT__mulM = 
        (0x00000001ffffffffULL & VL_MULS_QQQ(33, (0x00000001ffffffffULL 
                                                  & VL_EXTENDS_QI(33,17, vlSelfRef.carrierGen__DOT__muls_11__DOT__da1)), 
                                             (0x00000001ffffffffULL 
                                              & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.carrierGen__DOT__muls_11__DOT__bi1)))));
    vlSelfRef.carrierGen__DOT__io_carrier_11_re = vlSelfRef.carrierGen__DOT__muls_11_io_rsp_payload_re;
    vlSelfRef.carrierGen__DOT__io_carrier_11_im = vlSelfRef.carrierGen__DOT__muls_11_io_rsp_payload_im;
    vlSelfRef.carrierGen__DOT__muls_11__DOT__ai0 = vlSelfRef.carrierGen__DOT__muls_11__DOT__io_cmd_payload_a_im;
    vlSelfRef.carrierGen__DOT__muls_11__DOT__ar0 = vlSelfRef.carrierGen__DOT__muls_11__DOT__io_cmd_payload_a_re;
    vlSelfRef.carrierGen__DOT__muls_11__DOT__io_cmd_valid_delay_3 
        = vlSelfRef.carrierGen__DOT__muls_11__DOT__io_cmd_valid_delay_2;
    vlSelfRef.carrierGen_io_carrier_11_re = vlSelfRef.carrierGen__DOT__io_carrier_11_re;
    vlSelfRef.carrierGen_io_carrier_11_im = vlSelfRef.carrierGen__DOT__io_carrier_11_im;
    vlSelfRef.carrierGen__DOT__muls_11__DOT___zz_da1_1 
        = ((0x00010000U & ((IData)(vlSelfRef.carrierGen__DOT__muls_11__DOT__ai0) 
                           << 1U)) | (IData)(vlSelfRef.carrierGen__DOT__muls_11__DOT__ai0));
    vlSelfRef.carrierGen__DOT__muls_11__DOT___zz_da1 
        = ((0x00010000U & ((IData)(vlSelfRef.carrierGen__DOT__muls_11__DOT__ar0) 
                           << 1U)) | (IData)(vlSelfRef.carrierGen__DOT__muls_11__DOT__ar0));
    vlSelfRef.carrierGen__DOT__muls_11__DOT__io_cmd_valid_delay_2 
        = vlSelfRef.carrierGen__DOT__muls_11__DOT__io_cmd_valid_delay_1;
    vlSelfRef.carrierGen__DOT__muls_11__DOT__io_cmd_valid_delay_1 = 1U;
}

void Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__24(Vtop_PulseGenerator* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__24\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_345;
    __VdfgRegularize_h6e95ff9d_0_345 = 0;
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_346;
    __VdfgRegularize_h6e95ff9d_0_346 = 0;
    // Body
    vlSelfRef.carrierGen__DOT__muls_12__DOT__db3 = 
        (0x0001ffffU & (vlSelfRef.carrierGen__DOT__muls_12__DOT___zz_db3 
                        - vlSelfRef.carrierGen__DOT__muls_12__DOT___zz_db3_1));
    vlSelfRef.carrierGen__DOT__muls_12__DOT__sb3 = 
        (0x0001ffffU & (vlSelfRef.carrierGen__DOT__muls_12__DOT___zz_sb3 
                        + vlSelfRef.carrierGen__DOT__muls_12__DOT___zz_sb3_1));
    vlSelfRef.carrierGen__DOT__muls_12__DOT__da1 = 
        (0x0001ffffU & (vlSelfRef.carrierGen__DOT__muls_12__DOT___zz_da1 
                        - vlSelfRef.carrierGen__DOT__muls_12__DOT___zz_da1_1));
    vlSelfRef.carrierGen__DOT__muls_12__DOT__pre4 = vlSelfRef.carrierGen__DOT__muls_12__DOT__mulPre;
    vlSelfRef.carrierGen__DOT__muls_12__DOT__pim4 = vlSelfRef.carrierGen__DOT__muls_12__DOT__mulPim;
    vlSelfRef.carrierGen__DOT__muls_12__DOT__sre5 = 
        (0x00000007ffffffffULL & (0x0000000000004000ULL 
                                  + vlSelfRef.carrierGen__DOT__muls_12__DOT___zz_sre5));
    vlSelfRef.carrierGen__DOT__muls_12__DOT__sim5 = 
        (0x00000007ffffffffULL & (0x0000000000004000ULL 
                                  + vlSelfRef.carrierGen__DOT__muls_12__DOT___zz_sim5));
    vlSelfRef.carrierGen__DOT__muls_12__DOT__br2 = vlSelfRef.carrierGen__DOT__muls_12__DOT__br1;
    vlSelfRef.carrierGen__DOT__muls_12__DOT__mcr4 = vlSelfRef.carrierGen__DOT__muls_12__DOT__m3;
    vlSelfRef.carrierGen__DOT__muls_12__DOT__mci4 = vlSelfRef.carrierGen__DOT__muls_12__DOT__m3;
    vlSelfRef.carrierGen__DOT__muls_12__DOT__bi2 = vlSelfRef.carrierGen__DOT__muls_12__DOT__bi1;
    vlSelfRef.carrierGen__DOT__muls_12__DOT__ai3 = vlSelfRef.carrierGen__DOT__muls_12__DOT__ai2;
    vlSelfRef.carrierGen__DOT__muls_12__DOT__ar3 = vlSelfRef.carrierGen__DOT__muls_12__DOT__ar2;
    vlSelfRef.carrierGen__DOT__muls_12__DOT__io_cmd_valid_delay_6 
        = vlSelfRef.carrierGen__DOT__muls_12__DOT__io_cmd_valid_delay_5;
    vlSelfRef.carrierGen__DOT__muls_12__DOT___zz_sre5_1 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_12__DOT__pre4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_12__DOT__pre4);
    vlSelfRef.carrierGen__DOT__muls_12__DOT___zz_sim5_1 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_12__DOT__pim4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_12__DOT__pim4);
    vlSelfRef.carrierGen__DOT__muls_12__DOT___zz_reN 
        = (0x000fffffU & (IData)((vlSelfRef.carrierGen__DOT__muls_12__DOT__sre5 
                                  >> 0x0fU)));
    vlSelfRef.carrierGen__DOT__muls_12__DOT___zz_imN 
        = (0x000fffffU & (IData)((vlSelfRef.carrierGen__DOT__muls_12__DOT__sim5 
                                  >> 0x0fU)));
    __VdfgRegularize_h6e95ff9d_0_345 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.carrierGen__DOT__muls_12__DOT__br2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.carrierGen__DOT__muls_12__DOT__br2));
    vlSelfRef.carrierGen__DOT__muls_12__DOT__br1 = vlSelfRef.carrierGen__DOT__muls_12__DOT__br0;
    vlSelfRef.carrierGen__DOT__muls_12__DOT___zz_sre5_2 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_12__DOT__mcr4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_12__DOT__mcr4);
    vlSelfRef.carrierGen__DOT__muls_12__DOT___zz_sim5_2 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_12__DOT__mci4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_12__DOT__mci4);
    vlSelfRef.carrierGen__DOT__muls_12__DOT__m3 = vlSelfRef.carrierGen__DOT__muls_12__DOT__m2;
    __VdfgRegularize_h6e95ff9d_0_346 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.carrierGen__DOT__muls_12__DOT__bi2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.carrierGen__DOT__muls_12__DOT__bi2));
    vlSelfRef.carrierGen__DOT__muls_12__DOT__bi1 = vlSelfRef.carrierGen__DOT__muls_12__DOT__bi0;
    vlSelfRef.carrierGen__DOT__muls_12__DOT__mulPim 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.carrierGen__DOT__muls_12__DOT__sb3)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.carrierGen__DOT__muls_12__DOT__ai3)))));
    vlSelfRef.carrierGen__DOT__muls_12__DOT__ai2 = vlSelfRef.carrierGen__DOT__muls_12__DOT__ai1;
    vlSelfRef.carrierGen__DOT__muls_12__DOT__mulPre 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.carrierGen__DOT__muls_12__DOT__db3)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.carrierGen__DOT__muls_12__DOT__ar3)))));
    vlSelfRef.carrierGen__DOT__muls_12__DOT__ar2 = vlSelfRef.carrierGen__DOT__muls_12__DOT__ar1;
    vlSelfRef.carrierGen__DOT__muls_12__DOT__io_rsp_valid 
        = vlSelfRef.carrierGen__DOT__muls_12__DOT__io_cmd_valid_delay_6;
    vlSelfRef.carrierGen__DOT__muls_12__DOT__io_cmd_valid_delay_5 
        = vlSelfRef.carrierGen__DOT__muls_12__DOT__io_cmd_valid_delay_4;
    vlSelfRef.carrierGen__DOT__muls_12__DOT__reN = 
        (0x0000ffffU & vlSelfRef.carrierGen__DOT__muls_12__DOT___zz_reN);
    vlSelfRef.carrierGen__DOT__muls_12__DOT__imN = 
        (0x0000ffffU & vlSelfRef.carrierGen__DOT__muls_12__DOT___zz_imN);
    vlSelfRef.carrierGen__DOT__muls_12__DOT___zz_db3 
        = __VdfgRegularize_h6e95ff9d_0_345;
    vlSelfRef.carrierGen__DOT__muls_12__DOT___zz_sb3 
        = __VdfgRegularize_h6e95ff9d_0_345;
    vlSelfRef.carrierGen__DOT__muls_12__DOT___zz_sre5 
        = (0x00000007ffffffffULL & (vlSelfRef.carrierGen__DOT__muls_12__DOT___zz_sre5_1 
                                    + vlSelfRef.carrierGen__DOT__muls_12__DOT___zz_sre5_2));
    vlSelfRef.carrierGen__DOT__muls_12__DOT___zz_sim5 
        = (0x00000007ffffffffULL & (vlSelfRef.carrierGen__DOT__muls_12__DOT___zz_sim5_1 
                                    + vlSelfRef.carrierGen__DOT__muls_12__DOT___zz_sim5_2));
    vlSelfRef.carrierGen__DOT__muls_12__DOT___zz_db3_1 
        = __VdfgRegularize_h6e95ff9d_0_346;
    vlSelfRef.carrierGen__DOT__muls_12__DOT___zz_sb3_1 
        = __VdfgRegularize_h6e95ff9d_0_346;
    vlSelfRef.carrierGen__DOT__muls_12_io_rsp_valid 
        = vlSelfRef.carrierGen__DOT__muls_12__DOT__io_rsp_valid;
    vlSelfRef.carrierGen__DOT__muls_12__DOT__io_rsp_payload_re 
        = vlSelfRef.carrierGen__DOT__muls_12__DOT__reN;
    vlSelfRef.carrierGen__DOT__muls_12__DOT__io_rsp_payload_im 
        = vlSelfRef.carrierGen__DOT__muls_12__DOT__imN;
    vlSelfRef.carrierGen__DOT__muls_12__DOT__br0 = vlSelfRef.carrierGen__DOT__muls_12__DOT__io_cmd_payload_b_re;
    vlSelfRef.carrierGen__DOT__muls_12__DOT__m2 = vlSelfRef.carrierGen__DOT__muls_12__DOT__mulM;
    vlSelfRef.carrierGen__DOT__muls_12__DOT__bi0 = vlSelfRef.carrierGen__DOT__muls_12__DOT__io_cmd_payload_b_im;
    vlSelfRef.carrierGen__DOT__muls_12__DOT__ai1 = vlSelfRef.carrierGen__DOT__muls_12__DOT__ai0;
    vlSelfRef.carrierGen__DOT__muls_12__DOT__ar1 = vlSelfRef.carrierGen__DOT__muls_12__DOT__ar0;
    vlSelfRef.carrierGen__DOT__muls_12__DOT__io_cmd_valid_delay_4 
        = vlSelfRef.carrierGen__DOT__muls_12__DOT__io_cmd_valid_delay_3;
    vlSelfRef.carrierGen__DOT__muls_12_io_rsp_payload_re 
        = vlSelfRef.carrierGen__DOT__muls_12__DOT__io_rsp_payload_re;
    vlSelfRef.carrierGen__DOT__muls_12_io_rsp_payload_im 
        = vlSelfRef.carrierGen__DOT__muls_12__DOT__io_rsp_payload_im;
    vlSelfRef.carrierGen__DOT__muls_12__DOT__mulM = 
        (0x00000001ffffffffULL & VL_MULS_QQQ(33, (0x00000001ffffffffULL 
                                                  & VL_EXTENDS_QI(33,17, vlSelfRef.carrierGen__DOT__muls_12__DOT__da1)), 
                                             (0x00000001ffffffffULL 
                                              & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.carrierGen__DOT__muls_12__DOT__bi1)))));
    vlSelfRef.carrierGen__DOT__io_carrier_12_re = vlSelfRef.carrierGen__DOT__muls_12_io_rsp_payload_re;
    vlSelfRef.carrierGen__DOT__io_carrier_12_im = vlSelfRef.carrierGen__DOT__muls_12_io_rsp_payload_im;
    vlSelfRef.carrierGen__DOT__muls_12__DOT__ai0 = vlSelfRef.carrierGen__DOT__muls_12__DOT__io_cmd_payload_a_im;
    vlSelfRef.carrierGen__DOT__muls_12__DOT__ar0 = vlSelfRef.carrierGen__DOT__muls_12__DOT__io_cmd_payload_a_re;
    vlSelfRef.carrierGen__DOT__muls_12__DOT__io_cmd_valid_delay_3 
        = vlSelfRef.carrierGen__DOT__muls_12__DOT__io_cmd_valid_delay_2;
    vlSelfRef.carrierGen_io_carrier_12_re = vlSelfRef.carrierGen__DOT__io_carrier_12_re;
    vlSelfRef.carrierGen_io_carrier_12_im = vlSelfRef.carrierGen__DOT__io_carrier_12_im;
    vlSelfRef.carrierGen__DOT__muls_12__DOT___zz_da1_1 
        = ((0x00010000U & ((IData)(vlSelfRef.carrierGen__DOT__muls_12__DOT__ai0) 
                           << 1U)) | (IData)(vlSelfRef.carrierGen__DOT__muls_12__DOT__ai0));
    vlSelfRef.carrierGen__DOT__muls_12__DOT___zz_da1 
        = ((0x00010000U & ((IData)(vlSelfRef.carrierGen__DOT__muls_12__DOT__ar0) 
                           << 1U)) | (IData)(vlSelfRef.carrierGen__DOT__muls_12__DOT__ar0));
    vlSelfRef.carrierGen__DOT__muls_12__DOT__io_cmd_valid_delay_2 
        = vlSelfRef.carrierGen__DOT__muls_12__DOT__io_cmd_valid_delay_1;
    vlSelfRef.carrierGen__DOT__muls_12__DOT__io_cmd_valid_delay_1 = 1U;
}

void Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__25(Vtop_PulseGenerator* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__25\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_347;
    __VdfgRegularize_h6e95ff9d_0_347 = 0;
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_348;
    __VdfgRegularize_h6e95ff9d_0_348 = 0;
    // Body
    vlSelfRef.carrierGen__DOT__muls_13__DOT__db3 = 
        (0x0001ffffU & (vlSelfRef.carrierGen__DOT__muls_13__DOT___zz_db3 
                        - vlSelfRef.carrierGen__DOT__muls_13__DOT___zz_db3_1));
    vlSelfRef.carrierGen__DOT__muls_13__DOT__sb3 = 
        (0x0001ffffU & (vlSelfRef.carrierGen__DOT__muls_13__DOT___zz_sb3 
                        + vlSelfRef.carrierGen__DOT__muls_13__DOT___zz_sb3_1));
    vlSelfRef.carrierGen__DOT__muls_13__DOT__da1 = 
        (0x0001ffffU & (vlSelfRef.carrierGen__DOT__muls_13__DOT___zz_da1 
                        - vlSelfRef.carrierGen__DOT__muls_13__DOT___zz_da1_1));
    vlSelfRef.carrierGen__DOT__muls_13__DOT__pre4 = vlSelfRef.carrierGen__DOT__muls_13__DOT__mulPre;
    vlSelfRef.carrierGen__DOT__muls_13__DOT__pim4 = vlSelfRef.carrierGen__DOT__muls_13__DOT__mulPim;
    vlSelfRef.carrierGen__DOT__muls_13__DOT__sre5 = 
        (0x00000007ffffffffULL & (0x0000000000004000ULL 
                                  + vlSelfRef.carrierGen__DOT__muls_13__DOT___zz_sre5));
    vlSelfRef.carrierGen__DOT__muls_13__DOT__sim5 = 
        (0x00000007ffffffffULL & (0x0000000000004000ULL 
                                  + vlSelfRef.carrierGen__DOT__muls_13__DOT___zz_sim5));
    vlSelfRef.carrierGen__DOT__muls_13__DOT__br2 = vlSelfRef.carrierGen__DOT__muls_13__DOT__br1;
    vlSelfRef.carrierGen__DOT__muls_13__DOT__mcr4 = vlSelfRef.carrierGen__DOT__muls_13__DOT__m3;
    vlSelfRef.carrierGen__DOT__muls_13__DOT__mci4 = vlSelfRef.carrierGen__DOT__muls_13__DOT__m3;
    vlSelfRef.carrierGen__DOT__muls_13__DOT__bi2 = vlSelfRef.carrierGen__DOT__muls_13__DOT__bi1;
    vlSelfRef.carrierGen__DOT__muls_13__DOT__ai3 = vlSelfRef.carrierGen__DOT__muls_13__DOT__ai2;
    vlSelfRef.carrierGen__DOT__muls_13__DOT__ar3 = vlSelfRef.carrierGen__DOT__muls_13__DOT__ar2;
    vlSelfRef.carrierGen__DOT__muls_13__DOT__io_cmd_valid_delay_6 
        = vlSelfRef.carrierGen__DOT__muls_13__DOT__io_cmd_valid_delay_5;
    vlSelfRef.carrierGen__DOT__muls_13__DOT___zz_sre5_1 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_13__DOT__pre4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_13__DOT__pre4);
    vlSelfRef.carrierGen__DOT__muls_13__DOT___zz_sim5_1 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_13__DOT__pim4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_13__DOT__pim4);
    vlSelfRef.carrierGen__DOT__muls_13__DOT___zz_reN 
        = (0x000fffffU & (IData)((vlSelfRef.carrierGen__DOT__muls_13__DOT__sre5 
                                  >> 0x0fU)));
    vlSelfRef.carrierGen__DOT__muls_13__DOT___zz_imN 
        = (0x000fffffU & (IData)((vlSelfRef.carrierGen__DOT__muls_13__DOT__sim5 
                                  >> 0x0fU)));
    __VdfgRegularize_h6e95ff9d_0_347 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.carrierGen__DOT__muls_13__DOT__br2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.carrierGen__DOT__muls_13__DOT__br2));
    vlSelfRef.carrierGen__DOT__muls_13__DOT__br1 = vlSelfRef.carrierGen__DOT__muls_13__DOT__br0;
    vlSelfRef.carrierGen__DOT__muls_13__DOT___zz_sre5_2 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_13__DOT__mcr4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_13__DOT__mcr4);
    vlSelfRef.carrierGen__DOT__muls_13__DOT___zz_sim5_2 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_13__DOT__mci4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_13__DOT__mci4);
    vlSelfRef.carrierGen__DOT__muls_13__DOT__m3 = vlSelfRef.carrierGen__DOT__muls_13__DOT__m2;
    __VdfgRegularize_h6e95ff9d_0_348 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.carrierGen__DOT__muls_13__DOT__bi2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.carrierGen__DOT__muls_13__DOT__bi2));
    vlSelfRef.carrierGen__DOT__muls_13__DOT__bi1 = vlSelfRef.carrierGen__DOT__muls_13__DOT__bi0;
    vlSelfRef.carrierGen__DOT__muls_13__DOT__mulPim 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.carrierGen__DOT__muls_13__DOT__sb3)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.carrierGen__DOT__muls_13__DOT__ai3)))));
    vlSelfRef.carrierGen__DOT__muls_13__DOT__ai2 = vlSelfRef.carrierGen__DOT__muls_13__DOT__ai1;
    vlSelfRef.carrierGen__DOT__muls_13__DOT__mulPre 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.carrierGen__DOT__muls_13__DOT__db3)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.carrierGen__DOT__muls_13__DOT__ar3)))));
    vlSelfRef.carrierGen__DOT__muls_13__DOT__ar2 = vlSelfRef.carrierGen__DOT__muls_13__DOT__ar1;
    vlSelfRef.carrierGen__DOT__muls_13__DOT__io_rsp_valid 
        = vlSelfRef.carrierGen__DOT__muls_13__DOT__io_cmd_valid_delay_6;
    vlSelfRef.carrierGen__DOT__muls_13__DOT__io_cmd_valid_delay_5 
        = vlSelfRef.carrierGen__DOT__muls_13__DOT__io_cmd_valid_delay_4;
    vlSelfRef.carrierGen__DOT__muls_13__DOT__reN = 
        (0x0000ffffU & vlSelfRef.carrierGen__DOT__muls_13__DOT___zz_reN);
    vlSelfRef.carrierGen__DOT__muls_13__DOT__imN = 
        (0x0000ffffU & vlSelfRef.carrierGen__DOT__muls_13__DOT___zz_imN);
    vlSelfRef.carrierGen__DOT__muls_13__DOT___zz_db3 
        = __VdfgRegularize_h6e95ff9d_0_347;
    vlSelfRef.carrierGen__DOT__muls_13__DOT___zz_sb3 
        = __VdfgRegularize_h6e95ff9d_0_347;
    vlSelfRef.carrierGen__DOT__muls_13__DOT___zz_sre5 
        = (0x00000007ffffffffULL & (vlSelfRef.carrierGen__DOT__muls_13__DOT___zz_sre5_1 
                                    + vlSelfRef.carrierGen__DOT__muls_13__DOT___zz_sre5_2));
    vlSelfRef.carrierGen__DOT__muls_13__DOT___zz_sim5 
        = (0x00000007ffffffffULL & (vlSelfRef.carrierGen__DOT__muls_13__DOT___zz_sim5_1 
                                    + vlSelfRef.carrierGen__DOT__muls_13__DOT___zz_sim5_2));
    vlSelfRef.carrierGen__DOT__muls_13__DOT___zz_db3_1 
        = __VdfgRegularize_h6e95ff9d_0_348;
    vlSelfRef.carrierGen__DOT__muls_13__DOT___zz_sb3_1 
        = __VdfgRegularize_h6e95ff9d_0_348;
    vlSelfRef.carrierGen__DOT__muls_13_io_rsp_valid 
        = vlSelfRef.carrierGen__DOT__muls_13__DOT__io_rsp_valid;
    vlSelfRef.carrierGen__DOT__muls_13__DOT__io_rsp_payload_re 
        = vlSelfRef.carrierGen__DOT__muls_13__DOT__reN;
    vlSelfRef.carrierGen__DOT__muls_13__DOT__io_rsp_payload_im 
        = vlSelfRef.carrierGen__DOT__muls_13__DOT__imN;
    vlSelfRef.carrierGen__DOT__muls_13__DOT__br0 = vlSelfRef.carrierGen__DOT__muls_13__DOT__io_cmd_payload_b_re;
    vlSelfRef.carrierGen__DOT__muls_13__DOT__m2 = vlSelfRef.carrierGen__DOT__muls_13__DOT__mulM;
    vlSelfRef.carrierGen__DOT__muls_13__DOT__bi0 = vlSelfRef.carrierGen__DOT__muls_13__DOT__io_cmd_payload_b_im;
    vlSelfRef.carrierGen__DOT__muls_13__DOT__ai1 = vlSelfRef.carrierGen__DOT__muls_13__DOT__ai0;
    vlSelfRef.carrierGen__DOT__muls_13__DOT__ar1 = vlSelfRef.carrierGen__DOT__muls_13__DOT__ar0;
    vlSelfRef.carrierGen__DOT__muls_13__DOT__io_cmd_valid_delay_4 
        = vlSelfRef.carrierGen__DOT__muls_13__DOT__io_cmd_valid_delay_3;
    vlSelfRef.carrierGen__DOT__muls_13_io_rsp_payload_re 
        = vlSelfRef.carrierGen__DOT__muls_13__DOT__io_rsp_payload_re;
    vlSelfRef.carrierGen__DOT__muls_13_io_rsp_payload_im 
        = vlSelfRef.carrierGen__DOT__muls_13__DOT__io_rsp_payload_im;
    vlSelfRef.carrierGen__DOT__muls_13__DOT__mulM = 
        (0x00000001ffffffffULL & VL_MULS_QQQ(33, (0x00000001ffffffffULL 
                                                  & VL_EXTENDS_QI(33,17, vlSelfRef.carrierGen__DOT__muls_13__DOT__da1)), 
                                             (0x00000001ffffffffULL 
                                              & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.carrierGen__DOT__muls_13__DOT__bi1)))));
    vlSelfRef.carrierGen__DOT__io_carrier_13_re = vlSelfRef.carrierGen__DOT__muls_13_io_rsp_payload_re;
    vlSelfRef.carrierGen__DOT__io_carrier_13_im = vlSelfRef.carrierGen__DOT__muls_13_io_rsp_payload_im;
    vlSelfRef.carrierGen__DOT__muls_13__DOT__ai0 = vlSelfRef.carrierGen__DOT__muls_13__DOT__io_cmd_payload_a_im;
    vlSelfRef.carrierGen__DOT__muls_13__DOT__ar0 = vlSelfRef.carrierGen__DOT__muls_13__DOT__io_cmd_payload_a_re;
    vlSelfRef.carrierGen__DOT__muls_13__DOT__io_cmd_valid_delay_3 
        = vlSelfRef.carrierGen__DOT__muls_13__DOT__io_cmd_valid_delay_2;
    vlSelfRef.carrierGen_io_carrier_13_re = vlSelfRef.carrierGen__DOT__io_carrier_13_re;
    vlSelfRef.carrierGen_io_carrier_13_im = vlSelfRef.carrierGen__DOT__io_carrier_13_im;
    vlSelfRef.carrierGen__DOT__muls_13__DOT___zz_da1_1 
        = ((0x00010000U & ((IData)(vlSelfRef.carrierGen__DOT__muls_13__DOT__ai0) 
                           << 1U)) | (IData)(vlSelfRef.carrierGen__DOT__muls_13__DOT__ai0));
    vlSelfRef.carrierGen__DOT__muls_13__DOT___zz_da1 
        = ((0x00010000U & ((IData)(vlSelfRef.carrierGen__DOT__muls_13__DOT__ar0) 
                           << 1U)) | (IData)(vlSelfRef.carrierGen__DOT__muls_13__DOT__ar0));
    vlSelfRef.carrierGen__DOT__muls_13__DOT__io_cmd_valid_delay_2 
        = vlSelfRef.carrierGen__DOT__muls_13__DOT__io_cmd_valid_delay_1;
    vlSelfRef.carrierGen__DOT__muls_13__DOT__io_cmd_valid_delay_1 = 1U;
}

void Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__26(Vtop_PulseGenerator* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__26\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_349;
    __VdfgRegularize_h6e95ff9d_0_349 = 0;
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_350;
    __VdfgRegularize_h6e95ff9d_0_350 = 0;
    // Body
    vlSelfRef.carrierGen__DOT__muls_14__DOT__db3 = 
        (0x0001ffffU & (vlSelfRef.carrierGen__DOT__muls_14__DOT___zz_db3 
                        - vlSelfRef.carrierGen__DOT__muls_14__DOT___zz_db3_1));
    vlSelfRef.carrierGen__DOT__muls_14__DOT__sb3 = 
        (0x0001ffffU & (vlSelfRef.carrierGen__DOT__muls_14__DOT___zz_sb3 
                        + vlSelfRef.carrierGen__DOT__muls_14__DOT___zz_sb3_1));
    vlSelfRef.carrierGen__DOT__muls_14__DOT__da1 = 
        (0x0001ffffU & (vlSelfRef.carrierGen__DOT__muls_14__DOT___zz_da1 
                        - vlSelfRef.carrierGen__DOT__muls_14__DOT___zz_da1_1));
    vlSelfRef.carrierGen__DOT__muls_14__DOT__pre4 = vlSelfRef.carrierGen__DOT__muls_14__DOT__mulPre;
    vlSelfRef.carrierGen__DOT__muls_14__DOT__pim4 = vlSelfRef.carrierGen__DOT__muls_14__DOT__mulPim;
    vlSelfRef.carrierGen__DOT__muls_14__DOT__sre5 = 
        (0x00000007ffffffffULL & (0x0000000000004000ULL 
                                  + vlSelfRef.carrierGen__DOT__muls_14__DOT___zz_sre5));
    vlSelfRef.carrierGen__DOT__muls_14__DOT__sim5 = 
        (0x00000007ffffffffULL & (0x0000000000004000ULL 
                                  + vlSelfRef.carrierGen__DOT__muls_14__DOT___zz_sim5));
    vlSelfRef.carrierGen__DOT__muls_14__DOT__br2 = vlSelfRef.carrierGen__DOT__muls_14__DOT__br1;
    vlSelfRef.carrierGen__DOT__muls_14__DOT__mcr4 = vlSelfRef.carrierGen__DOT__muls_14__DOT__m3;
    vlSelfRef.carrierGen__DOT__muls_14__DOT__mci4 = vlSelfRef.carrierGen__DOT__muls_14__DOT__m3;
    vlSelfRef.carrierGen__DOT__muls_14__DOT__bi2 = vlSelfRef.carrierGen__DOT__muls_14__DOT__bi1;
    vlSelfRef.carrierGen__DOT__muls_14__DOT__ai3 = vlSelfRef.carrierGen__DOT__muls_14__DOT__ai2;
    vlSelfRef.carrierGen__DOT__muls_14__DOT__ar3 = vlSelfRef.carrierGen__DOT__muls_14__DOT__ar2;
    vlSelfRef.carrierGen__DOT__muls_14__DOT__io_cmd_valid_delay_6 
        = vlSelfRef.carrierGen__DOT__muls_14__DOT__io_cmd_valid_delay_5;
    vlSelfRef.carrierGen__DOT__muls_14__DOT___zz_sre5_1 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_14__DOT__pre4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_14__DOT__pre4);
    vlSelfRef.carrierGen__DOT__muls_14__DOT___zz_sim5_1 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_14__DOT__pim4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_14__DOT__pim4);
    vlSelfRef.carrierGen__DOT__muls_14__DOT___zz_reN 
        = (0x000fffffU & (IData)((vlSelfRef.carrierGen__DOT__muls_14__DOT__sre5 
                                  >> 0x0fU)));
    vlSelfRef.carrierGen__DOT__muls_14__DOT___zz_imN 
        = (0x000fffffU & (IData)((vlSelfRef.carrierGen__DOT__muls_14__DOT__sim5 
                                  >> 0x0fU)));
    __VdfgRegularize_h6e95ff9d_0_349 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.carrierGen__DOT__muls_14__DOT__br2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.carrierGen__DOT__muls_14__DOT__br2));
    vlSelfRef.carrierGen__DOT__muls_14__DOT__br1 = vlSelfRef.carrierGen__DOT__muls_14__DOT__br0;
    vlSelfRef.carrierGen__DOT__muls_14__DOT___zz_sre5_2 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_14__DOT__mcr4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_14__DOT__mcr4);
    vlSelfRef.carrierGen__DOT__muls_14__DOT___zz_sim5_2 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_14__DOT__mci4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_14__DOT__mci4);
    vlSelfRef.carrierGen__DOT__muls_14__DOT__m3 = vlSelfRef.carrierGen__DOT__muls_14__DOT__m2;
    __VdfgRegularize_h6e95ff9d_0_350 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.carrierGen__DOT__muls_14__DOT__bi2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.carrierGen__DOT__muls_14__DOT__bi2));
    vlSelfRef.carrierGen__DOT__muls_14__DOT__bi1 = vlSelfRef.carrierGen__DOT__muls_14__DOT__bi0;
    vlSelfRef.carrierGen__DOT__muls_14__DOT__mulPim 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.carrierGen__DOT__muls_14__DOT__sb3)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.carrierGen__DOT__muls_14__DOT__ai3)))));
    vlSelfRef.carrierGen__DOT__muls_14__DOT__ai2 = vlSelfRef.carrierGen__DOT__muls_14__DOT__ai1;
    vlSelfRef.carrierGen__DOT__muls_14__DOT__mulPre 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.carrierGen__DOT__muls_14__DOT__db3)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.carrierGen__DOT__muls_14__DOT__ar3)))));
    vlSelfRef.carrierGen__DOT__muls_14__DOT__ar2 = vlSelfRef.carrierGen__DOT__muls_14__DOT__ar1;
    vlSelfRef.carrierGen__DOT__muls_14__DOT__io_rsp_valid 
        = vlSelfRef.carrierGen__DOT__muls_14__DOT__io_cmd_valid_delay_6;
    vlSelfRef.carrierGen__DOT__muls_14__DOT__io_cmd_valid_delay_5 
        = vlSelfRef.carrierGen__DOT__muls_14__DOT__io_cmd_valid_delay_4;
    vlSelfRef.carrierGen__DOT__muls_14__DOT__reN = 
        (0x0000ffffU & vlSelfRef.carrierGen__DOT__muls_14__DOT___zz_reN);
    vlSelfRef.carrierGen__DOT__muls_14__DOT__imN = 
        (0x0000ffffU & vlSelfRef.carrierGen__DOT__muls_14__DOT___zz_imN);
    vlSelfRef.carrierGen__DOT__muls_14__DOT___zz_db3 
        = __VdfgRegularize_h6e95ff9d_0_349;
    vlSelfRef.carrierGen__DOT__muls_14__DOT___zz_sb3 
        = __VdfgRegularize_h6e95ff9d_0_349;
    vlSelfRef.carrierGen__DOT__muls_14__DOT___zz_sre5 
        = (0x00000007ffffffffULL & (vlSelfRef.carrierGen__DOT__muls_14__DOT___zz_sre5_1 
                                    + vlSelfRef.carrierGen__DOT__muls_14__DOT___zz_sre5_2));
    vlSelfRef.carrierGen__DOT__muls_14__DOT___zz_sim5 
        = (0x00000007ffffffffULL & (vlSelfRef.carrierGen__DOT__muls_14__DOT___zz_sim5_1 
                                    + vlSelfRef.carrierGen__DOT__muls_14__DOT___zz_sim5_2));
    vlSelfRef.carrierGen__DOT__muls_14__DOT___zz_db3_1 
        = __VdfgRegularize_h6e95ff9d_0_350;
    vlSelfRef.carrierGen__DOT__muls_14__DOT___zz_sb3_1 
        = __VdfgRegularize_h6e95ff9d_0_350;
    vlSelfRef.carrierGen__DOT__muls_14_io_rsp_valid 
        = vlSelfRef.carrierGen__DOT__muls_14__DOT__io_rsp_valid;
    vlSelfRef.carrierGen__DOT__muls_14__DOT__io_rsp_payload_re 
        = vlSelfRef.carrierGen__DOT__muls_14__DOT__reN;
    vlSelfRef.carrierGen__DOT__muls_14__DOT__io_rsp_payload_im 
        = vlSelfRef.carrierGen__DOT__muls_14__DOT__imN;
    vlSelfRef.carrierGen__DOT__muls_14__DOT__br0 = vlSelfRef.carrierGen__DOT__muls_14__DOT__io_cmd_payload_b_re;
    vlSelfRef.carrierGen__DOT__muls_14__DOT__m2 = vlSelfRef.carrierGen__DOT__muls_14__DOT__mulM;
    vlSelfRef.carrierGen__DOT__muls_14__DOT__bi0 = vlSelfRef.carrierGen__DOT__muls_14__DOT__io_cmd_payload_b_im;
    vlSelfRef.carrierGen__DOT__muls_14__DOT__ai1 = vlSelfRef.carrierGen__DOT__muls_14__DOT__ai0;
    vlSelfRef.carrierGen__DOT__muls_14__DOT__ar1 = vlSelfRef.carrierGen__DOT__muls_14__DOT__ar0;
    vlSelfRef.carrierGen__DOT__muls_14__DOT__io_cmd_valid_delay_4 
        = vlSelfRef.carrierGen__DOT__muls_14__DOT__io_cmd_valid_delay_3;
    vlSelfRef.carrierGen__DOT__muls_14_io_rsp_payload_re 
        = vlSelfRef.carrierGen__DOT__muls_14__DOT__io_rsp_payload_re;
    vlSelfRef.carrierGen__DOT__muls_14_io_rsp_payload_im 
        = vlSelfRef.carrierGen__DOT__muls_14__DOT__io_rsp_payload_im;
    vlSelfRef.carrierGen__DOT__muls_14__DOT__mulM = 
        (0x00000001ffffffffULL & VL_MULS_QQQ(33, (0x00000001ffffffffULL 
                                                  & VL_EXTENDS_QI(33,17, vlSelfRef.carrierGen__DOT__muls_14__DOT__da1)), 
                                             (0x00000001ffffffffULL 
                                              & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.carrierGen__DOT__muls_14__DOT__bi1)))));
    vlSelfRef.carrierGen__DOT__io_carrier_14_re = vlSelfRef.carrierGen__DOT__muls_14_io_rsp_payload_re;
    vlSelfRef.carrierGen__DOT__io_carrier_14_im = vlSelfRef.carrierGen__DOT__muls_14_io_rsp_payload_im;
    vlSelfRef.carrierGen__DOT__muls_14__DOT__ai0 = vlSelfRef.carrierGen__DOT__muls_14__DOT__io_cmd_payload_a_im;
    vlSelfRef.carrierGen__DOT__muls_14__DOT__ar0 = vlSelfRef.carrierGen__DOT__muls_14__DOT__io_cmd_payload_a_re;
    vlSelfRef.carrierGen__DOT__muls_14__DOT__io_cmd_valid_delay_3 
        = vlSelfRef.carrierGen__DOT__muls_14__DOT__io_cmd_valid_delay_2;
    vlSelfRef.carrierGen_io_carrier_14_re = vlSelfRef.carrierGen__DOT__io_carrier_14_re;
    vlSelfRef.carrierGen_io_carrier_14_im = vlSelfRef.carrierGen__DOT__io_carrier_14_im;
    vlSelfRef.carrierGen__DOT__muls_14__DOT___zz_da1_1 
        = ((0x00010000U & ((IData)(vlSelfRef.carrierGen__DOT__muls_14__DOT__ai0) 
                           << 1U)) | (IData)(vlSelfRef.carrierGen__DOT__muls_14__DOT__ai0));
    vlSelfRef.carrierGen__DOT__muls_14__DOT___zz_da1 
        = ((0x00010000U & ((IData)(vlSelfRef.carrierGen__DOT__muls_14__DOT__ar0) 
                           << 1U)) | (IData)(vlSelfRef.carrierGen__DOT__muls_14__DOT__ar0));
    vlSelfRef.carrierGen__DOT__muls_14__DOT__io_cmd_valid_delay_2 
        = vlSelfRef.carrierGen__DOT__muls_14__DOT__io_cmd_valid_delay_1;
    vlSelfRef.carrierGen__DOT__muls_14__DOT__io_cmd_valid_delay_1 = 1U;
}

void Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__27(Vtop_PulseGenerator* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__27\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_351;
    __VdfgRegularize_h6e95ff9d_0_351 = 0;
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_352;
    __VdfgRegularize_h6e95ff9d_0_352 = 0;
    // Body
    vlSelfRef.carrierGen__DOT__muls_15__DOT__db3 = 
        (0x0001ffffU & (vlSelfRef.carrierGen__DOT__muls_15__DOT___zz_db3 
                        - vlSelfRef.carrierGen__DOT__muls_15__DOT___zz_db3_1));
    vlSelfRef.carrierGen__DOT__muls_15__DOT__sb3 = 
        (0x0001ffffU & (vlSelfRef.carrierGen__DOT__muls_15__DOT___zz_sb3 
                        + vlSelfRef.carrierGen__DOT__muls_15__DOT___zz_sb3_1));
    vlSelfRef.carrierGen__DOT__muls_15__DOT__da1 = 
        (0x0001ffffU & (vlSelfRef.carrierGen__DOT__muls_15__DOT___zz_da1 
                        - vlSelfRef.carrierGen__DOT__muls_15__DOT___zz_da1_1));
    vlSelfRef.carrierGen__DOT__muls_15__DOT__pre4 = vlSelfRef.carrierGen__DOT__muls_15__DOT__mulPre;
    vlSelfRef.carrierGen__DOT__muls_15__DOT__pim4 = vlSelfRef.carrierGen__DOT__muls_15__DOT__mulPim;
    vlSelfRef.carrierGen__DOT__muls_15__DOT__sre5 = 
        (0x00000007ffffffffULL & (0x0000000000004000ULL 
                                  + vlSelfRef.carrierGen__DOT__muls_15__DOT___zz_sre5));
    vlSelfRef.carrierGen__DOT__muls_15__DOT__sim5 = 
        (0x00000007ffffffffULL & (0x0000000000004000ULL 
                                  + vlSelfRef.carrierGen__DOT__muls_15__DOT___zz_sim5));
    vlSelfRef.carrierGen__DOT__muls_15__DOT__br2 = vlSelfRef.carrierGen__DOT__muls_15__DOT__br1;
    vlSelfRef.carrierGen__DOT__muls_15__DOT__mcr4 = vlSelfRef.carrierGen__DOT__muls_15__DOT__m3;
    vlSelfRef.carrierGen__DOT__muls_15__DOT__mci4 = vlSelfRef.carrierGen__DOT__muls_15__DOT__m3;
    vlSelfRef.carrierGen__DOT__muls_15__DOT__bi2 = vlSelfRef.carrierGen__DOT__muls_15__DOT__bi1;
    vlSelfRef.carrierGen__DOT__muls_15__DOT__ai3 = vlSelfRef.carrierGen__DOT__muls_15__DOT__ai2;
    vlSelfRef.carrierGen__DOT__muls_15__DOT__ar3 = vlSelfRef.carrierGen__DOT__muls_15__DOT__ar2;
    vlSelfRef.carrierGen__DOT__muls_15__DOT__io_cmd_valid_delay_6 
        = vlSelfRef.carrierGen__DOT__muls_15__DOT__io_cmd_valid_delay_5;
    vlSelfRef.carrierGen__DOT__muls_15__DOT___zz_sre5_1 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_15__DOT__pre4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_15__DOT__pre4);
    vlSelfRef.carrierGen__DOT__muls_15__DOT___zz_sim5_1 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_15__DOT__pim4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_15__DOT__pim4);
    vlSelfRef.carrierGen__DOT__muls_15__DOT___zz_reN 
        = (0x000fffffU & (IData)((vlSelfRef.carrierGen__DOT__muls_15__DOT__sre5 
                                  >> 0x0fU)));
    vlSelfRef.carrierGen__DOT__muls_15__DOT___zz_imN 
        = (0x000fffffU & (IData)((vlSelfRef.carrierGen__DOT__muls_15__DOT__sim5 
                                  >> 0x0fU)));
    __VdfgRegularize_h6e95ff9d_0_351 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.carrierGen__DOT__muls_15__DOT__br2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.carrierGen__DOT__muls_15__DOT__br2));
    vlSelfRef.carrierGen__DOT__muls_15__DOT__br1 = vlSelfRef.carrierGen__DOT__muls_15__DOT__br0;
    vlSelfRef.carrierGen__DOT__muls_15__DOT___zz_sre5_2 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_15__DOT__mcr4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_15__DOT__mcr4);
    vlSelfRef.carrierGen__DOT__muls_15__DOT___zz_sim5_2 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.carrierGen__DOT__muls_15__DOT__mci4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.carrierGen__DOT__muls_15__DOT__mci4);
    vlSelfRef.carrierGen__DOT__muls_15__DOT__m3 = vlSelfRef.carrierGen__DOT__muls_15__DOT__m2;
    __VdfgRegularize_h6e95ff9d_0_352 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.carrierGen__DOT__muls_15__DOT__bi2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.carrierGen__DOT__muls_15__DOT__bi2));
    vlSelfRef.carrierGen__DOT__muls_15__DOT__bi1 = vlSelfRef.carrierGen__DOT__muls_15__DOT__bi0;
    vlSelfRef.carrierGen__DOT__muls_15__DOT__mulPim 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.carrierGen__DOT__muls_15__DOT__sb3)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.carrierGen__DOT__muls_15__DOT__ai3)))));
    vlSelfRef.carrierGen__DOT__muls_15__DOT__ai2 = vlSelfRef.carrierGen__DOT__muls_15__DOT__ai1;
    vlSelfRef.carrierGen__DOT__muls_15__DOT__mulPre 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.carrierGen__DOT__muls_15__DOT__db3)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.carrierGen__DOT__muls_15__DOT__ar3)))));
    vlSelfRef.carrierGen__DOT__muls_15__DOT__ar2 = vlSelfRef.carrierGen__DOT__muls_15__DOT__ar1;
    vlSelfRef.carrierGen__DOT__muls_15__DOT__io_rsp_valid 
        = vlSelfRef.carrierGen__DOT__muls_15__DOT__io_cmd_valid_delay_6;
    vlSelfRef.carrierGen__DOT__muls_15__DOT__io_cmd_valid_delay_5 
        = vlSelfRef.carrierGen__DOT__muls_15__DOT__io_cmd_valid_delay_4;
    vlSelfRef.carrierGen__DOT__muls_15__DOT__reN = 
        (0x0000ffffU & vlSelfRef.carrierGen__DOT__muls_15__DOT___zz_reN);
    vlSelfRef.carrierGen__DOT__muls_15__DOT__imN = 
        (0x0000ffffU & vlSelfRef.carrierGen__DOT__muls_15__DOT___zz_imN);
    vlSelfRef.carrierGen__DOT__muls_15__DOT___zz_db3 
        = __VdfgRegularize_h6e95ff9d_0_351;
    vlSelfRef.carrierGen__DOT__muls_15__DOT___zz_sb3 
        = __VdfgRegularize_h6e95ff9d_0_351;
    vlSelfRef.carrierGen__DOT__muls_15__DOT___zz_sre5 
        = (0x00000007ffffffffULL & (vlSelfRef.carrierGen__DOT__muls_15__DOT___zz_sre5_1 
                                    + vlSelfRef.carrierGen__DOT__muls_15__DOT___zz_sre5_2));
    vlSelfRef.carrierGen__DOT__muls_15__DOT___zz_sim5 
        = (0x00000007ffffffffULL & (vlSelfRef.carrierGen__DOT__muls_15__DOT___zz_sim5_1 
                                    + vlSelfRef.carrierGen__DOT__muls_15__DOT___zz_sim5_2));
    vlSelfRef.carrierGen__DOT__muls_15__DOT___zz_db3_1 
        = __VdfgRegularize_h6e95ff9d_0_352;
    vlSelfRef.carrierGen__DOT__muls_15__DOT___zz_sb3_1 
        = __VdfgRegularize_h6e95ff9d_0_352;
    vlSelfRef.carrierGen__DOT__muls_15_io_rsp_valid 
        = vlSelfRef.carrierGen__DOT__muls_15__DOT__io_rsp_valid;
    vlSelfRef.carrierGen__DOT__muls_15__DOT__io_rsp_payload_re 
        = vlSelfRef.carrierGen__DOT__muls_15__DOT__reN;
    vlSelfRef.carrierGen__DOT__muls_15__DOT__io_rsp_payload_im 
        = vlSelfRef.carrierGen__DOT__muls_15__DOT__imN;
    vlSelfRef.carrierGen__DOT__muls_15__DOT__br0 = vlSelfRef.carrierGen__DOT__muls_15__DOT__io_cmd_payload_b_re;
    vlSelfRef.carrierGen__DOT__muls_15__DOT__m2 = vlSelfRef.carrierGen__DOT__muls_15__DOT__mulM;
    vlSelfRef.carrierGen__DOT__muls_15__DOT__bi0 = vlSelfRef.carrierGen__DOT__muls_15__DOT__io_cmd_payload_b_im;
    vlSelfRef.carrierGen__DOT__muls_15__DOT__ai1 = vlSelfRef.carrierGen__DOT__muls_15__DOT__ai0;
    vlSelfRef.carrierGen__DOT__muls_15__DOT__ar1 = vlSelfRef.carrierGen__DOT__muls_15__DOT__ar0;
    vlSelfRef.carrierGen__DOT__muls_15__DOT__io_cmd_valid_delay_4 
        = vlSelfRef.carrierGen__DOT__muls_15__DOT__io_cmd_valid_delay_3;
    vlSelfRef.carrierGen__DOT__muls_15_io_rsp_payload_re 
        = vlSelfRef.carrierGen__DOT__muls_15__DOT__io_rsp_payload_re;
    vlSelfRef.carrierGen__DOT__muls_15_io_rsp_payload_im 
        = vlSelfRef.carrierGen__DOT__muls_15__DOT__io_rsp_payload_im;
    vlSelfRef.carrierGen__DOT__muls_15__DOT__mulM = 
        (0x00000001ffffffffULL & VL_MULS_QQQ(33, (0x00000001ffffffffULL 
                                                  & VL_EXTENDS_QI(33,17, vlSelfRef.carrierGen__DOT__muls_15__DOT__da1)), 
                                             (0x00000001ffffffffULL 
                                              & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.carrierGen__DOT__muls_15__DOT__bi1)))));
    vlSelfRef.carrierGen__DOT__io_carrier_15_re = vlSelfRef.carrierGen__DOT__muls_15_io_rsp_payload_re;
    vlSelfRef.carrierGen__DOT__io_carrier_15_im = vlSelfRef.carrierGen__DOT__muls_15_io_rsp_payload_im;
    vlSelfRef.carrierGen__DOT__muls_15__DOT__ai0 = vlSelfRef.carrierGen__DOT__muls_15__DOT__io_cmd_payload_a_im;
    vlSelfRef.carrierGen__DOT__muls_15__DOT__ar0 = vlSelfRef.carrierGen__DOT__muls_15__DOT__io_cmd_payload_a_re;
    vlSelfRef.carrierGen__DOT__muls_15__DOT__io_cmd_valid_delay_3 
        = vlSelfRef.carrierGen__DOT__muls_15__DOT__io_cmd_valid_delay_2;
    vlSelfRef.carrierGen_io_carrier_15_re = vlSelfRef.carrierGen__DOT__io_carrier_15_re;
    vlSelfRef.carrierGen_io_carrier_15_im = vlSelfRef.carrierGen__DOT__io_carrier_15_im;
    vlSelfRef.carrierGen__DOT__muls_15__DOT___zz_da1_1 
        = ((0x00010000U & ((IData)(vlSelfRef.carrierGen__DOT__muls_15__DOT__ai0) 
                           << 1U)) | (IData)(vlSelfRef.carrierGen__DOT__muls_15__DOT__ai0));
    vlSelfRef.carrierGen__DOT__muls_15__DOT___zz_da1 
        = ((0x00010000U & ((IData)(vlSelfRef.carrierGen__DOT__muls_15__DOT__ar0) 
                           << 1U)) | (IData)(vlSelfRef.carrierGen__DOT__muls_15__DOT__ar0));
    vlSelfRef.carrierGen__DOT__muls_15__DOT__io_cmd_valid_delay_2 
        = vlSelfRef.carrierGen__DOT__muls_15__DOT__io_cmd_valid_delay_1;
    vlSelfRef.carrierGen__DOT__muls_15__DOT__io_cmd_valid_delay_1 = 1U;
}

void Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__28(Vtop_PulseGenerator* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__28\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_353;
    __VdfgRegularize_h6e95ff9d_0_353 = 0;
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_354;
    __VdfgRegularize_h6e95ff9d_0_354 = 0;
    // Body
    vlSelfRef.envMuls_0__DOT__db3 = (0x0001ffffU & 
                                     (vlSelfRef.envMuls_0__DOT___zz_db3 
                                      - vlSelfRef.envMuls_0__DOT___zz_db3_1));
    vlSelfRef.envMuls_0__DOT__sb3 = (0x0001ffffU & 
                                     (vlSelfRef.envMuls_0__DOT___zz_sb3 
                                      + vlSelfRef.envMuls_0__DOT___zz_sb3_1));
    vlSelfRef.envMuls_0__DOT__da1 = (0x0001ffffU & 
                                     (vlSelfRef.envMuls_0__DOT___zz_da1 
                                      - vlSelfRef.envMuls_0__DOT___zz_da1_1));
    vlSelfRef.envMuls_0__DOT__pre4 = vlSelfRef.envMuls_0__DOT__mulPre;
    vlSelfRef.envMuls_0__DOT__pim4 = vlSelfRef.envMuls_0__DOT__mulPim;
    vlSelfRef.envMuls_0__DOT__sre5 = (0x00000007ffffffffULL 
                                      & (0x0000000000004000ULL 
                                         + vlSelfRef.envMuls_0__DOT___zz_sre5));
    vlSelfRef.envMuls_0__DOT__sim5 = (0x00000007ffffffffULL 
                                      & (0x0000000000004000ULL 
                                         + vlSelfRef.envMuls_0__DOT___zz_sim5));
    vlSelfRef.envMuls_0__DOT__br2 = vlSelfRef.envMuls_0__DOT__br1;
    vlSelfRef.envMuls_0__DOT__mcr4 = vlSelfRef.envMuls_0__DOT__m3;
    vlSelfRef.envMuls_0__DOT__mci4 = vlSelfRef.envMuls_0__DOT__m3;
    vlSelfRef.envMuls_0__DOT__bi2 = vlSelfRef.envMuls_0__DOT__bi1;
    vlSelfRef.envMuls_0__DOT__ai3 = vlSelfRef.envMuls_0__DOT__ai2;
    vlSelfRef.envMuls_0__DOT__ar3 = vlSelfRef.envMuls_0__DOT__ar2;
    vlSelfRef.envMuls_0__DOT__io_cmd_valid_delay_6 
        = vlSelfRef.envMuls_0__DOT__io_cmd_valid_delay_5;
    vlSelfRef.envMuls_0__DOT___zz_sre5_1 = (((QData)((IData)(
                                                             (3U 
                                                              & (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelfRef.envMuls_0__DOT__pre4 
                                                                                >> 0x00000020U)))))))) 
                                             << 0x00000021U) 
                                            | vlSelfRef.envMuls_0__DOT__pre4);
    vlSelfRef.envMuls_0__DOT___zz_sim5_1 = (((QData)((IData)(
                                                             (3U 
                                                              & (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelfRef.envMuls_0__DOT__pim4 
                                                                                >> 0x00000020U)))))))) 
                                             << 0x00000021U) 
                                            | vlSelfRef.envMuls_0__DOT__pim4);
    vlSelfRef.envMuls_0__DOT___zz_reN = (0x000fffffU 
                                         & (IData)(
                                                   (vlSelfRef.envMuls_0__DOT__sre5 
                                                    >> 0x0fU)));
    vlSelfRef.envMuls_0__DOT___zz_imN = (0x000fffffU 
                                         & (IData)(
                                                   (vlSelfRef.envMuls_0__DOT__sim5 
                                                    >> 0x0fU)));
    __VdfgRegularize_h6e95ff9d_0_353 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.envMuls_0__DOT__br2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.envMuls_0__DOT__br2));
    vlSelfRef.envMuls_0__DOT__br1 = vlSelfRef.envMuls_0__DOT__br0;
    vlSelfRef.envMuls_0__DOT___zz_sre5_2 = (((QData)((IData)(
                                                             (3U 
                                                              & (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelfRef.envMuls_0__DOT__mcr4 
                                                                                >> 0x00000020U)))))))) 
                                             << 0x00000021U) 
                                            | vlSelfRef.envMuls_0__DOT__mcr4);
    vlSelfRef.envMuls_0__DOT___zz_sim5_2 = (((QData)((IData)(
                                                             (3U 
                                                              & (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelfRef.envMuls_0__DOT__mci4 
                                                                                >> 0x00000020U)))))))) 
                                             << 0x00000021U) 
                                            | vlSelfRef.envMuls_0__DOT__mci4);
    vlSelfRef.envMuls_0__DOT__m3 = vlSelfRef.envMuls_0__DOT__m2;
    __VdfgRegularize_h6e95ff9d_0_354 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.envMuls_0__DOT__bi2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.envMuls_0__DOT__bi2));
    vlSelfRef.envMuls_0__DOT__bi1 = vlSelfRef.envMuls_0__DOT__bi0;
    vlSelfRef.envMuls_0__DOT__mulPim = (0x00000001ffffffffULL 
                                        & VL_MULS_QQQ(33, 
                                                      (0x00000001ffffffffULL 
                                                       & VL_EXTENDS_QI(33,17, vlSelfRef.envMuls_0__DOT__sb3)), 
                                                      (0x00000001ffffffffULL 
                                                       & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.envMuls_0__DOT__ai3)))));
    vlSelfRef.envMuls_0__DOT__ai2 = vlSelfRef.envMuls_0__DOT__ai1;
    vlSelfRef.envMuls_0__DOT__mulPre = (0x00000001ffffffffULL 
                                        & VL_MULS_QQQ(33, 
                                                      (0x00000001ffffffffULL 
                                                       & VL_EXTENDS_QI(33,17, vlSelfRef.envMuls_0__DOT__db3)), 
                                                      (0x00000001ffffffffULL 
                                                       & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.envMuls_0__DOT__ar3)))));
    vlSelfRef.envMuls_0__DOT__ar2 = vlSelfRef.envMuls_0__DOT__ar1;
    vlSelfRef.envMuls_0__DOT__io_rsp_valid = vlSelfRef.envMuls_0__DOT__io_cmd_valid_delay_6;
    vlSelfRef.envMuls_0__DOT__io_cmd_valid_delay_5 
        = vlSelfRef.envMuls_0__DOT__io_cmd_valid_delay_4;
    vlSelfRef.envMuls_0__DOT__reN = (0x0000ffffU & vlSelfRef.envMuls_0__DOT___zz_reN);
    vlSelfRef.envMuls_0__DOT__imN = (0x0000ffffU & vlSelfRef.envMuls_0__DOT___zz_imN);
    vlSelfRef.envMuls_0__DOT___zz_db3 = __VdfgRegularize_h6e95ff9d_0_353;
    vlSelfRef.envMuls_0__DOT___zz_sb3 = __VdfgRegularize_h6e95ff9d_0_353;
    vlSelfRef.envMuls_0__DOT___zz_sre5 = (0x00000007ffffffffULL 
                                          & (vlSelfRef.envMuls_0__DOT___zz_sre5_1 
                                             + vlSelfRef.envMuls_0__DOT___zz_sre5_2));
    vlSelfRef.envMuls_0__DOT___zz_sim5 = (0x00000007ffffffffULL 
                                          & (vlSelfRef.envMuls_0__DOT___zz_sim5_1 
                                             + vlSelfRef.envMuls_0__DOT___zz_sim5_2));
    vlSelfRef.envMuls_0__DOT___zz_db3_1 = __VdfgRegularize_h6e95ff9d_0_354;
    vlSelfRef.envMuls_0__DOT___zz_sb3_1 = __VdfgRegularize_h6e95ff9d_0_354;
    vlSelfRef.envMuls_0_io_rsp_valid = vlSelfRef.envMuls_0__DOT__io_rsp_valid;
    vlSelfRef.envMuls_0__DOT__io_rsp_payload_re = vlSelfRef.envMuls_0__DOT__reN;
    vlSelfRef.envMuls_0__DOT__io_rsp_payload_im = vlSelfRef.envMuls_0__DOT__imN;
    vlSelfRef.envMuls_0__DOT__br0 = vlSelfRef.envMuls_0__DOT__io_cmd_payload_b_re;
    vlSelfRef.envMuls_0__DOT__m2 = vlSelfRef.envMuls_0__DOT__mulM;
    vlSelfRef.envMuls_0__DOT__bi0 = vlSelfRef.envMuls_0__DOT__io_cmd_payload_b_im;
    vlSelfRef.envMuls_0__DOT__ai1 = vlSelfRef.envMuls_0__DOT__ai0;
    vlSelfRef.envMuls_0__DOT__ar1 = vlSelfRef.envMuls_0__DOT__ar0;
    vlSelfRef.envMuls_0__DOT__io_cmd_valid_delay_4 
        = vlSelfRef.envMuls_0__DOT__io_cmd_valid_delay_3;
    vlSelfRef.envMuls_0_io_rsp_payload_im = vlSelfRef.envMuls_0__DOT__io_rsp_payload_im;
    vlSelfRef.envMuls_0__DOT__mulM = (0x00000001ffffffffULL 
                                      & VL_MULS_QQQ(33, 
                                                    (0x00000001ffffffffULL 
                                                     & VL_EXTENDS_QI(33,17, vlSelfRef.envMuls_0__DOT__da1)), 
                                                    (0x00000001ffffffffULL 
                                                     & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.envMuls_0__DOT__bi1)))));
    vlSelfRef.envMuls_0__DOT__ai0 = vlSelfRef.envMuls_0__DOT__io_cmd_payload_a_im;
    vlSelfRef.envMuls_0__DOT__ar0 = vlSelfRef.envMuls_0__DOT__io_cmd_payload_a_re;
    vlSelfRef.envMuls_0__DOT__io_cmd_valid_delay_3 
        = vlSelfRef.envMuls_0__DOT__io_cmd_valid_delay_2;
    vlSelfRef.envMuls_0__DOT___zz_da1_1 = ((0x00010000U 
                                            & ((IData)(vlSelfRef.envMuls_0__DOT__ai0) 
                                               << 1U)) 
                                           | (IData)(vlSelfRef.envMuls_0__DOT__ai0));
    vlSelfRef.envMuls_0__DOT___zz_da1 = ((0x00010000U 
                                          & ((IData)(vlSelfRef.envMuls_0__DOT__ar0) 
                                             << 1U)) 
                                         | (IData)(vlSelfRef.envMuls_0__DOT__ar0));
    vlSelfRef.envMuls_0__DOT__io_cmd_valid_delay_2 
        = vlSelfRef.envMuls_0__DOT__io_cmd_valid_delay_1;
    vlSelfRef.envMuls_0__DOT__io_cmd_valid_delay_1 = 1U;
}

void Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__29(Vtop_PulseGenerator* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__29\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_355;
    __VdfgRegularize_h6e95ff9d_0_355 = 0;
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_356;
    __VdfgRegularize_h6e95ff9d_0_356 = 0;
    // Body
    vlSelfRef.envMuls_1__DOT__db3 = (0x0001ffffU & 
                                     (vlSelfRef.envMuls_1__DOT___zz_db3 
                                      - vlSelfRef.envMuls_1__DOT___zz_db3_1));
    vlSelfRef.envMuls_1__DOT__sb3 = (0x0001ffffU & 
                                     (vlSelfRef.envMuls_1__DOT___zz_sb3 
                                      + vlSelfRef.envMuls_1__DOT___zz_sb3_1));
    vlSelfRef.envMuls_1__DOT__da1 = (0x0001ffffU & 
                                     (vlSelfRef.envMuls_1__DOT___zz_da1 
                                      - vlSelfRef.envMuls_1__DOT___zz_da1_1));
    vlSelfRef.envMuls_1__DOT__pre4 = vlSelfRef.envMuls_1__DOT__mulPre;
    vlSelfRef.envMuls_1__DOT__pim4 = vlSelfRef.envMuls_1__DOT__mulPim;
    vlSelfRef.envMuls_1__DOT__sre5 = (0x00000007ffffffffULL 
                                      & (0x0000000000004000ULL 
                                         + vlSelfRef.envMuls_1__DOT___zz_sre5));
    vlSelfRef.envMuls_1__DOT__sim5 = (0x00000007ffffffffULL 
                                      & (0x0000000000004000ULL 
                                         + vlSelfRef.envMuls_1__DOT___zz_sim5));
    vlSelfRef.envMuls_1__DOT__br2 = vlSelfRef.envMuls_1__DOT__br1;
    vlSelfRef.envMuls_1__DOT__mcr4 = vlSelfRef.envMuls_1__DOT__m3;
    vlSelfRef.envMuls_1__DOT__mci4 = vlSelfRef.envMuls_1__DOT__m3;
    vlSelfRef.envMuls_1__DOT__bi2 = vlSelfRef.envMuls_1__DOT__bi1;
    vlSelfRef.envMuls_1__DOT__ai3 = vlSelfRef.envMuls_1__DOT__ai2;
    vlSelfRef.envMuls_1__DOT__ar3 = vlSelfRef.envMuls_1__DOT__ar2;
    vlSelfRef.envMuls_1__DOT__io_cmd_valid_delay_6 
        = vlSelfRef.envMuls_1__DOT__io_cmd_valid_delay_5;
    vlSelfRef.envMuls_1__DOT___zz_sre5_1 = (((QData)((IData)(
                                                             (3U 
                                                              & (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelfRef.envMuls_1__DOT__pre4 
                                                                                >> 0x00000020U)))))))) 
                                             << 0x00000021U) 
                                            | vlSelfRef.envMuls_1__DOT__pre4);
    vlSelfRef.envMuls_1__DOT___zz_sim5_1 = (((QData)((IData)(
                                                             (3U 
                                                              & (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelfRef.envMuls_1__DOT__pim4 
                                                                                >> 0x00000020U)))))))) 
                                             << 0x00000021U) 
                                            | vlSelfRef.envMuls_1__DOT__pim4);
    vlSelfRef.envMuls_1__DOT___zz_reN = (0x000fffffU 
                                         & (IData)(
                                                   (vlSelfRef.envMuls_1__DOT__sre5 
                                                    >> 0x0fU)));
    vlSelfRef.envMuls_1__DOT___zz_imN = (0x000fffffU 
                                         & (IData)(
                                                   (vlSelfRef.envMuls_1__DOT__sim5 
                                                    >> 0x0fU)));
    __VdfgRegularize_h6e95ff9d_0_355 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.envMuls_1__DOT__br2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.envMuls_1__DOT__br2));
    vlSelfRef.envMuls_1__DOT__br1 = vlSelfRef.envMuls_1__DOT__br0;
    vlSelfRef.envMuls_1__DOT___zz_sre5_2 = (((QData)((IData)(
                                                             (3U 
                                                              & (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelfRef.envMuls_1__DOT__mcr4 
                                                                                >> 0x00000020U)))))))) 
                                             << 0x00000021U) 
                                            | vlSelfRef.envMuls_1__DOT__mcr4);
    vlSelfRef.envMuls_1__DOT___zz_sim5_2 = (((QData)((IData)(
                                                             (3U 
                                                              & (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelfRef.envMuls_1__DOT__mci4 
                                                                                >> 0x00000020U)))))))) 
                                             << 0x00000021U) 
                                            | vlSelfRef.envMuls_1__DOT__mci4);
    vlSelfRef.envMuls_1__DOT__m3 = vlSelfRef.envMuls_1__DOT__m2;
    __VdfgRegularize_h6e95ff9d_0_356 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.envMuls_1__DOT__bi2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.envMuls_1__DOT__bi2));
    vlSelfRef.envMuls_1__DOT__bi1 = vlSelfRef.envMuls_1__DOT__bi0;
    vlSelfRef.envMuls_1__DOT__mulPim = (0x00000001ffffffffULL 
                                        & VL_MULS_QQQ(33, 
                                                      (0x00000001ffffffffULL 
                                                       & VL_EXTENDS_QI(33,17, vlSelfRef.envMuls_1__DOT__sb3)), 
                                                      (0x00000001ffffffffULL 
                                                       & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.envMuls_1__DOT__ai3)))));
    vlSelfRef.envMuls_1__DOT__ai2 = vlSelfRef.envMuls_1__DOT__ai1;
    vlSelfRef.envMuls_1__DOT__mulPre = (0x00000001ffffffffULL 
                                        & VL_MULS_QQQ(33, 
                                                      (0x00000001ffffffffULL 
                                                       & VL_EXTENDS_QI(33,17, vlSelfRef.envMuls_1__DOT__db3)), 
                                                      (0x00000001ffffffffULL 
                                                       & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.envMuls_1__DOT__ar3)))));
    vlSelfRef.envMuls_1__DOT__ar2 = vlSelfRef.envMuls_1__DOT__ar1;
    vlSelfRef.envMuls_1__DOT__io_rsp_valid = vlSelfRef.envMuls_1__DOT__io_cmd_valid_delay_6;
    vlSelfRef.envMuls_1__DOT__io_cmd_valid_delay_5 
        = vlSelfRef.envMuls_1__DOT__io_cmd_valid_delay_4;
    vlSelfRef.envMuls_1__DOT__reN = (0x0000ffffU & vlSelfRef.envMuls_1__DOT___zz_reN);
    vlSelfRef.envMuls_1__DOT__imN = (0x0000ffffU & vlSelfRef.envMuls_1__DOT___zz_imN);
    vlSelfRef.envMuls_1__DOT___zz_db3 = __VdfgRegularize_h6e95ff9d_0_355;
    vlSelfRef.envMuls_1__DOT___zz_sb3 = __VdfgRegularize_h6e95ff9d_0_355;
    vlSelfRef.envMuls_1__DOT___zz_sre5 = (0x00000007ffffffffULL 
                                          & (vlSelfRef.envMuls_1__DOT___zz_sre5_1 
                                             + vlSelfRef.envMuls_1__DOT___zz_sre5_2));
    vlSelfRef.envMuls_1__DOT___zz_sim5 = (0x00000007ffffffffULL 
                                          & (vlSelfRef.envMuls_1__DOT___zz_sim5_1 
                                             + vlSelfRef.envMuls_1__DOT___zz_sim5_2));
    vlSelfRef.envMuls_1__DOT___zz_db3_1 = __VdfgRegularize_h6e95ff9d_0_356;
    vlSelfRef.envMuls_1__DOT___zz_sb3_1 = __VdfgRegularize_h6e95ff9d_0_356;
    vlSelfRef.envMuls_1_io_rsp_valid = vlSelfRef.envMuls_1__DOT__io_rsp_valid;
    vlSelfRef.envMuls_1__DOT__io_rsp_payload_re = vlSelfRef.envMuls_1__DOT__reN;
    vlSelfRef.envMuls_1__DOT__io_rsp_payload_im = vlSelfRef.envMuls_1__DOT__imN;
    vlSelfRef.envMuls_1__DOT__br0 = vlSelfRef.envMuls_1__DOT__io_cmd_payload_b_re;
    vlSelfRef.envMuls_1__DOT__m2 = vlSelfRef.envMuls_1__DOT__mulM;
    vlSelfRef.envMuls_1__DOT__bi0 = vlSelfRef.envMuls_1__DOT__io_cmd_payload_b_im;
    vlSelfRef.envMuls_1__DOT__ai1 = vlSelfRef.envMuls_1__DOT__ai0;
    vlSelfRef.envMuls_1__DOT__ar1 = vlSelfRef.envMuls_1__DOT__ar0;
    vlSelfRef.envMuls_1__DOT__io_cmd_valid_delay_4 
        = vlSelfRef.envMuls_1__DOT__io_cmd_valid_delay_3;
    vlSelfRef.envMuls_1_io_rsp_payload_im = vlSelfRef.envMuls_1__DOT__io_rsp_payload_im;
    vlSelfRef.envMuls_1__DOT__mulM = (0x00000001ffffffffULL 
                                      & VL_MULS_QQQ(33, 
                                                    (0x00000001ffffffffULL 
                                                     & VL_EXTENDS_QI(33,17, vlSelfRef.envMuls_1__DOT__da1)), 
                                                    (0x00000001ffffffffULL 
                                                     & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.envMuls_1__DOT__bi1)))));
    vlSelfRef.envMuls_1__DOT__ai0 = vlSelfRef.envMuls_1__DOT__io_cmd_payload_a_im;
    vlSelfRef.envMuls_1__DOT__ar0 = vlSelfRef.envMuls_1__DOT__io_cmd_payload_a_re;
    vlSelfRef.envMuls_1__DOT__io_cmd_valid_delay_3 
        = vlSelfRef.envMuls_1__DOT__io_cmd_valid_delay_2;
    vlSelfRef.envMuls_1__DOT___zz_da1_1 = ((0x00010000U 
                                            & ((IData)(vlSelfRef.envMuls_1__DOT__ai0) 
                                               << 1U)) 
                                           | (IData)(vlSelfRef.envMuls_1__DOT__ai0));
    vlSelfRef.envMuls_1__DOT___zz_da1 = ((0x00010000U 
                                          & ((IData)(vlSelfRef.envMuls_1__DOT__ar0) 
                                             << 1U)) 
                                         | (IData)(vlSelfRef.envMuls_1__DOT__ar0));
    vlSelfRef.envMuls_1__DOT__io_cmd_valid_delay_2 
        = vlSelfRef.envMuls_1__DOT__io_cmd_valid_delay_1;
    vlSelfRef.envMuls_1__DOT__io_cmd_valid_delay_1 = 1U;
}

void Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__30(Vtop_PulseGenerator* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__30\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_357;
    __VdfgRegularize_h6e95ff9d_0_357 = 0;
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_358;
    __VdfgRegularize_h6e95ff9d_0_358 = 0;
    // Body
    vlSelfRef.envMuls_2__DOT__db3 = (0x0001ffffU & 
                                     (vlSelfRef.envMuls_2__DOT___zz_db3 
                                      - vlSelfRef.envMuls_2__DOT___zz_db3_1));
    vlSelfRef.envMuls_2__DOT__sb3 = (0x0001ffffU & 
                                     (vlSelfRef.envMuls_2__DOT___zz_sb3 
                                      + vlSelfRef.envMuls_2__DOT___zz_sb3_1));
    vlSelfRef.envMuls_2__DOT__da1 = (0x0001ffffU & 
                                     (vlSelfRef.envMuls_2__DOT___zz_da1 
                                      - vlSelfRef.envMuls_2__DOT___zz_da1_1));
    vlSelfRef.envMuls_2__DOT__pre4 = vlSelfRef.envMuls_2__DOT__mulPre;
    vlSelfRef.envMuls_2__DOT__pim4 = vlSelfRef.envMuls_2__DOT__mulPim;
    vlSelfRef.envMuls_2__DOT__sre5 = (0x00000007ffffffffULL 
                                      & (0x0000000000004000ULL 
                                         + vlSelfRef.envMuls_2__DOT___zz_sre5));
    vlSelfRef.envMuls_2__DOT__sim5 = (0x00000007ffffffffULL 
                                      & (0x0000000000004000ULL 
                                         + vlSelfRef.envMuls_2__DOT___zz_sim5));
    vlSelfRef.envMuls_2__DOT__br2 = vlSelfRef.envMuls_2__DOT__br1;
    vlSelfRef.envMuls_2__DOT__mcr4 = vlSelfRef.envMuls_2__DOT__m3;
    vlSelfRef.envMuls_2__DOT__mci4 = vlSelfRef.envMuls_2__DOT__m3;
    vlSelfRef.envMuls_2__DOT__bi2 = vlSelfRef.envMuls_2__DOT__bi1;
    vlSelfRef.envMuls_2__DOT__ai3 = vlSelfRef.envMuls_2__DOT__ai2;
    vlSelfRef.envMuls_2__DOT__ar3 = vlSelfRef.envMuls_2__DOT__ar2;
    vlSelfRef.envMuls_2__DOT__io_cmd_valid_delay_6 
        = vlSelfRef.envMuls_2__DOT__io_cmd_valid_delay_5;
    vlSelfRef.envMuls_2__DOT___zz_sre5_1 = (((QData)((IData)(
                                                             (3U 
                                                              & (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelfRef.envMuls_2__DOT__pre4 
                                                                                >> 0x00000020U)))))))) 
                                             << 0x00000021U) 
                                            | vlSelfRef.envMuls_2__DOT__pre4);
    vlSelfRef.envMuls_2__DOT___zz_sim5_1 = (((QData)((IData)(
                                                             (3U 
                                                              & (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelfRef.envMuls_2__DOT__pim4 
                                                                                >> 0x00000020U)))))))) 
                                             << 0x00000021U) 
                                            | vlSelfRef.envMuls_2__DOT__pim4);
    vlSelfRef.envMuls_2__DOT___zz_reN = (0x000fffffU 
                                         & (IData)(
                                                   (vlSelfRef.envMuls_2__DOT__sre5 
                                                    >> 0x0fU)));
    vlSelfRef.envMuls_2__DOT___zz_imN = (0x000fffffU 
                                         & (IData)(
                                                   (vlSelfRef.envMuls_2__DOT__sim5 
                                                    >> 0x0fU)));
    __VdfgRegularize_h6e95ff9d_0_357 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.envMuls_2__DOT__br2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.envMuls_2__DOT__br2));
    vlSelfRef.envMuls_2__DOT__br1 = vlSelfRef.envMuls_2__DOT__br0;
    vlSelfRef.envMuls_2__DOT___zz_sre5_2 = (((QData)((IData)(
                                                             (3U 
                                                              & (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelfRef.envMuls_2__DOT__mcr4 
                                                                                >> 0x00000020U)))))))) 
                                             << 0x00000021U) 
                                            | vlSelfRef.envMuls_2__DOT__mcr4);
    vlSelfRef.envMuls_2__DOT___zz_sim5_2 = (((QData)((IData)(
                                                             (3U 
                                                              & (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelfRef.envMuls_2__DOT__mci4 
                                                                                >> 0x00000020U)))))))) 
                                             << 0x00000021U) 
                                            | vlSelfRef.envMuls_2__DOT__mci4);
    vlSelfRef.envMuls_2__DOT__m3 = vlSelfRef.envMuls_2__DOT__m2;
    __VdfgRegularize_h6e95ff9d_0_358 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.envMuls_2__DOT__bi2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.envMuls_2__DOT__bi2));
    vlSelfRef.envMuls_2__DOT__bi1 = vlSelfRef.envMuls_2__DOT__bi0;
    vlSelfRef.envMuls_2__DOT__mulPim = (0x00000001ffffffffULL 
                                        & VL_MULS_QQQ(33, 
                                                      (0x00000001ffffffffULL 
                                                       & VL_EXTENDS_QI(33,17, vlSelfRef.envMuls_2__DOT__sb3)), 
                                                      (0x00000001ffffffffULL 
                                                       & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.envMuls_2__DOT__ai3)))));
    vlSelfRef.envMuls_2__DOT__ai2 = vlSelfRef.envMuls_2__DOT__ai1;
    vlSelfRef.envMuls_2__DOT__mulPre = (0x00000001ffffffffULL 
                                        & VL_MULS_QQQ(33, 
                                                      (0x00000001ffffffffULL 
                                                       & VL_EXTENDS_QI(33,17, vlSelfRef.envMuls_2__DOT__db3)), 
                                                      (0x00000001ffffffffULL 
                                                       & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.envMuls_2__DOT__ar3)))));
    vlSelfRef.envMuls_2__DOT__ar2 = vlSelfRef.envMuls_2__DOT__ar1;
    vlSelfRef.envMuls_2__DOT__io_rsp_valid = vlSelfRef.envMuls_2__DOT__io_cmd_valid_delay_6;
    vlSelfRef.envMuls_2__DOT__io_cmd_valid_delay_5 
        = vlSelfRef.envMuls_2__DOT__io_cmd_valid_delay_4;
    vlSelfRef.envMuls_2__DOT__reN = (0x0000ffffU & vlSelfRef.envMuls_2__DOT___zz_reN);
    vlSelfRef.envMuls_2__DOT__imN = (0x0000ffffU & vlSelfRef.envMuls_2__DOT___zz_imN);
    vlSelfRef.envMuls_2__DOT___zz_db3 = __VdfgRegularize_h6e95ff9d_0_357;
    vlSelfRef.envMuls_2__DOT___zz_sb3 = __VdfgRegularize_h6e95ff9d_0_357;
    vlSelfRef.envMuls_2__DOT___zz_sre5 = (0x00000007ffffffffULL 
                                          & (vlSelfRef.envMuls_2__DOT___zz_sre5_1 
                                             + vlSelfRef.envMuls_2__DOT___zz_sre5_2));
    vlSelfRef.envMuls_2__DOT___zz_sim5 = (0x00000007ffffffffULL 
                                          & (vlSelfRef.envMuls_2__DOT___zz_sim5_1 
                                             + vlSelfRef.envMuls_2__DOT___zz_sim5_2));
    vlSelfRef.envMuls_2__DOT___zz_db3_1 = __VdfgRegularize_h6e95ff9d_0_358;
    vlSelfRef.envMuls_2__DOT___zz_sb3_1 = __VdfgRegularize_h6e95ff9d_0_358;
    vlSelfRef.envMuls_2_io_rsp_valid = vlSelfRef.envMuls_2__DOT__io_rsp_valid;
    vlSelfRef.envMuls_2__DOT__io_rsp_payload_re = vlSelfRef.envMuls_2__DOT__reN;
    vlSelfRef.envMuls_2__DOT__io_rsp_payload_im = vlSelfRef.envMuls_2__DOT__imN;
    vlSelfRef.envMuls_2__DOT__br0 = vlSelfRef.envMuls_2__DOT__io_cmd_payload_b_re;
    vlSelfRef.envMuls_2__DOT__m2 = vlSelfRef.envMuls_2__DOT__mulM;
    vlSelfRef.envMuls_2__DOT__bi0 = vlSelfRef.envMuls_2__DOT__io_cmd_payload_b_im;
    vlSelfRef.envMuls_2__DOT__ai1 = vlSelfRef.envMuls_2__DOT__ai0;
    vlSelfRef.envMuls_2__DOT__ar1 = vlSelfRef.envMuls_2__DOT__ar0;
    vlSelfRef.envMuls_2__DOT__io_cmd_valid_delay_4 
        = vlSelfRef.envMuls_2__DOT__io_cmd_valid_delay_3;
    vlSelfRef.envMuls_2_io_rsp_payload_im = vlSelfRef.envMuls_2__DOT__io_rsp_payload_im;
    vlSelfRef.envMuls_2__DOT__mulM = (0x00000001ffffffffULL 
                                      & VL_MULS_QQQ(33, 
                                                    (0x00000001ffffffffULL 
                                                     & VL_EXTENDS_QI(33,17, vlSelfRef.envMuls_2__DOT__da1)), 
                                                    (0x00000001ffffffffULL 
                                                     & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.envMuls_2__DOT__bi1)))));
    vlSelfRef.envMuls_2__DOT__ai0 = vlSelfRef.envMuls_2__DOT__io_cmd_payload_a_im;
    vlSelfRef.envMuls_2__DOT__ar0 = vlSelfRef.envMuls_2__DOT__io_cmd_payload_a_re;
    vlSelfRef.envMuls_2__DOT__io_cmd_valid_delay_3 
        = vlSelfRef.envMuls_2__DOT__io_cmd_valid_delay_2;
    vlSelfRef.envMuls_2__DOT___zz_da1_1 = ((0x00010000U 
                                            & ((IData)(vlSelfRef.envMuls_2__DOT__ai0) 
                                               << 1U)) 
                                           | (IData)(vlSelfRef.envMuls_2__DOT__ai0));
    vlSelfRef.envMuls_2__DOT___zz_da1 = ((0x00010000U 
                                          & ((IData)(vlSelfRef.envMuls_2__DOT__ar0) 
                                             << 1U)) 
                                         | (IData)(vlSelfRef.envMuls_2__DOT__ar0));
    vlSelfRef.envMuls_2__DOT__io_cmd_valid_delay_2 
        = vlSelfRef.envMuls_2__DOT__io_cmd_valid_delay_1;
    vlSelfRef.envMuls_2__DOT__io_cmd_valid_delay_1 = 1U;
}

void Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__31(Vtop_PulseGenerator* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__31\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_359;
    __VdfgRegularize_h6e95ff9d_0_359 = 0;
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_360;
    __VdfgRegularize_h6e95ff9d_0_360 = 0;
    // Body
    vlSelfRef.envMuls_3__DOT__db3 = (0x0001ffffU & 
                                     (vlSelfRef.envMuls_3__DOT___zz_db3 
                                      - vlSelfRef.envMuls_3__DOT___zz_db3_1));
    vlSelfRef.envMuls_3__DOT__sb3 = (0x0001ffffU & 
                                     (vlSelfRef.envMuls_3__DOT___zz_sb3 
                                      + vlSelfRef.envMuls_3__DOT___zz_sb3_1));
    vlSelfRef.envMuls_3__DOT__da1 = (0x0001ffffU & 
                                     (vlSelfRef.envMuls_3__DOT___zz_da1 
                                      - vlSelfRef.envMuls_3__DOT___zz_da1_1));
    vlSelfRef.envMuls_3__DOT__pre4 = vlSelfRef.envMuls_3__DOT__mulPre;
    vlSelfRef.envMuls_3__DOT__pim4 = vlSelfRef.envMuls_3__DOT__mulPim;
    vlSelfRef.envMuls_3__DOT__sre5 = (0x00000007ffffffffULL 
                                      & (0x0000000000004000ULL 
                                         + vlSelfRef.envMuls_3__DOT___zz_sre5));
    vlSelfRef.envMuls_3__DOT__sim5 = (0x00000007ffffffffULL 
                                      & (0x0000000000004000ULL 
                                         + vlSelfRef.envMuls_3__DOT___zz_sim5));
    vlSelfRef.envMuls_3__DOT__br2 = vlSelfRef.envMuls_3__DOT__br1;
    vlSelfRef.envMuls_3__DOT__mcr4 = vlSelfRef.envMuls_3__DOT__m3;
    vlSelfRef.envMuls_3__DOT__mci4 = vlSelfRef.envMuls_3__DOT__m3;
    vlSelfRef.envMuls_3__DOT__bi2 = vlSelfRef.envMuls_3__DOT__bi1;
    vlSelfRef.envMuls_3__DOT__ai3 = vlSelfRef.envMuls_3__DOT__ai2;
    vlSelfRef.envMuls_3__DOT__ar3 = vlSelfRef.envMuls_3__DOT__ar2;
    vlSelfRef.envMuls_3__DOT__io_cmd_valid_delay_6 
        = vlSelfRef.envMuls_3__DOT__io_cmd_valid_delay_5;
    vlSelfRef.envMuls_3__DOT___zz_sre5_1 = (((QData)((IData)(
                                                             (3U 
                                                              & (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelfRef.envMuls_3__DOT__pre4 
                                                                                >> 0x00000020U)))))))) 
                                             << 0x00000021U) 
                                            | vlSelfRef.envMuls_3__DOT__pre4);
    vlSelfRef.envMuls_3__DOT___zz_sim5_1 = (((QData)((IData)(
                                                             (3U 
                                                              & (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelfRef.envMuls_3__DOT__pim4 
                                                                                >> 0x00000020U)))))))) 
                                             << 0x00000021U) 
                                            | vlSelfRef.envMuls_3__DOT__pim4);
    vlSelfRef.envMuls_3__DOT___zz_reN = (0x000fffffU 
                                         & (IData)(
                                                   (vlSelfRef.envMuls_3__DOT__sre5 
                                                    >> 0x0fU)));
    vlSelfRef.envMuls_3__DOT___zz_imN = (0x000fffffU 
                                         & (IData)(
                                                   (vlSelfRef.envMuls_3__DOT__sim5 
                                                    >> 0x0fU)));
    __VdfgRegularize_h6e95ff9d_0_359 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.envMuls_3__DOT__br2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.envMuls_3__DOT__br2));
    vlSelfRef.envMuls_3__DOT__br1 = vlSelfRef.envMuls_3__DOT__br0;
    vlSelfRef.envMuls_3__DOT___zz_sre5_2 = (((QData)((IData)(
                                                             (3U 
                                                              & (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelfRef.envMuls_3__DOT__mcr4 
                                                                                >> 0x00000020U)))))))) 
                                             << 0x00000021U) 
                                            | vlSelfRef.envMuls_3__DOT__mcr4);
    vlSelfRef.envMuls_3__DOT___zz_sim5_2 = (((QData)((IData)(
                                                             (3U 
                                                              & (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelfRef.envMuls_3__DOT__mci4 
                                                                                >> 0x00000020U)))))))) 
                                             << 0x00000021U) 
                                            | vlSelfRef.envMuls_3__DOT__mci4);
    vlSelfRef.envMuls_3__DOT__m3 = vlSelfRef.envMuls_3__DOT__m2;
    __VdfgRegularize_h6e95ff9d_0_360 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.envMuls_3__DOT__bi2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.envMuls_3__DOT__bi2));
    vlSelfRef.envMuls_3__DOT__bi1 = vlSelfRef.envMuls_3__DOT__bi0;
    vlSelfRef.envMuls_3__DOT__mulPim = (0x00000001ffffffffULL 
                                        & VL_MULS_QQQ(33, 
                                                      (0x00000001ffffffffULL 
                                                       & VL_EXTENDS_QI(33,17, vlSelfRef.envMuls_3__DOT__sb3)), 
                                                      (0x00000001ffffffffULL 
                                                       & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.envMuls_3__DOT__ai3)))));
    vlSelfRef.envMuls_3__DOT__ai2 = vlSelfRef.envMuls_3__DOT__ai1;
    vlSelfRef.envMuls_3__DOT__mulPre = (0x00000001ffffffffULL 
                                        & VL_MULS_QQQ(33, 
                                                      (0x00000001ffffffffULL 
                                                       & VL_EXTENDS_QI(33,17, vlSelfRef.envMuls_3__DOT__db3)), 
                                                      (0x00000001ffffffffULL 
                                                       & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.envMuls_3__DOT__ar3)))));
    vlSelfRef.envMuls_3__DOT__ar2 = vlSelfRef.envMuls_3__DOT__ar1;
    vlSelfRef.envMuls_3__DOT__io_rsp_valid = vlSelfRef.envMuls_3__DOT__io_cmd_valid_delay_6;
    vlSelfRef.envMuls_3__DOT__io_cmd_valid_delay_5 
        = vlSelfRef.envMuls_3__DOT__io_cmd_valid_delay_4;
    vlSelfRef.envMuls_3__DOT__reN = (0x0000ffffU & vlSelfRef.envMuls_3__DOT___zz_reN);
    vlSelfRef.envMuls_3__DOT__imN = (0x0000ffffU & vlSelfRef.envMuls_3__DOT___zz_imN);
    vlSelfRef.envMuls_3__DOT___zz_db3 = __VdfgRegularize_h6e95ff9d_0_359;
    vlSelfRef.envMuls_3__DOT___zz_sb3 = __VdfgRegularize_h6e95ff9d_0_359;
    vlSelfRef.envMuls_3__DOT___zz_sre5 = (0x00000007ffffffffULL 
                                          & (vlSelfRef.envMuls_3__DOT___zz_sre5_1 
                                             + vlSelfRef.envMuls_3__DOT___zz_sre5_2));
    vlSelfRef.envMuls_3__DOT___zz_sim5 = (0x00000007ffffffffULL 
                                          & (vlSelfRef.envMuls_3__DOT___zz_sim5_1 
                                             + vlSelfRef.envMuls_3__DOT___zz_sim5_2));
    vlSelfRef.envMuls_3__DOT___zz_db3_1 = __VdfgRegularize_h6e95ff9d_0_360;
    vlSelfRef.envMuls_3__DOT___zz_sb3_1 = __VdfgRegularize_h6e95ff9d_0_360;
    vlSelfRef.envMuls_3_io_rsp_valid = vlSelfRef.envMuls_3__DOT__io_rsp_valid;
    vlSelfRef.envMuls_3__DOT__io_rsp_payload_re = vlSelfRef.envMuls_3__DOT__reN;
    vlSelfRef.envMuls_3__DOT__io_rsp_payload_im = vlSelfRef.envMuls_3__DOT__imN;
    vlSelfRef.envMuls_3__DOT__br0 = vlSelfRef.envMuls_3__DOT__io_cmd_payload_b_re;
    vlSelfRef.envMuls_3__DOT__m2 = vlSelfRef.envMuls_3__DOT__mulM;
    vlSelfRef.envMuls_3__DOT__bi0 = vlSelfRef.envMuls_3__DOT__io_cmd_payload_b_im;
    vlSelfRef.envMuls_3__DOT__ai1 = vlSelfRef.envMuls_3__DOT__ai0;
    vlSelfRef.envMuls_3__DOT__ar1 = vlSelfRef.envMuls_3__DOT__ar0;
    vlSelfRef.envMuls_3__DOT__io_cmd_valid_delay_4 
        = vlSelfRef.envMuls_3__DOT__io_cmd_valid_delay_3;
    vlSelfRef.envMuls_3_io_rsp_payload_im = vlSelfRef.envMuls_3__DOT__io_rsp_payload_im;
    vlSelfRef.envMuls_3__DOT__mulM = (0x00000001ffffffffULL 
                                      & VL_MULS_QQQ(33, 
                                                    (0x00000001ffffffffULL 
                                                     & VL_EXTENDS_QI(33,17, vlSelfRef.envMuls_3__DOT__da1)), 
                                                    (0x00000001ffffffffULL 
                                                     & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.envMuls_3__DOT__bi1)))));
    vlSelfRef.envMuls_3__DOT__ai0 = vlSelfRef.envMuls_3__DOT__io_cmd_payload_a_im;
    vlSelfRef.envMuls_3__DOT__ar0 = vlSelfRef.envMuls_3__DOT__io_cmd_payload_a_re;
    vlSelfRef.envMuls_3__DOT__io_cmd_valid_delay_3 
        = vlSelfRef.envMuls_3__DOT__io_cmd_valid_delay_2;
    vlSelfRef.envMuls_3__DOT___zz_da1_1 = ((0x00010000U 
                                            & ((IData)(vlSelfRef.envMuls_3__DOT__ai0) 
                                               << 1U)) 
                                           | (IData)(vlSelfRef.envMuls_3__DOT__ai0));
    vlSelfRef.envMuls_3__DOT___zz_da1 = ((0x00010000U 
                                          & ((IData)(vlSelfRef.envMuls_3__DOT__ar0) 
                                             << 1U)) 
                                         | (IData)(vlSelfRef.envMuls_3__DOT__ar0));
    vlSelfRef.envMuls_3__DOT__io_cmd_valid_delay_2 
        = vlSelfRef.envMuls_3__DOT__io_cmd_valid_delay_1;
    vlSelfRef.envMuls_3__DOT__io_cmd_valid_delay_1 = 1U;
}

void Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__32(Vtop_PulseGenerator* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__32\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_361;
    __VdfgRegularize_h6e95ff9d_0_361 = 0;
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_362;
    __VdfgRegularize_h6e95ff9d_0_362 = 0;
    // Body
    vlSelfRef.envMuls_4__DOT__db3 = (0x0001ffffU & 
                                     (vlSelfRef.envMuls_4__DOT___zz_db3 
                                      - vlSelfRef.envMuls_4__DOT___zz_db3_1));
    vlSelfRef.envMuls_4__DOT__sb3 = (0x0001ffffU & 
                                     (vlSelfRef.envMuls_4__DOT___zz_sb3 
                                      + vlSelfRef.envMuls_4__DOT___zz_sb3_1));
    vlSelfRef.envMuls_4__DOT__da1 = (0x0001ffffU & 
                                     (vlSelfRef.envMuls_4__DOT___zz_da1 
                                      - vlSelfRef.envMuls_4__DOT___zz_da1_1));
    vlSelfRef.envMuls_4__DOT__pre4 = vlSelfRef.envMuls_4__DOT__mulPre;
    vlSelfRef.envMuls_4__DOT__pim4 = vlSelfRef.envMuls_4__DOT__mulPim;
    vlSelfRef.envMuls_4__DOT__sre5 = (0x00000007ffffffffULL 
                                      & (0x0000000000004000ULL 
                                         + vlSelfRef.envMuls_4__DOT___zz_sre5));
    vlSelfRef.envMuls_4__DOT__sim5 = (0x00000007ffffffffULL 
                                      & (0x0000000000004000ULL 
                                         + vlSelfRef.envMuls_4__DOT___zz_sim5));
    vlSelfRef.envMuls_4__DOT__br2 = vlSelfRef.envMuls_4__DOT__br1;
    vlSelfRef.envMuls_4__DOT__mcr4 = vlSelfRef.envMuls_4__DOT__m3;
    vlSelfRef.envMuls_4__DOT__mci4 = vlSelfRef.envMuls_4__DOT__m3;
    vlSelfRef.envMuls_4__DOT__bi2 = vlSelfRef.envMuls_4__DOT__bi1;
    vlSelfRef.envMuls_4__DOT__ai3 = vlSelfRef.envMuls_4__DOT__ai2;
    vlSelfRef.envMuls_4__DOT__ar3 = vlSelfRef.envMuls_4__DOT__ar2;
    vlSelfRef.envMuls_4__DOT__io_cmd_valid_delay_6 
        = vlSelfRef.envMuls_4__DOT__io_cmd_valid_delay_5;
    vlSelfRef.envMuls_4__DOT___zz_sre5_1 = (((QData)((IData)(
                                                             (3U 
                                                              & (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelfRef.envMuls_4__DOT__pre4 
                                                                                >> 0x00000020U)))))))) 
                                             << 0x00000021U) 
                                            | vlSelfRef.envMuls_4__DOT__pre4);
    vlSelfRef.envMuls_4__DOT___zz_sim5_1 = (((QData)((IData)(
                                                             (3U 
                                                              & (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelfRef.envMuls_4__DOT__pim4 
                                                                                >> 0x00000020U)))))))) 
                                             << 0x00000021U) 
                                            | vlSelfRef.envMuls_4__DOT__pim4);
    vlSelfRef.envMuls_4__DOT___zz_reN = (0x000fffffU 
                                         & (IData)(
                                                   (vlSelfRef.envMuls_4__DOT__sre5 
                                                    >> 0x0fU)));
    vlSelfRef.envMuls_4__DOT___zz_imN = (0x000fffffU 
                                         & (IData)(
                                                   (vlSelfRef.envMuls_4__DOT__sim5 
                                                    >> 0x0fU)));
    __VdfgRegularize_h6e95ff9d_0_361 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.envMuls_4__DOT__br2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.envMuls_4__DOT__br2));
    vlSelfRef.envMuls_4__DOT__br1 = vlSelfRef.envMuls_4__DOT__br0;
    vlSelfRef.envMuls_4__DOT___zz_sre5_2 = (((QData)((IData)(
                                                             (3U 
                                                              & (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelfRef.envMuls_4__DOT__mcr4 
                                                                                >> 0x00000020U)))))))) 
                                             << 0x00000021U) 
                                            | vlSelfRef.envMuls_4__DOT__mcr4);
    vlSelfRef.envMuls_4__DOT___zz_sim5_2 = (((QData)((IData)(
                                                             (3U 
                                                              & (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelfRef.envMuls_4__DOT__mci4 
                                                                                >> 0x00000020U)))))))) 
                                             << 0x00000021U) 
                                            | vlSelfRef.envMuls_4__DOT__mci4);
    vlSelfRef.envMuls_4__DOT__m3 = vlSelfRef.envMuls_4__DOT__m2;
    __VdfgRegularize_h6e95ff9d_0_362 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.envMuls_4__DOT__bi2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.envMuls_4__DOT__bi2));
    vlSelfRef.envMuls_4__DOT__bi1 = vlSelfRef.envMuls_4__DOT__bi0;
    vlSelfRef.envMuls_4__DOT__mulPim = (0x00000001ffffffffULL 
                                        & VL_MULS_QQQ(33, 
                                                      (0x00000001ffffffffULL 
                                                       & VL_EXTENDS_QI(33,17, vlSelfRef.envMuls_4__DOT__sb3)), 
                                                      (0x00000001ffffffffULL 
                                                       & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.envMuls_4__DOT__ai3)))));
    vlSelfRef.envMuls_4__DOT__ai2 = vlSelfRef.envMuls_4__DOT__ai1;
    vlSelfRef.envMuls_4__DOT__mulPre = (0x00000001ffffffffULL 
                                        & VL_MULS_QQQ(33, 
                                                      (0x00000001ffffffffULL 
                                                       & VL_EXTENDS_QI(33,17, vlSelfRef.envMuls_4__DOT__db3)), 
                                                      (0x00000001ffffffffULL 
                                                       & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.envMuls_4__DOT__ar3)))));
    vlSelfRef.envMuls_4__DOT__ar2 = vlSelfRef.envMuls_4__DOT__ar1;
    vlSelfRef.envMuls_4__DOT__io_rsp_valid = vlSelfRef.envMuls_4__DOT__io_cmd_valid_delay_6;
    vlSelfRef.envMuls_4__DOT__io_cmd_valid_delay_5 
        = vlSelfRef.envMuls_4__DOT__io_cmd_valid_delay_4;
    vlSelfRef.envMuls_4__DOT__reN = (0x0000ffffU & vlSelfRef.envMuls_4__DOT___zz_reN);
    vlSelfRef.envMuls_4__DOT__imN = (0x0000ffffU & vlSelfRef.envMuls_4__DOT___zz_imN);
    vlSelfRef.envMuls_4__DOT___zz_db3 = __VdfgRegularize_h6e95ff9d_0_361;
    vlSelfRef.envMuls_4__DOT___zz_sb3 = __VdfgRegularize_h6e95ff9d_0_361;
    vlSelfRef.envMuls_4__DOT___zz_sre5 = (0x00000007ffffffffULL 
                                          & (vlSelfRef.envMuls_4__DOT___zz_sre5_1 
                                             + vlSelfRef.envMuls_4__DOT___zz_sre5_2));
    vlSelfRef.envMuls_4__DOT___zz_sim5 = (0x00000007ffffffffULL 
                                          & (vlSelfRef.envMuls_4__DOT___zz_sim5_1 
                                             + vlSelfRef.envMuls_4__DOT___zz_sim5_2));
    vlSelfRef.envMuls_4__DOT___zz_db3_1 = __VdfgRegularize_h6e95ff9d_0_362;
    vlSelfRef.envMuls_4__DOT___zz_sb3_1 = __VdfgRegularize_h6e95ff9d_0_362;
    vlSelfRef.envMuls_4_io_rsp_valid = vlSelfRef.envMuls_4__DOT__io_rsp_valid;
    vlSelfRef.envMuls_4__DOT__io_rsp_payload_re = vlSelfRef.envMuls_4__DOT__reN;
    vlSelfRef.envMuls_4__DOT__io_rsp_payload_im = vlSelfRef.envMuls_4__DOT__imN;
    vlSelfRef.envMuls_4__DOT__br0 = vlSelfRef.envMuls_4__DOT__io_cmd_payload_b_re;
    vlSelfRef.envMuls_4__DOT__m2 = vlSelfRef.envMuls_4__DOT__mulM;
    vlSelfRef.envMuls_4__DOT__bi0 = vlSelfRef.envMuls_4__DOT__io_cmd_payload_b_im;
    vlSelfRef.envMuls_4__DOT__ai1 = vlSelfRef.envMuls_4__DOT__ai0;
    vlSelfRef.envMuls_4__DOT__ar1 = vlSelfRef.envMuls_4__DOT__ar0;
    vlSelfRef.envMuls_4__DOT__io_cmd_valid_delay_4 
        = vlSelfRef.envMuls_4__DOT__io_cmd_valid_delay_3;
    vlSelfRef.envMuls_4_io_rsp_payload_im = vlSelfRef.envMuls_4__DOT__io_rsp_payload_im;
    vlSelfRef.envMuls_4__DOT__mulM = (0x00000001ffffffffULL 
                                      & VL_MULS_QQQ(33, 
                                                    (0x00000001ffffffffULL 
                                                     & VL_EXTENDS_QI(33,17, vlSelfRef.envMuls_4__DOT__da1)), 
                                                    (0x00000001ffffffffULL 
                                                     & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.envMuls_4__DOT__bi1)))));
    vlSelfRef.envMuls_4__DOT__ai0 = vlSelfRef.envMuls_4__DOT__io_cmd_payload_a_im;
    vlSelfRef.envMuls_4__DOT__ar0 = vlSelfRef.envMuls_4__DOT__io_cmd_payload_a_re;
    vlSelfRef.envMuls_4__DOT__io_cmd_valid_delay_3 
        = vlSelfRef.envMuls_4__DOT__io_cmd_valid_delay_2;
    vlSelfRef.envMuls_4__DOT___zz_da1_1 = ((0x00010000U 
                                            & ((IData)(vlSelfRef.envMuls_4__DOT__ai0) 
                                               << 1U)) 
                                           | (IData)(vlSelfRef.envMuls_4__DOT__ai0));
    vlSelfRef.envMuls_4__DOT___zz_da1 = ((0x00010000U 
                                          & ((IData)(vlSelfRef.envMuls_4__DOT__ar0) 
                                             << 1U)) 
                                         | (IData)(vlSelfRef.envMuls_4__DOT__ar0));
    vlSelfRef.envMuls_4__DOT__io_cmd_valid_delay_2 
        = vlSelfRef.envMuls_4__DOT__io_cmd_valid_delay_1;
    vlSelfRef.envMuls_4__DOT__io_cmd_valid_delay_1 = 1U;
}

void Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__33(Vtop_PulseGenerator* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__33\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_363;
    __VdfgRegularize_h6e95ff9d_0_363 = 0;
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_364;
    __VdfgRegularize_h6e95ff9d_0_364 = 0;
    // Body
    vlSelfRef.envMuls_5__DOT__db3 = (0x0001ffffU & 
                                     (vlSelfRef.envMuls_5__DOT___zz_db3 
                                      - vlSelfRef.envMuls_5__DOT___zz_db3_1));
    vlSelfRef.envMuls_5__DOT__sb3 = (0x0001ffffU & 
                                     (vlSelfRef.envMuls_5__DOT___zz_sb3 
                                      + vlSelfRef.envMuls_5__DOT___zz_sb3_1));
    vlSelfRef.envMuls_5__DOT__da1 = (0x0001ffffU & 
                                     (vlSelfRef.envMuls_5__DOT___zz_da1 
                                      - vlSelfRef.envMuls_5__DOT___zz_da1_1));
    vlSelfRef.envMuls_5__DOT__pre4 = vlSelfRef.envMuls_5__DOT__mulPre;
    vlSelfRef.envMuls_5__DOT__pim4 = vlSelfRef.envMuls_5__DOT__mulPim;
    vlSelfRef.envMuls_5__DOT__sre5 = (0x00000007ffffffffULL 
                                      & (0x0000000000004000ULL 
                                         + vlSelfRef.envMuls_5__DOT___zz_sre5));
    vlSelfRef.envMuls_5__DOT__sim5 = (0x00000007ffffffffULL 
                                      & (0x0000000000004000ULL 
                                         + vlSelfRef.envMuls_5__DOT___zz_sim5));
    vlSelfRef.envMuls_5__DOT__br2 = vlSelfRef.envMuls_5__DOT__br1;
    vlSelfRef.envMuls_5__DOT__mcr4 = vlSelfRef.envMuls_5__DOT__m3;
    vlSelfRef.envMuls_5__DOT__mci4 = vlSelfRef.envMuls_5__DOT__m3;
    vlSelfRef.envMuls_5__DOT__bi2 = vlSelfRef.envMuls_5__DOT__bi1;
    vlSelfRef.envMuls_5__DOT__ai3 = vlSelfRef.envMuls_5__DOT__ai2;
    vlSelfRef.envMuls_5__DOT__ar3 = vlSelfRef.envMuls_5__DOT__ar2;
    vlSelfRef.envMuls_5__DOT__io_cmd_valid_delay_6 
        = vlSelfRef.envMuls_5__DOT__io_cmd_valid_delay_5;
    vlSelfRef.envMuls_5__DOT___zz_sre5_1 = (((QData)((IData)(
                                                             (3U 
                                                              & (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelfRef.envMuls_5__DOT__pre4 
                                                                                >> 0x00000020U)))))))) 
                                             << 0x00000021U) 
                                            | vlSelfRef.envMuls_5__DOT__pre4);
    vlSelfRef.envMuls_5__DOT___zz_sim5_1 = (((QData)((IData)(
                                                             (3U 
                                                              & (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelfRef.envMuls_5__DOT__pim4 
                                                                                >> 0x00000020U)))))))) 
                                             << 0x00000021U) 
                                            | vlSelfRef.envMuls_5__DOT__pim4);
    vlSelfRef.envMuls_5__DOT___zz_reN = (0x000fffffU 
                                         & (IData)(
                                                   (vlSelfRef.envMuls_5__DOT__sre5 
                                                    >> 0x0fU)));
    vlSelfRef.envMuls_5__DOT___zz_imN = (0x000fffffU 
                                         & (IData)(
                                                   (vlSelfRef.envMuls_5__DOT__sim5 
                                                    >> 0x0fU)));
    __VdfgRegularize_h6e95ff9d_0_363 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.envMuls_5__DOT__br2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.envMuls_5__DOT__br2));
    vlSelfRef.envMuls_5__DOT__br1 = vlSelfRef.envMuls_5__DOT__br0;
    vlSelfRef.envMuls_5__DOT___zz_sre5_2 = (((QData)((IData)(
                                                             (3U 
                                                              & (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelfRef.envMuls_5__DOT__mcr4 
                                                                                >> 0x00000020U)))))))) 
                                             << 0x00000021U) 
                                            | vlSelfRef.envMuls_5__DOT__mcr4);
    vlSelfRef.envMuls_5__DOT___zz_sim5_2 = (((QData)((IData)(
                                                             (3U 
                                                              & (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelfRef.envMuls_5__DOT__mci4 
                                                                                >> 0x00000020U)))))))) 
                                             << 0x00000021U) 
                                            | vlSelfRef.envMuls_5__DOT__mci4);
    vlSelfRef.envMuls_5__DOT__m3 = vlSelfRef.envMuls_5__DOT__m2;
    __VdfgRegularize_h6e95ff9d_0_364 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.envMuls_5__DOT__bi2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.envMuls_5__DOT__bi2));
    vlSelfRef.envMuls_5__DOT__bi1 = vlSelfRef.envMuls_5__DOT__bi0;
    vlSelfRef.envMuls_5__DOT__mulPim = (0x00000001ffffffffULL 
                                        & VL_MULS_QQQ(33, 
                                                      (0x00000001ffffffffULL 
                                                       & VL_EXTENDS_QI(33,17, vlSelfRef.envMuls_5__DOT__sb3)), 
                                                      (0x00000001ffffffffULL 
                                                       & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.envMuls_5__DOT__ai3)))));
    vlSelfRef.envMuls_5__DOT__ai2 = vlSelfRef.envMuls_5__DOT__ai1;
    vlSelfRef.envMuls_5__DOT__mulPre = (0x00000001ffffffffULL 
                                        & VL_MULS_QQQ(33, 
                                                      (0x00000001ffffffffULL 
                                                       & VL_EXTENDS_QI(33,17, vlSelfRef.envMuls_5__DOT__db3)), 
                                                      (0x00000001ffffffffULL 
                                                       & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.envMuls_5__DOT__ar3)))));
    vlSelfRef.envMuls_5__DOT__ar2 = vlSelfRef.envMuls_5__DOT__ar1;
    vlSelfRef.envMuls_5__DOT__io_rsp_valid = vlSelfRef.envMuls_5__DOT__io_cmd_valid_delay_6;
    vlSelfRef.envMuls_5__DOT__io_cmd_valid_delay_5 
        = vlSelfRef.envMuls_5__DOT__io_cmd_valid_delay_4;
    vlSelfRef.envMuls_5__DOT__reN = (0x0000ffffU & vlSelfRef.envMuls_5__DOT___zz_reN);
    vlSelfRef.envMuls_5__DOT__imN = (0x0000ffffU & vlSelfRef.envMuls_5__DOT___zz_imN);
    vlSelfRef.envMuls_5__DOT___zz_db3 = __VdfgRegularize_h6e95ff9d_0_363;
    vlSelfRef.envMuls_5__DOT___zz_sb3 = __VdfgRegularize_h6e95ff9d_0_363;
    vlSelfRef.envMuls_5__DOT___zz_sre5 = (0x00000007ffffffffULL 
                                          & (vlSelfRef.envMuls_5__DOT___zz_sre5_1 
                                             + vlSelfRef.envMuls_5__DOT___zz_sre5_2));
    vlSelfRef.envMuls_5__DOT___zz_sim5 = (0x00000007ffffffffULL 
                                          & (vlSelfRef.envMuls_5__DOT___zz_sim5_1 
                                             + vlSelfRef.envMuls_5__DOT___zz_sim5_2));
    vlSelfRef.envMuls_5__DOT___zz_db3_1 = __VdfgRegularize_h6e95ff9d_0_364;
    vlSelfRef.envMuls_5__DOT___zz_sb3_1 = __VdfgRegularize_h6e95ff9d_0_364;
    vlSelfRef.envMuls_5_io_rsp_valid = vlSelfRef.envMuls_5__DOT__io_rsp_valid;
    vlSelfRef.envMuls_5__DOT__io_rsp_payload_re = vlSelfRef.envMuls_5__DOT__reN;
    vlSelfRef.envMuls_5__DOT__io_rsp_payload_im = vlSelfRef.envMuls_5__DOT__imN;
    vlSelfRef.envMuls_5__DOT__br0 = vlSelfRef.envMuls_5__DOT__io_cmd_payload_b_re;
    vlSelfRef.envMuls_5__DOT__m2 = vlSelfRef.envMuls_5__DOT__mulM;
    vlSelfRef.envMuls_5__DOT__bi0 = vlSelfRef.envMuls_5__DOT__io_cmd_payload_b_im;
    vlSelfRef.envMuls_5__DOT__ai1 = vlSelfRef.envMuls_5__DOT__ai0;
    vlSelfRef.envMuls_5__DOT__ar1 = vlSelfRef.envMuls_5__DOT__ar0;
    vlSelfRef.envMuls_5__DOT__io_cmd_valid_delay_4 
        = vlSelfRef.envMuls_5__DOT__io_cmd_valid_delay_3;
    vlSelfRef.envMuls_5_io_rsp_payload_im = vlSelfRef.envMuls_5__DOT__io_rsp_payload_im;
    vlSelfRef.envMuls_5__DOT__mulM = (0x00000001ffffffffULL 
                                      & VL_MULS_QQQ(33, 
                                                    (0x00000001ffffffffULL 
                                                     & VL_EXTENDS_QI(33,17, vlSelfRef.envMuls_5__DOT__da1)), 
                                                    (0x00000001ffffffffULL 
                                                     & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.envMuls_5__DOT__bi1)))));
    vlSelfRef.envMuls_5__DOT__ai0 = vlSelfRef.envMuls_5__DOT__io_cmd_payload_a_im;
    vlSelfRef.envMuls_5__DOT__ar0 = vlSelfRef.envMuls_5__DOT__io_cmd_payload_a_re;
    vlSelfRef.envMuls_5__DOT__io_cmd_valid_delay_3 
        = vlSelfRef.envMuls_5__DOT__io_cmd_valid_delay_2;
    vlSelfRef.envMuls_5__DOT___zz_da1_1 = ((0x00010000U 
                                            & ((IData)(vlSelfRef.envMuls_5__DOT__ai0) 
                                               << 1U)) 
                                           | (IData)(vlSelfRef.envMuls_5__DOT__ai0));
    vlSelfRef.envMuls_5__DOT___zz_da1 = ((0x00010000U 
                                          & ((IData)(vlSelfRef.envMuls_5__DOT__ar0) 
                                             << 1U)) 
                                         | (IData)(vlSelfRef.envMuls_5__DOT__ar0));
    vlSelfRef.envMuls_5__DOT__io_cmd_valid_delay_2 
        = vlSelfRef.envMuls_5__DOT__io_cmd_valid_delay_1;
    vlSelfRef.envMuls_5__DOT__io_cmd_valid_delay_1 = 1U;
}

void Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__34(Vtop_PulseGenerator* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__34\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_365;
    __VdfgRegularize_h6e95ff9d_0_365 = 0;
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_366;
    __VdfgRegularize_h6e95ff9d_0_366 = 0;
    // Body
    vlSelfRef.envMuls_6__DOT__db3 = (0x0001ffffU & 
                                     (vlSelfRef.envMuls_6__DOT___zz_db3 
                                      - vlSelfRef.envMuls_6__DOT___zz_db3_1));
    vlSelfRef.envMuls_6__DOT__sb3 = (0x0001ffffU & 
                                     (vlSelfRef.envMuls_6__DOT___zz_sb3 
                                      + vlSelfRef.envMuls_6__DOT___zz_sb3_1));
    vlSelfRef.envMuls_6__DOT__da1 = (0x0001ffffU & 
                                     (vlSelfRef.envMuls_6__DOT___zz_da1 
                                      - vlSelfRef.envMuls_6__DOT___zz_da1_1));
    vlSelfRef.envMuls_6__DOT__pre4 = vlSelfRef.envMuls_6__DOT__mulPre;
    vlSelfRef.envMuls_6__DOT__pim4 = vlSelfRef.envMuls_6__DOT__mulPim;
    vlSelfRef.envMuls_6__DOT__sre5 = (0x00000007ffffffffULL 
                                      & (0x0000000000004000ULL 
                                         + vlSelfRef.envMuls_6__DOT___zz_sre5));
    vlSelfRef.envMuls_6__DOT__sim5 = (0x00000007ffffffffULL 
                                      & (0x0000000000004000ULL 
                                         + vlSelfRef.envMuls_6__DOT___zz_sim5));
    vlSelfRef.envMuls_6__DOT__br2 = vlSelfRef.envMuls_6__DOT__br1;
    vlSelfRef.envMuls_6__DOT__mcr4 = vlSelfRef.envMuls_6__DOT__m3;
    vlSelfRef.envMuls_6__DOT__mci4 = vlSelfRef.envMuls_6__DOT__m3;
    vlSelfRef.envMuls_6__DOT__bi2 = vlSelfRef.envMuls_6__DOT__bi1;
    vlSelfRef.envMuls_6__DOT__ai3 = vlSelfRef.envMuls_6__DOT__ai2;
    vlSelfRef.envMuls_6__DOT__ar3 = vlSelfRef.envMuls_6__DOT__ar2;
    vlSelfRef.envMuls_6__DOT__io_cmd_valid_delay_6 
        = vlSelfRef.envMuls_6__DOT__io_cmd_valid_delay_5;
    vlSelfRef.envMuls_6__DOT___zz_sre5_1 = (((QData)((IData)(
                                                             (3U 
                                                              & (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelfRef.envMuls_6__DOT__pre4 
                                                                                >> 0x00000020U)))))))) 
                                             << 0x00000021U) 
                                            | vlSelfRef.envMuls_6__DOT__pre4);
    vlSelfRef.envMuls_6__DOT___zz_sim5_1 = (((QData)((IData)(
                                                             (3U 
                                                              & (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelfRef.envMuls_6__DOT__pim4 
                                                                                >> 0x00000020U)))))))) 
                                             << 0x00000021U) 
                                            | vlSelfRef.envMuls_6__DOT__pim4);
    vlSelfRef.envMuls_6__DOT___zz_reN = (0x000fffffU 
                                         & (IData)(
                                                   (vlSelfRef.envMuls_6__DOT__sre5 
                                                    >> 0x0fU)));
    vlSelfRef.envMuls_6__DOT___zz_imN = (0x000fffffU 
                                         & (IData)(
                                                   (vlSelfRef.envMuls_6__DOT__sim5 
                                                    >> 0x0fU)));
    __VdfgRegularize_h6e95ff9d_0_365 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.envMuls_6__DOT__br2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.envMuls_6__DOT__br2));
    vlSelfRef.envMuls_6__DOT__br1 = vlSelfRef.envMuls_6__DOT__br0;
    vlSelfRef.envMuls_6__DOT___zz_sre5_2 = (((QData)((IData)(
                                                             (3U 
                                                              & (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelfRef.envMuls_6__DOT__mcr4 
                                                                                >> 0x00000020U)))))))) 
                                             << 0x00000021U) 
                                            | vlSelfRef.envMuls_6__DOT__mcr4);
    vlSelfRef.envMuls_6__DOT___zz_sim5_2 = (((QData)((IData)(
                                                             (3U 
                                                              & (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelfRef.envMuls_6__DOT__mci4 
                                                                                >> 0x00000020U)))))))) 
                                             << 0x00000021U) 
                                            | vlSelfRef.envMuls_6__DOT__mci4);
    vlSelfRef.envMuls_6__DOT__m3 = vlSelfRef.envMuls_6__DOT__m2;
    __VdfgRegularize_h6e95ff9d_0_366 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.envMuls_6__DOT__bi2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.envMuls_6__DOT__bi2));
    vlSelfRef.envMuls_6__DOT__bi1 = vlSelfRef.envMuls_6__DOT__bi0;
    vlSelfRef.envMuls_6__DOT__mulPim = (0x00000001ffffffffULL 
                                        & VL_MULS_QQQ(33, 
                                                      (0x00000001ffffffffULL 
                                                       & VL_EXTENDS_QI(33,17, vlSelfRef.envMuls_6__DOT__sb3)), 
                                                      (0x00000001ffffffffULL 
                                                       & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.envMuls_6__DOT__ai3)))));
    vlSelfRef.envMuls_6__DOT__ai2 = vlSelfRef.envMuls_6__DOT__ai1;
    vlSelfRef.envMuls_6__DOT__mulPre = (0x00000001ffffffffULL 
                                        & VL_MULS_QQQ(33, 
                                                      (0x00000001ffffffffULL 
                                                       & VL_EXTENDS_QI(33,17, vlSelfRef.envMuls_6__DOT__db3)), 
                                                      (0x00000001ffffffffULL 
                                                       & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.envMuls_6__DOT__ar3)))));
    vlSelfRef.envMuls_6__DOT__ar2 = vlSelfRef.envMuls_6__DOT__ar1;
    vlSelfRef.envMuls_6__DOT__io_rsp_valid = vlSelfRef.envMuls_6__DOT__io_cmd_valid_delay_6;
    vlSelfRef.envMuls_6__DOT__io_cmd_valid_delay_5 
        = vlSelfRef.envMuls_6__DOT__io_cmd_valid_delay_4;
    vlSelfRef.envMuls_6__DOT__reN = (0x0000ffffU & vlSelfRef.envMuls_6__DOT___zz_reN);
    vlSelfRef.envMuls_6__DOT__imN = (0x0000ffffU & vlSelfRef.envMuls_6__DOT___zz_imN);
    vlSelfRef.envMuls_6__DOT___zz_db3 = __VdfgRegularize_h6e95ff9d_0_365;
    vlSelfRef.envMuls_6__DOT___zz_sb3 = __VdfgRegularize_h6e95ff9d_0_365;
    vlSelfRef.envMuls_6__DOT___zz_sre5 = (0x00000007ffffffffULL 
                                          & (vlSelfRef.envMuls_6__DOT___zz_sre5_1 
                                             + vlSelfRef.envMuls_6__DOT___zz_sre5_2));
    vlSelfRef.envMuls_6__DOT___zz_sim5 = (0x00000007ffffffffULL 
                                          & (vlSelfRef.envMuls_6__DOT___zz_sim5_1 
                                             + vlSelfRef.envMuls_6__DOT___zz_sim5_2));
    vlSelfRef.envMuls_6__DOT___zz_db3_1 = __VdfgRegularize_h6e95ff9d_0_366;
    vlSelfRef.envMuls_6__DOT___zz_sb3_1 = __VdfgRegularize_h6e95ff9d_0_366;
    vlSelfRef.envMuls_6_io_rsp_valid = vlSelfRef.envMuls_6__DOT__io_rsp_valid;
    vlSelfRef.envMuls_6__DOT__io_rsp_payload_re = vlSelfRef.envMuls_6__DOT__reN;
    vlSelfRef.envMuls_6__DOT__io_rsp_payload_im = vlSelfRef.envMuls_6__DOT__imN;
    vlSelfRef.envMuls_6__DOT__br0 = vlSelfRef.envMuls_6__DOT__io_cmd_payload_b_re;
    vlSelfRef.envMuls_6__DOT__m2 = vlSelfRef.envMuls_6__DOT__mulM;
    vlSelfRef.envMuls_6__DOT__bi0 = vlSelfRef.envMuls_6__DOT__io_cmd_payload_b_im;
    vlSelfRef.envMuls_6__DOT__ai1 = vlSelfRef.envMuls_6__DOT__ai0;
    vlSelfRef.envMuls_6__DOT__ar1 = vlSelfRef.envMuls_6__DOT__ar0;
    vlSelfRef.envMuls_6__DOT__io_cmd_valid_delay_4 
        = vlSelfRef.envMuls_6__DOT__io_cmd_valid_delay_3;
    vlSelfRef.envMuls_6_io_rsp_payload_im = vlSelfRef.envMuls_6__DOT__io_rsp_payload_im;
    vlSelfRef.envMuls_6__DOT__mulM = (0x00000001ffffffffULL 
                                      & VL_MULS_QQQ(33, 
                                                    (0x00000001ffffffffULL 
                                                     & VL_EXTENDS_QI(33,17, vlSelfRef.envMuls_6__DOT__da1)), 
                                                    (0x00000001ffffffffULL 
                                                     & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.envMuls_6__DOT__bi1)))));
    vlSelfRef.envMuls_6__DOT__ai0 = vlSelfRef.envMuls_6__DOT__io_cmd_payload_a_im;
    vlSelfRef.envMuls_6__DOT__ar0 = vlSelfRef.envMuls_6__DOT__io_cmd_payload_a_re;
    vlSelfRef.envMuls_6__DOT__io_cmd_valid_delay_3 
        = vlSelfRef.envMuls_6__DOT__io_cmd_valid_delay_2;
    vlSelfRef.envMuls_6__DOT___zz_da1_1 = ((0x00010000U 
                                            & ((IData)(vlSelfRef.envMuls_6__DOT__ai0) 
                                               << 1U)) 
                                           | (IData)(vlSelfRef.envMuls_6__DOT__ai0));
    vlSelfRef.envMuls_6__DOT___zz_da1 = ((0x00010000U 
                                          & ((IData)(vlSelfRef.envMuls_6__DOT__ar0) 
                                             << 1U)) 
                                         | (IData)(vlSelfRef.envMuls_6__DOT__ar0));
    vlSelfRef.envMuls_6__DOT__io_cmd_valid_delay_2 
        = vlSelfRef.envMuls_6__DOT__io_cmd_valid_delay_1;
    vlSelfRef.envMuls_6__DOT__io_cmd_valid_delay_1 = 1U;
}

void Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__35(Vtop_PulseGenerator* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__35\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_367;
    __VdfgRegularize_h6e95ff9d_0_367 = 0;
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_368;
    __VdfgRegularize_h6e95ff9d_0_368 = 0;
    // Body
    vlSelfRef.envMuls_7__DOT__db3 = (0x0001ffffU & 
                                     (vlSelfRef.envMuls_7__DOT___zz_db3 
                                      - vlSelfRef.envMuls_7__DOT___zz_db3_1));
    vlSelfRef.envMuls_7__DOT__sb3 = (0x0001ffffU & 
                                     (vlSelfRef.envMuls_7__DOT___zz_sb3 
                                      + vlSelfRef.envMuls_7__DOT___zz_sb3_1));
    vlSelfRef.envMuls_7__DOT__da1 = (0x0001ffffU & 
                                     (vlSelfRef.envMuls_7__DOT___zz_da1 
                                      - vlSelfRef.envMuls_7__DOT___zz_da1_1));
    vlSelfRef.envMuls_7__DOT__pre4 = vlSelfRef.envMuls_7__DOT__mulPre;
    vlSelfRef.envMuls_7__DOT__pim4 = vlSelfRef.envMuls_7__DOT__mulPim;
    vlSelfRef.envMuls_7__DOT__sre5 = (0x00000007ffffffffULL 
                                      & (0x0000000000004000ULL 
                                         + vlSelfRef.envMuls_7__DOT___zz_sre5));
    vlSelfRef.envMuls_7__DOT__sim5 = (0x00000007ffffffffULL 
                                      & (0x0000000000004000ULL 
                                         + vlSelfRef.envMuls_7__DOT___zz_sim5));
    vlSelfRef.envMuls_7__DOT__br2 = vlSelfRef.envMuls_7__DOT__br1;
    vlSelfRef.envMuls_7__DOT__mcr4 = vlSelfRef.envMuls_7__DOT__m3;
    vlSelfRef.envMuls_7__DOT__mci4 = vlSelfRef.envMuls_7__DOT__m3;
    vlSelfRef.envMuls_7__DOT__bi2 = vlSelfRef.envMuls_7__DOT__bi1;
    vlSelfRef.envMuls_7__DOT__ai3 = vlSelfRef.envMuls_7__DOT__ai2;
    vlSelfRef.envMuls_7__DOT__ar3 = vlSelfRef.envMuls_7__DOT__ar2;
    vlSelfRef.envMuls_7__DOT__io_cmd_valid_delay_6 
        = vlSelfRef.envMuls_7__DOT__io_cmd_valid_delay_5;
    vlSelfRef.envMuls_7__DOT___zz_sre5_1 = (((QData)((IData)(
                                                             (3U 
                                                              & (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelfRef.envMuls_7__DOT__pre4 
                                                                                >> 0x00000020U)))))))) 
                                             << 0x00000021U) 
                                            | vlSelfRef.envMuls_7__DOT__pre4);
    vlSelfRef.envMuls_7__DOT___zz_sim5_1 = (((QData)((IData)(
                                                             (3U 
                                                              & (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelfRef.envMuls_7__DOT__pim4 
                                                                                >> 0x00000020U)))))))) 
                                             << 0x00000021U) 
                                            | vlSelfRef.envMuls_7__DOT__pim4);
    vlSelfRef.envMuls_7__DOT___zz_reN = (0x000fffffU 
                                         & (IData)(
                                                   (vlSelfRef.envMuls_7__DOT__sre5 
                                                    >> 0x0fU)));
    vlSelfRef.envMuls_7__DOT___zz_imN = (0x000fffffU 
                                         & (IData)(
                                                   (vlSelfRef.envMuls_7__DOT__sim5 
                                                    >> 0x0fU)));
    __VdfgRegularize_h6e95ff9d_0_367 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.envMuls_7__DOT__br2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.envMuls_7__DOT__br2));
    vlSelfRef.envMuls_7__DOT__br1 = vlSelfRef.envMuls_7__DOT__br0;
    vlSelfRef.envMuls_7__DOT___zz_sre5_2 = (((QData)((IData)(
                                                             (3U 
                                                              & (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelfRef.envMuls_7__DOT__mcr4 
                                                                                >> 0x00000020U)))))))) 
                                             << 0x00000021U) 
                                            | vlSelfRef.envMuls_7__DOT__mcr4);
    vlSelfRef.envMuls_7__DOT___zz_sim5_2 = (((QData)((IData)(
                                                             (3U 
                                                              & (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelfRef.envMuls_7__DOT__mci4 
                                                                                >> 0x00000020U)))))))) 
                                             << 0x00000021U) 
                                            | vlSelfRef.envMuls_7__DOT__mci4);
    vlSelfRef.envMuls_7__DOT__m3 = vlSelfRef.envMuls_7__DOT__m2;
    __VdfgRegularize_h6e95ff9d_0_368 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.envMuls_7__DOT__bi2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.envMuls_7__DOT__bi2));
    vlSelfRef.envMuls_7__DOT__bi1 = vlSelfRef.envMuls_7__DOT__bi0;
    vlSelfRef.envMuls_7__DOT__mulPim = (0x00000001ffffffffULL 
                                        & VL_MULS_QQQ(33, 
                                                      (0x00000001ffffffffULL 
                                                       & VL_EXTENDS_QI(33,17, vlSelfRef.envMuls_7__DOT__sb3)), 
                                                      (0x00000001ffffffffULL 
                                                       & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.envMuls_7__DOT__ai3)))));
    vlSelfRef.envMuls_7__DOT__ai2 = vlSelfRef.envMuls_7__DOT__ai1;
    vlSelfRef.envMuls_7__DOT__mulPre = (0x00000001ffffffffULL 
                                        & VL_MULS_QQQ(33, 
                                                      (0x00000001ffffffffULL 
                                                       & VL_EXTENDS_QI(33,17, vlSelfRef.envMuls_7__DOT__db3)), 
                                                      (0x00000001ffffffffULL 
                                                       & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.envMuls_7__DOT__ar3)))));
    vlSelfRef.envMuls_7__DOT__ar2 = vlSelfRef.envMuls_7__DOT__ar1;
    vlSelfRef.envMuls_7__DOT__io_rsp_valid = vlSelfRef.envMuls_7__DOT__io_cmd_valid_delay_6;
    vlSelfRef.envMuls_7__DOT__io_cmd_valid_delay_5 
        = vlSelfRef.envMuls_7__DOT__io_cmd_valid_delay_4;
    vlSelfRef.envMuls_7__DOT__reN = (0x0000ffffU & vlSelfRef.envMuls_7__DOT___zz_reN);
    vlSelfRef.envMuls_7__DOT__imN = (0x0000ffffU & vlSelfRef.envMuls_7__DOT___zz_imN);
    vlSelfRef.envMuls_7__DOT___zz_db3 = __VdfgRegularize_h6e95ff9d_0_367;
    vlSelfRef.envMuls_7__DOT___zz_sb3 = __VdfgRegularize_h6e95ff9d_0_367;
    vlSelfRef.envMuls_7__DOT___zz_sre5 = (0x00000007ffffffffULL 
                                          & (vlSelfRef.envMuls_7__DOT___zz_sre5_1 
                                             + vlSelfRef.envMuls_7__DOT___zz_sre5_2));
    vlSelfRef.envMuls_7__DOT___zz_sim5 = (0x00000007ffffffffULL 
                                          & (vlSelfRef.envMuls_7__DOT___zz_sim5_1 
                                             + vlSelfRef.envMuls_7__DOT___zz_sim5_2));
    vlSelfRef.envMuls_7__DOT___zz_db3_1 = __VdfgRegularize_h6e95ff9d_0_368;
    vlSelfRef.envMuls_7__DOT___zz_sb3_1 = __VdfgRegularize_h6e95ff9d_0_368;
    vlSelfRef.envMuls_7_io_rsp_valid = vlSelfRef.envMuls_7__DOT__io_rsp_valid;
    vlSelfRef.envMuls_7__DOT__io_rsp_payload_re = vlSelfRef.envMuls_7__DOT__reN;
    vlSelfRef.envMuls_7__DOT__io_rsp_payload_im = vlSelfRef.envMuls_7__DOT__imN;
    vlSelfRef.envMuls_7__DOT__br0 = vlSelfRef.envMuls_7__DOT__io_cmd_payload_b_re;
    vlSelfRef.envMuls_7__DOT__m2 = vlSelfRef.envMuls_7__DOT__mulM;
    vlSelfRef.envMuls_7__DOT__bi0 = vlSelfRef.envMuls_7__DOT__io_cmd_payload_b_im;
    vlSelfRef.envMuls_7__DOT__ai1 = vlSelfRef.envMuls_7__DOT__ai0;
    vlSelfRef.envMuls_7__DOT__ar1 = vlSelfRef.envMuls_7__DOT__ar0;
    vlSelfRef.envMuls_7__DOT__io_cmd_valid_delay_4 
        = vlSelfRef.envMuls_7__DOT__io_cmd_valid_delay_3;
    vlSelfRef.envMuls_7_io_rsp_payload_im = vlSelfRef.envMuls_7__DOT__io_rsp_payload_im;
    vlSelfRef.envMuls_7__DOT__mulM = (0x00000001ffffffffULL 
                                      & VL_MULS_QQQ(33, 
                                                    (0x00000001ffffffffULL 
                                                     & VL_EXTENDS_QI(33,17, vlSelfRef.envMuls_7__DOT__da1)), 
                                                    (0x00000001ffffffffULL 
                                                     & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.envMuls_7__DOT__bi1)))));
    vlSelfRef.envMuls_7__DOT__ai0 = vlSelfRef.envMuls_7__DOT__io_cmd_payload_a_im;
    vlSelfRef.envMuls_7__DOT__ar0 = vlSelfRef.envMuls_7__DOT__io_cmd_payload_a_re;
    vlSelfRef.envMuls_7__DOT__io_cmd_valid_delay_3 
        = vlSelfRef.envMuls_7__DOT__io_cmd_valid_delay_2;
    vlSelfRef.envMuls_7__DOT___zz_da1_1 = ((0x00010000U 
                                            & ((IData)(vlSelfRef.envMuls_7__DOT__ai0) 
                                               << 1U)) 
                                           | (IData)(vlSelfRef.envMuls_7__DOT__ai0));
    vlSelfRef.envMuls_7__DOT___zz_da1 = ((0x00010000U 
                                          & ((IData)(vlSelfRef.envMuls_7__DOT__ar0) 
                                             << 1U)) 
                                         | (IData)(vlSelfRef.envMuls_7__DOT__ar0));
    vlSelfRef.envMuls_7__DOT__io_cmd_valid_delay_2 
        = vlSelfRef.envMuls_7__DOT__io_cmd_valid_delay_1;
    vlSelfRef.envMuls_7__DOT__io_cmd_valid_delay_1 = 1U;
}

void Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__36(Vtop_PulseGenerator* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__36\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_369;
    __VdfgRegularize_h6e95ff9d_0_369 = 0;
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_370;
    __VdfgRegularize_h6e95ff9d_0_370 = 0;
    // Body
    vlSelfRef.envMuls_8__DOT__db3 = (0x0001ffffU & 
                                     (vlSelfRef.envMuls_8__DOT___zz_db3 
                                      - vlSelfRef.envMuls_8__DOT___zz_db3_1));
    vlSelfRef.envMuls_8__DOT__sb3 = (0x0001ffffU & 
                                     (vlSelfRef.envMuls_8__DOT___zz_sb3 
                                      + vlSelfRef.envMuls_8__DOT___zz_sb3_1));
    vlSelfRef.envMuls_8__DOT__da1 = (0x0001ffffU & 
                                     (vlSelfRef.envMuls_8__DOT___zz_da1 
                                      - vlSelfRef.envMuls_8__DOT___zz_da1_1));
    vlSelfRef.envMuls_8__DOT__pre4 = vlSelfRef.envMuls_8__DOT__mulPre;
    vlSelfRef.envMuls_8__DOT__pim4 = vlSelfRef.envMuls_8__DOT__mulPim;
    vlSelfRef.envMuls_8__DOT__sre5 = (0x00000007ffffffffULL 
                                      & (0x0000000000004000ULL 
                                         + vlSelfRef.envMuls_8__DOT___zz_sre5));
    vlSelfRef.envMuls_8__DOT__sim5 = (0x00000007ffffffffULL 
                                      & (0x0000000000004000ULL 
                                         + vlSelfRef.envMuls_8__DOT___zz_sim5));
    vlSelfRef.envMuls_8__DOT__br2 = vlSelfRef.envMuls_8__DOT__br1;
    vlSelfRef.envMuls_8__DOT__mcr4 = vlSelfRef.envMuls_8__DOT__m3;
    vlSelfRef.envMuls_8__DOT__mci4 = vlSelfRef.envMuls_8__DOT__m3;
    vlSelfRef.envMuls_8__DOT__bi2 = vlSelfRef.envMuls_8__DOT__bi1;
    vlSelfRef.envMuls_8__DOT__ai3 = vlSelfRef.envMuls_8__DOT__ai2;
    vlSelfRef.envMuls_8__DOT__ar3 = vlSelfRef.envMuls_8__DOT__ar2;
    vlSelfRef.envMuls_8__DOT__io_cmd_valid_delay_6 
        = vlSelfRef.envMuls_8__DOT__io_cmd_valid_delay_5;
    vlSelfRef.envMuls_8__DOT___zz_sre5_1 = (((QData)((IData)(
                                                             (3U 
                                                              & (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelfRef.envMuls_8__DOT__pre4 
                                                                                >> 0x00000020U)))))))) 
                                             << 0x00000021U) 
                                            | vlSelfRef.envMuls_8__DOT__pre4);
    vlSelfRef.envMuls_8__DOT___zz_sim5_1 = (((QData)((IData)(
                                                             (3U 
                                                              & (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelfRef.envMuls_8__DOT__pim4 
                                                                                >> 0x00000020U)))))))) 
                                             << 0x00000021U) 
                                            | vlSelfRef.envMuls_8__DOT__pim4);
    vlSelfRef.envMuls_8__DOT___zz_reN = (0x000fffffU 
                                         & (IData)(
                                                   (vlSelfRef.envMuls_8__DOT__sre5 
                                                    >> 0x0fU)));
    vlSelfRef.envMuls_8__DOT___zz_imN = (0x000fffffU 
                                         & (IData)(
                                                   (vlSelfRef.envMuls_8__DOT__sim5 
                                                    >> 0x0fU)));
    __VdfgRegularize_h6e95ff9d_0_369 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.envMuls_8__DOT__br2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.envMuls_8__DOT__br2));
    vlSelfRef.envMuls_8__DOT__br1 = vlSelfRef.envMuls_8__DOT__br0;
    vlSelfRef.envMuls_8__DOT___zz_sre5_2 = (((QData)((IData)(
                                                             (3U 
                                                              & (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelfRef.envMuls_8__DOT__mcr4 
                                                                                >> 0x00000020U)))))))) 
                                             << 0x00000021U) 
                                            | vlSelfRef.envMuls_8__DOT__mcr4);
    vlSelfRef.envMuls_8__DOT___zz_sim5_2 = (((QData)((IData)(
                                                             (3U 
                                                              & (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelfRef.envMuls_8__DOT__mci4 
                                                                                >> 0x00000020U)))))))) 
                                             << 0x00000021U) 
                                            | vlSelfRef.envMuls_8__DOT__mci4);
    vlSelfRef.envMuls_8__DOT__m3 = vlSelfRef.envMuls_8__DOT__m2;
    __VdfgRegularize_h6e95ff9d_0_370 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.envMuls_8__DOT__bi2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.envMuls_8__DOT__bi2));
    vlSelfRef.envMuls_8__DOT__bi1 = vlSelfRef.envMuls_8__DOT__bi0;
    vlSelfRef.envMuls_8__DOT__mulPim = (0x00000001ffffffffULL 
                                        & VL_MULS_QQQ(33, 
                                                      (0x00000001ffffffffULL 
                                                       & VL_EXTENDS_QI(33,17, vlSelfRef.envMuls_8__DOT__sb3)), 
                                                      (0x00000001ffffffffULL 
                                                       & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.envMuls_8__DOT__ai3)))));
    vlSelfRef.envMuls_8__DOT__ai2 = vlSelfRef.envMuls_8__DOT__ai1;
    vlSelfRef.envMuls_8__DOT__mulPre = (0x00000001ffffffffULL 
                                        & VL_MULS_QQQ(33, 
                                                      (0x00000001ffffffffULL 
                                                       & VL_EXTENDS_QI(33,17, vlSelfRef.envMuls_8__DOT__db3)), 
                                                      (0x00000001ffffffffULL 
                                                       & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.envMuls_8__DOT__ar3)))));
    vlSelfRef.envMuls_8__DOT__ar2 = vlSelfRef.envMuls_8__DOT__ar1;
    vlSelfRef.envMuls_8__DOT__io_rsp_valid = vlSelfRef.envMuls_8__DOT__io_cmd_valid_delay_6;
    vlSelfRef.envMuls_8__DOT__io_cmd_valid_delay_5 
        = vlSelfRef.envMuls_8__DOT__io_cmd_valid_delay_4;
    vlSelfRef.envMuls_8__DOT__reN = (0x0000ffffU & vlSelfRef.envMuls_8__DOT___zz_reN);
    vlSelfRef.envMuls_8__DOT__imN = (0x0000ffffU & vlSelfRef.envMuls_8__DOT___zz_imN);
    vlSelfRef.envMuls_8__DOT___zz_db3 = __VdfgRegularize_h6e95ff9d_0_369;
    vlSelfRef.envMuls_8__DOT___zz_sb3 = __VdfgRegularize_h6e95ff9d_0_369;
    vlSelfRef.envMuls_8__DOT___zz_sre5 = (0x00000007ffffffffULL 
                                          & (vlSelfRef.envMuls_8__DOT___zz_sre5_1 
                                             + vlSelfRef.envMuls_8__DOT___zz_sre5_2));
    vlSelfRef.envMuls_8__DOT___zz_sim5 = (0x00000007ffffffffULL 
                                          & (vlSelfRef.envMuls_8__DOT___zz_sim5_1 
                                             + vlSelfRef.envMuls_8__DOT___zz_sim5_2));
    vlSelfRef.envMuls_8__DOT___zz_db3_1 = __VdfgRegularize_h6e95ff9d_0_370;
    vlSelfRef.envMuls_8__DOT___zz_sb3_1 = __VdfgRegularize_h6e95ff9d_0_370;
    vlSelfRef.envMuls_8_io_rsp_valid = vlSelfRef.envMuls_8__DOT__io_rsp_valid;
    vlSelfRef.envMuls_8__DOT__io_rsp_payload_re = vlSelfRef.envMuls_8__DOT__reN;
    vlSelfRef.envMuls_8__DOT__io_rsp_payload_im = vlSelfRef.envMuls_8__DOT__imN;
    vlSelfRef.envMuls_8__DOT__br0 = vlSelfRef.envMuls_8__DOT__io_cmd_payload_b_re;
    vlSelfRef.envMuls_8__DOT__m2 = vlSelfRef.envMuls_8__DOT__mulM;
    vlSelfRef.envMuls_8__DOT__bi0 = vlSelfRef.envMuls_8__DOT__io_cmd_payload_b_im;
    vlSelfRef.envMuls_8__DOT__ai1 = vlSelfRef.envMuls_8__DOT__ai0;
    vlSelfRef.envMuls_8__DOT__ar1 = vlSelfRef.envMuls_8__DOT__ar0;
    vlSelfRef.envMuls_8__DOT__io_cmd_valid_delay_4 
        = vlSelfRef.envMuls_8__DOT__io_cmd_valid_delay_3;
    vlSelfRef.envMuls_8_io_rsp_payload_im = vlSelfRef.envMuls_8__DOT__io_rsp_payload_im;
    vlSelfRef.envMuls_8__DOT__mulM = (0x00000001ffffffffULL 
                                      & VL_MULS_QQQ(33, 
                                                    (0x00000001ffffffffULL 
                                                     & VL_EXTENDS_QI(33,17, vlSelfRef.envMuls_8__DOT__da1)), 
                                                    (0x00000001ffffffffULL 
                                                     & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.envMuls_8__DOT__bi1)))));
    vlSelfRef.envMuls_8__DOT__ai0 = vlSelfRef.envMuls_8__DOT__io_cmd_payload_a_im;
    vlSelfRef.envMuls_8__DOT__ar0 = vlSelfRef.envMuls_8__DOT__io_cmd_payload_a_re;
    vlSelfRef.envMuls_8__DOT__io_cmd_valid_delay_3 
        = vlSelfRef.envMuls_8__DOT__io_cmd_valid_delay_2;
    vlSelfRef.envMuls_8__DOT___zz_da1_1 = ((0x00010000U 
                                            & ((IData)(vlSelfRef.envMuls_8__DOT__ai0) 
                                               << 1U)) 
                                           | (IData)(vlSelfRef.envMuls_8__DOT__ai0));
    vlSelfRef.envMuls_8__DOT___zz_da1 = ((0x00010000U 
                                          & ((IData)(vlSelfRef.envMuls_8__DOT__ar0) 
                                             << 1U)) 
                                         | (IData)(vlSelfRef.envMuls_8__DOT__ar0));
    vlSelfRef.envMuls_8__DOT__io_cmd_valid_delay_2 
        = vlSelfRef.envMuls_8__DOT__io_cmd_valid_delay_1;
    vlSelfRef.envMuls_8__DOT__io_cmd_valid_delay_1 = 1U;
}

void Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__37(Vtop_PulseGenerator* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__37\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_371;
    __VdfgRegularize_h6e95ff9d_0_371 = 0;
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_372;
    __VdfgRegularize_h6e95ff9d_0_372 = 0;
    // Body
    vlSelfRef.envMuls_9__DOT__db3 = (0x0001ffffU & 
                                     (vlSelfRef.envMuls_9__DOT___zz_db3 
                                      - vlSelfRef.envMuls_9__DOT___zz_db3_1));
    vlSelfRef.envMuls_9__DOT__sb3 = (0x0001ffffU & 
                                     (vlSelfRef.envMuls_9__DOT___zz_sb3 
                                      + vlSelfRef.envMuls_9__DOT___zz_sb3_1));
    vlSelfRef.envMuls_9__DOT__da1 = (0x0001ffffU & 
                                     (vlSelfRef.envMuls_9__DOT___zz_da1 
                                      - vlSelfRef.envMuls_9__DOT___zz_da1_1));
    vlSelfRef.envMuls_9__DOT__pre4 = vlSelfRef.envMuls_9__DOT__mulPre;
    vlSelfRef.envMuls_9__DOT__pim4 = vlSelfRef.envMuls_9__DOT__mulPim;
    vlSelfRef.envMuls_9__DOT__sre5 = (0x00000007ffffffffULL 
                                      & (0x0000000000004000ULL 
                                         + vlSelfRef.envMuls_9__DOT___zz_sre5));
    vlSelfRef.envMuls_9__DOT__sim5 = (0x00000007ffffffffULL 
                                      & (0x0000000000004000ULL 
                                         + vlSelfRef.envMuls_9__DOT___zz_sim5));
    vlSelfRef.envMuls_9__DOT__br2 = vlSelfRef.envMuls_9__DOT__br1;
    vlSelfRef.envMuls_9__DOT__mcr4 = vlSelfRef.envMuls_9__DOT__m3;
    vlSelfRef.envMuls_9__DOT__mci4 = vlSelfRef.envMuls_9__DOT__m3;
    vlSelfRef.envMuls_9__DOT__bi2 = vlSelfRef.envMuls_9__DOT__bi1;
    vlSelfRef.envMuls_9__DOT__ai3 = vlSelfRef.envMuls_9__DOT__ai2;
    vlSelfRef.envMuls_9__DOT__ar3 = vlSelfRef.envMuls_9__DOT__ar2;
    vlSelfRef.envMuls_9__DOT__io_cmd_valid_delay_6 
        = vlSelfRef.envMuls_9__DOT__io_cmd_valid_delay_5;
    vlSelfRef.envMuls_9__DOT___zz_sre5_1 = (((QData)((IData)(
                                                             (3U 
                                                              & (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelfRef.envMuls_9__DOT__pre4 
                                                                                >> 0x00000020U)))))))) 
                                             << 0x00000021U) 
                                            | vlSelfRef.envMuls_9__DOT__pre4);
    vlSelfRef.envMuls_9__DOT___zz_sim5_1 = (((QData)((IData)(
                                                             (3U 
                                                              & (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelfRef.envMuls_9__DOT__pim4 
                                                                                >> 0x00000020U)))))))) 
                                             << 0x00000021U) 
                                            | vlSelfRef.envMuls_9__DOT__pim4);
    vlSelfRef.envMuls_9__DOT___zz_reN = (0x000fffffU 
                                         & (IData)(
                                                   (vlSelfRef.envMuls_9__DOT__sre5 
                                                    >> 0x0fU)));
    vlSelfRef.envMuls_9__DOT___zz_imN = (0x000fffffU 
                                         & (IData)(
                                                   (vlSelfRef.envMuls_9__DOT__sim5 
                                                    >> 0x0fU)));
    __VdfgRegularize_h6e95ff9d_0_371 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.envMuls_9__DOT__br2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.envMuls_9__DOT__br2));
    vlSelfRef.envMuls_9__DOT__br1 = vlSelfRef.envMuls_9__DOT__br0;
    vlSelfRef.envMuls_9__DOT___zz_sre5_2 = (((QData)((IData)(
                                                             (3U 
                                                              & (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelfRef.envMuls_9__DOT__mcr4 
                                                                                >> 0x00000020U)))))))) 
                                             << 0x00000021U) 
                                            | vlSelfRef.envMuls_9__DOT__mcr4);
    vlSelfRef.envMuls_9__DOT___zz_sim5_2 = (((QData)((IData)(
                                                             (3U 
                                                              & (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelfRef.envMuls_9__DOT__mci4 
                                                                                >> 0x00000020U)))))))) 
                                             << 0x00000021U) 
                                            | vlSelfRef.envMuls_9__DOT__mci4);
    vlSelfRef.envMuls_9__DOT__m3 = vlSelfRef.envMuls_9__DOT__m2;
    __VdfgRegularize_h6e95ff9d_0_372 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.envMuls_9__DOT__bi2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.envMuls_9__DOT__bi2));
    vlSelfRef.envMuls_9__DOT__bi1 = vlSelfRef.envMuls_9__DOT__bi0;
    vlSelfRef.envMuls_9__DOT__mulPim = (0x00000001ffffffffULL 
                                        & VL_MULS_QQQ(33, 
                                                      (0x00000001ffffffffULL 
                                                       & VL_EXTENDS_QI(33,17, vlSelfRef.envMuls_9__DOT__sb3)), 
                                                      (0x00000001ffffffffULL 
                                                       & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.envMuls_9__DOT__ai3)))));
    vlSelfRef.envMuls_9__DOT__ai2 = vlSelfRef.envMuls_9__DOT__ai1;
    vlSelfRef.envMuls_9__DOT__mulPre = (0x00000001ffffffffULL 
                                        & VL_MULS_QQQ(33, 
                                                      (0x00000001ffffffffULL 
                                                       & VL_EXTENDS_QI(33,17, vlSelfRef.envMuls_9__DOT__db3)), 
                                                      (0x00000001ffffffffULL 
                                                       & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.envMuls_9__DOT__ar3)))));
    vlSelfRef.envMuls_9__DOT__ar2 = vlSelfRef.envMuls_9__DOT__ar1;
    vlSelfRef.envMuls_9__DOT__io_rsp_valid = vlSelfRef.envMuls_9__DOT__io_cmd_valid_delay_6;
    vlSelfRef.envMuls_9__DOT__io_cmd_valid_delay_5 
        = vlSelfRef.envMuls_9__DOT__io_cmd_valid_delay_4;
    vlSelfRef.envMuls_9__DOT__reN = (0x0000ffffU & vlSelfRef.envMuls_9__DOT___zz_reN);
    vlSelfRef.envMuls_9__DOT__imN = (0x0000ffffU & vlSelfRef.envMuls_9__DOT___zz_imN);
    vlSelfRef.envMuls_9__DOT___zz_db3 = __VdfgRegularize_h6e95ff9d_0_371;
    vlSelfRef.envMuls_9__DOT___zz_sb3 = __VdfgRegularize_h6e95ff9d_0_371;
    vlSelfRef.envMuls_9__DOT___zz_sre5 = (0x00000007ffffffffULL 
                                          & (vlSelfRef.envMuls_9__DOT___zz_sre5_1 
                                             + vlSelfRef.envMuls_9__DOT___zz_sre5_2));
    vlSelfRef.envMuls_9__DOT___zz_sim5 = (0x00000007ffffffffULL 
                                          & (vlSelfRef.envMuls_9__DOT___zz_sim5_1 
                                             + vlSelfRef.envMuls_9__DOT___zz_sim5_2));
    vlSelfRef.envMuls_9__DOT___zz_db3_1 = __VdfgRegularize_h6e95ff9d_0_372;
    vlSelfRef.envMuls_9__DOT___zz_sb3_1 = __VdfgRegularize_h6e95ff9d_0_372;
    vlSelfRef.envMuls_9_io_rsp_valid = vlSelfRef.envMuls_9__DOT__io_rsp_valid;
    vlSelfRef.envMuls_9__DOT__io_rsp_payload_re = vlSelfRef.envMuls_9__DOT__reN;
    vlSelfRef.envMuls_9__DOT__io_rsp_payload_im = vlSelfRef.envMuls_9__DOT__imN;
    vlSelfRef.envMuls_9__DOT__br0 = vlSelfRef.envMuls_9__DOT__io_cmd_payload_b_re;
    vlSelfRef.envMuls_9__DOT__m2 = vlSelfRef.envMuls_9__DOT__mulM;
    vlSelfRef.envMuls_9__DOT__bi0 = vlSelfRef.envMuls_9__DOT__io_cmd_payload_b_im;
    vlSelfRef.envMuls_9__DOT__ai1 = vlSelfRef.envMuls_9__DOT__ai0;
    vlSelfRef.envMuls_9__DOT__ar1 = vlSelfRef.envMuls_9__DOT__ar0;
    vlSelfRef.envMuls_9__DOT__io_cmd_valid_delay_4 
        = vlSelfRef.envMuls_9__DOT__io_cmd_valid_delay_3;
    vlSelfRef.envMuls_9_io_rsp_payload_im = vlSelfRef.envMuls_9__DOT__io_rsp_payload_im;
    vlSelfRef.envMuls_9__DOT__mulM = (0x00000001ffffffffULL 
                                      & VL_MULS_QQQ(33, 
                                                    (0x00000001ffffffffULL 
                                                     & VL_EXTENDS_QI(33,17, vlSelfRef.envMuls_9__DOT__da1)), 
                                                    (0x00000001ffffffffULL 
                                                     & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.envMuls_9__DOT__bi1)))));
    vlSelfRef.envMuls_9__DOT__ai0 = vlSelfRef.envMuls_9__DOT__io_cmd_payload_a_im;
    vlSelfRef.envMuls_9__DOT__ar0 = vlSelfRef.envMuls_9__DOT__io_cmd_payload_a_re;
    vlSelfRef.envMuls_9__DOT__io_cmd_valid_delay_3 
        = vlSelfRef.envMuls_9__DOT__io_cmd_valid_delay_2;
    vlSelfRef.envMuls_9__DOT___zz_da1_1 = ((0x00010000U 
                                            & ((IData)(vlSelfRef.envMuls_9__DOT__ai0) 
                                               << 1U)) 
                                           | (IData)(vlSelfRef.envMuls_9__DOT__ai0));
    vlSelfRef.envMuls_9__DOT___zz_da1 = ((0x00010000U 
                                          & ((IData)(vlSelfRef.envMuls_9__DOT__ar0) 
                                             << 1U)) 
                                         | (IData)(vlSelfRef.envMuls_9__DOT__ar0));
    vlSelfRef.envMuls_9__DOT__io_cmd_valid_delay_2 
        = vlSelfRef.envMuls_9__DOT__io_cmd_valid_delay_1;
    vlSelfRef.envMuls_9__DOT__io_cmd_valid_delay_1 = 1U;
}

void Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__38(Vtop_PulseGenerator* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__38\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_373;
    __VdfgRegularize_h6e95ff9d_0_373 = 0;
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_374;
    __VdfgRegularize_h6e95ff9d_0_374 = 0;
    // Body
    vlSelfRef.envMuls_10__DOT__db3 = (0x0001ffffU & 
                                      (vlSelfRef.envMuls_10__DOT___zz_db3 
                                       - vlSelfRef.envMuls_10__DOT___zz_db3_1));
    vlSelfRef.envMuls_10__DOT__sb3 = (0x0001ffffU & 
                                      (vlSelfRef.envMuls_10__DOT___zz_sb3 
                                       + vlSelfRef.envMuls_10__DOT___zz_sb3_1));
    vlSelfRef.envMuls_10__DOT__da1 = (0x0001ffffU & 
                                      (vlSelfRef.envMuls_10__DOT___zz_da1 
                                       - vlSelfRef.envMuls_10__DOT___zz_da1_1));
    vlSelfRef.envMuls_10__DOT__pre4 = vlSelfRef.envMuls_10__DOT__mulPre;
    vlSelfRef.envMuls_10__DOT__pim4 = vlSelfRef.envMuls_10__DOT__mulPim;
    vlSelfRef.envMuls_10__DOT__sre5 = (0x00000007ffffffffULL 
                                       & (0x0000000000004000ULL 
                                          + vlSelfRef.envMuls_10__DOT___zz_sre5));
    vlSelfRef.envMuls_10__DOT__sim5 = (0x00000007ffffffffULL 
                                       & (0x0000000000004000ULL 
                                          + vlSelfRef.envMuls_10__DOT___zz_sim5));
    vlSelfRef.envMuls_10__DOT__br2 = vlSelfRef.envMuls_10__DOT__br1;
    vlSelfRef.envMuls_10__DOT__mcr4 = vlSelfRef.envMuls_10__DOT__m3;
    vlSelfRef.envMuls_10__DOT__mci4 = vlSelfRef.envMuls_10__DOT__m3;
    vlSelfRef.envMuls_10__DOT__bi2 = vlSelfRef.envMuls_10__DOT__bi1;
    vlSelfRef.envMuls_10__DOT__ai3 = vlSelfRef.envMuls_10__DOT__ai2;
    vlSelfRef.envMuls_10__DOT__ar3 = vlSelfRef.envMuls_10__DOT__ar2;
    vlSelfRef.envMuls_10__DOT__io_cmd_valid_delay_6 
        = vlSelfRef.envMuls_10__DOT__io_cmd_valid_delay_5;
    vlSelfRef.envMuls_10__DOT___zz_sre5_1 = (((QData)((IData)(
                                                              (3U 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelfRef.envMuls_10__DOT__pre4 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000021U) 
                                             | vlSelfRef.envMuls_10__DOT__pre4);
    vlSelfRef.envMuls_10__DOT___zz_sim5_1 = (((QData)((IData)(
                                                              (3U 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelfRef.envMuls_10__DOT__pim4 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000021U) 
                                             | vlSelfRef.envMuls_10__DOT__pim4);
    vlSelfRef.envMuls_10__DOT___zz_reN = (0x000fffffU 
                                          & (IData)(
                                                    (vlSelfRef.envMuls_10__DOT__sre5 
                                                     >> 0x0fU)));
    vlSelfRef.envMuls_10__DOT___zz_imN = (0x000fffffU 
                                          & (IData)(
                                                    (vlSelfRef.envMuls_10__DOT__sim5 
                                                     >> 0x0fU)));
    __VdfgRegularize_h6e95ff9d_0_373 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.envMuls_10__DOT__br2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.envMuls_10__DOT__br2));
    vlSelfRef.envMuls_10__DOT__br1 = vlSelfRef.envMuls_10__DOT__br0;
    vlSelfRef.envMuls_10__DOT___zz_sre5_2 = (((QData)((IData)(
                                                              (3U 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelfRef.envMuls_10__DOT__mcr4 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000021U) 
                                             | vlSelfRef.envMuls_10__DOT__mcr4);
    vlSelfRef.envMuls_10__DOT___zz_sim5_2 = (((QData)((IData)(
                                                              (3U 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelfRef.envMuls_10__DOT__mci4 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000021U) 
                                             | vlSelfRef.envMuls_10__DOT__mci4);
    vlSelfRef.envMuls_10__DOT__m3 = vlSelfRef.envMuls_10__DOT__m2;
    __VdfgRegularize_h6e95ff9d_0_374 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.envMuls_10__DOT__bi2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.envMuls_10__DOT__bi2));
    vlSelfRef.envMuls_10__DOT__bi1 = vlSelfRef.envMuls_10__DOT__bi0;
    vlSelfRef.envMuls_10__DOT__mulPim = (0x00000001ffffffffULL 
                                         & VL_MULS_QQQ(33, 
                                                       (0x00000001ffffffffULL 
                                                        & VL_EXTENDS_QI(33,17, vlSelfRef.envMuls_10__DOT__sb3)), 
                                                       (0x00000001ffffffffULL 
                                                        & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.envMuls_10__DOT__ai3)))));
    vlSelfRef.envMuls_10__DOT__ai2 = vlSelfRef.envMuls_10__DOT__ai1;
    vlSelfRef.envMuls_10__DOT__mulPre = (0x00000001ffffffffULL 
                                         & VL_MULS_QQQ(33, 
                                                       (0x00000001ffffffffULL 
                                                        & VL_EXTENDS_QI(33,17, vlSelfRef.envMuls_10__DOT__db3)), 
                                                       (0x00000001ffffffffULL 
                                                        & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.envMuls_10__DOT__ar3)))));
    vlSelfRef.envMuls_10__DOT__ar2 = vlSelfRef.envMuls_10__DOT__ar1;
    vlSelfRef.envMuls_10__DOT__io_rsp_valid = vlSelfRef.envMuls_10__DOT__io_cmd_valid_delay_6;
    vlSelfRef.envMuls_10__DOT__io_cmd_valid_delay_5 
        = vlSelfRef.envMuls_10__DOT__io_cmd_valid_delay_4;
    vlSelfRef.envMuls_10__DOT__reN = (0x0000ffffU & vlSelfRef.envMuls_10__DOT___zz_reN);
    vlSelfRef.envMuls_10__DOT__imN = (0x0000ffffU & vlSelfRef.envMuls_10__DOT___zz_imN);
    vlSelfRef.envMuls_10__DOT___zz_db3 = __VdfgRegularize_h6e95ff9d_0_373;
    vlSelfRef.envMuls_10__DOT___zz_sb3 = __VdfgRegularize_h6e95ff9d_0_373;
    vlSelfRef.envMuls_10__DOT___zz_sre5 = (0x00000007ffffffffULL 
                                           & (vlSelfRef.envMuls_10__DOT___zz_sre5_1 
                                              + vlSelfRef.envMuls_10__DOT___zz_sre5_2));
    vlSelfRef.envMuls_10__DOT___zz_sim5 = (0x00000007ffffffffULL 
                                           & (vlSelfRef.envMuls_10__DOT___zz_sim5_1 
                                              + vlSelfRef.envMuls_10__DOT___zz_sim5_2));
    vlSelfRef.envMuls_10__DOT___zz_db3_1 = __VdfgRegularize_h6e95ff9d_0_374;
    vlSelfRef.envMuls_10__DOT___zz_sb3_1 = __VdfgRegularize_h6e95ff9d_0_374;
    vlSelfRef.envMuls_10_io_rsp_valid = vlSelfRef.envMuls_10__DOT__io_rsp_valid;
    vlSelfRef.envMuls_10__DOT__io_rsp_payload_re = vlSelfRef.envMuls_10__DOT__reN;
    vlSelfRef.envMuls_10__DOT__io_rsp_payload_im = vlSelfRef.envMuls_10__DOT__imN;
    vlSelfRef.envMuls_10__DOT__br0 = vlSelfRef.envMuls_10__DOT__io_cmd_payload_b_re;
    vlSelfRef.envMuls_10__DOT__m2 = vlSelfRef.envMuls_10__DOT__mulM;
    vlSelfRef.envMuls_10__DOT__bi0 = vlSelfRef.envMuls_10__DOT__io_cmd_payload_b_im;
    vlSelfRef.envMuls_10__DOT__ai1 = vlSelfRef.envMuls_10__DOT__ai0;
    vlSelfRef.envMuls_10__DOT__ar1 = vlSelfRef.envMuls_10__DOT__ar0;
    vlSelfRef.envMuls_10__DOT__io_cmd_valid_delay_4 
        = vlSelfRef.envMuls_10__DOT__io_cmd_valid_delay_3;
    vlSelfRef.envMuls_10_io_rsp_payload_im = vlSelfRef.envMuls_10__DOT__io_rsp_payload_im;
    vlSelfRef.envMuls_10__DOT__mulM = (0x00000001ffffffffULL 
                                       & VL_MULS_QQQ(33, 
                                                     (0x00000001ffffffffULL 
                                                      & VL_EXTENDS_QI(33,17, vlSelfRef.envMuls_10__DOT__da1)), 
                                                     (0x00000001ffffffffULL 
                                                      & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.envMuls_10__DOT__bi1)))));
    vlSelfRef.envMuls_10__DOT__ai0 = vlSelfRef.envMuls_10__DOT__io_cmd_payload_a_im;
    vlSelfRef.envMuls_10__DOT__ar0 = vlSelfRef.envMuls_10__DOT__io_cmd_payload_a_re;
    vlSelfRef.envMuls_10__DOT__io_cmd_valid_delay_3 
        = vlSelfRef.envMuls_10__DOT__io_cmd_valid_delay_2;
    vlSelfRef.envMuls_10__DOT___zz_da1_1 = ((0x00010000U 
                                             & ((IData)(vlSelfRef.envMuls_10__DOT__ai0) 
                                                << 1U)) 
                                            | (IData)(vlSelfRef.envMuls_10__DOT__ai0));
    vlSelfRef.envMuls_10__DOT___zz_da1 = ((0x00010000U 
                                           & ((IData)(vlSelfRef.envMuls_10__DOT__ar0) 
                                              << 1U)) 
                                          | (IData)(vlSelfRef.envMuls_10__DOT__ar0));
    vlSelfRef.envMuls_10__DOT__io_cmd_valid_delay_2 
        = vlSelfRef.envMuls_10__DOT__io_cmd_valid_delay_1;
    vlSelfRef.envMuls_10__DOT__io_cmd_valid_delay_1 = 1U;
}

void Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__39(Vtop_PulseGenerator* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__39\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_375;
    __VdfgRegularize_h6e95ff9d_0_375 = 0;
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_376;
    __VdfgRegularize_h6e95ff9d_0_376 = 0;
    // Body
    vlSelfRef.envMuls_11__DOT__db3 = (0x0001ffffU & 
                                      (vlSelfRef.envMuls_11__DOT___zz_db3 
                                       - vlSelfRef.envMuls_11__DOT___zz_db3_1));
    vlSelfRef.envMuls_11__DOT__sb3 = (0x0001ffffU & 
                                      (vlSelfRef.envMuls_11__DOT___zz_sb3 
                                       + vlSelfRef.envMuls_11__DOT___zz_sb3_1));
    vlSelfRef.envMuls_11__DOT__da1 = (0x0001ffffU & 
                                      (vlSelfRef.envMuls_11__DOT___zz_da1 
                                       - vlSelfRef.envMuls_11__DOT___zz_da1_1));
    vlSelfRef.envMuls_11__DOT__pre4 = vlSelfRef.envMuls_11__DOT__mulPre;
    vlSelfRef.envMuls_11__DOT__pim4 = vlSelfRef.envMuls_11__DOT__mulPim;
    vlSelfRef.envMuls_11__DOT__sre5 = (0x00000007ffffffffULL 
                                       & (0x0000000000004000ULL 
                                          + vlSelfRef.envMuls_11__DOT___zz_sre5));
    vlSelfRef.envMuls_11__DOT__sim5 = (0x00000007ffffffffULL 
                                       & (0x0000000000004000ULL 
                                          + vlSelfRef.envMuls_11__DOT___zz_sim5));
    vlSelfRef.envMuls_11__DOT__br2 = vlSelfRef.envMuls_11__DOT__br1;
    vlSelfRef.envMuls_11__DOT__mcr4 = vlSelfRef.envMuls_11__DOT__m3;
    vlSelfRef.envMuls_11__DOT__mci4 = vlSelfRef.envMuls_11__DOT__m3;
    vlSelfRef.envMuls_11__DOT__bi2 = vlSelfRef.envMuls_11__DOT__bi1;
    vlSelfRef.envMuls_11__DOT__ai3 = vlSelfRef.envMuls_11__DOT__ai2;
    vlSelfRef.envMuls_11__DOT__ar3 = vlSelfRef.envMuls_11__DOT__ar2;
    vlSelfRef.envMuls_11__DOT__io_cmd_valid_delay_6 
        = vlSelfRef.envMuls_11__DOT__io_cmd_valid_delay_5;
    vlSelfRef.envMuls_11__DOT___zz_sre5_1 = (((QData)((IData)(
                                                              (3U 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelfRef.envMuls_11__DOT__pre4 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000021U) 
                                             | vlSelfRef.envMuls_11__DOT__pre4);
    vlSelfRef.envMuls_11__DOT___zz_sim5_1 = (((QData)((IData)(
                                                              (3U 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelfRef.envMuls_11__DOT__pim4 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000021U) 
                                             | vlSelfRef.envMuls_11__DOT__pim4);
    vlSelfRef.envMuls_11__DOT___zz_reN = (0x000fffffU 
                                          & (IData)(
                                                    (vlSelfRef.envMuls_11__DOT__sre5 
                                                     >> 0x0fU)));
    vlSelfRef.envMuls_11__DOT___zz_imN = (0x000fffffU 
                                          & (IData)(
                                                    (vlSelfRef.envMuls_11__DOT__sim5 
                                                     >> 0x0fU)));
    __VdfgRegularize_h6e95ff9d_0_375 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.envMuls_11__DOT__br2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.envMuls_11__DOT__br2));
    vlSelfRef.envMuls_11__DOT__br1 = vlSelfRef.envMuls_11__DOT__br0;
    vlSelfRef.envMuls_11__DOT___zz_sre5_2 = (((QData)((IData)(
                                                              (3U 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelfRef.envMuls_11__DOT__mcr4 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000021U) 
                                             | vlSelfRef.envMuls_11__DOT__mcr4);
    vlSelfRef.envMuls_11__DOT___zz_sim5_2 = (((QData)((IData)(
                                                              (3U 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelfRef.envMuls_11__DOT__mci4 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000021U) 
                                             | vlSelfRef.envMuls_11__DOT__mci4);
    vlSelfRef.envMuls_11__DOT__m3 = vlSelfRef.envMuls_11__DOT__m2;
    __VdfgRegularize_h6e95ff9d_0_376 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.envMuls_11__DOT__bi2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.envMuls_11__DOT__bi2));
    vlSelfRef.envMuls_11__DOT__bi1 = vlSelfRef.envMuls_11__DOT__bi0;
    vlSelfRef.envMuls_11__DOT__mulPim = (0x00000001ffffffffULL 
                                         & VL_MULS_QQQ(33, 
                                                       (0x00000001ffffffffULL 
                                                        & VL_EXTENDS_QI(33,17, vlSelfRef.envMuls_11__DOT__sb3)), 
                                                       (0x00000001ffffffffULL 
                                                        & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.envMuls_11__DOT__ai3)))));
    vlSelfRef.envMuls_11__DOT__ai2 = vlSelfRef.envMuls_11__DOT__ai1;
    vlSelfRef.envMuls_11__DOT__mulPre = (0x00000001ffffffffULL 
                                         & VL_MULS_QQQ(33, 
                                                       (0x00000001ffffffffULL 
                                                        & VL_EXTENDS_QI(33,17, vlSelfRef.envMuls_11__DOT__db3)), 
                                                       (0x00000001ffffffffULL 
                                                        & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.envMuls_11__DOT__ar3)))));
    vlSelfRef.envMuls_11__DOT__ar2 = vlSelfRef.envMuls_11__DOT__ar1;
    vlSelfRef.envMuls_11__DOT__io_rsp_valid = vlSelfRef.envMuls_11__DOT__io_cmd_valid_delay_6;
    vlSelfRef.envMuls_11__DOT__io_cmd_valid_delay_5 
        = vlSelfRef.envMuls_11__DOT__io_cmd_valid_delay_4;
    vlSelfRef.envMuls_11__DOT__reN = (0x0000ffffU & vlSelfRef.envMuls_11__DOT___zz_reN);
    vlSelfRef.envMuls_11__DOT__imN = (0x0000ffffU & vlSelfRef.envMuls_11__DOT___zz_imN);
    vlSelfRef.envMuls_11__DOT___zz_db3 = __VdfgRegularize_h6e95ff9d_0_375;
    vlSelfRef.envMuls_11__DOT___zz_sb3 = __VdfgRegularize_h6e95ff9d_0_375;
    vlSelfRef.envMuls_11__DOT___zz_sre5 = (0x00000007ffffffffULL 
                                           & (vlSelfRef.envMuls_11__DOT___zz_sre5_1 
                                              + vlSelfRef.envMuls_11__DOT___zz_sre5_2));
    vlSelfRef.envMuls_11__DOT___zz_sim5 = (0x00000007ffffffffULL 
                                           & (vlSelfRef.envMuls_11__DOT___zz_sim5_1 
                                              + vlSelfRef.envMuls_11__DOT___zz_sim5_2));
    vlSelfRef.envMuls_11__DOT___zz_db3_1 = __VdfgRegularize_h6e95ff9d_0_376;
    vlSelfRef.envMuls_11__DOT___zz_sb3_1 = __VdfgRegularize_h6e95ff9d_0_376;
    vlSelfRef.envMuls_11_io_rsp_valid = vlSelfRef.envMuls_11__DOT__io_rsp_valid;
    vlSelfRef.envMuls_11__DOT__io_rsp_payload_re = vlSelfRef.envMuls_11__DOT__reN;
    vlSelfRef.envMuls_11__DOT__io_rsp_payload_im = vlSelfRef.envMuls_11__DOT__imN;
    vlSelfRef.envMuls_11__DOT__br0 = vlSelfRef.envMuls_11__DOT__io_cmd_payload_b_re;
    vlSelfRef.envMuls_11__DOT__m2 = vlSelfRef.envMuls_11__DOT__mulM;
    vlSelfRef.envMuls_11__DOT__bi0 = vlSelfRef.envMuls_11__DOT__io_cmd_payload_b_im;
    vlSelfRef.envMuls_11__DOT__ai1 = vlSelfRef.envMuls_11__DOT__ai0;
    vlSelfRef.envMuls_11__DOT__ar1 = vlSelfRef.envMuls_11__DOT__ar0;
    vlSelfRef.envMuls_11__DOT__io_cmd_valid_delay_4 
        = vlSelfRef.envMuls_11__DOT__io_cmd_valid_delay_3;
    vlSelfRef.envMuls_11_io_rsp_payload_im = vlSelfRef.envMuls_11__DOT__io_rsp_payload_im;
    vlSelfRef.envMuls_11__DOT__mulM = (0x00000001ffffffffULL 
                                       & VL_MULS_QQQ(33, 
                                                     (0x00000001ffffffffULL 
                                                      & VL_EXTENDS_QI(33,17, vlSelfRef.envMuls_11__DOT__da1)), 
                                                     (0x00000001ffffffffULL 
                                                      & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.envMuls_11__DOT__bi1)))));
    vlSelfRef.envMuls_11__DOT__ai0 = vlSelfRef.envMuls_11__DOT__io_cmd_payload_a_im;
    vlSelfRef.envMuls_11__DOT__ar0 = vlSelfRef.envMuls_11__DOT__io_cmd_payload_a_re;
    vlSelfRef.envMuls_11__DOT__io_cmd_valid_delay_3 
        = vlSelfRef.envMuls_11__DOT__io_cmd_valid_delay_2;
    vlSelfRef.envMuls_11__DOT___zz_da1_1 = ((0x00010000U 
                                             & ((IData)(vlSelfRef.envMuls_11__DOT__ai0) 
                                                << 1U)) 
                                            | (IData)(vlSelfRef.envMuls_11__DOT__ai0));
    vlSelfRef.envMuls_11__DOT___zz_da1 = ((0x00010000U 
                                           & ((IData)(vlSelfRef.envMuls_11__DOT__ar0) 
                                              << 1U)) 
                                          | (IData)(vlSelfRef.envMuls_11__DOT__ar0));
    vlSelfRef.envMuls_11__DOT__io_cmd_valid_delay_2 
        = vlSelfRef.envMuls_11__DOT__io_cmd_valid_delay_1;
    vlSelfRef.envMuls_11__DOT__io_cmd_valid_delay_1 = 1U;
}

void Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__40(Vtop_PulseGenerator* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__40\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_377;
    __VdfgRegularize_h6e95ff9d_0_377 = 0;
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_378;
    __VdfgRegularize_h6e95ff9d_0_378 = 0;
    // Body
    vlSelfRef.envMuls_12__DOT__db3 = (0x0001ffffU & 
                                      (vlSelfRef.envMuls_12__DOT___zz_db3 
                                       - vlSelfRef.envMuls_12__DOT___zz_db3_1));
    vlSelfRef.envMuls_12__DOT__sb3 = (0x0001ffffU & 
                                      (vlSelfRef.envMuls_12__DOT___zz_sb3 
                                       + vlSelfRef.envMuls_12__DOT___zz_sb3_1));
    vlSelfRef.envMuls_12__DOT__da1 = (0x0001ffffU & 
                                      (vlSelfRef.envMuls_12__DOT___zz_da1 
                                       - vlSelfRef.envMuls_12__DOT___zz_da1_1));
    vlSelfRef.envMuls_12__DOT__pre4 = vlSelfRef.envMuls_12__DOT__mulPre;
    vlSelfRef.envMuls_12__DOT__pim4 = vlSelfRef.envMuls_12__DOT__mulPim;
    vlSelfRef.envMuls_12__DOT__sre5 = (0x00000007ffffffffULL 
                                       & (0x0000000000004000ULL 
                                          + vlSelfRef.envMuls_12__DOT___zz_sre5));
    vlSelfRef.envMuls_12__DOT__sim5 = (0x00000007ffffffffULL 
                                       & (0x0000000000004000ULL 
                                          + vlSelfRef.envMuls_12__DOT___zz_sim5));
    vlSelfRef.envMuls_12__DOT__br2 = vlSelfRef.envMuls_12__DOT__br1;
    vlSelfRef.envMuls_12__DOT__mcr4 = vlSelfRef.envMuls_12__DOT__m3;
    vlSelfRef.envMuls_12__DOT__mci4 = vlSelfRef.envMuls_12__DOT__m3;
    vlSelfRef.envMuls_12__DOT__bi2 = vlSelfRef.envMuls_12__DOT__bi1;
    vlSelfRef.envMuls_12__DOT__ai3 = vlSelfRef.envMuls_12__DOT__ai2;
    vlSelfRef.envMuls_12__DOT__ar3 = vlSelfRef.envMuls_12__DOT__ar2;
    vlSelfRef.envMuls_12__DOT__io_cmd_valid_delay_6 
        = vlSelfRef.envMuls_12__DOT__io_cmd_valid_delay_5;
    vlSelfRef.envMuls_12__DOT___zz_sre5_1 = (((QData)((IData)(
                                                              (3U 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelfRef.envMuls_12__DOT__pre4 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000021U) 
                                             | vlSelfRef.envMuls_12__DOT__pre4);
    vlSelfRef.envMuls_12__DOT___zz_sim5_1 = (((QData)((IData)(
                                                              (3U 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelfRef.envMuls_12__DOT__pim4 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000021U) 
                                             | vlSelfRef.envMuls_12__DOT__pim4);
    vlSelfRef.envMuls_12__DOT___zz_reN = (0x000fffffU 
                                          & (IData)(
                                                    (vlSelfRef.envMuls_12__DOT__sre5 
                                                     >> 0x0fU)));
    vlSelfRef.envMuls_12__DOT___zz_imN = (0x000fffffU 
                                          & (IData)(
                                                    (vlSelfRef.envMuls_12__DOT__sim5 
                                                     >> 0x0fU)));
    __VdfgRegularize_h6e95ff9d_0_377 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.envMuls_12__DOT__br2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.envMuls_12__DOT__br2));
    vlSelfRef.envMuls_12__DOT__br1 = vlSelfRef.envMuls_12__DOT__br0;
    vlSelfRef.envMuls_12__DOT___zz_sre5_2 = (((QData)((IData)(
                                                              (3U 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelfRef.envMuls_12__DOT__mcr4 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000021U) 
                                             | vlSelfRef.envMuls_12__DOT__mcr4);
    vlSelfRef.envMuls_12__DOT___zz_sim5_2 = (((QData)((IData)(
                                                              (3U 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelfRef.envMuls_12__DOT__mci4 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000021U) 
                                             | vlSelfRef.envMuls_12__DOT__mci4);
    vlSelfRef.envMuls_12__DOT__m3 = vlSelfRef.envMuls_12__DOT__m2;
    __VdfgRegularize_h6e95ff9d_0_378 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.envMuls_12__DOT__bi2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.envMuls_12__DOT__bi2));
    vlSelfRef.envMuls_12__DOT__bi1 = vlSelfRef.envMuls_12__DOT__bi0;
    vlSelfRef.envMuls_12__DOT__mulPim = (0x00000001ffffffffULL 
                                         & VL_MULS_QQQ(33, 
                                                       (0x00000001ffffffffULL 
                                                        & VL_EXTENDS_QI(33,17, vlSelfRef.envMuls_12__DOT__sb3)), 
                                                       (0x00000001ffffffffULL 
                                                        & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.envMuls_12__DOT__ai3)))));
    vlSelfRef.envMuls_12__DOT__ai2 = vlSelfRef.envMuls_12__DOT__ai1;
    vlSelfRef.envMuls_12__DOT__mulPre = (0x00000001ffffffffULL 
                                         & VL_MULS_QQQ(33, 
                                                       (0x00000001ffffffffULL 
                                                        & VL_EXTENDS_QI(33,17, vlSelfRef.envMuls_12__DOT__db3)), 
                                                       (0x00000001ffffffffULL 
                                                        & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.envMuls_12__DOT__ar3)))));
    vlSelfRef.envMuls_12__DOT__ar2 = vlSelfRef.envMuls_12__DOT__ar1;
    vlSelfRef.envMuls_12__DOT__io_rsp_valid = vlSelfRef.envMuls_12__DOT__io_cmd_valid_delay_6;
    vlSelfRef.envMuls_12__DOT__io_cmd_valid_delay_5 
        = vlSelfRef.envMuls_12__DOT__io_cmd_valid_delay_4;
    vlSelfRef.envMuls_12__DOT__reN = (0x0000ffffU & vlSelfRef.envMuls_12__DOT___zz_reN);
    vlSelfRef.envMuls_12__DOT__imN = (0x0000ffffU & vlSelfRef.envMuls_12__DOT___zz_imN);
    vlSelfRef.envMuls_12__DOT___zz_db3 = __VdfgRegularize_h6e95ff9d_0_377;
    vlSelfRef.envMuls_12__DOT___zz_sb3 = __VdfgRegularize_h6e95ff9d_0_377;
    vlSelfRef.envMuls_12__DOT___zz_sre5 = (0x00000007ffffffffULL 
                                           & (vlSelfRef.envMuls_12__DOT___zz_sre5_1 
                                              + vlSelfRef.envMuls_12__DOT___zz_sre5_2));
    vlSelfRef.envMuls_12__DOT___zz_sim5 = (0x00000007ffffffffULL 
                                           & (vlSelfRef.envMuls_12__DOT___zz_sim5_1 
                                              + vlSelfRef.envMuls_12__DOT___zz_sim5_2));
    vlSelfRef.envMuls_12__DOT___zz_db3_1 = __VdfgRegularize_h6e95ff9d_0_378;
    vlSelfRef.envMuls_12__DOT___zz_sb3_1 = __VdfgRegularize_h6e95ff9d_0_378;
    vlSelfRef.envMuls_12_io_rsp_valid = vlSelfRef.envMuls_12__DOT__io_rsp_valid;
    vlSelfRef.envMuls_12__DOT__io_rsp_payload_re = vlSelfRef.envMuls_12__DOT__reN;
    vlSelfRef.envMuls_12__DOT__io_rsp_payload_im = vlSelfRef.envMuls_12__DOT__imN;
    vlSelfRef.envMuls_12__DOT__br0 = vlSelfRef.envMuls_12__DOT__io_cmd_payload_b_re;
    vlSelfRef.envMuls_12__DOT__m2 = vlSelfRef.envMuls_12__DOT__mulM;
    vlSelfRef.envMuls_12__DOT__bi0 = vlSelfRef.envMuls_12__DOT__io_cmd_payload_b_im;
    vlSelfRef.envMuls_12__DOT__ai1 = vlSelfRef.envMuls_12__DOT__ai0;
    vlSelfRef.envMuls_12__DOT__ar1 = vlSelfRef.envMuls_12__DOT__ar0;
    vlSelfRef.envMuls_12__DOT__io_cmd_valid_delay_4 
        = vlSelfRef.envMuls_12__DOT__io_cmd_valid_delay_3;
    vlSelfRef.envMuls_12_io_rsp_payload_im = vlSelfRef.envMuls_12__DOT__io_rsp_payload_im;
    vlSelfRef.envMuls_12__DOT__mulM = (0x00000001ffffffffULL 
                                       & VL_MULS_QQQ(33, 
                                                     (0x00000001ffffffffULL 
                                                      & VL_EXTENDS_QI(33,17, vlSelfRef.envMuls_12__DOT__da1)), 
                                                     (0x00000001ffffffffULL 
                                                      & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.envMuls_12__DOT__bi1)))));
    vlSelfRef.envMuls_12__DOT__ai0 = vlSelfRef.envMuls_12__DOT__io_cmd_payload_a_im;
    vlSelfRef.envMuls_12__DOT__ar0 = vlSelfRef.envMuls_12__DOT__io_cmd_payload_a_re;
    vlSelfRef.envMuls_12__DOT__io_cmd_valid_delay_3 
        = vlSelfRef.envMuls_12__DOT__io_cmd_valid_delay_2;
    vlSelfRef.envMuls_12__DOT___zz_da1_1 = ((0x00010000U 
                                             & ((IData)(vlSelfRef.envMuls_12__DOT__ai0) 
                                                << 1U)) 
                                            | (IData)(vlSelfRef.envMuls_12__DOT__ai0));
    vlSelfRef.envMuls_12__DOT___zz_da1 = ((0x00010000U 
                                           & ((IData)(vlSelfRef.envMuls_12__DOT__ar0) 
                                              << 1U)) 
                                          | (IData)(vlSelfRef.envMuls_12__DOT__ar0));
    vlSelfRef.envMuls_12__DOT__io_cmd_valid_delay_2 
        = vlSelfRef.envMuls_12__DOT__io_cmd_valid_delay_1;
    vlSelfRef.envMuls_12__DOT__io_cmd_valid_delay_1 = 1U;
}

void Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__41(Vtop_PulseGenerator* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__41\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_379;
    __VdfgRegularize_h6e95ff9d_0_379 = 0;
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_380;
    __VdfgRegularize_h6e95ff9d_0_380 = 0;
    // Body
    vlSelfRef.envMuls_13__DOT__db3 = (0x0001ffffU & 
                                      (vlSelfRef.envMuls_13__DOT___zz_db3 
                                       - vlSelfRef.envMuls_13__DOT___zz_db3_1));
    vlSelfRef.envMuls_13__DOT__sb3 = (0x0001ffffU & 
                                      (vlSelfRef.envMuls_13__DOT___zz_sb3 
                                       + vlSelfRef.envMuls_13__DOT___zz_sb3_1));
    vlSelfRef.envMuls_13__DOT__da1 = (0x0001ffffU & 
                                      (vlSelfRef.envMuls_13__DOT___zz_da1 
                                       - vlSelfRef.envMuls_13__DOT___zz_da1_1));
    vlSelfRef.envMuls_13__DOT__pre4 = vlSelfRef.envMuls_13__DOT__mulPre;
    vlSelfRef.envMuls_13__DOT__pim4 = vlSelfRef.envMuls_13__DOT__mulPim;
    vlSelfRef.envMuls_13__DOT__sre5 = (0x00000007ffffffffULL 
                                       & (0x0000000000004000ULL 
                                          + vlSelfRef.envMuls_13__DOT___zz_sre5));
    vlSelfRef.envMuls_13__DOT__sim5 = (0x00000007ffffffffULL 
                                       & (0x0000000000004000ULL 
                                          + vlSelfRef.envMuls_13__DOT___zz_sim5));
    vlSelfRef.envMuls_13__DOT__br2 = vlSelfRef.envMuls_13__DOT__br1;
    vlSelfRef.envMuls_13__DOT__mcr4 = vlSelfRef.envMuls_13__DOT__m3;
    vlSelfRef.envMuls_13__DOT__mci4 = vlSelfRef.envMuls_13__DOT__m3;
    vlSelfRef.envMuls_13__DOT__bi2 = vlSelfRef.envMuls_13__DOT__bi1;
    vlSelfRef.envMuls_13__DOT__ai3 = vlSelfRef.envMuls_13__DOT__ai2;
    vlSelfRef.envMuls_13__DOT__ar3 = vlSelfRef.envMuls_13__DOT__ar2;
    vlSelfRef.envMuls_13__DOT__io_cmd_valid_delay_6 
        = vlSelfRef.envMuls_13__DOT__io_cmd_valid_delay_5;
    vlSelfRef.envMuls_13__DOT___zz_sre5_1 = (((QData)((IData)(
                                                              (3U 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelfRef.envMuls_13__DOT__pre4 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000021U) 
                                             | vlSelfRef.envMuls_13__DOT__pre4);
    vlSelfRef.envMuls_13__DOT___zz_sim5_1 = (((QData)((IData)(
                                                              (3U 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelfRef.envMuls_13__DOT__pim4 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000021U) 
                                             | vlSelfRef.envMuls_13__DOT__pim4);
    vlSelfRef.envMuls_13__DOT___zz_reN = (0x000fffffU 
                                          & (IData)(
                                                    (vlSelfRef.envMuls_13__DOT__sre5 
                                                     >> 0x0fU)));
    vlSelfRef.envMuls_13__DOT___zz_imN = (0x000fffffU 
                                          & (IData)(
                                                    (vlSelfRef.envMuls_13__DOT__sim5 
                                                     >> 0x0fU)));
    __VdfgRegularize_h6e95ff9d_0_379 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.envMuls_13__DOT__br2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.envMuls_13__DOT__br2));
    vlSelfRef.envMuls_13__DOT__br1 = vlSelfRef.envMuls_13__DOT__br0;
    vlSelfRef.envMuls_13__DOT___zz_sre5_2 = (((QData)((IData)(
                                                              (3U 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelfRef.envMuls_13__DOT__mcr4 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000021U) 
                                             | vlSelfRef.envMuls_13__DOT__mcr4);
    vlSelfRef.envMuls_13__DOT___zz_sim5_2 = (((QData)((IData)(
                                                              (3U 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelfRef.envMuls_13__DOT__mci4 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000021U) 
                                             | vlSelfRef.envMuls_13__DOT__mci4);
    vlSelfRef.envMuls_13__DOT__m3 = vlSelfRef.envMuls_13__DOT__m2;
    __VdfgRegularize_h6e95ff9d_0_380 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.envMuls_13__DOT__bi2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.envMuls_13__DOT__bi2));
    vlSelfRef.envMuls_13__DOT__bi1 = vlSelfRef.envMuls_13__DOT__bi0;
    vlSelfRef.envMuls_13__DOT__mulPim = (0x00000001ffffffffULL 
                                         & VL_MULS_QQQ(33, 
                                                       (0x00000001ffffffffULL 
                                                        & VL_EXTENDS_QI(33,17, vlSelfRef.envMuls_13__DOT__sb3)), 
                                                       (0x00000001ffffffffULL 
                                                        & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.envMuls_13__DOT__ai3)))));
    vlSelfRef.envMuls_13__DOT__ai2 = vlSelfRef.envMuls_13__DOT__ai1;
    vlSelfRef.envMuls_13__DOT__mulPre = (0x00000001ffffffffULL 
                                         & VL_MULS_QQQ(33, 
                                                       (0x00000001ffffffffULL 
                                                        & VL_EXTENDS_QI(33,17, vlSelfRef.envMuls_13__DOT__db3)), 
                                                       (0x00000001ffffffffULL 
                                                        & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.envMuls_13__DOT__ar3)))));
    vlSelfRef.envMuls_13__DOT__ar2 = vlSelfRef.envMuls_13__DOT__ar1;
    vlSelfRef.envMuls_13__DOT__io_rsp_valid = vlSelfRef.envMuls_13__DOT__io_cmd_valid_delay_6;
    vlSelfRef.envMuls_13__DOT__io_cmd_valid_delay_5 
        = vlSelfRef.envMuls_13__DOT__io_cmd_valid_delay_4;
    vlSelfRef.envMuls_13__DOT__reN = (0x0000ffffU & vlSelfRef.envMuls_13__DOT___zz_reN);
    vlSelfRef.envMuls_13__DOT__imN = (0x0000ffffU & vlSelfRef.envMuls_13__DOT___zz_imN);
    vlSelfRef.envMuls_13__DOT___zz_db3 = __VdfgRegularize_h6e95ff9d_0_379;
    vlSelfRef.envMuls_13__DOT___zz_sb3 = __VdfgRegularize_h6e95ff9d_0_379;
    vlSelfRef.envMuls_13__DOT___zz_sre5 = (0x00000007ffffffffULL 
                                           & (vlSelfRef.envMuls_13__DOT___zz_sre5_1 
                                              + vlSelfRef.envMuls_13__DOT___zz_sre5_2));
    vlSelfRef.envMuls_13__DOT___zz_sim5 = (0x00000007ffffffffULL 
                                           & (vlSelfRef.envMuls_13__DOT___zz_sim5_1 
                                              + vlSelfRef.envMuls_13__DOT___zz_sim5_2));
    vlSelfRef.envMuls_13__DOT___zz_db3_1 = __VdfgRegularize_h6e95ff9d_0_380;
    vlSelfRef.envMuls_13__DOT___zz_sb3_1 = __VdfgRegularize_h6e95ff9d_0_380;
    vlSelfRef.envMuls_13_io_rsp_valid = vlSelfRef.envMuls_13__DOT__io_rsp_valid;
    vlSelfRef.envMuls_13__DOT__io_rsp_payload_re = vlSelfRef.envMuls_13__DOT__reN;
    vlSelfRef.envMuls_13__DOT__io_rsp_payload_im = vlSelfRef.envMuls_13__DOT__imN;
    vlSelfRef.envMuls_13__DOT__br0 = vlSelfRef.envMuls_13__DOT__io_cmd_payload_b_re;
    vlSelfRef.envMuls_13__DOT__m2 = vlSelfRef.envMuls_13__DOT__mulM;
    vlSelfRef.envMuls_13__DOT__bi0 = vlSelfRef.envMuls_13__DOT__io_cmd_payload_b_im;
    vlSelfRef.envMuls_13__DOT__ai1 = vlSelfRef.envMuls_13__DOT__ai0;
    vlSelfRef.envMuls_13__DOT__ar1 = vlSelfRef.envMuls_13__DOT__ar0;
    vlSelfRef.envMuls_13__DOT__io_cmd_valid_delay_4 
        = vlSelfRef.envMuls_13__DOT__io_cmd_valid_delay_3;
    vlSelfRef.envMuls_13_io_rsp_payload_im = vlSelfRef.envMuls_13__DOT__io_rsp_payload_im;
    vlSelfRef.envMuls_13__DOT__mulM = (0x00000001ffffffffULL 
                                       & VL_MULS_QQQ(33, 
                                                     (0x00000001ffffffffULL 
                                                      & VL_EXTENDS_QI(33,17, vlSelfRef.envMuls_13__DOT__da1)), 
                                                     (0x00000001ffffffffULL 
                                                      & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.envMuls_13__DOT__bi1)))));
    vlSelfRef.envMuls_13__DOT__ai0 = vlSelfRef.envMuls_13__DOT__io_cmd_payload_a_im;
    vlSelfRef.envMuls_13__DOT__ar0 = vlSelfRef.envMuls_13__DOT__io_cmd_payload_a_re;
    vlSelfRef.envMuls_13__DOT__io_cmd_valid_delay_3 
        = vlSelfRef.envMuls_13__DOT__io_cmd_valid_delay_2;
    vlSelfRef.envMuls_13__DOT___zz_da1_1 = ((0x00010000U 
                                             & ((IData)(vlSelfRef.envMuls_13__DOT__ai0) 
                                                << 1U)) 
                                            | (IData)(vlSelfRef.envMuls_13__DOT__ai0));
    vlSelfRef.envMuls_13__DOT___zz_da1 = ((0x00010000U 
                                           & ((IData)(vlSelfRef.envMuls_13__DOT__ar0) 
                                              << 1U)) 
                                          | (IData)(vlSelfRef.envMuls_13__DOT__ar0));
    vlSelfRef.envMuls_13__DOT__io_cmd_valid_delay_2 
        = vlSelfRef.envMuls_13__DOT__io_cmd_valid_delay_1;
    vlSelfRef.envMuls_13__DOT__io_cmd_valid_delay_1 = 1U;
}

void Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__42(Vtop_PulseGenerator* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__42\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_381;
    __VdfgRegularize_h6e95ff9d_0_381 = 0;
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_382;
    __VdfgRegularize_h6e95ff9d_0_382 = 0;
    // Body
    vlSelfRef.envMuls_14__DOT__db3 = (0x0001ffffU & 
                                      (vlSelfRef.envMuls_14__DOT___zz_db3 
                                       - vlSelfRef.envMuls_14__DOT___zz_db3_1));
    vlSelfRef.envMuls_14__DOT__sb3 = (0x0001ffffU & 
                                      (vlSelfRef.envMuls_14__DOT___zz_sb3 
                                       + vlSelfRef.envMuls_14__DOT___zz_sb3_1));
    vlSelfRef.envMuls_14__DOT__da1 = (0x0001ffffU & 
                                      (vlSelfRef.envMuls_14__DOT___zz_da1 
                                       - vlSelfRef.envMuls_14__DOT___zz_da1_1));
    vlSelfRef.envMuls_14__DOT__pre4 = vlSelfRef.envMuls_14__DOT__mulPre;
    vlSelfRef.envMuls_14__DOT__pim4 = vlSelfRef.envMuls_14__DOT__mulPim;
    vlSelfRef.envMuls_14__DOT__sre5 = (0x00000007ffffffffULL 
                                       & (0x0000000000004000ULL 
                                          + vlSelfRef.envMuls_14__DOT___zz_sre5));
    vlSelfRef.envMuls_14__DOT__sim5 = (0x00000007ffffffffULL 
                                       & (0x0000000000004000ULL 
                                          + vlSelfRef.envMuls_14__DOT___zz_sim5));
    vlSelfRef.envMuls_14__DOT__br2 = vlSelfRef.envMuls_14__DOT__br1;
    vlSelfRef.envMuls_14__DOT__mcr4 = vlSelfRef.envMuls_14__DOT__m3;
    vlSelfRef.envMuls_14__DOT__mci4 = vlSelfRef.envMuls_14__DOT__m3;
    vlSelfRef.envMuls_14__DOT__bi2 = vlSelfRef.envMuls_14__DOT__bi1;
    vlSelfRef.envMuls_14__DOT__ai3 = vlSelfRef.envMuls_14__DOT__ai2;
    vlSelfRef.envMuls_14__DOT__ar3 = vlSelfRef.envMuls_14__DOT__ar2;
    vlSelfRef.envMuls_14__DOT__io_cmd_valid_delay_6 
        = vlSelfRef.envMuls_14__DOT__io_cmd_valid_delay_5;
    vlSelfRef.envMuls_14__DOT___zz_sre5_1 = (((QData)((IData)(
                                                              (3U 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelfRef.envMuls_14__DOT__pre4 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000021U) 
                                             | vlSelfRef.envMuls_14__DOT__pre4);
    vlSelfRef.envMuls_14__DOT___zz_sim5_1 = (((QData)((IData)(
                                                              (3U 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelfRef.envMuls_14__DOT__pim4 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000021U) 
                                             | vlSelfRef.envMuls_14__DOT__pim4);
    vlSelfRef.envMuls_14__DOT___zz_reN = (0x000fffffU 
                                          & (IData)(
                                                    (vlSelfRef.envMuls_14__DOT__sre5 
                                                     >> 0x0fU)));
    vlSelfRef.envMuls_14__DOT___zz_imN = (0x000fffffU 
                                          & (IData)(
                                                    (vlSelfRef.envMuls_14__DOT__sim5 
                                                     >> 0x0fU)));
    __VdfgRegularize_h6e95ff9d_0_381 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.envMuls_14__DOT__br2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.envMuls_14__DOT__br2));
    vlSelfRef.envMuls_14__DOT__br1 = vlSelfRef.envMuls_14__DOT__br0;
    vlSelfRef.envMuls_14__DOT___zz_sre5_2 = (((QData)((IData)(
                                                              (3U 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelfRef.envMuls_14__DOT__mcr4 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000021U) 
                                             | vlSelfRef.envMuls_14__DOT__mcr4);
    vlSelfRef.envMuls_14__DOT___zz_sim5_2 = (((QData)((IData)(
                                                              (3U 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelfRef.envMuls_14__DOT__mci4 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000021U) 
                                             | vlSelfRef.envMuls_14__DOT__mci4);
    vlSelfRef.envMuls_14__DOT__m3 = vlSelfRef.envMuls_14__DOT__m2;
    __VdfgRegularize_h6e95ff9d_0_382 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.envMuls_14__DOT__bi2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.envMuls_14__DOT__bi2));
    vlSelfRef.envMuls_14__DOT__bi1 = vlSelfRef.envMuls_14__DOT__bi0;
    vlSelfRef.envMuls_14__DOT__mulPim = (0x00000001ffffffffULL 
                                         & VL_MULS_QQQ(33, 
                                                       (0x00000001ffffffffULL 
                                                        & VL_EXTENDS_QI(33,17, vlSelfRef.envMuls_14__DOT__sb3)), 
                                                       (0x00000001ffffffffULL 
                                                        & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.envMuls_14__DOT__ai3)))));
    vlSelfRef.envMuls_14__DOT__ai2 = vlSelfRef.envMuls_14__DOT__ai1;
    vlSelfRef.envMuls_14__DOT__mulPre = (0x00000001ffffffffULL 
                                         & VL_MULS_QQQ(33, 
                                                       (0x00000001ffffffffULL 
                                                        & VL_EXTENDS_QI(33,17, vlSelfRef.envMuls_14__DOT__db3)), 
                                                       (0x00000001ffffffffULL 
                                                        & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.envMuls_14__DOT__ar3)))));
    vlSelfRef.envMuls_14__DOT__ar2 = vlSelfRef.envMuls_14__DOT__ar1;
    vlSelfRef.envMuls_14__DOT__io_rsp_valid = vlSelfRef.envMuls_14__DOT__io_cmd_valid_delay_6;
    vlSelfRef.envMuls_14__DOT__io_cmd_valid_delay_5 
        = vlSelfRef.envMuls_14__DOT__io_cmd_valid_delay_4;
    vlSelfRef.envMuls_14__DOT__reN = (0x0000ffffU & vlSelfRef.envMuls_14__DOT___zz_reN);
    vlSelfRef.envMuls_14__DOT__imN = (0x0000ffffU & vlSelfRef.envMuls_14__DOT___zz_imN);
    vlSelfRef.envMuls_14__DOT___zz_db3 = __VdfgRegularize_h6e95ff9d_0_381;
    vlSelfRef.envMuls_14__DOT___zz_sb3 = __VdfgRegularize_h6e95ff9d_0_381;
    vlSelfRef.envMuls_14__DOT___zz_sre5 = (0x00000007ffffffffULL 
                                           & (vlSelfRef.envMuls_14__DOT___zz_sre5_1 
                                              + vlSelfRef.envMuls_14__DOT___zz_sre5_2));
    vlSelfRef.envMuls_14__DOT___zz_sim5 = (0x00000007ffffffffULL 
                                           & (vlSelfRef.envMuls_14__DOT___zz_sim5_1 
                                              + vlSelfRef.envMuls_14__DOT___zz_sim5_2));
    vlSelfRef.envMuls_14__DOT___zz_db3_1 = __VdfgRegularize_h6e95ff9d_0_382;
    vlSelfRef.envMuls_14__DOT___zz_sb3_1 = __VdfgRegularize_h6e95ff9d_0_382;
    vlSelfRef.envMuls_14_io_rsp_valid = vlSelfRef.envMuls_14__DOT__io_rsp_valid;
    vlSelfRef.envMuls_14__DOT__io_rsp_payload_re = vlSelfRef.envMuls_14__DOT__reN;
    vlSelfRef.envMuls_14__DOT__io_rsp_payload_im = vlSelfRef.envMuls_14__DOT__imN;
    vlSelfRef.envMuls_14__DOT__br0 = vlSelfRef.envMuls_14__DOT__io_cmd_payload_b_re;
    vlSelfRef.envMuls_14__DOT__m2 = vlSelfRef.envMuls_14__DOT__mulM;
    vlSelfRef.envMuls_14__DOT__bi0 = vlSelfRef.envMuls_14__DOT__io_cmd_payload_b_im;
    vlSelfRef.envMuls_14__DOT__ai1 = vlSelfRef.envMuls_14__DOT__ai0;
    vlSelfRef.envMuls_14__DOT__ar1 = vlSelfRef.envMuls_14__DOT__ar0;
    vlSelfRef.envMuls_14__DOT__io_cmd_valid_delay_4 
        = vlSelfRef.envMuls_14__DOT__io_cmd_valid_delay_3;
    vlSelfRef.envMuls_14_io_rsp_payload_im = vlSelfRef.envMuls_14__DOT__io_rsp_payload_im;
    vlSelfRef.envMuls_14__DOT__mulM = (0x00000001ffffffffULL 
                                       & VL_MULS_QQQ(33, 
                                                     (0x00000001ffffffffULL 
                                                      & VL_EXTENDS_QI(33,17, vlSelfRef.envMuls_14__DOT__da1)), 
                                                     (0x00000001ffffffffULL 
                                                      & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.envMuls_14__DOT__bi1)))));
    vlSelfRef.envMuls_14__DOT__ai0 = vlSelfRef.envMuls_14__DOT__io_cmd_payload_a_im;
    vlSelfRef.envMuls_14__DOT__ar0 = vlSelfRef.envMuls_14__DOT__io_cmd_payload_a_re;
    vlSelfRef.envMuls_14__DOT__io_cmd_valid_delay_3 
        = vlSelfRef.envMuls_14__DOT__io_cmd_valid_delay_2;
    vlSelfRef.envMuls_14__DOT___zz_da1_1 = ((0x00010000U 
                                             & ((IData)(vlSelfRef.envMuls_14__DOT__ai0) 
                                                << 1U)) 
                                            | (IData)(vlSelfRef.envMuls_14__DOT__ai0));
    vlSelfRef.envMuls_14__DOT___zz_da1 = ((0x00010000U 
                                           & ((IData)(vlSelfRef.envMuls_14__DOT__ar0) 
                                              << 1U)) 
                                          | (IData)(vlSelfRef.envMuls_14__DOT__ar0));
    vlSelfRef.envMuls_14__DOT__io_cmd_valid_delay_2 
        = vlSelfRef.envMuls_14__DOT__io_cmd_valid_delay_1;
    vlSelfRef.envMuls_14__DOT__io_cmd_valid_delay_1 = 1U;
}

void Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__43(Vtop_PulseGenerator* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__43\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_383;
    __VdfgRegularize_h6e95ff9d_0_383 = 0;
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_384;
    __VdfgRegularize_h6e95ff9d_0_384 = 0;
    // Body
    vlSelfRef.envMuls_15__DOT__db3 = (0x0001ffffU & 
                                      (vlSelfRef.envMuls_15__DOT___zz_db3 
                                       - vlSelfRef.envMuls_15__DOT___zz_db3_1));
    vlSelfRef.envMuls_15__DOT__sb3 = (0x0001ffffU & 
                                      (vlSelfRef.envMuls_15__DOT___zz_sb3 
                                       + vlSelfRef.envMuls_15__DOT___zz_sb3_1));
    vlSelfRef.envMuls_15__DOT__da1 = (0x0001ffffU & 
                                      (vlSelfRef.envMuls_15__DOT___zz_da1 
                                       - vlSelfRef.envMuls_15__DOT___zz_da1_1));
    vlSelfRef.envMuls_15__DOT__pre4 = vlSelfRef.envMuls_15__DOT__mulPre;
    vlSelfRef.envMuls_15__DOT__pim4 = vlSelfRef.envMuls_15__DOT__mulPim;
    vlSelfRef.envMuls_15__DOT__sre5 = (0x00000007ffffffffULL 
                                       & (0x0000000000004000ULL 
                                          + vlSelfRef.envMuls_15__DOT___zz_sre5));
    vlSelfRef.envMuls_15__DOT__sim5 = (0x00000007ffffffffULL 
                                       & (0x0000000000004000ULL 
                                          + vlSelfRef.envMuls_15__DOT___zz_sim5));
    vlSelfRef.envMuls_15__DOT__br2 = vlSelfRef.envMuls_15__DOT__br1;
    vlSelfRef.envMuls_15__DOT__mcr4 = vlSelfRef.envMuls_15__DOT__m3;
    vlSelfRef.envMuls_15__DOT__mci4 = vlSelfRef.envMuls_15__DOT__m3;
    vlSelfRef.envMuls_15__DOT__bi2 = vlSelfRef.envMuls_15__DOT__bi1;
    vlSelfRef.envMuls_15__DOT__ai3 = vlSelfRef.envMuls_15__DOT__ai2;
    vlSelfRef.envMuls_15__DOT__ar3 = vlSelfRef.envMuls_15__DOT__ar2;
    vlSelfRef.envMuls_15__DOT__io_cmd_valid_delay_6 
        = vlSelfRef.envMuls_15__DOT__io_cmd_valid_delay_5;
    vlSelfRef.envMuls_15__DOT___zz_sre5_1 = (((QData)((IData)(
                                                              (3U 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelfRef.envMuls_15__DOT__pre4 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000021U) 
                                             | vlSelfRef.envMuls_15__DOT__pre4);
    vlSelfRef.envMuls_15__DOT___zz_sim5_1 = (((QData)((IData)(
                                                              (3U 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelfRef.envMuls_15__DOT__pim4 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000021U) 
                                             | vlSelfRef.envMuls_15__DOT__pim4);
    vlSelfRef.envMuls_15__DOT___zz_reN = (0x000fffffU 
                                          & (IData)(
                                                    (vlSelfRef.envMuls_15__DOT__sre5 
                                                     >> 0x0fU)));
    vlSelfRef.envMuls_15__DOT___zz_imN = (0x000fffffU 
                                          & (IData)(
                                                    (vlSelfRef.envMuls_15__DOT__sim5 
                                                     >> 0x0fU)));
    __VdfgRegularize_h6e95ff9d_0_383 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.envMuls_15__DOT__br2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.envMuls_15__DOT__br2));
    vlSelfRef.envMuls_15__DOT__br1 = vlSelfRef.envMuls_15__DOT__br0;
    vlSelfRef.envMuls_15__DOT___zz_sre5_2 = (((QData)((IData)(
                                                              (3U 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelfRef.envMuls_15__DOT__mcr4 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000021U) 
                                             | vlSelfRef.envMuls_15__DOT__mcr4);
    vlSelfRef.envMuls_15__DOT___zz_sim5_2 = (((QData)((IData)(
                                                              (3U 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelfRef.envMuls_15__DOT__mci4 
                                                                                >> 0x00000020U)))))))) 
                                              << 0x00000021U) 
                                             | vlSelfRef.envMuls_15__DOT__mci4);
    vlSelfRef.envMuls_15__DOT__m3 = vlSelfRef.envMuls_15__DOT__m2;
    __VdfgRegularize_h6e95ff9d_0_384 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.envMuls_15__DOT__bi2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.envMuls_15__DOT__bi2));
    vlSelfRef.envMuls_15__DOT__bi1 = vlSelfRef.envMuls_15__DOT__bi0;
    vlSelfRef.envMuls_15__DOT__mulPim = (0x00000001ffffffffULL 
                                         & VL_MULS_QQQ(33, 
                                                       (0x00000001ffffffffULL 
                                                        & VL_EXTENDS_QI(33,17, vlSelfRef.envMuls_15__DOT__sb3)), 
                                                       (0x00000001ffffffffULL 
                                                        & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.envMuls_15__DOT__ai3)))));
    vlSelfRef.envMuls_15__DOT__ai2 = vlSelfRef.envMuls_15__DOT__ai1;
    vlSelfRef.envMuls_15__DOT__mulPre = (0x00000001ffffffffULL 
                                         & VL_MULS_QQQ(33, 
                                                       (0x00000001ffffffffULL 
                                                        & VL_EXTENDS_QI(33,17, vlSelfRef.envMuls_15__DOT__db3)), 
                                                       (0x00000001ffffffffULL 
                                                        & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.envMuls_15__DOT__ar3)))));
    vlSelfRef.envMuls_15__DOT__ar2 = vlSelfRef.envMuls_15__DOT__ar1;
    vlSelfRef.envMuls_15__DOT__io_rsp_valid = vlSelfRef.envMuls_15__DOT__io_cmd_valid_delay_6;
    vlSelfRef.envMuls_15__DOT__io_cmd_valid_delay_5 
        = vlSelfRef.envMuls_15__DOT__io_cmd_valid_delay_4;
    vlSelfRef.envMuls_15__DOT__reN = (0x0000ffffU & vlSelfRef.envMuls_15__DOT___zz_reN);
    vlSelfRef.envMuls_15__DOT__imN = (0x0000ffffU & vlSelfRef.envMuls_15__DOT___zz_imN);
    vlSelfRef.envMuls_15__DOT___zz_db3 = __VdfgRegularize_h6e95ff9d_0_383;
    vlSelfRef.envMuls_15__DOT___zz_sb3 = __VdfgRegularize_h6e95ff9d_0_383;
    vlSelfRef.envMuls_15__DOT___zz_sre5 = (0x00000007ffffffffULL 
                                           & (vlSelfRef.envMuls_15__DOT___zz_sre5_1 
                                              + vlSelfRef.envMuls_15__DOT___zz_sre5_2));
    vlSelfRef.envMuls_15__DOT___zz_sim5 = (0x00000007ffffffffULL 
                                           & (vlSelfRef.envMuls_15__DOT___zz_sim5_1 
                                              + vlSelfRef.envMuls_15__DOT___zz_sim5_2));
    vlSelfRef.envMuls_15__DOT___zz_db3_1 = __VdfgRegularize_h6e95ff9d_0_384;
    vlSelfRef.envMuls_15__DOT___zz_sb3_1 = __VdfgRegularize_h6e95ff9d_0_384;
    vlSelfRef.envMuls_15_io_rsp_valid = vlSelfRef.envMuls_15__DOT__io_rsp_valid;
    vlSelfRef.envMuls_15__DOT__io_rsp_payload_re = vlSelfRef.envMuls_15__DOT__reN;
    vlSelfRef.envMuls_15__DOT__io_rsp_payload_im = vlSelfRef.envMuls_15__DOT__imN;
    vlSelfRef.envMuls_15__DOT__br0 = vlSelfRef.envMuls_15__DOT__io_cmd_payload_b_re;
    vlSelfRef.envMuls_15__DOT__m2 = vlSelfRef.envMuls_15__DOT__mulM;
    vlSelfRef.envMuls_15__DOT__bi0 = vlSelfRef.envMuls_15__DOT__io_cmd_payload_b_im;
    vlSelfRef.envMuls_15__DOT__ai1 = vlSelfRef.envMuls_15__DOT__ai0;
    vlSelfRef.envMuls_15__DOT__ar1 = vlSelfRef.envMuls_15__DOT__ar0;
    vlSelfRef.envMuls_15__DOT__io_cmd_valid_delay_4 
        = vlSelfRef.envMuls_15__DOT__io_cmd_valid_delay_3;
    vlSelfRef.envMuls_15_io_rsp_payload_im = vlSelfRef.envMuls_15__DOT__io_rsp_payload_im;
    vlSelfRef.envMuls_15__DOT__mulM = (0x00000001ffffffffULL 
                                       & VL_MULS_QQQ(33, 
                                                     (0x00000001ffffffffULL 
                                                      & VL_EXTENDS_QI(33,17, vlSelfRef.envMuls_15__DOT__da1)), 
                                                     (0x00000001ffffffffULL 
                                                      & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.envMuls_15__DOT__bi1)))));
    vlSelfRef.envMuls_15__DOT__ai0 = vlSelfRef.envMuls_15__DOT__io_cmd_payload_a_im;
    vlSelfRef.envMuls_15__DOT__ar0 = vlSelfRef.envMuls_15__DOT__io_cmd_payload_a_re;
    vlSelfRef.envMuls_15__DOT__io_cmd_valid_delay_3 
        = vlSelfRef.envMuls_15__DOT__io_cmd_valid_delay_2;
    vlSelfRef.envMuls_15__DOT___zz_da1_1 = ((0x00010000U 
                                             & ((IData)(vlSelfRef.envMuls_15__DOT__ai0) 
                                                << 1U)) 
                                            | (IData)(vlSelfRef.envMuls_15__DOT__ai0));
    vlSelfRef.envMuls_15__DOT___zz_da1 = ((0x00010000U 
                                           & ((IData)(vlSelfRef.envMuls_15__DOT__ar0) 
                                              << 1U)) 
                                          | (IData)(vlSelfRef.envMuls_15__DOT__ar0));
    vlSelfRef.envMuls_15__DOT__io_cmd_valid_delay_2 
        = vlSelfRef.envMuls_15__DOT__io_cmd_valid_delay_1;
    vlSelfRef.envMuls_15__DOT__io_cmd_valid_delay_1 = 1U;
}

void Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__44(Vtop_PulseGenerator* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__44\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_257;
    __VdfgRegularize_h6e95ff9d_0_257 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_258;
    __VdfgRegularize_h6e95ff9d_0_258 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_259;
    __VdfgRegularize_h6e95ff9d_0_259 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_260;
    __VdfgRegularize_h6e95ff9d_0_260 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_261;
    __VdfgRegularize_h6e95ff9d_0_261 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_262;
    __VdfgRegularize_h6e95ff9d_0_262 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_263;
    __VdfgRegularize_h6e95ff9d_0_263 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_264;
    __VdfgRegularize_h6e95ff9d_0_264 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_265;
    __VdfgRegularize_h6e95ff9d_0_265 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_266;
    __VdfgRegularize_h6e95ff9d_0_266 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_267;
    __VdfgRegularize_h6e95ff9d_0_267 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_268;
    __VdfgRegularize_h6e95ff9d_0_268 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_269;
    __VdfgRegularize_h6e95ff9d_0_269 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_270;
    __VdfgRegularize_h6e95ff9d_0_270 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_271;
    __VdfgRegularize_h6e95ff9d_0_271 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_272;
    __VdfgRegularize_h6e95ff9d_0_272 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_273;
    __VdfgRegularize_h6e95ff9d_0_273 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_274;
    __VdfgRegularize_h6e95ff9d_0_274 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_275;
    __VdfgRegularize_h6e95ff9d_0_275 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_276;
    __VdfgRegularize_h6e95ff9d_0_276 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_277;
    __VdfgRegularize_h6e95ff9d_0_277 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_278;
    __VdfgRegularize_h6e95ff9d_0_278 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_279;
    __VdfgRegularize_h6e95ff9d_0_279 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_280;
    __VdfgRegularize_h6e95ff9d_0_280 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_281;
    __VdfgRegularize_h6e95ff9d_0_281 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_282;
    __VdfgRegularize_h6e95ff9d_0_282 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_283;
    __VdfgRegularize_h6e95ff9d_0_283 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_284;
    __VdfgRegularize_h6e95ff9d_0_284 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_285;
    __VdfgRegularize_h6e95ff9d_0_285 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_286;
    __VdfgRegularize_h6e95ff9d_0_286 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_287;
    __VdfgRegularize_h6e95ff9d_0_287 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_288;
    __VdfgRegularize_h6e95ff9d_0_288 = 0;
    // Body
    vlSelfRef.phasorGen__DOT__cordic_6__DOT__imOut 
        = (0x0000ffffU & vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_imOut);
    vlSelfRef.phasorGen__DOT__cordic_6__DOT__reOut 
        = (0x0000ffffU & vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_reOut);
    if (vlSelfRef.phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_16) {
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_17 
            = (0x03ffffffU & ((IData)(0x00000080U) 
                              + vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_17_1));
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_17 
            = (0x03ffffffU & ((IData)(0x00000080U) 
                              + vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_17_1));
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_17 
            = (0x00ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_16 
                              - (IData)(0x00000029U)));
    } else {
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_17 
            = (0x03ffffffU & ((IData)(0x00000080U) 
                              + vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_17_3));
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_17 
            = (0x03ffffffU & ((IData)(0x00000080U) 
                              + vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_17_3));
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_17 
            = (0x00ffffffU & ((IData)(0x00000029U) 
                              + vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_16));
    }
    vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_0 = 0U;
    if (vlSelfRef.phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_15) {
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_16 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_16_2;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_16 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_16_1;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_16 
            = (0x00ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_15 
                              - (IData)(0x00000051U)));
    } else {
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_16 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_16_4;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_16 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_16_3;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_16 
            = (0x00ffffffU & ((IData)(0x00000051U) 
                              + vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_15));
    }
    if (vlSelfRef.phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_14) {
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_15 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_15_2;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_15 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_15_1;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_15 
            = (0x00ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_14 
                              - (IData)(0x000000a3U)));
    } else {
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_15 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_15_4;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_15 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_15_3;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_15 
            = (0x00ffffffU & ((IData)(0x000000a3U) 
                              + vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_14));
    }
    if (vlSelfRef.phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_13) {
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_14 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_14_1;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_14 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_14_2;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_14 
            = (0x00ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_13 
                              - (IData)(0x00000146U)));
    } else {
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_14 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_14_3;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_14 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_14_4;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_14 
            = (0x00ffffffU & ((IData)(0x00000146U) 
                              + vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_13));
    }
    if (vlSelfRef.phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_12) {
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_13 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_13_1;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_13 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_13_2;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_13 
            = (0x00ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_12 
                              - (IData)(0x0000028cU)));
    } else {
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_13 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_13_3;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_13 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_13_4;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_13 
            = (0x00ffffffU & ((IData)(0x0000028cU) 
                              + vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_12));
    }
    if (vlSelfRef.phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_11) {
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_12 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_12_1;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_12 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_12_2;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_12 
            = (0x00ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_11 
                              - (IData)(0x00000518U)));
    } else {
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_12 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_12_3;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_12 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_12_4;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_12 
            = (0x00ffffffU & ((IData)(0x00000518U) 
                              + vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_11));
    }
    if (vlSelfRef.phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_10) {
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_11 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_11_1;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_11 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_11_2;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_11 
            = (0x00ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_10 
                              - (IData)(0x00000a30U)));
    } else {
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_11 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_11_3;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_11 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_11_4;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_11 
            = (0x00ffffffU & ((IData)(0x00000a30U) 
                              + vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_10));
    }
    if (vlSelfRef.phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_9) {
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_10 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_10_1;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_10 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_10_2;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_10 
            = (0x00ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_9 
                              - (IData)(0x0000145fU)));
    } else {
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_10 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_10_3;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_10 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_10_4;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_10 
            = (0x00ffffffU & ((IData)(0x0000145fU) 
                              + vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_9));
    }
    if (vlSelfRef.phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_8) {
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_9 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_9_1;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_9 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_9_2;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_9 
            = (0x00ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_8 
                              - (IData)(0x000028beU)));
    } else {
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_9 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_9_3;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_9 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_9_4;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_9 
            = (0x00ffffffU & ((IData)(0x000028beU) 
                              + vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_8));
    }
    if (vlSelfRef.phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_7) {
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_8 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_8_1;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_8 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_8_2;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_8 
            = (0x00ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_7 
                              - (IData)(0x0000517cU)));
    } else {
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_8 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_8_3;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_8 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_8_4;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_8 
            = (0x00ffffffU & ((IData)(0x0000517cU) 
                              + vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_7));
    }
    if (vlSelfRef.phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_6) {
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_7 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_7_1;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_7 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_7_2;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_7 
            = (0x00ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_6 
                              - (IData)(0x0000a2f6U)));
    } else {
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_7 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_7_3;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_7 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_7_4;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_7 
            = (0x00ffffffU & ((IData)(0x0000a2f6U) 
                              + vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_6));
    }
    if (vlSelfRef.phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_5) {
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_6 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_6_1;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_6 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_6_2;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_6 
            = (0x00ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_5 
                              - (IData)(0x000145d8U)));
    } else {
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_6 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_6_3;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_6 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_6_4;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_6 
            = (0x00ffffffU & ((IData)(0x000145d8U) 
                              + vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_5));
    }
    if (vlSelfRef.phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_4) {
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_5 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_5_1;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_5 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_5_2;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_5 
            = (0x00ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_4 
                              - (IData)(0x00028b0dU)));
    } else {
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_5 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_5_3;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_5 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_5_4;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_5 
            = (0x00ffffffU & ((IData)(0x00028b0dU) 
                              + vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_4));
    }
    if (vlSelfRef.phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_3) {
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_4 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_4_2;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_4 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_4_1;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_4 
            = (0x00ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_3 
                              - (IData)(0x00051112U)));
    } else {
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_4 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_4_4;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_4 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_4_3;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_4 
            = (0x00ffffffU & ((IData)(0x00051112U) 
                              + vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_3));
    }
    if (vlSelfRef.phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_2) {
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_3 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_3_2;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_3 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_3_1;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_3 
            = (0x00ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_2 
                              - (IData)(0x0009fb38U)));
    } else {
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_3 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_3_4;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_3 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_3_3;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_3 
            = (0x00ffffffU & ((IData)(0x0009fb38U) 
                              + vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_2));
    }
    if (vlSelfRef.phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_1) {
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_2 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_2_2;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_2 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_2_1;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_2 
            = (0x00ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_1 
                              - (IData)(0x0012e405U)));
    } else {
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_2 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_2_4;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_2 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_2_3;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_2 
            = (0x00ffffffU & ((IData)(0x0012e405U) 
                              + vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_1));
    }
    if (vlSelfRef.phasorGen__DOT__cordic_6__DOT__when_Cordic_l128) {
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_1 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_1_1;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_1 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_1_2;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_1 
            = (0x00ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_0 
                              - (IData)(0x00200000U)));
    } else {
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_1 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_1_2;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_1 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_1_3;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_1 
            = (0x00ffffffU & ((IData)(0x00200000U) 
                              + vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_0));
    }
    if (vlSelfRef.phasorGen__DOT__cordic_6__DOT__pre) {
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_0 = 0x03b24800U;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_0 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT__zFlip;
    } else {
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_0 = 0x004db800U;
        vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_0 
            = vlSelfRef.phasorGen__DOT__cordic_6__DOT__zLoad;
    }
    vlSelfRef.phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_19 
        = vlSelfRef.phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_18;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT__io_rsp_payload_im 
        = vlSelfRef.phasorGen__DOT__cordic_6__DOT__imOut;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT__io_rsp_payload_re 
        = vlSelfRef.phasorGen__DOT__cordic_6__DOT__reOut;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_reOut 
        = (0x0003ffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_17 
                          >> 8U));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_imOut 
        = (0x0003ffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_17 
                          >> 8U));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_1 
        = vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_0;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_1 
        = vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_0;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_15 
        = (0x00000fffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_14 
                          >> 0x0eU));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_14 
        = (0x00001fffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_13 
                          >> 0x0dU));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_14 
        = (0x00001fffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_13 
                          >> 0x0dU));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_13 
        = (0x00003fffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_12 
                          >> 0x0cU));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_13 
        = (0x00003fffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_12 
                          >> 0x0cU));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_12 
        = (0x00007fffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_11 
                          >> 0x0bU));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_12 
        = (0x00007fffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_11 
                          >> 0x0bU));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_11 
        = (0x0000ffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_10 
                          >> 0x0aU));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_11 
        = (0x0000ffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_10 
                          >> 0x0aU));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_10 
        = (0x0001ffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_9 
                          >> 9U));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_10 
        = (0x0001ffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_9 
                          >> 9U));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_9 
        = (0x0003ffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_8 
                          >> 8U));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_9 
        = (0x0003ffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_8 
                          >> 8U));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_8 
        = (0x0007ffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_7 
                          >> 7U));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_4 
        = (0x007fffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_3 
                          >> 3U));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_7 
        = (0x000fffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_6 
                          >> 6U));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_3 
        = (0x00ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_2 
                          >> 2U));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_6 
        = (0x001fffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_5 
                          >> 5U));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_5 
        = (0x003fffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_4 
                          >> 4U));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_2 
        = (0x01ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_1 
                          >> 1U));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_2 
        = (0x01ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_1 
                          >> 1U));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_5 
        = (0x003fffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_4 
                          >> 4U));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_15 
        = (0x00000fffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_14 
                          >> 0x0eU));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_16 
        = (0x000007ffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_15 
                          >> 0x0fU));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_17 
        = (0x000003ffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_16 
                          >> 0x10U));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_4 
        = (0x007fffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_3 
                          >> 3U));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_3 
        = (0x00ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_2 
                          >> 2U));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_6 
        = (0x001fffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_5 
                          >> 5U));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_7 
        = (0x000fffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_6 
                          >> 6U));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_8 
        = (0x0007ffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_7 
                          >> 7U));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_16 
        = (0x000007ffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_15 
                          >> 0x0fU));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_17 
        = (0x000003ffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_16 
                          >> 0x10U));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT__io_rsp_valid 
        = vlSelfRef.phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_19;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_18 
        = vlSelfRef.phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_17;
    vlSelfRef.phasorGen__DOT__cordic_6_io_rsp_payload_im 
        = vlSelfRef.phasorGen__DOT__cordic_6__DOT__io_rsp_payload_im;
    vlSelfRef.phasorGen__DOT__cordic_6_io_rsp_payload_re 
        = vlSelfRef.phasorGen__DOT__cordic_6__DOT__io_rsp_payload_re;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_1_2 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_0 
                          - vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_1));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_1_3 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_0 
                          + vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_1));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_1_1 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_0 
                          + vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_1));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_1_2 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_0 
                          - vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_1));
    __VdfgRegularize_h6e95ff9d_0_283 = ((0x03fff000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_15) 
                                                           >> 0x0000000bU)))) 
                                            << 0x0000000cU)) 
                                        | (IData)(vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_15));
    __VdfgRegularize_h6e95ff9d_0_281 = ((0x03ffe000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_14) 
                                                           >> 0x0000000cU)))) 
                                            << 0x0000000dU)) 
                                        | (IData)(vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_14));
    __VdfgRegularize_h6e95ff9d_0_282 = ((0x03ffe000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_14) 
                                                           >> 0x0000000cU)))) 
                                            << 0x0000000dU)) 
                                        | (IData)(vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_14));
    __VdfgRegularize_h6e95ff9d_0_279 = ((0x03ffc000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_13) 
                                                           >> 0x0000000dU)))) 
                                            << 0x0000000eU)) 
                                        | (IData)(vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_13));
    __VdfgRegularize_h6e95ff9d_0_280 = ((0x03ffc000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_13) 
                                                           >> 0x0000000dU)))) 
                                            << 0x0000000eU)) 
                                        | (IData)(vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_13));
    __VdfgRegularize_h6e95ff9d_0_277 = ((0x03ff8000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_12) 
                                                           >> 0x0000000eU)))) 
                                            << 0x0000000fU)) 
                                        | (IData)(vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_12));
    __VdfgRegularize_h6e95ff9d_0_278 = ((0x03ff8000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_12) 
                                                           >> 0x0000000eU)))) 
                                            << 0x0000000fU)) 
                                        | (IData)(vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_12));
    __VdfgRegularize_h6e95ff9d_0_275 = ((0x03ff0000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_11) 
                                                           >> 0x0000000fU)))) 
                                            << 0x00000010U)) 
                                        | (IData)(vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_11));
    __VdfgRegularize_h6e95ff9d_0_276 = ((0x03ff0000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_11) 
                                                           >> 0x0000000fU)))) 
                                            << 0x00000010U)) 
                                        | (IData)(vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_11));
    __VdfgRegularize_h6e95ff9d_0_273 = ((0x03fe0000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_10 
                                                           >> 0x00000010U)))) 
                                            << 0x00000011U)) 
                                        | vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_10);
    __VdfgRegularize_h6e95ff9d_0_274 = ((0x03fe0000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_10 
                                                           >> 0x00000010U)))) 
                                            << 0x00000011U)) 
                                        | vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_10);
    __VdfgRegularize_h6e95ff9d_0_271 = ((0x03fc0000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_9 
                                                           >> 0x00000011U)))) 
                                            << 0x00000012U)) 
                                        | vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_9);
    __VdfgRegularize_h6e95ff9d_0_272 = ((0x03fc0000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_9 
                                                           >> 0x00000011U)))) 
                                            << 0x00000012U)) 
                                        | vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_9);
    __VdfgRegularize_h6e95ff9d_0_269 = ((0x03f80000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_8 
                                                           >> 0x00000012U)))) 
                                            << 0x00000013U)) 
                                        | vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_8);
    __VdfgRegularize_h6e95ff9d_0_262 = ((0x03800000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_4 
                                                           >> 0x00000016U)))) 
                                            << 0x00000017U)) 
                                        | vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_4);
    __VdfgRegularize_h6e95ff9d_0_267 = ((0x03f00000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_7 
                                                           >> 0x00000013U)))) 
                                            << 0x00000014U)) 
                                        | vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_7);
    __VdfgRegularize_h6e95ff9d_0_260 = ((0x03000000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_3 
                                                           >> 0x00000017U)))) 
                                            << 0x00000018U)) 
                                        | vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_3);
    __VdfgRegularize_h6e95ff9d_0_265 = ((0x03e00000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_6 
                                                           >> 0x00000014U)))) 
                                            << 0x00000015U)) 
                                        | vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_6);
    __VdfgRegularize_h6e95ff9d_0_264 = ((0x03c00000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_5 
                                                           >> 0x00000015U)))) 
                                            << 0x00000016U)) 
                                        | vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_5);
    __VdfgRegularize_h6e95ff9d_0_257 = ((0x02000000U 
                                         & (vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_2 
                                            << 1U)) 
                                        | vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_2);
    __VdfgRegularize_h6e95ff9d_0_258 = ((0x02000000U 
                                         & (vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_2 
                                            << 1U)) 
                                        | vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_2);
    __VdfgRegularize_h6e95ff9d_0_263 = ((0x03c00000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_5 
                                                           >> 0x00000015U)))) 
                                            << 0x00000016U)) 
                                        | vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_5);
    __VdfgRegularize_h6e95ff9d_0_284 = ((0x03fff000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_15) 
                                                           >> 0x0000000bU)))) 
                                            << 0x0000000cU)) 
                                        | (IData)(vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_15));
    __VdfgRegularize_h6e95ff9d_0_286 = ((0x03fff800U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_16) 
                                                           >> 0x0000000aU)))) 
                                            << 0x0000000bU)) 
                                        | (IData)(vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_16));
    __VdfgRegularize_h6e95ff9d_0_288 = ((0x03fffc00U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_17) 
                                                           >> 9U)))) 
                                            << 0x0000000aU)) 
                                        | (IData)(vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_17));
    __VdfgRegularize_h6e95ff9d_0_261 = ((0x03800000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_4 
                                                           >> 0x00000016U)))) 
                                            << 0x00000017U)) 
                                        | vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_4);
    __VdfgRegularize_h6e95ff9d_0_259 = ((0x03000000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_3 
                                                           >> 0x00000017U)))) 
                                            << 0x00000018U)) 
                                        | vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_3);
    __VdfgRegularize_h6e95ff9d_0_266 = ((0x03e00000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_6 
                                                           >> 0x00000014U)))) 
                                            << 0x00000015U)) 
                                        | vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_6);
    __VdfgRegularize_h6e95ff9d_0_268 = ((0x03f00000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_7 
                                                           >> 0x00000013U)))) 
                                            << 0x00000014U)) 
                                        | vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_7);
    __VdfgRegularize_h6e95ff9d_0_270 = ((0x03f80000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_8 
                                                           >> 0x00000012U)))) 
                                            << 0x00000013U)) 
                                        | vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_8);
    __VdfgRegularize_h6e95ff9d_0_285 = ((0x03fff800U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_16) 
                                                           >> 0x0000000aU)))) 
                                            << 0x0000000bU)) 
                                        | (IData)(vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_16));
    __VdfgRegularize_h6e95ff9d_0_287 = ((0x03fffc00U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_17) 
                                                           >> 9U)))) 
                                            << 0x0000000aU)) 
                                        | (IData)(vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_17));
    vlSelfRef.phasorGen__DOT__cordic_6_io_rsp_valid 
        = vlSelfRef.phasorGen__DOT__cordic_6__DOT__io_rsp_valid;
    vlSelfRef.phasorGen__DOT__rspIm = vlSelfRef.phasorGen__DOT__cordic_6_io_rsp_payload_im;
    vlSelfRef.phasorGen__DOT__rspRe = vlSelfRef.phasorGen__DOT__cordic_6_io_rsp_payload_re;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_15_3 
        = __VdfgRegularize_h6e95ff9d_0_283;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_15_5 
        = __VdfgRegularize_h6e95ff9d_0_283;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_14_3 
        = __VdfgRegularize_h6e95ff9d_0_281;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_14_5 
        = __VdfgRegularize_h6e95ff9d_0_281;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_14_2 
        = __VdfgRegularize_h6e95ff9d_0_282;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_14_4 
        = __VdfgRegularize_h6e95ff9d_0_282;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_13_3 
        = __VdfgRegularize_h6e95ff9d_0_279;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_13_5 
        = __VdfgRegularize_h6e95ff9d_0_279;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_13_2 
        = __VdfgRegularize_h6e95ff9d_0_280;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_13_4 
        = __VdfgRegularize_h6e95ff9d_0_280;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_12_3 
        = __VdfgRegularize_h6e95ff9d_0_277;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_12_5 
        = __VdfgRegularize_h6e95ff9d_0_277;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_12_2 
        = __VdfgRegularize_h6e95ff9d_0_278;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_12_4 
        = __VdfgRegularize_h6e95ff9d_0_278;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_11_3 
        = __VdfgRegularize_h6e95ff9d_0_275;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_11_5 
        = __VdfgRegularize_h6e95ff9d_0_275;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_11_2 
        = __VdfgRegularize_h6e95ff9d_0_276;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_11_4 
        = __VdfgRegularize_h6e95ff9d_0_276;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_10_3 
        = __VdfgRegularize_h6e95ff9d_0_273;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_10_5 
        = __VdfgRegularize_h6e95ff9d_0_273;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_10_2 
        = __VdfgRegularize_h6e95ff9d_0_274;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_10_4 
        = __VdfgRegularize_h6e95ff9d_0_274;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_9_3 
        = __VdfgRegularize_h6e95ff9d_0_271;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_9_5 
        = __VdfgRegularize_h6e95ff9d_0_271;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_9_2 
        = __VdfgRegularize_h6e95ff9d_0_272;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_9_4 
        = __VdfgRegularize_h6e95ff9d_0_272;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_8_3 
        = __VdfgRegularize_h6e95ff9d_0_269;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_8_5 
        = __VdfgRegularize_h6e95ff9d_0_269;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_4_2 
        = __VdfgRegularize_h6e95ff9d_0_262;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_4_4 
        = __VdfgRegularize_h6e95ff9d_0_262;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_7_3 
        = __VdfgRegularize_h6e95ff9d_0_267;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_7_5 
        = __VdfgRegularize_h6e95ff9d_0_267;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_3_2 
        = __VdfgRegularize_h6e95ff9d_0_260;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_3_4 
        = __VdfgRegularize_h6e95ff9d_0_260;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_6_3 
        = __VdfgRegularize_h6e95ff9d_0_265;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_6_5 
        = __VdfgRegularize_h6e95ff9d_0_265;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_5_2 
        = __VdfgRegularize_h6e95ff9d_0_264;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_5_4 
        = __VdfgRegularize_h6e95ff9d_0_264;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_2_3 
        = __VdfgRegularize_h6e95ff9d_0_257;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_2_5 
        = __VdfgRegularize_h6e95ff9d_0_257;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_2_2 
        = __VdfgRegularize_h6e95ff9d_0_258;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_2_4 
        = __VdfgRegularize_h6e95ff9d_0_258;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_5_3 
        = __VdfgRegularize_h6e95ff9d_0_263;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_5_5 
        = __VdfgRegularize_h6e95ff9d_0_263;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_15_2 
        = __VdfgRegularize_h6e95ff9d_0_284;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_15_4 
        = __VdfgRegularize_h6e95ff9d_0_284;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_16_2 
        = __VdfgRegularize_h6e95ff9d_0_286;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_16_4 
        = __VdfgRegularize_h6e95ff9d_0_286;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_17_2 
        = __VdfgRegularize_h6e95ff9d_0_288;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_17_4 
        = __VdfgRegularize_h6e95ff9d_0_288;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_4_3 
        = __VdfgRegularize_h6e95ff9d_0_261;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_4_5 
        = __VdfgRegularize_h6e95ff9d_0_261;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_3_3 
        = __VdfgRegularize_h6e95ff9d_0_259;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_3_5 
        = __VdfgRegularize_h6e95ff9d_0_259;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_6_2 
        = __VdfgRegularize_h6e95ff9d_0_266;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_6_4 
        = __VdfgRegularize_h6e95ff9d_0_266;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_7_2 
        = __VdfgRegularize_h6e95ff9d_0_268;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_7_4 
        = __VdfgRegularize_h6e95ff9d_0_268;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_8_2 
        = __VdfgRegularize_h6e95ff9d_0_270;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_8_4 
        = __VdfgRegularize_h6e95ff9d_0_270;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_16_3 
        = __VdfgRegularize_h6e95ff9d_0_285;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_16_5 
        = __VdfgRegularize_h6e95ff9d_0_285;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_17_2 
        = __VdfgRegularize_h6e95ff9d_0_287;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_17_4 
        = __VdfgRegularize_h6e95ff9d_0_287;
    vlSelfRef.phasorGen__DOT__rspValid = vlSelfRef.phasorGen__DOT__cordic_6_io_rsp_valid;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_17 
        = vlSelfRef.phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_16;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_16 
        = (1U & (~ (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_16 
                    >> 0x00000017U)));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_15_2 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_14 
                          - vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_15_3));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_15_4 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_14 
                          + vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_15_5));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_14_2 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_13 
                          - vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_14_3));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_14_4 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_13 
                          + vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_14_5));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_14_1 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_13 
                          + vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_14_2));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_14_3 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_13 
                          - vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_14_4));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_13_2 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_12 
                          - vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_13_3));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_13_4 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_12 
                          + vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_13_5));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_13_1 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_12 
                          + vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_13_2));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_13_3 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_12 
                          - vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_13_4));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_12_2 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_11 
                          - vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_12_3));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_12_4 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_11 
                          + vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_12_5));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_12_1 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_11 
                          + vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_12_2));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_12_3 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_11 
                          - vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_12_4));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_11_2 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_10 
                          - vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_11_3));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_11_4 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_10 
                          + vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_11_5));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_11_1 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_10 
                          + vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_11_2));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_11_3 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_10 
                          - vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_11_4));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_10_2 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_9 
                          - vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_10_3));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_10_4 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_9 
                          + vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_10_5));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_10_1 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_9 
                          + vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_10_2));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_10_3 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_9 
                          - vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_10_4));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_9_2 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_8 
                          - vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_9_3));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_9_4 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_8 
                          + vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_9_5));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_9_1 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_8 
                          + vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_9_2));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_9_3 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_8 
                          - vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_9_4));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_8_2 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_7 
                          - vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_8_3));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_8_4 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_7 
                          + vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_8_5));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_4_1 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_3 
                          + vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_4_2));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_4_3 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_3 
                          - vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_4_4));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_7_2 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_6 
                          - vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_7_3));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_7_4 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_6 
                          + vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_7_5));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_3_1 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_2 
                          + vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_3_2));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_3_3 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_2 
                          - vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_3_4));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_6_2 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_5 
                          - vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_6_3));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_6_4 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_5 
                          + vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_6_5));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_5_1 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_4 
                          + vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_5_2));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_5_3 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_4 
                          - vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_5_4));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_2_2 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_1 
                          - vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_2_3));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_2_4 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_1 
                          + vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_2_5));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_2_1 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_1 
                          + vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_2_2));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_2_3 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_1 
                          - vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_2_4));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_5_2 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_4 
                          - vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_5_3));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_5_4 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_4 
                          + vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_5_5));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_15_1 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_14 
                          + vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_15_2));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_15_3 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_14 
                          - vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_15_4));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_16_1 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_15 
                          + vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_16_2));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_16_3 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_15 
                          - vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_16_4));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_17_1 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_16 
                          + vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_17_2));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_17_3 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_16 
                          - vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_17_4));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_4_2 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_3 
                          - vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_4_3));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_4_4 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_3 
                          + vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_4_5));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_3_2 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_2 
                          - vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_3_3));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_3_4 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_2 
                          + vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_3_5));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_6_1 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_5 
                          + vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_6_2));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_6_3 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_5 
                          - vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_6_4));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_7_1 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_6 
                          + vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_7_2));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_7_3 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_6 
                          - vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_7_4));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_8_1 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_7 
                          + vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_8_2));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_8_3 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Y_7 
                          - vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_Y_8_4));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_16_2 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_15 
                          - vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_16_3));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_16_4 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_15 
                          + vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_16_5));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_17_1 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_16 
                          - vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_17_2));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_17_3 
        = (0x03ffffffU & (vlSelfRef.phasorGen__DOT__cordic_6__DOT__X_16 
                          + vlSelfRef.phasorGen__DOT__cordic_6__DOT___zz_X_17_4));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_16 
        = vlSelfRef.phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_15;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_15 
        = (1U & (~ (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_15 
                    >> 0x00000017U)));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_15 
        = vlSelfRef.phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_14;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_14 
        = (1U & (~ (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_14 
                    >> 0x00000017U)));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_14 
        = vlSelfRef.phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_13;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_13 
        = (1U & (~ (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_13 
                    >> 0x00000017U)));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_13 
        = vlSelfRef.phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_12;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_12 
        = (1U & (~ (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_12 
                    >> 0x00000017U)));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_12 
        = vlSelfRef.phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_11;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_11 
        = (1U & (~ (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_11 
                    >> 0x00000017U)));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_11 
        = vlSelfRef.phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_10;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_10 
        = (1U & (~ (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_10 
                    >> 0x00000017U)));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_10 
        = vlSelfRef.phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_9;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_9 
        = (1U & (~ (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_9 
                    >> 0x00000017U)));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_9 
        = vlSelfRef.phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_8;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_8 
        = (1U & (~ (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_8 
                    >> 0x00000017U)));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_8 
        = vlSelfRef.phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_7;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_7 
        = (1U & (~ (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_7 
                    >> 0x00000017U)));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_7 
        = vlSelfRef.phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_6;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_6 
        = (1U & (~ (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_6 
                    >> 0x00000017U)));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_6 
        = vlSelfRef.phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_5;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_5 
        = (1U & (~ (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_5 
                    >> 0x00000017U)));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_5 
        = vlSelfRef.phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_4;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_4 
        = (1U & (~ (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_4 
                    >> 0x00000017U)));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_4 
        = vlSelfRef.phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_3;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_3 
        = (1U & (~ (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_3 
                    >> 0x00000017U)));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_3 
        = vlSelfRef.phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_2;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_2 
        = (1U & (~ (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_2 
                    >> 0x00000017U)));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_2 
        = vlSelfRef.phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_1;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_1 
        = (1U & (~ (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_1 
                    >> 0x00000017U)));
    vlSelfRef.phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_1 
        = vlSelfRef.phasorGen__DOT__cordic_6__DOT__io_cmd_valid;
    vlSelfRef.phasorGen__DOT__cordic_6__DOT__when_Cordic_l128 
        = (1U & (~ (vlSelfRef.phasorGen__DOT__cordic_6__DOT__Z_0 
                    >> 0x00000017U)));
}

void Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__48(Vtop_PulseGenerator* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__48\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.io_amp_payload = vlSymsp->TOP.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1_io_amp_payload;
    vlSelfRef.io_addr_payload = vlSymsp->TOP.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1_io_addr_payload;
    vlSelfRef.io_dur_payload = vlSymsp->TOP.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1_io_dur_payload;
    vlSelfRef.io_freq_payload = vlSymsp->TOP.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1_io_freq_payload;
    vlSelfRef.io_time = vlSymsp->TOP.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1_io_time;
    vlSelfRef.io_startTime = vlSymsp->TOP.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1_io_startTime;
    vlSelfRef.ampQ__DOT__io_push_payload_data = vlSelfRef.io_amp_payload;
    vlSelfRef.addrQ__DOT__io_push_payload_data = vlSelfRef.io_addr_payload;
    vlSelfRef.durQ__DOT__io_push_payload_data = vlSelfRef.io_dur_payload;
    vlSelfRef.freqCQ__DOT__io_push_payload_data = vlSelfRef.io_freq_payload;
    vlSelfRef.freqPQ__DOT__io_push_payload_data = vlSelfRef.io_freq_payload;
    vlSelfRef.ampQ__DOT__io_time = vlSelfRef.io_time;
    vlSelfRef.phaseQ__DOT__io_time = vlSelfRef.io_time;
    vlSelfRef.freqCQ__DOT__io_time = vlSelfRef.io_time;
    vlSelfRef.freqPQ__DOT__io_time = vlSelfRef.io_time;
    vlSelfRef.addrQ__DOT__io_time = vlSelfRef.io_time;
    vlSelfRef.durQ__DOT__io_time = vlSelfRef.io_time;
    vlSelfRef.carrierGen__DOT__io_time = vlSelfRef.io_time;
    vlSelfRef.ampQ__DOT__io_push_payload_startTime 
        = vlSelfRef.io_startTime;
    vlSelfRef.phaseQ__DOT__io_push_payload_startTime 
        = vlSelfRef.io_startTime;
    vlSelfRef.freqCQ__DOT__io_push_payload_startTime 
        = vlSelfRef.io_startTime;
    vlSelfRef.freqPQ__DOT__io_push_payload_startTime 
        = vlSelfRef.io_startTime;
    vlSelfRef.addrQ__DOT__io_push_payload_startTime 
        = vlSelfRef.io_startTime;
    vlSelfRef.durQ__DOT__io_push_payload_startTime 
        = vlSelfRef.io_startTime;
    vlSelfRef.carrierGen__DOT___zz_batchTime_1 = ((QData)((IData)(vlSelfRef.carrierGen__DOT__io_time)) 
                                                  << 4U);
    vlSelfRef.ampQ__DOT__logic_fifo_io_push_payload_deadline 
        = (vlSelfRef.ampQ__DOT__io_push_payload_startTime 
           - (IData)(0x00000023U));
    vlSelfRef.phaseQ__DOT__logic_fifo_io_push_payload_deadline 
        = (vlSelfRef.phaseQ__DOT__io_push_payload_startTime 
           - (IData)(0x00000024U));
    vlSelfRef.freqCQ__DOT__logic_fifo_io_push_payload_deadline 
        = (vlSelfRef.freqCQ__DOT__io_push_payload_startTime 
           - (IData)(0x00000025U));
    vlSelfRef.freqPQ__DOT__logic_fifo_io_push_payload_deadline 
        = (vlSelfRef.freqPQ__DOT__io_push_payload_startTime 
           - (IData)(0x00000035U));
    vlSelfRef.addrQ__DOT__logic_fifo_io_push_payload_deadline 
        = (vlSelfRef.addrQ__DOT__io_push_payload_startTime 
           - (IData)(0x0000000cU));
    vlSelfRef.durQ__DOT__logic_fifo_io_push_payload_deadline 
        = (vlSelfRef.durQ__DOT__io_push_payload_startTime 
           - (IData)(3U));
    vlSelfRef.carrierGen__DOT___zz_batchTime = (0x0000ffffU 
                                                & (IData)(vlSelfRef.carrierGen__DOT___zz_batchTime_1));
}

void Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__67(Vtop_PulseGenerator* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__67\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.io_memPort_rsp[0U] = vlSymsp->TOP.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_memPort_rsp[0U];
    vlSelfRef.io_memPort_rsp[1U] = vlSymsp->TOP.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_memPort_rsp[1U];
    vlSelfRef.io_memPort_rsp[2U] = vlSymsp->TOP.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_memPort_rsp[2U];
    vlSelfRef.io_memPort_rsp[3U] = vlSymsp->TOP.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_memPort_rsp[3U];
    vlSelfRef.io_memPort_rsp[4U] = vlSymsp->TOP.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_memPort_rsp[4U];
    vlSelfRef.io_memPort_rsp[5U] = vlSymsp->TOP.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_memPort_rsp[5U];
    vlSelfRef.io_memPort_rsp[6U] = vlSymsp->TOP.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_memPort_rsp[6U];
    vlSelfRef.io_memPort_rsp[7U] = vlSymsp->TOP.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_memPort_rsp[7U];
    vlSelfRef.io_memPort_rsp[8U] = vlSymsp->TOP.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_memPort_rsp[8U];
    vlSelfRef.io_memPort_rsp[9U] = vlSymsp->TOP.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_memPort_rsp[9U];
    vlSelfRef.io_memPort_rsp[10U] = vlSymsp->TOP.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_memPort_rsp[10U];
    vlSelfRef.io_memPort_rsp[11U] = vlSymsp->TOP.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_memPort_rsp[11U];
    vlSelfRef.io_memPort_rsp[12U] = vlSymsp->TOP.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_memPort_rsp[12U];
    vlSelfRef.io_memPort_rsp[13U] = vlSymsp->TOP.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_memPort_rsp[13U];
    vlSelfRef.io_memPort_rsp[14U] = vlSymsp->TOP.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_memPort_rsp[14U];
    vlSelfRef.io_memPort_rsp[15U] = vlSymsp->TOP.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_memPort_rsp[15U];
    vlSelfRef.envReader__DOT__io_memPort_rsp[0U] = vlSelfRef.io_memPort_rsp[0U];
    vlSelfRef.envReader__DOT__io_memPort_rsp[1U] = vlSelfRef.io_memPort_rsp[1U];
    vlSelfRef.envReader__DOT__io_memPort_rsp[2U] = vlSelfRef.io_memPort_rsp[2U];
    vlSelfRef.envReader__DOT__io_memPort_rsp[3U] = vlSelfRef.io_memPort_rsp[3U];
    vlSelfRef.envReader__DOT__io_memPort_rsp[4U] = vlSelfRef.io_memPort_rsp[4U];
    vlSelfRef.envReader__DOT__io_memPort_rsp[5U] = vlSelfRef.io_memPort_rsp[5U];
    vlSelfRef.envReader__DOT__io_memPort_rsp[6U] = vlSelfRef.io_memPort_rsp[6U];
    vlSelfRef.envReader__DOT__io_memPort_rsp[7U] = vlSelfRef.io_memPort_rsp[7U];
    vlSelfRef.envReader__DOT__io_memPort_rsp[8U] = vlSelfRef.io_memPort_rsp[8U];
    vlSelfRef.envReader__DOT__io_memPort_rsp[9U] = vlSelfRef.io_memPort_rsp[9U];
    vlSelfRef.envReader__DOT__io_memPort_rsp[10U] = vlSelfRef.io_memPort_rsp[10U];
    vlSelfRef.envReader__DOT__io_memPort_rsp[11U] = vlSelfRef.io_memPort_rsp[11U];
    vlSelfRef.envReader__DOT__io_memPort_rsp[12U] = vlSelfRef.io_memPort_rsp[12U];
    vlSelfRef.envReader__DOT__io_memPort_rsp[13U] = vlSelfRef.io_memPort_rsp[13U];
    vlSelfRef.envReader__DOT__io_memPort_rsp[14U] = vlSelfRef.io_memPort_rsp[14U];
    vlSelfRef.envReader__DOT__io_memPort_rsp[15U] = vlSelfRef.io_memPort_rsp[15U];
    vlSelfRef.envReader__DOT__lanes_0 = (0x0000ffffU 
                                         & vlSelfRef.envReader__DOT__io_memPort_rsp[0U]);
    vlSelfRef.envReader__DOT__lanes_1 = (vlSelfRef.envReader__DOT__io_memPort_rsp[0U] 
                                         >> 0x00000010U);
    vlSelfRef.envReader__DOT__lanes_2 = (0x0000ffffU 
                                         & vlSelfRef.envReader__DOT__io_memPort_rsp[1U]);
    vlSelfRef.envReader__DOT__lanes_3 = (vlSelfRef.envReader__DOT__io_memPort_rsp[1U] 
                                         >> 0x00000010U);
    vlSelfRef.envReader__DOT__lanes_4 = (0x0000ffffU 
                                         & vlSelfRef.envReader__DOT__io_memPort_rsp[2U]);
    vlSelfRef.envReader__DOT__lanes_5 = (vlSelfRef.envReader__DOT__io_memPort_rsp[2U] 
                                         >> 0x00000010U);
    vlSelfRef.envReader__DOT__lanes_6 = (0x0000ffffU 
                                         & vlSelfRef.envReader__DOT__io_memPort_rsp[3U]);
    vlSelfRef.envReader__DOT__lanes_7 = (vlSelfRef.envReader__DOT__io_memPort_rsp[3U] 
                                         >> 0x00000010U);
    vlSelfRef.envReader__DOT__lanes_8 = (0x0000ffffU 
                                         & vlSelfRef.envReader__DOT__io_memPort_rsp[4U]);
    vlSelfRef.envReader__DOT__lanes_9 = (vlSelfRef.envReader__DOT__io_memPort_rsp[4U] 
                                         >> 0x00000010U);
    vlSelfRef.envReader__DOT__lanes_10 = (0x0000ffffU 
                                          & vlSelfRef.envReader__DOT__io_memPort_rsp[5U]);
    vlSelfRef.envReader__DOT__lanes_11 = (vlSelfRef.envReader__DOT__io_memPort_rsp[5U] 
                                          >> 0x00000010U);
    vlSelfRef.envReader__DOT__lanes_12 = (0x0000ffffU 
                                          & vlSelfRef.envReader__DOT__io_memPort_rsp[6U]);
    vlSelfRef.envReader__DOT__lanes_13 = (vlSelfRef.envReader__DOT__io_memPort_rsp[6U] 
                                          >> 0x00000010U);
    vlSelfRef.envReader__DOT__lanes_14 = (0x0000ffffU 
                                          & vlSelfRef.envReader__DOT__io_memPort_rsp[7U]);
    vlSelfRef.envReader__DOT__lanes_15 = (vlSelfRef.envReader__DOT__io_memPort_rsp[7U] 
                                          >> 0x00000010U);
    vlSelfRef.envReader__DOT__lanes_16 = (0x0000ffffU 
                                          & vlSelfRef.envReader__DOT__io_memPort_rsp[8U]);
    vlSelfRef.envReader__DOT__lanes_17 = (vlSelfRef.envReader__DOT__io_memPort_rsp[8U] 
                                          >> 0x00000010U);
    vlSelfRef.envReader__DOT__lanes_18 = (0x0000ffffU 
                                          & vlSelfRef.envReader__DOT__io_memPort_rsp[9U]);
    vlSelfRef.envReader__DOT__lanes_19 = (vlSelfRef.envReader__DOT__io_memPort_rsp[9U] 
                                          >> 0x00000010U);
    vlSelfRef.envReader__DOT__lanes_20 = (0x0000ffffU 
                                          & vlSelfRef.envReader__DOT__io_memPort_rsp[10U]);
    vlSelfRef.envReader__DOT__lanes_21 = (vlSelfRef.envReader__DOT__io_memPort_rsp[10U] 
                                          >> 0x00000010U);
    vlSelfRef.envReader__DOT__lanes_22 = (0x0000ffffU 
                                          & vlSelfRef.envReader__DOT__io_memPort_rsp[11U]);
    vlSelfRef.envReader__DOT__lanes_23 = (vlSelfRef.envReader__DOT__io_memPort_rsp[11U] 
                                          >> 0x00000010U);
    vlSelfRef.envReader__DOT__lanes_24 = (0x0000ffffU 
                                          & vlSelfRef.envReader__DOT__io_memPort_rsp[12U]);
    vlSelfRef.envReader__DOT__lanes_25 = (vlSelfRef.envReader__DOT__io_memPort_rsp[12U] 
                                          >> 0x00000010U);
    vlSelfRef.envReader__DOT__lanes_26 = (0x0000ffffU 
                                          & vlSelfRef.envReader__DOT__io_memPort_rsp[13U]);
    vlSelfRef.envReader__DOT__lanes_27 = (vlSelfRef.envReader__DOT__io_memPort_rsp[13U] 
                                          >> 0x00000010U);
    vlSelfRef.envReader__DOT__lanes_28 = (0x0000ffffU 
                                          & vlSelfRef.envReader__DOT__io_memPort_rsp[14U]);
    vlSelfRef.envReader__DOT__lanes_29 = (vlSelfRef.envReader__DOT__io_memPort_rsp[14U] 
                                          >> 0x00000010U);
    vlSelfRef.envReader__DOT__lanes_30 = (0x0000ffffU 
                                          & vlSelfRef.envReader__DOT__io_memPort_rsp[15U]);
    vlSelfRef.envReader__DOT__lanes_31 = (vlSelfRef.envReader__DOT__io_memPort_rsp[15U] 
                                          >> 0x00000010U);
    vlSelfRef.envReader__DOT__envComb_0_re = vlSelfRef.envReader__DOT__lanes_0;
    vlSelfRef.envReader__DOT__envComb_0_im = vlSelfRef.envReader__DOT__lanes_1;
    vlSelfRef.envReader__DOT__envComb_1_re = vlSelfRef.envReader__DOT__lanes_2;
    vlSelfRef.envReader__DOT__envComb_1_im = vlSelfRef.envReader__DOT__lanes_3;
    vlSelfRef.envReader__DOT__envComb_2_re = vlSelfRef.envReader__DOT__lanes_4;
    vlSelfRef.envReader__DOT__envComb_2_im = vlSelfRef.envReader__DOT__lanes_5;
    vlSelfRef.envReader__DOT__envComb_3_re = vlSelfRef.envReader__DOT__lanes_6;
    vlSelfRef.envReader__DOT__envComb_3_im = vlSelfRef.envReader__DOT__lanes_7;
    vlSelfRef.envReader__DOT__envComb_4_re = vlSelfRef.envReader__DOT__lanes_8;
    vlSelfRef.envReader__DOT__envComb_4_im = vlSelfRef.envReader__DOT__lanes_9;
    vlSelfRef.envReader__DOT__envComb_5_re = vlSelfRef.envReader__DOT__lanes_10;
    vlSelfRef.envReader__DOT__envComb_5_im = vlSelfRef.envReader__DOT__lanes_11;
    vlSelfRef.envReader__DOT__envComb_6_re = vlSelfRef.envReader__DOT__lanes_12;
    vlSelfRef.envReader__DOT__envComb_6_im = vlSelfRef.envReader__DOT__lanes_13;
    vlSelfRef.envReader__DOT__envComb_7_re = vlSelfRef.envReader__DOT__lanes_14;
    vlSelfRef.envReader__DOT__envComb_7_im = vlSelfRef.envReader__DOT__lanes_15;
    vlSelfRef.envReader__DOT__envComb_8_re = vlSelfRef.envReader__DOT__lanes_16;
    vlSelfRef.envReader__DOT__envComb_8_im = vlSelfRef.envReader__DOT__lanes_17;
    vlSelfRef.envReader__DOT__envComb_9_re = vlSelfRef.envReader__DOT__lanes_18;
    vlSelfRef.envReader__DOT__envComb_9_im = vlSelfRef.envReader__DOT__lanes_19;
    vlSelfRef.envReader__DOT__envComb_10_re = vlSelfRef.envReader__DOT__lanes_20;
    vlSelfRef.envReader__DOT__envComb_10_im = vlSelfRef.envReader__DOT__lanes_21;
    vlSelfRef.envReader__DOT__envComb_11_re = vlSelfRef.envReader__DOT__lanes_22;
    vlSelfRef.envReader__DOT__envComb_11_im = vlSelfRef.envReader__DOT__lanes_23;
    vlSelfRef.envReader__DOT__envComb_12_re = vlSelfRef.envReader__DOT__lanes_24;
    vlSelfRef.envReader__DOT__envComb_12_im = vlSelfRef.envReader__DOT__lanes_25;
    vlSelfRef.envReader__DOT__envComb_13_re = vlSelfRef.envReader__DOT__lanes_26;
    vlSelfRef.envReader__DOT__envComb_13_im = vlSelfRef.envReader__DOT__lanes_27;
    vlSelfRef.envReader__DOT__envComb_14_re = vlSelfRef.envReader__DOT__lanes_28;
    vlSelfRef.envReader__DOT__envComb_14_im = vlSelfRef.envReader__DOT__lanes_29;
    vlSelfRef.envReader__DOT__envComb_15_re = vlSelfRef.envReader__DOT__lanes_30;
    vlSelfRef.envReader__DOT__envComb_15_im = vlSelfRef.envReader__DOT__lanes_31;
}

void Vtop_PulseGenerator___nba_comb__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__1(Vtop_PulseGenerator* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_PulseGenerator___nba_comb__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.io_phase_payload = vlSymsp->TOP.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3_io_phase_payload;
    vlSelfRef.phaseQ__DOT__io_push_payload_data = vlSelfRef.io_phase_payload;
    vlSelfRef.phaseQ__DOT__logic_fifo__DOT__io_push_payload_data 
        = vlSelfRef.phaseQ__DOT__io_push_payload_data;
}

void Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__104(Vtop_PulseGenerator* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_PulseGenerator___nba_sequent__TOP__PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__pulseGenerator_3__104\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ampQ__DOT__logic_fifo__DOT__io_push_payload_deadline 
        = vlSelfRef.ampQ__DOT__logic_fifo_io_push_payload_deadline;
    vlSelfRef.ampQ__DOT__logic_fifo__DOT__io_push_payload_data 
        = vlSelfRef.ampQ__DOT__io_push_payload_data;
    vlSelfRef.phaseQ__DOT__logic_fifo__DOT__io_push_payload_deadline 
        = vlSelfRef.phaseQ__DOT__logic_fifo_io_push_payload_deadline;
    vlSelfRef.freqCQ__DOT__logic_fifo__DOT__io_push_payload_deadline 
        = vlSelfRef.freqCQ__DOT__logic_fifo_io_push_payload_deadline;
    vlSelfRef.freqCQ__DOT__logic_fifo__DOT__io_push_payload_data 
        = vlSelfRef.freqCQ__DOT__io_push_payload_data;
    vlSelfRef.freqPQ__DOT__logic_fifo__DOT__io_push_payload_deadline 
        = vlSelfRef.freqPQ__DOT__logic_fifo_io_push_payload_deadline;
    vlSelfRef.freqPQ__DOT__logic_fifo__DOT__io_push_payload_data 
        = vlSelfRef.freqPQ__DOT__io_push_payload_data;
    vlSelfRef.addrQ__DOT__logic_fifo__DOT__io_push_payload_deadline 
        = vlSelfRef.addrQ__DOT__logic_fifo_io_push_payload_deadline;
    vlSelfRef.addrQ__DOT__logic_fifo__DOT__io_push_payload_data 
        = vlSelfRef.addrQ__DOT__io_push_payload_data;
    vlSelfRef.durQ__DOT__logic_fifo__DOT__io_push_payload_deadline 
        = vlSelfRef.durQ__DOT__logic_fifo_io_push_payload_deadline;
    vlSelfRef.durQ__DOT__logic_fifo__DOT__io_push_payload_data 
        = vlSelfRef.durQ__DOT__io_push_payload_data;
}

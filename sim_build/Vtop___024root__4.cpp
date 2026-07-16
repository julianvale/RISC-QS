// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop___024root___nba_sequent__TOP__69(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__69\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1__DOT__outParamFlow_payload_amp 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1__DOT__outParam_amp;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1__DOT__outParamFlow_payload_env 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1__DOT__outParam_env;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1__DOT__outParamFlow_payload_dur 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1__DOT__outParam_dur;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1__DOT__outParamFlow_payload_phase 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1__DOT__outParam_phase;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1__DOT___zz_io_freq_payload 
        = (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1__DOT__io_cmd_payload_data 
           >> 0x10U);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1__DOT__io_timeBcast_regNext 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1__DOT__io_timeBcast;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1__DOT__startTime_regNext 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1__DOT__startTime;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1__DOT__io_amp_payload 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1__DOT__outParamFlow_payload_amp;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1__DOT__io_addr_payload 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1__DOT__outParamFlow_payload_env;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1__DOT__io_dur_payload 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1__DOT__outParamFlow_payload_dur;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1__DOT__io_phase_payload 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1__DOT__outParamFlow_payload_phase;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1__DOT__io_freq_payload 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1__DOT___zz_io_freq_payload;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1__DOT__io_time 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1__DOT__io_timeBcast_regNext;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1__DOT__io_startTime 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1__DOT__startTime_regNext;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1_io_amp_payload 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1__DOT__io_amp_payload;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1_io_addr_payload 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1__DOT__io_addr_payload;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1_io_dur_payload 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1__DOT__io_dur_payload;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1_io_phase_payload 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1__DOT__io_phase_payload;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1_io_freq_payload 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1__DOT__io_freq_payload;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1_io_time 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1__DOT__io_time;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1_io_startTime 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1__DOT__io_startTime;
}

void Vtop___024root___nba_sequent__TOP__70(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__70\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__buf_1__DOT__outParamFlow_payload_amp 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__buf_1__DOT__outParam_amp;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__buf_1__DOT__outParamFlow_payload_env 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__buf_1__DOT__outParam_env;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__buf_1__DOT__outParamFlow_payload_dur 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__buf_1__DOT__outParam_dur;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__buf_1__DOT__outParamFlow_payload_phase 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__buf_1__DOT__outParam_phase;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__buf_1__DOT___zz_io_freq_payload 
        = (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__buf_1__DOT__io_cmd_payload_data 
           >> 0x10U);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__buf_1__DOT__io_timeBcast_regNext 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__buf_1__DOT__io_timeBcast;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__buf_1__DOT__startTime_regNext 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__buf_1__DOT__startTime;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__buf_1__DOT__io_amp_payload 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__buf_1__DOT__outParamFlow_payload_amp;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__buf_1__DOT__io_addr_payload 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__buf_1__DOT__outParamFlow_payload_env;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__buf_1__DOT__io_dur_payload 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__buf_1__DOT__outParamFlow_payload_dur;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__buf_1__DOT__io_phase_payload 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__buf_1__DOT__outParamFlow_payload_phase;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__buf_1__DOT__io_freq_payload 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__buf_1__DOT___zz_io_freq_payload;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__buf_1__DOT__io_time 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__buf_1__DOT__io_timeBcast_regNext;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__buf_1__DOT__io_startTime 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__buf_1__DOT__startTime_regNext;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__buf_1_io_amp_payload 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__buf_1__DOT__io_amp_payload;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__buf_1_io_addr_payload 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__buf_1__DOT__io_addr_payload;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__buf_1_io_dur_payload 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__buf_1__DOT__io_dur_payload;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__buf_1_io_phase_payload 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__buf_1__DOT__io_phase_payload;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__buf_1_io_freq_payload 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__buf_1__DOT__io_freq_payload;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__buf_1_io_time 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__buf_1__DOT__io_time;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__buf_1_io_startTime 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__buf_1__DOT__io_startTime;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__io_amp_payload 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__buf_1_io_amp_payload;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__io_addr_payload 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__buf_1_io_addr_payload;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__io_dur_payload 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__buf_1_io_dur_payload;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__io_freq_payload 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__buf_1_io_freq_payload;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__io_time 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__buf_1_io_time;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__io_startTime 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__buf_1_io_startTime;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ__DOT__io_push_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__io_amp_payload;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ__DOT__io_push_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__io_addr_payload;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ__DOT__io_push_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__io_dur_payload;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ__DOT__io_push_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__io_freq_payload;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ__DOT__io_push_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__io_freq_payload;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ__DOT__io_time 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__io_time;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ__DOT__io_time 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__io_time;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ__DOT__io_time 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__io_time;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ__DOT__io_time 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__io_time;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ__DOT__io_time 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__io_time;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ__DOT__io_time 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__io_time;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__io_time 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__io_time;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ__DOT__io_push_payload_startTime 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__io_startTime;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ__DOT__io_push_payload_startTime 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__io_startTime;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ__DOT__io_push_payload_startTime 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__io_startTime;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ__DOT__io_push_payload_startTime 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__io_startTime;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ__DOT__io_push_payload_startTime 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__io_startTime;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ__DOT__io_push_payload_startTime 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__io_startTime;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT___zz_batchTime_1 
        = ((QData)((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__io_time)) 
           << 2U);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ__DOT__logic_fifo_io_push_payload_deadline 
        = (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ__DOT__io_push_payload_startTime 
           - (IData)(0x00000023U));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ__DOT__logic_fifo_io_push_payload_deadline 
        = (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ__DOT__io_push_payload_startTime 
           - (IData)(0x00000024U));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ__DOT__logic_fifo_io_push_payload_deadline 
        = (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ__DOT__io_push_payload_startTime 
           - (IData)(0x00000025U));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ__DOT__logic_fifo_io_push_payload_deadline 
        = (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ__DOT__io_push_payload_startTime 
           - (IData)(0x00000029U));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ__DOT__logic_fifo_io_push_payload_deadline 
        = (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ__DOT__io_push_payload_startTime 
           - (IData)(0x0000000cU));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ__DOT__logic_fifo_io_push_payload_deadline 
        = (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ__DOT__io_push_payload_startTime 
           - (IData)(3U));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT___zz_batchTime 
        = (0x0000ffffU & (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT___zz_batchTime_1));
}

void Vtop___024root___nba_sequent__TOP__71(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__71\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.PulseTableSoc__DOT__timeOffset_buffercc__DOT__buffers_1 
        = vlSelfRef.PulseTableSoc__DOT__timeOffset_buffercc__DOT__buffers_0;
    vlSelfRef.PulseTableSoc__DOT__timeOffset_buffercc__DOT__io_dataOut 
        = vlSelfRef.PulseTableSoc__DOT__timeOffset_buffercc__DOT__buffers_1;
    vlSelfRef.PulseTableSoc__DOT__timeOffset_buffercc__DOT__buffers_0 
        = vlSelfRef.PulseTableSoc__DOT__timeOffset_buffercc__DOT__io_dataIn;
}

extern const VlUnpacked<VlWide<4>/*127:0*/, 8> Vtop__ConstPool__TABLE_hf045776a_0;

void Vtop___024root___nba_sequent__TOP__72(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__72\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx156;
    __Vtableidx156 = 0;
    CData/*2:0*/ __Vtableidx442;
    __Vtableidx442 = 0;
    CData/*2:0*/ __Vtableidx445;
    __Vtableidx445 = 0;
    CData/*2:0*/ __Vtableidx446;
    __Vtableidx446 = 0;
    CData/*2:0*/ __Vtableidx447;
    __Vtableidx447 = 0;
    CData/*2:0*/ __Vtableidx448;
    __Vtableidx448 = 0;
    CData/*2:0*/ __Vtableidx449;
    __Vtableidx449 = 0;
    // Body
    if (vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_addressGen_ready) {
        vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_addressGen_rData 
            = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_addressGen_payload;
    }
    if (vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_readPort_cmd_valid) {
        vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__ram_spinal_port1[0U] 
            = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__ram
            [vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_readPort_cmd_payload][0U];
        vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__ram_spinal_port1[1U] 
            = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__ram
            [vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_readPort_cmd_payload][1U];
        vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__ram_spinal_port1[2U] 
            = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__ram
            [vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_readPort_cmd_payload][2U];
    }
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_readArbitration_payload 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_addressGen_rData;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT___zz_popCC_readPort_rsp_param[0U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__ram_spinal_port1[0U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT___zz_popCC_readPort_rsp_param[1U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__ram_spinal_port1[1U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT___zz_popCC_readPort_rsp_param[2U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__ram_spinal_port1[2U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_readPort_rsp_param 
        = (7U & (vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT___zz_popCC_readPort_rsp_param[0U] 
                 >> 3U));
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_readPort_rsp_source 
        = (7U & (vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT___zz_popCC_readPort_rsp_param[0U] 
                 >> 6U));
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_readPort_rsp_address 
        = (0x0000ffffU & (vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT___zz_popCC_readPort_rsp_param[0U] 
                          >> 9U));
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_readPort_rsp_size 
        = (7U & (vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT___zz_popCC_readPort_rsp_param[0U] 
                 >> 0x00000019U));
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_readPort_rsp_mask 
        = (vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT___zz_popCC_readPort_rsp_param[0U] 
           >> 0x0000001cU);
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_readPort_rsp_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT___zz_popCC_readPort_rsp_param[1U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_readPort_rsp_corrupt 
        = (1U & vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT___zz_popCC_readPort_rsp_param[2U]);
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT___zz_popCC_readPort_rsp_opcode_1 
        = (7U & vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT___zz_popCC_readPort_rsp_param[0U]);
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_readArbitration_translated_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_readPort_rsp_param;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_readArbitration_translated_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_readPort_rsp_source;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_readArbitration_translated_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_readPort_rsp_address;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_readArbitration_translated_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_readPort_rsp_size;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_readArbitration_translated_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_readPort_rsp_mask;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_readArbitration_translated_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_readPort_rsp_data;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_readArbitration_translated_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_readPort_rsp_corrupt;
    __Vtableidx448 = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT___zz_popCC_readPort_rsp_opcode_1;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT___zz_popCC_readPort_rsp_opcode_1_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx448][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT___zz_popCC_readPort_rsp_opcode_1_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx448][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT___zz_popCC_readPort_rsp_opcode_1_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx448][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT___zz_popCC_readPort_rsp_opcode_1_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx448][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT___zz_popCC_readPort_rsp_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT___zz_popCC_readPort_rsp_opcode_1;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__io_pop_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_readArbitration_translated_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__io_pop_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_readArbitration_translated_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__io_pop_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_readArbitration_translated_payload_address;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__io_pop_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_readArbitration_translated_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__io_pop_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_readArbitration_translated_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__io_pop_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_readArbitration_translated_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__io_pop_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_readArbitration_translated_payload_corrupt;
    __Vtableidx447 = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT___zz_popCC_readPort_rsp_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT___zz_popCC_readPort_rsp_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx447][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT___zz_popCC_readPort_rsp_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx447][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT___zz_popCC_readPort_rsp_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx447][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT___zz_popCC_readPort_rsp_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx447][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_readPort_rsp_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT___zz_popCC_readPort_rsp_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1_io_pop_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__io_pop_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1_io_pop_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__io_pop_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1_io_pop_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__io_pop_payload_address;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1_io_pop_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__io_pop_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1_io_pop_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__io_pop_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1_io_pop_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__io_pop_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1_io_pop_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__io_pop_payload_corrupt;
    __Vtableidx446 = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_readPort_rsp_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_readPort_rsp_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx446][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_readPort_rsp_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx446][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_readPort_rsp_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx446][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_readPort_rsp_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx446][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_readArbitration_translated_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_readPort_rsp_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_output_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1_io_pop_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_output_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1_io_pop_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_output_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1_io_pop_payload_address;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_output_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1_io_pop_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_output_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1_io_pop_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_output_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1_io_pop_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_output_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1_io_pop_payload_corrupt;
    __Vtableidx449 = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_readArbitration_translated_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_readArbitration_translated_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx449][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_readArbitration_translated_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx449][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_readArbitration_translated_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx449][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_readArbitration_translated_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx449][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__io_pop_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_readArbitration_translated_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc_io_output_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_output_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc_io_output_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_output_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc_io_output_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_output_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc_io_output_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_output_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc_io_output_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_output_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc_io_output_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_output_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc_io_output_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_output_a_payload_corrupt;
    __Vtableidx445 = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__io_pop_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__io_pop_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx445][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__io_pop_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx445][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__io_pop_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx445][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__io_pop_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx445][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1_io_pop_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__io_pop_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_down_bus_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc_io_output_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_down_bus_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc_io_output_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_down_bus_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc_io_output_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_down_bus_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc_io_output_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_down_bus_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc_io_output_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_down_bus_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc_io_output_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_down_bus_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc_io_output_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_output_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1_io_pop_payload_opcode;
    __Vtableidx442 = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_output_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_output_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx442][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_output_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx442][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_output_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx442][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_output_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx442][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc_io_output_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_output_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_down_bus_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc_io_output_a_payload_opcode;
    __Vtableidx156 = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_down_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_down_bus_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx156][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_down_bus_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx156][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_down_bus_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx156][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_down_bus_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx156][3U];
}

extern const VlUnpacked<VlWide<4>/*119:0*/, 8> Vtop__ConstPool__TABLE_hc5d7960e_0;

void Vtop___024root___nba_sequent__TOP__73(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__73\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx74;
    __Vtableidx74 = 0;
    CData/*2:0*/ __Vtableidx88;
    __Vtableidx88 = 0;
    CData/*2:0*/ __Vtableidx191;
    __Vtableidx191 = 0;
    CData/*2:0*/ __Vtableidx441;
    __Vtableidx441 = 0;
    CData/*2:0*/ __Vtableidx451;
    __Vtableidx451 = 0;
    CData/*2:0*/ __Vtableidx452;
    __Vtableidx452 = 0;
    CData/*2:0*/ __Vtableidx453;
    __Vtableidx453 = 0;
    CData/*2:0*/ __Vtableidx454;
    __Vtableidx454 = 0;
    CData/*2:0*/ __Vtableidx455;
    __Vtableidx455 = 0;
    // Body
    if (vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_addressGen_ready) {
        vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_addressGen_rData 
            = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_addressGen_payload;
    }
    if (vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_readPort_cmd_valid) {
        vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__ram_spinal_port1 
            = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__ram
            [vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_readPort_cmd_payload];
    }
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_readArbitration_payload 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_addressGen_rData;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT___zz_popCC_readPort_rsp_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__ram_spinal_port1;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_readPort_rsp_param 
        = (7U & (IData)((vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT___zz_popCC_readPort_rsp_param 
                         >> 3U)));
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_readPort_rsp_source 
        = (7U & (IData)((vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT___zz_popCC_readPort_rsp_param 
                         >> 6U)));
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_readPort_rsp_size 
        = (7U & (IData)((vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT___zz_popCC_readPort_rsp_param 
                         >> 9U)));
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_readPort_rsp_denied 
        = (1U & (IData)((vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT___zz_popCC_readPort_rsp_param 
                         >> 0x0000000cU)));
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_readPort_rsp_data 
        = (IData)((vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT___zz_popCC_readPort_rsp_param 
                   >> 0x0000000dU));
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_readPort_rsp_corrupt 
        = (1U & (IData)((vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT___zz_popCC_readPort_rsp_param 
                         >> 0x0000002dU)));
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT___zz_popCC_readPort_rsp_opcode_1 
        = (7U & (IData)(vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT___zz_popCC_readPort_rsp_param));
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_readArbitration_translated_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_readPort_rsp_param;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_readArbitration_translated_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_readPort_rsp_source;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_readArbitration_translated_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_readPort_rsp_size;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_readArbitration_translated_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_readPort_rsp_denied;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_readArbitration_translated_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_readPort_rsp_data;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_readArbitration_translated_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_readPort_rsp_corrupt;
    __Vtableidx454 = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT___zz_popCC_readPort_rsp_opcode_1;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT___zz_popCC_readPort_rsp_opcode_1_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx454][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT___zz_popCC_readPort_rsp_opcode_1_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx454][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT___zz_popCC_readPort_rsp_opcode_1_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx454][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT___zz_popCC_readPort_rsp_opcode_1_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx454][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT___zz_popCC_readPort_rsp_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT___zz_popCC_readPort_rsp_opcode_1;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__io_pop_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_readArbitration_translated_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__io_pop_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_readArbitration_translated_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__io_pop_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_readArbitration_translated_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__io_pop_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_readArbitration_translated_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__io_pop_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_readArbitration_translated_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__io_pop_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_readArbitration_translated_payload_corrupt;
    __Vtableidx453 = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT___zz_popCC_readPort_rsp_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT___zz_popCC_readPort_rsp_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx453][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT___zz_popCC_readPort_rsp_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx453][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT___zz_popCC_readPort_rsp_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx453][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT___zz_popCC_readPort_rsp_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx453][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_readPort_rsp_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT___zz_popCC_readPort_rsp_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1_io_pop_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__io_pop_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1_io_pop_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__io_pop_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1_io_pop_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__io_pop_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1_io_pop_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__io_pop_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1_io_pop_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__io_pop_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1_io_pop_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__io_pop_payload_corrupt;
    __Vtableidx452 = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_readPort_rsp_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_readPort_rsp_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx452][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_readPort_rsp_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx452][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_readPort_rsp_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx452][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_readPort_rsp_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx452][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_readArbitration_translated_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_readPort_rsp_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_input_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1_io_pop_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_input_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1_io_pop_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_input_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1_io_pop_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_input_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1_io_pop_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_input_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1_io_pop_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_input_d_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1_io_pop_payload_corrupt;
    __Vtableidx455 = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_readArbitration_translated_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_readArbitration_translated_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx455][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_readArbitration_translated_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx455][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_readArbitration_translated_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx455][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_readArbitration_translated_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx455][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__io_pop_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_readArbitration_translated_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc_io_input_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_input_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc_io_input_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_input_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc_io_input_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_input_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc_io_input_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_input_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc_io_input_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_input_d_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc_io_input_d_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_input_d_payload_corrupt;
    __Vtableidx451 = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__io_pop_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__io_pop_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx451][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__io_pop_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx451][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__io_pop_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx451][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__io_pop_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx451][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1_io_pop_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__io_pop_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_up_bus_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc_io_input_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_up_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc_io_input_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_up_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc_io_input_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_up_bus_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc_io_input_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_up_bus_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc_io_input_d_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_up_bus_d_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc_io_input_d_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_input_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1_io_pop_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_noDecoder_toDown_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_up_bus_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_noDecoder_toDown_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_up_bus_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_noDecoder_toDown_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_up_bus_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_noDecoder_toDown_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_up_bus_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_noDecoder_toDown_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_up_bus_d_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_noDecoder_toDown_d_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_up_bus_d_payload_corrupt;
    __Vtableidx441 = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_input_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_input_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx441][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_input_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx441][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_input_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx441][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_input_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx441][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc_io_input_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_input_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_noDecoder_toDown_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_noDecoder_toDown_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_noDecoder_toDown_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_noDecoder_toDown_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_noDecoder_toDown_d_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_noDecoder_toDown_d_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_up_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc_io_input_d_payload_opcode;
    __Vtableidx191 = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_up_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_up_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx191][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_up_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx191][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_up_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx191][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_up_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx191][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_noDecoder_toDown_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_up_bus_d_payload_opcode;
    __Vtableidx88 = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_noDecoder_toDown_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_noDecoder_toDown_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx88][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_noDecoder_toDown_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx88][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_noDecoder_toDown_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx88][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_noDecoder_toDown_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx88][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_noDecoder_toDown_d_payload_opcode;
    __Vtableidx74 = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx74][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx74][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx74][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx74][3U];
}

void Vtop___024root___nba_sequent__TOP__74(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__74\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onW_firstCycle 
        = vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__hostRst;
    if (vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__hostRst) {
        vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onW_counter = 0U;
        vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onW_awS2m_rValid = 0U;
        vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onAw_toW_rValidN = 1U;
        vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onW_commitCmd_rValid = 0U;
    } else {
        if (vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__io_up_w_fire) {
            vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onW_counter 
                = (3U & (IData)(vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onW_counterPlus));
        }
        if (vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onW_awS2m_fire) {
            vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onW_counter 
                = vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onW_awS2m_payload_offset;
        }
        if (vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onAw_toW_valid) {
            vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onAw_toW_rValidN = 0U;
        }
        if (vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onW_awS2m_ready) {
            vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onW_awS2m_rValid 
                = vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onW_awS2m_valid;
            vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onAw_toW_rValidN = 1U;
        }
        if (vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onW_commitCmd_ready) {
            vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onW_commitCmd_rValid 
                = vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onW_commitCmd_valid;
        }
    }
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__when_Axi4Compactor_l74 
        = (0U == (IData)(vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onW_counter));
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onW_aw_valid 
        = vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onW_awS2m_rValid;
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onAw_toW_ready 
        = vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onAw_toW_rValidN;
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onW_commitDo_valid 
        = vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onW_commitCmd_rValid;
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__when_Stream_l477 
        = (1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onW_aw_valid)));
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__io_up_aw_fork2__DOT__io_outputs_1_ready 
        = vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onAw_toW_ready;
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__when_Stream_l477_1 
        = (1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onW_commitDo_valid)));
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__io_down_w_valid 
        = vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onW_commitDo_valid;
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor_io_down_w_valid 
        = vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__io_down_w_valid;
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__aligner__DOT__io_up_w_valid 
        = vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor_io_down_w_valid;
}

void Vtop___024root___nba_sequent__TOP__75(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__75\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx251;
    __Vtableidx251 = 0;
    CData/*2:0*/ __Vtableidx252;
    __Vtableidx252 = 0;
    CData/*2:0*/ __Vtableidx255;
    __Vtableidx255 = 0;
    CData/*2:0*/ __Vtableidx257;
    __Vtableidx257 = 0;
    CData/*2:0*/ __Vtableidx258;
    __Vtableidx258 = 0;
    CData/*2:0*/ __Vtableidx260;
    __Vtableidx260 = 0;
    CData/*2:0*/ __Vtableidx262;
    __Vtableidx262 = 0;
    CData/*2:0*/ __Vtableidx263;
    __Vtableidx263 = 0;
    CData/*2:0*/ __Vtableidx270;
    __Vtableidx270 = 0;
    CData/*2:0*/ __Vtableidx282;
    __Vtableidx282 = 0;
    CData/*2:0*/ __Vtableidx287;
    __Vtableidx287 = 0;
    CData/*2:0*/ __Vtableidx288;
    __Vtableidx288 = 0;
    CData/*2:0*/ __Vtableidx291;
    __Vtableidx291 = 0;
    CData/*2:0*/ __Vtableidx293;
    __Vtableidx293 = 0;
    CData/*2:0*/ __Vtableidx294;
    __Vtableidx294 = 0;
    CData/*2:0*/ __Vtableidx296;
    __Vtableidx296 = 0;
    CData/*2:0*/ __Vtableidx298;
    __Vtableidx298 = 0;
    CData/*2:0*/ __Vtableidx299;
    __Vtableidx299 = 0;
    CData/*2:0*/ __Vtableidx300;
    __Vtableidx300 = 0;
    CData/*2:0*/ __Vtableidx302;
    __Vtableidx302 = 0;
    CData/*2:0*/ __Vtableidx304;
    __Vtableidx304 = 0;
    CData/*2:0*/ __Vtableidx306;
    __Vtableidx306 = 0;
    CData/*2:0*/ __Vtableidx308;
    __Vtableidx308 = 0;
    CData/*2:0*/ __Vtableidx309;
    __Vtableidx309 = 0;
    CData/*2:0*/ __Vtableidx310;
    __Vtableidx310 = 0;
    CData/*2:0*/ __Vtableidx311;
    __Vtableidx311 = 0;
    CData/*2:0*/ __Vtableidx313;
    __Vtableidx313 = 0;
    CData/*2:0*/ __Vtableidx315;
    __Vtableidx315 = 0;
    CData/*2:0*/ __Vtableidx316;
    __Vtableidx316 = 0;
    CData/*2:0*/ __Vtableidx318;
    __Vtableidx318 = 0;
    CData/*2:0*/ __Vtableidx320;
    __Vtableidx320 = 0;
    CData/*2:0*/ __Vtableidx321;
    __Vtableidx321 = 0;
    CData/*2:0*/ __Vtableidx322;
    __Vtableidx322 = 0;
    CData/*2:0*/ __Vtableidx323;
    __Vtableidx323 = 0;
    CData/*2:0*/ __Vtableidx324;
    __Vtableidx324 = 0;
    CData/*2:0*/ __Vtableidx325;
    __Vtableidx325 = 0;
    CData/*2:0*/ __Vtableidx327;
    __Vtableidx327 = 0;
    CData/*2:0*/ __Vtableidx329;
    __Vtableidx329 = 0;
    CData/*2:0*/ __Vtableidx330;
    __Vtableidx330 = 0;
    CData/*2:0*/ __Vtableidx332;
    __Vtableidx332 = 0;
    CData/*2:0*/ __Vtableidx334;
    __Vtableidx334 = 0;
    CData/*2:0*/ __Vtableidx335;
    __Vtableidx335 = 0;
    CData/*2:0*/ __Vtableidx336;
    __Vtableidx336 = 0;
    CData/*2:0*/ __Vtableidx338;
    __Vtableidx338 = 0;
    CData/*2:0*/ __Vtableidx339;
    __Vtableidx339 = 0;
    CData/*2:0*/ __Vtableidx340;
    __Vtableidx340 = 0;
    CData/*2:0*/ __Vtableidx341;
    __Vtableidx341 = 0;
    CData/*2:0*/ __Vtableidx343;
    __Vtableidx343 = 0;
    CData/*2:0*/ __Vtableidx344;
    __Vtableidx344 = 0;
    CData/*2:0*/ __Vtableidx345;
    __Vtableidx345 = 0;
    CData/*2:0*/ __Vtableidx346;
    __Vtableidx346 = 0;
    CData/*2:0*/ __Vtableidx347;
    __Vtableidx347 = 0;
    CData/*2:0*/ __Vtableidx348;
    __Vtableidx348 = 0;
    CData/*2:0*/ __Vtableidx349;
    __Vtableidx349 = 0;
    CData/*2:0*/ __Vtableidx358;
    __Vtableidx358 = 0;
    CData/*2:0*/ __Vtableidx366;
    __Vtableidx366 = 0;
    CData/*2:0*/ __Vtableidx368;
    __Vtableidx368 = 0;
    CData/*2:0*/ __Vtableidx374;
    __Vtableidx374 = 0;
    CData/*2:0*/ __Vtableidx378;
    __Vtableidx378 = 0;
    CData/*2:0*/ __Vtableidx385;
    __Vtableidx385 = 0;
    CData/*2:0*/ __Vtableidx389;
    __Vtableidx389 = 0;
    CData/*2:0*/ __Vtableidx391;
    __Vtableidx391 = 0;
    CData/*2:0*/ __Vtableidx393;
    __Vtableidx393 = 0;
    CData/*2:0*/ __Vtableidx394;
    __Vtableidx394 = 0;
    CData/*2:0*/ __Vtableidx395;
    __Vtableidx395 = 0;
    CData/*2:0*/ __Vtableidx396;
    __Vtableidx396 = 0;
    CData/*2:0*/ __Vtableidx397;
    __Vtableidx397 = 0;
    CData/*2:0*/ __Vtableidx399;
    __Vtableidx399 = 0;
    CData/*2:0*/ __Vtableidx400;
    __Vtableidx400 = 0;
    CData/*2:0*/ __Vtableidx401;
    __Vtableidx401 = 0;
    CData/*2:0*/ __Vtableidx402;
    __Vtableidx402 = 0;
    CData/*2:0*/ __Vtableidx404;
    __Vtableidx404 = 0;
    CData/*2:0*/ __Vtableidx405;
    __Vtableidx405 = 0;
    // Body
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_s2mPipe_ready) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_s2mPipe_rData_corrupt 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_s2mPipe_payload_corrupt;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_s2mPipe_rData_mask 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_s2mPipe_payload_mask;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_s2mPipe_rData_param 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_s2mPipe_payload_param;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_s2mPipe_rData_data 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_s2mPipe_payload_data;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_s2mPipe_rData_size 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_s2mPipe_payload_size;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_s2mPipe_rData_source 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_s2mPipe_payload_source;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_s2mPipe_rData_address 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_s2mPipe_payload_address;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_s2mPipe_rData_opcode 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_s2mPipe_payload_opcode;
    }
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_ready) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_rData_corrupt 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_payload_corrupt;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_rData_mask 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_payload_mask;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_rData_param 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_payload_param;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_rData_size 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_payload_size;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_rData_source 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_payload_source;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_rData_data 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_payload_data;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_rData_address 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_payload_address;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_rData_opcode 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_payload_opcode;
    }
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_s2mPipe_ready) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_s2mPipe_rData_corrupt 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_s2mPipe_payload_corrupt;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_s2mPipe_rData_denied 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_s2mPipe_payload_denied;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_s2mPipe_rData_size 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_s2mPipe_payload_size;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_s2mPipe_rData_param 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_s2mPipe_payload_param;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_s2mPipe_rData_source 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_s2mPipe_payload_source;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_s2mPipe_rData_opcode 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_s2mPipe_payload_opcode;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_s2mPipe_rData_data 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_s2mPipe_payload_data;
    }
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_s2mPipe_ready) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_s2mPipe_rData_corrupt 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_s2mPipe_payload_corrupt;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_s2mPipe_rData_size 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_s2mPipe_payload_size;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_s2mPipe_rData_denied 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_s2mPipe_payload_denied;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_s2mPipe_rData_param 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_s2mPipe_payload_param;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_s2mPipe_rData_data 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_s2mPipe_payload_data;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_s2mPipe_rData_opcode 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_s2mPipe_payload_opcode;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_s2mPipe_rData_source 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_s2mPipe_payload_source;
    }
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__timeMemMap_time 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__ctrlTime;
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_logic_rsp_ready) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_logic_rsp_rData_param = 0U;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_logic_rsp_rData_denied = 0U;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_logic_rsp_rData_source 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_logic_rsp_payload_source;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_logic_rsp_rData_size 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_logic_rsp_payload_size;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_logic_rsp_rData_opcode = 0U;
    }
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_ready) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_rData_param = 0U;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_rData_denied = 0U;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_rData_corrupt = 0U;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_rData_source 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_payload_source;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_rData_size 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_payload_size;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_rData_data 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_payload_data;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_rData_opcode 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_payload_opcode;
    }
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_ready) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_rData_corrupt 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_payload_corrupt;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_rData_data 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_payload_data;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_rData_denied 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_payload_denied;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_rData_size 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_payload_size;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_rData_source 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_payload_source;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_rData_param 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_payload_param;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_rData_opcode 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_payload_opcode;
    }
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_ready) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_rData_denied 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_payload_denied;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_rData_size 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_payload_size;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_rData_source 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_payload_source;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_rData_param 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_payload_param;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_rData_opcode 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_payload_opcode;
    }
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_ready) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_rData_data 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_payload_data;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_rData_mask 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_payload_mask;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_rData_address 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_payload_address;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_rData_source 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_payload_source;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_rData_corrupt 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_payload_corrupt;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_rData_param 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_payload_param;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_rData_size 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_payload_size;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_rData_opcode 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_payload_opcode;
    }
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_ready) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_rData_size 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_payload_size;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_rData_address 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_payload_address;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_rData_source 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_payload_source;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_rData_param 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_payload_param;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_rData_mask 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_payload_mask;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_rData_data 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_payload_data;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_rData_corrupt 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_payload_corrupt;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_rData_opcode 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_payload_opcode;
    }
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_ready) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_rData_corrupt 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_payload_corrupt;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_rData_denied 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_payload_denied;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_rData_size 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_payload_size;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_rData_source 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_payload_source;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_rData_param 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_payload_param;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_rData_data 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_payload_data;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_rData_opcode 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_payload_opcode;
    }
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_ready) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_rData_param = 0U;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_rData_size = 2U;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_rData_address 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_payload_address;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_rData_source 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_payload_source;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_rData_opcode = 4U;
    }
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_s2mPipe_ready) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_s2mPipe_rData_param 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_s2mPipe_payload_param;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_s2mPipe_rData_size 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_s2mPipe_payload_size;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_s2mPipe_rData_source 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_s2mPipe_payload_source;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_s2mPipe_rData_address 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_s2mPipe_payload_address;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_s2mPipe_rData_opcode 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_s2mPipe_payload_opcode;
    }
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_s2mPipe_ready) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_s2mPipe_rData_denied 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_s2mPipe_payload_denied;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_s2mPipe_rData_size 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_s2mPipe_payload_size;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_s2mPipe_rData_source 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_s2mPipe_payload_source;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_s2mPipe_rData_param 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_s2mPipe_payload_param;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_s2mPipe_rData_opcode 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_s2mPipe_payload_opcode;
    }
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_s2mPipe_ready) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_s2mPipe_rData_corrupt 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_s2mPipe_payload_corrupt;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_s2mPipe_rData_data 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_s2mPipe_payload_data;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_s2mPipe_rData_denied 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_s2mPipe_payload_denied;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_s2mPipe_rData_source 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_s2mPipe_payload_source;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_s2mPipe_rData_size 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_s2mPipe_payload_size;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_s2mPipe_rData_param 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_s2mPipe_payload_param;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_s2mPipe_rData_opcode 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_s2mPipe_payload_opcode;
    }
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_ready) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_rData_source = 0U;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_rData_param = 0U;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_rData_size = 2U;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_rData_corrupt = 0U;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_rData_data 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_payload_data;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_rData_mask 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_payload_mask;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_rData_address 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_payload_address;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_rData_opcode 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_payload_opcode;
    }
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_ready) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_rData_corrupt 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_payload_corrupt;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_rData_size 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_payload_size;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_rData_denied 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_payload_denied;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_rData_data 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_payload_data;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_rData_param 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_payload_param;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_rData_source 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_payload_source;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_rData_opcode 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_payload_opcode;
    }
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT___zz_memMapFiber_logic_factory_rspAsync_payload_data 
        = (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT___zz___05Fzz_memMapFiber_logic_factory_rspAsync_payload_data 
           < vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__timeMemMap_timeCmp);
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_s2mPipe_ready) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_s2mPipe_rData_corrupt 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_s2mPipe_payload_corrupt;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_s2mPipe_rData_param 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_s2mPipe_payload_param;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_s2mPipe_rData_source 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_s2mPipe_payload_source;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_s2mPipe_rData_size 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_s2mPipe_payload_size;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_s2mPipe_rData_data 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_s2mPipe_payload_data;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_s2mPipe_rData_mask 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_s2mPipe_payload_mask;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_s2mPipe_rData_address 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_s2mPipe_payload_address;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_s2mPipe_rData_opcode 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_s2mPipe_payload_opcode;
    }
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_s2mPipe_rData_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_m2sPipe_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_rData_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_m2sPipe_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_rData_mask;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_m2sPipe_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_rData_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_s2mPipe_rData_mask;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_s2mPipe_rData_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_s2mPipe_rData_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_s2mPipe_m2sPipe_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_s2mPipe_rData_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_s2mPipe_m2sPipe_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_s2mPipe_rData_denied;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_s2mPipe_m2sPipe_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_s2mPipe_rData_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_s2mPipe_m2sPipe_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_s2mPipe_rData_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_s2mPipe_m2sPipe_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_s2mPipe_rData_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_s2mPipe_m2sPipe_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_s2mPipe_rData_denied;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_s2mPipe_m2sPipe_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_s2mPipe_rData_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_s2mPipe_m2sPipe_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_s2mPipe_rData_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_s2mPipe_m2sPipe_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_s2mPipe_rData_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT___zz___05Fzz_memMapFiber_logic_factory_rspAsync_payload_data 
        = ((IData)(3U) + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__timeMemMap_time);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__ctrlTime 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__time_1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_m2sPipe_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_rData_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_m2sPipe_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_rData_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_s2mPipe_rData_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_s2mPipe_rData_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_m2sPipe_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_rData_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_logic_rsp_stage_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_logic_rsp_rData_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_m2sPipe_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_rData_address;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_logic_rsp_stage_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_logic_rsp_rData_denied;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_stage_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_rData_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_stage_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_rData_denied;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_stage_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_rData_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_s2mPipe_m2sPipe_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_s2mPipe_rData_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_logic_rsp_stage_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_logic_rsp_rData_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_logic_rsp_stage_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_logic_rsp_rData_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_stage_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_rData_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_stage_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_rData_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_stage_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_rData_data;
    __Vtableidx316 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_rData_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx316][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_rData_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx316][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_rData_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx316][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_rData_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx316][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_m2sPipe_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_rData_opcode;
    __Vtableidx263 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_s2mPipe_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_s2mPipe_rData_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx263][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_s2mPipe_rData_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx263][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_s2mPipe_rData_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx263][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_s2mPipe_rData_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx263][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_s2mPipe_m2sPipe_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_s2mPipe_rData_opcode;
    __Vtableidx299 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_s2mPipe_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_s2mPipe_rData_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx299][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_s2mPipe_rData_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx299][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_s2mPipe_rData_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx299][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_s2mPipe_rData_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx299][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_s2mPipe_m2sPipe_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_s2mPipe_rData_opcode;
    __Vtableidx318 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_rData_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx318][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_rData_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx318][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_rData_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx318][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_rData_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx318][3U];
    __Vtableidx332 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_rData_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx332][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_rData_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx332][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_rData_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx332][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_rData_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx332][3U];
    __Vtableidx339 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_logic_rsp_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_logic_rsp_rData_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx339][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_logic_rsp_rData_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx339][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_logic_rsp_rData_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx339][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_logic_rsp_rData_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx339][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_logic_rsp_stage_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_logic_rsp_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_s2mPipe_m2sPipe_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_s2mPipe_rData_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_s2mPipe_m2sPipe_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_s2mPipe_rData_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_s2mPipe_m2sPipe_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_s2mPipe_rData_denied;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_s2mPipe_m2sPipe_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_s2mPipe_rData_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_s2mPipe_m2sPipe_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_s2mPipe_rData_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_s2mPipe_m2sPipe_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_s2mPipe_rData_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_s2mPipe_rData_address;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_s2mPipe_m2sPipe_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_s2mPipe_rData_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_s2mPipe_m2sPipe_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_s2mPipe_rData_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_s2mPipe_m2sPipe_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_s2mPipe_rData_denied;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_s2mPipe_m2sPipe_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_s2mPipe_rData_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_s2mPipe_m2sPipe_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_s2mPipe_rData_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_s2mPipe_m2sPipe_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_s2mPipe_rData_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_s2mPipe_m2sPipe_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_s2mPipe_rData_source;
    __Vtableidx349 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_rData_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx349][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_rData_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx349][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_rData_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx349][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_rData_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx349][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_stage_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_rData_opcode;
    __Vtableidx313 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_rData_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx313][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_rData_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx313][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_rData_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx313][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_rData_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx313][3U];
    __Vtableidx327 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_rData_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx327][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_rData_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx327][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_rData_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx327][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_rData_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx327][3U];
    __Vtableidx260 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_rData_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx260][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_rData_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx260][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_rData_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx260][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_rData_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx260][3U];
    __Vtableidx255 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_rData_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx255][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_rData_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx255][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_rData_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx255][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_rData_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx255][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_s2mPipe_m2sPipe_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_s2mPipe_rData_address;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_s2mPipe_m2sPipe_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_s2mPipe_rData_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_s2mPipe_m2sPipe_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_s2mPipe_rData_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_s2mPipe_m2sPipe_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_s2mPipe_rData_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_s2mPipe_m2sPipe_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_s2mPipe_rData_size;
    __Vtableidx296 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_rData_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx296][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_rData_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx296][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_rData_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx296][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_rData_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx296][3U];
    __Vtableidx330 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_s2mPipe_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_s2mPipe_rData_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx330][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_s2mPipe_rData_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx330][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_s2mPipe_rData_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx330][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_s2mPipe_rData_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx330][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_s2mPipe_rData_opcode;
    __Vtableidx291 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_rData_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx291][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_rData_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx291][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_rData_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx291][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_rData_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx291][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_s2mPipe_m2sPipe_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_s2mPipe_rData_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_s2mPipe_m2sPipe_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_s2mPipe_rData_mask;
    __Vtableidx321 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_s2mPipe_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_s2mPipe_rData_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx321][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_s2mPipe_rData_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx321][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_s2mPipe_rData_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx321][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_s2mPipe_rData_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx321][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_s2mPipe_m2sPipe_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_s2mPipe_rData_opcode;
    __Vtableidx335 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_s2mPipe_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_s2mPipe_rData_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx335][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_s2mPipe_rData_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx335][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_s2mPipe_rData_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx335][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_s2mPipe_rData_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx335][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_s2mPipe_m2sPipe_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_s2mPipe_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_s2mPipe_m2sPipe_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_s2mPipe_rData_source;
    __Vtableidx258 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_s2mPipe_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_s2mPipe_rData_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx258][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_s2mPipe_rData_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx258][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_s2mPipe_rData_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx258][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_s2mPipe_rData_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx258][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_s2mPipe_m2sPipe_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_s2mPipe_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_s2mPipe_m2sPipe_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_s2mPipe_rData_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_s2mPipe_m2sPipe_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_s2mPipe_rData_address;
    __Vtableidx294 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_s2mPipe_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_s2mPipe_rData_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx294][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_s2mPipe_rData_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx294][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_s2mPipe_rData_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx294][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_s2mPipe_rData_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx294][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_s2mPipe_m2sPipe_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_s2mPipe_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_m2sPipe_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_m2sPipe_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_m2sPipe_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_d_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_s2mPipe_m2sPipe_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_s2mPipe_m2sPipe_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_s2mPipe_m2sPipe_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_d_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_s2mPipe_m2sPipe_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_s2mPipe_m2sPipe_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_s2mPipe_m2sPipe_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_s2mPipe_m2sPipe_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_s2mPipe_m2sPipe_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_s2mPipe_m2sPipe_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_m2sPipe_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_m2sPipe_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_m2sPipe_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_logic_rsp_stage_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_m2sPipe_payload_address;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_logic_rsp_stage_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_stage_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_stage_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_stage_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_s2mPipe_m2sPipe_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_logic_rsp_stage_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_logic_rsp_stage_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_stage_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_stage_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_stage_payload_data;
    __Vtableidx315 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_m2sPipe_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_m2sPipe_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx315][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_m2sPipe_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx315][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_m2sPipe_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx315][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_m2sPipe_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx315][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_m2sPipe_payload_opcode;
    __Vtableidx262 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_s2mPipe_m2sPipe_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_s2mPipe_m2sPipe_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx262][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_s2mPipe_m2sPipe_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx262][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_s2mPipe_m2sPipe_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx262][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_s2mPipe_m2sPipe_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx262][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_s2mPipe_m2sPipe_payload_opcode;
    __Vtableidx298 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_s2mPipe_m2sPipe_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_s2mPipe_m2sPipe_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx298][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_s2mPipe_m2sPipe_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx298][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_s2mPipe_m2sPipe_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx298][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_s2mPipe_m2sPipe_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx298][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_s2mPipe_m2sPipe_payload_opcode;
    __Vtableidx338 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_logic_rsp_stage_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_logic_rsp_stage_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx338][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_logic_rsp_stage_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx338][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_logic_rsp_stage_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx338][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_logic_rsp_stage_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx338][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_logic_rsp_stage_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_s2mPipe_m2sPipe_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_s2mPipe_m2sPipe_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_s2mPipe_m2sPipe_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_s2mPipe_m2sPipe_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_s2mPipe_m2sPipe_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_s2mPipe_m2sPipe_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_address;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_d_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_s2mPipe_m2sPipe_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_s2mPipe_m2sPipe_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_s2mPipe_m2sPipe_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_s2mPipe_m2sPipe_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_s2mPipe_m2sPipe_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_s2mPipe_m2sPipe_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_s2mPipe_m2sPipe_payload_source;
    __Vtableidx348 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_stage_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_stage_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx348][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_stage_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx348][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_stage_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx348][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_stage_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx348][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_stage_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_s2mPipe_m2sPipe_payload_address;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_s2mPipe_m2sPipe_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_s2mPipe_m2sPipe_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_s2mPipe_m2sPipe_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_s2mPipe_m2sPipe_payload_size;
    __Vtableidx329 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx329][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx329][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx329][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx329][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_s2mPipe_m2sPipe_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_s2mPipe_m2sPipe_payload_mask;
    __Vtableidx320 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_s2mPipe_m2sPipe_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_s2mPipe_m2sPipe_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx320][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_s2mPipe_m2sPipe_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx320][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_s2mPipe_m2sPipe_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx320][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_s2mPipe_m2sPipe_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx320][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_s2mPipe_m2sPipe_payload_opcode;
    __Vtableidx334 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_s2mPipe_m2sPipe_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_s2mPipe_m2sPipe_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx334][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_s2mPipe_m2sPipe_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx334][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_s2mPipe_m2sPipe_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx334][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_s2mPipe_m2sPipe_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx334][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_s2mPipe_m2sPipe_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_s2mPipe_m2sPipe_payload_source;
    __Vtableidx257 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_s2mPipe_m2sPipe_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_s2mPipe_m2sPipe_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx257][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_s2mPipe_m2sPipe_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx257][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_s2mPipe_m2sPipe_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx257][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_s2mPipe_m2sPipe_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx257][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_s2mPipe_m2sPipe_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_s2mPipe_m2sPipe_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_s2mPipe_m2sPipe_payload_address;
    __Vtableidx293 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_s2mPipe_m2sPipe_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_s2mPipe_m2sPipe_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx293][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_s2mPipe_m2sPipe_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx293][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_s2mPipe_m2sPipe_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx293][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_s2mPipe_m2sPipe_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx293][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_s2mPipe_m2sPipe_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dataMemBusToTilelink_1__DOT__io_tl_d_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_d_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dataMemBusToTilelink_1__DOT__io_tl_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dataMemBusToTilelink_1__DOT__io_tl_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_riscq__DOT__FetchPlugin_logic_iBus_d_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_d_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_riscq__DOT__FetchPlugin_logic_iBus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_riscq__DOT__FetchPlugin_logic_iBus_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_riscq__DOT__FetchPlugin_logic_iBus_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dataMemBusToTilelink_1__DOT__io_tl_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dataMemBusToTilelink_1__DOT__io_tl_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_logic_rsp_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_logic_rsp_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_cmd_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_cmd_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_riscq__DOT__FetchPlugin_logic_iBus_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_d_payload_data;
    __Vtableidx308 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx308][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx308][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx308][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx308][3U];
    __Vtableidx251 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx251][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx251][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx251][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx251][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_riscq__DOT__FetchPlugin_logic_iBus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_d_payload_opcode;
    __Vtableidx287 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx287][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx287][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx287][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx287][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dataMemBusToTilelink_1__DOT__io_tl_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_d_payload_opcode;
    __Vtableidx309 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx309][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx309][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx309][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx309][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_up_bus_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_up_bus_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_up_bus_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_up_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_up_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_up_bus_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT___zz_memMapFiber_logic_factory_address 
        = (0x000fffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_a_payload_address 
                          >> 2U));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_up_bus_d_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_d_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_up_bus_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_d_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_up_bus_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_up_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_up_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_up_bus_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_up_bus_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_a_payload_source;
    __Vtableidx323 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx323][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx323][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx323][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx323][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT___zz_riscqFiber_iBus_to_iMemPortArb_up_bus_a_payload_address 
        = (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_a_payload_address 
           - (IData)(0x80000000U));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_to_dMemPortDec_up_bus_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_to_dMemPortDec_up_bus_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_to_dMemPortDec_up_bus_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_to_dMemPortDec_up_bus_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_a_payload_size;
    __Vtableidx322 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx322][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx322][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx322][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx322][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT___zz_memMapFiber_logic_factory_rspAsync_payload_opcode 
        = (1U & (- (IData)((4U == (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_a_payload_opcode)))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_to_dMemPortDec_up_bus_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_to_dMemPortDec_up_bus_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_a_payload_mask;
    __Vtableidx311 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx311][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx311][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx311][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx311][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_up_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_d_payload_opcode;
    __Vtableidx325 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx325][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx325][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx325][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx325][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_up_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_riscq__DOT__FetchPlugin_logic_iBus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_d_payload_source;
    __Vtableidx252 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx252][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx252][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx252][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx252][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_up_bus_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dataMemBusToTilelink_1__DOT__io_tl_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_d_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_to_dMemPortDec_up_bus_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_a_payload_address;
    __Vtableidx288 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx288][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx288][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx288][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx288][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_to_dMemPortDec_up_bus_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__cmd_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_cmd_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__cmd_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_cmd_payload_address;
    __Vtableidx358 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_riscq__DOT__FetchPlugin_logic_iBus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_riscq__DOT__FetchPlugin_logic_iBus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx358][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_riscq__DOT__FetchPlugin_logic_iBus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx358][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_riscq__DOT__FetchPlugin_logic_iBus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx358][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_riscq__DOT__FetchPlugin_logic_iBus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx358][3U];
    __Vtableidx366 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dataMemBusToTilelink_1__DOT__io_tl_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dataMemBusToTilelink_1__DOT__io_tl_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx366][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dataMemBusToTilelink_1__DOT__io_tl_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx366][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dataMemBusToTilelink_1__DOT__io_tl_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx366][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dataMemBusToTilelink_1__DOT__io_tl_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx366][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_down_bus_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_up_bus_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_down_bus_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_up_bus_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_1_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_up_bus_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_1_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_up_bus_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_1_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_up_bus_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_1_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_up_bus_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_2_d_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_up_bus_d_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_2_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_up_bus_d_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_2_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_up_bus_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_2_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_up_bus_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_2_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_up_bus_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_2_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_up_bus_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_down_bus_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_up_bus_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_up_bus_a_payload_address 
        = (0x00003fffU & vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT___zz_riscqFiber_iBus_to_iMemPortArb_up_bus_a_payload_address);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_to_dMemPortDec_down_bus_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_to_dMemPortDec_up_bus_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_to_dMemPortDec_down_bus_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_to_dMemPortDec_up_bus_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_to_dMemPortDec_down_bus_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_to_dMemPortDec_up_bus_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_to_dMemPortDec_down_bus_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_to_dMemPortDec_up_bus_a_payload_size;
    __Vtableidx347 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT___zz_memMapFiber_logic_factory_rspAsync_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT___zz_memMapFiber_logic_factory_rspAsync_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx347][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT___zz_memMapFiber_logic_factory_rspAsync_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx347][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT___zz_memMapFiber_logic_factory_rspAsync_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx347][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT___zz_memMapFiber_logic_factory_rspAsync_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx347][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT___zz_memMapFiber_logic_factory_rspAsync_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_to_dMemPortDec_down_bus_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_to_dMemPortDec_up_bus_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_to_dMemPortDec_down_bus_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_to_dMemPortDec_up_bus_a_payload_mask;
    __Vtableidx344 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_up_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_up_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx344][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_up_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx344][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_up_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx344][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_up_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx344][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_1_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_up_bus_d_payload_opcode;
    __Vtableidx346 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_up_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_up_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx346][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_up_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx346][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_up_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx346][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_up_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx346][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_2_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_up_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_riscq__DOT___zz_1 
        = (0x000000ffU & ((IData)(1U) << (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_riscq__DOT__FetchPlugin_logic_iBus_d_payload_source)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_riscq__DOT___zz_2 
        = (0x000000ffU & ((IData)(1U) << (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_riscq__DOT__FetchPlugin_logic_iBus_d_payload_source)));
    __Vtableidx282 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_up_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_up_bus_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx282][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_up_bus_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx282][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_up_bus_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx282][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_up_bus_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx282][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_down_bus_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_up_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dataMemBusToTilelink_1__DOT__io_dm_rsp_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dataMemBusToTilelink_1__DOT__io_tl_d_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_to_dMemPortDec_down_bus_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_to_dMemPortDec_up_bus_a_payload_address;
    __Vtableidx336 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_to_dMemPortDec_up_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_to_dMemPortDec_up_bus_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx336][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_to_dMemPortDec_up_bus_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx336][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_to_dMemPortDec_up_bus_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx336][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_to_dMemPortDec_up_bus_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx336][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_to_dMemPortDec_down_bus_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_to_dMemPortDec_up_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc_cmd_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__cmd_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc_cmd_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__cmd_payload_address;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_ups_0_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_down_bus_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_ups_0_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_down_bus_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_1_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_1_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_1_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_1_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_1_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_1_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_1_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_1_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_2_d_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_2_d_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_2_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_2_d_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_2_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_2_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_2_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_2_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_2_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_2_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_2_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_2_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_ups_0_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_down_bus_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_down_bus_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_up_bus_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_bus_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_to_dMemPortDec_down_bus_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_bus_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_to_dMemPortDec_down_bus_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_bus_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_to_dMemPortDec_down_bus_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_bus_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_to_dMemPortDec_down_bus_a_payload_size;
    __Vtableidx340 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx340][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx340][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx340][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx340][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_bus_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_to_dMemPortDec_down_bus_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_bus_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_to_dMemPortDec_down_bus_a_payload_mask;
    __Vtableidx394 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_1_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_1_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx394][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_1_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx394][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_1_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx394][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_1_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx394][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_1_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_1_d_payload_opcode;
    __Vtableidx396 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_2_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_2_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx396][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_2_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx396][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_2_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx396][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_2_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx396][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_2_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_2_d_payload_opcode;
    __Vtableidx270 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_down_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_down_bus_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx270][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_down_bus_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx270][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_down_bus_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx270][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_down_bus_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx270][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_ups_0_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_down_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dataMemBusToTilelink_1_io_dm_rsp_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dataMemBusToTilelink_1__DOT__io_dm_rsp_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_bus_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_to_dMemPortDec_down_bus_a_payload_address;
    __Vtableidx302 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_to_dMemPortDec_down_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_to_dMemPortDec_down_bus_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx302][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_to_dMemPortDec_down_bus_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx302][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_to_dMemPortDec_down_bus_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx302][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_to_dMemPortDec_down_bus_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx302][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_bus_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_to_dMemPortDec_down_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__ups_0_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_ups_0_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__ups_0_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_ups_0_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__d_arbiter__DOT__io_inputs_1_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_1_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__d_arbiter__DOT__io_inputs_1_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_1_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__d_arbiter__DOT__io_inputs_1_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_1_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__d_arbiter__DOT__io_inputs_1_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_1_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__d_arbiter__DOT__io_inputs_2_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_2_d_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__d_arbiter__DOT__io_inputs_2_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_2_d_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__d_arbiter__DOT__io_inputs_2_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_2_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__d_arbiter__DOT__io_inputs_2_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_2_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__d_arbiter__DOT__io_inputs_2_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_2_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__d_arbiter__DOT__io_inputs_2_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_2_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT___zz_ups_0_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_ups_0_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_ups_0_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_down_bus_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_up_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_bus_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_up_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_bus_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_up_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_bus_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_up_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_bus_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_up_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_bus_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_up_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_bus_a_payload_mask;
    __Vtableidx400 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_1_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_1_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx400][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_1_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx400][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_1_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx400][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_1_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx400][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__d_arbiter__DOT__io_inputs_1_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_1_d_payload_opcode;
    __Vtableidx402 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_2_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_2_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx402][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_2_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx402][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_2_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx402][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_2_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx402][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__d_arbiter__DOT__io_inputs_2_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_2_d_payload_opcode;
    __Vtableidx368 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_ups_0_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_ups_0_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx368][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_ups_0_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx368][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_ups_0_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx368][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_ups_0_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx368][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__ups_0_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_ups_0_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__postedStoreShim_1__DOT__io_down_rsp_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dataMemBusToTilelink_1_io_dm_rsp_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_up_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_bus_a_payload_address;
    __Vtableidx300 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_bus_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx300][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_bus_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx300][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_bus_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx300][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_bus_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx300][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_up_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__a_arbiter__DOT__io_inputs_0_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__ups_0_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__a_arbiter__DOT__io_inputs_0_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__ups_0_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__ups_0_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT___zz_ups_0_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__ups_0_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_ups_0_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_1_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_up_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_2_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_up_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_0_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_up_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_1_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_up_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_2_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_up_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_0_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_up_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_1_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_up_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_2_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_up_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_0_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_up_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_1_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_up_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_2_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_up_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_0_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_up_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_1_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_up_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_2_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_up_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_0_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_up_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_1_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_up_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_2_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_up_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_0_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_up_a_payload_mask;
    __Vtableidx404 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__d_arbiter__DOT__io_inputs_1_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__d_arbiter__DOT__io_inputs_1_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx404][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__d_arbiter__DOT__io_inputs_1_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx404][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__d_arbiter__DOT__io_inputs_1_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx404][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__d_arbiter__DOT__io_inputs_1_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx404][3U];
    __Vtableidx405 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__d_arbiter__DOT__io_inputs_2_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__d_arbiter__DOT__io_inputs_2_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx405][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__d_arbiter__DOT__io_inputs_2_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx405][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__d_arbiter__DOT__io_inputs_2_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx405][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__d_arbiter__DOT__io_inputs_2_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx405][3U];
    __Vtableidx374 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__ups_0_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__ups_0_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx374][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__ups_0_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx374][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__ups_0_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx374][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__ups_0_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx374][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__a_arbiter__DOT__io_inputs_0_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__ups_0_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__postedStoreShim_1__DOT__io_up_rsp_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__postedStoreShim_1__DOT__io_down_rsp_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT___zz_downs_1_a_payload_address 
        = (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_up_a_payload_address 
           - (IData)(0x00010000U));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT___zz_downs_2_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_up_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT___zz_downs_0_a_payload_address 
        = (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_up_a_payload_address 
           - (IData)(0x80000000U));
    __Vtableidx389 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_up_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_up_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx389][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_up_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx389][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_up_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx389][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_up_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx389][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_1_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_up_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_2_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_up_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_0_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_up_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__a_key 
        = (((QData)((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_up_a_payload_opcode)) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_up_a_payload_address)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__a_arbiter__DOT__io_inputs_0_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__ups_0_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__a_arbiter__DOT__io_inputs_0_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__ups_0_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_1_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_1_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_2_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_2_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_0_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_0_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_1_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_1_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_2_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_2_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_0_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_0_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_1_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_1_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_2_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_2_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_0_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_0_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_1_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_1_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_2_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_2_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_0_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_0_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_1_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_1_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_2_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_2_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_0_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_0_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_1_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_1_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_2_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_2_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_0_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_0_a_payload_mask;
    __Vtableidx378 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__a_arbiter__DOT__io_inputs_0_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__a_arbiter__DOT__io_inputs_0_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx378][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__a_arbiter__DOT__io_inputs_0_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx378][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__a_arbiter__DOT__io_inputs_0_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx378][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__a_arbiter__DOT__io_inputs_0_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx378][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__postedStoreShim_1_io_up_rsp_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__postedStoreShim_1__DOT__io_up_rsp_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_1_a_payload_address 
        = (0x0003ffffU & vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT___zz_downs_1_a_payload_address);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_2_a_payload_address 
        = (0x003fffffU & vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT___zz_downs_2_a_payload_address);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_0_a_payload_address 
        = (0x00003fffU & vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT___zz_downs_0_a_payload_address);
    __Vtableidx399 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_1_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_1_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx399][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_1_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx399][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_1_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx399][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_1_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx399][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_1_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_1_a_payload_opcode;
    __Vtableidx401 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_2_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_2_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx401][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_2_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx401][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_2_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx401][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_2_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx401][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_2_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_2_a_payload_opcode;
    __Vtableidx397 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_0_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_0_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx397][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_0_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx397][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_0_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx397][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_0_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx397][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_0_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_0_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT___zz_a_logic_1_hit 
        = ((0x0000000000040000ULL == (0x0000000000040000ULL 
                                      & vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__a_key)) 
           | ((0x0000000000020000ULL == (0x0000000000020000ULL 
                                         & vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__a_key)) 
              | (0x0000000000010000ULL == (0x0000000000010000ULL 
                                           & vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__a_key))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT___zz_a_logic_2_hit 
        = (0ULL == (0x0000000080070000ULL & vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__a_key));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT___zz_a_logic_0_hit 
        = (0x0000000080000000ULL == (0x0000000080000000ULL 
                                     & vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__a_key));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core_io_downs_1_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_1_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core_io_downs_2_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_2_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core_io_downs_0_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_0_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core_io_downs_1_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_1_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core_io_downs_2_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_2_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core_io_downs_0_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_0_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core_io_downs_1_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_1_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core_io_downs_2_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_2_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core_io_downs_0_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_0_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core_io_downs_1_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_1_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core_io_downs_2_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_2_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core_io_downs_0_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_0_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core_io_downs_1_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_1_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core_io_downs_2_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_2_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core_io_downs_0_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_0_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core_io_downs_1_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_1_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core_io_downs_2_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_2_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core_io_downs_0_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_0_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_riscq__DOT__LsuPlugin_logic_dBus_rsp_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__postedStoreShim_1_io_up_rsp_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_1_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_1_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_2_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_2_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_0_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_0_a_payload_address;
    __Vtableidx393 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_1_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_1_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx393][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_1_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx393][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_1_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx393][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_1_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx393][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core_io_downs_1_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_1_a_payload_opcode;
    __Vtableidx395 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_2_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_2_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx395][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_2_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx395][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_2_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx395][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_2_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx395][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core_io_downs_2_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_2_a_payload_opcode;
    __Vtableidx391 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_0_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_0_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx391][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_0_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx391][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_0_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx391][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_0_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx391][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core_io_downs_0_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_0_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__a_logic_1_hit 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT___zz_a_logic_1_hit;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__a_logic_2_hit 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT___zz_a_logic_2_hit;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__a_logic_0_hit 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT___zz_a_logic_0_hit;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_up_bus_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core_io_downs_1_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_up_bus_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core_io_downs_2_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_up_bus_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core_io_downs_0_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_up_bus_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core_io_downs_1_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_up_bus_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core_io_downs_2_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_up_bus_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core_io_downs_0_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_up_bus_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core_io_downs_1_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_up_bus_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core_io_downs_2_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_up_bus_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core_io_downs_0_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_up_bus_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core_io_downs_1_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_up_bus_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core_io_downs_2_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_up_bus_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core_io_downs_0_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_up_bus_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core_io_downs_1_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_up_bus_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core_io_downs_2_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_up_bus_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core_io_downs_0_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_up_bus_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core_io_downs_1_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_up_bus_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core_io_downs_2_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_up_bus_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core_io_downs_0_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core_io_downs_1_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_1_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core_io_downs_2_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_2_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core_io_downs_0_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_0_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_up_bus_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core_io_downs_1_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_up_bus_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core_io_downs_2_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_up_bus_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core_io_downs_0_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__a_miss 
        = (1U & (~ ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__a_logic_2_hit) 
                    | ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__a_logic_0_hit) 
                       | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__a_logic_1_hit)))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_up_bus_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_up_bus_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_down_bus_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_up_bus_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_up_bus_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_up_bus_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_down_bus_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_up_bus_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_up_bus_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_up_bus_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_down_bus_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_up_bus_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_up_bus_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_up_bus_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_down_bus_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_up_bus_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_up_bus_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_up_bus_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_down_bus_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_up_bus_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_up_bus_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_up_bus_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_down_bus_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_up_bus_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_up_bus_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core_io_downs_1_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_up_bus_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core_io_downs_2_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_up_bus_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core_io_downs_0_a_payload_address;
    __Vtableidx343 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_up_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_up_bus_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx343][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_up_bus_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx343][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_up_bus_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx343][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_up_bus_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx343][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_up_bus_a_payload_opcode;
    __Vtableidx345 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_up_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_up_bus_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx345][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_up_bus_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx345][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_up_bus_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx345][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_up_bus_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx345][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_up_bus_a_payload_opcode;
    __Vtableidx341 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_up_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_up_bus_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx341][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_up_bus_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx341][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_up_bus_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx341][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_up_bus_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx341][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_down_bus_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_up_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_up_bus_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_down_bus_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_up_bus_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_down_bus_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_up_bus_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_down_bus_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_up_bus_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_down_bus_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_up_bus_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_down_bus_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_up_bus_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_down_bus_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_up_bus_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_up_bus_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_down_bus_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_up_bus_a_payload_address;
    __Vtableidx310 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx310][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx310][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx310][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx310][3U];
    __Vtableidx324 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx324][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx324][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx324][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx324][3U];
    __Vtableidx306 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_down_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_down_bus_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx306][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_down_bus_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx306][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_down_bus_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx306][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_down_bus_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx306][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_up_bus_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_down_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT__io_up_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_up_bus_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT__io_up_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_up_bus_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT__io_up_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_up_bus_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT__io_up_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_up_bus_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_up_bus_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_down_bus_a_payload_address;
    __Vtableidx304 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_up_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_up_bus_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx304][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_up_bus_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx304][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_up_bus_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx304][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_up_bus_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx304][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT__io_up_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_up_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT__io_port_wdata 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT__io_up_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT__io_port_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT__io_up_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT__io_up_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_up_bus_a_payload_address;
    __Vtableidx385 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT__io_up_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT__io_up_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx385][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT__io_up_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx385][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT__io_up_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx385][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT__io_up_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx385][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic_io_port_wdata 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT__io_port_wdata;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic_io_port_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT__io_port_mask;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT__io_port_address 
        = (0x00000fffU & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT__io_up_a_payload_address) 
                          >> 2U));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__io_port0_wdata 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic_io_port_wdata;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__io_port0_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic_io_port_mask;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic_io_port_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT__io_port_address;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__io_port0_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic_io_port_address;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1_addra 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__io_port0_address;
}

void Vtop___024root___nba_sequent__TOP__76(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__76\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__reset_asyncAssertSyncDeassert_buffercc__DOT__buffers_1 
        = ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__reset_asyncAssertSyncDeassert_buffercc__DOT__hostRst) 
           || (IData)(vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__reset_asyncAssertSyncDeassert_buffercc__DOT__buffers_0));
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__reset_asyncAssertSyncDeassert_buffercc__DOT__io_dataOut 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__reset_asyncAssertSyncDeassert_buffercc__DOT__buffers_1;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__reset_asyncAssertSyncDeassert_buffercc__DOT__buffers_0 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__reset_asyncAssertSyncDeassert_buffercc__DOT__hostRst;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__reset_asyncAssertSyncDeassert_buffercc_io_dataOut 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__reset_asyncAssertSyncDeassert_buffercc__DOT__io_dataOut;
}

void Vtop___024root___nba_sequent__TOP__77(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__77\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc_toplevel_dspRst_asyncAssertSyncDeassert_buffercc__DOT__buffers_1 
        = ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc_toplevel_dspRst_asyncAssertSyncDeassert_buffercc__DOT__dspRst) 
           || (IData)(vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc_toplevel_dspRst_asyncAssertSyncDeassert_buffercc__DOT__buffers_0));
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc_toplevel_dspRst_asyncAssertSyncDeassert_buffercc__DOT__io_dataOut 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc_toplevel_dspRst_asyncAssertSyncDeassert_buffercc__DOT__buffers_1;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc_toplevel_dspRst_asyncAssertSyncDeassert_buffercc__DOT__buffers_0 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc_toplevel_dspRst_asyncAssertSyncDeassert_buffercc__DOT__dspRst;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc_toplevel_dspRst_asyncAssertSyncDeassert_buffercc_io_dataOut 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc_toplevel_dspRst_asyncAssertSyncDeassert_buffercc__DOT__io_dataOut;
}

void Vtop___024root___nba_sequent__TOP__78(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__78\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __VdlyVal__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem__v0;
    __VdlyVal__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem__v0 = 0;
    CData/*4:0*/ __VdlyLsb__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem__v0;
    __VdlyLsb__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem__v0 = 0;
    SData/*11:0*/ __VdlyDim0__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem__v0;
    __VdlyDim0__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem__v0 = 0;
    IData/*31:0*/ __VdlyMask__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem__v0;
    __VdlyMask__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem__v0 = 0;
    IData/*31:0*/ __VdlyElem__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem__v0;
    __VdlyElem__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlyVal__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_en_pipe_rega__v0;
    __VdlyVal__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_en_pipe_rega__v0 = 0;
    CData/*0:0*/ __VdlyVal__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_en_pipe_rega__v1;
    __VdlyVal__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_en_pipe_rega__v1 = 0;
    CData/*0:0*/ __VdlyDim0__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_en_pipe_rega__v1;
    __VdlyDim0__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_en_pipe_rega__v1 = 0;
    IData/*31:0*/ __VdlyVal__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_pipe_rega__v0;
    __VdlyVal__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_pipe_rega__v0 = 0;
    IData/*31:0*/ __VdlyVal__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_pipe_rega__v1;
    __VdlyVal__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_pipe_rega__v1 = 0;
    CData/*0:0*/ __VdlyDim0__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_pipe_rega__v1;
    __VdlyDim0__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_pipe_rega__v1 = 0;
    CData/*7:0*/ __VdlyVal__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem__v1;
    __VdlyVal__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem__v1 = 0;
    CData/*4:0*/ __VdlyLsb__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem__v1;
    __VdlyLsb__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem__v1 = 0;
    SData/*11:0*/ __VdlyDim0__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem__v1;
    __VdlyDim0__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem__v1 = 0;
    IData/*31:0*/ __VdlyMask__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem__v1;
    __VdlyMask__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem__v1 = 0;
    IData/*31:0*/ __VdlyElem__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem__v1;
    __VdlyElem__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlyVal__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_en_pipe_regb__v0;
    __VdlyVal__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_en_pipe_regb__v0 = 0;
    CData/*0:0*/ __VdlyVal__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_en_pipe_regb__v1;
    __VdlyVal__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_en_pipe_regb__v1 = 0;
    CData/*0:0*/ __VdlyDim0__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_en_pipe_regb__v1;
    __VdlyDim0__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_en_pipe_regb__v1 = 0;
    IData/*31:0*/ __VdlyVal__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_pipe_regb__v0;
    __VdlyVal__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_pipe_regb__v0 = 0;
    IData/*31:0*/ __VdlyVal__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_pipe_regb__v1;
    __VdlyVal__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_pipe_regb__v1 = 0;
    CData/*0:0*/ __VdlyDim0__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_pipe_regb__v1;
    __VdlyDim0__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_pipe_regb__v1 = 0;
    // Body
    __VdlyVal__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_en_pipe_rega__v0 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_ena;
    vlSelfRef.__VdlyCommitQueuePulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_en_pipe_rega.enqueue(__VdlyVal__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_en_pipe_rega__v0, 0U);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__i = 0U;
    while (VL_GTS_III(32, 1U, vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__i)) {
        __VdlyVal__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_en_pipe_rega__v1 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_en_pipe_rega
            [(1U & vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__i)];
        __VdlyDim0__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_en_pipe_rega__v1 
            = (1U & ((IData)(1U) + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__i));
        vlSelfRef.__VdlyCommitQueuePulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_en_pipe_rega.enqueue(__VdlyVal__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_en_pipe_rega__v1, (IData)(__VdlyDim0__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_en_pipe_rega__v1));
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__i 
            = ((IData)(1U) + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__i);
    }
    __VdlyVal__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_en_pipe_regb__v0 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_enb;
    vlSelfRef.__VdlyCommitQueuePulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_en_pipe_regb.enqueue(__VdlyVal__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_en_pipe_regb__v0, 0U);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__i = 0U;
    while (VL_GTS_III(32, 1U, vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__i)) {
        __VdlyVal__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_en_pipe_regb__v1 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_en_pipe_regb
            [(1U & vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__i)];
        __VdlyDim0__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_en_pipe_regb__v1 
            = (1U & ((IData)(1U) + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__i));
        vlSelfRef.__VdlyCommitQueuePulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_en_pipe_regb.enqueue(__VdlyVal__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_en_pipe_regb__v1, (IData)(__VdlyDim0__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_en_pipe_regb__v1));
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__i 
            = ((IData)(1U) + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__i);
    }
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__i = 0U;
    while (VL_GTS_III(32, 0U, vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__i)) {
        if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_en_pipe_rega
            [(1U & ((IData)(1U) + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__i))]) {
            vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT____Vlvbound_ha0967469__0 
                = ((0U >= (1U & vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__i))
                    ? vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_pipe_rega
                   [(1U & vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__i)]
                    : 0U);
            if (VL_LIKELY(((0U >= (1U & ((IData)(1U) 
                                         + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__i)))))) {
                __VdlyVal__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_pipe_rega__v1 
                    = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT____Vlvbound_ha0967469__0;
                __VdlyDim0__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_pipe_rega__v1 
                    = (1U & ((IData)(1U) + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__i));
                vlSelfRef.__VdlyCommitQueuePulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_pipe_rega.enqueue(__VdlyVal__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_pipe_rega__v1, (IData)(__VdlyDim0__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_pipe_rega__v1));
            }
        }
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__i 
            = ((IData)(1U) + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__i);
    }
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__i = 0U;
    while (VL_GTS_III(32, 0U, vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__i)) {
        if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_en_pipe_regb
            [(1U & ((IData)(1U) + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__i))]) {
            vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT____Vlvbound_hbe839ebc__0 
                = ((0U >= (1U & vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__i))
                    ? vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_pipe_regb
                   [(1U & vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__i)]
                    : 0U);
            if (VL_LIKELY(((0U >= (1U & ((IData)(1U) 
                                         + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__i)))))) {
                __VdlyVal__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_pipe_regb__v1 
                    = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT____Vlvbound_hbe839ebc__0;
                __VdlyDim0__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_pipe_regb__v1 
                    = (1U & ((IData)(1U) + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__i));
                vlSelfRef.__VdlyCommitQueuePulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_pipe_regb.enqueue(__VdlyVal__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_pipe_regb__v1, (IData)(__VdlyDim0__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_pipe_regb__v1));
            }
        }
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__i 
            = ((IData)(1U) + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__i);
    }
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_en_pipe_rega[0U]) {
        __VdlyVal__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_pipe_rega__v0 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__memrega;
        vlSelfRef.__VdlyCommitQueuePulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_pipe_rega.enqueue(__VdlyVal__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_pipe_rega__v0, 0U);
    }
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_en_pipe_regb[0U]) {
        __VdlyVal__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_pipe_regb__v0 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__memregb;
        vlSelfRef.__VdlyCommitQueuePulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_pipe_regb.enqueue(__VdlyVal__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_pipe_regb__v0, 0U);
    }
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_ena) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__i = 0U;
        while (VL_GTS_III(32, 4U, vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__i)) {
            if ((1U & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__wea) 
                       >> (3U & vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__i)))) {
                __VdlyVal__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem__v0 
                    = (0x000000ffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__dina 
                                      >> (0x0000001fU 
                                          & VL_MULS_III(32, (IData)(8U), vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__i))));
                __VdlyLsb__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem__v0 
                    = (0x0000001fU & VL_MULS_III(32, (IData)(8U), vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__i));
                __VdlyDim0__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem__v0 
                    = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__addra;
                __VdlyMask__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem__v0 = 0U;
                __VdlyMask__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem__v0 
                    = (__VdlyMask__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem__v0 
                       | (0x00000000ffffffffULL & ((IData)(0xffU) 
                                                   << (IData)(__VdlyLsb__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem__v0))));
                __VdlyElem__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem__v0 = 0U;
                __VdlyElem__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem__v0 
                    = (((~ ((IData)(0x000000ffU) << (IData)(__VdlyLsb__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem__v0))) 
                        & __VdlyElem__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem__v0) 
                       | (0x00000000ffffffffULL & ((IData)(__VdlyVal__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem__v0) 
                                                   << (IData)(__VdlyLsb__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem__v0))));
                vlSelfRef.__VdlyCommitQueuePulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem.enqueue(__VdlyElem__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem__v0, __VdlyMask__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem__v0, (IData)(__VdlyDim0__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem__v0));
            }
            vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__i 
                = ((IData)(1U) + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__i);
        }
    }
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_enb) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__i = 0U;
        while (VL_GTS_III(32, 4U, vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__i)) {
            if ((1U & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__web) 
                       >> (3U & vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__i)))) {
                __VdlyVal__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem__v1 
                    = (0x000000ffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__dinb 
                                      >> (0x0000001fU 
                                          & VL_MULS_III(32, (IData)(8U), vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__i))));
                __VdlyLsb__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem__v1 
                    = (0x0000001fU & VL_MULS_III(32, (IData)(8U), vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__i));
                __VdlyDim0__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem__v1 
                    = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__addrb;
                __VdlyMask__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem__v1 = 0U;
                __VdlyMask__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem__v1 
                    = (__VdlyMask__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem__v1 
                       | (0x00000000ffffffffULL & ((IData)(0xffU) 
                                                   << (IData)(__VdlyLsb__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem__v1))));
                __VdlyElem__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem__v1 = 0U;
                __VdlyElem__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem__v1 
                    = (((~ ((IData)(0x000000ffU) << (IData)(__VdlyLsb__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem__v1))) 
                        & __VdlyElem__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem__v1) 
                       | (0x00000000ffffffffULL & ((IData)(__VdlyVal__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem__v1) 
                                                   << (IData)(__VdlyLsb__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem__v1))));
                vlSelfRef.__VdlyCommitQueuePulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem.enqueue(__VdlyElem__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem__v1, __VdlyMask__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem__v1, (IData)(__VdlyDim0__PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem__v1));
            }
            vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__i 
                = ((IData)(1U) + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__i);
        }
    }
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_enb) {
        if ((1U & (~ (0U != (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__web))))) {
            vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__memregb 
                = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem
                [vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__addrb];
        }
    }
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_ena) {
        if ((1U & (~ (0U != (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__wea))))) {
            vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__memrega 
                = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem
                [vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__addra];
        }
    }
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_en_pipe_rega[1U]) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__douta 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_pipe_rega[0U];
    }
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_en_pipe_regb[1U]) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__doutb 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_pipe_regb[0U];
    }
    vlSelfRef.__VdlyCommitQueuePulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_pipe_rega.commit(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_pipe_rega);
    vlSelfRef.__VdlyCommitQueuePulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_en_pipe_rega.commit(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_en_pipe_rega);
    vlSelfRef.__VdlyCommitQueuePulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_pipe_regb.commit(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_pipe_regb);
    vlSelfRef.__VdlyCommitQueuePulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_en_pipe_regb.commit(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem_en_pipe_regb);
    vlSelfRef.__VdlyCommitQueuePulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem.commit(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__mem);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1_douta 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__douta;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1_doutb 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1__DOT__doutb;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__io_port0_rdata 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1_douta;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__io_port1_rdata 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__uram_1_doutb;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem_io_port0_rdata 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__io_port0_rdata;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem_io_port1_rdata 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem__DOT__io_port1_rdata;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT__io_port_rdata 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem_io_port0_rdata;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_thread_logic__DOT__io_port_rdata 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__mem_io_port1_rdata;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT__io_up_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT__io_port_rdata;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_thread_logic__DOT__io_up_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_thread_logic__DOT__io_port_rdata;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic_io_up_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT__io_up_d_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_thread_logic_io_up_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_thread_logic__DOT__io_up_d_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_up_bus_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic_io_up_d_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_up_bus_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_thread_logic_io_up_d_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_down_bus_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_up_bus_d_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_to_iBusFiber_up_down_bus_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_up_bus_d_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_up_bus_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_down_bus_d_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_to_iBusFiber_up_up_bus_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_to_iBusFiber_up_down_bus_d_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_0_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_up_bus_d_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_noDecoder_toDown_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_to_iBusFiber_up_up_bus_d_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_0_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_0_d_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_bus_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_noDecoder_toDown_d_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__d_arbiter__DOT__io_inputs_0_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_0_d_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_down_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_bus_d_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__ups_0_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_down_d_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__ups_1_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_down_d_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_ups_0_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__ups_0_d_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_ups_1_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__ups_1_d_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core_io_ups_0_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_ups_0_d_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core_io_ups_1_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_ups_1_d_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_down_bus_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core_io_ups_0_d_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iLoad_node_to_iMemPortArb_down_bus_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core_io_ups_1_d_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_up_bus_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_down_bus_d_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iLoad_node_to_iMemPortArb_up_bus_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iLoad_node_to_iMemPortArb_down_bus_d_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_up_bus_d_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iLoad_node_noDecoder_toDown_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iLoad_node_to_iMemPortArb_up_bus_d_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iLoad_node_bus_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iLoad_node_noDecoder_toDown_d_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc_iLoad_node_bus_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iLoad_node_bus_d_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_iMemLoad_up_bus_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc_iLoad_node_bus_d_payload_data;
}

void Vtop___024root___nba_sequent__TOP__79(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__79\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__reset_synchronized) {
        vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_ptrToPush = 0U;
        vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_addressGen_rValid = 0U;
        vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_ptrToOccupancy = 0U;
        vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_popPtr = 0U;
    } else {
        if (vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_readArbitration_fire) {
            vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_ptrToPush 
                = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_popPtrGray;
            vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_ptrToOccupancy 
                = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_popPtr;
        }
        if (vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_addressGen_ready) {
            vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_addressGen_rValid 
                = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_addressGen_valid;
        }
        if (vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_addressGen_fire) {
            vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_popPtr 
                = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_popPtrPlus;
        }
    }
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popToPushGray 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_ptrToPush;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_readArbitration_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_addressGen_rValid;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__when_Stream_l477 
        = (1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_readArbitration_valid)));
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_readArbitration_translated_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_readArbitration_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__io_pop_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_readArbitration_translated_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_popPtrPlus 
        = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_popPtr)));
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_addressGen_payload 
        = (7U & (IData)(vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_popPtr));
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT___zz_popCC_popPtrGray 
        = ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_popPtr) 
           >> 1U);
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1_io_pop_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__io_pop_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_addressGen_toFlowFire_payload 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_addressGen_payload;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_popPtrGray 
        = ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT___zz_popCC_popPtrGray) 
           ^ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_popPtr));
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_output_a_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1_io_pop_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_readPort_cmd_payload 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_addressGen_toFlowFire_payload;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc_io_output_a_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_output_a_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_down_bus_a_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc_io_output_a_valid;
}

void Vtop___024root___nba_sequent__TOP__80(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__80\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc_toplevel_dspRst_synchronized) {
        vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_ptrToPush = 0U;
        vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_addressGen_rValid = 0U;
        vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_ptrToOccupancy = 0U;
        vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_popPtr = 0U;
    } else {
        if (vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_readArbitration_fire) {
            vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_ptrToPush 
                = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_popPtrGray;
            vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_ptrToOccupancy 
                = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_popPtr;
        }
        if (vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_addressGen_ready) {
            vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_addressGen_rValid 
                = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_addressGen_valid;
        }
        if (vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_addressGen_fire) {
            vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_popPtr 
                = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_popPtrPlus;
        }
    }
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popToPushGray 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_ptrToPush;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_readArbitration_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_addressGen_rValid;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__when_Stream_l477 
        = (1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_readArbitration_valid)));
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_readArbitration_translated_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_readArbitration_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__io_pop_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_readArbitration_translated_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_popPtrPlus 
        = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_popPtr)));
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_addressGen_payload 
        = (7U & (IData)(vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_popPtr));
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT___zz_popCC_popPtrGray 
        = ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_popPtr) 
           >> 1U);
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1_io_pop_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__io_pop_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_addressGen_toFlowFire_payload 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_addressGen_payload;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_popPtrGray 
        = ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT___zz_popCC_popPtrGray) 
           ^ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_popPtr));
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_input_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1_io_pop_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_readPort_cmd_payload 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_addressGen_toFlowFire_payload;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc_io_input_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_input_d_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_up_bus_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc_io_input_d_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_noDecoder_toDown_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_up_bus_d_valid;
}

void Vtop___024root___nba_sequent__TOP__81(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__81\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.PulseTableSoc__DOT__riscqResetHostCd_buffercc__DOT__buffers_2 
        = vlSelfRef.PulseTableSoc__DOT__riscqResetHostCd_buffercc__DOT__buffers_1;
    vlSelfRef.PulseTableSoc__DOT__riscqResetHostCd_buffercc__DOT__io_dataOut 
        = vlSelfRef.PulseTableSoc__DOT__riscqResetHostCd_buffercc__DOT__buffers_2;
    vlSelfRef.PulseTableSoc__DOT__riscqResetHostCd_buffercc__DOT__buffers_1 
        = vlSelfRef.PulseTableSoc__DOT__riscqResetHostCd_buffercc__DOT__buffers_0;
    vlSelfRef.PulseTableSoc__DOT__riscqResetHostCd_buffercc_io_dataOut 
        = vlSelfRef.PulseTableSoc__DOT__riscqResetHostCd_buffercc__DOT__io_dataOut;
    vlSelfRef.PulseTableSoc__DOT__bufferedReset = vlSelfRef.PulseTableSoc__DOT__riscqResetHostCd_buffercc_io_dataOut;
    vlSelfRef.PulseTableSoc__DOT__riscqResetHostCd_buffercc__DOT__buffers_0 
        = vlSelfRef.PulseTableSoc__DOT__riscqResetHostCd_buffercc__DOT__io_dataIn;
}

void Vtop___024root___nba_sequent__TOP__82(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__82\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__hostRst) {
        vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__pushCC_pushPtr = 0U;
        vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__pushCC_pushPtrGray = 0U;
    } else if (vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__io_push_fire) {
        vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__pushCC_pushPtr 
            = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__pushCC_pushPtrPlus;
        vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__pushCC_pushPtrGray 
            = ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT___zz_pushCC_pushPtrGray) 
               ^ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__pushCC_pushPtrPlus));
    }
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT___zz_ram_port 
        = (7U & (IData)(vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__pushCC_pushPtr));
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__pushCC_pushPtrPlus 
        = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__pushCC_pushPtr)));
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__pushToPopGray 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__pushCC_pushPtrGray;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT___zz_pushCC_pushPtrGray 
        = ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__pushCC_pushPtrPlus) 
           >> 1U);
}

void Vtop___024root___nba_sequent__TOP__83(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__83\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__dspRst) {
        vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__pushCC_pushPtr = 0U;
        vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__pushCC_pushPtrGray = 0U;
    } else if (vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__io_push_fire) {
        vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__pushCC_pushPtr 
            = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__pushCC_pushPtrPlus;
        vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__pushCC_pushPtrGray 
            = ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT___zz_pushCC_pushPtrGray) 
               ^ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__pushCC_pushPtrPlus));
    }
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT___zz_ram_port 
        = (7U & (IData)(vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__pushCC_pushPtr));
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__pushCC_pushPtrPlus 
        = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__pushCC_pushPtr)));
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__pushToPopGray 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__pushCC_pushPtrGray;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT___zz_pushCC_pushPtrGray 
        = ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__pushCC_pushPtrPlus) 
           >> 1U);
}

void Vtop___024root___nba_sequent__TOP__84(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__84\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__dspRst) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__resValid = 0U;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__inWin_regNext = 0U;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__inWin_regNext_1 = 0U;
    } else {
        if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__winStart) {
            vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__resValid = 0U;
        }
        if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__winEnd) {
            vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__resValid = 1U;
        }
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__inWin_regNext 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__inWin;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__inWin_regNext_1 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__inWin;
    }
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__io_carrier_valid_delay_6_1 
        = ((1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__dspRst))) 
           && (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__io_carrier_valid_delay_5_1));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__io_res_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__resValid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__io_demodData_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__io_carrier_valid_delay_6_1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__io_carrier_valid_delay_5_1 
        = ((1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__dspRst))) 
           && (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__io_carrier_valid_delay_4_1));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__inWin 
        = ((1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__dspRst))) 
           && (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__io_carrier_valid_delay_8));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd_io_res_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__io_res_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd_io_demodData_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__io_demodData_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_upSrc_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd_io_res_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__io_carrier_valid_delay_4_1 
        = ((1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__dspRst))) 
           && (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__io_carrier_valid_delay_3_1));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__winStart 
        = ((~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__inWin_regNext)) 
           & (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__inWin));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__winEnd 
        = ((~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__inWin)) 
           & (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__inWin_regNext_1));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__io_carrier_valid_delay_8 
        = ((1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__dspRst))) 
           && (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__io_carrier_valid_delay_7));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__io_carrier_valid_delay_3_1 
        = ((1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__dspRst))) 
           && (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__io_carrier_valid_delay_2_1));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__io_carrier_valid_delay_7 
        = ((1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__dspRst))) 
           && (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__io_carrier_valid_delay_6));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__io_carrier_valid_delay_2_1 
        = ((1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__dspRst))) 
           && (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__io_carrier_valid_delay_1_1));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__io_carrier_valid_delay_6 
        = ((1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__dspRst))) 
           && (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__io_carrier_valid_delay_5));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__io_carrier_valid_delay_1_1 
        = ((1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__dspRst))) 
           && (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__io_carrier_valid));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__io_carrier_valid_delay_5 
        = ((1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__dspRst))) 
           && (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__io_carrier_valid_delay_4));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__io_carrier_valid_delay_4 
        = ((1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__dspRst))) 
           && (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__io_carrier_valid_delay_3));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__io_carrier_valid_delay_3 
        = ((1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__dspRst))) 
           && (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__io_carrier_valid_delay_2));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__io_carrier_valid_delay_2 
        = ((1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__dspRst))) 
           && (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__io_carrier_valid_delay_1));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__io_carrier_valid_delay_1 
        = ((1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__dspRst))) 
           && (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__io_carrier_valid));
}

void Vtop___024root___nba_sequent__TOP__85(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__85\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ__DOT___zz_io_pop_valid 
        = ((1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ__DOT__dspRst))) 
           && ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ__DOT__logic_fifo_io_pop_valid_regNext) 
               & (~ (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ__DOT___zz___05Fzz_io_pop_valid 
                     >> 0x1fU))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ__DOT__io_pop_valid_regNext_regNext 
        = ((1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ__DOT__dspRst))) 
           && (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ__DOT__io_pop_valid_regNext));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ__DOT__logic_fifo_io_pop_valid_regNext 
        = ((1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ__DOT__dspRst))) 
           && (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ__DOT__logic_fifo_io_pop_valid));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ__DOT__io_pop_valid_regNext 
        = ((1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ__DOT__dspRst))) 
           && (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ__DOT__io_pop_valid));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ__DOT__io_pop_valid 
        = ((~ ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ__DOT__io_pop_valid_regNext) 
               | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ__DOT__io_pop_valid_regNext_regNext))) 
           & (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ__DOT___zz_io_pop_valid));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ_io_pop_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ__DOT__io_pop_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ__DOT__logic_fifo__DOT__io_pop_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ__DOT__io_pop_valid;
}

void Vtop___024root___nba_sequent__TOP__86(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__86\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ__DOT___zz_io_pop_valid 
        = ((1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ__DOT__dspRst))) 
           && ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ__DOT__logic_fifo_io_pop_valid_regNext) 
               & (~ (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ__DOT___zz___05Fzz_io_pop_valid 
                     >> 0x1fU))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ__DOT__io_pop_valid_regNext_regNext 
        = ((1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ__DOT__dspRst))) 
           && (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ__DOT__io_pop_valid_regNext));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ__DOT__logic_fifo_io_pop_valid_regNext 
        = ((1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ__DOT__dspRst))) 
           && (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ__DOT__logic_fifo_io_pop_valid));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ__DOT__io_pop_valid_regNext 
        = ((1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ__DOT__dspRst))) 
           && (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ__DOT__io_pop_valid));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ__DOT__io_pop_valid 
        = ((~ ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ__DOT__io_pop_valid_regNext) 
               | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ__DOT__io_pop_valid_regNext_regNext))) 
           & (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ__DOT___zz_io_pop_valid));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ_io_pop_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ__DOT__io_pop_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ__DOT__logic_fifo__DOT__io_pop_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ__DOT__io_pop_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__io_amp_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ_io_pop_valid;
}

void Vtop___024root___nba_sequent__TOP__87(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__87\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ__DOT___zz_io_pop_valid 
        = ((1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ__DOT__dspRst))) 
           && ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ__DOT__logic_fifo_io_pop_valid_regNext) 
               & (~ (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ__DOT___zz___05Fzz_io_pop_valid 
                     >> 0x1fU))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ__DOT__io_pop_valid_regNext_regNext 
        = ((1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ__DOT__dspRst))) 
           && (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ__DOT__io_pop_valid_regNext));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ__DOT__logic_fifo_io_pop_valid_regNext 
        = ((1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ__DOT__dspRst))) 
           && (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ__DOT__logic_fifo_io_pop_valid));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ__DOT__io_pop_valid_regNext 
        = ((1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ__DOT__dspRst))) 
           && (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ__DOT__io_pop_valid));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ__DOT__io_pop_valid 
        = ((~ ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ__DOT__io_pop_valid_regNext) 
               | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ__DOT__io_pop_valid_regNext_regNext))) 
           & (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ__DOT___zz_io_pop_valid));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ_io_pop_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ__DOT__io_pop_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ__DOT__logic_fifo__DOT__io_pop_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ__DOT__io_pop_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__io_phase_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ_io_pop_valid;
}

void Vtop___024root___nba_sequent__TOP__88(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__88\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ__DOT___zz_io_pop_valid 
        = ((1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ__DOT__dspRst))) 
           && ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ__DOT__logic_fifo_io_pop_valid_regNext) 
               & (~ (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ__DOT___zz___05Fzz_io_pop_valid 
                     >> 0x1fU))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ__DOT__io_pop_valid_regNext_regNext 
        = ((1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ__DOT__dspRst))) 
           && (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ__DOT__io_pop_valid_regNext));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ__DOT__logic_fifo_io_pop_valid_regNext 
        = ((1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ__DOT__dspRst))) 
           && (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ__DOT__logic_fifo_io_pop_valid));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ__DOT__io_pop_valid_regNext 
        = ((1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ__DOT__dspRst))) 
           && (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ__DOT__io_pop_valid));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ__DOT__io_pop_valid 
        = ((~ ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ__DOT__io_pop_valid_regNext) 
               | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ__DOT__io_pop_valid_regNext_regNext))) 
           & (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ__DOT___zz_io_pop_valid));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ_io_pop_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ__DOT__io_pop_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ__DOT__logic_fifo__DOT__io_pop_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ__DOT__io_pop_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__io_freq_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ_io_pop_valid;
}

void Vtop___024root___nba_sequent__TOP__89(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__89\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ__DOT___zz_io_pop_valid 
        = ((1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ__DOT__dspRst))) 
           && ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ__DOT__logic_fifo_io_pop_valid_regNext) 
               & (~ (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ__DOT___zz___05Fzz_io_pop_valid 
                     >> 0x1fU))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ__DOT__io_pop_valid_regNext_regNext 
        = ((1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ__DOT__dspRst))) 
           && (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ__DOT__io_pop_valid_regNext));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ__DOT__logic_fifo_io_pop_valid_regNext 
        = ((1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ__DOT__dspRst))) 
           && (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ__DOT__logic_fifo_io_pop_valid));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ__DOT__io_pop_valid_regNext 
        = ((1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ__DOT__dspRst))) 
           && (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ__DOT__io_pop_valid));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ__DOT__io_pop_valid 
        = ((~ ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ__DOT__io_pop_valid_regNext) 
               | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ__DOT__io_pop_valid_regNext_regNext))) 
           & (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ__DOT___zz_io_pop_valid));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ_io_pop_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ__DOT__io_pop_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ__DOT__logic_fifo__DOT__io_pop_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ__DOT__io_pop_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__io_freq_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ_io_pop_valid;
}

void Vtop___024root___nba_sequent__TOP__90(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__90\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ__DOT___zz_io_pop_valid 
        = ((1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ__DOT__dspRst))) 
           && ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ__DOT__logic_fifo_io_pop_valid_regNext) 
               & (~ (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ__DOT___zz___05Fzz_io_pop_valid 
                     >> 0x1fU))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ__DOT__io_pop_valid_regNext_regNext 
        = ((1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ__DOT__dspRst))) 
           && (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ__DOT__io_pop_valid_regNext));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ__DOT__logic_fifo_io_pop_valid_regNext 
        = ((1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ__DOT__dspRst))) 
           && (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ__DOT__logic_fifo_io_pop_valid));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ__DOT__io_pop_valid_regNext 
        = ((1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ__DOT__dspRst))) 
           && (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ__DOT__io_pop_valid));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ__DOT__io_pop_valid 
        = ((~ ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ__DOT__io_pop_valid_regNext) 
               | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ__DOT__io_pop_valid_regNext_regNext))) 
           & (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ__DOT___zz_io_pop_valid));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ_io_pop_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ__DOT__io_pop_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ__DOT__logic_fifo__DOT__io_pop_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ__DOT__io_pop_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__io_addr_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ_io_pop_valid;
}

void Vtop___024root___nba_sequent__TOP__91(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__91\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT___zz_io_pulse_payload_12_re 
        = (0x0000ffffU & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__rawPulse_payload_12_re) 
                          + (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__buf_1_io_dcOffset)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT___zz_io_pulse_payload_11_re 
        = (0x0000ffffU & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__rawPulse_payload_11_re) 
                          + (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__buf_1_io_dcOffset)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT___zz_io_pulse_payload_10_re 
        = (0x0000ffffU & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__rawPulse_payload_10_re) 
                          + (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__buf_1_io_dcOffset)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT___zz_io_pulse_payload_9_re 
        = (0x0000ffffU & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__rawPulse_payload_9_re) 
                          + (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__buf_1_io_dcOffset)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT___zz_io_pulse_payload_8_re 
        = (0x0000ffffU & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__rawPulse_payload_8_re) 
                          + (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__buf_1_io_dcOffset)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT___zz_io_pulse_payload_7_re 
        = (0x0000ffffU & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__rawPulse_payload_7_re) 
                          + (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__buf_1_io_dcOffset)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT___zz_io_pulse_payload_0_re 
        = (0x0000ffffU & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__rawPulse_payload_0_re) 
                          + (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__buf_1_io_dcOffset)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT___zz_io_pulse_payload_6_re 
        = (0x0000ffffU & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__rawPulse_payload_6_re) 
                          + (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__buf_1_io_dcOffset)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT___zz_io_pulse_payload_5_re 
        = (0x0000ffffU & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__rawPulse_payload_5_re) 
                          + (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__buf_1_io_dcOffset)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT___zz_io_pulse_payload_4_re 
        = (0x0000ffffU & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__rawPulse_payload_4_re) 
                          + (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__buf_1_io_dcOffset)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT___zz_io_pulse_payload_2_re 
        = (0x0000ffffU & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__rawPulse_payload_2_re) 
                          + (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__buf_1_io_dcOffset)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT___zz_io_pulse_payload_1_re 
        = (0x0000ffffU & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__rawPulse_payload_1_re) 
                          + (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__buf_1_io_dcOffset)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT___zz_io_pulse_payload_3_re 
        = (0x0000ffffU & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__rawPulse_payload_3_re) 
                          + (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__buf_1_io_dcOffset)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT___zz_io_pulse_payload_13_re 
        = (0x0000ffffU & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__rawPulse_payload_13_re) 
                          + (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__buf_1_io_dcOffset)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT___zz_io_pulse_payload_14_re 
        = (0x0000ffffU & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__rawPulse_payload_14_re) 
                          + (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__buf_1_io_dcOffset)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT___zz_io_pulse_payload_15_re 
        = (0x0000ffffU & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__rawPulse_payload_15_re) 
                          + (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__buf_1_io_dcOffset)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__io_pulse_payload_12_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT___zz_io_pulse_payload_12_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__io_pulse_payload_11_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT___zz_io_pulse_payload_11_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__io_pulse_payload_10_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT___zz_io_pulse_payload_10_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__io_pulse_payload_9_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT___zz_io_pulse_payload_9_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__io_pulse_payload_8_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT___zz_io_pulse_payload_8_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__io_pulse_payload_7_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT___zz_io_pulse_payload_7_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__io_pulse_payload_0_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT___zz_io_pulse_payload_0_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__io_pulse_payload_6_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT___zz_io_pulse_payload_6_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__io_pulse_payload_5_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT___zz_io_pulse_payload_5_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__io_pulse_payload_4_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT___zz_io_pulse_payload_4_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__io_pulse_payload_2_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT___zz_io_pulse_payload_2_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__io_pulse_payload_1_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT___zz_io_pulse_payload_1_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__io_pulse_payload_3_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT___zz_io_pulse_payload_3_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__io_pulse_payload_13_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT___zz_io_pulse_payload_13_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__io_pulse_payload_14_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT___zz_io_pulse_payload_14_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__io_pulse_payload_15_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT___zz_io_pulse_payload_15_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_pulse_payload_12_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__io_pulse_payload_12_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_pulse_payload_11_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__io_pulse_payload_11_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_pulse_payload_10_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__io_pulse_payload_10_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_pulse_payload_9_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__io_pulse_payload_9_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_pulse_payload_8_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__io_pulse_payload_8_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_pulse_payload_7_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__io_pulse_payload_7_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_pulse_payload_0_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__io_pulse_payload_0_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_pulse_payload_6_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__io_pulse_payload_6_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_pulse_payload_5_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__io_pulse_payload_5_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_pulse_payload_4_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__io_pulse_payload_4_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_pulse_payload_2_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__io_pulse_payload_2_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_pulse_payload_1_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__io_pulse_payload_1_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_pulse_payload_3_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__io_pulse_payload_3_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_pulse_payload_13_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__io_pulse_payload_13_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_pulse_payload_14_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__io_pulse_payload_14_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_pulse_payload_15_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__io_pulse_payload_15_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_0_12_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_pulse_payload_12_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_0_11_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_pulse_payload_11_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_0_10_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_pulse_payload_10_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_0_9_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_pulse_payload_9_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_0_8_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_pulse_payload_8_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_0_7_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_pulse_payload_7_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_0_0_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_pulse_payload_0_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_0_6_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_pulse_payload_6_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_0_5_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_pulse_payload_5_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_0_4_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_pulse_payload_4_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_0_2_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_pulse_payload_2_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_0_1_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_pulse_payload_1_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_0_3_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_pulse_payload_3_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_0_13_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_pulse_payload_13_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_0_14_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_pulse_payload_14_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_0_15_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_pulse_payload_15_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_dacPayloads_0[0U] 
        = (((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_0_1_re) 
            << 0x00000010U) | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_0_0_re));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_dacPayloads_0[1U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_0_5_re) 
                                      << 0x00000010U) 
                                     | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_0_4_re)))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      (((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_0_3_re) 
                                                        << 0x00000010U) 
                                                       | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_0_2_re))))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_dacPayloads_0[2U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_0_5_re) 
                                       << 0x00000010U) 
                                      | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_0_4_re)))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       (((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_0_3_re) 
                                                         << 0x00000010U) 
                                                        | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_0_2_re))))) 
                   >> 0x00000020U));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_dacPayloads_0[3U] 
        = (((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_0_7_re) 
            << 0x00000010U) | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_0_6_re));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_dacPayloads_0[4U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_0_11_re) 
                                      << 0x00000010U) 
                                     | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_0_10_re)))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      (((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_0_9_re) 
                                                        << 0x00000010U) 
                                                       | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_0_8_re))))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_dacPayloads_0[5U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_0_11_re) 
                                       << 0x00000010U) 
                                      | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_0_10_re)))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       (((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_0_9_re) 
                                                         << 0x00000010U) 
                                                        | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_0_8_re))))) 
                   >> 0x00000020U));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_dacPayloads_0[6U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_0_15_re) 
                                      << 0x00000010U) 
                                     | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_0_14_re)))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      (((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_0_13_re) 
                                                        << 0x00000010U) 
                                                       | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_0_12_re))))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_dacPayloads_0[7U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_0_15_re) 
                                       << 0x00000010U) 
                                      | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_0_14_re)))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       (((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_0_13_re) 
                                                         << 0x00000010U) 
                                                        | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_0_12_re))))) 
                   >> 0x00000020U));
}

void Vtop___024root___nba_sequent__TOP__92(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__92\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT___zz_io_pulse_payload_12_re 
        = (0x0000ffffU & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__rawPulse_payload_12_re) 
                          + (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1_io_dcOffset)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT___zz_io_pulse_payload_11_re 
        = (0x0000ffffU & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__rawPulse_payload_11_re) 
                          + (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1_io_dcOffset)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT___zz_io_pulse_payload_10_re 
        = (0x0000ffffU & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__rawPulse_payload_10_re) 
                          + (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1_io_dcOffset)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT___zz_io_pulse_payload_9_re 
        = (0x0000ffffU & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__rawPulse_payload_9_re) 
                          + (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1_io_dcOffset)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT___zz_io_pulse_payload_8_re 
        = (0x0000ffffU & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__rawPulse_payload_8_re) 
                          + (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1_io_dcOffset)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT___zz_io_pulse_payload_7_re 
        = (0x0000ffffU & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__rawPulse_payload_7_re) 
                          + (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1_io_dcOffset)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT___zz_io_pulse_payload_0_re 
        = (0x0000ffffU & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__rawPulse_payload_0_re) 
                          + (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1_io_dcOffset)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT___zz_io_pulse_payload_6_re 
        = (0x0000ffffU & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__rawPulse_payload_6_re) 
                          + (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1_io_dcOffset)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT___zz_io_pulse_payload_5_re 
        = (0x0000ffffU & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__rawPulse_payload_5_re) 
                          + (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1_io_dcOffset)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT___zz_io_pulse_payload_4_re 
        = (0x0000ffffU & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__rawPulse_payload_4_re) 
                          + (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1_io_dcOffset)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT___zz_io_pulse_payload_2_re 
        = (0x0000ffffU & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__rawPulse_payload_2_re) 
                          + (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1_io_dcOffset)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT___zz_io_pulse_payload_1_re 
        = (0x0000ffffU & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__rawPulse_payload_1_re) 
                          + (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1_io_dcOffset)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT___zz_io_pulse_payload_3_re 
        = (0x0000ffffU & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__rawPulse_payload_3_re) 
                          + (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1_io_dcOffset)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT___zz_io_pulse_payload_13_re 
        = (0x0000ffffU & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__rawPulse_payload_13_re) 
                          + (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1_io_dcOffset)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT___zz_io_pulse_payload_14_re 
        = (0x0000ffffU & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__rawPulse_payload_14_re) 
                          + (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1_io_dcOffset)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT___zz_io_pulse_payload_15_re 
        = (0x0000ffffU & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__rawPulse_payload_15_re) 
                          + (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1_io_dcOffset)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_pulse_payload_12_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT___zz_io_pulse_payload_12_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_pulse_payload_11_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT___zz_io_pulse_payload_11_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_pulse_payload_10_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT___zz_io_pulse_payload_10_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_pulse_payload_9_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT___zz_io_pulse_payload_9_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_pulse_payload_8_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT___zz_io_pulse_payload_8_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_pulse_payload_7_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT___zz_io_pulse_payload_7_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_pulse_payload_0_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT___zz_io_pulse_payload_0_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_pulse_payload_6_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT___zz_io_pulse_payload_6_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_pulse_payload_5_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT___zz_io_pulse_payload_5_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_pulse_payload_4_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT___zz_io_pulse_payload_4_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_pulse_payload_2_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT___zz_io_pulse_payload_2_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_pulse_payload_1_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT___zz_io_pulse_payload_1_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_pulse_payload_3_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT___zz_io_pulse_payload_3_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_pulse_payload_13_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT___zz_io_pulse_payload_13_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_pulse_payload_14_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT___zz_io_pulse_payload_14_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_pulse_payload_15_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT___zz_io_pulse_payload_15_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_pulse_payload_12_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_pulse_payload_12_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_pulse_payload_11_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_pulse_payload_11_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_pulse_payload_10_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_pulse_payload_10_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_pulse_payload_9_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_pulse_payload_9_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_pulse_payload_8_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_pulse_payload_8_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_pulse_payload_7_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_pulse_payload_7_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_pulse_payload_0_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_pulse_payload_0_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_pulse_payload_6_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_pulse_payload_6_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_pulse_payload_5_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_pulse_payload_5_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_pulse_payload_4_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_pulse_payload_4_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_pulse_payload_2_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_pulse_payload_2_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_pulse_payload_1_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_pulse_payload_1_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_pulse_payload_3_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_pulse_payload_3_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_pulse_payload_13_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_pulse_payload_13_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_pulse_payload_14_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_pulse_payload_14_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_pulse_payload_15_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_pulse_payload_15_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_1_12_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_pulse_payload_12_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_1_11_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_pulse_payload_11_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_1_10_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_pulse_payload_10_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_1_9_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_pulse_payload_9_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_1_8_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_pulse_payload_8_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_1_7_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_pulse_payload_7_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_1_0_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_pulse_payload_0_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_1_6_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_pulse_payload_6_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_1_5_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_pulse_payload_5_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_1_4_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_pulse_payload_4_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_1_2_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_pulse_payload_2_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_1_1_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_pulse_payload_1_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_1_3_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_pulse_payload_3_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_1_13_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_pulse_payload_13_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_1_14_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_pulse_payload_14_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_1_15_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_pulse_payload_15_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_dacPayloads_1[0U] 
        = (((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_1_1_re) 
            << 0x00000010U) | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_1_0_re));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_dacPayloads_1[1U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_1_5_re) 
                                      << 0x00000010U) 
                                     | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_1_4_re)))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      (((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_1_3_re) 
                                                        << 0x00000010U) 
                                                       | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_1_2_re))))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_dacPayloads_1[2U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_1_5_re) 
                                       << 0x00000010U) 
                                      | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_1_4_re)))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       (((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_1_3_re) 
                                                         << 0x00000010U) 
                                                        | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_1_2_re))))) 
                   >> 0x00000020U));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_dacPayloads_1[3U] 
        = (((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_1_7_re) 
            << 0x00000010U) | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_1_6_re));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_dacPayloads_1[4U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_1_11_re) 
                                      << 0x00000010U) 
                                     | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_1_10_re)))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      (((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_1_9_re) 
                                                        << 0x00000010U) 
                                                       | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_1_8_re))))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_dacPayloads_1[5U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_1_11_re) 
                                       << 0x00000010U) 
                                      | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_1_10_re)))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       (((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_1_9_re) 
                                                         << 0x00000010U) 
                                                        | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_1_8_re))))) 
                   >> 0x00000020U));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_dacPayloads_1[6U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_1_15_re) 
                                      << 0x00000010U) 
                                     | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_1_14_re)))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      (((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_1_13_re) 
                                                        << 0x00000010U) 
                                                       | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_1_12_re))))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_dacPayloads_1[7U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_1_15_re) 
                                       << 0x00000010U) 
                                      | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_1_14_re)))) 
                     << 0x00000020U) | (QData)((IData)(
                                                       (((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_1_13_re) 
                                                         << 0x00000010U) 
                                                        | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_dac_1_12_re))))) 
                   >> 0x00000020U));
}

void Vtop___024root___nba_sequent__TOP__93(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__93\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqReset) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_sink_imag = 0U;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_sink_res = 0U;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_sink_real = 0U;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_rValid = 0U;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_rValid = 0U;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_logic_rsp_rValid = 0U;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_s2mPipe_rValid = 0U;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_rValidN = 1U;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_rValidN = 1U;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_rValidN = 1U;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_rValidN = 1U;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_rValidN = 1U;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_s2mPipe_rValid = 0U;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_rValidN = 1U;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_rValidN = 1U;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_rValidN = 1U;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_s2mPipe_rValid = 0U;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_s2mPipe_rValid = 0U;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_s2mPipe_rValid = 0U;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_s2mPipe_rValid = 0U;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_s2mPipe_rValid = 0U;
    } else {
        if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_sink_resultIn_valid) {
            vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_sink_imag 
                = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_sink_resultIn_payload_imag;
            vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_sink_res 
                = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_sink_resultIn_payload_res;
            vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_sink_real 
                = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_sink_resultIn_payload_real;
        }
        if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_ready) {
            vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_rValid 
                = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_valid;
        }
        if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_logic_rsp_ready) {
            vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_logic_rsp_rValid 
                = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_logic_rsp_valid;
        }
        if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_valid) {
            vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_rValidN = 0U;
        }
        if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_s2mPipe_ready) {
            vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_rValidN = 1U;
            vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_s2mPipe_rValid 
                = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_s2mPipe_valid;
        }
        if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_valid) {
            vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_rValidN = 0U;
        }
        if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_s2mPipe_ready) {
            vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_rValidN = 1U;
            vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_s2mPipe_rValid 
                = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_s2mPipe_valid;
        }
        if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_valid) {
            vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_rValidN = 0U;
        }
        if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_s2mPipe_ready) {
            vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_rValidN = 1U;
            vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_s2mPipe_rValid 
                = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_s2mPipe_valid;
        }
        if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_valid) {
            vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_rValidN = 0U;
        }
        if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_s2mPipe_ready) {
            vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_s2mPipe_rValid 
                = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_s2mPipe_valid;
            vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_rValidN = 1U;
        }
        if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_valid) {
            vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_rValidN = 0U;
        }
        if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_ready) {
            vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_rValid 
                = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_valid;
            vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_rValidN = 1U;
        }
        if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_valid) {
            vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_rValidN = 0U;
        }
        if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_s2mPipe_ready) {
            vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_rValidN = 1U;
            vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_s2mPipe_rValid 
                = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_s2mPipe_valid;
        }
        if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_valid) {
            vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_rValidN = 0U;
        }
        if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_s2mPipe_ready) {
            vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_rValidN = 1U;
            vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_s2mPipe_rValid 
                = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_s2mPipe_valid;
        }
        if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_valid) {
            vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_rValidN = 0U;
        }
        if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_s2mPipe_ready) {
            vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_s2mPipe_rValid 
                = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_s2mPipe_valid;
            vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_rValidN = 1U;
        }
    }
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_sink_valid 
        = ((1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqReset))) 
           && (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_sink_resultIn_valid));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__when_ReadoutResultLink_l75 
        = (1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_sink_valid)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_m2sPipe_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_rValid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_stage_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_rValid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_logic_rsp_stage_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_logic_rsp_rValid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_s2mPipe_m2sPipe_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_s2mPipe_rValid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_rValidN;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_rValidN;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_rValidN;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_rValidN;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_rValidN;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_s2mPipe_m2sPipe_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_s2mPipe_rValid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_rValidN;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_rValidN;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_rValidN;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_s2mPipe_m2sPipe_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_s2mPipe_rValid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_s2mPipe_m2sPipe_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_s2mPipe_rValid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_s2mPipe_m2sPipe_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_s2mPipe_rValid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_s2mPipe_m2sPipe_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_s2mPipe_rValid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_s2mPipe_m2sPipe_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_s2mPipe_rValid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__when_Stream_l477_4 
        = (1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_m2sPipe_valid)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_a_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_m2sPipe_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_stage_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__when_Stream_l477_9 
        = (1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_stage_valid)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_logic_rsp_stage_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__when_Stream_l477_8 
        = (1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_logic_rsp_stage_valid)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__when_Stream_l477_6 
        = (1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_s2mPipe_m2sPipe_valid)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_a_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_s2mPipe_m2sPipe_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_logic_rsp_stage_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_stage_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_up_bus_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_up_bus_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_a_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_up_bus_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__when_Stream_l477_2 
        = (1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_s2mPipe_m2sPipe_valid)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_a_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_s2mPipe_m2sPipe_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_riscq__DOT__FetchPlugin_logic_iBus_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_to_dMemPortDec_up_bus_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dataMemBusToTilelink_1__DOT__io_tl_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_a_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__when_Stream_l477_1 
        = (1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_s2mPipe_m2sPipe_valid)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_s2mPipe_m2sPipe_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__when_Stream_l477_3 
        = (1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_s2mPipe_m2sPipe_valid)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_s2mPipe_m2sPipe_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__when_Stream_l477 
        = (1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_s2mPipe_m2sPipe_valid)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_a_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_a_s2mPipe_m2sPipe_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__when_Stream_l477_5 
        = (1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_s2mPipe_m2sPipe_valid)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_s2mPipe_m2sPipe_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__when_Stream_l477_7 
        = (1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_s2mPipe_m2sPipe_valid)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_s2mPipe_m2sPipe_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_logic_rsp_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_a_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_s2mPipe_valid 
        = (1U & ((~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_rValidN)) 
                 | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_up_bus_d_valid)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_s2mPipe_valid 
        = (1U & ((~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_rValidN)) 
                 | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_d_valid)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_logic_rsp_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_logic_rsp_stage_ready;
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__when_Stream_l477_8) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_logic_rsp_ready = 1U;
    }
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_stage_ready;
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__when_Stream_l477_9) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__memMapFiber_logic_factory_rspAsync_ready = 1U;
    }
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_down_bus_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_up_bus_d_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_2_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_up_bus_a_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_1_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_up_bus_a_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_to_dMemPortDec_up_bus_a_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_a_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_riscq__DOT__FetchPlugin_logic_fork_stream_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_riscq__DOT__FetchPlugin_logic_iBus_a_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_to_dMemPortDec_down_bus_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_to_dMemPortDec_up_bus_d_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dataMemBusToTilelink_1__DOT__io_dm_cmd_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dataMemBusToTilelink_1__DOT__io_tl_a_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_s2mPipe_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_s2mPipe_m2sPipe_ready;
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__when_Stream_l477_1) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_s2mPipe_ready = 1U;
    }
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_riscq__DOT__FetchPlugin_logic_iBus_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_bus_d_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_s2mPipe_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_s2mPipe_m2sPipe_ready;
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__when_Stream_l477_3) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_noDecoder_toDown_d_s2mPipe_ready = 1U;
    }
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dataMemBusToTilelink_1__DOT__io_tl_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_bus_d_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_up_bus_a_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_a_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_up_bus_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_d_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_up_bus_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_down_bus_d_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_logic_rsp_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_ups_0_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_down_bus_d_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_2_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_2_a_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_1_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_1_a_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_to_dMemPortDec_down_bus_a_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_to_dMemPortDec_up_bus_a_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_bus_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_to_dMemPortDec_down_bus_d_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dataMemBusToTilelink_1_io_dm_cmd_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dataMemBusToTilelink_1__DOT__io_dm_cmd_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_riscq__DOT__FetchPlugin_logic_iBus_d_fire 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_riscq__DOT__FetchPlugin_logic_iBus_d_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dataMemBusToTilelink_1__DOT__io_dm_rsp_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dataMemBusToTilelink_1__DOT__io_tl_d_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_down_bus_a_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_up_bus_a_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_1_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_up_bus_d_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_2_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_memMapFiber_up_up_bus_d_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_m2sPipe_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_a_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_a_fire 
        = ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_a_valid) 
           & (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_a_ready));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__ups_0_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_ups_0_d_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_bus_a_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_dBus_to_dMemPortDec_down_bus_a_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_up_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_bus_d_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__postedStoreShim_1__DOT__io_down_cmd_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dataMemBusToTilelink_1_io_dm_cmd_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dataMemBusToTilelink_1_io_dm_rsp_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dataMemBusToTilelink_1__DOT__io_dm_rsp_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_ups_0_a_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_down_bus_a_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_1_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_1_d_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_2_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_2_d_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_m2sPipe_ready;
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__when_Stream_l477_4) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_posted_bridge_up_down_bus_a_s2mPipe_ready = 1U;
    }
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_cmd_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_up_bus_a_fire;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_up_a_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_bus_a_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__d_arbiter__DOT__io_output_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_up_d_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__ups_0_a_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_ups_0_a_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__d_arbiter__DOT__io_inputs_1_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_1_d_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__d_arbiter__DOT__io_inputs_2_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_2_d_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__cmd_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__posted_bridge_cmd_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__a_arbiter__DOT__io_inputs_0_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__ups_0_a_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc_cmd_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__cmd_valid;
}

void Vtop___024root___nba_sequent__TOP__94(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__94\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx107;
    __Vtableidx107 = 0;
    CData/*2:0*/ __Vtableidx121;
    __Vtableidx121 = 0;
    CData/*2:0*/ __Vtableidx173;
    __Vtableidx173 = 0;
    CData/*2:0*/ __Vtableidx175;
    __Vtableidx175 = 0;
    CData/*2:0*/ __Vtableidx215;
    __Vtableidx215 = 0;
    CData/*2:0*/ __Vtableidx429;
    __Vtableidx429 = 0;
    CData/*2:0*/ __Vtableidx430;
    __Vtableidx430 = 0;
    CData/*2:0*/ __Vtableidx431;
    __Vtableidx431 = 0;
    // Body
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_ready) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_rData_param = 0U;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_rData_denied = 0U;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_rData_source 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_payload_source;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_rData_size 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_payload_size;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_rData_opcode = 0U;
    }
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_stage_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_rData_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_stage_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_rData_denied;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_stage_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_rData_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_stage_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_rData_size;
    __Vtableidx431 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_rData_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx431][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_rData_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx431][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_rData_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx431][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_rData_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx431][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_stage_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_stage_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_stage_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_stage_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_stage_payload_size;
    __Vtableidx430 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_stage_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_stage_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx430][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_stage_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx430][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_stage_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx430][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_stage_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx430][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_stage_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic_io_up_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic_io_up_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic_io_up_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic_io_up_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_d_payload_size;
    __Vtableidx429 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx429][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx429][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx429][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx429][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic_io_up_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_bus_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic_io_up_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_bus_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic_io_up_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic_io_up_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic_io_up_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic_io_up_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_down_bus_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_bus_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_down_bus_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_bus_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_down_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_bus_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_down_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_bus_d_payload_size;
    __Vtableidx173 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx173][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx173][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx173][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx173][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_down_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_up_bus_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_down_bus_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_up_bus_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_down_bus_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_up_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_down_bus_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_up_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_down_bus_d_payload_size;
    __Vtableidx175 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_down_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshbhGYZX74EBjVgwBT4ck21Vi91TemwBS594vZSsmf[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx175][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshbhGYZX74EBjVgwBT4ck21Vi91TemwBS594vZSsmf[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx175][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshbhGYZX74EBjVgwBT4ck21Vi91TemwBS594vZSsmf[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx175][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshbhGYZX74EBjVgwBT4ck21Vi91TemwBS594vZSsmf[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx175][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_up_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_down_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_noDecoder_toDown_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_up_bus_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_noDecoder_toDown_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_up_bus_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_noDecoder_toDown_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_up_bus_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_noDecoder_toDown_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_up_bus_d_payload_size;
    __Vtableidx215 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_up_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshirUuuK4O92JAYbAaxOH3SUpvKt3LMhS965gsNcZR[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx215][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshirUuuK4O92JAYbAaxOH3SUpvKt3LMhS965gsNcZR[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx215][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshirUuuK4O92JAYbAaxOH3SUpvKt3LMhS965gsNcZR[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx215][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshirUuuK4O92JAYbAaxOH3SUpvKt3LMhS965gsNcZR[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx215][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_noDecoder_toDown_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_up_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_noDecoder_toDown_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_noDecoder_toDown_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_noDecoder_toDown_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_noDecoder_toDown_d_payload_size;
    __Vtableidx121 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_noDecoder_toDown_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_noDecoder_toDown_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx121][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_noDecoder_toDown_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx121][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_noDecoder_toDown_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx121][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_noDecoder_toDown_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx121][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_noDecoder_toDown_d_payload_opcode;
    __Vtableidx107 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx107][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx107][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx107][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx107][3U];
}

void Vtop___024root___nba_sequent__TOP__95(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__95\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx123;
    __Vtableidx123 = 0;
    CData/*2:0*/ __Vtableidx137;
    __Vtableidx137 = 0;
    CData/*2:0*/ __Vtableidx179;
    __Vtableidx179 = 0;
    CData/*2:0*/ __Vtableidx181;
    __Vtableidx181 = 0;
    CData/*2:0*/ __Vtableidx217;
    __Vtableidx217 = 0;
    CData/*2:0*/ __Vtableidx433;
    __Vtableidx433 = 0;
    CData/*2:0*/ __Vtableidx434;
    __Vtableidx434 = 0;
    CData/*2:0*/ __Vtableidx435;
    __Vtableidx435 = 0;
    // Body
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_ready) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_rData_param = 0U;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_rData_denied = 0U;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_rData_source 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_payload_source;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_rData_size 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_payload_size;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_rData_opcode = 0U;
    }
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_stage_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_rData_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_stage_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_rData_denied;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_stage_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_rData_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_stage_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_rData_size;
    __Vtableidx435 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_rData_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx435][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_rData_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx435][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_rData_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx435][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_rData_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx435][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_stage_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_stage_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_stage_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_stage_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_stage_payload_size;
    __Vtableidx434 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_stage_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_stage_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx434][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_stage_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx434][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_stage_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx434][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_stage_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx434][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_stage_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic_io_up_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic_io_up_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic_io_up_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic_io_up_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_d_payload_size;
    __Vtableidx433 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx433][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx433][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx433][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx433][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic_io_up_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_bus_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic_io_up_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_bus_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic_io_up_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic_io_up_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic_io_up_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic_io_up_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshUK2bA19zDnABLAwsLeClqNX5NtjccmBalFBmMvcq 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_bus_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshuxHhK3FVh1BsoaGQdqWkmkkGTAiUmcuMbMA1Ici4 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_bus_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___Vhsh3AWSDdeer30EP5BNAmoJUkgf7nCaavblDEv8UPse 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_bus_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___Vhsh3nZPJ1K05ccCHzmmrDpHUyMZymIJrwxnruDzoips 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_bus_d_payload_size;
    __Vtableidx179 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx179][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx179][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx179][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx179][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___Vhshcv5uVKhUU9AulXSwbUgjPdrAuGerTEndrvOAmu4s 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_to_riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_up_bus_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshUK2bA19zDnABLAwsLeClqNX5NtjccmBalFBmMvcq;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshDUOs5vpQT0GIq8yp80TCfIozILy7nEZAmsDZWMn7 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshuxHhK3FVh1BsoaGQdqWkmkkGTAiUmcuMbMA1Ici4;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___Vhsh0ZpUTHwsE2BfsZ9QpjA79TJuWPAvoZkpxLAcLVB8 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___Vhsh3AWSDdeer30EP5BNAmoJUkgf7nCaavblDEv8UPse;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_to_riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_up_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___Vhsh3nZPJ1K05ccCHzmmrDpHUyMZymIJrwxnruDzoips;
    __Vtableidx181 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___Vhshcv5uVKhUU9AulXSwbUgjPdrAuGerTEndrvOAmu4s;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshBEGuGNiJTAKfmOIME49kgKcUcLAWCOu46d97M8ST[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx181][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshBEGuGNiJTAKfmOIME49kgKcUcLAWCOu46d97M8ST[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx181][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshBEGuGNiJTAKfmOIME49kgKcUcLAWCOu46d97M8ST[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx181][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshBEGuGNiJTAKfmOIME49kgKcUcLAWCOu46d97M8ST[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx181][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshGR3zDXm7bmfAHpl5baY3Sj76IwJiaZA0CVZ0HZch 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___Vhshcv5uVKhUU9AulXSwbUgjPdrAuGerTEndrvOAmu4s;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_noDecoder_toDown_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_to_riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_up_bus_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_noDecoder_toDown_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshDUOs5vpQT0GIq8yp80TCfIozILy7nEZAmsDZWMn7;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_noDecoder_toDown_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___Vhsh0ZpUTHwsE2BfsZ9QpjA79TJuWPAvoZkpxLAcLVB8;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_noDecoder_toDown_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_to_riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_up_bus_d_payload_size;
    __Vtableidx217 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshGR3zDXm7bmfAHpl5baY3Sj76IwJiaZA0CVZ0HZch;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshiVq1sruZp2L4NMRAIRL6nMeMsgBLD6AAbvlBOSiK[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx217][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshiVq1sruZp2L4NMRAIRL6nMeMsgBLD6AAbvlBOSiK[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx217][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshiVq1sruZp2L4NMRAIRL6nMeMsgBLD6AAbvlBOSiK[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx217][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshiVq1sruZp2L4NMRAIRL6nMeMsgBLD6AAbvlBOSiK[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx217][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_noDecoder_toDown_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshGR3zDXm7bmfAHpl5baY3Sj76IwJiaZA0CVZ0HZch;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_noDecoder_toDown_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_noDecoder_toDown_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_noDecoder_toDown_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_noDecoder_toDown_d_payload_size;
    __Vtableidx137 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_noDecoder_toDown_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_noDecoder_toDown_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx137][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_noDecoder_toDown_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx137][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_noDecoder_toDown_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx137][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_noDecoder_toDown_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx137][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_noDecoder_toDown_d_payload_opcode;
    __Vtableidx123 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx123][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx123][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx123][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx123][3U];
}

void Vtop___024root___nba_sequent__TOP__96(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__96\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx139;
    __Vtableidx139 = 0;
    CData/*2:0*/ __Vtableidx153;
    __Vtableidx153 = 0;
    CData/*2:0*/ __Vtableidx185;
    __Vtableidx185 = 0;
    CData/*2:0*/ __Vtableidx187;
    __Vtableidx187 = 0;
    CData/*2:0*/ __Vtableidx219;
    __Vtableidx219 = 0;
    CData/*2:0*/ __Vtableidx437;
    __Vtableidx437 = 0;
    CData/*2:0*/ __Vtableidx438;
    __Vtableidx438 = 0;
    CData/*2:0*/ __Vtableidx439;
    __Vtableidx439 = 0;
    // Body
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_ready) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_rData_param = 0U;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_rData_denied = 0U;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_rData_source 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_payload_source;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_rData_size 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_payload_size;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_rData_opcode = 0U;
    }
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_stage_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_rData_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_stage_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_rData_denied;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_stage_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_rData_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_stage_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_rData_size;
    __Vtableidx439 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_rData_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx439][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_rData_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx439][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_rData_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx439][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_rData_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx439][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_stage_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_stage_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_stage_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_stage_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_stage_payload_size;
    __Vtableidx438 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_stage_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_stage_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx438][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_stage_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx438][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_stage_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx438][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_stage_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx438][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_stage_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic_io_up_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic_io_up_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic_io_up_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic_io_up_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_d_payload_size;
    __Vtableidx437 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx437][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx437][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx437][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx437][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic_io_up_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_bus_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic_io_up_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_bus_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic_io_up_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic_io_up_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic_io_up_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic_io_up_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_down_bus_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_bus_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_down_bus_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_bus_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_down_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_bus_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_down_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_bus_d_payload_size;
    __Vtableidx185 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx185][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx185][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx185][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx185][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_down_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_up_bus_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_down_bus_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_up_bus_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_down_bus_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_up_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_down_bus_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_up_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_down_bus_d_payload_size;
    __Vtableidx187 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_down_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshHtFR7FImsamA5w7uMnXgZ4LqNDl9Q0yc31MvvAEH[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx187][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshHtFR7FImsamA5w7uMnXgZ4LqNDl9Q0yc31MvvAEH[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx187][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshHtFR7FImsamA5w7uMnXgZ4LqNDl9Q0yc31MvvAEH[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx187][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshHtFR7FImsamA5w7uMnXgZ4LqNDl9Q0yc31MvvAEH[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx187][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_up_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_down_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_noDecoder_toDown_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_up_bus_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_noDecoder_toDown_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_up_bus_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_noDecoder_toDown_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_up_bus_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_noDecoder_toDown_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_up_bus_d_payload_size;
    __Vtableidx219 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_up_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshlH61YTrd9ZgVHUBZp9ISrpmAsIEuKcslejDhwLiz[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx219][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshlH61YTrd9ZgVHUBZp9ISrpmAsIEuKcslejDhwLiz[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx219][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshlH61YTrd9ZgVHUBZp9ISrpmAsIEuKcslejDhwLiz[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx219][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshlH61YTrd9ZgVHUBZp9ISrpmAsIEuKcslejDhwLiz[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx219][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_noDecoder_toDown_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_up_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_noDecoder_toDown_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_noDecoder_toDown_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_noDecoder_toDown_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_noDecoder_toDown_d_payload_size;
    __Vtableidx153 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_noDecoder_toDown_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_noDecoder_toDown_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx153][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_noDecoder_toDown_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx153][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_noDecoder_toDown_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx153][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_noDecoder_toDown_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx153][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_noDecoder_toDown_d_payload_opcode;
    __Vtableidx139 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx139][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx139][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx139][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx139][3U];
}

void Vtop___024root___nba_sequent__TOP__97(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__97\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.PulseTableSoc__DOT__hostRst) {
        vlSelfRef.PulseTableSoc__DOT__timeOffset = 0ULL;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_s2mPipe_rValid = 0U;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_s2mPipe_rValid = 0U;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_s2mPipe_rValid = 0U;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_rValid = 0U;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_rValid = 0U;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_rValid = 0U;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_s2mPipe_rValid = 0U;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_s2mPipe_rValid = 0U;
        vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_rValid = 0U;
        vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_s2mPipe_rValid = 0U;
        vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_s2mPipe_rValid = 0U;
        vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_s2mPipe_rValid = 0U;
        vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_rValid = 0U;
        vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_rValidN = 1U;
        vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_rValidN = 1U;
        vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_rValidN = 1U;
        vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_rValidN = 1U;
        vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_rValidN = 1U;
        vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_rValidN = 1U;
        vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_rValidN = 1U;
        vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_rValidN = 1U;
        vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_rValidN = 1U;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_rValidN = 1U;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_rValidN = 1U;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_rValidN = 1U;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_rValidN = 1U;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_rValidN = 1U;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_rValidN = 1U;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_rValidN = 1U;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_rValidN = 1U;
        vlSelfRef.PulseTableSoc__DOT__io_up_d_s2mPipe_rValid = 0U;
        vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_rValidN = 1U;
        vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_s2mPipe_rValid = 0U;
        vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_rValidN = 1U;
        vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_s2mPipe_rValid = 0U;
        vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_s2mPipe_rValid = 0U;
        vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_s2mPipe_rValid = 0U;
        vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_s2mPipe_rValid = 0U;
        vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_s2mPipe_rValid = 0U;
        vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_rValid = 0U;
        vlSelfRef.PulseTableSoc__DOT__io_up_d_rValidN = 1U;
    } else {
        if ((0x0040U == (IData)(vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_address))) {
            if (vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_doWrite) {
                vlSelfRef.PulseTableSoc__DOT__timeOffset 
                    = ((0xffffffff00000000ULL & vlSelfRef.PulseTableSoc__DOT__timeOffset) 
                       | (IData)((IData)(vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_a_payload_data)));
            }
        } else if ((0x0044U == (IData)(vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_address))) {
            if (vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_doWrite) {
                vlSelfRef.PulseTableSoc__DOT__timeOffset 
                    = ((0x00000000ffffffffULL & vlSelfRef.PulseTableSoc__DOT__timeOffset) 
                       | ((QData)((IData)(vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_a_payload_data)) 
                          << 0x00000020U));
            }
        }
        if (vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_ready) {
            vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_rValid 
                = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_valid;
        }
        if (vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_valid) {
            vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_rValidN = 0U;
        }
        if (vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_s2mPipe_ready) {
            vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_rValidN = 1U;
            vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_s2mPipe_rValid 
                = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_s2mPipe_valid;
        }
        if (vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_valid) {
            vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_rValidN = 0U;
        }
        if (vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_s2mPipe_ready) {
            vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_rValidN = 1U;
            vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_s2mPipe_rValid 
                = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_s2mPipe_valid;
        }
        if (vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_valid) {
            vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_rValidN = 0U;
        }
        if (vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_s2mPipe_ready) {
            vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_rValidN = 1U;
            vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_s2mPipe_rValid 
                = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_s2mPipe_valid;
        }
        if (vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_valid) {
            vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_rValidN = 0U;
        }
        if (vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_s2mPipe_ready) {
            vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_s2mPipe_rValid 
                = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_s2mPipe_valid;
            vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_rValidN = 1U;
        }
        if (vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_valid) {
            vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_rValidN = 0U;
        }
        if (vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_s2mPipe_ready) {
            vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_s2mPipe_rValid 
                = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_s2mPipe_valid;
            vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_rValidN = 1U;
        }
        if (vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_valid) {
            vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_rValidN = 0U;
        }
        if (vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_s2mPipe_ready) {
            vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_s2mPipe_rValid 
                = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_s2mPipe_valid;
            vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_rValidN = 1U;
        }
        if (vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_valid) {
            vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_rValidN = 0U;
        }
        if (vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_s2mPipe_ready) {
            vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_rValidN = 1U;
            vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_s2mPipe_rValid 
                = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_s2mPipe_valid;
        }
        if (vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_valid) {
            vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_rValidN = 0U;
        }
        if (vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_ready) {
            vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_rValidN = 1U;
            vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_rValid 
                = vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_valid;
        }
        if (vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_valid) {
            vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_rValidN = 0U;
        }
        if (vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_s2mPipe_ready) {
            vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_rValidN = 1U;
            vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_s2mPipe_rValid 
                = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_s2mPipe_valid;
        }
        if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_valid) {
            vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_rValidN = 0U;
        }
        if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_s2mPipe_ready) {
            vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_s2mPipe_rValid 
                = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_s2mPipe_valid;
            vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_rValidN = 1U;
        }
        if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_valid) {
            vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_rValidN = 0U;
        }
        if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_s2mPipe_ready) {
            vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_s2mPipe_rValid 
                = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_s2mPipe_valid;
            vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_rValidN = 1U;
        }
        if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_valid) {
            vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_rValidN = 0U;
        }
        if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_s2mPipe_ready) {
            vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_s2mPipe_rValid 
                = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_s2mPipe_valid;
            vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_rValidN = 1U;
        }
        if (vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_valid) {
            vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_rValidN = 0U;
        }
        if (vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_ready) {
            vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_rValid 
                = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_valid;
            vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_rValidN = 1U;
        }
        if (vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_valid) {
            vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_rValidN = 0U;
        }
        if (vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_ready) {
            vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_rValid 
                = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_valid;
            vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_rValidN = 1U;
        }
        if (vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_valid) {
            vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_rValidN = 0U;
        }
        if (vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_ready) {
            vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_rValid 
                = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_valid;
            vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_rValidN = 1U;
        }
        if (vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_valid) {
            vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_rValidN = 0U;
        }
        if (vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_s2mPipe_ready) {
            vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_s2mPipe_rValid 
                = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_s2mPipe_valid;
            vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_rValidN = 1U;
        }
        if (vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_valid) {
            vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_rValidN = 0U;
        }
        if (vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_s2mPipe_ready) {
            vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_s2mPipe_rValid 
                = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_s2mPipe_valid;
            vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_rValidN = 1U;
        }
        if (vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_valid) {
            vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_rValidN = 0U;
        }
        if (vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_ready) {
            vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_rValid 
                = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_valid;
            vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_rValidN = 1U;
        }
        if (vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_valid) {
            vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_rValidN = 0U;
        }
        if (vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_s2mPipe_ready) {
            vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_s2mPipe_rValid 
                = vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_s2mPipe_valid;
            vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_rValidN = 1U;
        }
        if (vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_up_d_valid) {
            vlSelfRef.PulseTableSoc__DOT__io_up_d_rValidN = 0U;
        }
        if (vlSelfRef.PulseTableSoc__DOT__io_up_d_s2mPipe_ready) {
            vlSelfRef.PulseTableSoc__DOT__io_up_d_s2mPipe_rValid 
                = vlSelfRef.PulseTableSoc__DOT__io_up_d_s2mPipe_valid;
            vlSelfRef.PulseTableSoc__DOT__io_up_d_rValidN = 1U;
        }
    }
    vlSelfRef.PulseTableSoc__DOT__timeOffset_buffercc__DOT__io_dataIn 
        = vlSelfRef.PulseTableSoc__DOT__timeOffset;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_s2mPipe_m2sPipe_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_s2mPipe_rValid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_s2mPipe_m2sPipe_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_s2mPipe_rValid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_s2mPipe_m2sPipe_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_s2mPipe_rValid;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_m2sPipe_valid 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_rValid;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_m2sPipe_valid 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_rValid;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_m2sPipe_valid 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_rValid;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_s2mPipe_m2sPipe_valid 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_s2mPipe_rValid;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_s2mPipe_m2sPipe_valid 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_s2mPipe_rValid;
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_stage_valid 
        = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_rValid;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_s2mPipe_m2sPipe_valid 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_s2mPipe_rValid;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_s2mPipe_m2sPipe_valid 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_s2mPipe_rValid;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_s2mPipe_m2sPipe_valid 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_s2mPipe_rValid;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_m2sPipe_valid 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_rValid;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_rValidN;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_rValidN;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_rValidN;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_rValidN;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_rValidN;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_rValidN;
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_rValidN;
    vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_rValidN;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_rValidN;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_rValidN;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_rValidN;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_rValidN;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_rValidN;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_rValidN;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_rValidN;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_rValidN;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_rValidN;
    vlSelfRef.PulseTableSoc__DOT__io_up_d_s2mPipe_m2sPipe_valid 
        = vlSelfRef.PulseTableSoc__DOT__io_up_d_s2mPipe_rValid;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_rValidN;
    vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_s2mPipe_m2sPipe_valid 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_s2mPipe_rValid;
    vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_rValidN;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_s2mPipe_m2sPipe_valid 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_s2mPipe_rValid;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_s2mPipe_m2sPipe_valid 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_s2mPipe_rValid;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_s2mPipe_m2sPipe_valid 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_s2mPipe_rValid;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_s2mPipe_m2sPipe_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_s2mPipe_rValid;
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_s2mPipe_m2sPipe_valid 
        = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_s2mPipe_rValid;
    vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_m2sPipe_valid 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_rValid;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__io_up_d_rValidN;
    vlSelfRef.PulseTableSoc__DOT__when_Stream_l477_15 
        = (1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_s2mPipe_m2sPipe_valid)));
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_s2mPipe_m2sPipe_valid;
    vlSelfRef.PulseTableSoc__DOT__when_Stream_l477_13 
        = (1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_s2mPipe_m2sPipe_valid)));
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_s2mPipe_m2sPipe_valid;
    vlSelfRef.PulseTableSoc__DOT__when_Stream_l477_11 
        = (1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_s2mPipe_m2sPipe_valid)));
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_s2mPipe_m2sPipe_valid;
    vlSelfRef.PulseTableSoc__DOT__when_Stream_l477_4 
        = (1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_m2sPipe_valid)));
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_a_valid 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_m2sPipe_valid;
    vlSelfRef.PulseTableSoc__DOT__when_Stream_l477_2 
        = (1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_m2sPipe_valid)));
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_a_valid 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_m2sPipe_valid;
    vlSelfRef.PulseTableSoc__DOT__when_Stream_l477 
        = (1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_m2sPipe_valid)));
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_a_valid 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_m2sPipe_valid;
    vlSelfRef.PulseTableSoc__DOT__when_Stream_l477_6 
        = (1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_s2mPipe_m2sPipe_valid)));
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_a_valid 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_s2mPipe_m2sPipe_valid;
    vlSelfRef.PulseTableSoc__DOT__when_Stream_l477_8 
        = (1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_s2mPipe_m2sPipe_valid)));
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_a_valid 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_s2mPipe_m2sPipe_valid;
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_stage_valid;
    vlSelfRef.PulseTableSoc__DOT__when_Stream_l477_22 
        = (1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_stage_valid)));
    vlSelfRef.PulseTableSoc__DOT__when_Stream_l477_14 
        = (1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_s2mPipe_m2sPipe_valid)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_a_valid 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_s2mPipe_m2sPipe_valid;
    vlSelfRef.PulseTableSoc__DOT__when_Stream_l477_10 
        = (1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_s2mPipe_m2sPipe_valid)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_a_valid 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_s2mPipe_m2sPipe_valid;
    vlSelfRef.PulseTableSoc__DOT__when_Stream_l477_12 
        = (1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_s2mPipe_m2sPipe_valid)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_a_valid 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_s2mPipe_m2sPipe_valid;
    vlSelfRef.PulseTableSoc__DOT__when_Stream_l477_18 
        = (1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_m2sPipe_valid)));
    vlSelfRef.PulseTableSoc__DOT__robs_up_bus_a_valid 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_m2sPipe_valid;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_noDecoder_toDown_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_ready;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_noDecoder_toDown_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_ready;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_noDecoder_toDown_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_ready;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_up_bus_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_ready;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_up_bus_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_ready;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_up_bus_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_ready;
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_stage_ready 
        = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_ready;
    vlSelfRef.PulseTableSoc__DOT__robs_up_noDecoder_toDown_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_noDecoder_toDown_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_noDecoder_toDown_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_noDecoder_toDown_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_noDecoder_toDown_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_ready;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_up_bus_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_ready;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_up_bus_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_ready;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_up_bus_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_ready;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_up_bus_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_ready;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_up_bus_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_ready;
    vlSelfRef.PulseTableSoc__DOT__when_Stream_l477_21 
        = (1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__io_up_d_s2mPipe_m2sPipe_valid)));
    vlSelfRef.PulseTableSoc__DOT__hostBus_bus_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__io_up_d_s2mPipe_m2sPipe_valid;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_up_bus_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_ready;
    vlSelfRef.PulseTableSoc__DOT__when_Stream_l477_20 
        = (1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_s2mPipe_m2sPipe_valid)));
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_valid 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_s2mPipe_m2sPipe_valid;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_to_hostBus_down_bus_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_ready;
    vlSelfRef.PulseTableSoc__DOT__when_Stream_l477_1 
        = (1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_s2mPipe_m2sPipe_valid)));
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_s2mPipe_m2sPipe_valid;
    vlSelfRef.PulseTableSoc__DOT__when_Stream_l477_3 
        = (1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_s2mPipe_m2sPipe_valid)));
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_s2mPipe_m2sPipe_valid;
    vlSelfRef.PulseTableSoc__DOT__when_Stream_l477_5 
        = (1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_s2mPipe_m2sPipe_valid)));
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_s2mPipe_m2sPipe_valid;
    vlSelfRef.PulseTableSoc__DOT__when_Stream_l477_7 
        = (1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_s2mPipe_m2sPipe_valid)));
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_s2mPipe_m2sPipe_valid;
    vlSelfRef.PulseTableSoc__DOT__when_Stream_l477_9 
        = (1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_s2mPipe_m2sPipe_valid)));
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_s2mPipe_m2sPipe_valid;
    vlSelfRef.PulseTableSoc__DOT__when_Stream_l477_19 
        = (1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_m2sPipe_valid)));
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_m2sPipe_valid;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_output_ready 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_d_ready;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_up_bus_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_d_valid;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_up_bus_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_d_valid;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_up_bus_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_d_valid;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_noDecoder_toDown_a_valid 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_a_valid;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_noDecoder_toDown_a_valid 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_a_valid;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_noDecoder_toDown_a_valid 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_a_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_noDecoder_toDown_a_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_a_valid;
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_valid 
        = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_a_valid;
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_s2mPipe_valid 
        = (1U & ((~ (IData)(vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_rValidN)) 
                 | (IData)(vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_valid)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_noDecoder_toDown_a_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_a_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_noDecoder_toDown_a_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_a_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_noDecoder_toDown_a_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_a_valid;
    vlSelfRef.PulseTableSoc__DOT__robs_up_noDecoder_toDown_a_valid 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_bus_a_valid;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_up_bus_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_noDecoder_toDown_d_ready;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_up_bus_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_noDecoder_toDown_d_ready;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_up_bus_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_noDecoder_toDown_d_ready;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_noDecoder_toDown_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_up_bus_a_ready;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_noDecoder_toDown_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_up_bus_a_ready;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_noDecoder_toDown_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_up_bus_a_ready;
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_ready 
        = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_stage_ready;
    if (vlSelfRef.PulseTableSoc__DOT__when_Stream_l477_22) {
        vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_ready = 1U;
    }
    vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_up_bus_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_noDecoder_toDown_d_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_up_bus_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_noDecoder_toDown_d_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_up_bus_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_noDecoder_toDown_d_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_up_bus_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_noDecoder_toDown_d_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_to_riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_up_bus_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_noDecoder_toDown_d_ready;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_2_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_up_bus_a_ready;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_1_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_up_bus_a_ready;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_0_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_up_bus_a_ready;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_3_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_up_bus_a_ready;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_5_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_up_bus_a_ready;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_to_hostBus_down_bus_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_bus_d_valid;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_noDecoder_toDown_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_up_bus_a_ready;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_to_hostBus_up_bus_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_to_hostBus_down_bus_a_ready;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_up_bus_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_d_valid;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_up_bus_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_d_valid;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_up_bus_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_d_valid;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_up_bus_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_d_valid;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_up_bus_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_d_valid;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_up_bus_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_d_valid;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_noDecoder_toDown_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_up_bus_d_valid;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_noDecoder_toDown_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_up_bus_d_valid;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_noDecoder_toDown_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_up_bus_d_valid;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_up_bus_a_valid 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_noDecoder_toDown_a_valid;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_up_bus_a_valid 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_noDecoder_toDown_a_valid;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_up_bus_a_valid 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_noDecoder_toDown_a_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_up_bus_a_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_noDecoder_toDown_a_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_up_bus_a_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_noDecoder_toDown_a_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_up_bus_a_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_noDecoder_toDown_a_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_to_riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_up_bus_a_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_noDecoder_toDown_a_valid;
    vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_up_bus_a_valid 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_noDecoder_toDown_a_valid;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_up_bus_d_ready;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_up_bus_d_ready;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_up_bus_d_ready;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_noDecoder_toDown_a_ready;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_noDecoder_toDown_a_ready;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_noDecoder_toDown_a_ready;
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_ready;
    vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_down_bus_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_up_bus_d_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_input_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_up_bus_d_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_down_bus_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_up_bus_d_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_down_bus_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_up_bus_d_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_to_riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_down_bus_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_to_riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_up_bus_d_ready;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_2_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_2_a_ready;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_1_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_1_a_ready;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_0_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_0_a_ready;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_3_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_3_a_ready;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_5_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_5_a_ready;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_to_hostBus_up_bus_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_to_hostBus_down_bus_d_valid;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_bus_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_noDecoder_toDown_a_ready;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_noDecoder_toDown_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_to_hostBus_up_bus_a_ready;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_0_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_up_bus_d_valid;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_1_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_up_bus_d_valid;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_2_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_up_bus_d_valid;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_3_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_up_bus_d_valid;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_5_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_up_bus_d_valid;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_noDecoder_toDown_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_up_bus_d_valid;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_noDecoder_toDown_d_valid;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_noDecoder_toDown_d_valid;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_noDecoder_toDown_d_valid;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_valid 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_up_bus_a_valid;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_valid 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_up_bus_a_valid;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_valid 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_up_bus_a_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_input_a_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_up_bus_a_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_down_bus_a_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_up_bus_a_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_down_bus_a_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_up_bus_a_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_to_riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_down_bus_a_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_to_riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_up_bus_a_valid;
    vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_down_bus_a_valid 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_up_bus_a_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_s2mPipe_m2sPipe_ready 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_d_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_s2mPipe_m2sPipe_ready 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_d_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_s2mPipe_m2sPipe_ready 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_d_ready;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_m2sPipe_ready 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_a_ready;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_m2sPipe_ready 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_a_ready;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_m2sPipe_ready 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_a_ready;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_s2mPipe_m2sPipe_ready 
        = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_a_ready;
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_up_bus_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_down_bus_d_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__io_pop_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_input_d_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_bus_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_down_bus_d_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_bus_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_down_bus_d_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_bus_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_to_riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_down_bus_d_ready;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_noDecoder_toDown_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_to_hostBus_up_bus_d_valid;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_down_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_bus_a_ready;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_bus_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_noDecoder_toDown_a_ready;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_0_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_0_d_valid;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_1_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_1_d_valid;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_2_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_2_d_valid;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_3_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_3_d_valid;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_5_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_5_d_valid;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_bus_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_noDecoder_toDown_d_valid;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_s2mPipe_valid 
        = (1U & ((~ (IData)(vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_rValidN)) 
                 | (IData)(vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_valid)));
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_s2mPipe_valid 
        = (1U & ((~ (IData)(vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_rValidN)) 
                 | (IData)(vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_valid)));
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_s2mPipe_valid 
        = (1U & ((~ (IData)(vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_rValidN)) 
                 | (IData)(vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_valid)));
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_s2mPipe_valid 
        = (1U & ((~ (IData)(vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_rValidN)) 
                 | (IData)(vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_valid)));
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_s2mPipe_valid 
        = (1U & ((~ (IData)(vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_rValidN)) 
                 | (IData)(vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_valid)));
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_s2mPipe_valid 
        = (1U & ((~ (IData)(vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_rValidN)) 
                 | (IData)(vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_valid)));
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__io_push_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_input_a_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_bus_a_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_down_bus_a_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_bus_a_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_down_bus_a_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_bus_a_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_to_riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_down_bus_a_valid;
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_up_bus_a_valid 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_down_bus_a_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_s2mPipe_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_s2mPipe_m2sPipe_ready;
    if (vlSelfRef.PulseTableSoc__DOT__when_Stream_l477_15) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_s2mPipe_ready = 1U;
    }
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_s2mPipe_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_s2mPipe_m2sPipe_ready;
    if (vlSelfRef.PulseTableSoc__DOT__when_Stream_l477_13) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_s2mPipe_ready = 1U;
    }
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_s2mPipe_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_s2mPipe_m2sPipe_ready;
    if (vlSelfRef.PulseTableSoc__DOT__when_Stream_l477_11) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_s2mPipe_ready = 1U;
    }
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_ready 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_m2sPipe_ready;
    if (vlSelfRef.PulseTableSoc__DOT__when_Stream_l477_4) {
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_ready = 1U;
    }
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_ready 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_m2sPipe_ready;
    if (vlSelfRef.PulseTableSoc__DOT__when_Stream_l477) {
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_ready = 1U;
    }
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_ready 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_m2sPipe_ready;
    if (vlSelfRef.PulseTableSoc__DOT__when_Stream_l477_2) {
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_ready = 1U;
    }
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_s2mPipe_ready 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_s2mPipe_m2sPipe_ready;
    if (vlSelfRef.PulseTableSoc__DOT__when_Stream_l477_8) {
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_s2mPipe_ready = 1U;
    }
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__io_up_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_up_bus_d_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_readArbitration_translated_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__io_pop_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_bus_d_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_bus_d_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_bus_d_ready;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_bus_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_noDecoder_toDown_d_valid;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_down_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_bus_a_ready;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_0_valid 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_0_d_valid;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_1_valid 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_1_d_valid;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_2_valid 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_2_d_valid;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_3_valid 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_3_d_valid;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_5_valid 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_5_d_valid;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_down_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_bus_d_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_a_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_bus_a_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_a_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_bus_a_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_a_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_bus_a_valid;
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__io_up_a_valid 
        = vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_up_bus_a_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_readArbitration_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_readArbitration_translated_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_stage_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_d_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_stage_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_d_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_stage_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_d_ready;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_down_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_bus_d_valid;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__a_arbiter__DOT__io_output_ready 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_down_a_ready;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_up_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_down_d_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_port_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_a_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_port_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_a_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_port_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_a_valid;
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__cmd_valid 
        = vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__io_up_a_valid;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge_io_up_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_up_d_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic_io_port_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_port_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic_io_port_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_port_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic_io_port_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_port_valid;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_up_bus_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge_io_up_d_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_flow_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic_io_port_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_flow_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic_io_port_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_flow_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic_io_port_valid;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_down_bus_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_up_bus_d_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_rams_0__DOT__io_port1_enable 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_flow_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__io_port1_enable 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_flow_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_rams_0__DOT__io_port1_enable 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_flow_valid;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_up_bus_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_down_bus_d_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_rams_0__DOT__bram_4__DOT__enb 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_rams_0__DOT__io_port1_enable;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__bram_4__DOT__enb 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__io_port1_enable;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_rams_0__DOT__bram_4__DOT__enb 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_rams_0__DOT__io_port1_enable;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_4_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_up_bus_d_valid;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_4_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_4_d_valid;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_4_valid 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_4_d_valid;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT___zz_maskProposal_0 
        = ((((IData)(vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_5_valid) 
             << 5U) | (((IData)(vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_4_valid) 
                        << 4U) | ((IData)(vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_3_valid) 
                                  << 3U))) | (((IData)(vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_2_valid) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_1_valid) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_0_valid))));
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT___zz_maskProposal_0_1 
        = (0x00000fffU & (((IData)(vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT___zz_maskProposal_0) 
                           << 6U) | (IData)(vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT___zz_maskProposal_0)));
}

void Vtop___024root___nba_sequent__TOP__98(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__98\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx168;
    __Vtableidx168 = 0;
    CData/*2:0*/ __Vtableidx170;
    __Vtableidx170 = 0;
    CData/*2:0*/ __Vtableidx194;
    __Vtableidx194 = 0;
    CData/*2:0*/ __Vtableidx212;
    __Vtableidx212 = 0;
    CData/*2:0*/ __Vtableidx461;
    __Vtableidx461 = 0;
    CData/*2:0*/ __Vtableidx464;
    __Vtableidx464 = 0;
    // Body
    if (vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_ia_fire) {
        if ((1U & (IData)(vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT___zz_1))) {
            vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_a_ctrl_buffer_data_0 
                = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_ia_payload_data;
        }
        if ((2U & (IData)(vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT___zz_1))) {
            vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_a_ctrl_buffer_data_1 
                = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_ia_payload_data;
        }
        if ((4U & (IData)(vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT___zz_1))) {
            vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_a_ctrl_buffer_data_2 
                = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_ia_payload_data;
        }
        if ((8U & (IData)(vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT___zz_1))) {
            vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_a_ctrl_buffer_data_3 
                = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_ia_payload_data;
        }
        if (vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_a_ctrl_buffer_first) {
            vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_a_ctrl_buffer_corrupt = 0U;
            vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_a_ctrl_buffer_args_source 
                = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_ia_payload_source;
            vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_a_ctrl_buffer_args_param 
                = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_ia_payload_param;
            vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_a_ctrl_buffer_args_size 
                = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_ia_payload_size;
            vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_a_ctrl_buffer_mask_3 = 0U;
            vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_a_ctrl_buffer_mask_0 = 0U;
            vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_a_ctrl_buffer_mask_2 = 0U;
            vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_a_ctrl_buffer_args_address 
                = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_ia_payload_address;
            vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_a_ctrl_buffer_mask_1 = 0U;
            vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_a_ctrl_buffer_args_opcode 
                = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_ia_payload_opcode;
        }
        if (vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_ia_payload_corrupt) {
            vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_a_ctrl_buffer_corrupt = 1U;
        }
        if ((8U & (IData)(vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT___zz_2))) {
            vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_a_ctrl_buffer_mask_3 
                = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_ia_payload_mask;
        }
        if ((1U & (IData)(vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT___zz_2))) {
            vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_a_ctrl_buffer_mask_0 
                = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_ia_payload_mask;
        }
        if ((4U & (IData)(vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT___zz_2))) {
            vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_a_ctrl_buffer_mask_2 
                = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_ia_payload_mask;
        }
        if ((2U & (IData)(vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT___zz_2))) {
            vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_a_ctrl_buffer_mask_1 
                = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_ia_payload_mask;
        }
    }
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_down_a_payload_data[0U] 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_a_ctrl_buffer_data_0;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_down_a_payload_data[1U] 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_a_ctrl_buffer_data_1;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_down_a_payload_data[2U] 
        = (IData)((((QData)((IData)(vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_a_ctrl_buffer_data_3)) 
                    << 0x00000020U) | (QData)((IData)(vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_a_ctrl_buffer_data_2))));
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_down_a_payload_data[3U] 
        = (IData)(((((QData)((IData)(vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_a_ctrl_buffer_data_3)) 
                     << 0x00000020U) | (QData)((IData)(vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_a_ctrl_buffer_data_2))) 
                   >> 0x00000020U));
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_down_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_a_ctrl_buffer_corrupt;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_down_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_a_ctrl_buffer_args_source;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_down_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_a_ctrl_buffer_args_param;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_down_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_a_ctrl_buffer_args_size;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_down_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_a_ctrl_buffer_args_address;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_down_a_payload_mask 
        = ((((IData)(vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_a_ctrl_buffer_mask_3) 
             << 0x0000000cU) | ((IData)(vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_a_ctrl_buffer_mask_2) 
                                << 8U)) | (((IData)(vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_a_ctrl_buffer_mask_1) 
                                            << 4U) 
                                           | (IData)(vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_a_ctrl_buffer_mask_0)));
    __Vtableidx464 = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_a_ctrl_buffer_args_opcode;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_a_ctrl_buffer_args_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx464][0U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_a_ctrl_buffer_args_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx464][1U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_a_ctrl_buffer_args_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx464][2U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_a_ctrl_buffer_args_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx464][3U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_down_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_a_ctrl_buffer_args_opcode;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge_io_down_a_payload_data[0U] 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_down_a_payload_data[0U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge_io_down_a_payload_data[1U] 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_down_a_payload_data[1U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge_io_down_a_payload_data[2U] 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_down_a_payload_data[2U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge_io_down_a_payload_data[3U] 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_down_a_payload_data[3U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge_io_down_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_down_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge_io_down_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_down_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge_io_down_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_down_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge_io_down_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_down_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge_io_down_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_down_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge_io_down_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_down_a_payload_mask;
    __Vtableidx461 = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_down_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_down_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx461][0U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_down_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx461][1U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_down_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx461][2U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_down_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx461][3U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge_io_down_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_down_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_bus_a_payload_data[0U] 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge_io_down_a_payload_data[0U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_bus_a_payload_data[1U] 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge_io_down_a_payload_data[1U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_bus_a_payload_data[2U] 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge_io_down_a_payload_data[2U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_bus_a_payload_data[3U] 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge_io_down_a_payload_data[3U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_bus_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge_io_down_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_bus_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge_io_down_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_bus_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge_io_down_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_bus_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge_io_down_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_bus_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge_io_down_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_bus_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge_io_down_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_bus_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge_io_down_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_noDecoder_toDown_a_payload_data[0U] 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_bus_a_payload_data[0U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_noDecoder_toDown_a_payload_data[1U] 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_bus_a_payload_data[1U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_noDecoder_toDown_a_payload_data[2U] 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_bus_a_payload_data[2U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_noDecoder_toDown_a_payload_data[3U] 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_bus_a_payload_data[3U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_noDecoder_toDown_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_bus_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_noDecoder_toDown_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_bus_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_noDecoder_toDown_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_bus_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_noDecoder_toDown_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_bus_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_noDecoder_toDown_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_bus_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_noDecoder_toDown_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_bus_a_payload_mask;
    __Vtableidx168 = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_bus_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx168][0U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_bus_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx168][1U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_bus_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx168][2U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_bus_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx168][3U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_noDecoder_toDown_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_up_bus_a_payload_data[0U] 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_noDecoder_toDown_a_payload_data[0U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_up_bus_a_payload_data[1U] 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_noDecoder_toDown_a_payload_data[1U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_up_bus_a_payload_data[2U] 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_noDecoder_toDown_a_payload_data[2U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_up_bus_a_payload_data[3U] 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_noDecoder_toDown_a_payload_data[3U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_up_bus_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_noDecoder_toDown_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_up_bus_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_noDecoder_toDown_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_up_bus_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_noDecoder_toDown_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_up_bus_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_noDecoder_toDown_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT___zz_robAdapter_down_to_robs_up_up_bus_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_noDecoder_toDown_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_up_bus_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_noDecoder_toDown_a_payload_mask;
    __Vtableidx170 = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_noDecoder_toDown_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_noDecoder_toDown_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx170][0U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_noDecoder_toDown_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx170][1U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_noDecoder_toDown_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx170][2U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_noDecoder_toDown_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx170][3U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_up_bus_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_noDecoder_toDown_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_payload_data[0U] 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_up_bus_a_payload_data[0U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_payload_data[1U] 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_up_bus_a_payload_data[1U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_payload_data[2U] 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_up_bus_a_payload_data[2U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_payload_data[3U] 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_up_bus_a_payload_data[3U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_up_bus_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_up_bus_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_up_bus_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_up_bus_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_up_bus_a_payload_address 
        = (0x00003fffU & (IData)(vlSelfRef.PulseTableSoc__DOT___zz_robAdapter_down_to_robs_up_up_bus_a_payload_address));
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_up_bus_a_payload_mask;
    __Vtableidx212 = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_up_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_up_bus_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx212][0U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_up_bus_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx212][1U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_up_bus_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx212][2U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_up_bus_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx212][3U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_up_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_up_bus_a_payload_address;
    __Vtableidx194 = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx194][0U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx194][1U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx194][2U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx194][3U];
}

void Vtop___024root___nba_sequent__TOP__99(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__99\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__onPerId_bridge__DOT__hostRst) {
        vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__onPerId_bridge__DOT__onAw_toW_rValidN = 1U;
        vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__onPerId_bridge__DOT__onAw_toW_s2mPipe_rValid = 0U;
        vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__onPerId_bridge__DOT__pendings_valids = 0U;
    } else {
        if (vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__onPerId_bridge__DOT__onAw_toW_valid) {
            vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__onPerId_bridge__DOT__onAw_toW_rValidN = 0U;
        }
        if (vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__onPerId_bridge__DOT__onAw_toW_s2mPipe_ready) {
            vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__onPerId_bridge__DOT__onAw_toW_rValidN = 1U;
            vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__onPerId_bridge__DOT__onAw_toW_s2mPipe_rValid 
                = vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__onPerId_bridge__DOT__onAw_toW_s2mPipe_valid;
        }
        if (vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__onPerId_bridge__DOT__onAw_halted_fire) {
            vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__onPerId_bridge__DOT__pendings_valids 
                = ((IData)(vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__onPerId_bridge__DOT__pendings_valids) 
                   | (0x0fU & ((IData)(1U) << (IData)(vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__onPerId_bridge__DOT__io_up_aw_payload_id))));
        }
        if (vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__onPerId_bridge__DOT__io_down_b_fire) {
            vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__onPerId_bridge__DOT__pendings_valids 
                = ((~ ((IData)(1U) << (IData)(vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__onPerId_bridge__DOT__io_down_b_payload_id))) 
                   & (IData)(vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__onPerId_bridge__DOT__pendings_valids));
        }
    }
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__onPerId_bridge__DOT__onAw_toW_ready 
        = vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__onPerId_bridge__DOT__onAw_toW_rValidN;
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__onPerId_bridge__DOT__onW_aw_valid 
        = vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__onPerId_bridge__DOT__onAw_toW_s2mPipe_rValid;
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__onPerId_bridge__DOT__onAw_busy 
        = (1U & ((IData)(vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__onPerId_bridge__DOT__pendings_valids) 
                 >> (IData)(vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__onPerId_bridge__DOT__io_up_aw_payload_id)));
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__onPerId_bridge__DOT__onAw_halted_fork2__DOT__io_outputs_1_ready 
        = vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__onPerId_bridge__DOT__onAw_toW_ready;
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__onPerId_bridge__DOT__when_Stream_l477 
        = (1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__onPerId_bridge__DOT__onW_aw_valid)));
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__onPerId_bridge__DOT__onW_aw_forkSerial_next_valid 
        = vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__onPerId_bridge__DOT__onW_aw_valid;
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__onPerId_bridge__DOT___zz_io_up_aw_ready 
        = (1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__onPerId_bridge__DOT__onAw_busy)));
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__onPerId_bridge__DOT__onW_join_valid 
        = ((IData)(vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__onPerId_bridge__DOT__io_up_w_valid) 
           & (IData)(vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__onPerId_bridge__DOT__onW_aw_forkSerial_next_valid));
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__onPerId_bridge__DOT__onAw_halted_valid 
        = ((IData)(vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__onPerId_bridge__DOT__io_up_aw_valid) 
           & (IData)(vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__onPerId_bridge__DOT___zz_io_up_aw_ready));
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__onPerId_bridge__DOT__io_down_w_valid 
        = vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__onPerId_bridge__DOT__onW_join_valid;
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__onPerId_bridge__DOT__onAw_halted_fork2__DOT__io_input_valid 
        = vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__onPerId_bridge__DOT__onAw_halted_valid;
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__onPerId_bridge_io_down_w_valid 
        = vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__onPerId_bridge__DOT__io_down_w_valid;
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__io_up_w_valid 
        = vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__onPerId_bridge_io_down_w_valid;
}

void Vtop___024root___nba_sequent__TOP__100(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__100\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx305;
    __Vtableidx305 = 0;
    CData/*2:0*/ __Vtableidx307;
    __Vtableidx307 = 0;
    CData/*2:0*/ __Vtableidx342;
    __Vtableidx342 = 0;
    CData/*2:0*/ __Vtableidx386;
    __Vtableidx386 = 0;
    CData/*2:0*/ __Vtableidx387;
    __Vtableidx387 = 0;
    CData/*2:0*/ __Vtableidx392;
    __Vtableidx392 = 0;
    CData/*2:0*/ __Vtableidx398;
    __Vtableidx398 = 0;
    CData/*2:0*/ __Vtableidx403;
    __Vtableidx403 = 0;
    // Body
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT__io_up_a_payload_source_delay_3 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT__io_up_a_payload_source_delay_2;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT__io_up_a_payload_size_delay_3 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT__io_up_a_payload_size_delay_2;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT__isGet_delay_3 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT__isGet_delay_2;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT__io_up_a_payload_source_delay_2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT__io_up_a_payload_source_delay_1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT__io_up_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT__io_up_a_payload_source_delay_3;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT__io_up_a_payload_size_delay_2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT__io_up_a_payload_size_delay_1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT__io_up_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT__io_up_a_payload_size_delay_3;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT__isGet_delay_2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT__isGet_delay_1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT___zz_io_up_d_payload_opcode 
        = (1U & (- (IData)((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT__isGet_delay_3))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic_io_up_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT__io_up_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic_io_up_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT__io_up_d_payload_size;
    __Vtableidx387 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT___zz_io_up_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT___zz_io_up_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx387][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT___zz_io_up_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx387][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT___zz_io_up_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx387][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT___zz_io_up_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx387][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT__io_up_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT___zz_io_up_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT__io_up_a_payload_source_delay_1 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT__io_up_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_up_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic_io_up_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT__io_up_a_payload_size_delay_1 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT__io_up_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_up_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic_io_up_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT__isGet_delay_1 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT__isGet;
    __Vtableidx386 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT__io_up_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT__io_up_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx386][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT__io_up_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx386][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT__io_up_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx386][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT__io_up_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx386][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic_io_up_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT__io_up_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_down_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_up_bus_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_down_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_up_bus_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_up_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic_io_up_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_up_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_down_bus_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_up_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_down_bus_d_payload_size;
    __Vtableidx305 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_up_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_up_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx305][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_up_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx305][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_up_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx305][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_up_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx305][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_down_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_up_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_0_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_up_bus_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_0_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_up_bus_d_payload_size;
    __Vtableidx307 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_down_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_down_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx307][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_down_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx307][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_down_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx307][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_down_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx307][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_up_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_down_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_0_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_0_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_0_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_0_d_payload_size;
    __Vtableidx342 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_up_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_up_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx342][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_up_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx342][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_up_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx342][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_up_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx342][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_0_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_to_dBusFiber_up_up_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__d_arbiter__DOT__io_inputs_0_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_0_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__d_arbiter__DOT__io_inputs_0_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_0_d_payload_size;
    __Vtableidx392 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_0_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_0_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx392][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_0_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx392][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_0_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx392][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_0_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx392][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_0_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__io_downs_0_d_payload_opcode;
    __Vtableidx398 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_0_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_0_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx398][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_0_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx398][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_0_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx398][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_0_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx398][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__d_arbiter__DOT__io_inputs_0_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__downs_0_d_payload_opcode;
    __Vtableidx403 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__d_arbiter__DOT__io_inputs_0_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__d_arbiter__DOT__io_inputs_0_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx403][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__d_arbiter__DOT__io_inputs_0_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx403][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__d_arbiter__DOT__io_inputs_0_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx403][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__d_arbiter__DOT__io_inputs_0_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx403][3U];
}

void Vtop___024root___nba_sequent__TOP__101(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__101\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__onPerId_bridge__DOT__onAw_halted_fork2__DOT__hostRst) {
        vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__onPerId_bridge__DOT__onAw_halted_fork2__DOT__logic_linkEnable_1 = 1U;
        vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__onPerId_bridge__DOT__onAw_halted_fork2__DOT__logic_linkEnable_0 = 1U;
    } else {
        if (vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__onPerId_bridge__DOT__onAw_halted_fork2__DOT__io_outputs_1_fire) {
            vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__onPerId_bridge__DOT__onAw_halted_fork2__DOT__logic_linkEnable_1 = 0U;
        }
        if (vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__onPerId_bridge__DOT__onAw_halted_fork2__DOT__io_outputs_0_fire) {
            vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__onPerId_bridge__DOT__onAw_halted_fork2__DOT__logic_linkEnable_0 = 0U;
        }
        if (vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__onPerId_bridge__DOT__onAw_halted_fork2__DOT__io_input_ready) {
            vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__onPerId_bridge__DOT__onAw_halted_fork2__DOT__logic_linkEnable_1 = 1U;
            vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__onPerId_bridge__DOT__onAw_halted_fork2__DOT__logic_linkEnable_0 = 1U;
        }
    }
}

void Vtop___024root___nba_sequent__TOP__102(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__102\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__hostRst) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_rValid = 0U;
    } else if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_ready) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_rValid 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_valid;
    }
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_stage_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_rValid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_stage_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__when_Stream_l477 
        = (1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_stage_valid)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic_io_up_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_d_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_bus_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic_io_up_d_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_down_bus_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_bus_d_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_up_bus_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_down_bus_d_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_noDecoder_toDown_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_up_bus_d_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_noDecoder_toDown_d_valid;
}

void Vtop___024root___nba_sequent__TOP__103(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__103\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__hostRst) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_rValid = 0U;
    } else if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_ready) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_rValid 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_valid;
    }
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_stage_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_rValid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_stage_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__when_Stream_l477 
        = (1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_stage_valid)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic_io_up_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_d_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_bus_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic_io_up_d_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_to_riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_down_bus_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_bus_d_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_to_riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_up_bus_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_to_riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_down_bus_d_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_noDecoder_toDown_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_to_riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_up_bus_d_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_noDecoder_toDown_d_valid;
}

void Vtop___024root___nba_sequent__TOP__104(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__104\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__hostRst) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_rValid = 0U;
    } else if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_ready) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_rValid 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_valid;
    }
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_stage_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_rValid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_stage_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__when_Stream_l477 
        = (1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__rsp_stage_valid)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic_io_up_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_d_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_bus_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic_io_up_d_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_down_bus_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_bus_d_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_up_bus_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_down_bus_d_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_noDecoder_toDown_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_up_bus_d_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_noDecoder_toDown_d_valid;
}

void Vtop___024root___nba_sequent__TOP__105(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__105\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ__DOT__logic_fifo__DOT__count 
        = ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ__DOT__logic_fifo__DOT__dspRst)
            ? 0U : (7U & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ__DOT__logic_fifo__DOT___zz_count) 
                          - (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ__DOT__logic_fifo__DOT___zz_count_3))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ__DOT__logic_fifo__DOT__io_pop_valid 
        = (0U != (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ__DOT__logic_fifo__DOT__count));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ__DOT__logic_fifo__DOT__io_push_ready 
        = (4U != (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ__DOT__logic_fifo__DOT__count));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ__DOT__logic_fifo__DOT___zz___05Fzz_io_pop_payload_data 
        = (7U & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ__DOT__logic_fifo__DOT__count) 
                 - (IData)(1U)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ__DOT__logic_fifo_io_pop_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ__DOT__logic_fifo__DOT__io_pop_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ__DOT__logic_fifo_io_push_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ__DOT__logic_fifo__DOT__io_push_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ__DOT__logic_fifo__DOT___zz_io_pop_payload_data 
        = (3U & (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ__DOT__logic_fifo__DOT___zz___05Fzz_io_pop_payload_data));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ__DOT__io_push_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ__DOT__logic_fifo_io_push_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ_io_push_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ__DOT__io_push_ready;
}

void Vtop___024root___nba_sequent__TOP__106(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__106\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ__DOT__logic_fifo__DOT__count 
        = ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ__DOT__logic_fifo__DOT__dspRst)
            ? 0U : (7U & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ__DOT__logic_fifo__DOT___zz_count) 
                          - (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ__DOT__logic_fifo__DOT___zz_count_3))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ__DOT__logic_fifo__DOT__io_pop_valid 
        = (0U != (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ__DOT__logic_fifo__DOT__count));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ__DOT__logic_fifo__DOT__io_push_ready 
        = (4U != (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ__DOT__logic_fifo__DOT__count));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ__DOT__logic_fifo__DOT___zz___05Fzz_io_pop_payload_data 
        = (7U & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ__DOT__logic_fifo__DOT__count) 
                 - (IData)(1U)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ__DOT__logic_fifo_io_pop_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ__DOT__logic_fifo__DOT__io_pop_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ__DOT__logic_fifo_io_push_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ__DOT__logic_fifo__DOT__io_push_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ__DOT__logic_fifo__DOT___zz_io_pop_payload_data 
        = (3U & (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ__DOT__logic_fifo__DOT___zz___05Fzz_io_pop_payload_data));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ__DOT__io_push_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ__DOT__logic_fifo_io_push_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ_io_push_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ__DOT__io_push_ready;
}

void Vtop___024root___nba_sequent__TOP__107(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__107\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ__DOT__logic_fifo__DOT__count 
        = ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ__DOT__logic_fifo__DOT__dspRst)
            ? 0U : (7U & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ__DOT__logic_fifo__DOT___zz_count) 
                          - (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ__DOT__logic_fifo__DOT___zz_count_3))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ__DOT__logic_fifo__DOT__io_pop_valid 
        = (0U != (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ__DOT__logic_fifo__DOT__count));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ__DOT__logic_fifo__DOT__io_push_ready 
        = (4U != (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ__DOT__logic_fifo__DOT__count));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ__DOT__logic_fifo__DOT___zz___05Fzz_io_pop_payload_data 
        = (7U & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ__DOT__logic_fifo__DOT__count) 
                 - (IData)(1U)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ__DOT__logic_fifo_io_pop_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ__DOT__logic_fifo__DOT__io_pop_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ__DOT__logic_fifo_io_push_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ__DOT__logic_fifo__DOT__io_push_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ__DOT__logic_fifo__DOT___zz_io_pop_payload_data 
        = (3U & (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ__DOT__logic_fifo__DOT___zz___05Fzz_io_pop_payload_data));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ__DOT__io_push_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ__DOT__logic_fifo_io_push_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ_io_push_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ__DOT__io_push_ready;
}

void Vtop___024root___nba_sequent__TOP__108(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__108\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ__DOT__logic_fifo__DOT__count 
        = ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ__DOT__logic_fifo__DOT__dspRst)
            ? 0U : (7U & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ__DOT__logic_fifo__DOT___zz_count) 
                          - (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ__DOT__logic_fifo__DOT___zz_count_3))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ__DOT__logic_fifo__DOT__io_pop_valid 
        = (0U != (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ__DOT__logic_fifo__DOT__count));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ__DOT__logic_fifo__DOT__io_push_ready 
        = (4U != (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ__DOT__logic_fifo__DOT__count));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ__DOT__logic_fifo__DOT___zz___05Fzz_io_pop_payload_data 
        = (7U & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ__DOT__logic_fifo__DOT__count) 
                 - (IData)(1U)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ__DOT__logic_fifo_io_pop_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ__DOT__logic_fifo__DOT__io_pop_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ__DOT__logic_fifo_io_push_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ__DOT__logic_fifo__DOT__io_push_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ__DOT__logic_fifo__DOT___zz_io_pop_payload_data 
        = (3U & (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ__DOT__logic_fifo__DOT___zz___05Fzz_io_pop_payload_data));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ__DOT__io_push_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ__DOT__logic_fifo_io_push_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ_io_push_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ__DOT__io_push_ready;
}

void Vtop___024root___nba_sequent__TOP__109(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__109\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ__DOT__logic_fifo__DOT__count 
        = ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ__DOT__logic_fifo__DOT__dspRst)
            ? 0U : (7U & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ__DOT__logic_fifo__DOT___zz_count) 
                          - (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ__DOT__logic_fifo__DOT___zz_count_3))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ__DOT__logic_fifo__DOT__io_pop_valid 
        = (0U != (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ__DOT__logic_fifo__DOT__count));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ__DOT__logic_fifo__DOT__io_push_ready 
        = (4U != (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ__DOT__logic_fifo__DOT__count));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ__DOT__logic_fifo__DOT___zz___05Fzz_io_pop_payload_data 
        = (7U & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ__DOT__logic_fifo__DOT__count) 
                 - (IData)(1U)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ__DOT__logic_fifo_io_pop_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ__DOT__logic_fifo__DOT__io_pop_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ__DOT__logic_fifo_io_push_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ__DOT__logic_fifo__DOT__io_push_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ__DOT__logic_fifo__DOT___zz_io_pop_payload_data 
        = (3U & (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ__DOT__logic_fifo__DOT___zz___05Fzz_io_pop_payload_data));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ__DOT__io_push_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ__DOT__logic_fifo_io_push_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ_io_push_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ__DOT__io_push_ready;
}

void Vtop___024root___nba_sequent__TOP__110(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__110\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ__DOT__logic_fifo__DOT__count 
        = ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ__DOT__logic_fifo__DOT__dspRst)
            ? 0U : (7U & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ__DOT__logic_fifo__DOT___zz_count) 
                          - (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ__DOT__logic_fifo__DOT___zz_count_3))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ__DOT__logic_fifo__DOT__io_pop_valid 
        = (0U != (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ__DOT__logic_fifo__DOT__count));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ__DOT__logic_fifo__DOT__io_push_ready 
        = (4U != (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ__DOT__logic_fifo__DOT__count));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ__DOT__logic_fifo__DOT___zz___05Fzz_io_pop_payload_data 
        = (7U & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ__DOT__logic_fifo__DOT__count) 
                 - (IData)(1U)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ__DOT__logic_fifo_io_pop_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ__DOT__logic_fifo__DOT__io_pop_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ__DOT__logic_fifo_io_push_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ__DOT__logic_fifo__DOT__io_push_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ__DOT__logic_fifo__DOT___zz_io_pop_payload_data 
        = (3U & (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ__DOT__logic_fifo__DOT___zz___05Fzz_io_pop_payload_data));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ__DOT__io_push_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ__DOT__logic_fifo_io_push_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ_io_push_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ__DOT__io_push_ready;
}

void Vtop___024root___nba_sequent__TOP__111(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__111\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx155;
    __Vtableidx155 = 0;
    CData/*2:0*/ __Vtableidx253;
    __Vtableidx253 = 0;
    CData/*2:0*/ __Vtableidx265;
    __Vtableidx265 = 0;
    CData/*2:0*/ __Vtableidx267;
    __Vtableidx267 = 0;
    CData/*2:0*/ __Vtableidx269;
    __Vtableidx269 = 0;
    CData/*2:0*/ __Vtableidx271;
    __Vtableidx271 = 0;
    CData/*2:0*/ __Vtableidx273;
    __Vtableidx273 = 0;
    CData/*2:0*/ __Vtableidx275;
    __Vtableidx275 = 0;
    CData/*2:0*/ __Vtableidx277;
    __Vtableidx277 = 0;
    CData/*2:0*/ __Vtableidx279;
    __Vtableidx279 = 0;
    CData/*2:0*/ __Vtableidx281;
    __Vtableidx281 = 0;
    CData/*2:0*/ __Vtableidx283;
    __Vtableidx283 = 0;
    CData/*2:0*/ __Vtableidx285;
    __Vtableidx285 = 0;
    CData/*2:0*/ __Vtableidx369;
    __Vtableidx369 = 0;
    CData/*2:0*/ __Vtableidx371;
    __Vtableidx371 = 0;
    CData/*2:0*/ __Vtableidx373;
    __Vtableidx373 = 0;
    CData/*2:0*/ __Vtableidx375;
    __Vtableidx375 = 0;
    CData/*2:0*/ __Vtableidx377;
    __Vtableidx377 = 0;
    CData/*2:0*/ __Vtableidx383;
    __Vtableidx383 = 0;
    CData/*2:0*/ __Vtableidx384;
    __Vtableidx384 = 0;
    // Body
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_thread_logic__DOT__io_up_a_payload_size_delay_3 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_thread_logic__DOT__io_up_a_payload_size_delay_2;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_thread_logic__DOT__io_up_a_payload_source_delay_3 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_thread_logic__DOT__io_up_a_payload_source_delay_2;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_thread_logic__DOT__isGet_delay_3 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_thread_logic__DOT__isGet_delay_2;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_thread_logic__DOT__io_up_a_payload_size_delay_2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_thread_logic__DOT__io_up_a_payload_size_delay_1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_thread_logic__DOT__io_up_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_thread_logic__DOT__io_up_a_payload_size_delay_3;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_thread_logic__DOT__io_up_a_payload_source_delay_2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_thread_logic__DOT__io_up_a_payload_source_delay_1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_thread_logic__DOT__io_up_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_thread_logic__DOT__io_up_a_payload_source_delay_3;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_thread_logic__DOT__isGet_delay_2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_thread_logic__DOT__isGet_delay_1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_thread_logic__DOT___zz_io_up_d_payload_opcode 
        = (1U & (- (IData)((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_thread_logic__DOT__isGet_delay_3))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_thread_logic_io_up_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_thread_logic__DOT__io_up_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_thread_logic_io_up_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_thread_logic__DOT__io_up_d_payload_source;
    __Vtableidx384 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_thread_logic__DOT___zz_io_up_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_thread_logic__DOT___zz_io_up_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx384][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_thread_logic__DOT___zz_io_up_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx384][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_thread_logic__DOT___zz_io_up_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx384][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_thread_logic__DOT___zz_io_up_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx384][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_thread_logic__DOT__io_up_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_thread_logic__DOT___zz_io_up_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_thread_logic__DOT__io_up_a_payload_size_delay_1 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_thread_logic__DOT__io_up_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_up_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_thread_logic_io_up_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_thread_logic__DOT__io_up_a_payload_source_delay_1 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_thread_logic__DOT__io_up_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_up_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_thread_logic_io_up_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_thread_logic__DOT__isGet_delay_1 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_thread_logic__DOT__isGet;
    __Vtableidx383 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_thread_logic__DOT__io_up_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_thread_logic__DOT__io_up_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx383][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_thread_logic__DOT__io_up_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx383][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_thread_logic__DOT__io_up_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx383][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_thread_logic__DOT__io_up_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx383][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_thread_logic_io_up_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_thread_logic__DOT__io_up_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_to_iBusFiber_up_down_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_up_bus_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_to_iBusFiber_up_down_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_up_bus_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_up_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_thread_logic_io_up_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_to_iBusFiber_up_up_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_to_iBusFiber_up_down_bus_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_to_iBusFiber_up_up_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_to_iBusFiber_up_down_bus_d_payload_source;
    __Vtableidx279 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_up_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_up_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx279][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_up_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx279][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_up_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx279][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_up_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx279][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_to_iBusFiber_up_down_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iBusFiber_up_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_noDecoder_toDown_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_to_iBusFiber_up_up_bus_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_noDecoder_toDown_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_to_iBusFiber_up_up_bus_d_payload_source;
    __Vtableidx281 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_to_iBusFiber_up_down_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_to_iBusFiber_up_down_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx281][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_to_iBusFiber_up_down_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx281][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_to_iBusFiber_up_down_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx281][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_to_iBusFiber_up_down_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx281][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_to_iBusFiber_up_up_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_to_iBusFiber_up_down_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_noDecoder_toDown_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_noDecoder_toDown_d_payload_source;
    __Vtableidx285 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_to_iBusFiber_up_up_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_to_iBusFiber_up_up_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx285][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_to_iBusFiber_up_up_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx285][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_to_iBusFiber_up_up_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx285][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_to_iBusFiber_up_up_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx285][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_noDecoder_toDown_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_to_iBusFiber_up_up_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_down_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_bus_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_down_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_bus_d_payload_source;
    __Vtableidx275 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_noDecoder_toDown_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_noDecoder_toDown_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx275][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_noDecoder_toDown_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx275][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_noDecoder_toDown_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx275][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_noDecoder_toDown_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx275][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_noDecoder_toDown_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__ups_0_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_down_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__ups_1_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_down_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__ups_0_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_down_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__ups_1_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_down_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__d_sel 
        = (1U & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_down_d_payload_source) 
                 >> 4U));
    __Vtableidx269 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx269][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx269][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx269][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx269][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_down_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_ups_0_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__ups_0_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_ups_1_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__ups_1_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_ups_0_d_payload_source 
        = (7U & (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__ups_0_d_payload_source));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_ups_1_d_payload_source 
        = (0x0000000fU & (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__ups_1_d_payload_source));
    __Vtableidx373 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_down_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_down_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx373][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_down_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx373][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_down_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx373][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_down_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx373][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__ups_0_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_down_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__ups_1_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_down_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core_io_ups_0_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_ups_0_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core_io_ups_1_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_ups_1_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core_io_ups_0_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_ups_0_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core_io_ups_1_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_ups_1_d_payload_source;
    __Vtableidx375 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__ups_0_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__ups_0_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx375][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__ups_0_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx375][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__ups_0_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx375][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__ups_0_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx375][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_ups_0_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__ups_0_d_payload_opcode;
    __Vtableidx377 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__ups_1_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__ups_1_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx377][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__ups_1_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx377][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__ups_1_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx377][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__ups_1_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx377][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_ups_1_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__ups_1_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_down_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core_io_ups_0_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iLoad_node_to_iMemPortArb_down_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core_io_ups_1_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_down_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core_io_ups_0_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iLoad_node_to_iMemPortArb_down_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core_io_ups_1_d_payload_source;
    __Vtableidx369 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_ups_0_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_ups_0_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx369][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_ups_0_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx369][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_ups_0_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx369][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_ups_0_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx369][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core_io_ups_0_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_ups_0_d_payload_opcode;
    __Vtableidx371 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_ups_1_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_ups_1_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx371][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_ups_1_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx371][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_ups_1_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx371][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_ups_1_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx371][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core_io_ups_1_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_ups_1_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_up_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_down_bus_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iLoad_node_to_iMemPortArb_up_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iLoad_node_to_iMemPortArb_down_bus_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_up_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_down_bus_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iLoad_node_to_iMemPortArb_up_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iLoad_node_to_iMemPortArb_down_bus_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_down_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core_io_ups_0_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iLoad_node_to_iMemPortArb_down_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core_io_ups_1_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_up_bus_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iLoad_node_noDecoder_toDown_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iLoad_node_to_iMemPortArb_up_bus_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_up_bus_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iLoad_node_noDecoder_toDown_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iLoad_node_to_iMemPortArb_up_bus_d_payload_source;
    __Vtableidx271 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_down_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_down_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx271][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_down_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx271][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_down_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx271][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_down_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx271][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_up_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_down_bus_d_payload_opcode;
    __Vtableidx273 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iLoad_node_to_iMemPortArb_down_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iLoad_node_to_iMemPortArb_down_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx273][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iLoad_node_to_iMemPortArb_down_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx273][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iLoad_node_to_iMemPortArb_down_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx273][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iLoad_node_to_iMemPortArb_down_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx273][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iLoad_node_to_iMemPortArb_up_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iLoad_node_to_iMemPortArb_down_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iLoad_node_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iLoad_node_noDecoder_toDown_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iLoad_node_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iLoad_node_noDecoder_toDown_d_payload_source;
    __Vtableidx283 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_up_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_up_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx283][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_up_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx283][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_up_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx283][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_up_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx283][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_to_iMemPortArb_up_bus_d_payload_opcode;
    __Vtableidx277 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iLoad_node_to_iMemPortArb_up_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iLoad_node_to_iMemPortArb_up_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx277][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iLoad_node_to_iMemPortArb_up_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx277][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iLoad_node_to_iMemPortArb_up_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx277][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iLoad_node_to_iMemPortArb_up_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx277][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iLoad_node_noDecoder_toDown_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iLoad_node_to_iMemPortArb_up_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc_iLoad_node_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iLoad_node_bus_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc_iLoad_node_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iLoad_node_bus_d_payload_source;
    __Vtableidx253 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx253][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx253][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx253][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_iBus_noDecoder_toDown_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx253][3U];
    __Vtableidx267 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iLoad_node_noDecoder_toDown_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iLoad_node_noDecoder_toDown_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx267][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iLoad_node_noDecoder_toDown_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx267][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iLoad_node_noDecoder_toDown_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx267][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iLoad_node_noDecoder_toDown_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx267][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iLoad_node_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iLoad_node_noDecoder_toDown_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_iMemLoad_up_bus_d_payload_size 
        = (7U & (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc_iLoad_node_bus_d_payload_size));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_iMemLoad_up_bus_d_payload_source 
        = (7U & (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc_iLoad_node_bus_d_payload_source));
    __Vtableidx265 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iLoad_node_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iLoad_node_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx265][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iLoad_node_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx265][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iLoad_node_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx265][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iLoad_node_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx265][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc_iLoad_node_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iLoad_node_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_iMemLoad_up_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc_iLoad_node_bus_d_payload_opcode;
    __Vtableidx155 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_iMemLoad_up_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_iMemLoad_up_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx155][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_iMemLoad_up_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx155][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_iMemLoad_up_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx155][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_iMemLoad_up_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx155][3U];
}

void Vtop___024root___nba_sequent__TOP__112(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__112\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__io_up_aw_fork2__DOT__hostRst) {
        vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__io_up_aw_fork2__DOT__logic_linkEnable_1 = 1U;
        vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__io_up_aw_fork2__DOT__logic_linkEnable_0 = 1U;
    } else {
        if (vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__io_up_aw_fork2__DOT__io_outputs_1_fire) {
            vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__io_up_aw_fork2__DOT__logic_linkEnable_1 = 0U;
        }
        if (vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__io_up_aw_fork2__DOT__io_outputs_0_fire) {
            vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__io_up_aw_fork2__DOT__logic_linkEnable_0 = 0U;
        }
        if (vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__io_up_aw_fork2__DOT__io_input_ready) {
            vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__io_up_aw_fork2__DOT__logic_linkEnable_1 = 1U;
            vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__io_up_aw_fork2__DOT__logic_linkEnable_0 = 1U;
        }
    }
}

void Vtop___024root___nba_sequent__TOP__113(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__113\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__onPerId_bridge__DOT__hostRst) {
        vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__onPerId_bridge__DOT__pendings_valids = 0U;
    } else {
        if (vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__onPerId_bridge__DOT__onAw_halted_fire) {
            vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__onPerId_bridge__DOT__pendings_valids 
                = ((IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__onPerId_bridge__DOT__pendings_valids) 
                   | (0x0fU & ((IData)(1U) << (IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__onPerId_bridge__DOT__io_up_ar_payload_id))));
        }
        if (vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__onPerId_bridge__DOT__when_Axi4OnePerId_l78) {
            vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__onPerId_bridge__DOT__pendings_valids 
                = ((~ ((IData)(1U) << (IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__onPerId_bridge__DOT__io_down_r_payload_id))) 
                   & (IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__onPerId_bridge__DOT__pendings_valids));
        }
    }
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__onPerId_bridge__DOT__onAw_busy 
        = (1U & ((IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__onPerId_bridge__DOT__pendings_valids) 
                 >> (IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__onPerId_bridge__DOT__io_up_ar_payload_id)));
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__onPerId_bridge__DOT___zz_io_up_ar_ready 
        = (1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__onPerId_bridge__DOT__onAw_busy)));
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__onPerId_bridge__DOT__onAw_halted_valid 
        = ((IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__onPerId_bridge__DOT__io_up_ar_valid) 
           & (IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__onPerId_bridge__DOT___zz_io_up_ar_ready));
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__onPerId_bridge__DOT__io_down_ar_valid 
        = vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__onPerId_bridge__DOT__onAw_halted_valid;
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__onPerId_bridge_io_down_ar_valid 
        = vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__onPerId_bridge__DOT__io_down_ar_valid;
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__compactor__DOT__io_up_ar_valid 
        = vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__onPerId_bridge_io_down_ar_valid;
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__compactor__DOT__io_down_ar_valid 
        = vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__compactor__DOT__io_up_ar_valid;
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__compactor_io_down_ar_valid 
        = vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__compactor__DOT__io_down_ar_valid;
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__io_up_ar_valid 
        = vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__compactor_io_down_ar_valid;
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__frontend_bufferize_valid 
        = vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__io_up_ar_valid;
}

void Vtop___024root___nba_sequent__TOP__114(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__114\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__pushToPopGray_buffercc__DOT__reset_synchronized) {
        vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__pushToPopGray_buffercc__DOT__buffers_1 = 0U;
        vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__pushToPopGray_buffercc__DOT__buffers_0 = 0U;
    } else {
        vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__pushToPopGray_buffercc__DOT__buffers_1 
            = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__pushToPopGray_buffercc__DOT__buffers_0;
        vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__pushToPopGray_buffercc__DOT__buffers_0 
            = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__pushToPopGray_buffercc__DOT__io_dataIn;
    }
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__pushToPopGray_buffercc__DOT__io_dataOut 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__pushToPopGray_buffercc__DOT__buffers_1;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__pushToPopGray_buffercc_io_dataOut 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__pushToPopGray_buffercc__DOT__io_dataOut;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_pushPtrGray 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__pushToPopGray_buffercc_io_dataOut;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT___zz_io_popOccupancy_2 
        = (1U & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_pushPtrGray) 
                 >> 3U));
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT___zz_io_popOccupancy_1 
        = (1U & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT___zz_io_popOccupancy_2) 
                 ^ ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_pushPtrGray) 
                    >> 2U)));
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT___zz_io_popOccupancy 
        = (1U & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT___zz_io_popOccupancy_1) 
                 ^ ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_pushPtrGray) 
                    >> 1U)));
}

void Vtop___024root___nba_sequent__TOP__115(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__115\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__pushToPopGray_buffercc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc_toplevel_dspRst_synchronized) {
        vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__pushToPopGray_buffercc__DOT__buffers_1 = 0U;
        vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__pushToPopGray_buffercc__DOT__buffers_0 = 0U;
    } else {
        vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__pushToPopGray_buffercc__DOT__buffers_1 
            = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__pushToPopGray_buffercc__DOT__buffers_0;
        vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__pushToPopGray_buffercc__DOT__buffers_0 
            = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__pushToPopGray_buffercc__DOT__io_dataIn;
    }
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__pushToPopGray_buffercc__DOT__io_dataOut 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__pushToPopGray_buffercc__DOT__buffers_1;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__pushToPopGray_buffercc_io_dataOut 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__pushToPopGray_buffercc__DOT__io_dataOut;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_pushPtrGray 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__pushToPopGray_buffercc_io_dataOut;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT___zz_io_popOccupancy_2 
        = (1U & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_pushPtrGray) 
                 >> 3U));
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT___zz_io_popOccupancy_1 
        = (1U & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT___zz_io_popOccupancy_2) 
                 ^ ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_pushPtrGray) 
                    >> 2U)));
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT___zz_io_popOccupancy 
        = (1U & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT___zz_io_popOccupancy_1) 
                 ^ ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popCC_pushPtrGray) 
                    >> 1U)));
}

void Vtop___024root___nba_sequent__TOP__116(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__116\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popToPushGray_buffercc__DOT__dspRst) {
        vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popToPushGray_buffercc__DOT__buffers_1 = 0U;
        vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popToPushGray_buffercc__DOT__buffers_0 = 0U;
    } else {
        vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popToPushGray_buffercc__DOT__buffers_1 
            = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popToPushGray_buffercc__DOT__buffers_0;
        vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popToPushGray_buffercc__DOT__buffers_0 
            = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popToPushGray_buffercc__DOT__io_dataIn;
    }
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popToPushGray_buffercc__DOT__io_dataOut 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popToPushGray_buffercc__DOT__buffers_1;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popToPushGray_buffercc_io_dataOut 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popToPushGray_buffercc__DOT__io_dataOut;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__pushCC_popPtrGray 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__popToPushGray_buffercc_io_dataOut;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT___zz_io_pushOccupancy_2 
        = (1U & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__pushCC_popPtrGray) 
                 >> 3U));
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT___zz_io_pushOccupancy_1 
        = (1U & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT___zz_io_pushOccupancy_2) 
                 ^ ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__pushCC_popPtrGray) 
                    >> 2U)));
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT___zz_io_pushOccupancy 
        = (1U & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT___zz_io_pushOccupancy_1) 
                 ^ ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__d_1__DOT__pushCC_popPtrGray) 
                    >> 1U)));
}

void Vtop___024root___nba_sequent__TOP__117(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__117\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popToPushGray_buffercc__DOT__hostRst) {
        vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popToPushGray_buffercc__DOT__buffers_1 = 0U;
        vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popToPushGray_buffercc__DOT__buffers_0 = 0U;
    } else {
        vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popToPushGray_buffercc__DOT__buffers_1 
            = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popToPushGray_buffercc__DOT__buffers_0;
        vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popToPushGray_buffercc__DOT__buffers_0 
            = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popToPushGray_buffercc__DOT__io_dataIn;
    }
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popToPushGray_buffercc__DOT__io_dataOut 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popToPushGray_buffercc__DOT__buffers_1;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popToPushGray_buffercc_io_dataOut 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popToPushGray_buffercc__DOT__io_dataOut;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__pushCC_popPtrGray 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popToPushGray_buffercc_io_dataOut;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT___zz_io_pushOccupancy_2 
        = (1U & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__pushCC_popPtrGray) 
                 >> 3U));
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT___zz_io_pushOccupancy_1 
        = (1U & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT___zz_io_pushOccupancy_2) 
                 ^ ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__pushCC_popPtrGray) 
                    >> 2U)));
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT___zz_io_pushOccupancy 
        = (1U & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT___zz_io_pushOccupancy_1) 
                 ^ ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__pushCC_popPtrGray) 
                    >> 1U)));
}

void Vtop___024root___nba_sequent__TOP__118(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__118\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ__DOT__logic_fifo__DOT__doPush) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ__DOT__logic_fifo__DOT__slots_3_deadline 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ__DOT__logic_fifo__DOT__slots_2_deadline;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ__DOT__logic_fifo__DOT__slots_3_data 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ__DOT__logic_fifo__DOT__slots_2_data;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ__DOT__logic_fifo__DOT__slots_2_deadline 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ__DOT__logic_fifo__DOT__slots_1_deadline;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ__DOT__logic_fifo__DOT__slots_2_data 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ__DOT__logic_fifo__DOT__slots_1_data;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ__DOT__logic_fifo__DOT__slots_1_deadline 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ__DOT__logic_fifo__DOT__slots_0_deadline;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ__DOT__logic_fifo__DOT__slots_1_data 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ__DOT__logic_fifo__DOT__slots_0_data;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ__DOT__logic_fifo__DOT__slots_0_deadline 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ__DOT__logic_fifo__DOT__io_push_payload_deadline;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ__DOT__logic_fifo__DOT__slots_0_data 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__ampQ__DOT__logic_fifo__DOT__io_push_payload_data;
    }
}

void Vtop___024root___nba_sequent__TOP__119(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__119\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ__DOT__logic_fifo__DOT__doPush) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ__DOT__logic_fifo__DOT__slots_3_deadline 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ__DOT__logic_fifo__DOT__slots_2_deadline;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ__DOT__logic_fifo__DOT__slots_3_data 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ__DOT__logic_fifo__DOT__slots_2_data;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ__DOT__logic_fifo__DOT__slots_2_deadline 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ__DOT__logic_fifo__DOT__slots_1_deadline;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ__DOT__logic_fifo__DOT__slots_2_data 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ__DOT__logic_fifo__DOT__slots_1_data;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ__DOT__logic_fifo__DOT__slots_1_deadline 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ__DOT__logic_fifo__DOT__slots_0_deadline;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ__DOT__logic_fifo__DOT__slots_1_data 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ__DOT__logic_fifo__DOT__slots_0_data;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ__DOT__logic_fifo__DOT__slots_0_deadline 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ__DOT__logic_fifo__DOT__io_push_payload_deadline;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ__DOT__logic_fifo__DOT__slots_0_data 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phaseQ__DOT__logic_fifo__DOT__io_push_payload_data;
    }
}

void Vtop___024root___nba_sequent__TOP__120(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__120\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ__DOT__logic_fifo__DOT__doPush) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ__DOT__logic_fifo__DOT__slots_3_deadline 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ__DOT__logic_fifo__DOT__slots_2_deadline;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ__DOT__logic_fifo__DOT__slots_3_data 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ__DOT__logic_fifo__DOT__slots_2_data;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ__DOT__logic_fifo__DOT__slots_2_deadline 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ__DOT__logic_fifo__DOT__slots_1_deadline;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ__DOT__logic_fifo__DOT__slots_2_data 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ__DOT__logic_fifo__DOT__slots_1_data;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ__DOT__logic_fifo__DOT__slots_1_deadline 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ__DOT__logic_fifo__DOT__slots_0_deadline;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ__DOT__logic_fifo__DOT__slots_1_data 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ__DOT__logic_fifo__DOT__slots_0_data;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ__DOT__logic_fifo__DOT__slots_0_deadline 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ__DOT__logic_fifo__DOT__io_push_payload_deadline;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ__DOT__logic_fifo__DOT__slots_0_data 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqCQ__DOT__logic_fifo__DOT__io_push_payload_data;
    }
}

void Vtop___024root___nba_sequent__TOP__121(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__121\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ__DOT__logic_fifo__DOT__doPush) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ__DOT__logic_fifo__DOT__slots_3_deadline 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ__DOT__logic_fifo__DOT__slots_2_deadline;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ__DOT__logic_fifo__DOT__slots_3_data 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ__DOT__logic_fifo__DOT__slots_2_data;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ__DOT__logic_fifo__DOT__slots_2_deadline 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ__DOT__logic_fifo__DOT__slots_1_deadline;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ__DOT__logic_fifo__DOT__slots_2_data 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ__DOT__logic_fifo__DOT__slots_1_data;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ__DOT__logic_fifo__DOT__slots_1_deadline 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ__DOT__logic_fifo__DOT__slots_0_deadline;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ__DOT__logic_fifo__DOT__slots_1_data 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ__DOT__logic_fifo__DOT__slots_0_data;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ__DOT__logic_fifo__DOT__slots_0_deadline 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ__DOT__logic_fifo__DOT__io_push_payload_deadline;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ__DOT__logic_fifo__DOT__slots_0_data 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__freqPQ__DOT__logic_fifo__DOT__io_push_payload_data;
    }
}

void Vtop___024root___nba_sequent__TOP__122(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__122\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ__DOT__logic_fifo__DOT__doPush) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ__DOT__logic_fifo__DOT__slots_3_deadline 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ__DOT__logic_fifo__DOT__slots_2_deadline;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ__DOT__logic_fifo__DOT__slots_3_data 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ__DOT__logic_fifo__DOT__slots_2_data;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ__DOT__logic_fifo__DOT__slots_2_deadline 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ__DOT__logic_fifo__DOT__slots_1_deadline;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ__DOT__logic_fifo__DOT__slots_2_data 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ__DOT__logic_fifo__DOT__slots_1_data;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ__DOT__logic_fifo__DOT__slots_1_deadline 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ__DOT__logic_fifo__DOT__slots_0_deadline;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ__DOT__logic_fifo__DOT__slots_1_data 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ__DOT__logic_fifo__DOT__slots_0_data;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ__DOT__logic_fifo__DOT__slots_0_deadline 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ__DOT__logic_fifo__DOT__io_push_payload_deadline;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ__DOT__logic_fifo__DOT__slots_0_data 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__addrQ__DOT__logic_fifo__DOT__io_push_payload_data;
    }
}

void Vtop___024root___nba_sequent__TOP__123(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__123\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ__DOT__logic_fifo__DOT__doPush) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ__DOT__logic_fifo__DOT__slots_3_deadline 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ__DOT__logic_fifo__DOT__slots_2_deadline;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ__DOT__logic_fifo__DOT__slots_3_data 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ__DOT__logic_fifo__DOT__slots_2_data;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ__DOT__logic_fifo__DOT__slots_2_deadline 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ__DOT__logic_fifo__DOT__slots_1_deadline;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ__DOT__logic_fifo__DOT__slots_2_data 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ__DOT__logic_fifo__DOT__slots_1_data;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ__DOT__logic_fifo__DOT__slots_1_deadline 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ__DOT__logic_fifo__DOT__slots_0_deadline;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ__DOT__logic_fifo__DOT__slots_1_data 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ__DOT__logic_fifo__DOT__slots_0_data;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ__DOT__logic_fifo__DOT__slots_0_deadline 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ__DOT__logic_fifo__DOT__io_push_payload_deadline;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ__DOT__logic_fifo__DOT__slots_0_data 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__durQ__DOT__logic_fifo__DOT__io_push_payload_data;
    }
}

void Vtop___024root___nba_sequent__TOP__124(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__124\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_rams_0__DOT__bram_4__DOT__output_register__DOT__douta_reg 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_rams_0__DOT__bram_4__DOT__ram_data_a;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_rams_0__DOT__bram_4__DOT__douta 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_rams_0__DOT__bram_4__DOT__output_register__DOT__douta_reg;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_rams_0__DOT__bram_4__DOT__ram_data_a 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_rams_0__DOT__bram_4__DOT__BRAM
        [vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_rams_0__DOT__bram_4__DOT__addra];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_rams_0__DOT__bram_4_douta 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_rams_0__DOT__bram_4__DOT__douta;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_rams_0__DOT__io_port0_rdata 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_rams_0__DOT__bram_4_douta;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_rams_0_io_port0_rdata 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_rams_0__DOT__io_port0_rdata;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel_io_memPort_rsp[0U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_rams_0_io_port0_rdata;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel_io_memPort_rsp[1U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_rams_0_io_port0_rdata;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel_io_memPort_rsp[2U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_rams_0_io_port0_rdata;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel_io_memPort_rsp[3U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_rams_0_io_port0_rdata;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__io_memPort_rsp[0U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel_io_memPort_rsp[0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__io_memPort_rsp[1U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel_io_memPort_rsp[1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__io_memPort_rsp[2U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel_io_memPort_rsp[2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__io_memPort_rsp[3U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel_io_memPort_rsp[3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__io_memPort_rsp[0U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__io_memPort_rsp[0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__io_memPort_rsp[1U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__io_memPort_rsp[1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__io_memPort_rsp[2U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__io_memPort_rsp[2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__io_memPort_rsp[3U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__io_memPort_rsp[3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__io_memPort_rsp[0U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__io_memPort_rsp[0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__io_memPort_rsp[1U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__io_memPort_rsp[1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__io_memPort_rsp[2U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__io_memPort_rsp[2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__io_memPort_rsp[3U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__io_memPort_rsp[3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__lanes_0 
        = (0x0000ffffU & vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__io_memPort_rsp[0U]);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__lanes_1 
        = (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__io_memPort_rsp[0U] 
           >> 0x00000010U);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__lanes_2 
        = (0x0000ffffU & vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__io_memPort_rsp[1U]);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__lanes_3 
        = (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__io_memPort_rsp[1U] 
           >> 0x00000010U);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__lanes_4 
        = (0x0000ffffU & vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__io_memPort_rsp[2U]);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__lanes_5 
        = (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__io_memPort_rsp[2U] 
           >> 0x00000010U);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__lanes_6 
        = (0x0000ffffU & vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__io_memPort_rsp[3U]);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__lanes_7 
        = (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__io_memPort_rsp[3U] 
           >> 0x00000010U);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__envComb_0_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__lanes_0;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__envComb_0_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__lanes_1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__envComb_1_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__lanes_2;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__envComb_1_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__lanes_3;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__envComb_2_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__lanes_4;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__envComb_2_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__lanes_5;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__envComb_3_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__lanes_6;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__envComb_3_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__lanes_7;
}

extern const VlUnpacked<CData/*2:0*/, 128> Vtop__ConstPool__TABLE_h7891cb45_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_hacf32869_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h099b85a9_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_hf728c1db_0;

void Vtop___024root___nba_sequent__TOP__125(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__125\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx504;
    __Vtableidx504 = 0;
    // Body
    __Vtableidx504 = ((((((IData)(vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__skidBuffer_isValid) 
                          << 3U) | ((IData)(vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__skidBuffer_isReady) 
                                    << 2U)) | (((IData)(vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__skidBuffer_ready) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT___zz_skidBuffer_valid))) 
                       << 3U) | (((IData)(vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__cmd_isValid) 
                                  << 2U) | (((IData)(vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__cmd_isReady) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__hostRst))));
    if ((1U & Vtop__ConstPool__TABLE_h7891cb45_0[__Vtableidx504])) {
        vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT___zz_skidBuffer_valid_1 
            = Vtop__ConstPool__TABLE_hacf32869_0[__Vtableidx504];
    }
    if ((2U & Vtop__ConstPool__TABLE_h7891cb45_0[__Vtableidx504])) {
        vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT___zz_skidBuffer_valid_2 
            = Vtop__ConstPool__TABLE_h099b85a9_0[__Vtableidx504];
    }
    if ((4U & Vtop__ConstPool__TABLE_h7891cb45_0[__Vtableidx504])) {
        vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__rsp_up_valid 
            = Vtop__ConstPool__TABLE_hf728c1db_0[__Vtableidx504];
    }
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__rsp_down_valid 
        = vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__rsp_up_valid;
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__rsp_up_isValid 
        = vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__rsp_up_valid;
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT___zz_skidBuffer_valid 
        = vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT___zz_skidBuffer_valid_1;
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT___zz_cmd_ready 
        = (1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT___zz_skidBuffer_valid_2)));
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__when_StageLink_l71_1 
        = (1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__rsp_up_isValid)));
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__skidBuffer_valid 
        = ((IData)(vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT___zz_skidBuffer_valid) 
           | (IData)(vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT___zz_skidBuffer_valid_2));
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__when_StageLink_l71 
        = (1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT___zz_skidBuffer_valid)));
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__skidBuffer_isValid 
        = vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__skidBuffer_valid;
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__cmd_ready 
        = vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT___zz_cmd_ready;
    if (vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__when_StageLink_l71) {
        vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__cmd_ready = 1U;
    }
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__cmd_isReady 
        = vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__cmd_ready;
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__io_up_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__cmd_isReady;
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic_io_up_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__io_up_a_ready;
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_up_bus_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic_io_up_a_ready;
    vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_down_bus_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_up_bus_a_ready;
    vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_up_bus_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_down_bus_a_ready;
    vlSelfRef.PulseTableSoc__DOT__robs_up_noDecoder_toDown_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_up_bus_a_ready;
    vlSelfRef.PulseTableSoc__DOT__robs_up_bus_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_noDecoder_toDown_a_ready;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_m2sPipe_ready 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_bus_a_ready;
}

void Vtop___024root___nba_sequent__TOP__126(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__126\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__postedStoreShim_1__DOT__riscqReset) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__postedStoreShim_1__DOT__busy = 0U;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__postedStoreShim_1__DOT__inflightIsRead = 0U;
    } else {
        if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__postedStoreShim_1__DOT__io_down_cmd_fire) {
            vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__postedStoreShim_1__DOT__busy = 1U;
            vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__postedStoreShim_1__DOT__inflightIsRead 
                = (1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__postedStoreShim_1__DOT__sbuf_io_pop_valid)));
        }
        if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__postedStoreShim_1__DOT__io_down_rsp_valid) {
            vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__postedStoreShim_1__DOT__busy = 0U;
        }
    }
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__postedStoreShim_1__DOT__writeAck 
        = ((1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__postedStoreShim_1__DOT__riscqReset))) 
           && ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__postedStoreShim_1__DOT__io_up_cmd_fire) 
               & (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__postedStoreShim_1__DOT__io_up_cmd_payload_write)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__postedStoreShim_1__DOT__canIssue 
        = (1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__postedStoreShim_1__DOT__busy)));
}

void Vtop___024root___nba_sequent__TOP__127(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__127\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__a_arbiter__DOT__dspRst) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__a_arbiter__DOT__locked = 0U;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__a_arbiter__DOT__maskLocked_1 = 1U;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__a_arbiter__DOT__maskLocked_0 = 0U;
    } else {
        if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__a_arbiter__DOT__io_output_valid) {
            vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__a_arbiter__DOT__locked = 1U;
            vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__a_arbiter__DOT__maskLocked_1 
                = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__a_arbiter__DOT__maskRouted_1;
            vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__a_arbiter__DOT__maskLocked_0 
                = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__a_arbiter__DOT__maskRouted_0;
        }
        if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__a_arbiter__DOT__when_Stream_l871) {
            vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__a_arbiter__DOT__locked = 0U;
        }
    }
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__a_arbiter__DOT___zz___05Fzz_maskProposal_0_2_2 
        = (((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__a_arbiter__DOT__maskLocked_0) 
            << 1U) | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__a_arbiter__DOT__maskLocked_1));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__a_arbiter__DOT___zz___05Fzz_maskProposal_0_2_1 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__a_arbiter__DOT___zz___05Fzz_maskProposal_0_2_2;
}

void Vtop___024root___nba_sequent__TOP__128(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__128\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_rams_0__DOT__bram_4__DOT__output_register__DOT__douta_reg 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_rams_0__DOT__bram_4__DOT__ram_data_a;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_rams_0__DOT__bram_4__DOT__ram_data_a 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_rams_0__DOT__bram_4__DOT__BRAM
        [vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_rams_0__DOT__bram_4__DOT__addra];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_rams_0__DOT__bram_4__DOT__douta 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_rams_0__DOT__bram_4__DOT__output_register__DOT__douta_reg;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_rams_0__DOT__bram_4_douta 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_rams_0__DOT__bram_4__DOT__douta;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_rams_0__DOT__io_port0_rdata 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_rams_0__DOT__bram_4_douta;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_rams_0_io_port0_rdata 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_rams_0__DOT__io_port0_rdata;
    vlSelfRef.PulseTableSoc__DOT___zz_io_memPort_rsp_2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_rams_0_io_port0_rdata;
    vlSelfRef.PulseTableSoc__DOT___zz_io_memPort_rsp_3[0U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_rams_0_io_port0_rdata;
    vlSelfRef.PulseTableSoc__DOT___zz_io_memPort_rsp_3[1U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_rams_0_io_port0_rdata;
    vlSelfRef.PulseTableSoc__DOT___zz_io_memPort_rsp_3[2U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_rams_0_io_port0_rdata;
    vlSelfRef.PulseTableSoc__DOT___zz_io_memPort_rsp_3[3U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_rams_0_io_port0_rdata;
    vlSelfRef.PulseTableSoc__DOT___zz_io_memPort_rsp_3[4U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_rams_0_io_port0_rdata;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_memPort_rsp[0U] 
        = vlSelfRef.PulseTableSoc__DOT___zz_io_memPort_rsp_3[0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_memPort_rsp[1U] 
        = vlSelfRef.PulseTableSoc__DOT___zz_io_memPort_rsp_3[1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_memPort_rsp[2U] 
        = vlSelfRef.PulseTableSoc__DOT___zz_io_memPort_rsp_3[2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_memPort_rsp[3U] 
        = vlSelfRef.PulseTableSoc__DOT___zz_io_memPort_rsp_3[3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_memPort_rsp[4U] 
        = vlSelfRef.PulseTableSoc__DOT___zz_io_memPort_rsp_3[4U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_memPort_rsp[5U] 
        = vlSelfRef.PulseTableSoc__DOT___zz_io_memPort_rsp_2;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_memPort_rsp[6U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_rams_0_io_port0_rdata;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_memPort_rsp[7U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_rams_0_io_port0_rdata;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_memPort_rsp[8U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_rams_0_io_port0_rdata;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_memPort_rsp[9U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_rams_0_io_port0_rdata;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_memPort_rsp[10U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_rams_0_io_port0_rdata;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_memPort_rsp[11U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_rams_0_io_port0_rdata;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_memPort_rsp[12U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_rams_0_io_port0_rdata;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_memPort_rsp[13U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_rams_0_io_port0_rdata;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_memPort_rsp[14U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_rams_0_io_port0_rdata;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_memPort_rsp[15U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_rams_0_io_port0_rdata;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_memPort_rsp[0U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_memPort_rsp[0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_memPort_rsp[1U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_memPort_rsp[1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_memPort_rsp[2U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_memPort_rsp[2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_memPort_rsp[3U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_memPort_rsp[3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_memPort_rsp[4U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_memPort_rsp[4U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_memPort_rsp[5U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_memPort_rsp[5U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_memPort_rsp[6U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_memPort_rsp[6U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_memPort_rsp[7U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_memPort_rsp[7U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_memPort_rsp[8U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_memPort_rsp[8U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_memPort_rsp[9U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_memPort_rsp[9U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_memPort_rsp[10U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_memPort_rsp[10U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_memPort_rsp[11U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_memPort_rsp[11U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_memPort_rsp[12U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_memPort_rsp[12U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_memPort_rsp[13U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_memPort_rsp[13U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_memPort_rsp[14U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_memPort_rsp[14U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_memPort_rsp[15U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_memPort_rsp[15U];
}

void Vtop___024root___nba_sequent__TOP__129(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__129\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__d_arbiter__DOT__riscqReset) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__d_arbiter__DOT__locked = 0U;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__d_arbiter__DOT__maskLocked_0 = 0U;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__d_arbiter__DOT__maskLocked_1 = 0U;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__d_arbiter__DOT__maskLocked_2 = 1U;
    } else {
        if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__d_arbiter__DOT__io_output_valid) {
            vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__d_arbiter__DOT__locked = 1U;
            vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__d_arbiter__DOT__maskLocked_0 
                = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__d_arbiter__DOT__maskRouted_0;
            vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__d_arbiter__DOT__maskLocked_1 
                = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__d_arbiter__DOT__maskRouted_1;
            vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__d_arbiter__DOT__maskLocked_2 
                = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__d_arbiter__DOT__maskRouted_2;
        }
        if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__d_arbiter__DOT__when_Stream_l871) {
            vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__d_arbiter__DOT__locked = 0U;
        }
    }
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__d_arbiter__DOT___zz___05Fzz_maskProposal_0_2_2 
        = (((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__d_arbiter__DOT__maskLocked_1) 
            << 2U) | (((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__d_arbiter__DOT__maskLocked_0) 
                       << 1U) | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__d_arbiter__DOT__maskLocked_2)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__d_arbiter__DOT___zz___05Fzz_maskProposal_0_2_1 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__d_arbiter__DOT___zz___05Fzz_maskProposal_0_2_2;
}

void Vtop___024root___nba_sequent__TOP__130(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__130\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__bram_4__DOT__output_register__DOT__douta_reg[0U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__bram_4__DOT__ram_data_a[0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__bram_4__DOT__output_register__DOT__douta_reg[1U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__bram_4__DOT__ram_data_a[1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__bram_4__DOT__output_register__DOT__douta_reg[2U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__bram_4__DOT__ram_data_a[2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__bram_4__DOT__output_register__DOT__douta_reg[3U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__bram_4__DOT__ram_data_a[3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__bram_4__DOT__douta[0U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__bram_4__DOT__output_register__DOT__douta_reg[0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__bram_4__DOT__douta[1U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__bram_4__DOT__output_register__DOT__douta_reg[1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__bram_4__DOT__douta[2U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__bram_4__DOT__output_register__DOT__douta_reg[2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__bram_4__DOT__douta[3U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__bram_4__DOT__output_register__DOT__douta_reg[3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__bram_4__DOT__ram_data_a[0U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__bram_4__DOT__BRAM
        [vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__bram_4__DOT__addra][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__bram_4__DOT__ram_data_a[1U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__bram_4__DOT__BRAM
        [vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__bram_4__DOT__addra][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__bram_4__DOT__ram_data_a[2U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__bram_4__DOT__BRAM
        [vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__bram_4__DOT__addra][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__bram_4__DOT__ram_data_a[3U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__bram_4__DOT__BRAM
        [vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__bram_4__DOT__addra][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__bram_4_douta[0U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__bram_4__DOT__douta[0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__bram_4_douta[1U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__bram_4__DOT__douta[1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__bram_4_douta[2U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__bram_4__DOT__douta[2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__bram_4_douta[3U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__bram_4__DOT__douta[3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__io_port0_rdata[0U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__bram_4_douta[0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__io_port0_rdata[1U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__bram_4_douta[1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__io_port0_rdata[2U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__bram_4_douta[2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__io_port0_rdata[3U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__bram_4_douta[3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0_io_port0_rdata[0U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__io_port0_rdata[0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0_io_port0_rdata[1U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__io_port0_rdata[1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0_io_port0_rdata[2U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__io_port0_rdata[2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0_io_port0_rdata[3U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__io_port0_rdata[3U];
    vlSelfRef.PulseTableSoc__DOT___zz_io_memPort_rsp 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0_io_port0_rdata[1U];
    vlSelfRef.PulseTableSoc__DOT___zz_io_memPort_rsp_1[0U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0_io_port0_rdata[0U];
    vlSelfRef.PulseTableSoc__DOT___zz_io_memPort_rsp_1[1U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0_io_port0_rdata[0U];
    vlSelfRef.PulseTableSoc__DOT___zz_io_memPort_rsp_1[2U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0_io_port0_rdata[0U];
    vlSelfRef.PulseTableSoc__DOT___zz_io_memPort_rsp_1[3U] 
        = (IData)((((QData)((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0_io_port0_rdata[1U])) 
                    << 0x00000020U) | (QData)((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0_io_port0_rdata[0U]))));
    vlSelfRef.PulseTableSoc__DOT___zz_io_memPort_rsp_1[4U] 
        = (IData)(((((QData)((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0_io_port0_rdata[1U])) 
                     << 0x00000020U) | (QData)((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0_io_port0_rdata[0U]))) 
                   >> 0x00000020U));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_memPort_rsp[0U] 
        = vlSelfRef.PulseTableSoc__DOT___zz_io_memPort_rsp_1[0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_memPort_rsp[1U] 
        = vlSelfRef.PulseTableSoc__DOT___zz_io_memPort_rsp_1[1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_memPort_rsp[2U] 
        = vlSelfRef.PulseTableSoc__DOT___zz_io_memPort_rsp_1[2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_memPort_rsp[3U] 
        = vlSelfRef.PulseTableSoc__DOT___zz_io_memPort_rsp_1[3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_memPort_rsp[4U] 
        = vlSelfRef.PulseTableSoc__DOT___zz_io_memPort_rsp_1[4U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_memPort_rsp[5U] 
        = (IData)((((QData)((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0_io_port0_rdata[1U])) 
                    << 0x00000020U) | (QData)((IData)(vlSelfRef.PulseTableSoc__DOT___zz_io_memPort_rsp))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_memPort_rsp[6U] 
        = (IData)(((((QData)((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0_io_port0_rdata[1U])) 
                     << 0x00000020U) | (QData)((IData)(vlSelfRef.PulseTableSoc__DOT___zz_io_memPort_rsp))) 
                   >> 0x00000020U));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_memPort_rsp[7U] 
        = (IData)((((QData)((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0_io_port0_rdata[2U])) 
                    << 0x00000020U) | (QData)((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0_io_port0_rdata[1U]))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_memPort_rsp[8U] 
        = (IData)(((((QData)((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0_io_port0_rdata[2U])) 
                     << 0x00000020U) | (QData)((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0_io_port0_rdata[1U]))) 
                   >> 0x00000020U));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_memPort_rsp[9U] 
        = (IData)((((QData)((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0_io_port0_rdata[2U])) 
                    << 0x00000020U) | (QData)((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0_io_port0_rdata[2U]))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_memPort_rsp[10U] 
        = (IData)(((((QData)((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0_io_port0_rdata[2U])) 
                     << 0x00000020U) | (QData)((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0_io_port0_rdata[2U]))) 
                   >> 0x00000020U));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_memPort_rsp[11U] 
        = (IData)((((QData)((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0_io_port0_rdata[3U])) 
                    << 0x00000020U) | (QData)((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0_io_port0_rdata[2U]))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_memPort_rsp[12U] 
        = (IData)(((((QData)((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0_io_port0_rdata[3U])) 
                     << 0x00000020U) | (QData)((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0_io_port0_rdata[2U]))) 
                   >> 0x00000020U));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_memPort_rsp[13U] 
        = (IData)((((QData)((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0_io_port0_rdata[3U])) 
                    << 0x00000020U) | (QData)((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0_io_port0_rdata[3U]))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_memPort_rsp[14U] 
        = (IData)(((((QData)((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0_io_port0_rdata[3U])) 
                     << 0x00000020U) | (QData)((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0_io_port0_rdata[3U]))) 
                   >> 0x00000020U));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_memPort_rsp[15U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0_io_port0_rdata[3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__io_memPort_rsp[0U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_memPort_rsp[0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__io_memPort_rsp[1U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_memPort_rsp[1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__io_memPort_rsp[2U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_memPort_rsp[2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__io_memPort_rsp[3U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_memPort_rsp[3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__io_memPort_rsp[4U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_memPort_rsp[4U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__io_memPort_rsp[5U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_memPort_rsp[5U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__io_memPort_rsp[6U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_memPort_rsp[6U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__io_memPort_rsp[7U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_memPort_rsp[7U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__io_memPort_rsp[8U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_memPort_rsp[8U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__io_memPort_rsp[9U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_memPort_rsp[9U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__io_memPort_rsp[10U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_memPort_rsp[10U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__io_memPort_rsp[11U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_memPort_rsp[11U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__io_memPort_rsp[12U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_memPort_rsp[12U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__io_memPort_rsp[13U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_memPort_rsp[13U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__io_memPort_rsp[14U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_memPort_rsp[14U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__io_memPort_rsp[15U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_memPort_rsp[15U];
}

void Vtop___024root___nba_sequent__TOP__131(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__131\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__wea))) {
        vlSelfRef.__VdlyVal__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v0 
            = (0x000000ffU & vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dina[0U]);
        vlSelfRef.__VdlyDim0__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v0 
            = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addra;
        vlSelfRef.__VdlySet__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v0 = 1U;
    }
    if ((2U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__wea))) {
        vlSelfRef.__VdlyVal__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v1 
            = (0x000000ffU & (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dina[0U] 
                              >> 8U));
        vlSelfRef.__VdlyDim0__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v1 
            = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addra;
        vlSelfRef.__VdlySet__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v1 = 1U;
    }
    if ((4U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__wea))) {
        vlSelfRef.__VdlyVal__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v2 
            = (0x000000ffU & (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dina[0U] 
                              >> 0x00000010U));
        vlSelfRef.__VdlyDim0__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v2 
            = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addra;
        vlSelfRef.__VdlySet__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v2 = 1U;
    }
    if ((8U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__wea))) {
        vlSelfRef.__VdlyVal__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v3 
            = (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dina[0U] 
               >> 0x00000018U);
        vlSelfRef.__VdlyDim0__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v3 
            = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addra;
        vlSelfRef.__VdlySet__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v3 = 1U;
    }
    if ((0x00000010U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__wea))) {
        vlSelfRef.__VdlyVal__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v4 
            = (0x000000ffU & vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dina[1U]);
        vlSelfRef.__VdlyDim0__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v4 
            = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addra;
        vlSelfRef.__VdlySet__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v4 = 1U;
    }
    if ((0x00000020U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__wea))) {
        vlSelfRef.__VdlyVal__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v5 
            = (0x000000ffU & (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dina[1U] 
                              >> 8U));
        vlSelfRef.__VdlyDim0__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v5 
            = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addra;
        vlSelfRef.__VdlySet__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v5 = 1U;
    }
    if ((0x00000040U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__wea))) {
        vlSelfRef.__VdlyVal__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v6 
            = (0x000000ffU & (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dina[1U] 
                              >> 0x00000010U));
        vlSelfRef.__VdlyDim0__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v6 
            = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addra;
        vlSelfRef.__VdlySet__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v6 = 1U;
    }
    if ((0x00000080U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__wea))) {
        vlSelfRef.__VdlyVal__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v7 
            = (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dina[1U] 
               >> 0x00000018U);
        vlSelfRef.__VdlyDim0__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v7 
            = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addra;
        vlSelfRef.__VdlySet__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v7 = 1U;
    }
    if ((0x00000100U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__wea))) {
        vlSelfRef.__VdlyVal__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v8 
            = (0x000000ffU & vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dina[2U]);
        vlSelfRef.__VdlyDim0__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v8 
            = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addra;
        vlSelfRef.__VdlySet__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v8 = 1U;
    }
    if ((0x00000200U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__wea))) {
        vlSelfRef.__VdlyVal__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v9 
            = (0x000000ffU & (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dina[2U] 
                              >> 8U));
        vlSelfRef.__VdlyDim0__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v9 
            = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addra;
        vlSelfRef.__VdlySet__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v9 = 1U;
    }
    if ((0x00000400U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__wea))) {
        vlSelfRef.__VdlyVal__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v10 
            = (0x000000ffU & (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dina[2U] 
                              >> 0x00000010U));
        vlSelfRef.__VdlyDim0__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v10 
            = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addra;
        vlSelfRef.__VdlySet__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v10 = 1U;
    }
    if ((0x00000800U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__wea))) {
        vlSelfRef.__VdlyVal__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v11 
            = (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dina[2U] 
               >> 0x00000018U);
        vlSelfRef.__VdlyDim0__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v11 
            = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addra;
        vlSelfRef.__VdlySet__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v11 = 1U;
    }
    if ((0x00001000U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__wea))) {
        vlSelfRef.__VdlyVal__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v12 
            = (0x000000ffU & vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dina[3U]);
        vlSelfRef.__VdlyDim0__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v12 
            = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addra;
        vlSelfRef.__VdlySet__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v12 = 1U;
    }
    if ((0x00002000U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__wea))) {
        vlSelfRef.__VdlyVal__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v13 
            = (0x000000ffU & (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dina[3U] 
                              >> 8U));
        vlSelfRef.__VdlyDim0__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v13 
            = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addra;
        vlSelfRef.__VdlySet__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v13 = 1U;
    }
    if ((0x00004000U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__wea))) {
        vlSelfRef.__VdlyVal__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v14 
            = (0x000000ffU & (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dina[3U] 
                              >> 0x00000010U));
        vlSelfRef.__VdlyDim0__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v14 
            = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addra;
        vlSelfRef.__VdlySet__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v14 = 1U;
    }
    if ((0x00008000U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__wea))) {
        vlSelfRef.__VdlyVal__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v15 
            = (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dina[3U] 
               >> 0x00000018U);
        vlSelfRef.__VdlyDim0__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v15 
            = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addra;
        vlSelfRef.__VdlySet__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v15 = 1U;
    }
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__output_register__DOT__douta_reg[0U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_a[0U];
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__output_register__DOT__douta_reg[1U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_a[1U];
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__output_register__DOT__douta_reg[2U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_a[2U];
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__output_register__DOT__douta_reg[3U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_a[3U];
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__douta[0U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__output_register__DOT__douta_reg[0U];
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__douta[1U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__output_register__DOT__douta_reg[1U];
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__douta[2U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__output_register__DOT__douta_reg[2U];
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__douta[3U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__output_register__DOT__douta_reg[3U];
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_a[0U] 
        = ((0xffffff00U & vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_a[0U]) 
           | (0x000000ffU & ((1U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__wea))
                              ? vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dina[0U]
                              : vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM
                             [vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addra][0U])));
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_a[0U] 
        = ((0xffff00ffU & vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_a[0U]) 
           | (0x0000ff00U & (((2U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__wea))
                               ? ((vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dina[0U] 
                                   << 0x00000018U) 
                                  | (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dina[0U] 
                                     >> 8U)) : ((vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM
                                                 [vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addra][0U] 
                                                 << 0x00000018U) 
                                                | (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM
                                                   [vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addra][0U] 
                                                   >> 8U))) 
                             << 8U)));
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_a[0U] 
        = ((0xff00ffffU & vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_a[0U]) 
           | (0x00ff0000U & (((4U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__wea))
                               ? ((vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dina[0U] 
                                   << 0x00000010U) 
                                  | (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dina[0U] 
                                     >> 0x00000010U))
                               : ((vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM
                                   [vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addra][0U] 
                                   << 0x00000010U) 
                                  | (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM
                                     [vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addra][0U] 
                                     >> 0x00000010U))) 
                             << 0x00000010U)));
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_a[0U] 
        = ((0x00ffffffU & vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_a[0U]) 
           | (((8U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__wea))
                ? ((vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dina[0U] 
                    << 8U) | (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dina[0U] 
                              >> 0x00000018U)) : ((vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM
                                                   [vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addra][0U] 
                                                   << 8U) 
                                                  | (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM
                                                     [vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addra][0U] 
                                                     >> 0x00000018U))) 
              << 0x00000018U));
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_a[1U] 
        = ((0xffffff00U & vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_a[1U]) 
           | (0x000000ffU & ((0x00000010U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__wea))
                              ? vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dina[1U]
                              : vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM
                             [vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addra][1U])));
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_a[1U] 
        = ((0xffff00ffU & vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_a[1U]) 
           | (0x0000ff00U & (((0x00000020U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__wea))
                               ? ((vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dina[1U] 
                                   << 0x00000018U) 
                                  | (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dina[1U] 
                                     >> 8U)) : ((vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM
                                                 [vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addra][1U] 
                                                 << 0x00000018U) 
                                                | (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM
                                                   [vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addra][1U] 
                                                   >> 8U))) 
                             << 8U)));
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_a[1U] 
        = ((0xff00ffffU & vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_a[1U]) 
           | (0x00ff0000U & (((0x00000040U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__wea))
                               ? ((vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dina[1U] 
                                   << 0x00000010U) 
                                  | (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dina[1U] 
                                     >> 0x00000010U))
                               : ((vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM
                                   [vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addra][1U] 
                                   << 0x00000010U) 
                                  | (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM
                                     [vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addra][1U] 
                                     >> 0x00000010U))) 
                             << 0x00000010U)));
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_a[1U] 
        = ((0x00ffffffU & vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_a[1U]) 
           | (((0x00000080U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__wea))
                ? ((vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dina[1U] 
                    << 8U) | (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dina[1U] 
                              >> 0x00000018U)) : ((vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM
                                                   [vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addra][1U] 
                                                   << 8U) 
                                                  | (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM
                                                     [vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addra][1U] 
                                                     >> 0x00000018U))) 
              << 0x00000018U));
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_a[2U] 
        = ((0xffffff00U & vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_a[2U]) 
           | (0x000000ffU & ((0x00000100U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__wea))
                              ? vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dina[2U]
                              : vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM
                             [vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addra][2U])));
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_a[2U] 
        = ((0xffff00ffU & vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_a[2U]) 
           | (0x0000ff00U & (((0x00000200U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__wea))
                               ? ((vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dina[2U] 
                                   << 0x00000018U) 
                                  | (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dina[2U] 
                                     >> 8U)) : ((vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM
                                                 [vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addra][2U] 
                                                 << 0x00000018U) 
                                                | (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM
                                                   [vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addra][2U] 
                                                   >> 8U))) 
                             << 8U)));
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_a[2U] 
        = ((0xff00ffffU & vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_a[2U]) 
           | (0x00ff0000U & (((0x00000400U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__wea))
                               ? ((vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dina[2U] 
                                   << 0x00000010U) 
                                  | (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dina[2U] 
                                     >> 0x00000010U))
                               : ((vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM
                                   [vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addra][2U] 
                                   << 0x00000010U) 
                                  | (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM
                                     [vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addra][2U] 
                                     >> 0x00000010U))) 
                             << 0x00000010U)));
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_a[2U] 
        = ((0x00ffffffU & vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_a[2U]) 
           | (((0x00000800U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__wea))
                ? ((vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dina[2U] 
                    << 8U) | (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dina[2U] 
                              >> 0x00000018U)) : ((vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM
                                                   [vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addra][2U] 
                                                   << 8U) 
                                                  | (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM
                                                     [vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addra][2U] 
                                                     >> 0x00000018U))) 
              << 0x00000018U));
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_a[3U] 
        = ((0xffffff00U & vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_a[3U]) 
           | (0x000000ffU & ((0x00001000U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__wea))
                              ? vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dina[3U]
                              : vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM
                             [vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addra][3U])));
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_a[3U] 
        = ((0xffff00ffU & vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_a[3U]) 
           | (0x0000ff00U & (((0x00002000U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__wea))
                               ? ((vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dina[3U] 
                                   << 0x00000018U) 
                                  | (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dina[3U] 
                                     >> 8U)) : ((vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM
                                                 [vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addra][3U] 
                                                 << 0x00000018U) 
                                                | (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM
                                                   [vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addra][3U] 
                                                   >> 8U))) 
                             << 8U)));
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_a[3U] 
        = ((0xff00ffffU & vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_a[3U]) 
           | (0x00ff0000U & (((0x00004000U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__wea))
                               ? ((vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dina[3U] 
                                   << 0x00000010U) 
                                  | (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dina[3U] 
                                     >> 0x00000010U))
                               : ((vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM
                                   [vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addra][3U] 
                                   << 0x00000010U) 
                                  | (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM
                                     [vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addra][3U] 
                                     >> 0x00000010U))) 
                             << 0x00000010U)));
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_a[3U] 
        = ((0x00ffffffU & vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_a[3U]) 
           | (((0x00008000U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__wea))
                ? ((vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dina[3U] 
                    << 8U) | (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dina[3U] 
                              >> 0x00000018U)) : ((vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM
                                                   [vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addra][3U] 
                                                   << 8U) 
                                                  | (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM
                                                     [vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addra][3U] 
                                                     >> 0x00000018U))) 
              << 0x00000018U));
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4_douta[0U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__douta[0U];
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4_douta[1U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__douta[1U];
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4_douta[2U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__douta[2U];
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4_douta[3U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__douta[3U];
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__io_port0_rdata[0U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4_douta[0U];
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__io_port0_rdata[1U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4_douta[1U];
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__io_port0_rdata[2U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4_douta[2U];
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__io_port0_rdata[3U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4_douta[3U];
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0_io_port0_rdata[0U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__io_port0_rdata[0U];
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0_io_port0_rdata[1U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__io_port0_rdata[1U];
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0_io_port0_rdata[2U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__io_port0_rdata[2U];
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0_io_port0_rdata[3U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__io_port0_rdata[3U];
}

void Vtop___024root___nba_sequent__TOP__132(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__132\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__output_register__DOT__doutb_reg[0U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_b[0U];
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__output_register__DOT__doutb_reg[1U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_b[1U];
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__output_register__DOT__doutb_reg[2U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_b[2U];
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__output_register__DOT__doutb_reg[3U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_b[3U];
    if (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__enb) {
        if ((1U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__web))) {
            vlSelfRef.__VdlyVal__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v16 
                = (0x000000ffU & vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dinb[0U]);
            vlSelfRef.__VdlyDim0__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v16 
                = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addrb;
            vlSelfRef.__VdlySet__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v16 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__web))) {
            vlSelfRef.__VdlyVal__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v17 
                = (0x000000ffU & (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dinb[0U] 
                                  >> 8U));
            vlSelfRef.__VdlyDim0__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v17 
                = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addrb;
            vlSelfRef.__VdlySet__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v17 = 1U;
        }
        if ((4U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__web))) {
            vlSelfRef.__VdlyVal__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v18 
                = (0x000000ffU & (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dinb[0U] 
                                  >> 0x00000010U));
            vlSelfRef.__VdlyDim0__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v18 
                = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addrb;
            vlSelfRef.__VdlySet__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v18 = 1U;
        }
        if ((8U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__web))) {
            vlSelfRef.__VdlyVal__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v19 
                = (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dinb[0U] 
                   >> 0x00000018U);
            vlSelfRef.__VdlyDim0__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v19 
                = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addrb;
            vlSelfRef.__VdlySet__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v19 = 1U;
        }
        if ((0x00000010U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__web))) {
            vlSelfRef.__VdlyVal__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v20 
                = (0x000000ffU & vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dinb[1U]);
            vlSelfRef.__VdlyDim0__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v20 
                = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addrb;
            vlSelfRef.__VdlySet__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v20 = 1U;
        }
        if ((0x00000020U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__web))) {
            vlSelfRef.__VdlyVal__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v21 
                = (0x000000ffU & (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dinb[1U] 
                                  >> 8U));
            vlSelfRef.__VdlyDim0__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v21 
                = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addrb;
            vlSelfRef.__VdlySet__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v21 = 1U;
        }
        if ((0x00000040U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__web))) {
            vlSelfRef.__VdlyVal__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v22 
                = (0x000000ffU & (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dinb[1U] 
                                  >> 0x00000010U));
            vlSelfRef.__VdlyDim0__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v22 
                = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addrb;
            vlSelfRef.__VdlySet__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v22 = 1U;
        }
        if ((0x00000080U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__web))) {
            vlSelfRef.__VdlyVal__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v23 
                = (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dinb[1U] 
                   >> 0x00000018U);
            vlSelfRef.__VdlyDim0__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v23 
                = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addrb;
            vlSelfRef.__VdlySet__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v23 = 1U;
        }
        if ((0x00000100U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__web))) {
            vlSelfRef.__VdlyVal__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v24 
                = (0x000000ffU & vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dinb[2U]);
            vlSelfRef.__VdlyDim0__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v24 
                = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addrb;
            vlSelfRef.__VdlySet__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v24 = 1U;
        }
        if ((0x00000200U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__web))) {
            vlSelfRef.__VdlyVal__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v25 
                = (0x000000ffU & (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dinb[2U] 
                                  >> 8U));
            vlSelfRef.__VdlyDim0__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v25 
                = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addrb;
            vlSelfRef.__VdlySet__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v25 = 1U;
        }
        if ((0x00000400U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__web))) {
            vlSelfRef.__VdlyVal__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v26 
                = (0x000000ffU & (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dinb[2U] 
                                  >> 0x00000010U));
            vlSelfRef.__VdlyDim0__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v26 
                = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addrb;
            vlSelfRef.__VdlySet__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v26 = 1U;
        }
        if ((0x00000800U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__web))) {
            vlSelfRef.__VdlyVal__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v27 
                = (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dinb[2U] 
                   >> 0x00000018U);
            vlSelfRef.__VdlyDim0__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v27 
                = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addrb;
            vlSelfRef.__VdlySet__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v27 = 1U;
        }
        if ((0x00001000U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__web))) {
            vlSelfRef.__VdlyVal__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v28 
                = (0x000000ffU & vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dinb[3U]);
            vlSelfRef.__VdlyDim0__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v28 
                = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addrb;
            vlSelfRef.__VdlySet__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v28 = 1U;
        }
        if ((0x00002000U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__web))) {
            vlSelfRef.__VdlyVal__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v29 
                = (0x000000ffU & (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dinb[3U] 
                                  >> 8U));
            vlSelfRef.__VdlyDim0__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v29 
                = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addrb;
            vlSelfRef.__VdlySet__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v29 = 1U;
        }
        if ((0x00004000U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__web))) {
            vlSelfRef.__VdlyVal__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v30 
                = (0x000000ffU & (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dinb[3U] 
                                  >> 0x00000010U));
            vlSelfRef.__VdlyDim0__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v30 
                = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addrb;
            vlSelfRef.__VdlySet__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v30 = 1U;
        }
        if ((0x00008000U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__web))) {
            vlSelfRef.__VdlyVal__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v31 
                = (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dinb[3U] 
                   >> 0x00000018U);
            vlSelfRef.__VdlyDim0__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v31 
                = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addrb;
            vlSelfRef.__VdlySet__PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM__v31 = 1U;
        }
        vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_b[0U] 
            = ((0xffffff00U & vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_b[0U]) 
               | (0x000000ffU & ((1U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__web))
                                  ? vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dinb[0U]
                                  : vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM
                                 [vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addrb][0U])));
        vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_b[0U] 
            = ((0xffff00ffU & vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_b[0U]) 
               | (0x0000ff00U & (((2U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__web))
                                   ? ((vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dinb[0U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dinb[0U] 
                                         >> 8U)) : 
                                  ((vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM
                                    [vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addrb][0U] 
                                    << 0x00000018U) 
                                   | (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM
                                      [vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addrb][0U] 
                                      >> 8U))) << 8U)));
        vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_b[0U] 
            = ((0xff00ffffU & vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_b[0U]) 
               | (0x00ff0000U & (((4U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__web))
                                   ? ((vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dinb[0U] 
                                       << 0x00000010U) 
                                      | (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dinb[0U] 
                                         >> 0x00000010U))
                                   : ((vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM
                                       [vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addrb][0U] 
                                       << 0x00000010U) 
                                      | (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM
                                         [vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addrb][0U] 
                                         >> 0x00000010U))) 
                                 << 0x00000010U)));
        vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_b[0U] 
            = ((0x00ffffffU & vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_b[0U]) 
               | (((8U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__web))
                    ? ((vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dinb[0U] 
                        << 8U) | (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dinb[0U] 
                                  >> 0x00000018U)) : 
                   ((vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM
                     [vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addrb][0U] 
                     << 8U) | (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM
                               [vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addrb][0U] 
                               >> 0x00000018U))) << 0x00000018U));
        vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_b[1U] 
            = ((0xffffff00U & vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_b[1U]) 
               | (0x000000ffU & ((0x00000010U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__web))
                                  ? vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dinb[1U]
                                  : vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM
                                 [vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addrb][1U])));
        vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_b[1U] 
            = ((0xffff00ffU & vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_b[1U]) 
               | (0x0000ff00U & (((0x00000020U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__web))
                                   ? ((vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dinb[1U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dinb[1U] 
                                         >> 8U)) : 
                                  ((vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM
                                    [vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addrb][1U] 
                                    << 0x00000018U) 
                                   | (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM
                                      [vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addrb][1U] 
                                      >> 8U))) << 8U)));
        vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_b[1U] 
            = ((0xff00ffffU & vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_b[1U]) 
               | (0x00ff0000U & (((0x00000040U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__web))
                                   ? ((vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dinb[1U] 
                                       << 0x00000010U) 
                                      | (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dinb[1U] 
                                         >> 0x00000010U))
                                   : ((vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM
                                       [vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addrb][1U] 
                                       << 0x00000010U) 
                                      | (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM
                                         [vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addrb][1U] 
                                         >> 0x00000010U))) 
                                 << 0x00000010U)));
        vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_b[1U] 
            = ((0x00ffffffU & vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_b[1U]) 
               | (((0x00000080U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__web))
                    ? ((vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dinb[1U] 
                        << 8U) | (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dinb[1U] 
                                  >> 0x00000018U)) : 
                   ((vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM
                     [vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addrb][1U] 
                     << 8U) | (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM
                               [vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addrb][1U] 
                               >> 0x00000018U))) << 0x00000018U));
        vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_b[2U] 
            = ((0xffffff00U & vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_b[2U]) 
               | (0x000000ffU & ((0x00000100U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__web))
                                  ? vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dinb[2U]
                                  : vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM
                                 [vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addrb][2U])));
        vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_b[2U] 
            = ((0xffff00ffU & vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_b[2U]) 
               | (0x0000ff00U & (((0x00000200U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__web))
                                   ? ((vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dinb[2U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dinb[2U] 
                                         >> 8U)) : 
                                  ((vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM
                                    [vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addrb][2U] 
                                    << 0x00000018U) 
                                   | (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM
                                      [vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addrb][2U] 
                                      >> 8U))) << 8U)));
        vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_b[2U] 
            = ((0xff00ffffU & vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_b[2U]) 
               | (0x00ff0000U & (((0x00000400U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__web))
                                   ? ((vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dinb[2U] 
                                       << 0x00000010U) 
                                      | (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dinb[2U] 
                                         >> 0x00000010U))
                                   : ((vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM
                                       [vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addrb][2U] 
                                       << 0x00000010U) 
                                      | (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM
                                         [vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addrb][2U] 
                                         >> 0x00000010U))) 
                                 << 0x00000010U)));
        vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_b[2U] 
            = ((0x00ffffffU & vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_b[2U]) 
               | (((0x00000800U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__web))
                    ? ((vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dinb[2U] 
                        << 8U) | (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dinb[2U] 
                                  >> 0x00000018U)) : 
                   ((vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM
                     [vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addrb][2U] 
                     << 8U) | (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM
                               [vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addrb][2U] 
                               >> 0x00000018U))) << 0x00000018U));
        vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_b[3U] 
            = ((0xffffff00U & vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_b[3U]) 
               | (0x000000ffU & ((0x00001000U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__web))
                                  ? vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dinb[3U]
                                  : vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM
                                 [vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addrb][3U])));
        vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_b[3U] 
            = ((0xffff00ffU & vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_b[3U]) 
               | (0x0000ff00U & (((0x00002000U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__web))
                                   ? ((vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dinb[3U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dinb[3U] 
                                         >> 8U)) : 
                                  ((vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM
                                    [vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addrb][3U] 
                                    << 0x00000018U) 
                                   | (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM
                                      [vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addrb][3U] 
                                      >> 8U))) << 8U)));
        vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_b[3U] 
            = ((0xff00ffffU & vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_b[3U]) 
               | (0x00ff0000U & (((0x00004000U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__web))
                                   ? ((vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dinb[3U] 
                                       << 0x00000010U) 
                                      | (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dinb[3U] 
                                         >> 0x00000010U))
                                   : ((vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM
                                       [vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addrb][3U] 
                                       << 0x00000010U) 
                                      | (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM
                                         [vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addrb][3U] 
                                         >> 0x00000010U))) 
                                 << 0x00000010U)));
        vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_b[3U] 
            = ((0x00ffffffU & vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__ram_data_b[3U]) 
               | (((0x00008000U & (IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__web))
                    ? ((vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dinb[3U] 
                        << 8U) | (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__dinb[3U] 
                                  >> 0x00000018U)) : 
                   ((vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM
                     [vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addrb][3U] 
                     << 8U) | (vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__BRAM
                               [vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__addrb][3U] 
                               >> 0x00000018U))) << 0x00000018U));
    }
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__doutb[0U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__output_register__DOT__doutb_reg[0U];
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__doutb[1U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__output_register__DOT__doutb_reg[1U];
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__doutb[2U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__output_register__DOT__doutb_reg[2U];
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__doutb[3U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__output_register__DOT__doutb_reg[3U];
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4_doutb[0U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__doutb[0U];
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4_doutb[1U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__doutb[1U];
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4_doutb[2U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__doutb[2U];
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4_doutb[3U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4__DOT__doutb[3U];
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__io_port1_rdata[0U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4_doutb[0U];
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__io_port1_rdata[1U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4_doutb[1U];
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__io_port1_rdata[2U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4_doutb[2U];
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__io_port1_rdata[3U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4_doutb[3U];
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0_io_port1_rdata[0U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__io_port1_rdata[0U];
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0_io_port1_rdata[1U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__io_port1_rdata[1U];
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0_io_port1_rdata[2U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__io_port1_rdata[2U];
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0_io_port1_rdata[3U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__io_port1_rdata[3U];
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__io_port_rdata[0U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_rams_0_io_port1_rdata[0U];
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__io_port_rdata[1U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_rams_0_io_port1_rdata[1U];
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__io_port_rdata[2U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_rams_0_io_port1_rdata[2U];
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__io_port_rdata[3U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_rams_0_io_port1_rdata[3U];
}

void Vtop___024root___nba_sequent__TOP__133(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__133\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__compactor__DOT__onR_fetch_R_data 
        = vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__compactor__DOT__io_down_r_payload_data;
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__compactor__DOT__onR_fetch_R_id 
        = vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__compactor__DOT__io_down_r_payload_id;
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__compactor__DOT__onR_fetch_R_resp 
        = vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__compactor__DOT__io_down_r_payload_resp;
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__compactor__DOT__context_read_cmd_payload 
        = vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__compactor__DOT__io_down_r_payload_id;
}

void Vtop___024root___nba_sequent__TOP__134(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__134\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_down_bus_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_down_bus_a_rValidN;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_iMemLoad_up_bus_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_iMemLoad_up_bus_d_rValidN;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_refTime 
        = vlSelfRef.__Vdly__PulseTableSoc__DOT__riscqArea_refTime;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__io_carrier_valid 
        = vlSelfRef.PulseTableSoc__DOT__io_carrier_stage_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqReset 
        = vlSelfRef.PulseTableSoc__DOT__riscqReset;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_output_a_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_down_bus_a_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iLoad_node_bus_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_iMemLoad_up_bus_d_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_timeOffset 
        = ((IData)(vlSelfRef.PulseTableSoc__DOT__dspRst)
            ? 0ULL : vlSelfRef.PulseTableSoc__DOT__timeOffset_buffercc_io_dataOut);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqFiber_riscq__DOT__riscqReset 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqReset;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dBusFiber_thread_logic__DOT__riscqReset 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqReset;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__postedStoreShim_1__DOT__riscqReset 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqReset;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__riscqReset 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__riscqReset;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__io_pop_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_output_a_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iLoad_node_noDecoder_toDown_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iLoad_node_bus_d_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__postedStoreShim_1__DOT__sbuf__DOT__riscqReset 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__postedStoreShim_1__DOT__riscqReset;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__d_arbiter__DOT__riscqReset 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__dMemPortDec_decoder_core__DOT__riscqReset;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_readArbitration_translated_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__io_pop_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iLoad_node_to_iMemPortArb_up_bus_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iLoad_node_noDecoder_toDown_d_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_readArbitration_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__popCC_readArbitration_translated_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iLoad_node_to_iMemPortArb_down_bus_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iLoad_node_to_iMemPortArb_up_bus_d_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_ups_1_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iLoad_node_to_iMemPortArb_down_bus_d_ready;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__ups_1_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_riscvSoc__DOT__iMemPortArb_arbiter_core__DOT__io_ups_1_d_ready;
}

void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_iMemLoad_up_bus_d_rValidN) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_iMemLoad_up_bus_d_s2mPipe_payload_denied 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_iMemLoad_up_bus_d_payload_denied;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_iMemLoad_up_bus_d_s2mPipe_payload_param 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_iMemLoad_up_bus_d_payload_param;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_iMemLoad_up_bus_d_s2mPipe_payload_corrupt 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_iMemLoad_up_bus_d_payload_corrupt;
    } else {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_iMemLoad_up_bus_d_s2mPipe_payload_denied 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_iMemLoad_up_bus_d_rData_denied;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_iMemLoad_up_bus_d_s2mPipe_payload_param 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_iMemLoad_up_bus_d_rData_param;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_iMemLoad_up_bus_d_s2mPipe_payload_corrupt 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_iMemLoad_up_bus_d_rData_corrupt;
    }
}

void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__buf_1__DOT__when_PulseParamBuffer_l178 
        = ((~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__buf_1__DOT__explicitStartWrite)) 
           & (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__buf_1__DOT__fired));
}

void Vtop___024root___nba_comb__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1__DOT__when_PulseParamBuffer_l178 
        = ((~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1__DOT__explicitStartWrite)) 
           & (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__buf_1__DOT__fired));
}

void Vtop___024root___nba_comb__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT___zz_rData_read_cmd_payload 
        = (0x0000000fU & ((IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__upR_handle_CTX_header) 
                          + (IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__upR_handle_counter)));
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__upR_handle_CHUNK_LAST 
        = ((IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__upR_handle_counter) 
           == (IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__upR_handle_CTX_ups));
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__frontend_split_spliter_BOUNDED_BLOCK 
        = (0x0000003fU & ((IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__frontend_split_spliter_blockStart) 
                          + (IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__frontend_split_spliter_blockCounter)));
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__frontend_split_spliter_LAST 
        = ((IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__frontend_split_spliter_blockCount) 
           == (IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__frontend_split_spliter_blockCounter));
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__frontend_split_spliter_chunkWordStart 
        = (0x0000000fU & (((IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__frontend_split_spliter_boundedStart) 
                           >> 2U) & (- (IData)((IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__frontend_split_spliter_FIRST)))));
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT___zz_upR_handle_error 
        = ((0U == (IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT___zz_upR_handle_error_1))
            ? (IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__slots_0_error)
            : ((1U == (IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT___zz_upR_handle_error_1))
                ? (IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__slots_1_error)
                : ((2U == (IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT___zz_upR_handle_error_1))
                    ? (IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__slots_2_error)
                    : (IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__slots_3_error))));
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT___zz_upR_handle_done_1 
        = ((0U == (IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT___zz_upR_handle_done_2))
            ? (IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__slots_0_done)
            : ((1U == (IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT___zz_upR_handle_done_2))
                ? (IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__slots_1_done)
                : ((2U == (IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT___zz_upR_handle_done_2))
                    ? (IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__slots_2_done)
                    : (IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__slots_3_done))));
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__rData_read_cmd_payload 
        = ((0x00000030U & ((IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__ptr_rsp) 
                           << 4U)) | (IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT___zz_rData_read_cmd_payload));
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__io_up_r_payload_last 
        = ((IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__upR_handle_CHUNK_LAST) 
           & (IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__upR_rsp_handle_CTX_last));
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__when_Axi4Aligner_l423 
        = (1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__upR_handle_CHUNK_LAST)));
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__frontend_split_spliter_chunkWordEnd 
        = (0x0000000fU & (((IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__frontend_split_spliter_boundedEnd) 
                           >> 2U) | (- (IData)((1U 
                                                & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__frontend_split_spliter_LAST)))))));
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__frontend_split_forkRequest_Axi4Aligner_l322 
        = (1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__frontend_split_spliter_LAST)));
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__upR_handle_error 
        = vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT___zz_upR_handle_error;
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__upR_handle_done 
        = vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT___zz_upR_handle_done_1;
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner_io_up_r_payload_last 
        = vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__io_up_r_payload_last;
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__frontend_split_spliter_CHUNKS_WORDS 
        = (0x0000000fU & ((IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__frontend_split_spliter_chunkWordEnd) 
                          - (IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__frontend_split_spliter_chunkWordStart)));
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT___zz_frontend_split_aligner_mask 
        = ((IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__frontend_split_spliter_chunkWordStart) 
           ^ (IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__frontend_split_spliter_chunkWordEnd));
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__when_Pipeline_l289 
        = vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__frontend_split_forkRequest_Axi4Aligner_l322;
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__upR_handle_ERRORED 
        = ((IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__upR_handle_error) 
           | (IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__upR_handle_errorAcc));
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__when_Axi4Aligner_l422 
        = ((IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__upR_handle_done) 
           & (IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__upR_handle_valid));
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__upR_handle_haltRequest_Axi4Aligner_l418 
        = (1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__upR_handle_done)));
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__compactor__DOT__io_down_r_payload_last 
        = vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner_io_up_r_payload_last;
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT___zz_frontend_split_aligner_mask_1 
        = ((0x0cU & (IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT___zz_frontend_split_aligner_mask_1)) 
           | (((0U != (7U & ((IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT___zz_frontend_split_aligner_mask) 
                             >> 1U))) << 1U) | (0U 
                                                != (IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT___zz_frontend_split_aligner_mask))));
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT___zz_frontend_split_aligner_mask_1 
        = ((3U & (IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT___zz_frontend_split_aligner_mask_1)) 
           | (((2U & ((IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT___zz_frontend_split_aligner_mask) 
                      >> 2U)) | (0U != (3U & ((IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT___zz_frontend_split_aligner_mask) 
                                              >> 2U)))) 
              << 2U));
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT___zz_upR_handle_forkRequest_Axi4Aligner_l424 = 0U;
    if (vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__when_Axi4Aligner_l422) {
        if (vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__when_Axi4Aligner_l423) {
            vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT___zz_upR_handle_forkRequest_Axi4Aligner_l424 = 1U;
        }
    }
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__when_Pipeline_l282_1 
        = vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__upR_handle_haltRequest_Axi4Aligner_l418;
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__compactor__DOT__onR_fetch_R_last 
        = vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__compactor__DOT__io_down_r_payload_last;
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__frontend_split_aligner_mask 
        = (((IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT___zz_frontend_split_aligner_mask_1) 
            << 2U) | (3U & ((IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__frontend_split_aligner_sizeToMask) 
                            | (- (IData)((0U != (IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__frontend_split_bufferize_AR_len)))))));
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__upR_handle_forkRequest_Axi4Aligner_l424 
        = vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT___zz_upR_handle_forkRequest_Axi4Aligner_l424;
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT___zz_upR_handle_isForked 
        = vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__upR_handle_valid;
    if (vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__when_Pipeline_l282_1) {
        vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT___zz_upR_handle_isForked = 0U;
    }
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__frontend_split_aligner_CHUNK_START 
        = ((- (IData)((IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__frontend_split_spliter_FIRST))) 
           & ((~ (IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__frontend_split_aligner_mask)) 
              & (IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT___zz_frontend_split_aligner_CHUNK_START)));
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__frontend_split_aligner_CHUNK_END 
        = (0x0000003fU & ((- (IData)((1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__frontend_split_spliter_LAST))))) 
                          | ((IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT___zz_frontend_split_aligner_CHUNK_END) 
                             | (IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__frontend_split_aligner_mask))));
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__when_Pipeline_l289_1 
        = vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__upR_handle_forkRequest_Axi4Aligner_l424;
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__frontend_split_aligner_LEN 
        = (0x0000000fU & (((IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__frontend_split_aligner_CHUNK_END) 
                           >> 2U) - ((IData)(vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__frontend_split_aligner_CHUNK_START) 
                                     >> 2U)));
}

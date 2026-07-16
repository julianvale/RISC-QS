// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop___024root___nba_sequent__TOP__50(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__50\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_107;
    __VdfgRegularize_h6e95ff9d_0_107 = 0;
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_108;
    __VdfgRegularize_h6e95ff9d_0_108 = 0;
    // Body
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__db3 
        = (0x0001ffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT___zz_db3 
                          - vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT___zz_db3_1));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__sb3 
        = (0x0001ffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT___zz_sb3 
                          + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT___zz_sb3_1));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__da1 
        = (0x0001ffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT___zz_da1 
                          - vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT___zz_da1_1));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__pre4 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__mulPre;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__pim4 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__mulPim;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__sre5 
        = (0x00000007ffffffffULL & (0x0000000000004000ULL 
                                    + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT___zz_sre5));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__sim5 
        = (0x00000007ffffffffULL & (0x0000000000004000ULL 
                                    + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT___zz_sim5));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__br2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__br1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__mcr4 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__m3;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__mci4 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__m3;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__bi2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__bi1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__ai3 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__ai2;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__ar3 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__ar2;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__io_cmd_valid_delay_6 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__io_cmd_valid_delay_5;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT___zz_sre5_1 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__pre4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__pre4);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT___zz_sim5_1 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__pim4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__pim4);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT___zz_reN 
        = (0x000fffffU & (IData)((vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__sre5 
                                  >> 0x0fU)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT___zz_imN 
        = (0x000fffffU & (IData)((vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__sim5 
                                  >> 0x0fU)));
    __VdfgRegularize_h6e95ff9d_0_107 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__br2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__br2));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__br1 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__br0;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT___zz_sre5_2 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__mcr4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__mcr4);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT___zz_sim5_2 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__mci4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__mci4);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__m3 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__m2;
    __VdfgRegularize_h6e95ff9d_0_108 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__bi2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__bi2));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__bi1 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__bi0;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__mulPim 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__sb3)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__ai3)))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__ai2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__ai1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__mulPre 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__db3)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__ar3)))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__ar2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__ar1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__io_rsp_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__io_cmd_valid_delay_6;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__io_cmd_valid_delay_5 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__io_cmd_valid_delay_4;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__reN 
        = (0x0000ffffU & vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT___zz_reN);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__imN 
        = (0x0000ffffU & vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT___zz_imN);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT___zz_db3 
        = __VdfgRegularize_h6e95ff9d_0_107;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT___zz_sb3 
        = __VdfgRegularize_h6e95ff9d_0_107;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT___zz_sre5 
        = (0x00000007ffffffffULL & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT___zz_sre5_1 
                                    + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT___zz_sre5_2));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT___zz_sim5 
        = (0x00000007ffffffffULL & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT___zz_sim5_1 
                                    + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT___zz_sim5_2));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT___zz_db3_1 
        = __VdfgRegularize_h6e95ff9d_0_108;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT___zz_sb3_1 
        = __VdfgRegularize_h6e95ff9d_0_108;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1_io_rsp_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__io_rsp_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__io_rsp_payload_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__reN;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__io_rsp_payload_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__imN;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__br0 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__io_cmd_payload_b_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__m2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__mulM;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__bi0 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__io_cmd_payload_b_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__ai1 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__ai0;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__ar1 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__ar0;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__io_cmd_valid_delay_4 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__io_cmd_valid_delay_3;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1_io_rsp_payload_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__io_rsp_payload_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1_io_rsp_payload_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__io_rsp_payload_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__mulM 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__da1)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__bi1)))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__io_carrier_1_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1_io_rsp_payload_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__io_carrier_1_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1_io_rsp_payload_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__ai0 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__io_cmd_payload_a_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__ar0 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__io_cmd_payload_a_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__io_cmd_valid_delay_3 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__io_cmd_valid_delay_2;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen_io_carrier_1_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__io_carrier_1_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen_io_carrier_1_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__io_carrier_1_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT___zz_da1_1 
        = ((0x00010000U & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__ai0) 
                           << 1U)) | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__ai0));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT___zz_da1 
        = ((0x00010000U & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__ar0) 
                           << 1U)) | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__ar0));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__io_cmd_valid_delay_2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__io_cmd_valid_delay_1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__io_cmd_valid_delay_1 = 1U;
}

void Vtop___024root___nba_sequent__TOP__51(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__51\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_109;
    __VdfgRegularize_h6e95ff9d_0_109 = 0;
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_110;
    __VdfgRegularize_h6e95ff9d_0_110 = 0;
    // Body
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__db3 
        = (0x0001ffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT___zz_db3 
                          - vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT___zz_db3_1));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__sb3 
        = (0x0001ffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT___zz_sb3 
                          + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT___zz_sb3_1));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__da1 
        = (0x0001ffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT___zz_da1 
                          - vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT___zz_da1_1));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__pre4 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__mulPre;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__pim4 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__mulPim;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__sre5 
        = (0x00000007ffffffffULL & (0x0000000000004000ULL 
                                    + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT___zz_sre5));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__sim5 
        = (0x00000007ffffffffULL & (0x0000000000004000ULL 
                                    + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT___zz_sim5));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__br2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__br1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__mcr4 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__m3;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__mci4 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__m3;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__bi2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__bi1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__ai3 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__ai2;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__ar3 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__ar2;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__io_cmd_valid_delay_6 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__io_cmd_valid_delay_5;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT___zz_sre5_1 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__pre4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__pre4);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT___zz_sim5_1 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__pim4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__pim4);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT___zz_reN 
        = (0x000fffffU & (IData)((vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__sre5 
                                  >> 0x0fU)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT___zz_imN 
        = (0x000fffffU & (IData)((vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__sim5 
                                  >> 0x0fU)));
    __VdfgRegularize_h6e95ff9d_0_109 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__br2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__br2));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__br1 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__br0;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT___zz_sre5_2 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__mcr4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__mcr4);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT___zz_sim5_2 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__mci4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__mci4);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__m3 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__m2;
    __VdfgRegularize_h6e95ff9d_0_110 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__bi2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__bi2));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__bi1 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__bi0;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__mulPim 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__sb3)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__ai3)))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__ai2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__ai1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__mulPre 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__db3)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__ar3)))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__ar2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__ar1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__io_rsp_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__io_cmd_valid_delay_6;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__io_cmd_valid_delay_5 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__io_cmd_valid_delay_4;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__reN 
        = (0x0000ffffU & vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT___zz_reN);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__imN 
        = (0x0000ffffU & vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT___zz_imN);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT___zz_db3 
        = __VdfgRegularize_h6e95ff9d_0_109;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT___zz_sb3 
        = __VdfgRegularize_h6e95ff9d_0_109;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT___zz_sre5 
        = (0x00000007ffffffffULL & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT___zz_sre5_1 
                                    + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT___zz_sre5_2));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT___zz_sim5 
        = (0x00000007ffffffffULL & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT___zz_sim5_1 
                                    + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT___zz_sim5_2));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT___zz_db3_1 
        = __VdfgRegularize_h6e95ff9d_0_110;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT___zz_sb3_1 
        = __VdfgRegularize_h6e95ff9d_0_110;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2_io_rsp_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__io_rsp_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__io_rsp_payload_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__reN;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__io_rsp_payload_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__imN;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__br0 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__io_cmd_payload_b_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__m2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__mulM;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__bi0 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__io_cmd_payload_b_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__ai1 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__ai0;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__ar1 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__ar0;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__io_cmd_valid_delay_4 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__io_cmd_valid_delay_3;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2_io_rsp_payload_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__io_rsp_payload_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2_io_rsp_payload_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__io_rsp_payload_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__mulM 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__da1)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__bi1)))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__io_carrier_2_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2_io_rsp_payload_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__io_carrier_2_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2_io_rsp_payload_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__ai0 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__io_cmd_payload_a_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__ar0 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__io_cmd_payload_a_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__io_cmd_valid_delay_3 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__io_cmd_valid_delay_2;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen_io_carrier_2_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__io_carrier_2_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen_io_carrier_2_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__io_carrier_2_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT___zz_da1_1 
        = ((0x00010000U & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__ai0) 
                           << 1U)) | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__ai0));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT___zz_da1 
        = ((0x00010000U & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__ar0) 
                           << 1U)) | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__ar0));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__io_cmd_valid_delay_2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__io_cmd_valid_delay_1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__io_cmd_valid_delay_1 = 1U;
}

void Vtop___024root___nba_sequent__TOP__52(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__52\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_111;
    __VdfgRegularize_h6e95ff9d_0_111 = 0;
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_112;
    __VdfgRegularize_h6e95ff9d_0_112 = 0;
    // Body
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__db3 
        = (0x0001ffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT___zz_db3 
                          - vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT___zz_db3_1));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__sb3 
        = (0x0001ffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT___zz_sb3 
                          + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT___zz_sb3_1));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__da1 
        = (0x0001ffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT___zz_da1 
                          - vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT___zz_da1_1));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__pre4 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__mulPre;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__pim4 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__mulPim;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__sre5 
        = (0x00000007ffffffffULL & (0x0000000000004000ULL 
                                    + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT___zz_sre5));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__sim5 
        = (0x00000007ffffffffULL & (0x0000000000004000ULL 
                                    + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT___zz_sim5));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__br2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__br1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__mcr4 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__m3;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__mci4 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__m3;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__bi2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__bi1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__ai3 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__ai2;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__ar3 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__ar2;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__io_cmd_valid_delay_6 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__io_cmd_valid_delay_5;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT___zz_sre5_1 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__pre4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__pre4);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT___zz_sim5_1 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__pim4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__pim4);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT___zz_reN 
        = (0x000fffffU & (IData)((vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__sre5 
                                  >> 0x0fU)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT___zz_imN 
        = (0x000fffffU & (IData)((vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__sim5 
                                  >> 0x0fU)));
    __VdfgRegularize_h6e95ff9d_0_111 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__br2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__br2));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__br1 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__br0;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT___zz_sre5_2 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__mcr4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__mcr4);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT___zz_sim5_2 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__mci4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__mci4);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__m3 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__m2;
    __VdfgRegularize_h6e95ff9d_0_112 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__bi2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__bi2));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__bi1 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__bi0;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__mulPim 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__sb3)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__ai3)))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__ai2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__ai1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__mulPre 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__db3)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__ar3)))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__ar2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__ar1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__io_rsp_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__io_cmd_valid_delay_6;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__io_cmd_valid_delay_5 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__io_cmd_valid_delay_4;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__reN 
        = (0x0000ffffU & vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT___zz_reN);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__imN 
        = (0x0000ffffU & vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT___zz_imN);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT___zz_db3 
        = __VdfgRegularize_h6e95ff9d_0_111;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT___zz_sb3 
        = __VdfgRegularize_h6e95ff9d_0_111;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT___zz_sre5 
        = (0x00000007ffffffffULL & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT___zz_sre5_1 
                                    + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT___zz_sre5_2));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT___zz_sim5 
        = (0x00000007ffffffffULL & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT___zz_sim5_1 
                                    + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT___zz_sim5_2));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT___zz_db3_1 
        = __VdfgRegularize_h6e95ff9d_0_112;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT___zz_sb3_1 
        = __VdfgRegularize_h6e95ff9d_0_112;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3_io_rsp_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__io_rsp_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__io_rsp_payload_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__reN;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__io_rsp_payload_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__imN;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__br0 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__io_cmd_payload_b_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__m2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__mulM;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__bi0 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__io_cmd_payload_b_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__ai1 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__ai0;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__ar1 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__ar0;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__io_cmd_valid_delay_4 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__io_cmd_valid_delay_3;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3_io_rsp_payload_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__io_rsp_payload_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3_io_rsp_payload_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__io_rsp_payload_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__mulM 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__da1)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__bi1)))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__io_carrier_3_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3_io_rsp_payload_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__io_carrier_3_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3_io_rsp_payload_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__ai0 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__io_cmd_payload_a_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__ar0 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__io_cmd_payload_a_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__io_cmd_valid_delay_3 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__io_cmd_valid_delay_2;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen_io_carrier_3_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__io_carrier_3_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen_io_carrier_3_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__io_carrier_3_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT___zz_da1_1 
        = ((0x00010000U & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__ai0) 
                           << 1U)) | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__ai0));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT___zz_da1 
        = ((0x00010000U & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__ar0) 
                           << 1U)) | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__ar0));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__io_cmd_valid_delay_2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__io_cmd_valid_delay_1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__io_cmd_valid_delay_1 = 1U;
}

void Vtop___024root___nba_sequent__TOP__53(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__53\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_113;
    __VdfgRegularize_h6e95ff9d_0_113 = 0;
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_114;
    __VdfgRegularize_h6e95ff9d_0_114 = 0;
    // Body
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__db3 
        = (0x0001ffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT___zz_db3 
                          - vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT___zz_db3_1));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__sb3 
        = (0x0001ffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT___zz_sb3 
                          + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT___zz_sb3_1));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__da1 
        = (0x0001ffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT___zz_da1 
                          - vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT___zz_da1_1));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__pre4 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__mulPre;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__pim4 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__mulPim;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__sre5 
        = (0x00000007ffffffffULL & (0x0000000000004000ULL 
                                    + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT___zz_sre5));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__sim5 
        = (0x00000007ffffffffULL & (0x0000000000004000ULL 
                                    + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT___zz_sim5));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__br2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__br1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__mcr4 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__m3;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__mci4 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__m3;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__bi2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__bi1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__ai3 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__ai2;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__ar3 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__ar2;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__io_cmd_valid_delay_6 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__io_cmd_valid_delay_5;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT___zz_sre5_1 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__pre4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__pre4);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT___zz_sim5_1 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__pim4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__pim4);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT___zz_reN 
        = (0x000fffffU & (IData)((vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__sre5 
                                  >> 0x0fU)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT___zz_imN 
        = (0x000fffffU & (IData)((vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__sim5 
                                  >> 0x0fU)));
    __VdfgRegularize_h6e95ff9d_0_113 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__br2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__br2));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__br1 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__br0;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT___zz_sre5_2 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__mcr4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__mcr4);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT___zz_sim5_2 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__mci4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__mci4);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__m3 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__m2;
    __VdfgRegularize_h6e95ff9d_0_114 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__bi2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__bi2));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__bi1 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__bi0;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__mulPim 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__sb3)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__ai3)))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__ai2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__ai1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__mulPre 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__db3)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__ar3)))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__ar2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__ar1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__io_rsp_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__io_cmd_valid_delay_6;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__io_cmd_valid_delay_5 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__io_cmd_valid_delay_4;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__reN 
        = (0x0000ffffU & vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT___zz_reN);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__imN 
        = (0x0000ffffU & vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT___zz_imN);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT___zz_db3 
        = __VdfgRegularize_h6e95ff9d_0_113;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT___zz_sb3 
        = __VdfgRegularize_h6e95ff9d_0_113;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT___zz_sre5 
        = (0x00000007ffffffffULL & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT___zz_sre5_1 
                                    + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT___zz_sre5_2));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT___zz_sim5 
        = (0x00000007ffffffffULL & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT___zz_sim5_1 
                                    + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT___zz_sim5_2));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT___zz_db3_1 
        = __VdfgRegularize_h6e95ff9d_0_114;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT___zz_sb3_1 
        = __VdfgRegularize_h6e95ff9d_0_114;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0_io_rsp_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__io_rsp_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__io_rsp_payload_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__reN;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__io_rsp_payload_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__imN;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__br0 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__io_cmd_payload_b_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__m2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__mulM;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__bi0 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__io_cmd_payload_b_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__ai1 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__ai0;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__ar1 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__ar0;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__io_cmd_valid_delay_4 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__io_cmd_valid_delay_3;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__mulM 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__da1)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__bi1)))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__ai0 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__io_cmd_payload_a_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__ar0 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__io_cmd_payload_a_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__io_cmd_valid_delay_3 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__io_cmd_valid_delay_2;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT___zz_da1_1 
        = ((0x00010000U & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__ai0) 
                           << 1U)) | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__ai0));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT___zz_da1 
        = ((0x00010000U & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__ar0) 
                           << 1U)) | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__ar0));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__io_cmd_valid_delay_2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__io_cmd_valid_delay_1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__io_cmd_valid_delay_1 = 1U;
}

void Vtop___024root___nba_sequent__TOP__54(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__54\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_115;
    __VdfgRegularize_h6e95ff9d_0_115 = 0;
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_116;
    __VdfgRegularize_h6e95ff9d_0_116 = 0;
    // Body
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__db3 
        = (0x0001ffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT___zz_db3 
                          - vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT___zz_db3_1));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__sb3 
        = (0x0001ffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT___zz_sb3 
                          + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT___zz_sb3_1));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__da1 
        = (0x0001ffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT___zz_da1 
                          - vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT___zz_da1_1));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__pre4 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__mulPre;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__pim4 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__mulPim;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__sre5 
        = (0x00000007ffffffffULL & (0x0000000000004000ULL 
                                    + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT___zz_sre5));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__sim5 
        = (0x00000007ffffffffULL & (0x0000000000004000ULL 
                                    + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT___zz_sim5));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__br2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__br1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__mcr4 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__m3;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__mci4 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__m3;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__bi2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__bi1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__ai3 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__ai2;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__ar3 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__ar2;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__io_cmd_valid_delay_6 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__io_cmd_valid_delay_5;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT___zz_sre5_1 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__pre4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__pre4);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT___zz_sim5_1 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__pim4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__pim4);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT___zz_reN 
        = (0x000fffffU & (IData)((vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__sre5 
                                  >> 0x0fU)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT___zz_imN 
        = (0x000fffffU & (IData)((vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__sim5 
                                  >> 0x0fU)));
    __VdfgRegularize_h6e95ff9d_0_115 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__br2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__br2));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__br1 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__br0;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT___zz_sre5_2 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__mcr4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__mcr4);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT___zz_sim5_2 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__mci4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__mci4);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__m3 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__m2;
    __VdfgRegularize_h6e95ff9d_0_116 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__bi2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__bi2));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__bi1 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__bi0;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__mulPim 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__sb3)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__ai3)))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__ai2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__ai1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__mulPre 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__db3)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__ar3)))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__ar2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__ar1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__io_rsp_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__io_cmd_valid_delay_6;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__io_cmd_valid_delay_5 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__io_cmd_valid_delay_4;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__reN 
        = (0x0000ffffU & vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT___zz_reN);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__imN 
        = (0x0000ffffU & vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT___zz_imN);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT___zz_db3 
        = __VdfgRegularize_h6e95ff9d_0_115;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT___zz_sb3 
        = __VdfgRegularize_h6e95ff9d_0_115;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT___zz_sre5 
        = (0x00000007ffffffffULL & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT___zz_sre5_1 
                                    + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT___zz_sre5_2));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT___zz_sim5 
        = (0x00000007ffffffffULL & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT___zz_sim5_1 
                                    + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT___zz_sim5_2));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT___zz_db3_1 
        = __VdfgRegularize_h6e95ff9d_0_116;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT___zz_sb3_1 
        = __VdfgRegularize_h6e95ff9d_0_116;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1_io_rsp_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__io_rsp_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__io_rsp_payload_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__reN;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__io_rsp_payload_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__imN;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__br0 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__io_cmd_payload_b_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__m2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__mulM;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__bi0 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__io_cmd_payload_b_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__ai1 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__ai0;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__ar1 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__ar0;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__io_cmd_valid_delay_4 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__io_cmd_valid_delay_3;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__mulM 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__da1)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__bi1)))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__ai0 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__io_cmd_payload_a_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__ar0 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__io_cmd_payload_a_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__io_cmd_valid_delay_3 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__io_cmd_valid_delay_2;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT___zz_da1_1 
        = ((0x00010000U & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__ai0) 
                           << 1U)) | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__ai0));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT___zz_da1 
        = ((0x00010000U & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__ar0) 
                           << 1U)) | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__ar0));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__io_cmd_valid_delay_2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__io_cmd_valid_delay_1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__io_cmd_valid_delay_1 = 1U;
}

void Vtop___024root___nba_sequent__TOP__55(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__55\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_117;
    __VdfgRegularize_h6e95ff9d_0_117 = 0;
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_118;
    __VdfgRegularize_h6e95ff9d_0_118 = 0;
    // Body
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__db3 
        = (0x0001ffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT___zz_db3 
                          - vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT___zz_db3_1));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__sb3 
        = (0x0001ffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT___zz_sb3 
                          + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT___zz_sb3_1));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__da1 
        = (0x0001ffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT___zz_da1 
                          - vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT___zz_da1_1));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__pre4 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__mulPre;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__pim4 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__mulPim;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__sre5 
        = (0x00000007ffffffffULL & (0x0000000000004000ULL 
                                    + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT___zz_sre5));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__sim5 
        = (0x00000007ffffffffULL & (0x0000000000004000ULL 
                                    + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT___zz_sim5));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__br2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__br1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__mcr4 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__m3;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__mci4 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__m3;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__bi2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__bi1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__ai3 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__ai2;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__ar3 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__ar2;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__io_cmd_valid_delay_6 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__io_cmd_valid_delay_5;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT___zz_sre5_1 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__pre4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__pre4);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT___zz_sim5_1 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__pim4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__pim4);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT___zz_reN 
        = (0x000fffffU & (IData)((vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__sre5 
                                  >> 0x0fU)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT___zz_imN 
        = (0x000fffffU & (IData)((vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__sim5 
                                  >> 0x0fU)));
    __VdfgRegularize_h6e95ff9d_0_117 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__br2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__br2));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__br1 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__br0;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT___zz_sre5_2 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__mcr4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__mcr4);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT___zz_sim5_2 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__mci4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__mci4);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__m3 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__m2;
    __VdfgRegularize_h6e95ff9d_0_118 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__bi2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__bi2));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__bi1 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__bi0;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__mulPim 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__sb3)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__ai3)))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__ai2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__ai1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__mulPre 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__db3)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__ar3)))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__ar2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__ar1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__io_rsp_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__io_cmd_valid_delay_6;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__io_cmd_valid_delay_5 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__io_cmd_valid_delay_4;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__reN 
        = (0x0000ffffU & vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT___zz_reN);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__imN 
        = (0x0000ffffU & vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT___zz_imN);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT___zz_db3 
        = __VdfgRegularize_h6e95ff9d_0_117;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT___zz_sb3 
        = __VdfgRegularize_h6e95ff9d_0_117;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT___zz_sre5 
        = (0x00000007ffffffffULL & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT___zz_sre5_1 
                                    + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT___zz_sre5_2));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT___zz_sim5 
        = (0x00000007ffffffffULL & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT___zz_sim5_1 
                                    + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT___zz_sim5_2));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT___zz_db3_1 
        = __VdfgRegularize_h6e95ff9d_0_118;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT___zz_sb3_1 
        = __VdfgRegularize_h6e95ff9d_0_118;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2_io_rsp_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__io_rsp_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__io_rsp_payload_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__reN;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__io_rsp_payload_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__imN;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__br0 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__io_cmd_payload_b_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__m2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__mulM;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__bi0 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__io_cmd_payload_b_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__ai1 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__ai0;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__ar1 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__ar0;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__io_cmd_valid_delay_4 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__io_cmd_valid_delay_3;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__mulM 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__da1)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__bi1)))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__ai0 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__io_cmd_payload_a_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__ar0 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__io_cmd_payload_a_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__io_cmd_valid_delay_3 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__io_cmd_valid_delay_2;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT___zz_da1_1 
        = ((0x00010000U & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__ai0) 
                           << 1U)) | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__ai0));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT___zz_da1 
        = ((0x00010000U & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__ar0) 
                           << 1U)) | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__ar0));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__io_cmd_valid_delay_2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__io_cmd_valid_delay_1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__io_cmd_valid_delay_1 = 1U;
}

void Vtop___024root___nba_sequent__TOP__56(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__56\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_119;
    __VdfgRegularize_h6e95ff9d_0_119 = 0;
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_120;
    __VdfgRegularize_h6e95ff9d_0_120 = 0;
    // Body
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__db3 
        = (0x0001ffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT___zz_db3 
                          - vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT___zz_db3_1));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__sb3 
        = (0x0001ffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT___zz_sb3 
                          + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT___zz_sb3_1));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__da1 
        = (0x0001ffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT___zz_da1 
                          - vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT___zz_da1_1));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__pre4 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__mulPre;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__pim4 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__mulPim;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__sre5 
        = (0x00000007ffffffffULL & (0x0000000000004000ULL 
                                    + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT___zz_sre5));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__sim5 
        = (0x00000007ffffffffULL & (0x0000000000004000ULL 
                                    + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT___zz_sim5));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__br2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__br1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__mcr4 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__m3;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__mci4 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__m3;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__bi2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__bi1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__ai3 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__ai2;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__ar3 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__ar2;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__io_cmd_valid_delay_6 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__io_cmd_valid_delay_5;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT___zz_sre5_1 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__pre4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__pre4);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT___zz_sim5_1 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__pim4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__pim4);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT___zz_reN 
        = (0x000fffffU & (IData)((vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__sre5 
                                  >> 0x0fU)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT___zz_imN 
        = (0x000fffffU & (IData)((vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__sim5 
                                  >> 0x0fU)));
    __VdfgRegularize_h6e95ff9d_0_119 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__br2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__br2));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__br1 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__br0;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT___zz_sre5_2 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__mcr4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__mcr4);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT___zz_sim5_2 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__mci4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__mci4);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__m3 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__m2;
    __VdfgRegularize_h6e95ff9d_0_120 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__bi2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__bi2));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__bi1 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__bi0;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__mulPim 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__sb3)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__ai3)))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__ai2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__ai1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__mulPre 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__db3)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__ar3)))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__ar2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__ar1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__io_rsp_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__io_cmd_valid_delay_6;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__io_cmd_valid_delay_5 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__io_cmd_valid_delay_4;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__reN 
        = (0x0000ffffU & vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT___zz_reN);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__imN 
        = (0x0000ffffU & vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT___zz_imN);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT___zz_db3 
        = __VdfgRegularize_h6e95ff9d_0_119;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT___zz_sb3 
        = __VdfgRegularize_h6e95ff9d_0_119;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT___zz_sre5 
        = (0x00000007ffffffffULL & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT___zz_sre5_1 
                                    + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT___zz_sre5_2));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT___zz_sim5 
        = (0x00000007ffffffffULL & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT___zz_sim5_1 
                                    + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT___zz_sim5_2));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT___zz_db3_1 
        = __VdfgRegularize_h6e95ff9d_0_120;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT___zz_sb3_1 
        = __VdfgRegularize_h6e95ff9d_0_120;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3_io_rsp_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__io_rsp_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__io_rsp_payload_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__reN;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__io_rsp_payload_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__imN;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__br0 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__io_cmd_payload_b_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__m2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__mulM;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__bi0 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__io_cmd_payload_b_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__ai1 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__ai0;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__ar1 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__ar0;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__io_cmd_valid_delay_4 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__io_cmd_valid_delay_3;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__mulM 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__da1)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__bi1)))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__ai0 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__io_cmd_payload_a_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__ar0 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__io_cmd_payload_a_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__io_cmd_valid_delay_3 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__io_cmd_valid_delay_2;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT___zz_da1_1 
        = ((0x00010000U & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__ai0) 
                           << 1U)) | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__ai0));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT___zz_da1 
        = ((0x00010000U & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__ar0) 
                           << 1U)) | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__ar0));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__io_cmd_valid_delay_2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__io_cmd_valid_delay_1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__io_cmd_valid_delay_1 = 1U;
}

void Vtop___024root___nba_sequent__TOP__57(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__57\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_121;
    __VdfgRegularize_h6e95ff9d_0_121 = 0;
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_122;
    __VdfgRegularize_h6e95ff9d_0_122 = 0;
    // Body
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__db3 
        = (0x0001ffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT___zz_db3 
                          - vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT___zz_db3_1));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__sb3 
        = (0x0001ffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT___zz_sb3 
                          + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT___zz_sb3_1));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__da1 
        = (0x0001ffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT___zz_da1 
                          - vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT___zz_da1_1));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__pim4 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__mulPim;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__pre4 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__mulPre;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__sre5 
        = (0x00000007ffffffffULL & (0x0000000000004000ULL 
                                    + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT___zz_sre5));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__sim5 
        = (0x00000007ffffffffULL & (0x0000000000004000ULL 
                                    + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT___zz_sim5));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__br2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__br1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__mcr4 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__m3;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__mci4 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__m3;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__ai3 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__ai2;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__bi2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__bi1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__ar3 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__ar2;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__io_cmd_valid_delay_6 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__io_cmd_valid_delay_5;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT___zz_sim5_1 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__pim4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__pim4);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT___zz_sre5_1 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__pre4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__pre4);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT___zz_reN 
        = (0x000fffffU & (IData)((vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__sre5 
                                  >> 0x0fU)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT___zz_imN 
        = (0x000fffffU & (IData)((vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__sim5 
                                  >> 0x0fU)));
    __VdfgRegularize_h6e95ff9d_0_121 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__br2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__br2));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__br1 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__br0;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT___zz_sre5_2 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__mcr4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__mcr4);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT___zz_sim5_2 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__mci4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__mci4);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__m3 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__m2;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__mulPim 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__sb3)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__ai3)))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__ai2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__ai1;
    __VdfgRegularize_h6e95ff9d_0_122 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__bi2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__bi2));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__bi1 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__bi0;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__mulPre 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__db3)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__ar3)))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__ar2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__ar1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__io_rsp_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__io_cmd_valid_delay_6;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__io_cmd_valid_delay_5 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__io_cmd_valid_delay_4;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__reN 
        = (0x0000ffffU & vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT___zz_reN);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__imN 
        = (0x0000ffffU & vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT___zz_imN);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT___zz_db3 
        = __VdfgRegularize_h6e95ff9d_0_121;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT___zz_sb3 
        = __VdfgRegularize_h6e95ff9d_0_121;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT___zz_sre5 
        = (0x00000007ffffffffULL & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT___zz_sre5_1 
                                    + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT___zz_sre5_2));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT___zz_sim5 
        = (0x00000007ffffffffULL & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT___zz_sim5_1 
                                    + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT___zz_sim5_2));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT___zz_db3_1 
        = __VdfgRegularize_h6e95ff9d_0_122;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT___zz_sb3_1 
        = __VdfgRegularize_h6e95ff9d_0_122;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0_io_rsp_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__io_rsp_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__io_rsp_payload_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__reN;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__io_rsp_payload_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__imN;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__br0 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__io_cmd_payload_b_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__m2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__mulM;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__ai1 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__ai0;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__bi0 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__io_cmd_payload_b_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__ar1 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__ar0;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__io_cmd_valid_delay_4 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__io_cmd_valid_delay_3;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0_io_rsp_payload_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__io_rsp_payload_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0_io_rsp_payload_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__io_rsp_payload_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__mulM 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__da1)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__bi1)))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__io_demodData_payload_0_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0_io_rsp_payload_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__io_demodData_payload_0_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0_io_rsp_payload_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__ai0 = 0U;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__ar0 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__io_cmd_payload_a_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__io_cmd_valid_delay_3 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__io_cmd_valid_delay_2;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd_io_demodData_payload_0_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__io_demodData_payload_0_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd_io_demodData_payload_0_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__io_demodData_payload_0_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT___zz_da1_1 
        = ((0x00010000U & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__ai0) 
                           << 1U)) | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__ai0));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT___zz_da1 
        = ((0x00010000U & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__ar0) 
                           << 1U)) | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__ar0));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__io_cmd_valid_delay_2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__io_cmd_valid_delay_1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_0__DOT__io_cmd_valid_delay_1 = 1U;
}

void Vtop___024root___nba_sequent__TOP__58(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__58\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_123;
    __VdfgRegularize_h6e95ff9d_0_123 = 0;
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_124;
    __VdfgRegularize_h6e95ff9d_0_124 = 0;
    // Body
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__db3 
        = (0x0001ffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT___zz_db3 
                          - vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT___zz_db3_1));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__sb3 
        = (0x0001ffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT___zz_sb3 
                          + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT___zz_sb3_1));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__da1 
        = (0x0001ffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT___zz_da1 
                          - vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT___zz_da1_1));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__pim4 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__mulPim;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__pre4 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__mulPre;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__sre5 
        = (0x00000007ffffffffULL & (0x0000000000004000ULL 
                                    + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT___zz_sre5));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__sim5 
        = (0x00000007ffffffffULL & (0x0000000000004000ULL 
                                    + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT___zz_sim5));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__br2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__br1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__mcr4 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__m3;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__mci4 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__m3;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__ai3 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__ai2;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__bi2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__bi1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__ar3 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__ar2;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__io_cmd_valid_delay_6 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__io_cmd_valid_delay_5;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT___zz_sim5_1 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__pim4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__pim4);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT___zz_sre5_1 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__pre4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__pre4);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT___zz_reN 
        = (0x000fffffU & (IData)((vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__sre5 
                                  >> 0x0fU)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT___zz_imN 
        = (0x000fffffU & (IData)((vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__sim5 
                                  >> 0x0fU)));
    __VdfgRegularize_h6e95ff9d_0_123 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__br2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__br2));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__br1 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__br0;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT___zz_sre5_2 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__mcr4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__mcr4);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT___zz_sim5_2 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__mci4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__mci4);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__m3 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__m2;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__mulPim 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__sb3)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__ai3)))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__ai2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__ai1;
    __VdfgRegularize_h6e95ff9d_0_124 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__bi2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__bi2));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__bi1 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__bi0;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__mulPre 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__db3)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__ar3)))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__ar2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__ar1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__io_rsp_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__io_cmd_valid_delay_6;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__io_cmd_valid_delay_5 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__io_cmd_valid_delay_4;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__reN 
        = (0x0000ffffU & vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT___zz_reN);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__imN 
        = (0x0000ffffU & vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT___zz_imN);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT___zz_db3 
        = __VdfgRegularize_h6e95ff9d_0_123;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT___zz_sb3 
        = __VdfgRegularize_h6e95ff9d_0_123;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT___zz_sre5 
        = (0x00000007ffffffffULL & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT___zz_sre5_1 
                                    + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT___zz_sre5_2));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT___zz_sim5 
        = (0x00000007ffffffffULL & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT___zz_sim5_1 
                                    + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT___zz_sim5_2));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT___zz_db3_1 
        = __VdfgRegularize_h6e95ff9d_0_124;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT___zz_sb3_1 
        = __VdfgRegularize_h6e95ff9d_0_124;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1_io_rsp_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__io_rsp_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__io_rsp_payload_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__reN;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__io_rsp_payload_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__imN;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__br0 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__io_cmd_payload_b_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__m2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__mulM;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__ai1 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__ai0;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__bi0 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__io_cmd_payload_b_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__ar1 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__ar0;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__io_cmd_valid_delay_4 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__io_cmd_valid_delay_3;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1_io_rsp_payload_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__io_rsp_payload_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1_io_rsp_payload_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__io_rsp_payload_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__mulM 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__da1)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__bi1)))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__io_demodData_payload_1_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1_io_rsp_payload_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__io_demodData_payload_1_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1_io_rsp_payload_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__ai0 = 0U;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__ar0 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__io_cmd_payload_a_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__io_cmd_valid_delay_3 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__io_cmd_valid_delay_2;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd_io_demodData_payload_1_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__io_demodData_payload_1_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd_io_demodData_payload_1_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__io_demodData_payload_1_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT___zz_da1_1 
        = ((0x00010000U & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__ai0) 
                           << 1U)) | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__ai0));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT___zz_da1 
        = ((0x00010000U & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__ar0) 
                           << 1U)) | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__ar0));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__io_cmd_valid_delay_2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__io_cmd_valid_delay_1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_1__DOT__io_cmd_valid_delay_1 = 1U;
}

void Vtop___024root___nba_sequent__TOP__59(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__59\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_125;
    __VdfgRegularize_h6e95ff9d_0_125 = 0;
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_126;
    __VdfgRegularize_h6e95ff9d_0_126 = 0;
    // Body
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__db3 
        = (0x0001ffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT___zz_db3 
                          - vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT___zz_db3_1));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__sb3 
        = (0x0001ffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT___zz_sb3 
                          + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT___zz_sb3_1));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__da1 
        = (0x0001ffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT___zz_da1 
                          - vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT___zz_da1_1));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__pim4 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__mulPim;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__pre4 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__mulPre;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__sre5 
        = (0x00000007ffffffffULL & (0x0000000000004000ULL 
                                    + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT___zz_sre5));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__sim5 
        = (0x00000007ffffffffULL & (0x0000000000004000ULL 
                                    + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT___zz_sim5));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__br2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__br1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__mcr4 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__m3;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__mci4 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__m3;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__ai3 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__ai2;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__bi2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__bi1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__ar3 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__ar2;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__io_cmd_valid_delay_6 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__io_cmd_valid_delay_5;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT___zz_sim5_1 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__pim4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__pim4);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT___zz_sre5_1 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__pre4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__pre4);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT___zz_reN 
        = (0x000fffffU & (IData)((vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__sre5 
                                  >> 0x0fU)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT___zz_imN 
        = (0x000fffffU & (IData)((vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__sim5 
                                  >> 0x0fU)));
    __VdfgRegularize_h6e95ff9d_0_125 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__br2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__br2));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__br1 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__br0;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT___zz_sre5_2 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__mcr4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__mcr4);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT___zz_sim5_2 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__mci4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__mci4);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__m3 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__m2;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__mulPim 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__sb3)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__ai3)))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__ai2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__ai1;
    __VdfgRegularize_h6e95ff9d_0_126 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__bi2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__bi2));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__bi1 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__bi0;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__mulPre 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__db3)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__ar3)))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__ar2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__ar1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__io_rsp_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__io_cmd_valid_delay_6;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__io_cmd_valid_delay_5 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__io_cmd_valid_delay_4;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__reN 
        = (0x0000ffffU & vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT___zz_reN);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__imN 
        = (0x0000ffffU & vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT___zz_imN);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT___zz_db3 
        = __VdfgRegularize_h6e95ff9d_0_125;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT___zz_sb3 
        = __VdfgRegularize_h6e95ff9d_0_125;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT___zz_sre5 
        = (0x00000007ffffffffULL & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT___zz_sre5_1 
                                    + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT___zz_sre5_2));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT___zz_sim5 
        = (0x00000007ffffffffULL & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT___zz_sim5_1 
                                    + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT___zz_sim5_2));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT___zz_db3_1 
        = __VdfgRegularize_h6e95ff9d_0_126;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT___zz_sb3_1 
        = __VdfgRegularize_h6e95ff9d_0_126;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2_io_rsp_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__io_rsp_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__io_rsp_payload_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__reN;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__io_rsp_payload_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__imN;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__br0 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__io_cmd_payload_b_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__m2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__mulM;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__ai1 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__ai0;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__bi0 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__io_cmd_payload_b_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__ar1 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__ar0;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__io_cmd_valid_delay_4 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__io_cmd_valid_delay_3;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2_io_rsp_payload_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__io_rsp_payload_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2_io_rsp_payload_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__io_rsp_payload_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__mulM 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__da1)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__bi1)))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__io_demodData_payload_2_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2_io_rsp_payload_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__io_demodData_payload_2_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2_io_rsp_payload_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__ai0 = 0U;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__ar0 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__io_cmd_payload_a_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__io_cmd_valid_delay_3 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__io_cmd_valid_delay_2;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd_io_demodData_payload_2_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__io_demodData_payload_2_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd_io_demodData_payload_2_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__io_demodData_payload_2_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT___zz_da1_1 
        = ((0x00010000U & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__ai0) 
                           << 1U)) | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__ai0));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT___zz_da1 
        = ((0x00010000U & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__ar0) 
                           << 1U)) | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__ar0));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__io_cmd_valid_delay_2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__io_cmd_valid_delay_1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_2__DOT__io_cmd_valid_delay_1 = 1U;
}

void Vtop___024root___nba_sequent__TOP__60(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__60\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_127;
    __VdfgRegularize_h6e95ff9d_0_127 = 0;
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_128;
    __VdfgRegularize_h6e95ff9d_0_128 = 0;
    // Body
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__db3 
        = (0x0001ffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT___zz_db3 
                          - vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT___zz_db3_1));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__sb3 
        = (0x0001ffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT___zz_sb3 
                          + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT___zz_sb3_1));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__da1 
        = (0x0001ffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT___zz_da1 
                          - vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT___zz_da1_1));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__pim4 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__mulPim;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__pre4 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__mulPre;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__sre5 
        = (0x00000007ffffffffULL & (0x0000000000004000ULL 
                                    + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT___zz_sre5));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__sim5 
        = (0x00000007ffffffffULL & (0x0000000000004000ULL 
                                    + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT___zz_sim5));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__br2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__br1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__mcr4 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__m3;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__mci4 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__m3;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__ai3 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__ai2;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__bi2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__bi1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__ar3 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__ar2;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__io_cmd_valid_delay_6 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__io_cmd_valid_delay_5;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT___zz_sim5_1 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__pim4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__pim4);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT___zz_sre5_1 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__pre4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__pre4);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT___zz_reN 
        = (0x000fffffU & (IData)((vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__sre5 
                                  >> 0x0fU)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT___zz_imN 
        = (0x000fffffU & (IData)((vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__sim5 
                                  >> 0x0fU)));
    __VdfgRegularize_h6e95ff9d_0_127 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__br2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__br2));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__br1 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__br0;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT___zz_sre5_2 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__mcr4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__mcr4);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT___zz_sim5_2 
        = (((QData)((IData)((3U & (- (IData)((1U & (IData)(
                                                           (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__mci4 
                                                            >> 0x00000020U)))))))) 
            << 0x00000021U) | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__mci4);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__m3 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__m2;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__mulPim 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__sb3)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__ai3)))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__ai2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__ai1;
    __VdfgRegularize_h6e95ff9d_0_128 = ((0x00010000U 
                                         & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__bi2) 
                                            << 1U)) 
                                        | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__bi2));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__bi1 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__bi0;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__mulPre 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__db3)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__ar3)))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__ar2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__ar1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__io_rsp_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__io_cmd_valid_delay_6;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__io_cmd_valid_delay_5 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__io_cmd_valid_delay_4;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__reN 
        = (0x0000ffffU & vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT___zz_reN);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__imN 
        = (0x0000ffffU & vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT___zz_imN);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT___zz_db3 
        = __VdfgRegularize_h6e95ff9d_0_127;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT___zz_sb3 
        = __VdfgRegularize_h6e95ff9d_0_127;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT___zz_sre5 
        = (0x00000007ffffffffULL & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT___zz_sre5_1 
                                    + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT___zz_sre5_2));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT___zz_sim5 
        = (0x00000007ffffffffULL & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT___zz_sim5_1 
                                    + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT___zz_sim5_2));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT___zz_db3_1 
        = __VdfgRegularize_h6e95ff9d_0_128;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT___zz_sb3_1 
        = __VdfgRegularize_h6e95ff9d_0_128;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3_io_rsp_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__io_rsp_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__io_rsp_payload_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__reN;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__io_rsp_payload_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__imN;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__br0 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__io_cmd_payload_b_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__m2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__mulM;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__ai1 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__ai0;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__bi0 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__io_cmd_payload_b_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__ar1 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__ar0;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__io_cmd_valid_delay_4 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__io_cmd_valid_delay_3;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3_io_rsp_payload_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__io_rsp_payload_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3_io_rsp_payload_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__io_rsp_payload_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__mulM 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__da1)), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__bi1)))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__io_demodData_payload_3_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3_io_rsp_payload_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__io_demodData_payload_3_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3_io_rsp_payload_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__ai0 = 0U;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__ar0 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__io_cmd_payload_a_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__io_cmd_valid_delay_3 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__io_cmd_valid_delay_2;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd_io_demodData_payload_3_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__io_demodData_payload_3_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd_io_demodData_payload_3_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__io_demodData_payload_3_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT___zz_da1_1 
        = ((0x00010000U & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__ai0) 
                           << 1U)) | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__ai0));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT___zz_da1 
        = ((0x00010000U & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__ar0) 
                           << 1U)) | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__ar0));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__io_cmd_valid_delay_2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__io_cmd_valid_delay_1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_decoderRd__DOT__muls_3__DOT__io_cmd_valid_delay_1 = 1U;
}

void Vtop___024root___nba_sequent__TOP__61(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__61\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__rawPulse_valid_regNext 
        = ((1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__dspRst))) 
           && (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__rawPulse_valid));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__io_pulse_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__rawPulse_valid_regNext;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel_io_pulse_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_gateChannel__DOT__io_pulse_valid;
}

void Vtop___024root___nba_sequent__TOP__62(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__62\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__rawPulse_valid_regNext 
        = ((1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__dspRst))) 
           && (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__rawPulse_valid));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_pulse_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__rawPulse_valid_regNext;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel_io_pulse_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_roChannel__DOT__io_pulse_valid;
}

void Vtop___024root___nba_sequent__TOP__63(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__63\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_41;
    __VdfgRegularize_h6e95ff9d_0_41 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_42;
    __VdfgRegularize_h6e95ff9d_0_42 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_43;
    __VdfgRegularize_h6e95ff9d_0_43 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_44;
    __VdfgRegularize_h6e95ff9d_0_44 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_45;
    __VdfgRegularize_h6e95ff9d_0_45 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_46;
    __VdfgRegularize_h6e95ff9d_0_46 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_47;
    __VdfgRegularize_h6e95ff9d_0_47 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_48;
    __VdfgRegularize_h6e95ff9d_0_48 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_49;
    __VdfgRegularize_h6e95ff9d_0_49 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_50;
    __VdfgRegularize_h6e95ff9d_0_50 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_51;
    __VdfgRegularize_h6e95ff9d_0_51 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_52;
    __VdfgRegularize_h6e95ff9d_0_52 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_53;
    __VdfgRegularize_h6e95ff9d_0_53 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_54;
    __VdfgRegularize_h6e95ff9d_0_54 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_55;
    __VdfgRegularize_h6e95ff9d_0_55 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_56;
    __VdfgRegularize_h6e95ff9d_0_56 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_57;
    __VdfgRegularize_h6e95ff9d_0_57 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_58;
    __VdfgRegularize_h6e95ff9d_0_58 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_59;
    __VdfgRegularize_h6e95ff9d_0_59 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_60;
    __VdfgRegularize_h6e95ff9d_0_60 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_61;
    __VdfgRegularize_h6e95ff9d_0_61 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_62;
    __VdfgRegularize_h6e95ff9d_0_62 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_63;
    __VdfgRegularize_h6e95ff9d_0_63 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_64;
    __VdfgRegularize_h6e95ff9d_0_64 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_65;
    __VdfgRegularize_h6e95ff9d_0_65 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_66;
    __VdfgRegularize_h6e95ff9d_0_66 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_67;
    __VdfgRegularize_h6e95ff9d_0_67 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_68;
    __VdfgRegularize_h6e95ff9d_0_68 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_69;
    __VdfgRegularize_h6e95ff9d_0_69 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_70;
    __VdfgRegularize_h6e95ff9d_0_70 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_71;
    __VdfgRegularize_h6e95ff9d_0_71 = 0;
    IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_72;
    __VdfgRegularize_h6e95ff9d_0_72 = 0;
    // Body
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__imOut 
        = (0x0000ffffU & vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_imOut);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__reOut 
        = (0x0000ffffU & vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_reOut);
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_16) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_17 
            = (0x03ffffffU & ((IData)(0x00000080U) 
                              + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_17_1));
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_17 
            = (0x03ffffffU & ((IData)(0x00000080U) 
                              + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_17_1));
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_17 
            = (0x00ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_16 
                              - (IData)(0x00000029U)));
    } else {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_17 
            = (0x03ffffffU & ((IData)(0x00000080U) 
                              + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_17_3));
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_17 
            = (0x03ffffffU & ((IData)(0x00000080U) 
                              + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_17_3));
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_17 
            = (0x00ffffffU & ((IData)(0x00000029U) 
                              + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_16));
    }
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_0 = 0U;
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_15) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_16 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_16_2;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_16 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_16_1;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_16 
            = (0x00ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_15 
                              - (IData)(0x00000051U)));
    } else {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_16 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_16_4;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_16 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_16_3;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_16 
            = (0x00ffffffU & ((IData)(0x00000051U) 
                              + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_15));
    }
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_14) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_15 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_15_2;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_15 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_15_1;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_15 
            = (0x00ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_14 
                              - (IData)(0x000000a3U)));
    } else {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_15 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_15_4;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_15 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_15_3;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_15 
            = (0x00ffffffU & ((IData)(0x000000a3U) 
                              + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_14));
    }
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_13) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_14 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_14_1;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_14 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_14_2;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_14 
            = (0x00ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_13 
                              - (IData)(0x00000146U)));
    } else {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_14 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_14_3;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_14 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_14_4;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_14 
            = (0x00ffffffU & ((IData)(0x00000146U) 
                              + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_13));
    }
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_12) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_13 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_13_1;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_13 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_13_2;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_13 
            = (0x00ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_12 
                              - (IData)(0x0000028cU)));
    } else {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_13 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_13_3;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_13 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_13_4;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_13 
            = (0x00ffffffU & ((IData)(0x0000028cU) 
                              + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_12));
    }
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_11) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_12 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_12_1;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_12 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_12_2;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_12 
            = (0x00ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_11 
                              - (IData)(0x00000518U)));
    } else {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_12 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_12_3;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_12 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_12_4;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_12 
            = (0x00ffffffU & ((IData)(0x00000518U) 
                              + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_11));
    }
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_10) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_11 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_11_1;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_11 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_11_2;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_11 
            = (0x00ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_10 
                              - (IData)(0x00000a30U)));
    } else {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_11 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_11_3;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_11 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_11_4;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_11 
            = (0x00ffffffU & ((IData)(0x00000a30U) 
                              + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_10));
    }
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_9) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_10 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_10_1;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_10 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_10_2;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_10 
            = (0x00ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_9 
                              - (IData)(0x0000145fU)));
    } else {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_10 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_10_3;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_10 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_10_4;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_10 
            = (0x00ffffffU & ((IData)(0x0000145fU) 
                              + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_9));
    }
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_8) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_9 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_9_1;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_9 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_9_2;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_9 
            = (0x00ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_8 
                              - (IData)(0x000028beU)));
    } else {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_9 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_9_3;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_9 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_9_4;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_9 
            = (0x00ffffffU & ((IData)(0x000028beU) 
                              + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_8));
    }
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_7) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_8 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_8_1;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_8 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_8_2;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_8 
            = (0x00ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_7 
                              - (IData)(0x0000517cU)));
    } else {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_8 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_8_3;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_8 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_8_4;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_8 
            = (0x00ffffffU & ((IData)(0x0000517cU) 
                              + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_7));
    }
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_6) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_7 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_7_1;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_7 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_7_2;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_7 
            = (0x00ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_6 
                              - (IData)(0x0000a2f6U)));
    } else {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_7 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_7_3;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_7 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_7_4;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_7 
            = (0x00ffffffU & ((IData)(0x0000a2f6U) 
                              + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_6));
    }
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_5) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_6 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_6_1;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_6 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_6_2;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_6 
            = (0x00ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_5 
                              - (IData)(0x000145d8U)));
    } else {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_6 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_6_3;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_6 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_6_4;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_6 
            = (0x00ffffffU & ((IData)(0x000145d8U) 
                              + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_5));
    }
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_4) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_5 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_5_1;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_5 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_5_2;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_5 
            = (0x00ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_4 
                              - (IData)(0x00028b0dU)));
    } else {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_5 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_5_3;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_5 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_5_4;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_5 
            = (0x00ffffffU & ((IData)(0x00028b0dU) 
                              + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_4));
    }
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_3) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_4 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_4_2;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_4 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_4_1;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_4 
            = (0x00ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_3 
                              - (IData)(0x00051112U)));
    } else {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_4 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_4_4;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_4 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_4_3;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_4 
            = (0x00ffffffU & ((IData)(0x00051112U) 
                              + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_3));
    }
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_2) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_3 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_3_2;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_3 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_3_1;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_3 
            = (0x00ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_2 
                              - (IData)(0x0009fb38U)));
    } else {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_3 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_3_4;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_3 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_3_3;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_3 
            = (0x00ffffffU & ((IData)(0x0009fb38U) 
                              + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_2));
    }
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_1) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_2 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_2_2;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_2 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_2_1;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_2 
            = (0x00ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_1 
                              - (IData)(0x0012e405U)));
    } else {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_2 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_2_4;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_2 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_2_3;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_2 
            = (0x00ffffffU & ((IData)(0x0012e405U) 
                              + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_1));
    }
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__when_Cordic_l128) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_1 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_1_1;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_1 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_1_2;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_1 
            = (0x00ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_0 
                              - (IData)(0x00200000U)));
    } else {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_1 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_1_2;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_1 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_1_3;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_1 
            = (0x00ffffffU & ((IData)(0x00200000U) 
                              + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_0));
    }
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__pre) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_0 = 0x03b24800U;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_0 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__zFlip;
    } else {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_0 = 0x004db800U;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_0 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__zLoad;
    }
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_19 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_18;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__io_rsp_payload_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__imOut;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__io_rsp_payload_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__reOut;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_reOut 
        = (0x0003ffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_17 
                          >> 8U));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_imOut 
        = (0x0003ffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_17 
                          >> 8U));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_1 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_0;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_1 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_0;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_15 
        = (0x00000fffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_14 
                          >> 0x0eU));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_14 
        = (0x00001fffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_13 
                          >> 0x0dU));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_14 
        = (0x00001fffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_13 
                          >> 0x0dU));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_13 
        = (0x00003fffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_12 
                          >> 0x0cU));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_13 
        = (0x00003fffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_12 
                          >> 0x0cU));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_12 
        = (0x00007fffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_11 
                          >> 0x0bU));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_12 
        = (0x00007fffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_11 
                          >> 0x0bU));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_11 
        = (0x0000ffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_10 
                          >> 0x0aU));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_11 
        = (0x0000ffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_10 
                          >> 0x0aU));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_10 
        = (0x0001ffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_9 
                          >> 9U));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_10 
        = (0x0001ffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_9 
                          >> 9U));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_9 
        = (0x0003ffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_8 
                          >> 8U));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_9 
        = (0x0003ffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_8 
                          >> 8U));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_8 
        = (0x0007ffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_7 
                          >> 7U));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_4 
        = (0x007fffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_3 
                          >> 3U));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_7 
        = (0x000fffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_6 
                          >> 6U));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_3 
        = (0x00ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_2 
                          >> 2U));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_6 
        = (0x001fffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_5 
                          >> 5U));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_5 
        = (0x003fffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_4 
                          >> 4U));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_2 
        = (0x01ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_1 
                          >> 1U));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_2 
        = (0x01ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_1 
                          >> 1U));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_5 
        = (0x003fffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_4 
                          >> 4U));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_15 
        = (0x00000fffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_14 
                          >> 0x0eU));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_16 
        = (0x000007ffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_15 
                          >> 0x0fU));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_17 
        = (0x000003ffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_16 
                          >> 0x10U));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_4 
        = (0x007fffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_3 
                          >> 3U));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_3 
        = (0x00ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_2 
                          >> 2U));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_6 
        = (0x001fffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_5 
                          >> 5U));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_7 
        = (0x000fffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_6 
                          >> 6U));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_8 
        = (0x0007ffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_7 
                          >> 7U));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_16 
        = (0x000007ffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_15 
                          >> 0x0fU));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_17 
        = (0x000003ffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_16 
                          >> 0x10U));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__io_rsp_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_19;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_18 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_17;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6_io_rsp_payload_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__io_rsp_payload_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6_io_rsp_payload_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__io_rsp_payload_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_1_2 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_0 
                          - vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_1));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_1_3 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_0 
                          + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_1));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_1_1 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_0 
                          + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_1));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_1_2 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_0 
                          - vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_1));
    __VdfgRegularize_h6e95ff9d_0_67 = ((0x03fff000U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_15) 
                                                          >> 0x0000000bU)))) 
                                           << 0x0000000cU)) 
                                       | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_15));
    __VdfgRegularize_h6e95ff9d_0_65 = ((0x03ffe000U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_14) 
                                                          >> 0x0000000cU)))) 
                                           << 0x0000000dU)) 
                                       | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_14));
    __VdfgRegularize_h6e95ff9d_0_66 = ((0x03ffe000U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_14) 
                                                          >> 0x0000000cU)))) 
                                           << 0x0000000dU)) 
                                       | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_14));
    __VdfgRegularize_h6e95ff9d_0_63 = ((0x03ffc000U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_13) 
                                                          >> 0x0000000dU)))) 
                                           << 0x0000000eU)) 
                                       | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_13));
    __VdfgRegularize_h6e95ff9d_0_64 = ((0x03ffc000U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_13) 
                                                          >> 0x0000000dU)))) 
                                           << 0x0000000eU)) 
                                       | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_13));
    __VdfgRegularize_h6e95ff9d_0_61 = ((0x03ff8000U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_12) 
                                                          >> 0x0000000eU)))) 
                                           << 0x0000000fU)) 
                                       | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_12));
    __VdfgRegularize_h6e95ff9d_0_62 = ((0x03ff8000U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_12) 
                                                          >> 0x0000000eU)))) 
                                           << 0x0000000fU)) 
                                       | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_12));
    __VdfgRegularize_h6e95ff9d_0_59 = ((0x03ff0000U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_11) 
                                                          >> 0x0000000fU)))) 
                                           << 0x00000010U)) 
                                       | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_11));
    __VdfgRegularize_h6e95ff9d_0_60 = ((0x03ff0000U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_11) 
                                                          >> 0x0000000fU)))) 
                                           << 0x00000010U)) 
                                       | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_11));
    __VdfgRegularize_h6e95ff9d_0_57 = ((0x03fe0000U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_10 
                                                          >> 0x00000010U)))) 
                                           << 0x00000011U)) 
                                       | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_10);
    __VdfgRegularize_h6e95ff9d_0_58 = ((0x03fe0000U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_10 
                                                          >> 0x00000010U)))) 
                                           << 0x00000011U)) 
                                       | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_10);
    __VdfgRegularize_h6e95ff9d_0_55 = ((0x03fc0000U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_9 
                                                          >> 0x00000011U)))) 
                                           << 0x00000012U)) 
                                       | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_9);
    __VdfgRegularize_h6e95ff9d_0_56 = ((0x03fc0000U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_9 
                                                          >> 0x00000011U)))) 
                                           << 0x00000012U)) 
                                       | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_9);
    __VdfgRegularize_h6e95ff9d_0_53 = ((0x03f80000U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_8 
                                                          >> 0x00000012U)))) 
                                           << 0x00000013U)) 
                                       | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_8);
    __VdfgRegularize_h6e95ff9d_0_46 = ((0x03800000U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_4 
                                                          >> 0x00000016U)))) 
                                           << 0x00000017U)) 
                                       | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_4);
    __VdfgRegularize_h6e95ff9d_0_51 = ((0x03f00000U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_7 
                                                          >> 0x00000013U)))) 
                                           << 0x00000014U)) 
                                       | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_7);
    __VdfgRegularize_h6e95ff9d_0_44 = ((0x03000000U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_3 
                                                          >> 0x00000017U)))) 
                                           << 0x00000018U)) 
                                       | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_3);
    __VdfgRegularize_h6e95ff9d_0_49 = ((0x03e00000U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_6 
                                                          >> 0x00000014U)))) 
                                           << 0x00000015U)) 
                                       | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_6);
    __VdfgRegularize_h6e95ff9d_0_48 = ((0x03c00000U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_5 
                                                          >> 0x00000015U)))) 
                                           << 0x00000016U)) 
                                       | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_5);
    __VdfgRegularize_h6e95ff9d_0_41 = ((0x02000000U 
                                        & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_2 
                                           << 1U)) 
                                       | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_2);
    __VdfgRegularize_h6e95ff9d_0_42 = ((0x02000000U 
                                        & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_2 
                                           << 1U)) 
                                       | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_2);
    __VdfgRegularize_h6e95ff9d_0_47 = ((0x03c00000U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_5 
                                                          >> 0x00000015U)))) 
                                           << 0x00000016U)) 
                                       | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_5);
    __VdfgRegularize_h6e95ff9d_0_68 = ((0x03fff000U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_15) 
                                                          >> 0x0000000bU)))) 
                                           << 0x0000000cU)) 
                                       | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_15));
    __VdfgRegularize_h6e95ff9d_0_70 = ((0x03fff800U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_16) 
                                                          >> 0x0000000aU)))) 
                                           << 0x0000000bU)) 
                                       | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_16));
    __VdfgRegularize_h6e95ff9d_0_72 = ((0x03fffc00U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_17) 
                                                          >> 9U)))) 
                                           << 0x0000000aU)) 
                                       | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_17));
    __VdfgRegularize_h6e95ff9d_0_45 = ((0x03800000U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_4 
                                                          >> 0x00000016U)))) 
                                           << 0x00000017U)) 
                                       | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_4);
    __VdfgRegularize_h6e95ff9d_0_43 = ((0x03000000U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_3 
                                                          >> 0x00000017U)))) 
                                           << 0x00000018U)) 
                                       | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_3);
    __VdfgRegularize_h6e95ff9d_0_50 = ((0x03e00000U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_6 
                                                          >> 0x00000014U)))) 
                                           << 0x00000015U)) 
                                       | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_6);
    __VdfgRegularize_h6e95ff9d_0_52 = ((0x03f00000U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_7 
                                                          >> 0x00000013U)))) 
                                           << 0x00000014U)) 
                                       | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_7);
    __VdfgRegularize_h6e95ff9d_0_54 = ((0x03f80000U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_8 
                                                          >> 0x00000012U)))) 
                                           << 0x00000013U)) 
                                       | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_8);
    __VdfgRegularize_h6e95ff9d_0_69 = ((0x03fff800U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_16) 
                                                          >> 0x0000000aU)))) 
                                           << 0x0000000bU)) 
                                       | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_16));
    __VdfgRegularize_h6e95ff9d_0_71 = ((0x03fffc00U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_17) 
                                                          >> 9U)))) 
                                           << 0x0000000aU)) 
                                       | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_17));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6_io_rsp_valid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__io_rsp_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__rspIm 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6_io_rsp_payload_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__rspRe 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6_io_rsp_payload_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_15_3 
        = __VdfgRegularize_h6e95ff9d_0_67;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_15_5 
        = __VdfgRegularize_h6e95ff9d_0_67;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_14_3 
        = __VdfgRegularize_h6e95ff9d_0_65;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_14_5 
        = __VdfgRegularize_h6e95ff9d_0_65;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_14_2 
        = __VdfgRegularize_h6e95ff9d_0_66;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_14_4 
        = __VdfgRegularize_h6e95ff9d_0_66;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_13_3 
        = __VdfgRegularize_h6e95ff9d_0_63;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_13_5 
        = __VdfgRegularize_h6e95ff9d_0_63;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_13_2 
        = __VdfgRegularize_h6e95ff9d_0_64;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_13_4 
        = __VdfgRegularize_h6e95ff9d_0_64;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_12_3 
        = __VdfgRegularize_h6e95ff9d_0_61;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_12_5 
        = __VdfgRegularize_h6e95ff9d_0_61;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_12_2 
        = __VdfgRegularize_h6e95ff9d_0_62;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_12_4 
        = __VdfgRegularize_h6e95ff9d_0_62;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_11_3 
        = __VdfgRegularize_h6e95ff9d_0_59;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_11_5 
        = __VdfgRegularize_h6e95ff9d_0_59;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_11_2 
        = __VdfgRegularize_h6e95ff9d_0_60;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_11_4 
        = __VdfgRegularize_h6e95ff9d_0_60;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_10_3 
        = __VdfgRegularize_h6e95ff9d_0_57;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_10_5 
        = __VdfgRegularize_h6e95ff9d_0_57;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_10_2 
        = __VdfgRegularize_h6e95ff9d_0_58;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_10_4 
        = __VdfgRegularize_h6e95ff9d_0_58;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_9_3 
        = __VdfgRegularize_h6e95ff9d_0_55;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_9_5 
        = __VdfgRegularize_h6e95ff9d_0_55;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_9_2 
        = __VdfgRegularize_h6e95ff9d_0_56;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_9_4 
        = __VdfgRegularize_h6e95ff9d_0_56;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_8_3 
        = __VdfgRegularize_h6e95ff9d_0_53;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_8_5 
        = __VdfgRegularize_h6e95ff9d_0_53;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_4_2 
        = __VdfgRegularize_h6e95ff9d_0_46;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_4_4 
        = __VdfgRegularize_h6e95ff9d_0_46;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_7_3 
        = __VdfgRegularize_h6e95ff9d_0_51;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_7_5 
        = __VdfgRegularize_h6e95ff9d_0_51;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_3_2 
        = __VdfgRegularize_h6e95ff9d_0_44;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_3_4 
        = __VdfgRegularize_h6e95ff9d_0_44;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_6_3 
        = __VdfgRegularize_h6e95ff9d_0_49;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_6_5 
        = __VdfgRegularize_h6e95ff9d_0_49;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_5_2 
        = __VdfgRegularize_h6e95ff9d_0_48;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_5_4 
        = __VdfgRegularize_h6e95ff9d_0_48;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_2_3 
        = __VdfgRegularize_h6e95ff9d_0_41;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_2_5 
        = __VdfgRegularize_h6e95ff9d_0_41;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_2_2 
        = __VdfgRegularize_h6e95ff9d_0_42;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_2_4 
        = __VdfgRegularize_h6e95ff9d_0_42;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_5_3 
        = __VdfgRegularize_h6e95ff9d_0_47;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_5_5 
        = __VdfgRegularize_h6e95ff9d_0_47;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_15_2 
        = __VdfgRegularize_h6e95ff9d_0_68;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_15_4 
        = __VdfgRegularize_h6e95ff9d_0_68;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_16_2 
        = __VdfgRegularize_h6e95ff9d_0_70;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_16_4 
        = __VdfgRegularize_h6e95ff9d_0_70;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_17_2 
        = __VdfgRegularize_h6e95ff9d_0_72;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_17_4 
        = __VdfgRegularize_h6e95ff9d_0_72;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_4_3 
        = __VdfgRegularize_h6e95ff9d_0_45;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_4_5 
        = __VdfgRegularize_h6e95ff9d_0_45;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_3_3 
        = __VdfgRegularize_h6e95ff9d_0_43;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_3_5 
        = __VdfgRegularize_h6e95ff9d_0_43;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_6_2 
        = __VdfgRegularize_h6e95ff9d_0_50;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_6_4 
        = __VdfgRegularize_h6e95ff9d_0_50;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_7_2 
        = __VdfgRegularize_h6e95ff9d_0_52;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_7_4 
        = __VdfgRegularize_h6e95ff9d_0_52;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_8_2 
        = __VdfgRegularize_h6e95ff9d_0_54;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_8_4 
        = __VdfgRegularize_h6e95ff9d_0_54;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_16_3 
        = __VdfgRegularize_h6e95ff9d_0_69;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_16_5 
        = __VdfgRegularize_h6e95ff9d_0_69;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_17_2 
        = __VdfgRegularize_h6e95ff9d_0_71;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_17_4 
        = __VdfgRegularize_h6e95ff9d_0_71;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__rspValid 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6_io_rsp_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_17 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_16;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_16 
        = (1U & (~ (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_16 
                    >> 0x00000017U)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_15_2 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_14 
                          - vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_15_3));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_15_4 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_14 
                          + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_15_5));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_14_2 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_13 
                          - vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_14_3));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_14_4 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_13 
                          + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_14_5));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_14_1 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_13 
                          + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_14_2));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_14_3 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_13 
                          - vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_14_4));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_13_2 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_12 
                          - vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_13_3));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_13_4 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_12 
                          + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_13_5));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_13_1 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_12 
                          + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_13_2));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_13_3 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_12 
                          - vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_13_4));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_12_2 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_11 
                          - vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_12_3));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_12_4 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_11 
                          + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_12_5));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_12_1 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_11 
                          + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_12_2));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_12_3 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_11 
                          - vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_12_4));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_11_2 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_10 
                          - vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_11_3));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_11_4 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_10 
                          + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_11_5));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_11_1 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_10 
                          + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_11_2));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_11_3 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_10 
                          - vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_11_4));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_10_2 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_9 
                          - vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_10_3));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_10_4 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_9 
                          + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_10_5));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_10_1 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_9 
                          + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_10_2));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_10_3 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_9 
                          - vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_10_4));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_9_2 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_8 
                          - vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_9_3));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_9_4 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_8 
                          + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_9_5));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_9_1 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_8 
                          + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_9_2));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_9_3 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_8 
                          - vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_9_4));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_8_2 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_7 
                          - vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_8_3));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_8_4 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_7 
                          + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_8_5));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_4_1 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_3 
                          + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_4_2));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_4_3 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_3 
                          - vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_4_4));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_7_2 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_6 
                          - vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_7_3));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_7_4 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_6 
                          + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_7_5));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_3_1 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_2 
                          + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_3_2));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_3_3 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_2 
                          - vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_3_4));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_6_2 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_5 
                          - vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_6_3));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_6_4 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_5 
                          + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_6_5));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_5_1 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_4 
                          + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_5_2));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_5_3 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_4 
                          - vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_5_4));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_2_2 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_1 
                          - vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_2_3));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_2_4 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_1 
                          + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_2_5));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_2_1 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_1 
                          + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_2_2));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_2_3 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_1 
                          - vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_2_4));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_5_2 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_4 
                          - vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_5_3));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_5_4 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_4 
                          + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_5_5));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_15_1 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_14 
                          + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_15_2));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_15_3 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_14 
                          - vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_15_4));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_16_1 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_15 
                          + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_16_2));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_16_3 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_15 
                          - vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_16_4));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_17_1 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_16 
                          + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_17_2));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_17_3 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_16 
                          - vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_17_4));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_4_2 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_3 
                          - vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_4_3));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_4_4 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_3 
                          + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_4_5));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_3_2 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_2 
                          - vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_3_3));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_3_4 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_2 
                          + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_3_5));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_6_1 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_5 
                          + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_6_2));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_6_3 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_5 
                          - vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_6_4));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_7_1 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_6 
                          + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_7_2));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_7_3 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_6 
                          - vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_7_4));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_8_1 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_7 
                          + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_8_2));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_8_3 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Y_7 
                          - vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_Y_8_4));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_16_2 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_15 
                          - vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_16_3));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_16_4 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_15 
                          + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_16_5));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_17_1 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_16 
                          - vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_17_2));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_17_3 
        = (0x03ffffffU & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__X_16 
                          + vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT___zz_X_17_4));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_16 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_15;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_15 
        = (1U & (~ (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_15 
                    >> 0x00000017U)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_15 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_14;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_14 
        = (1U & (~ (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_14 
                    >> 0x00000017U)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_14 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_13;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_13 
        = (1U & (~ (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_13 
                    >> 0x00000017U)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_13 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_12;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_12 
        = (1U & (~ (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_12 
                    >> 0x00000017U)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_12 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_11;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_11 
        = (1U & (~ (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_11 
                    >> 0x00000017U)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_11 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_10;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_10 
        = (1U & (~ (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_10 
                    >> 0x00000017U)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_10 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_9;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_9 
        = (1U & (~ (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_9 
                    >> 0x00000017U)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_9 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_8;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_8 
        = (1U & (~ (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_8 
                    >> 0x00000017U)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_8 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_7;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_7 
        = (1U & (~ (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_7 
                    >> 0x00000017U)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_7 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_6;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_6 
        = (1U & (~ (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_6 
                    >> 0x00000017U)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_6 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_5;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_5 
        = (1U & (~ (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_5 
                    >> 0x00000017U)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_5 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_4;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_4 
        = (1U & (~ (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_4 
                    >> 0x00000017U)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_4 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_3;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_3 
        = (1U & (~ (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_3 
                    >> 0x00000017U)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_3 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_2;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_2 
        = (1U & (~ (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_2 
                    >> 0x00000017U)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__when_Cordic_l128_1 
        = (1U & (~ (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_1 
                    >> 0x00000017U)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__io_cmd_valid_delay_1 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__io_cmd_valid;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__when_Cordic_l128 
        = (1U & (~ (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__phasorGen__DOT__cordic_6__DOT__Z_0 
                    >> 0x00000017U)));
}

void Vtop___024root___nba_sequent__TOP__64(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__64\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__envComb_regNext_0_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__envComb_0_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__envComb_regNext_0_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__envComb_0_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__envComb_regNext_1_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__envComb_1_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__envComb_regNext_1_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__envComb_1_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__envComb_regNext_2_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__envComb_2_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__envComb_regNext_2_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__envComb_2_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__envComb_regNext_3_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__envComb_3_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__envComb_regNext_3_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__envComb_3_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__io_env_0_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__envComb_regNext_0_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__io_env_0_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__envComb_regNext_0_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__io_env_1_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__envComb_regNext_1_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__io_env_1_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__envComb_regNext_1_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__io_env_2_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__envComb_regNext_2_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__io_env_2_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__envComb_regNext_2_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__io_env_3_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__envComb_regNext_3_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__io_env_3_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__envComb_regNext_3_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader_io_env_0_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__io_env_0_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader_io_env_0_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__io_env_0_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader_io_env_1_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__io_env_1_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader_io_env_1_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__io_env_1_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader_io_env_2_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__io_env_2_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader_io_env_2_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__io_env_2_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader_io_env_3_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__io_env_3_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader_io_env_3_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader__DOT__io_env_3_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__io_cmd_payload_b_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader_io_env_0_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0__DOT__io_cmd_payload_b_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader_io_env_0_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__io_cmd_payload_b_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader_io_env_1_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1__DOT__io_cmd_payload_b_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader_io_env_1_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__io_cmd_payload_b_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader_io_env_2_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2__DOT__io_cmd_payload_b_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader_io_env_2_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__io_cmd_payload_b_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader_io_env_3_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3__DOT__io_cmd_payload_b_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envReader_io_env_3_im;
}

void Vtop___024root___nba_sequent__TOP__65(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__65\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__cBase_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__cordic_6_io_rsp_payload_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__cBase_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__cordic_6_io_rsp_payload_im;
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__io_amp_valid) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__ampReg 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__io_amp_payload;
    }
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__timePhase 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__freqReg)), 
                      VL_EXTENDS_II(32,16, (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__batchTime)));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__gPhase 
        = (0x0000ffffU & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT___zz_gPhase) 
                          + (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__phaseReg)));
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__phValBuf) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__phRe_0 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__phIn_0_re;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__phIm_0 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__phIn_0_im;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__phRe_1 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__phIn_1_re;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__phIm_1 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__phIn_1_im;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__phRe_2 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__phIn_2_re;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__phIm_2 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__phIn_2_im;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__phRe_3 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__phIn_3_re;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__phIm_3 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__phIn_3_im;
    }
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_0__DOT__io_cmd_payload_a_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__cBase_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__io_cmd_payload_a_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__cBase_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__io_cmd_payload_a_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__cBase_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__io_cmd_payload_a_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__cBase_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_0__DOT__io_cmd_payload_a_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__cBase_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__io_cmd_payload_a_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__cBase_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__io_cmd_payload_a_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__cBase_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__io_cmd_payload_a_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__cBase_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__cordic_6__DOT__io_cmd_payload_xy_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__ampReg;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT___zz_gPhase 
        = (0x0000ffffU & vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__timePhase);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__batchTime 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT___zz_batchTime;
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__io_freq_valid) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__freqReg 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__io_freq_payload;
    }
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__cordic_6__DOT__io_cmd_payload_z 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__gPhase;
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__io_phase_valid) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__phaseReg 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__io_phase_payload;
    }
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_0__DOT__io_cmd_payload_b_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__phRe_0;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__phIn_0_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__io_phasors_payload_0_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_0__DOT__io_cmd_payload_b_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__phIm_0;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__phIn_0_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__io_phasors_payload_0_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__io_cmd_payload_b_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__phRe_1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__phIn_1_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__io_phasors_payload_1_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_1__DOT__io_cmd_payload_b_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__phIm_1;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__phIn_1_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__io_phasors_payload_1_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__io_cmd_payload_b_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__phRe_2;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__phIn_2_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__io_phasors_payload_2_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_2__DOT__io_cmd_payload_b_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__phIm_2;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__phIn_2_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__io_phasors_payload_2_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__io_cmd_payload_b_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__phRe_3;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__phIn_3_re 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__io_phasors_payload_3_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__muls_3__DOT__io_cmd_payload_b_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__phIm_3;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__phIn_3_im 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__io_phasors_payload_3_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__cordic_6__DOT___zz_xLoad 
        = ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__cordic_6__DOT__io_cmd_payload_xy_re) 
           << 8U);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__cordic_6__DOT__pre 
        = (1U & VL_REDXOR_32((3U & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__cordic_6__DOT__io_cmd_payload_z) 
                                    >> 0x0000000eU))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__cordic_6__DOT__zLoad 
        = ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__cordic_6__DOT__io_cmd_payload_z) 
           << 8U);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__cordic_6__DOT__xLoad 
        = ((0x03000000U & ((- (IData)((1U & (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__cordic_6__DOT___zz_xLoad 
                                             >> 0x00000017U)))) 
                           << 0x00000018U)) | vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__cordic_6__DOT___zz_xLoad);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__cordic_6__DOT__zFlip 
        = (0x00800000U ^ vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__cordic_6__DOT__zLoad);
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__cordic_6__DOT___zz_X_0 
        = (0x03ffffffU & (- vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__carrierGen__DOT__cordic_6__DOT__xLoad));
}

void Vtop___024root___nba_sequent__TOP__66(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__66\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0_io_rsp_payload_re_regNext 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0_io_rsp_payload_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0_io_rsp_payload_im_regNext 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_0_io_rsp_payload_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1_io_rsp_payload_re_regNext 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1_io_rsp_payload_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1_io_rsp_payload_im_regNext 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_1_io_rsp_payload_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2_io_rsp_payload_re_regNext 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2_io_rsp_payload_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2_io_rsp_payload_im_regNext 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_2_io_rsp_payload_im;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3_io_rsp_payload_re_regNext 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3_io_rsp_payload_re;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3_io_rsp_payload_im_regNext 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_posted_demodChannel__DOT__pg__DOT__envMuls_3_io_rsp_payload_im;
}

void Vtop___024root___nba_sequent__TOP__67(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__67\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onW_awS2m_ready) {
        vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onW_awS2m_rData_len 
            = vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onW_awS2m_payload_len;
        vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onW_awS2m_rData_offset 
            = vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onW_awS2m_payload_offset;
        vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onW_awS2m_rData_bytePerBeat 
            = vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onW_awS2m_payload_bytePerBeat;
    }
    if (vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onAw_toW_ready) {
        vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onAw_toW_rData_len 
            = vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onAw_toW_payload_len;
        vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onAw_toW_rData_offset 
            = vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onAw_toW_payload_offset;
        vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onAw_toW_rData_bytePerBeat 
            = vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onAw_toW_payload_bytePerBeat;
    }
    if (vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__when_Axi4Compactor_l53) {
        vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onW_buffer_0_strb = 0U;
    }
    if (vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__when_Axi4Compactor_l53_1) {
        vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onW_buffer_1_strb = 0U;
    }
    if (vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__when_Axi4Compactor_l53_3) {
        vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onW_buffer_3_strb = 0U;
    }
    if (vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__when_Axi4Compactor_l53_2) {
        vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onW_buffer_2_strb = 0U;
    }
    if (vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__io_up_w_fire) {
        vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onW_bufferLast 
            = vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__io_up_w_payload_last;
        if (vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__when_Axi4Compactor_l74) {
            vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onW_buffer_0_data 
                = (0x000000ffU & vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__io_up_w_payload_data);
            vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onW_buffer_0_strb 
                = (1U & (IData)(vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__io_up_w_payload_strb));
        }
        if (vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__when_Axi4Compactor_l74_3) {
            vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onW_buffer_3_data 
                = (vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__io_up_w_payload_data 
                   >> 0x18U);
            vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onW_buffer_3_strb 
                = (1U & ((IData)(vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__io_up_w_payload_strb) 
                         >> 3U));
        }
        if (vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__when_Axi4Compactor_l74_1) {
            vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onW_buffer_1_data 
                = (0x000000ffU & (vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__io_up_w_payload_data 
                                  >> 8U));
            vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onW_buffer_1_strb 
                = (1U & ((IData)(vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__io_up_w_payload_strb) 
                         >> 1U));
        }
        if (vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__when_Axi4Compactor_l74_2) {
            vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onW_buffer_2_data 
                = (0x000000ffU & (vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__io_up_w_payload_data 
                                  >> 0x10U));
            vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onW_buffer_2_strb 
                = (1U & ((IData)(vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__io_up_w_payload_strb) 
                         >> 2U));
        }
    }
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onW_aw_payload_len 
        = vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onW_awS2m_rData_len;
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onW_aw_payload_offset 
        = vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onW_awS2m_rData_offset;
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__io_down_w_payload_last 
        = vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onW_bufferLast;
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onW_aw_payload_bytePerBeat 
        = vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onW_awS2m_rData_bytePerBeat;
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__io_down_w_payload_data 
        = ((((IData)(vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onW_buffer_3_data) 
             << 0x00000018U) | ((IData)(vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onW_buffer_2_data) 
                                << 0x00000010U)) | 
           (((IData)(vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onW_buffer_1_data) 
             << 8U) | (IData)(vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onW_buffer_0_data)));
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__io_down_w_payload_strb 
        = ((((IData)(vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onW_buffer_3_strb) 
             << 3U) | ((IData)(vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onW_buffer_2_strb) 
                       << 2U)) | (((IData)(vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onW_buffer_1_strb) 
                                   << 1U) | (IData)(vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onW_buffer_0_strb)));
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor_io_down_w_payload_last 
        = vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__io_down_w_payload_last;
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onW_mask 
        = (3U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__onW_aw_payload_bytePerBeat)));
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor_io_down_w_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__io_down_w_payload_data;
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor_io_down_w_payload_strb 
        = vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor__DOT__io_down_w_payload_strb;
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__aligner__DOT__io_up_w_payload_last 
        = vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor_io_down_w_payload_last;
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__aligner__DOT__io_up_w_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor_io_down_w_payload_data;
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__aligner__DOT__io_up_w_payload_strb 
        = vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__compactor_io_down_w_payload_strb;
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__aligner__DOT__io_down_w_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__aligner__DOT__io_up_w_payload_data;
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__aligner_io_down_w_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__aligner__DOT__io_down_w_payload_data;
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__toTileink__DOT__io_up_w_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__aligner_io_down_w_payload_data;
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__toTileink__DOT__io_down_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__toTileink__DOT__io_up_w_payload_data;
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__toTileink_io_down_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__toTileink__DOT__io_down_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__io_down_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__toTileink_io_down_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge_io_down_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__io_down_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_bus_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge_io_down_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_noDecoder_toDown_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_bus_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_to_bridge_down_up_bus_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_noDecoder_toDown_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_to_bridge_down_down_bus_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_to_bridge_down_up_bus_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_ups_1_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_to_bridge_down_down_bus_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__ups_1_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_ups_1_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__a_arbiter__DOT__io_inputs_1_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__ups_1_a_payload_data;
}

extern const VlUnpacked<VlWide<4>/*119:0*/, 8> Vtop__ConstPool__TABLE_hc5d7960e_0;
extern const VlUnpacked<VlWide<4>/*127:0*/, 8> Vtop__ConstPool__TABLE_hf045776a_0;
extern const VlUnpacked<CData/*1:0*/, 8> Vtop__ConstPool__TABLE_h2c29b9d4_0;
extern const VlUnpacked<CData/*3:0*/, 8> Vtop__ConstPool__TABLE_hea0c1b06_0;

void Vtop___024root___nba_sequent__TOP__68(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__68\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*2:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*2:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*2:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    CData/*2:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
    CData/*2:0*/ __Vtableidx12;
    __Vtableidx12 = 0;
    CData/*2:0*/ __Vtableidx14;
    __Vtableidx14 = 0;
    CData/*2:0*/ __Vtableidx16;
    __Vtableidx16 = 0;
    CData/*2:0*/ __Vtableidx18;
    __Vtableidx18 = 0;
    CData/*2:0*/ __Vtableidx20;
    __Vtableidx20 = 0;
    CData/*2:0*/ __Vtableidx22;
    __Vtableidx22 = 0;
    CData/*2:0*/ __Vtableidx24;
    __Vtableidx24 = 0;
    CData/*2:0*/ __Vtableidx25;
    __Vtableidx25 = 0;
    CData/*2:0*/ __Vtableidx26;
    __Vtableidx26 = 0;
    CData/*2:0*/ __Vtableidx27;
    __Vtableidx27 = 0;
    CData/*2:0*/ __Vtableidx28;
    __Vtableidx28 = 0;
    CData/*2:0*/ __Vtableidx30;
    __Vtableidx30 = 0;
    CData/*2:0*/ __Vtableidx32;
    __Vtableidx32 = 0;
    CData/*2:0*/ __Vtableidx33;
    __Vtableidx33 = 0;
    CData/*2:0*/ __Vtableidx35;
    __Vtableidx35 = 0;
    CData/*2:0*/ __Vtableidx37;
    __Vtableidx37 = 0;
    CData/*2:0*/ __Vtableidx38;
    __Vtableidx38 = 0;
    CData/*2:0*/ __Vtableidx39;
    __Vtableidx39 = 0;
    CData/*2:0*/ __Vtableidx40;
    __Vtableidx40 = 0;
    CData/*2:0*/ __Vtableidx41;
    __Vtableidx41 = 0;
    CData/*2:0*/ __Vtableidx42;
    __Vtableidx42 = 0;
    CData/*2:0*/ __Vtableidx43;
    __Vtableidx43 = 0;
    CData/*2:0*/ __Vtableidx44;
    __Vtableidx44 = 0;
    CData/*2:0*/ __Vtableidx46;
    __Vtableidx46 = 0;
    CData/*2:0*/ __Vtableidx48;
    __Vtableidx48 = 0;
    CData/*2:0*/ __Vtableidx49;
    __Vtableidx49 = 0;
    CData/*2:0*/ __Vtableidx51;
    __Vtableidx51 = 0;
    CData/*2:0*/ __Vtableidx53;
    __Vtableidx53 = 0;
    CData/*2:0*/ __Vtableidx54;
    __Vtableidx54 = 0;
    CData/*2:0*/ __Vtableidx55;
    __Vtableidx55 = 0;
    CData/*2:0*/ __Vtableidx56;
    __Vtableidx56 = 0;
    CData/*2:0*/ __Vtableidx57;
    __Vtableidx57 = 0;
    CData/*2:0*/ __Vtableidx58;
    __Vtableidx58 = 0;
    CData/*2:0*/ __Vtableidx59;
    __Vtableidx59 = 0;
    CData/*2:0*/ __Vtableidx60;
    __Vtableidx60 = 0;
    CData/*2:0*/ __Vtableidx62;
    __Vtableidx62 = 0;
    CData/*2:0*/ __Vtableidx64;
    __Vtableidx64 = 0;
    CData/*2:0*/ __Vtableidx65;
    __Vtableidx65 = 0;
    CData/*2:0*/ __Vtableidx67;
    __Vtableidx67 = 0;
    CData/*2:0*/ __Vtableidx69;
    __Vtableidx69 = 0;
    CData/*2:0*/ __Vtableidx70;
    __Vtableidx70 = 0;
    CData/*2:0*/ __Vtableidx71;
    __Vtableidx71 = 0;
    CData/*2:0*/ __Vtableidx72;
    __Vtableidx72 = 0;
    CData/*2:0*/ __Vtableidx73;
    __Vtableidx73 = 0;
    CData/*2:0*/ __Vtableidx75;
    __Vtableidx75 = 0;
    CData/*2:0*/ __Vtableidx76;
    __Vtableidx76 = 0;
    CData/*2:0*/ __Vtableidx78;
    __Vtableidx78 = 0;
    CData/*2:0*/ __Vtableidx80;
    __Vtableidx80 = 0;
    CData/*2:0*/ __Vtableidx81;
    __Vtableidx81 = 0;
    CData/*2:0*/ __Vtableidx83;
    __Vtableidx83 = 0;
    CData/*2:0*/ __Vtableidx85;
    __Vtableidx85 = 0;
    CData/*2:0*/ __Vtableidx86;
    __Vtableidx86 = 0;
    CData/*2:0*/ __Vtableidx87;
    __Vtableidx87 = 0;
    CData/*2:0*/ __Vtableidx89;
    __Vtableidx89 = 0;
    CData/*2:0*/ __Vtableidx90;
    __Vtableidx90 = 0;
    CData/*2:0*/ __Vtableidx91;
    __Vtableidx91 = 0;
    CData/*2:0*/ __Vtableidx92;
    __Vtableidx92 = 0;
    CData/*2:0*/ __Vtableidx94;
    __Vtableidx94 = 0;
    CData/*2:0*/ __Vtableidx96;
    __Vtableidx96 = 0;
    CData/*2:0*/ __Vtableidx97;
    __Vtableidx97 = 0;
    CData/*2:0*/ __Vtableidx99;
    __Vtableidx99 = 0;
    CData/*2:0*/ __Vtableidx101;
    __Vtableidx101 = 0;
    CData/*2:0*/ __Vtableidx102;
    __Vtableidx102 = 0;
    CData/*2:0*/ __Vtableidx104;
    __Vtableidx104 = 0;
    CData/*2:0*/ __Vtableidx105;
    __Vtableidx105 = 0;
    CData/*2:0*/ __Vtableidx106;
    __Vtableidx106 = 0;
    CData/*2:0*/ __Vtableidx108;
    __Vtableidx108 = 0;
    CData/*2:0*/ __Vtableidx109;
    __Vtableidx109 = 0;
    CData/*2:0*/ __Vtableidx111;
    __Vtableidx111 = 0;
    CData/*2:0*/ __Vtableidx113;
    __Vtableidx113 = 0;
    CData/*2:0*/ __Vtableidx114;
    __Vtableidx114 = 0;
    CData/*2:0*/ __Vtableidx116;
    __Vtableidx116 = 0;
    CData/*2:0*/ __Vtableidx118;
    __Vtableidx118 = 0;
    CData/*2:0*/ __Vtableidx119;
    __Vtableidx119 = 0;
    CData/*2:0*/ __Vtableidx120;
    __Vtableidx120 = 0;
    CData/*2:0*/ __Vtableidx122;
    __Vtableidx122 = 0;
    CData/*2:0*/ __Vtableidx124;
    __Vtableidx124 = 0;
    CData/*2:0*/ __Vtableidx125;
    __Vtableidx125 = 0;
    CData/*2:0*/ __Vtableidx127;
    __Vtableidx127 = 0;
    CData/*2:0*/ __Vtableidx129;
    __Vtableidx129 = 0;
    CData/*2:0*/ __Vtableidx130;
    __Vtableidx130 = 0;
    CData/*2:0*/ __Vtableidx132;
    __Vtableidx132 = 0;
    CData/*2:0*/ __Vtableidx134;
    __Vtableidx134 = 0;
    CData/*2:0*/ __Vtableidx135;
    __Vtableidx135 = 0;
    CData/*2:0*/ __Vtableidx136;
    __Vtableidx136 = 0;
    CData/*2:0*/ __Vtableidx138;
    __Vtableidx138 = 0;
    CData/*2:0*/ __Vtableidx140;
    __Vtableidx140 = 0;
    CData/*2:0*/ __Vtableidx141;
    __Vtableidx141 = 0;
    CData/*2:0*/ __Vtableidx143;
    __Vtableidx143 = 0;
    CData/*2:0*/ __Vtableidx145;
    __Vtableidx145 = 0;
    CData/*2:0*/ __Vtableidx146;
    __Vtableidx146 = 0;
    CData/*2:0*/ __Vtableidx148;
    __Vtableidx148 = 0;
    CData/*2:0*/ __Vtableidx150;
    __Vtableidx150 = 0;
    CData/*2:0*/ __Vtableidx151;
    __Vtableidx151 = 0;
    CData/*2:0*/ __Vtableidx152;
    __Vtableidx152 = 0;
    CData/*2:0*/ __Vtableidx169;
    __Vtableidx169 = 0;
    CData/*2:0*/ __Vtableidx171;
    __Vtableidx171 = 0;
    CData/*2:0*/ __Vtableidx172;
    __Vtableidx172 = 0;
    CData/*2:0*/ __Vtableidx174;
    __Vtableidx174 = 0;
    CData/*2:0*/ __Vtableidx176;
    __Vtableidx176 = 0;
    CData/*2:0*/ __Vtableidx177;
    __Vtableidx177 = 0;
    CData/*2:0*/ __Vtableidx178;
    __Vtableidx178 = 0;
    CData/*2:0*/ __Vtableidx180;
    __Vtableidx180 = 0;
    CData/*2:0*/ __Vtableidx182;
    __Vtableidx182 = 0;
    CData/*2:0*/ __Vtableidx183;
    __Vtableidx183 = 0;
    CData/*2:0*/ __Vtableidx184;
    __Vtableidx184 = 0;
    CData/*2:0*/ __Vtableidx186;
    __Vtableidx186 = 0;
    CData/*2:0*/ __Vtableidx188;
    __Vtableidx188 = 0;
    CData/*2:0*/ __Vtableidx189;
    __Vtableidx189 = 0;
    CData/*2:0*/ __Vtableidx190;
    __Vtableidx190 = 0;
    CData/*2:0*/ __Vtableidx192;
    __Vtableidx192 = 0;
    CData/*2:0*/ __Vtableidx195;
    __Vtableidx195 = 0;
    CData/*2:0*/ __Vtableidx197;
    __Vtableidx197 = 0;
    CData/*2:0*/ __Vtableidx199;
    __Vtableidx199 = 0;
    CData/*2:0*/ __Vtableidx200;
    __Vtableidx200 = 0;
    CData/*2:0*/ __Vtableidx202;
    __Vtableidx202 = 0;
    CData/*2:0*/ __Vtableidx204;
    __Vtableidx204 = 0;
    CData/*2:0*/ __Vtableidx205;
    __Vtableidx205 = 0;
    CData/*2:0*/ __Vtableidx206;
    __Vtableidx206 = 0;
    CData/*2:0*/ __Vtableidx208;
    __Vtableidx208 = 0;
    CData/*2:0*/ __Vtableidx209;
    __Vtableidx209 = 0;
    CData/*2:0*/ __Vtableidx210;
    __Vtableidx210 = 0;
    CData/*2:0*/ __Vtableidx211;
    __Vtableidx211 = 0;
    CData/*2:0*/ __Vtableidx213;
    __Vtableidx213 = 0;
    CData/*2:0*/ __Vtableidx214;
    __Vtableidx214 = 0;
    CData/*2:0*/ __Vtableidx216;
    __Vtableidx216 = 0;
    CData/*2:0*/ __Vtableidx218;
    __Vtableidx218 = 0;
    CData/*2:0*/ __Vtableidx220;
    __Vtableidx220 = 0;
    CData/*2:0*/ __Vtableidx222;
    __Vtableidx222 = 0;
    CData/*2:0*/ __Vtableidx224;
    __Vtableidx224 = 0;
    CData/*2:0*/ __Vtableidx225;
    __Vtableidx225 = 0;
    CData/*2:0*/ __Vtableidx226;
    __Vtableidx226 = 0;
    CData/*2:0*/ __Vtableidx227;
    __Vtableidx227 = 0;
    CData/*2:0*/ __Vtableidx228;
    __Vtableidx228 = 0;
    CData/*2:0*/ __Vtableidx229;
    __Vtableidx229 = 0;
    CData/*2:0*/ __Vtableidx230;
    __Vtableidx230 = 0;
    CData/*2:0*/ __Vtableidx231;
    __Vtableidx231 = 0;
    CData/*2:0*/ __Vtableidx232;
    __Vtableidx232 = 0;
    CData/*2:0*/ __Vtableidx233;
    __Vtableidx233 = 0;
    CData/*2:0*/ __Vtableidx234;
    __Vtableidx234 = 0;
    CData/*2:0*/ __Vtableidx235;
    __Vtableidx235 = 0;
    CData/*2:0*/ __Vtableidx237;
    __Vtableidx237 = 0;
    CData/*2:0*/ __Vtableidx239;
    __Vtableidx239 = 0;
    CData/*2:0*/ __Vtableidx240;
    __Vtableidx240 = 0;
    CData/*2:0*/ __Vtableidx242;
    __Vtableidx242 = 0;
    CData/*2:0*/ __Vtableidx244;
    __Vtableidx244 = 0;
    CData/*2:0*/ __Vtableidx245;
    __Vtableidx245 = 0;
    CData/*2:0*/ __Vtableidx246;
    __Vtableidx246 = 0;
    CData/*2:0*/ __Vtableidx248;
    __Vtableidx248 = 0;
    CData/*2:0*/ __Vtableidx249;
    __Vtableidx249 = 0;
    CData/*2:0*/ __Vtableidx250;
    __Vtableidx250 = 0;
    CData/*2:0*/ __Vtableidx408;
    __Vtableidx408 = 0;
    CData/*2:0*/ __Vtableidx409;
    __Vtableidx409 = 0;
    CData/*2:0*/ __Vtableidx410;
    __Vtableidx410 = 0;
    CData/*2:0*/ __Vtableidx411;
    __Vtableidx411 = 0;
    CData/*2:0*/ __Vtableidx412;
    __Vtableidx412 = 0;
    CData/*2:0*/ __Vtableidx414;
    __Vtableidx414 = 0;
    CData/*2:0*/ __Vtableidx416;
    __Vtableidx416 = 0;
    CData/*2:0*/ __Vtableidx418;
    __Vtableidx418 = 0;
    CData/*2:0*/ __Vtableidx420;
    __Vtableidx420 = 0;
    CData/*2:0*/ __Vtableidx422;
    __Vtableidx422 = 0;
    CData/*2:0*/ __Vtableidx428;
    __Vtableidx428 = 0;
    CData/*2:0*/ __Vtableidx432;
    __Vtableidx432 = 0;
    CData/*2:0*/ __Vtableidx436;
    __Vtableidx436 = 0;
    CData/*2:0*/ __Vtableidx440;
    __Vtableidx440 = 0;
    CData/*2:0*/ __Vtableidx444;
    __Vtableidx444 = 0;
    CData/*2:0*/ __Vtableidx457;
    __Vtableidx457 = 0;
    CData/*2:0*/ __Vtableidx458;
    __Vtableidx458 = 0;
    CData/*2:0*/ __Vtableidx459;
    __Vtableidx459 = 0;
    CData/*2:0*/ __Vtableidx460;
    __Vtableidx460 = 0;
    CData/*2:0*/ __Vtableidx462;
    __Vtableidx462 = 0;
    CData/*2:0*/ __Vtableidx466;
    __Vtableidx466 = 0;
    CData/*2:0*/ __Vtableidx468;
    __Vtableidx468 = 0;
    CData/*2:0*/ __Vtableidx469;
    __Vtableidx469 = 0;
    CData/*2:0*/ __Vtableidx470;
    __Vtableidx470 = 0;
    CData/*2:0*/ __Vtableidx471;
    __Vtableidx471 = 0;
    CData/*2:0*/ __Vtableidx472;
    __Vtableidx472 = 0;
    CData/*2:0*/ __Vtableidx473;
    __Vtableidx473 = 0;
    CData/*2:0*/ __Vtableidx474;
    __Vtableidx474 = 0;
    CData/*2:0*/ __Vtableidx475;
    __Vtableidx475 = 0;
    CData/*2:0*/ __Vtableidx476;
    __Vtableidx476 = 0;
    CData/*2:0*/ __Vtableidx477;
    __Vtableidx477 = 0;
    CData/*2:0*/ __Vtableidx478;
    __Vtableidx478 = 0;
    CData/*2:0*/ __Vtableidx479;
    __Vtableidx479 = 0;
    CData/*2:0*/ __Vtableidx480;
    __Vtableidx480 = 0;
    CData/*2:0*/ __Vtableidx481;
    __Vtableidx481 = 0;
    CData/*2:0*/ __Vtableidx482;
    __Vtableidx482 = 0;
    CData/*2:0*/ __Vtableidx483;
    __Vtableidx483 = 0;
    CData/*2:0*/ __Vtableidx484;
    __Vtableidx484 = 0;
    CData/*2:0*/ __Vtableidx485;
    __Vtableidx485 = 0;
    CData/*2:0*/ __Vtableidx486;
    __Vtableidx486 = 0;
    CData/*2:0*/ __Vtableidx487;
    __Vtableidx487 = 0;
    CData/*2:0*/ __Vtableidx488;
    __Vtableidx488 = 0;
    CData/*2:0*/ __Vtableidx489;
    __Vtableidx489 = 0;
    CData/*2:0*/ __Vtableidx490;
    __Vtableidx490 = 0;
    CData/*2:0*/ __Vtableidx491;
    __Vtableidx491 = 0;
    CData/*2:0*/ __Vtableidx493;
    __Vtableidx493 = 0;
    CData/*2:0*/ __Vtableidx494;
    __Vtableidx494 = 0;
    CData/*2:0*/ __Vtableidx495;
    __Vtableidx495 = 0;
    CData/*2:0*/ __Vtableidx496;
    __Vtableidx496 = 0;
    CData/*2:0*/ __Vtableidx497;
    __Vtableidx497 = 0;
    CData/*2:0*/ __Vtableidx498;
    __Vtableidx498 = 0;
    CData/*2:0*/ __Vtableidx501;
    __Vtableidx501 = 0;
    // Body
    if ((0U == (IData)(vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_address))) {
        if (vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_doWrite) {
            vlSelfRef.PulseTableSoc__DOT__riscqResetHostCd_driver 
                = (1U & vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_a_payload_data);
        }
    }
    if (vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_s2mPipe_ready) {
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_s2mPipe_rData_param 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_s2mPipe_payload_param;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_s2mPipe_rData_corrupt 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_s2mPipe_payload_corrupt;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_s2mPipe_rData_data 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_s2mPipe_payload_data;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_s2mPipe_rData_mask 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_s2mPipe_payload_mask;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_s2mPipe_rData_source 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_s2mPipe_payload_source;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_s2mPipe_rData_size 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_s2mPipe_payload_size;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_s2mPipe_rData_address 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_s2mPipe_payload_address;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_s2mPipe_rData_opcode 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_s2mPipe_payload_opcode;
    }
    if (vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_ready) {
        vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_rData_denied 
            = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_payload_denied;
        vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_rData_size 
            = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_payload_size;
        vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_rData_source 
            = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_payload_source;
        vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_rData_param 
            = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_payload_param;
        vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_rData_opcode 
            = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_payload_opcode;
    }
    if (vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_ready) {
        vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_rData_param 
            = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_payload_param;
        vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_rData_source 
            = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_payload_source;
        vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_rData_size 
            = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_payload_size;
        vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_rData_denied 
            = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_payload_denied;
        vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_rData_opcode 
            = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_payload_opcode;
    }
    if (vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_ready) {
        vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_rData_param 
            = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_payload_param;
        vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_rData_source 
            = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_payload_source;
        vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_rData_size 
            = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_payload_size;
        vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_rData_denied 
            = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_payload_denied;
        vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_rData_opcode 
            = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_payload_opcode;
    }
    if (vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_ready) {
        vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_rData_source 
            = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_payload_source;
        vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_rData_param 
            = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_payload_param;
        vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_rData_mask 
            = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_payload_mask;
        vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_rData_data 
            = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_payload_data;
        vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_rData_corrupt 
            = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_payload_corrupt;
        vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_rData_address 
            = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_payload_address;
        vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_rData_size 
            = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_payload_size;
        vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_rData_opcode 
            = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_payload_opcode;
    }
    if (vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_ready) {
        vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_rData_source 
            = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_payload_source;
        vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_rData_param 
            = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_payload_param;
        vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_rData_data 
            = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_payload_data;
        vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_rData_mask 
            = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_payload_mask;
        vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_rData_address 
            = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_payload_address;
        vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_rData_size 
            = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_payload_size;
        vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_rData_corrupt 
            = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_payload_corrupt;
        vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_rData_opcode 
            = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_payload_opcode;
    }
    if (vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_ready) {
        vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_rData_source 
            = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_payload_source;
        vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_rData_param 
            = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_payload_param;
        vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_rData_corrupt 
            = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_payload_corrupt;
        vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_rData_address 
            = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_payload_address;
        vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_rData_size 
            = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_payload_size;
        vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_rData_mask 
            = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_payload_mask;
        vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_rData_data 
            = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_payload_data;
        vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_rData_opcode 
            = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_payload_opcode;
    }
    if (vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_ready) {
        vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_rData_denied = 0U;
        vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_rData_data = 0U;
        vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_rData_param = 0U;
        vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_rData_corrupt = 0U;
        vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_rData_size 
            = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_payload_size;
        vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_rData_source 
            = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_payload_source;
        vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_rData_opcode 
            = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_payload_opcode;
    }
    if (vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_ready) {
        vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_rData_size 
            = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_payload_size;
        vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_rData_source 
            = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_payload_source;
        vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_rData_param 
            = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_payload_param;
        vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_rData_corrupt 
            = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_payload_corrupt;
        vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_rData_data 
            = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_payload_data;
        vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_rData_denied 
            = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_payload_denied;
        vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_rData_opcode 
            = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_payload_opcode;
    }
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_s2mPipe_ready) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_s2mPipe_rData_source 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_s2mPipe_payload_source;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_s2mPipe_rData_param 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_s2mPipe_payload_param;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_s2mPipe_rData_denied 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_s2mPipe_payload_denied;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_s2mPipe_rData_size 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_s2mPipe_payload_size;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_s2mPipe_rData_opcode 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_s2mPipe_payload_opcode;
    }
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_s2mPipe_ready) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_s2mPipe_rData_source 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_s2mPipe_payload_source;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_s2mPipe_rData_param 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_s2mPipe_payload_param;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_s2mPipe_rData_denied 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_s2mPipe_payload_denied;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_s2mPipe_rData_size 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_s2mPipe_payload_size;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_s2mPipe_rData_opcode 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_s2mPipe_payload_opcode;
    }
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_s2mPipe_ready) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_s2mPipe_rData_source 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_s2mPipe_payload_source;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_s2mPipe_rData_param 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_s2mPipe_payload_param;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_s2mPipe_rData_denied 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_s2mPipe_payload_denied;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_s2mPipe_rData_size 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_s2mPipe_payload_size;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_s2mPipe_rData_opcode 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_s2mPipe_payload_opcode;
    }
    if (vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_ready) {
        vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_rData_param 
            = vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_payload_param;
        vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_rData_source 
            = vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_payload_source;
        vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_rData_size 
            = vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_payload_size;
        vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_rData_denied 
            = vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_payload_denied;
        vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_rData_data[0U] 
            = vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_payload_data[0U];
        vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_rData_data[1U] 
            = vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_payload_data[1U];
        vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_rData_data[2U] 
            = vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_payload_data[2U];
        vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_rData_data[3U] 
            = vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_payload_data[3U];
        vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_rData_corrupt 
            = vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_payload_corrupt;
        vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_rData_opcode 
            = vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_payload_opcode;
    }
    if (vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_ready) {
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_rData_corrupt 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_payload_corrupt;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_rData_data 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_payload_data;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_rData_mask 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_payload_mask;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_rData_size 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_payload_size;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_rData_address 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_payload_address;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_rData_source 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_payload_source;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_rData_param 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_payload_param;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_rData_opcode 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_payload_opcode;
    }
    if (vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_ready) {
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_rData_corrupt 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_payload_corrupt;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_rData_data 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_payload_data;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_rData_size 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_payload_size;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_rData_address 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_payload_address;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_rData_source 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_payload_source;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_rData_param 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_payload_param;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_rData_mask 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_payload_mask;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_rData_opcode 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_payload_opcode;
    }
    if (vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_ready) {
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_rData_source 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_payload_source;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_rData_param 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_payload_param;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_rData_corrupt 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_payload_corrupt;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_rData_data 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_payload_data;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_rData_address 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_payload_address;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_rData_size 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_payload_size;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_rData_mask 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_payload_mask;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_rData_opcode 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_payload_opcode;
    }
    if (vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_ready) {
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_rData_corrupt 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_payload_corrupt;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_rData_data 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_payload_data;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_rData_mask 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_payload_mask;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_rData_size 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_payload_size;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_rData_address 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_payload_address;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_rData_source 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_payload_source;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_rData_param 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_payload_param;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_rData_opcode 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_payload_opcode;
    }
    if (vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_ready) {
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_rData_corrupt 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_payload_corrupt;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_rData_data 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_payload_data;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_rData_mask 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_payload_mask;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_rData_size 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_payload_size;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_rData_address 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_payload_address;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_rData_source 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_payload_source;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_rData_param 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_payload_param;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_rData_opcode 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_payload_opcode;
    }
    if (vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_ready) {
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_rData_corrupt 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_payload_corrupt;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_rData_data 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_payload_data;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_rData_source 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_payload_source;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_rData_address 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_payload_address;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_rData_size 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_payload_size;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_rData_mask 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_payload_mask;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_rData_param 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_payload_param;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_rData_opcode 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_payload_opcode;
    }
    if (vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_ready) {
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_rData_corrupt 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_payload_corrupt;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_rData_mask 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_payload_mask;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_rData_size 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_payload_size;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_rData_address 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_payload_address;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_rData_source 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_payload_source;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_rData_param 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_payload_param;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_rData_data 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_payload_data;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_rData_opcode 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_payload_opcode;
    }
    if (vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_ready) {
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_rData_corrupt 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_payload_corrupt;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_rData_param 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_payload_param;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_rData_source 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_payload_source;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_rData_address 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_payload_address;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_rData_size 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_payload_size;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_rData_mask 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_payload_mask;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_rData_data 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_payload_data;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_rData_opcode 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_payload_opcode;
    }
    if (vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_ready) {
        vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_rData_corrupt 
            = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_payload_corrupt;
        vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_rData_data 
            = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_payload_data;
        vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_rData_denied 
            = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_payload_denied;
        vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_rData_size 
            = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_payload_size;
        vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_rData_source 
            = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_payload_source;
        vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_rData_param 
            = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_payload_param;
        vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_rData_opcode 
            = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_payload_opcode;
    }
    if (vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_s2mPipe_ready) {
        vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_s2mPipe_rData_corrupt 
            = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_s2mPipe_payload_corrupt;
        vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_s2mPipe_rData_param 
            = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_s2mPipe_payload_param;
        vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_s2mPipe_rData_size 
            = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_s2mPipe_payload_size;
        vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_s2mPipe_rData_source 
            = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_s2mPipe_payload_source;
        vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_s2mPipe_rData_data 
            = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_s2mPipe_payload_data;
        vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_s2mPipe_rData_opcode 
            = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_s2mPipe_payload_opcode;
        vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_s2mPipe_rData_mask 
            = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_s2mPipe_payload_mask;
        vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_s2mPipe_rData_address 
            = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_s2mPipe_payload_address;
    }
    if (vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_s2mPipe_ready) {
        vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_s2mPipe_rData_corrupt 
            = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_s2mPipe_payload_corrupt;
        vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_s2mPipe_rData_param 
            = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_s2mPipe_payload_param;
        vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_s2mPipe_rData_source 
            = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_s2mPipe_payload_source;
        vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_s2mPipe_rData_size 
            = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_s2mPipe_payload_size;
        vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_s2mPipe_rData_data 
            = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_s2mPipe_payload_data;
        vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_s2mPipe_rData_address 
            = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_s2mPipe_payload_address;
        vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_s2mPipe_rData_mask 
            = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_s2mPipe_payload_mask;
        vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_s2mPipe_rData_opcode 
            = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_s2mPipe_payload_opcode;
    }
    if (vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_s2mPipe_ready) {
        vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_s2mPipe_rData_corrupt 
            = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_s2mPipe_payload_corrupt;
        vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_s2mPipe_rData_param 
            = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_s2mPipe_payload_param;
        vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_s2mPipe_rData_source 
            = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_s2mPipe_payload_source;
        vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_s2mPipe_rData_size 
            = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_s2mPipe_payload_size;
        vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_s2mPipe_rData_data 
            = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_s2mPipe_payload_data;
        vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_s2mPipe_rData_address 
            = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_s2mPipe_payload_address;
        vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_s2mPipe_rData_mask 
            = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_s2mPipe_payload_mask;
        vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_s2mPipe_rData_opcode 
            = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_s2mPipe_payload_opcode;
    }
    if (vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_ready) {
        vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_rData_param 
            = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_payload_param;
        vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_rData_corrupt 
            = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_payload_corrupt;
        vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_rData_source 
            = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_payload_source;
        vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_rData_size 
            = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_payload_size;
        vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_rData_data[0U] 
            = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_payload_data[0U];
        vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_rData_data[1U] 
            = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_payload_data[1U];
        vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_rData_data[2U] 
            = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_payload_data[2U];
        vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_rData_data[3U] 
            = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_payload_data[3U];
        vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_rData_mask 
            = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_payload_mask;
        vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_rData_address 
            = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_payload_address;
        vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_rData_opcode 
            = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_payload_opcode;
    }
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_ready) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_rData_denied 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_payload_denied;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_rData_size 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_payload_size;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_rData_source 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_payload_source;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_rData_param 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_payload_param;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_rData_opcode 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_payload_opcode;
    }
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_ready) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_rData_denied 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_payload_denied;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_rData_size 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_payload_size;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_rData_source 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_payload_source;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_rData_param 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_payload_param;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_rData_opcode 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_payload_opcode;
    }
    if (vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_ready) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_rData_denied 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_payload_denied;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_rData_size 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_payload_size;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_rData_source 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_payload_source;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_rData_param 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_payload_param;
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_rData_opcode 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_payload_opcode;
    }
    if (vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_s2mPipe_ready) {
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_s2mPipe_rData_corrupt 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_s2mPipe_payload_corrupt;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_s2mPipe_rData_data 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_s2mPipe_payload_data;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_s2mPipe_rData_mask 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_s2mPipe_payload_mask;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_s2mPipe_rData_size 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_s2mPipe_payload_size;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_s2mPipe_rData_address 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_s2mPipe_payload_address;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_s2mPipe_rData_source 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_s2mPipe_payload_source;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_s2mPipe_rData_param 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_s2mPipe_payload_param;
        vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_s2mPipe_rData_opcode 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_s2mPipe_payload_opcode;
    }
    if (vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_s2mPipe_ready) {
        vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_s2mPipe_rData_data 
            = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_s2mPipe_payload_data;
        vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_s2mPipe_rData_corrupt 
            = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_s2mPipe_payload_corrupt;
        vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_s2mPipe_rData_denied 
            = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_s2mPipe_payload_denied;
        vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_s2mPipe_rData_source 
            = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_s2mPipe_payload_source;
        vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_s2mPipe_rData_param 
            = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_s2mPipe_payload_param;
        vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_s2mPipe_rData_size 
            = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_s2mPipe_payload_size;
        vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_s2mPipe_rData_opcode 
            = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_s2mPipe_payload_opcode;
    }
    if (vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_s2mPipe_ready) {
        vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_s2mPipe_rData_data 
            = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_s2mPipe_payload_data;
        vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_s2mPipe_rData_corrupt 
            = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_s2mPipe_payload_corrupt;
        vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_s2mPipe_rData_denied 
            = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_s2mPipe_payload_denied;
        vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_s2mPipe_rData_source 
            = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_s2mPipe_payload_source;
        vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_s2mPipe_rData_param 
            = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_s2mPipe_payload_param;
        vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_s2mPipe_rData_size 
            = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_s2mPipe_payload_size;
        vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_s2mPipe_rData_opcode 
            = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_s2mPipe_payload_opcode;
    }
    if (vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_s2mPipe_ready) {
        vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_s2mPipe_rData_source 
            = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_s2mPipe_payload_source;
        vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_s2mPipe_rData_param 
            = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_s2mPipe_payload_param;
        vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_s2mPipe_rData_denied 
            = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_s2mPipe_payload_denied;
        vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_s2mPipe_rData_size 
            = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_s2mPipe_payload_size;
        vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_s2mPipe_rData_opcode 
            = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_s2mPipe_payload_opcode;
    }
    if (vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_s2mPipe_ready) {
        vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_s2mPipe_rData_denied 
            = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_s2mPipe_payload_denied;
        vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_s2mPipe_rData_param 
            = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_s2mPipe_payload_param;
        vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_s2mPipe_rData_source 
            = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_s2mPipe_payload_source;
        vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_s2mPipe_rData_size 
            = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_s2mPipe_payload_size;
        vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_s2mPipe_rData_opcode 
            = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_s2mPipe_payload_opcode;
    }
    if (vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_s2mPipe_ready) {
        vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_s2mPipe_rData_source 
            = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_s2mPipe_payload_source;
        vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_s2mPipe_rData_denied 
            = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_s2mPipe_payload_denied;
        vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_s2mPipe_rData_param 
            = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_s2mPipe_payload_param;
        vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_s2mPipe_rData_size 
            = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_s2mPipe_payload_size;
        vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_s2mPipe_rData_opcode 
            = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_s2mPipe_payload_opcode;
    }
    if (vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_ready) {
        vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_rData_size 
            = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_payload_size;
        vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_rData_address 
            = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_payload_address;
        vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_rData_source 
            = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_payload_source;
        vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_rData_param 
            = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_payload_param;
        vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_rData_corrupt 
            = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_payload_corrupt;
        vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_rData_data[0U] 
            = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_payload_data[0U];
        vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_rData_data[1U] 
            = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_payload_data[1U];
        vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_rData_data[2U] 
            = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_payload_data[2U];
        vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_rData_data[3U] 
            = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_payload_data[3U];
        vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_rData_mask 
            = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_payload_mask;
        vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_rData_opcode 
            = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_payload_opcode;
    }
    if (vlSelfRef.PulseTableSoc__DOT__io_up_d_s2mPipe_ready) {
        vlSelfRef.PulseTableSoc__DOT__io_up_d_s2mPipe_rData_corrupt 
            = vlSelfRef.PulseTableSoc__DOT__io_up_d_s2mPipe_payload_corrupt;
        vlSelfRef.PulseTableSoc__DOT__io_up_d_s2mPipe_rData_data 
            = vlSelfRef.PulseTableSoc__DOT__io_up_d_s2mPipe_payload_data;
        vlSelfRef.PulseTableSoc__DOT__io_up_d_s2mPipe_rData_param 
            = vlSelfRef.PulseTableSoc__DOT__io_up_d_s2mPipe_payload_param;
        vlSelfRef.PulseTableSoc__DOT__io_up_d_s2mPipe_rData_denied 
            = vlSelfRef.PulseTableSoc__DOT__io_up_d_s2mPipe_payload_denied;
        vlSelfRef.PulseTableSoc__DOT__io_up_d_s2mPipe_rData_size 
            = vlSelfRef.PulseTableSoc__DOT__io_up_d_s2mPipe_payload_size;
        vlSelfRef.PulseTableSoc__DOT__io_up_d_s2mPipe_rData_source 
            = vlSelfRef.PulseTableSoc__DOT__io_up_d_s2mPipe_payload_source;
        vlSelfRef.PulseTableSoc__DOT__io_up_d_s2mPipe_rData_opcode 
            = vlSelfRef.PulseTableSoc__DOT__io_up_d_s2mPipe_payload_opcode;
    }
    if (vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_ready) {
        vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_rData_corrupt 
            = vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_payload_corrupt;
        vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_rData_param 
            = vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_payload_param;
        vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_rData_denied 
            = vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_payload_denied;
        vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_rData_data[0U] 
            = vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_payload_data[0U];
        vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_rData_data[1U] 
            = vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_payload_data[1U];
        vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_rData_data[2U] 
            = vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_payload_data[2U];
        vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_rData_data[3U] 
            = vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_payload_data[3U];
        vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_rData_size 
            = vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_payload_size;
        vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_rData_source 
            = vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_payload_source;
        vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_rData_opcode 
            = vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_payload_opcode;
    }
    if (vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_s2mPipe_ready) {
        vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_s2mPipe_rData_data 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_s2mPipe_payload_data;
        vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_s2mPipe_rData_mask 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_s2mPipe_payload_mask;
        vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_s2mPipe_rData_param 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_s2mPipe_payload_param;
        vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_s2mPipe_rData_corrupt 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_s2mPipe_payload_corrupt;
        vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_s2mPipe_rData_source 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_s2mPipe_payload_source;
        vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_s2mPipe_rData_size 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_s2mPipe_payload_size;
        vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_s2mPipe_rData_address 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_s2mPipe_payload_address;
        vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_s2mPipe_rData_opcode 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_s2mPipe_payload_opcode;
    }
    if (vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_ready) {
        vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_rData_data 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_payload_data;
        vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_rData_param 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_payload_param;
        vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_rData_source 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_payload_source;
        vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_rData_address 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_payload_address;
        vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_rData_size 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_payload_size;
        vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_rData_mask 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_payload_mask;
        vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_rData_corrupt 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_payload_corrupt;
        vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_rData_opcode 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_payload_opcode;
    }
    if (vlSelfRef.PulseTableSoc__DOT__io_up_d_rValidN) {
        vlSelfRef.PulseTableSoc__DOT__io_up_d_rData_corrupt 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_up_d_payload_corrupt;
        vlSelfRef.PulseTableSoc__DOT__io_up_d_rData_data 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_up_d_payload_data;
        vlSelfRef.PulseTableSoc__DOT__io_up_d_rData_denied 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_up_d_payload_denied;
        vlSelfRef.PulseTableSoc__DOT__io_up_d_rData_param 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_up_d_payload_param;
        vlSelfRef.PulseTableSoc__DOT__io_up_d_rData_source 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_up_d_payload_source;
        vlSelfRef.PulseTableSoc__DOT__io_up_d_rData_size 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_up_d_payload_size;
        vlSelfRef.PulseTableSoc__DOT__io_up_d_rData_opcode 
            = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_up_d_payload_opcode;
    }
    vlSelfRef.PulseTableSoc__DOT__riscqResetHostCd 
        = vlSelfRef.PulseTableSoc__DOT__riscqResetHostCd_driver;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_s2mPipe_m2sPipe_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_s2mPipe_rData_param;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_s2mPipe_m2sPipe_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_s2mPipe_rData_corrupt;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_s2mPipe_m2sPipe_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_s2mPipe_rData_data;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_s2mPipe_m2sPipe_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_s2mPipe_rData_mask;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_s2mPipe_m2sPipe_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_s2mPipe_rData_source;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_s2mPipe_m2sPipe_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_s2mPipe_rData_size;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_s2mPipe_m2sPipe_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_s2mPipe_rData_address;
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_stage_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_rData_denied;
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_stage_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_rData_data;
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_stage_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_rData_param;
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_stage_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_rData_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_s2mPipe_m2sPipe_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_s2mPipe_rData_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_s2mPipe_m2sPipe_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_s2mPipe_rData_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_s2mPipe_m2sPipe_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_s2mPipe_rData_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_s2mPipe_m2sPipe_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_s2mPipe_rData_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_s2mPipe_m2sPipe_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_s2mPipe_rData_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_s2mPipe_m2sPipe_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_s2mPipe_rData_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_s2mPipe_m2sPipe_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_s2mPipe_rData_denied;
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_stage_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_rData_size;
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_stage_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_rData_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_s2mPipe_m2sPipe_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_s2mPipe_rData_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_s2mPipe_m2sPipe_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_s2mPipe_rData_denied;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_s2mPipe_m2sPipe_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_s2mPipe_rData_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_s2mPipe_m2sPipe_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_s2mPipe_rData_denied;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_s2mPipe_m2sPipe_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_s2mPipe_rData_size;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_m2sPipe_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_rData_corrupt;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_m2sPipe_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_rData_data;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_m2sPipe_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_rData_mask;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_m2sPipe_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_rData_size;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_m2sPipe_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_rData_address;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_m2sPipe_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_rData_source;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_m2sPipe_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_rData_param;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_m2sPipe_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_rData_corrupt;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_m2sPipe_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_rData_data;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_m2sPipe_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_rData_size;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_m2sPipe_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_rData_source;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_m2sPipe_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_rData_address;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_m2sPipe_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_rData_param;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_m2sPipe_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_rData_source;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_m2sPipe_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_rData_param;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_m2sPipe_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_rData_corrupt;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_m2sPipe_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_rData_data;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_m2sPipe_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_rData_mask;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_m2sPipe_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_rData_address;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_m2sPipe_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_rData_size;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_m2sPipe_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_rData_mask;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_s2mPipe_rData_corrupt;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_s2mPipe_rData_corrupt;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_s2mPipe_rData_param;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_s2mPipe_rData_corrupt;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_s2mPipe_rData_param;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_s2mPipe_rData_param;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_m2sPipe_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_rData_param;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_m2sPipe_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_rData_corrupt;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_s2mPipe_rData_size;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_s2mPipe_rData_source;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_s2mPipe_rData_source;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_s2mPipe_rData_size;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_s2mPipe_rData_source;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_s2mPipe_rData_size;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_m2sPipe_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_rData_source;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_m2sPipe_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_rData_size;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_s2mPipe_m2sPipe_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_s2mPipe_rData_corrupt;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_s2mPipe_m2sPipe_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_s2mPipe_rData_data;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_s2mPipe_m2sPipe_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_s2mPipe_rData_mask;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_s2mPipe_m2sPipe_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_s2mPipe_rData_size;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_s2mPipe_m2sPipe_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_s2mPipe_rData_address;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_s2mPipe_m2sPipe_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_s2mPipe_rData_source;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_s2mPipe_m2sPipe_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_s2mPipe_rData_param;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_m2sPipe_payload_data[0U] 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_rData_data[0U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_m2sPipe_payload_data[1U] 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_rData_data[1U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_m2sPipe_payload_data[2U] 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_rData_data[2U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_m2sPipe_payload_data[3U] 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_rData_data[3U];
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_s2mPipe_rData_data;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_s2mPipe_rData_data;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_s2mPipe_rData_data;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_m2sPipe_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_rData_mask;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_m2sPipe_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_rData_address;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_s2mPipe_m2sPipe_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_s2mPipe_rData_data;
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_s2mPipe_m2sPipe_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_s2mPipe_rData_data;
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_s2mPipe_m2sPipe_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_s2mPipe_rData_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_s2mPipe_m2sPipe_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_s2mPipe_rData_corrupt;
    __Vtableidx67 = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_rData_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx67][0U];
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_rData_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx67][1U];
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_rData_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx67][2U];
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_rData_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx67][3U];
    __Vtableidx51 = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_rData_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx51][0U];
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_rData_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx51][1U];
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_rData_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx51][2U];
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_rData_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx51][3U];
    __Vtableidx35 = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_rData_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx35][0U];
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_rData_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx35][1U];
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_rData_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx35][2U];
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_rData_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx35][3U];
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_s2mPipe_m2sPipe_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_s2mPipe_rData_source;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_s2mPipe_m2sPipe_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_s2mPipe_rData_denied;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_s2mPipe_m2sPipe_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_s2mPipe_rData_source;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_s2mPipe_m2sPipe_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_s2mPipe_rData_denied;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_s2mPipe_m2sPipe_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_s2mPipe_rData_param;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_s2mPipe_m2sPipe_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_s2mPipe_rData_param;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_s2mPipe_m2sPipe_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_s2mPipe_rData_source;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_s2mPipe_m2sPipe_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_s2mPipe_rData_denied;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_s2mPipe_m2sPipe_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_s2mPipe_rData_param;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_s2mPipe_rData_address;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_s2mPipe_rData_mask;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_s2mPipe_rData_address;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_s2mPipe_rData_mask;
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_s2mPipe_m2sPipe_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_s2mPipe_rData_denied;
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_s2mPipe_m2sPipe_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_s2mPipe_rData_source;
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_s2mPipe_m2sPipe_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_s2mPipe_rData_param;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_s2mPipe_m2sPipe_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_s2mPipe_rData_denied;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_s2mPipe_m2sPipe_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_s2mPipe_rData_source;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_s2mPipe_m2sPipe_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_s2mPipe_rData_param;
    __Vtableidx143 = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_rData_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx143][0U];
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_rData_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx143][1U];
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_rData_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx143][2U];
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_rData_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx143][3U];
    __Vtableidx127 = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_rData_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx127][0U];
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_rData_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx127][1U];
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_rData_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx127][2U];
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_rData_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx127][3U];
    __Vtableidx111 = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_rData_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx111][0U];
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_rData_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx111][1U];
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_rData_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx111][2U];
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_rData_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx111][3U];
    __Vtableidx99 = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_rData_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx99][0U];
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_rData_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx99][1U];
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_rData_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx99][2U];
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_rData_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx99][3U];
    vlSelfRef.PulseTableSoc__DOT__io_up_d_s2mPipe_m2sPipe_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__io_up_d_s2mPipe_rData_corrupt;
    __Vtableidx202 = vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_rData_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx202][0U];
    vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_rData_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx202][1U];
    vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_rData_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx202][2U];
    vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_rData_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx202][3U];
    __Vtableidx94 = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_rData_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx94][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_rData_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx94][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_rData_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx94][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_rData_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx94][3U];
    __Vtableidx46 = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_rData_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx46][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_rData_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx46][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_rData_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx46][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_rData_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx46][3U];
    __Vtableidx30 = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_rData_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx30][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_rData_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx30][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_rData_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx30][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_rData_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx30][3U];
    __Vtableidx62 = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_rData_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx62][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_rData_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx62][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_rData_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx62][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_rData_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx62][3U];
    __Vtableidx78 = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_rData_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx78][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_rData_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx78][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_rData_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx78][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_rData_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx78][3U];
    __Vtableidx83 = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_rData_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx83][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_rData_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx83][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_rData_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx83][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_rData_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx83][3U];
    __Vtableidx250 = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_rData_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx250][0U];
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_rData_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx250][1U];
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_rData_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx250][2U];
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_rData_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx250][3U];
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_stage_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_rData_opcode;
    __Vtableidx116 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_rData_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx116][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_rData_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx116][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_rData_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx116][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_rData_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx116][3U];
    __Vtableidx132 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_rData_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx132][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_rData_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx132][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_rData_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx132][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_rData_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx132][3U];
    __Vtableidx148 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_rData_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx148][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_rData_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx148][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_rData_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx148][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_rData_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx148][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_s2mPipe_m2sPipe_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_s2mPipe_rData_size;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_s2mPipe_m2sPipe_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_s2mPipe_rData_size;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_s2mPipe_m2sPipe_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_s2mPipe_rData_size;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_s2mPipe_m2sPipe_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_s2mPipe_rData_size;
    vlSelfRef.PulseTableSoc__DOT__io_up_d_s2mPipe_m2sPipe_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__io_up_d_s2mPipe_rData_data;
    __Vtableidx97 = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_s2mPipe_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_s2mPipe_rData_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx97][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_s2mPipe_rData_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx97][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_s2mPipe_rData_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx97][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_s2mPipe_rData_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx97][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_s2mPipe_m2sPipe_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_s2mPipe_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_s2mPipe_m2sPipe_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_s2mPipe_rData_size;
    vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_m2sPipe_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_rData_corrupt;
    vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_m2sPipe_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_rData_param;
    vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_m2sPipe_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_rData_denied;
    vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_m2sPipe_payload_data[0U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_rData_data[0U];
    vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_m2sPipe_payload_data[1U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_rData_data[1U];
    vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_m2sPipe_payload_data[2U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_rData_data[2U];
    vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_m2sPipe_payload_data[3U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_rData_data[3U];
    __Vtableidx151 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_s2mPipe_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_s2mPipe_rData_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx151][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_s2mPipe_rData_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx151][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_s2mPipe_rData_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx151][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_s2mPipe_rData_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx151][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_s2mPipe_m2sPipe_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_s2mPipe_rData_opcode;
    __Vtableidx135 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_s2mPipe_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_s2mPipe_rData_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx135][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_s2mPipe_rData_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx135][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_s2mPipe_rData_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx135][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_s2mPipe_rData_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx135][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_s2mPipe_m2sPipe_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_s2mPipe_rData_opcode;
    __Vtableidx119 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_s2mPipe_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_s2mPipe_rData_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx119][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_s2mPipe_rData_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx119][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_s2mPipe_rData_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx119][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_s2mPipe_rData_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx119][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_s2mPipe_m2sPipe_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_s2mPipe_rData_opcode;
    __Vtableidx114 = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_s2mPipe_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_s2mPipe_rData_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx114][0U];
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_s2mPipe_rData_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx114][1U];
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_s2mPipe_rData_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx114][2U];
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_s2mPipe_rData_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx114][3U];
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_s2mPipe_rData_opcode;
    __Vtableidx130 = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_s2mPipe_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_s2mPipe_rData_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx130][0U];
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_s2mPipe_rData_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx130][1U];
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_s2mPipe_rData_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx130][2U];
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_s2mPipe_rData_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx130][3U];
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_s2mPipe_rData_opcode;
    __Vtableidx146 = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_s2mPipe_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_s2mPipe_rData_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx146][0U];
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_s2mPipe_rData_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx146][1U];
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_s2mPipe_rData_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx146][2U];
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_s2mPipe_rData_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx146][3U];
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_s2mPipe_rData_opcode;
    __Vtableidx81 = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_s2mPipe_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_s2mPipe_rData_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx81][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_s2mPipe_rData_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx81][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_s2mPipe_rData_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx81][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_s2mPipe_rData_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx81][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_s2mPipe_m2sPipe_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_s2mPipe_rData_opcode;
    __Vtableidx49 = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_rData_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx49][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_rData_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx49][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_rData_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx49][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_rData_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx49][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_m2sPipe_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_rData_opcode;
    __Vtableidx33 = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_rData_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx33][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_rData_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx33][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_rData_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx33][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_rData_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx33][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_m2sPipe_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_rData_opcode;
    __Vtableidx65 = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_rData_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx65][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_rData_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx65][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_rData_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx65][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_rData_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx65][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_m2sPipe_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__io_up_d_s2mPipe_m2sPipe_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__io_up_d_s2mPipe_rData_param;
    __Vtableidx197 = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_rData_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx197][0U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_rData_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx197][1U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_rData_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx197][2U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_rData_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx197][3U];
    __Vtableidx200 = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_rData_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx200][0U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_rData_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx200][1U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_rData_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx200][2U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_rData_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx200][3U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_m2sPipe_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__io_up_d_s2mPipe_m2sPipe_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__io_up_d_s2mPipe_rData_denied;
    vlSelfRef.PulseTableSoc__DOT__io_up_d_s2mPipe_m2sPipe_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__io_up_d_s2mPipe_rData_size;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_s2mPipe_rData_mask;
    vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_m2sPipe_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_rData_size;
    vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_s2mPipe_m2sPipe_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_s2mPipe_rData_data;
    __Vtableidx38 = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_s2mPipe_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_s2mPipe_rData_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx38][0U];
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_s2mPipe_rData_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx38][1U];
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_s2mPipe_rData_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx38][2U];
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_s2mPipe_rData_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx38][3U];
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_s2mPipe_m2sPipe_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_s2mPipe_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_s2mPipe_m2sPipe_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_s2mPipe_rData_mask;
    vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_s2mPipe_m2sPipe_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_s2mPipe_rData_param;
    __Vtableidx54 = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_s2mPipe_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_s2mPipe_rData_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx54][0U];
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_s2mPipe_rData_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx54][1U];
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_s2mPipe_rData_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx54][2U];
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_s2mPipe_rData_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx54][3U];
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_s2mPipe_m2sPipe_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_s2mPipe_rData_opcode;
    __Vtableidx70 = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_s2mPipe_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_s2mPipe_rData_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx70][0U];
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_s2mPipe_rData_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx70][1U];
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_s2mPipe_rData_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx70][2U];
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_s2mPipe_rData_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx70][3U];
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_s2mPipe_m2sPipe_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_s2mPipe_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_s2mPipe_m2sPipe_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_s2mPipe_rData_corrupt;
    __Vtableidx102 = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_s2mPipe_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_s2mPipe_rData_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx102][0U];
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_s2mPipe_rData_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx102][1U];
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_s2mPipe_rData_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx102][2U];
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_s2mPipe_rData_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx102][3U];
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_s2mPipe_m2sPipe_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_s2mPipe_rData_opcode;
    __Vtableidx86 = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_s2mPipe_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_s2mPipe_rData_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx86][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_s2mPipe_rData_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx86][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_s2mPipe_rData_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx86][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_s2mPipe_rData_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx86][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_s2mPipe_m2sPipe_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_s2mPipe_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_s2mPipe_m2sPipe_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_s2mPipe_rData_source;
    vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_m2sPipe_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_rData_source;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_s2mPipe_rData_address;
    vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_s2mPipe_m2sPipe_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_s2mPipe_rData_size;
    vlSelfRef.PulseTableSoc__DOT__io_up_d_s2mPipe_m2sPipe_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__io_up_d_s2mPipe_rData_source;
    __Vtableidx245 = vlSelfRef.PulseTableSoc__DOT__io_up_d_s2mPipe_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__io_up_d_s2mPipe_rData_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx245][0U];
    vlSelfRef.PulseTableSoc__DOT__io_up_d_s2mPipe_rData_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx245][1U];
    vlSelfRef.PulseTableSoc__DOT__io_up_d_s2mPipe_rData_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx245][2U];
    vlSelfRef.PulseTableSoc__DOT__io_up_d_s2mPipe_rData_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx245][3U];
    vlSelfRef.PulseTableSoc__DOT__io_up_d_s2mPipe_m2sPipe_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__io_up_d_s2mPipe_rData_opcode;
    __Vtableidx205 = vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_rData_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx205][0U];
    vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_rData_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx205][1U];
    vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_rData_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx205][2U];
    vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_rData_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx205][3U];
    vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_m2sPipe_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_rData_opcode;
    __Vtableidx237 = vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_rData_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx237][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_rData_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx237][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_rData_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx237][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_rData_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx237][3U];
    __Vtableidx242 = vlSelfRef.PulseTableSoc__DOT__io_up_d_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__io_up_d_rData_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx242][0U];
    vlSelfRef.PulseTableSoc__DOT__io_up_d_rData_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx242][1U];
    vlSelfRef.PulseTableSoc__DOT__io_up_d_rData_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx242][2U];
    vlSelfRef.PulseTableSoc__DOT__io_up_d_rData_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx242][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_s2mPipe_m2sPipe_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_s2mPipe_rData_address;
    __Vtableidx240 = vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_s2mPipe_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_s2mPipe_rData_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx240][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_s2mPipe_rData_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx240][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_s2mPipe_rData_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx240][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_s2mPipe_rData_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx240][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_s2mPipe_m2sPipe_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_s2mPipe_rData_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_s2mPipe_m2sPipe_payload_param;
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_s2mPipe_m2sPipe_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_s2mPipe_m2sPipe_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_s2mPipe_m2sPipe_payload_source;
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_s2mPipe_m2sPipe_payload_size;
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_s2mPipe_m2sPipe_payload_address;
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_stage_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_stage_payload_data;
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_stage_payload_param;
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_stage_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_s2mPipe_m2sPipe_payload_source;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_s2mPipe_m2sPipe_payload_param;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_s2mPipe_m2sPipe_payload_source;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_s2mPipe_m2sPipe_payload_param;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_s2mPipe_m2sPipe_payload_source;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_s2mPipe_m2sPipe_payload_param;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_s2mPipe_m2sPipe_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_stage_payload_size;
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_stage_payload_source;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_s2mPipe_m2sPipe_payload_size;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_s2mPipe_m2sPipe_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_s2mPipe_m2sPipe_payload_size;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_s2mPipe_m2sPipe_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_s2mPipe_m2sPipe_payload_size;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_m2sPipe_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_m2sPipe_payload_data;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_m2sPipe_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_m2sPipe_payload_size;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_m2sPipe_payload_address;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_m2sPipe_payload_source;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_m2sPipe_payload_param;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_m2sPipe_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_m2sPipe_payload_data;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_m2sPipe_payload_size;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_m2sPipe_payload_source;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_m2sPipe_payload_address;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_m2sPipe_payload_param;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_m2sPipe_payload_source;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_m2sPipe_payload_param;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_m2sPipe_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_m2sPipe_payload_data;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_m2sPipe_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_m2sPipe_payload_address;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_m2sPipe_payload_size;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_m2sPipe_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_param;
    vlSelfRef.PulseTableSoc__DOT__robs_up_bus_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_m2sPipe_payload_param;
    vlSelfRef.PulseTableSoc__DOT__robs_up_bus_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_m2sPipe_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_size;
    vlSelfRef.PulseTableSoc__DOT__robs_up_bus_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_m2sPipe_payload_source;
    vlSelfRef.PulseTableSoc__DOT__robs_up_bus_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_m2sPipe_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_s2mPipe_m2sPipe_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_s2mPipe_m2sPipe_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_s2mPipe_m2sPipe_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_s2mPipe_m2sPipe_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_s2mPipe_m2sPipe_payload_address;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_s2mPipe_m2sPipe_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_s2mPipe_m2sPipe_payload_param;
    vlSelfRef.PulseTableSoc__DOT__robs_up_bus_a_payload_data[0U] 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_m2sPipe_payload_data[0U];
    vlSelfRef.PulseTableSoc__DOT__robs_up_bus_a_payload_data[1U] 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_m2sPipe_payload_data[1U];
    vlSelfRef.PulseTableSoc__DOT__robs_up_bus_a_payload_data[2U] 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_m2sPipe_payload_data[2U];
    vlSelfRef.PulseTableSoc__DOT__robs_up_bus_a_payload_data[3U] 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_m2sPipe_payload_data[3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_data;
    vlSelfRef.PulseTableSoc__DOT__robs_up_bus_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_m2sPipe_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__robs_up_bus_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_m2sPipe_payload_address;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_s2mPipe_m2sPipe_payload_data;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_s2mPipe_m2sPipe_payload_data;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_d_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_s2mPipe_m2sPipe_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_d_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_s2mPipe_m2sPipe_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_s2mPipe_m2sPipe_payload_source;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_s2mPipe_m2sPipe_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_s2mPipe_m2sPipe_payload_source;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_s2mPipe_m2sPipe_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_s2mPipe_m2sPipe_payload_param;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_s2mPipe_m2sPipe_payload_param;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_s2mPipe_m2sPipe_payload_source;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_s2mPipe_m2sPipe_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_s2mPipe_m2sPipe_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_address;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_address;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_s2mPipe_m2sPipe_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_s2mPipe_m2sPipe_payload_source;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_s2mPipe_m2sPipe_payload_param;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_s2mPipe_m2sPipe_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_s2mPipe_m2sPipe_payload_source;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_s2mPipe_m2sPipe_payload_param;
    vlSelfRef.PulseTableSoc__DOT__hostBus_bus_d_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__io_up_d_s2mPipe_m2sPipe_payload_corrupt;
    __Vtableidx249 = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_stage_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_stage_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx249][0U];
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_stage_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx249][1U];
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_stage_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx249][2U];
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_stage_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx249][3U];
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_stage_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_s2mPipe_m2sPipe_payload_size;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_s2mPipe_m2sPipe_payload_size;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_s2mPipe_m2sPipe_payload_size;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_s2mPipe_m2sPipe_payload_size;
    vlSelfRef.PulseTableSoc__DOT__hostBus_bus_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__io_up_d_s2mPipe_m2sPipe_payload_data;
    __Vtableidx96 = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_s2mPipe_m2sPipe_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_s2mPipe_m2sPipe_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx96][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_s2mPipe_m2sPipe_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx96][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_s2mPipe_m2sPipe_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx96][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_s2mPipe_m2sPipe_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx96][3U];
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_s2mPipe_m2sPipe_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_s2mPipe_m2sPipe_payload_size;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_d_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_m2sPipe_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_m2sPipe_payload_param;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_m2sPipe_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_d_payload_data[0U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_m2sPipe_payload_data[0U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_d_payload_data[1U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_m2sPipe_payload_data[1U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_d_payload_data[2U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_m2sPipe_payload_data[2U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_d_payload_data[3U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_m2sPipe_payload_data[3U];
    __Vtableidx150 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_s2mPipe_m2sPipe_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_s2mPipe_m2sPipe_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx150][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_s2mPipe_m2sPipe_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx150][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_s2mPipe_m2sPipe_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx150][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_s2mPipe_m2sPipe_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx150][3U];
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_d_s2mPipe_m2sPipe_payload_opcode;
    __Vtableidx134 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_s2mPipe_m2sPipe_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_s2mPipe_m2sPipe_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx134][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_s2mPipe_m2sPipe_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx134][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_s2mPipe_m2sPipe_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx134][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_s2mPipe_m2sPipe_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx134][3U];
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_d_s2mPipe_m2sPipe_payload_opcode;
    __Vtableidx118 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_s2mPipe_m2sPipe_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_s2mPipe_m2sPipe_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx118][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_s2mPipe_m2sPipe_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx118][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_s2mPipe_m2sPipe_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx118][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_s2mPipe_m2sPipe_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx118][3U];
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_d_s2mPipe_m2sPipe_payload_opcode;
    __Vtableidx113 = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx113][0U];
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx113][1U];
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx113][2U];
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx113][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_opcode;
    __Vtableidx129 = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx129][0U];
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx129][1U];
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx129][2U];
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx129][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_opcode;
    __Vtableidx145 = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx145][0U];
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx145][1U];
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx145][2U];
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx145][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_opcode;
    __Vtableidx80 = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_s2mPipe_m2sPipe_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_s2mPipe_m2sPipe_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx80][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_s2mPipe_m2sPipe_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx80][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_s2mPipe_m2sPipe_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx80][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_s2mPipe_m2sPipe_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx80][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_s2mPipe_m2sPipe_payload_opcode;
    __Vtableidx48 = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_m2sPipe_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_m2sPipe_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx48][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_m2sPipe_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx48][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_m2sPipe_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx48][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_m2sPipe_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx48][3U];
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_s2mPipe_m2sPipe_payload_opcode;
    __Vtableidx32 = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_m2sPipe_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_m2sPipe_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx32][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_m2sPipe_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx32][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_m2sPipe_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx32][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_m2sPipe_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx32][3U];
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_s2mPipe_m2sPipe_payload_opcode;
    __Vtableidx64 = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_m2sPipe_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_m2sPipe_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx64][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_m2sPipe_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx64][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_m2sPipe_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx64][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_m2sPipe_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx64][3U];
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_s2mPipe_m2sPipe_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_bus_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__io_up_d_s2mPipe_m2sPipe_payload_param;
    __Vtableidx199 = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_m2sPipe_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_m2sPipe_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx199][0U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_m2sPipe_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx199][1U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_m2sPipe_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx199][2U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_m2sPipe_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx199][3U];
    vlSelfRef.PulseTableSoc__DOT__robs_up_bus_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_a_s2mPipe_m2sPipe_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_bus_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__io_up_d_s2mPipe_m2sPipe_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__hostBus_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__io_up_d_s2mPipe_m2sPipe_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_m2sPipe_payload_size;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_s2mPipe_m2sPipe_payload_data;
    __Vtableidx37 = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_s2mPipe_m2sPipe_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_s2mPipe_m2sPipe_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx37][0U];
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_s2mPipe_m2sPipe_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx37][1U];
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_s2mPipe_m2sPipe_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx37][2U];
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_s2mPipe_m2sPipe_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx37][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_s2mPipe_m2sPipe_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_s2mPipe_m2sPipe_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_s2mPipe_m2sPipe_payload_param;
    __Vtableidx53 = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_s2mPipe_m2sPipe_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_s2mPipe_m2sPipe_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx53][0U];
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_s2mPipe_m2sPipe_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx53][1U];
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_s2mPipe_m2sPipe_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx53][2U];
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_s2mPipe_m2sPipe_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx53][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_s2mPipe_m2sPipe_payload_opcode;
    __Vtableidx69 = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_s2mPipe_m2sPipe_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_s2mPipe_m2sPipe_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx69][0U];
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_s2mPipe_m2sPipe_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx69][1U];
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_s2mPipe_m2sPipe_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx69][2U];
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_s2mPipe_m2sPipe_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx69][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_s2mPipe_m2sPipe_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_s2mPipe_m2sPipe_payload_corrupt;
    __Vtableidx101 = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_s2mPipe_m2sPipe_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_s2mPipe_m2sPipe_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx101][0U];
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_s2mPipe_m2sPipe_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx101][1U];
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_s2mPipe_m2sPipe_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx101][2U];
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_s2mPipe_m2sPipe_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx101][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_s2mPipe_m2sPipe_payload_opcode;
    __Vtableidx85 = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_s2mPipe_m2sPipe_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_s2mPipe_m2sPipe_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx85][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_s2mPipe_m2sPipe_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx85][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_s2mPipe_m2sPipe_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx85][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_s2mPipe_m2sPipe_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx85][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_d_s2mPipe_m2sPipe_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_s2mPipe_m2sPipe_payload_source;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_m2sPipe_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_s2mPipe_m2sPipe_payload_address;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_s2mPipe_m2sPipe_payload_size;
    vlSelfRef.PulseTableSoc__DOT__hostBus_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__io_up_d_s2mPipe_m2sPipe_payload_source;
    __Vtableidx244 = vlSelfRef.PulseTableSoc__DOT__io_up_d_s2mPipe_m2sPipe_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__io_up_d_s2mPipe_m2sPipe_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx244][0U];
    vlSelfRef.PulseTableSoc__DOT__io_up_d_s2mPipe_m2sPipe_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx244][1U];
    vlSelfRef.PulseTableSoc__DOT__io_up_d_s2mPipe_m2sPipe_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx244][2U];
    vlSelfRef.PulseTableSoc__DOT__io_up_d_s2mPipe_m2sPipe_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx244][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__io_up_d_s2mPipe_m2sPipe_payload_opcode;
    __Vtableidx204 = vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_m2sPipe_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_m2sPipe_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx204][0U];
    vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_m2sPipe_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx204][1U];
    vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_m2sPipe_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx204][2U];
    vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_m2sPipe_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx204][3U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_bus_d_s2mPipe_m2sPipe_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_s2mPipe_m2sPipe_payload_address;
    __Vtableidx239 = vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_s2mPipe_m2sPipe_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_s2mPipe_m2sPipe_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx239][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_s2mPipe_m2sPipe_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx239][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_s2mPipe_m2sPipe_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx239][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_s2mPipe_m2sPipe_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx239][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_bus_a_s2mPipe_m2sPipe_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT___zz_hostCtrlDriver_logic_factory_address 
        = (0x000000ffU & ((IData)(vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_a_payload_address) 
                          >> 2U));
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_up_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_up_bus_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_up_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_up_bus_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_up_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_up_bus_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_up_bus_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_up_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_up_bus_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_up_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_up_bus_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_up_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_noDecoder_toDown_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_noDecoder_toDown_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_noDecoder_toDown_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_noDecoder_toDown_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_noDecoder_toDown_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_noDecoder_toDown_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_noDecoder_toDown_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_noDecoder_toDown_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_noDecoder_toDown_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_noDecoder_toDown_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_noDecoder_toDown_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_noDecoder_toDown_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_noDecoder_toDown_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_noDecoder_toDown_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_noDecoder_toDown_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_noDecoder_toDown_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_noDecoder_toDown_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_noDecoder_toDown_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_noDecoder_toDown_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_noDecoder_toDown_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_noDecoder_toDown_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_noDecoder_toDown_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_noDecoder_toDown_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_noDecoder_toDown_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_noDecoder_toDown_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_noDecoder_toDown_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_noDecoder_toDown_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__robs_up_noDecoder_toDown_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_bus_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__robs_up_noDecoder_toDown_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_bus_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_noDecoder_toDown_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_noDecoder_toDown_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_noDecoder_toDown_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_noDecoder_toDown_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_noDecoder_toDown_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_noDecoder_toDown_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__robs_up_noDecoder_toDown_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_bus_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__robs_up_noDecoder_toDown_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_bus_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_noDecoder_toDown_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_noDecoder_toDown_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_noDecoder_toDown_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_noDecoder_toDown_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_noDecoder_toDown_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_noDecoder_toDown_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_noDecoder_toDown_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__robs_up_noDecoder_toDown_a_payload_data[0U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_bus_a_payload_data[0U];
    vlSelfRef.PulseTableSoc__DOT__robs_up_noDecoder_toDown_a_payload_data[1U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_bus_a_payload_data[1U];
    vlSelfRef.PulseTableSoc__DOT__robs_up_noDecoder_toDown_a_payload_data[2U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_bus_a_payload_data[2U];
    vlSelfRef.PulseTableSoc__DOT__robs_up_noDecoder_toDown_a_payload_data[3U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_bus_a_payload_data[3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_noDecoder_toDown_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_noDecoder_toDown_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_noDecoder_toDown_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__robs_up_noDecoder_toDown_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_bus_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__robs_up_noDecoder_toDown_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_bus_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_up_bus_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_d_payload_data;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_up_bus_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_d_payload_data;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_up_bus_d_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_d_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_up_bus_d_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_d_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_up_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_up_bus_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_up_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_up_bus_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_up_bus_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_up_bus_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_up_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_up_bus_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_up_bus_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_noDecoder_toDown_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_noDecoder_toDown_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_noDecoder_toDown_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_noDecoder_toDown_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_up_bus_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_up_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_up_bus_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_up_bus_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_up_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_up_bus_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_to_hostBus_down_bus_d_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_bus_d_payload_corrupt;
    __Vtableidx90 = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx90][0U];
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx90][1U];
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx90][2U];
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx90][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_up_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_up_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_up_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_up_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_to_hostBus_down_bus_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_bus_d_payload_data;
    __Vtableidx89 = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx89][0U];
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx89][1U];
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx89][2U];
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx89][3U];
    vlSelfRef.PulseTableSoc__DOT___zz_hostCtrlDriver_logic_factory_rspAsync_payload_opcode 
        = (1U & (- (IData)((4U == (IData)(vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_up_bus_a_payload_opcode)))));
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_up_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_up_bus_d_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_d_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_up_bus_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_up_bus_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_up_bus_d_payload_data[0U] 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_d_payload_data[0U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_up_bus_d_payload_data[1U] 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_d_payload_data[1U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_up_bus_d_payload_data[2U] 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_d_payload_data[2U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_up_bus_d_payload_data[3U] 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_d_payload_data[3U];
    __Vtableidx141 = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx141][0U];
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx141][1U];
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx141][2U];
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx141][3U];
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_up_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_d_payload_opcode;
    __Vtableidx125 = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx125][0U];
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx125][1U];
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx125][2U];
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx125][3U];
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_up_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_d_payload_opcode;
    __Vtableidx109 = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx109][0U];
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx109][1U];
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx109][2U];
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx109][3U];
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_up_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_d_payload_opcode;
    __Vtableidx106 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx106][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx106][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx106][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx106][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_noDecoder_toDown_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_a_payload_opcode;
    __Vtableidx122 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx122][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx122][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx122][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx122][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_noDecoder_toDown_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_bus_a_payload_opcode;
    __Vtableidx138 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx138][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx138][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx138][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx138][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_noDecoder_toDown_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_bus_a_payload_opcode;
    __Vtableidx73 = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx73][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx73][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx73][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx73][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_noDecoder_toDown_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_bus_a_payload_opcode;
    __Vtableidx41 = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx41][0U];
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx41][1U];
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx41][2U];
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx41][3U];
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_noDecoder_toDown_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_a_payload_opcode;
    __Vtableidx25 = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx25][0U];
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx25][1U];
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx25][2U];
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx25][3U];
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_noDecoder_toDown_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_a_payload_opcode;
    __Vtableidx57 = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx57][0U];
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx57][1U];
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx57][2U];
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx57][3U];
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_noDecoder_toDown_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_to_hostBus_down_bus_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_bus_d_payload_param;
    __Vtableidx192 = vlSelfRef.PulseTableSoc__DOT__robs_up_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__robs_up_bus_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx192][0U];
    vlSelfRef.PulseTableSoc__DOT__robs_up_bus_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx192][1U];
    vlSelfRef.PulseTableSoc__DOT__robs_up_bus_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx192][2U];
    vlSelfRef.PulseTableSoc__DOT__robs_up_bus_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx192][3U];
    vlSelfRef.PulseTableSoc__DOT__robs_up_noDecoder_toDown_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_to_hostBus_down_bus_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_bus_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_to_hostBus_down_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_bus_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_noDecoder_toDown_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_up_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_0_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_1_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_2_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_3_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_5_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_4_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_data;
    __Vtableidx28 = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx28][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx28][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx28][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx28][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_up_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_0_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_1_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_2_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_3_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_5_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_4_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_0_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_1_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_2_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_3_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_5_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_4_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_param;
    __Vtableidx44 = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx44][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx44][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx44][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx44][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_up_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_d_payload_opcode;
    __Vtableidx60 = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx60][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx60][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx60][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx60][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_up_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_0_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_1_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_2_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_3_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_5_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_4_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_corrupt;
    __Vtableidx92 = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx92][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx92][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx92][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx92][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_up_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_d_payload_opcode;
    __Vtableidx76 = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx76][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx76][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx76][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx76][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_up_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_0_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_1_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_2_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_3_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_5_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_4_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_up_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_noDecoder_toDown_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_bus_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_0_a_payload_size 
        = (3U & (IData)(vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_size));
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_1_a_payload_size 
        = (3U & (IData)(vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_size));
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_2_a_payload_size 
        = (3U & (IData)(vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_size));
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_3_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_5_a_payload_size 
        = (3U & (IData)(vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_size));
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_4_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_to_hostBus_down_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_bus_d_payload_source;
    __Vtableidx18 = vlSelfRef.PulseTableSoc__DOT__hostBus_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx18][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx18][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx18][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx18][3U];
    vlSelfRef.PulseTableSoc__DOT__bridge_down_to_hostBus_down_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_bus_d_payload_opcode;
    __Vtableidx195 = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx195][0U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx195][1U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx195][2U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx195][3U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_up_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_down_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT___zz_downs_0_a_payload_address 
        = (0x0007ffffU & (vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_address 
                          - (IData)(0x00010000U)));
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT___zz_downs_1_a_payload_address 
        = (0x0007ffffU & (vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_address 
                          - (IData)(0x00020000U)));
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT___zz_downs_2_a_payload_address 
        = (0x0007ffffU & (vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_address 
                          - (IData)(0x00030000U)));
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT___zz_downs_3_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT___zz_downs_5_a_payload_address 
        = (0x0007ffffU & (vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_address 
                          - (IData)(0x00050000U)));
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT___zz_downs_4_a_payload_address 
        = (0x0007ffffU & (vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_address 
                          - (IData)(0x00040000U)));
    __Vtableidx466 = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx466][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx466][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx466][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx466][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_0_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_1_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_2_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_3_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_5_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_4_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__a_key 
        = (((IData)(vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_opcode) 
            << 0x00000013U) | vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_up_a_payload_address);
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_noDecoder_toDown_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_up_bus_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_noDecoder_toDown_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_up_bus_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_noDecoder_toDown_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_up_bus_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_noDecoder_toDown_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_up_bus_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_noDecoder_toDown_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_up_bus_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_noDecoder_toDown_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_up_bus_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_noDecoder_toDown_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_up_bus_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_noDecoder_toDown_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_up_bus_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_noDecoder_toDown_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_up_bus_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_noDecoder_toDown_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_up_bus_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_noDecoder_toDown_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_up_bus_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_noDecoder_toDown_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_up_bus_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_up_bus_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_noDecoder_toDown_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_up_bus_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_noDecoder_toDown_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_up_bus_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_noDecoder_toDown_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_up_bus_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_noDecoder_toDown_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_up_bus_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_noDecoder_toDown_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_up_bus_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_noDecoder_toDown_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_up_bus_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_noDecoder_toDown_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_up_bus_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_noDecoder_toDown_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_up_bus_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_noDecoder_toDown_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_up_bus_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_noDecoder_toDown_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_up_bus_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_noDecoder_toDown_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_up_bus_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_noDecoder_toDown_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_up_bus_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_noDecoder_toDown_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_up_bus_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_noDecoder_toDown_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_up_bus_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_noDecoder_toDown_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_up_bus_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_noDecoder_toDown_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_up_bus_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_noDecoder_toDown_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_up_bus_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_noDecoder_toDown_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_up_bus_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_noDecoder_toDown_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_up_bus_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_noDecoder_toDown_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_up_bus_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_noDecoder_toDown_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_up_bus_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_noDecoder_toDown_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_up_bus_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_noDecoder_toDown_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_up_bus_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_noDecoder_toDown_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshLi9v4CtWR3tBOMvlN07Bhsk6APNZxlDslmY5BJtN 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_noDecoder_toDown_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_to_riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_up_bus_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_noDecoder_toDown_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_up_bus_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_noDecoder_toDown_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_up_bus_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_noDecoder_toDown_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_up_bus_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_noDecoder_toDown_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_up_bus_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_noDecoder_toDown_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_up_bus_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_noDecoder_toDown_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_up_bus_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_noDecoder_toDown_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_up_bus_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_noDecoder_toDown_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshmcN7W0c70qtEEtlsAcqyAAnL5PBABVXm3zCRyGtP 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_noDecoder_toDown_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_to_riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_up_bus_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_noDecoder_toDown_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_up_bus_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_noDecoder_toDown_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_up_bus_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_noDecoder_toDown_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_up_bus_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_noDecoder_toDown_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_up_bus_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_noDecoder_toDown_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_up_bus_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_noDecoder_toDown_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_up_bus_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_noDecoder_toDown_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_up_bus_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_noDecoder_toDown_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_up_bus_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_noDecoder_toDown_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_up_bus_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_noDecoder_toDown_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_up_bus_a_payload_data[0U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_noDecoder_toDown_a_payload_data[0U];
    vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_up_bus_a_payload_data[1U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_noDecoder_toDown_a_payload_data[1U];
    vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_up_bus_a_payload_data[2U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_noDecoder_toDown_a_payload_data[2U];
    vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_up_bus_a_payload_data[3U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_noDecoder_toDown_a_payload_data[3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_up_bus_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_noDecoder_toDown_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_up_bus_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_noDecoder_toDown_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_to_riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_up_bus_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_noDecoder_toDown_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_up_bus_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_noDecoder_toDown_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_up_bus_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_noDecoder_toDown_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_3_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_up_bus_d_payload_data;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_5_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_up_bus_d_payload_data;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_5_d_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_up_bus_d_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_3_d_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_up_bus_d_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_1_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_up_bus_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_0_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_up_bus_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_2_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_up_bus_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_2_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_up_bus_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_1_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_up_bus_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_0_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_up_bus_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_0_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_up_bus_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_1_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_up_bus_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_2_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_up_bus_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_up_bus_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_noDecoder_toDown_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_up_bus_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_noDecoder_toDown_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshSC9YALt2UCuAUevJXKnfUPNY24WCjAxorVZ2QxLP 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_noDecoder_toDown_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_to_riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_up_bus_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_noDecoder_toDown_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_5_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_up_bus_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_5_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_up_bus_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_5_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_up_bus_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_3_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_up_bus_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_3_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_up_bus_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_3_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_up_bus_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_to_hostBus_up_bus_d_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_to_hostBus_down_bus_d_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_3_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_up_bus_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_1_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_up_bus_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_2_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_up_bus_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_0_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_up_bus_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_to_hostBus_up_bus_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_to_hostBus_down_bus_d_payload_data;
    __Vtableidx248 = vlSelfRef.PulseTableSoc__DOT___zz_hostCtrlDriver_logic_factory_rspAsync_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT___zz_hostCtrlDriver_logic_factory_rspAsync_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx248][0U];
    vlSelfRef.PulseTableSoc__DOT___zz_hostCtrlDriver_logic_factory_rspAsync_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx248][1U];
    vlSelfRef.PulseTableSoc__DOT___zz_hostCtrlDriver_logic_factory_rspAsync_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx248][2U];
    vlSelfRef.PulseTableSoc__DOT___zz_hostCtrlDriver_logic_factory_rspAsync_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx248][3U];
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT___zz_hostCtrlDriver_logic_factory_rspAsync_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_5_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_up_bus_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_noDecoder_toDown_d_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_up_bus_d_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_noDecoder_toDown_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_up_bus_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_noDecoder_toDown_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_up_bus_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_noDecoder_toDown_d_payload_data[0U] 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_up_bus_d_payload_data[0U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_noDecoder_toDown_d_payload_data[1U] 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_up_bus_d_payload_data[1U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_noDecoder_toDown_d_payload_data[2U] 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_up_bus_d_payload_data[2U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_noDecoder_toDown_d_payload_data[3U] 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_up_bus_d_payload_data[3U];
    __Vtableidx189 = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_up_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_up_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx189][0U];
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_up_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx189][1U];
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_up_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx189][2U];
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_up_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx189][3U];
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_noDecoder_toDown_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_up_bus_d_payload_opcode;
    __Vtableidx183 = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_up_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_up_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx183][0U];
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_up_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx183][1U];
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_up_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx183][2U];
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_up_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx183][3U];
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_noDecoder_toDown_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_up_bus_d_payload_opcode;
    __Vtableidx177 = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_up_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_up_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx177][0U];
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_up_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx177][1U];
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_up_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx177][2U];
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_up_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx177][3U];
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_noDecoder_toDown_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_up_bus_d_payload_opcode;
    __Vtableidx120 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_noDecoder_toDown_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_noDecoder_toDown_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx120][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_noDecoder_toDown_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx120][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_noDecoder_toDown_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx120][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_noDecoder_toDown_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx120][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_up_bus_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_noDecoder_toDown_a_payload_opcode;
    __Vtableidx136 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_noDecoder_toDown_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_noDecoder_toDown_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx136][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_noDecoder_toDown_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx136][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_noDecoder_toDown_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx136][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_noDecoder_toDown_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx136][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshhAO9f1IebBvpJmBfaGzeVDB1hm3xY1Bf7wHiGFbN 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_noDecoder_toDown_a_payload_opcode;
    __Vtableidx152 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_noDecoder_toDown_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_noDecoder_toDown_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx152][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_noDecoder_toDown_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx152][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_noDecoder_toDown_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx152][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_noDecoder_toDown_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx152][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_up_bus_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_noDecoder_toDown_a_payload_opcode;
    __Vtableidx87 = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_noDecoder_toDown_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_noDecoder_toDown_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx87][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_noDecoder_toDown_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx87][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_noDecoder_toDown_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx87][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_noDecoder_toDown_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx87][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_up_bus_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_noDecoder_toDown_a_payload_opcode;
    __Vtableidx55 = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_noDecoder_toDown_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_noDecoder_toDown_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx55][0U];
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_noDecoder_toDown_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx55][1U];
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_noDecoder_toDown_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx55][2U];
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_noDecoder_toDown_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx55][3U];
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_up_bus_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_noDecoder_toDown_a_payload_opcode;
    __Vtableidx39 = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_noDecoder_toDown_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_noDecoder_toDown_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx39][0U];
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_noDecoder_toDown_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx39][1U];
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_noDecoder_toDown_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx39][2U];
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_noDecoder_toDown_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx39][3U];
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_up_bus_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_noDecoder_toDown_a_payload_opcode;
    __Vtableidx71 = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_noDecoder_toDown_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_noDecoder_toDown_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx71][0U];
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_noDecoder_toDown_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx71][1U];
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_noDecoder_toDown_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx71][2U];
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_noDecoder_toDown_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx71][3U];
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_up_bus_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_noDecoder_toDown_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_to_hostBus_up_bus_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_to_hostBus_down_bus_d_payload_param;
    __Vtableidx206 = vlSelfRef.PulseTableSoc__DOT__robs_up_noDecoder_toDown_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__robs_up_noDecoder_toDown_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx206][0U];
    vlSelfRef.PulseTableSoc__DOT__robs_up_noDecoder_toDown_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx206][1U];
    vlSelfRef.PulseTableSoc__DOT__robs_up_noDecoder_toDown_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx206][2U];
    vlSelfRef.PulseTableSoc__DOT__robs_up_noDecoder_toDown_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx206][3U];
    vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_up_bus_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_noDecoder_toDown_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_to_hostBus_up_bus_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_to_hostBus_down_bus_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_to_hostBus_up_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_to_hostBus_down_bus_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_up_bus_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_noDecoder_toDown_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_noDecoder_toDown_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_up_bus_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_0_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_0_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_1_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_1_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_2_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_2_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_3_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_3_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_5_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_5_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_4_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_4_a_payload_data;
    __Vtableidx225 = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_up_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_up_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx225][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_up_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx225][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_up_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx225][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_up_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx225][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_0_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_up_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_0_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_0_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_1_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_1_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_2_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_2_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_3_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_3_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_5_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_5_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_4_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_4_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_0_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_0_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_1_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_1_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_2_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_2_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_3_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_3_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_5_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_5_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_4_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_4_a_payload_param;
    __Vtableidx227 = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_up_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_up_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx227][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_up_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx227][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_up_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx227][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_up_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx227][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_1_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_up_bus_d_payload_opcode;
    __Vtableidx229 = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_up_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_up_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx229][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_up_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx229][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_up_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx229][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_up_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx229][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_2_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_up_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_0_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_0_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_1_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_1_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_2_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_2_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_3_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_3_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_5_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_5_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_4_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_4_a_payload_corrupt;
    __Vtableidx235 = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_up_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_up_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx235][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_up_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx235][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_up_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx235][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_up_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx235][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_5_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_up_bus_d_payload_opcode;
    __Vtableidx231 = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_up_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_up_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx231][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_up_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx231][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_up_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx231][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_up_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx231][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_3_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_up_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_0_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_0_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_1_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_1_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_2_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_2_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_3_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_3_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_5_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_5_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_4_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_4_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_noDecoder_toDown_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_up_bus_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_up_bus_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_noDecoder_toDown_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_0_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_0_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_1_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_1_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_2_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_2_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_3_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_3_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_5_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_5_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_4_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_4_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_to_hostBus_up_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_to_hostBus_down_bus_d_payload_source;
    __Vtableidx20 = vlSelfRef.PulseTableSoc__DOT__bridge_down_to_hostBus_down_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_to_hostBus_down_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx20][0U];
    vlSelfRef.PulseTableSoc__DOT__bridge_down_to_hostBus_down_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx20][1U];
    vlSelfRef.PulseTableSoc__DOT__bridge_down_to_hostBus_down_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx20][2U];
    vlSelfRef.PulseTableSoc__DOT__bridge_down_to_hostBus_down_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx20][3U];
    vlSelfRef.PulseTableSoc__DOT__bridge_down_to_hostBus_up_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_to_hostBus_down_bus_d_payload_opcode;
    __Vtableidx213 = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_up_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_up_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx213][0U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_up_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx213][1U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_up_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx213][2U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_up_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx213][3U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_noDecoder_toDown_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_to_robs_up_up_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_0_a_payload_address 
        = (0x00003fffU & vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT___zz_downs_0_a_payload_address);
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_1_a_payload_address 
        = (0x00000fffU & vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT___zz_downs_1_a_payload_address);
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_2_a_payload_address 
        = (0x00000fffU & vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT___zz_downs_2_a_payload_address);
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_3_a_payload_address 
        = (0x0000ffffU & vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT___zz_downs_3_a_payload_address);
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_5_a_payload_address 
        = (0x000003ffU & vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT___zz_downs_5_a_payload_address);
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_4_a_payload_address 
        = (0x0000ffffU & vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT___zz_downs_4_a_payload_address);
    __Vtableidx480 = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_0_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_0_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx480][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_0_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx480][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_0_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx480][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_0_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx480][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_0_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_0_a_payload_opcode;
    __Vtableidx482 = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_1_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_1_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx482][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_1_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx482][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_1_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx482][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_1_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx482][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_1_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_1_a_payload_opcode;
    __Vtableidx484 = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_2_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_2_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx484][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_2_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx484][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_2_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx484][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_2_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx484][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_2_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_2_a_payload_opcode;
    __Vtableidx486 = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_3_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_3_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx486][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_3_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx486][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_3_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx486][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_3_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx486][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_3_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_3_a_payload_opcode;
    __Vtableidx490 = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_5_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_5_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx490][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_5_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx490][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_5_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx490][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_5_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx490][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_5_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_5_a_payload_opcode;
    __Vtableidx488 = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_4_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_4_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx488][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_4_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx488][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_4_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx488][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_4_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx488][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_4_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_4_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT___zz_a_logic_0_hit 
        = (0x00010000U == (0x00070000U & vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__a_key));
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT___zz_a_logic_1_hit 
        = (0x00020000U == (0x00030000U & vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__a_key));
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT___zz_a_logic_2_hit 
        = (0x00030000U == (0x00030000U & vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__a_key));
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT___zz_a_logic_3_hit 
        = (0U == (0x00070000U & vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__a_key));
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT___zz_a_logic_5_hit 
        = (0x00050000U == (0x00050000U & vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__a_key));
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT___zz_a_logic_4_hit 
        = (0x00040000U == (0x00050000U & vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__a_key));
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_noDecoder_toDown_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_noDecoder_toDown_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_noDecoder_toDown_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_noDecoder_toDown_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_noDecoder_toDown_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_noDecoder_toDown_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_noDecoder_toDown_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_noDecoder_toDown_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_noDecoder_toDown_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_noDecoder_toDown_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_noDecoder_toDown_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_noDecoder_toDown_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_up_bus_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_up_bus_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_up_bus_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_up_bus_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_up_bus_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_up_bus_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_up_bus_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_up_bus_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_up_bus_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_up_bus_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_up_bus_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_up_bus_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_up_bus_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_up_bus_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_up_bus_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_up_bus_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_up_bus_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_up_bus_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_up_bus_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_up_bus_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_up_bus_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_down_bus_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_up_bus_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_down_bus_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_up_bus_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_down_bus_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_up_bus_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshGBgKahLpOL1wLB1syV3ABuNR5MxAaXwK7qEe5bzw 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshLi9v4CtWR3tBOMvlN07Bhsk6APNZxlDslmY5BJtN;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshPuy83S6EACfA4W2p1EVmL0HVAb4OmYJI5r2oyWG7 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_to_riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_up_bus_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_down_bus_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_up_bus_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_down_bus_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_up_bus_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_down_bus_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_up_bus_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_down_bus_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_up_bus_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_down_bus_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_up_bus_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_down_bus_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_up_bus_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_down_bus_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_up_bus_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshBNW1Qd4tp3wIySXq7ACEVMsoBLGBESgq9bAWHx7l 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshmcN7W0c70qtEEtlsAcqyAAnL5PBABVXm3zCRyGtP;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshZDNDNueFRHaaAkPsOaTZpYBDDG3PP4lMrwatjxTN 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_to_riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_up_bus_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_down_bus_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_up_bus_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_down_bus_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_up_bus_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_input_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_up_bus_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_input_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_up_bus_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_input_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_up_bus_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_input_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_up_bus_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_input_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_up_bus_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_input_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_up_bus_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_input_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_up_bus_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_down_bus_a_payload_data[0U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_up_bus_a_payload_data[0U];
    vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_down_bus_a_payload_data[1U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_up_bus_a_payload_data[1U];
    vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_down_bus_a_payload_data[2U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_up_bus_a_payload_data[2U];
    vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_down_bus_a_payload_data[3U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_up_bus_a_payload_data[3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_down_bus_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_up_bus_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_down_bus_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_up_bus_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___Vhshv9gRhfLGeUY2OfrB2gyZCfVVBq0PcPlU5Sg0RcEJ 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_to_riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_up_bus_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_down_bus_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_up_bus_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_down_bus_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_up_bus_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_3_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_3_d_payload_data;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_5_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_5_d_payload_data;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_5_d_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_5_d_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_3_d_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_3_d_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_1_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_1_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_0_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_0_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_2_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_2_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_2_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_2_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_1_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_1_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_0_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_0_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_0_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_0_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_1_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_1_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_2_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_2_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_down_bus_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_up_bus_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_down_bus_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_up_bus_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshBKuwIWk6X4ea1jwJZYTXzZ2cZTXDxKqJzVqbLghm 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshSC9YALt2UCuAUevJXKnfUPNY24WCjAxorVZ2QxLP;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshRbEpTe2owm2e9siafyFISrGdAqlA4e8CKcAHfKuf 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_up_to_riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_up_bus_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_5_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_5_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_5_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_5_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_5_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_5_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_3_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_3_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_3_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_3_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_3_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_3_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_noDecoder_toDown_d_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_to_hostBus_up_bus_d_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_3_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_3_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_1_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_1_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_2_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_2_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_0_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_0_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_noDecoder_toDown_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_to_hostBus_up_bus_d_payload_data;
    __Vtableidx105 = vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx105][0U];
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx105][1U];
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx105][2U];
    vlSelfRef.PulseTableSoc__DOT__hostCtrlDriver_logic_factory_rspAsync_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx105][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_5_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_5_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_bus_d_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_noDecoder_toDown_d_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_bus_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_noDecoder_toDown_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_bus_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_noDecoder_toDown_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_bus_d_payload_data[0U] 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_noDecoder_toDown_d_payload_data[0U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_bus_d_payload_data[1U] 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_noDecoder_toDown_d_payload_data[1U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_bus_d_payload_data[2U] 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_noDecoder_toDown_d_payload_data[2U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_bus_d_payload_data[3U] 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_noDecoder_toDown_d_payload_data[3U];
    __Vtableidx72 = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_noDecoder_toDown_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_noDecoder_toDown_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx72][0U];
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_noDecoder_toDown_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx72][1U];
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_noDecoder_toDown_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx72][2U];
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_noDecoder_toDown_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx72][3U];
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_noDecoder_toDown_d_payload_opcode;
    __Vtableidx56 = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_noDecoder_toDown_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_noDecoder_toDown_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx56][0U];
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_noDecoder_toDown_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx56][1U];
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_noDecoder_toDown_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx56][2U];
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_noDecoder_toDown_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx56][3U];
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_noDecoder_toDown_d_payload_opcode;
    __Vtableidx40 = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_noDecoder_toDown_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_noDecoder_toDown_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx40][0U];
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_noDecoder_toDown_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx40][1U];
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_noDecoder_toDown_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx40][2U];
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_noDecoder_toDown_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx40][3U];
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_noDecoder_toDown_d_payload_opcode;
    __Vtableidx214 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_up_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshaeAvIq1Gej3tCn7qjK4BaoPULlLsnJgnpudKMcnq[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx214][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshaeAvIq1Gej3tCn7qjK4BaoPULlLsnJgnpudKMcnq[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx214][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshaeAvIq1Gej3tCn7qjK4BaoPULlLsnJgnpudKMcnq[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx214][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshaeAvIq1Gej3tCn7qjK4BaoPULlLsnJgnpudKMcnq[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx214][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_down_bus_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_up_bus_a_payload_opcode;
    __Vtableidx216 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshhAO9f1IebBvpJmBfaGzeVDB1hm3xY1Bf7wHiGFbN;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshFLAQJ4KfWu0oaWcfvBw4KGwdeJZBZDyHMmsdxrOJ[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx216][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshFLAQJ4KfWu0oaWcfvBw4KGwdeJZBZDyHMmsdxrOJ[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx216][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshFLAQJ4KfWu0oaWcfvBw4KGwdeJZBZDyHMmsdxrOJ[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx216][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshFLAQJ4KfWu0oaWcfvBw4KGwdeJZBZDyHMmsdxrOJ[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx216][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___Vhshr4YAJa6g0RMTpv1VqWryOaLOEQB91VADllvt8XX2 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshhAO9f1IebBvpJmBfaGzeVDB1hm3xY1Bf7wHiGFbN;
    __Vtableidx218 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_up_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshNwnCe82tkyMBvyLyYOBXHZ8mFXpqB1UQ9yEzB2tq[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx218][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshNwnCe82tkyMBvyLyYOBXHZ8mFXpqB1UQ9yEzB2tq[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx218][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshNwnCe82tkyMBvyLyYOBXHZ8mFXpqB1UQ9yEzB2tq[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx218][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshNwnCe82tkyMBvyLyYOBXHZ8mFXpqB1UQ9yEzB2tq[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx218][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_down_bus_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_up_bus_a_payload_opcode;
    __Vtableidx190 = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_up_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_up_bus_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx190][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_up_bus_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx190][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_up_bus_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx190][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_up_bus_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx190][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_input_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_up_bus_a_payload_opcode;
    __Vtableidx182 = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_up_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_up_bus_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx182][0U];
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_up_bus_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx182][1U];
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_up_bus_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx182][2U];
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_up_bus_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx182][3U];
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_up_bus_a_payload_opcode;
    __Vtableidx176 = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_up_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_up_bus_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx176][0U];
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_up_bus_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx176][1U];
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_up_bus_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx176][2U];
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_up_bus_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx176][3U];
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_up_bus_a_payload_opcode;
    __Vtableidx188 = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_up_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_up_bus_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx188][0U];
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_up_bus_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx188][1U];
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_up_bus_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx188][2U];
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_up_bus_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx188][3U];
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_up_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_noDecoder_toDown_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_to_hostBus_up_bus_d_payload_param;
    __Vtableidx246 = vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_up_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_up_bus_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx246][0U];
    vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_up_bus_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx246][1U];
    vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_up_bus_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx246][2U];
    vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_up_bus_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx246][3U];
    vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_down_bus_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_up_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_noDecoder_toDown_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_to_hostBus_up_bus_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_noDecoder_toDown_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_to_hostBus_up_bus_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_down_bus_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_up_bus_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_noDecoder_toDown_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_0_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_0_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_1_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_1_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_2_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_2_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_3_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_3_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_5_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_5_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_4_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_4_a_payload_data;
    __Vtableidx469 = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_0_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_0_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx469][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_0_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx469][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_0_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx469][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_0_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx469][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_0_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_0_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_0_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_0_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_1_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_1_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_2_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_2_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_3_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_3_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_5_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_5_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_4_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_4_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_0_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_0_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_1_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_1_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_2_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_2_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_3_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_3_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_5_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_5_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_4_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_4_a_payload_param;
    __Vtableidx471 = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_1_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_1_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx471][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_1_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx471][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_1_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx471][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_1_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx471][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_1_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_1_d_payload_opcode;
    __Vtableidx473 = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_2_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_2_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx473][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_2_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx473][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_2_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx473][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_2_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx473][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_2_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_2_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_0_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_0_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_1_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_1_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_2_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_2_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_3_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_3_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_5_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_5_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_4_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_4_a_payload_corrupt;
    __Vtableidx479 = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_5_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_5_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx479][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_5_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx479][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_5_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx479][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_5_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx479][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_5_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_5_d_payload_opcode;
    __Vtableidx475 = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_3_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_3_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx475][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_3_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx475][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_3_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx475][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_3_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx475][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_3_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_3_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_0_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_0_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_1_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_1_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_2_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_2_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_3_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_3_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_5_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_5_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_4_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_4_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_noDecoder_toDown_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_down_bus_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_up_bus_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_0_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_0_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_1_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_1_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_2_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_2_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_3_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_3_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_5_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_5_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_4_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_4_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_noDecoder_toDown_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_to_hostBus_up_bus_d_payload_source;
    __Vtableidx104 = vlSelfRef.PulseTableSoc__DOT__bridge_down_to_hostBus_up_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_to_hostBus_up_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx104][0U];
    vlSelfRef.PulseTableSoc__DOT__bridge_down_to_hostBus_up_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx104][1U];
    vlSelfRef.PulseTableSoc__DOT__bridge_down_to_hostBus_up_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx104][2U];
    vlSelfRef.PulseTableSoc__DOT__bridge_down_to_hostBus_up_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx104][3U];
    vlSelfRef.PulseTableSoc__DOT__bridge_down_noDecoder_toDown_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_to_hostBus_up_bus_d_payload_opcode;
    __Vtableidx171 = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_noDecoder_toDown_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_noDecoder_toDown_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx171][0U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_noDecoder_toDown_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx171][1U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_noDecoder_toDown_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx171][2U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_noDecoder_toDown_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx171][3U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_noDecoder_toDown_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_0_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_0_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_1_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_1_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_2_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_2_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_3_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_3_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_5_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_5_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_4_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_4_a_payload_address;
    __Vtableidx468 = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_0_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_0_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx468][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_0_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx468][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_0_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx468][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_0_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx468][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_0_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_0_a_payload_opcode;
    __Vtableidx470 = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_1_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_1_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx470][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_1_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx470][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_1_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx470][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_1_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx470][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_1_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_1_a_payload_opcode;
    __Vtableidx472 = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_2_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_2_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx472][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_2_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx472][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_2_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx472][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_2_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx472][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_2_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_2_a_payload_opcode;
    __Vtableidx474 = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_3_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_3_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx474][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_3_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx474][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_3_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx474][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_3_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx474][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_3_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_3_a_payload_opcode;
    __Vtableidx478 = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_5_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_5_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx478][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_5_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx478][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_5_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx478][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_5_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx478][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_5_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_5_a_payload_opcode;
    __Vtableidx476 = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_4_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_4_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx476][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_4_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx476][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_4_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx476][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_4_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx476][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_4_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_4_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__a_logic_0_hit 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT___zz_a_logic_0_hit;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__a_logic_1_hit 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT___zz_a_logic_1_hit;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__a_logic_2_hit 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT___zz_a_logic_2_hit;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__a_logic_3_hit 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT___zz_a_logic_3_hit;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__a_logic_5_hit 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT___zz_a_logic_5_hit;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__a_logic_4_hit 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT___zz_a_logic_4_hit;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_bus_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_down_bus_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_bus_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_down_bus_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_bus_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_down_bus_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_bus_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshGBgKahLpOL1wLB1syV3ABuNR5MxAaXwK7qEe5bzw;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_bus_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshPuy83S6EACfA4W2p1EVmL0HVAb4OmYJI5r2oyWG7;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_bus_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_down_bus_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_up_bus_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_down_bus_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_up_bus_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_down_bus_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_bus_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_down_bus_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_bus_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_down_bus_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_bus_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_down_bus_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_bus_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_down_bus_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_bus_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshBNW1Qd4tp3wIySXq7ACEVMsoBLGBESgq9bAWHx7l;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_bus_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshZDNDNueFRHaaAkPsOaTZpYBDDG3PP4lMrwatjxTN;
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_up_bus_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_down_bus_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_up_bus_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_down_bus_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__io_push_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_input_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__io_push_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_input_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__io_push_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_input_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__io_push_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_input_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__io_push_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_input_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__io_push_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_input_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__io_push_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_input_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_up_bus_a_payload_data[0U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_down_bus_a_payload_data[0U];
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_up_bus_a_payload_data[1U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_down_bus_a_payload_data[1U];
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_up_bus_a_payload_data[2U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_down_bus_a_payload_data[2U];
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_up_bus_a_payload_data[3U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_down_bus_a_payload_data[3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_bus_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_down_bus_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_bus_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_down_bus_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_bus_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___Vhshv9gRhfLGeUY2OfrB2gyZCfVVBq0PcPlU5Sg0RcEJ;
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_up_bus_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_down_bus_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_up_bus_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_down_bus_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_3_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_3_d_payload_data;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_5_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_5_d_payload_data;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_5_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_5_d_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_3_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_3_d_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_1_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_1_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_0_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_0_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_2_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_2_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_2_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_2_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_1_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_1_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_0_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_0_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_0_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_0_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_1_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_1_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_2_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_2_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_bus_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_down_bus_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_bus_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_down_bus_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_bus_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshBKuwIWk6X4ea1jwJZYTXzZ2cZTXDxKqJzVqbLghm;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_bus_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshRbEpTe2owm2e9siafyFISrGdAqlA4e8CKcAHfKuf;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_5_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_5_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_5_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_5_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_5_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_5_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_3_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_3_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_3_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_3_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_3_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_3_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_bus_d_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_noDecoder_toDown_d_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_3_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_3_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter_io_inputs_1_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_1_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter_io_inputs_2_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_2_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter_io_inputs_0_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_0_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_bus_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_noDecoder_toDown_d_payload_data;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter_io_inputs_5_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_5_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_down_d_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_bus_d_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_down_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_bus_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_down_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_bus_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_down_d_payload_data[0U] 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_bus_d_payload_data[0U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_down_d_payload_data[1U] 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_bus_d_payload_data[1U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_down_d_payload_data[2U] 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_bus_d_payload_data[2U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_down_d_payload_data[3U] 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_bus_d_payload_data[3U];
    __Vtableidx58 = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx58][0U];
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx58][1U];
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx58][2U];
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx58][3U];
    __Vtableidx42 = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx42][0U];
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx42][1U];
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx42][2U];
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx42][3U];
    __Vtableidx26 = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx26][0U];
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx26][1U];
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx26][2U];
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx26][3U];
    __Vtableidx174 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_down_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshuLoo2hyA9OG04LV6TCG2W4fKfN2kkvY6sVWkBPEp[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx174][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshuLoo2hyA9OG04LV6TCG2W4fKfN2kkvY6sVWkBPEp[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx174][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshuLoo2hyA9OG04LV6TCG2W4fKfN2kkvY6sVWkBPEp[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx174][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshuLoo2hyA9OG04LV6TCG2W4fKfN2kkvY6sVWkBPEp[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx174][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_bus_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_down_bus_a_payload_opcode;
    __Vtableidx180 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___Vhshr4YAJa6g0RMTpv1VqWryOaLOEQB91VADllvt8XX2;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshYZxJtm8hI8fWLFRmPguAharzgYW86blsx2vY2dWr[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx180][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshYZxJtm8hI8fWLFRmPguAharzgYW86blsx2vY2dWr[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx180][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshYZxJtm8hI8fWLFRmPguAharzgYW86blsx2vY2dWr[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx180][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshYZxJtm8hI8fWLFRmPguAharzgYW86blsx2vY2dWr[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx180][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_bus_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___Vhshr4YAJa6g0RMTpv1VqWryOaLOEQB91VADllvt8XX2;
    __Vtableidx186 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_down_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshZA01K9BL2kAHklt8cAKm1y3eSfSUle5IQ82V0ay4[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx186][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshZA01K9BL2kAHklt8cAKm1y3eSfSUle5IQ82V0ay4[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx186][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshZA01K9BL2kAHklt8cAKm1y3eSfSUle5IQ82V0ay4[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx186][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0___VhshZA01K9BL2kAHklt8cAKm1y3eSfSUle5IQ82V0ay4[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx186][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_bus_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_up_to_riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_down_bus_a_payload_opcode;
    __Vtableidx440 = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_input_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_input_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx440][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_input_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx440][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_input_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx440][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_input_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx440][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__io_push_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__io_input_a_payload_opcode;
    __Vtableidx124 = vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx124][0U];
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx124][1U];
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx124][2U];
    vlSelfRef.PulseTableSoc__DOT__readoutEnvBus_to_riscqArea_riscqCores_0_readoutMemFiber_up_down_bus_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx124][3U];
    __Vtableidx108 = vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx108][0U];
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx108][1U];
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx108][2U];
    vlSelfRef.PulseTableSoc__DOT__pulseMemBus_to_riscqArea_riscqCores_0_pulseMemFiber_up_down_bus_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx108][3U];
    __Vtableidx140 = vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx140][0U];
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx140][1U];
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx140][2U];
    vlSelfRef.PulseTableSoc__DOT__demodEnvBus_to_riscqArea_riscqCores_0_demodMemFiber_up_down_bus_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx140][3U];
    vlSelfRef.PulseTableSoc__DOT__bridge_down_bus_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_noDecoder_toDown_d_payload_param;
    __Vtableidx222 = vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_down_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_down_bus_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx222][0U];
    vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_down_bus_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx222][1U];
    vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_down_bus_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx222][2U];
    vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_down_bus_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx222][3U];
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_up_bus_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__robs_up_to_robs_ramFibers_0_ramFiber_up_down_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_bus_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_noDecoder_toDown_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_noDecoder_toDown_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_bus_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_down_bus_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_down_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_bus_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_up_bus_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_0_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_up_bus_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_1_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_up_bus_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_2_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_up_bus_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_3_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_up_bus_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_5_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_up_bus_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_4_a_payload_data;
    __Vtableidx481 = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_0_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_0_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx481][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_0_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx481][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_0_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx481][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_0_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx481][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_0_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_0_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_up_bus_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_0_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_up_bus_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_1_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_up_bus_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_2_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_up_bus_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_3_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_up_bus_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_5_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_up_bus_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_4_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_up_bus_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_0_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_up_bus_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_1_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_up_bus_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_2_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_up_bus_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_3_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_up_bus_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_5_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_up_bus_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_4_a_payload_param;
    __Vtableidx483 = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_1_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_1_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx483][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_1_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx483][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_1_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx483][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_1_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx483][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_1_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_1_d_payload_opcode;
    __Vtableidx485 = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_2_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_2_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx485][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_2_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx485][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_2_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx485][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_2_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx485][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_2_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_2_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_up_bus_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_0_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_up_bus_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_1_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_up_bus_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_2_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_up_bus_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_3_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_up_bus_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_5_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_up_bus_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_4_a_payload_corrupt;
    __Vtableidx491 = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_5_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_5_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx491][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_5_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx491][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_5_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx491][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_5_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx491][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_5_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_5_d_payload_opcode;
    __Vtableidx487 = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_3_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_3_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx487][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_3_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx487][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_3_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx487][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_3_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx487][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_3_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_3_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_up_bus_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_0_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_up_bus_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_1_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_up_bus_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_2_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_up_bus_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_3_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_up_bus_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_5_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_up_bus_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_4_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_down_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_bus_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_bus_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_up_to_riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_down_bus_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_up_bus_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_0_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_up_bus_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_1_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_up_bus_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_2_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_up_bus_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_3_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_up_bus_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_5_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_up_bus_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_4_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_noDecoder_toDown_d_payload_source;
    __Vtableidx16 = vlSelfRef.PulseTableSoc__DOT__bridge_down_noDecoder_toDown_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_noDecoder_toDown_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx16][0U];
    vlSelfRef.PulseTableSoc__DOT__bridge_down_noDecoder_toDown_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx16][1U];
    vlSelfRef.PulseTableSoc__DOT__bridge_down_noDecoder_toDown_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx16][2U];
    vlSelfRef.PulseTableSoc__DOT__bridge_down_noDecoder_toDown_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx16][3U];
    vlSelfRef.PulseTableSoc__DOT__bridge_down_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_noDecoder_toDown_d_payload_opcode;
    __Vtableidx169 = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx169][0U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx169][1U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx169][2U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_down_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx169][3U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_down_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_down_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_0_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_0_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_1_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_1_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_2_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_2_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_3_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_3_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_5_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_5_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_4_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_4_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_up_bus_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_0_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_up_bus_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_1_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_up_bus_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_2_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_up_bus_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_3_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_up_bus_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_5_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_up_bus_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_4_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__a_miss 
        = (1U & (~ ((IData)(vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__a_logic_5_hit) 
                    | ((IData)(vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__a_logic_4_hit) 
                       | ((IData)(vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__a_logic_3_hit) 
                          | ((IData)(vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__a_logic_2_hit) 
                             | ((IData)(vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__a_logic_0_hit) 
                                | (IData)(vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__a_logic_1_hit))))))));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_bus_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_bus_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_bus_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_bus_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_bus_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_bus_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__io_up_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_up_bus_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__io_up_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_up_bus_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_bus_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_bus_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_bus_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_bus_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_bus_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_bus_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__io_up_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_up_bus_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__io_up_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_up_bus_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__io_up_a_payload_data[0U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_up_bus_a_payload_data[0U];
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__io_up_a_payload_data[1U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_up_bus_a_payload_data[1U];
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__io_up_a_payload_data[2U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_up_bus_a_payload_data[2U];
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__io_up_a_payload_data[3U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_up_bus_a_payload_data[3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_bus_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_bus_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_bus_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__io_up_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_up_bus_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__io_up_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_up_bus_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_bus_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_bus_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_bus_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_bus_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_down_d_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_bus_d_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_1_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter_io_inputs_1_payload_size;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_2_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter_io_inputs_2_payload_size;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_0_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter_io_inputs_0_payload_size;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_down_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_bus_d_payload_data;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_5_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter_io_inputs_5_payload_size;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_up_d_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_down_d_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_up_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_down_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_up_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_down_d_payload_denied;
    __Vtableidx172 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_bus_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx172][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_bus_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx172][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_bus_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx172][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_bus_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx172][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_bus_a_payload_opcode;
    __Vtableidx178 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_bus_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx178][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_bus_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx178][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_bus_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx178][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_bus_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx178][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_up_bus_a_payload_opcode;
    __Vtableidx184 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_bus_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx184][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_bus_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx184][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_bus_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx184][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_bus_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx184][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_up_bus_a_payload_opcode;
    __Vtableidx444 = vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__io_push_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__io_push_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx444][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__io_push_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx444][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__io_push_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx444][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__io_push_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx444][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT___zz_ram_port_1[0U] 
        = ((((IData)(vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__io_push_payload_mask) 
             << 0x0000001cU) | ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__io_push_payload_size) 
                                << 0x00000019U)) | 
           (((IData)(vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__io_push_payload_address) 
             << 9U) | (((IData)(vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__io_push_payload_source) 
                        << 6U) | (((IData)(vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__io_push_payload_param) 
                                   << 3U) | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__io_push_payload_opcode)))));
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT___zz_ram_port_1[1U] 
        = (IData)((((QData)((IData)(vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__io_push_payload_corrupt)) 
                    << 0x00000020U) | (QData)((IData)(vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__io_push_payload_data))));
    vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT___zz_ram_port_1[2U] 
        = (1U & (IData)(((((QData)((IData)(vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__io_push_payload_corrupt)) 
                           << 0x00000020U) | (QData)((IData)(vlSelfRef.PulseTableSoc__DOT__riscqMemBus_to_riscqArea_riscqCores_0_iMemLoad_up_cc__DOT__a_1__DOT__io_push_payload_data))) 
                         >> 0x00000020U)));
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_down_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_bus_d_payload_param;
    __Vtableidx220 = vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_up_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_up_bus_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx220][0U];
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_up_bus_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx220][1U];
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_up_bus_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx220][2U];
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_up_bus_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx220][3U];
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__io_up_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_up_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_down_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_bus_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_down_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_bus_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_bus_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_up_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_down_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_up_bus_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_up_bus_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_up_bus_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_up_bus_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_up_bus_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_down_bus_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_up_bus_a_payload_data;
    __Vtableidx493 = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_0_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_0_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx493][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_0_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx493][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_0_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx493][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_0_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx493][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_up_bus_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_up_bus_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_up_bus_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_up_bus_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_up_bus_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_down_bus_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_up_bus_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_up_bus_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_up_bus_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_up_bus_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_up_bus_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_up_bus_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_down_bus_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_up_bus_a_payload_param;
    __Vtableidx494 = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_1_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_1_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx494][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_1_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx494][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_1_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx494][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_1_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx494][3U];
    __Vtableidx495 = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_2_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_2_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx495][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_2_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx495][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_2_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx495][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_2_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx495][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_up_bus_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_up_bus_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_up_bus_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_up_bus_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_up_bus_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_down_bus_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_up_bus_a_payload_corrupt;
    __Vtableidx498 = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_5_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_5_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx498][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_5_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx498][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_5_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx498][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_5_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx498][3U];
    __Vtableidx496 = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_3_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_3_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx496][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_3_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx496][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_3_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx496][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_3_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx496][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_up_bus_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_up_bus_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_up_bus_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_up_bus_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_up_bus_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_down_bus_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_up_bus_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_up_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_down_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_d_ctx__DOT__io_query_id 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_down_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_up_bus_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_up_bus_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_up_bus_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_up_bus_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_up_bus_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_up_bus_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_down_bus_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_up_bus_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_down_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_bus_d_payload_source;
    __Vtableidx10 = vlSelfRef.PulseTableSoc__DOT__bridge_down_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx10][0U];
    vlSelfRef.PulseTableSoc__DOT__bridge_down_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx10][1U];
    vlSelfRef.PulseTableSoc__DOT__bridge_down_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx10][2U];
    vlSelfRef.PulseTableSoc__DOT__bridge_down_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx10][3U];
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_down_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_bus_d_payload_opcode;
    __Vtableidx462 = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_down_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_down_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx462][0U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_down_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx462][1U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_down_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx462][2U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_down_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx462][3U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_up_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_down_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_up_bus_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_0_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_up_bus_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_1_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_up_bus_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_2_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_up_bus_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_3_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_up_bus_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_5_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_up_bus_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core_io_downs_4_a_payload_address;
    __Vtableidx224 = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_up_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_up_bus_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx224][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_up_bus_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx224][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_up_bus_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx224][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_up_bus_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx224][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_up_bus_a_payload_opcode;
    __Vtableidx226 = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_up_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_up_bus_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx226][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_up_bus_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx226][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_up_bus_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx226][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_up_bus_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx226][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_up_bus_a_payload_opcode;
    __Vtableidx228 = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_up_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_up_bus_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx228][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_up_bus_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx228][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_up_bus_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx228][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_up_bus_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx228][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_up_bus_a_payload_opcode;
    __Vtableidx230 = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_up_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_up_bus_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx230][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_up_bus_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx230][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_up_bus_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx230][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_up_bus_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx230][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_up_bus_a_payload_opcode;
    __Vtableidx234 = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_up_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_up_bus_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx234][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_up_bus_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx234][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_up_bus_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx234][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_up_bus_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx234][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_up_bus_a_payload_opcode;
    __Vtableidx232 = vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_up_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_up_bus_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx232][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_up_bus_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx232][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_up_bus_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx232][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_up_bus_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx232][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_down_bus_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_up_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__cmd_cmdLogic_SOURCE 
        = vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__io_up_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__cmd_cmdLogic_SIZE 
        = vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__io_up_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__io_port_wdata[0U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__io_up_a_payload_data[0U];
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__io_port_wdata[1U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__io_up_a_payload_data[1U];
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__io_port_wdata[2U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__io_up_a_payload_data[2U];
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__io_port_wdata[3U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__io_up_a_payload_data[3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_port_payload_data[0U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_port_payload_data[1U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_port_payload_data[2U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_port_payload_data[3U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_port_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_port_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__io_port_mask 
        = vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__io_up_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__cmdLogic_addressShifted 
        = (0x000003ffU & ((IData)(vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__io_up_a_payload_address) 
                          >> 4U));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__addressShifted 
        = (0x000003ffU & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_a_payload_address) 
                          >> 2U));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__mask_0 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__addressShifted 
        = (0x000003ffU & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_a_payload_address) 
                          >> 2U));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__mask_0 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__ups_0_d_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_down_d_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__ups_0_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_down_d_payload_data;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge_io_up_d_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_up_d_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge_io_up_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_up_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge_io_up_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_up_d_payload_denied;
    __Vtableidx428 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx428][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx428][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx428][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx428][3U];
    __Vtableidx432 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx432][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx432][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx432][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx432][3U];
    __Vtableidx436 = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx436][0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx436][1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx436][2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx436][3U];
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__ups_0_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_down_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__ups_1_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_down_d_payload_param;
    __Vtableidx501 = vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__io_up_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__io_up_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx501][0U];
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__io_up_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx501][1U];
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__io_up_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx501][2U];
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__io_up_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx501][3U];
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__cmd_cmdLogic_IS_GET 
        = (4U == (IData)(vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__io_up_a_payload_opcode));
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__ups_0_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_down_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__ups_1_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_down_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__ups_1_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_down_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__ups_0_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_down_d_payload_size;
    __Vtableidx458 = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_up_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT___zz_upsize_d_ctrl_burstLast 
        = Vtop__ConstPool__TABLE_h2c29b9d4_0[__Vtableidx458];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge_io_up_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_up_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_up_bus_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_down_bus_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_up_bus_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_down_bus_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_up_bus_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_down_bus_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_up_bus_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_down_bus_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_up_bus_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_down_bus_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_d_ctx__DOT__io_remove_payload_id 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_up_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge_io_up_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_up_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_d_ctx__DOT__read_address 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_d_ctx__DOT__io_query_id;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__addressShifted 
        = (0x000003ffU & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_a_payload_address) 
                          >> 4U));
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__sel 
        = (3U & ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_a_payload_address) 
                 >> 2U));
    vlSelfRef.PulseTableSoc__DOT__robAdapter_up_bus_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_down_bus_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__ups_1_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_down_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__ups_0_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_down_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__d_sel 
        = (1U & ((IData)(vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_down_d_payload_source) 
                 >> 2U));
    __Vtableidx418 = vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_down_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_down_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx418][0U];
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_down_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx418][1U];
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_down_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx418][2U];
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_down_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx418][3U];
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__ups_1_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_down_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__ups_0_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_down_d_payload_opcode;
    __Vtableidx460 = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_up_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_up_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx460][0U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_up_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx460][1U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_up_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx460][2U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_up_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx460][3U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge_io_up_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_up_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_up_bus_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_up_bus_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_up_bus_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_up_bus_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_up_bus_a_payload_address;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_down_bus_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_up_bus_a_payload_address;
    __Vtableidx27 = vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx27][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx27][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx27][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_pulseMemBus_down_bus_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx27][3U];
    __Vtableidx43 = vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx43][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx43][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx43][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_readoutEnvBus_down_bus_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx43][3U];
    __Vtableidx59 = vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx59][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx59][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx59][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_demodEnvBus_down_bus_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx59][3U];
    __Vtableidx75 = vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx75][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx75][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx75][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_riscqMemBus_down_bus_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx75][3U];
    __Vtableidx91 = vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx91][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx91][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx91][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_hostCtrlDriver_up_down_bus_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx91][3U];
    __Vtableidx210 = vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_down_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_down_bus_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx210][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_down_bus_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx210][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_down_bus_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx210][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_down_bus_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx210][3U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_up_bus_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_down_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic_io_port_wdata[0U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__io_port_wdata[0U];
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic_io_port_wdata[1U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__io_port_wdata[1U];
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic_io_port_wdata[2U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__io_port_wdata[2U];
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic_io_port_wdata[3U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__io_port_wdata[3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic_io_port_payload_data[0U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_port_payload_data[0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic_io_port_payload_data[1U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_port_payload_data[1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic_io_port_payload_data[2U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_port_payload_data[2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic_io_port_payload_data[3U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_port_payload_data[3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic_io_port_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_port_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic_io_port_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_port_payload_data;
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic_io_port_mask 
        = vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__io_port_mask;
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__io_port_address 
        = vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__cmdLogic_addressShifted;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_port_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__addressShifted;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_port_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__mask_0;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_port_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__addressShifted;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_port_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__mask_0;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_ups_0_d_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__ups_0_d_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_ups_0_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__ups_0_d_payload_data;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_up_bus_d_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge_io_up_d_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_up_bus_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge_io_up_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_up_bus_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge_io_up_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_ups_0_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__ups_0_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_ups_1_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__ups_1_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__io_port_write 
        = (1U & (~ (IData)(vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__cmd_cmdLogic_IS_GET)));
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_ups_0_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__ups_0_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_ups_1_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__ups_1_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_ups_1_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__ups_1_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_ups_0_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__ups_0_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_up_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge_io_up_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_up_a_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_up_bus_a_payload_data;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_up_a_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_up_bus_a_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_up_a_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_up_bus_a_payload_param;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_up_a_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_up_bus_a_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_up_a_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_up_bus_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_up_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge_io_up_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_port_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__addressShifted;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT___zz_1 
        = (0x0000000fU & ((IData)(1U) << (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__sel)));
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_up_a_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_up_bus_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_ups_1_d_payload_source 
        = (3U & (IData)(vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__ups_1_d_payload_source));
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_ups_0_d_payload_source 
        = (3U & (IData)(vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__ups_0_d_payload_source));
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT___zz_io_down_d_ready 
        = ((IData)(vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__d_sel)
            ? (IData)(vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__ups_1_d_ready)
            : (IData)(vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__ups_0_d_ready));
    __Vtableidx422 = vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__ups_1_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__ups_1_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx422][0U];
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__ups_1_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx422][1U];
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__ups_1_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx422][2U];
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__ups_1_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx422][3U];
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_ups_1_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__ups_1_d_payload_opcode;
    __Vtableidx420 = vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__ups_0_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__ups_0_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx420][0U];
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__ups_0_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx420][1U];
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__ups_0_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx420][2U];
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__ups_0_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx420][3U];
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_ups_0_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__ups_0_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_up_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge_io_up_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_up_bus_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_down_bus_a_payload_address;
    __Vtableidx208 = vlSelfRef.PulseTableSoc__DOT__robAdapter_up_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_up_bus_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx208][0U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_up_bus_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx208][1U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_up_bus_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx208][2U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_up_bus_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx208][3U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_up_a_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_up_bus_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__io_port1_wdata[0U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic_io_port_wdata[0U];
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__io_port1_wdata[1U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic_io_port_wdata[1U];
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__io_port1_wdata[2U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic_io_port_wdata[2U];
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__io_port1_wdata[3U] 
        = vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic_io_port_wdata[3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_flow_payload_data[0U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic_io_port_payload_data[0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_flow_payload_data[1U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic_io_port_payload_data[1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_flow_payload_data[2U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic_io_port_payload_data[2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_flow_payload_data[3U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic_io_port_payload_data[3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_flow_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic_io_port_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_flow_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic_io_port_payload_data;
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__io_port1_mask 
        = vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic_io_port_mask;
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic_io_port_address 
        = vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__io_port_address;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic_io_port_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_port_payload_address;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic_io_port_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_port_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic_io_port_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_port_payload_address;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic_io_port_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_port_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core_io_ups_0_d_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_ups_0_d_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core_io_ups_0_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_ups_0_d_payload_data;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_down_bus_d_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_up_bus_d_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_down_bus_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_up_bus_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_down_bus_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_up_bus_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core_io_ups_0_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_ups_0_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core_io_ups_1_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_ups_1_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic_io_port_write 
        = vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic__DOT__io_port_write;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core_io_ups_0_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_ups_0_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core_io_ups_1_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_ups_1_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core_io_ups_1_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_ups_1_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core_io_ups_0_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_ups_0_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_down_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_up_bus_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_d_ctx__DOT__io_add_payload_id 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_up_a_payload_source;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_down_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_up_bus_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic_io_port_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_port_payload_address;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__mask_0 = 0U;
    if ((1U & (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT___zz_1))) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__mask_0 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_a_payload_mask;
    }
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__mask_1 = 0U;
    if ((2U & (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT___zz_1))) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__mask_1 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_a_payload_mask;
    }
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__mask_2 = 0U;
    if ((4U & (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT___zz_1))) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__mask_2 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_a_payload_mask;
    }
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__mask_3 = 0U;
    if ((8U & (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT___zz_1))) {
        vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__mask_3 
            = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_up_a_payload_mask;
    }
    __Vtableidx457 = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_up_a_payload_size;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT___zz_io_up_a_tracker_last 
        = Vtop__ConstPool__TABLE_h2c29b9d4_0[__Vtableidx457];
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core_io_ups_1_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_ups_1_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core_io_ups_0_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_ups_0_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_down_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT___zz_io_down_d_ready;
    __Vtableidx416 = vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_ups_1_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_ups_1_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx416][0U];
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_ups_1_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx416][1U];
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_ups_1_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx416][2U];
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_ups_1_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx416][3U];
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core_io_ups_1_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_ups_1_d_payload_opcode;
    __Vtableidx414 = vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_ups_0_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_ups_0_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx414][0U];
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_ups_0_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx414][1U];
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_ups_0_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx414][2U];
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_ups_0_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx414][3U];
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core_io_ups_0_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_ups_0_d_payload_opcode;
    __Vtableidx209 = vlSelfRef.PulseTableSoc__DOT__robAdapter_up_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_up_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx209][0U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_up_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx209][1U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_up_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx209][2U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_up_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx209][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_down_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_up_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_up_a_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_up_bus_a_payload_address;
    __Vtableidx459 = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_up_a_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_up_a_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx459][0U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_up_a_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx459][1U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_up_a_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx459][2U];
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__io_up_a_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hf045776a_0[__Vtableidx459][3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__io_port1_wdata[0U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_flow_payload_data[0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__io_port1_wdata[1U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_flow_payload_data[1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__io_port1_wdata[2U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_flow_payload_data[2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__io_port1_wdata[3U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_flow_payload_data[3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_rams_0__DOT__io_port1_wdata 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_flow_payload_data;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_rams_0__DOT__io_port1_wdata 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_flow_payload_data;
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__io_port1_address 
        = vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic_io_port_address;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_flow_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic_io_port_payload_address;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_flow_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_fiber_thread_logic_io_port_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_flow_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic_io_port_payload_address;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_flow_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_fiber_thread_logic_io_port_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__bridge_downRead_to_bridge_down_down_bus_d_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core_io_ups_0_d_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__bridge_downRead_to_bridge_down_down_bus_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core_io_ups_0_d_payload_data;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_up_bus_d_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_down_bus_d_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_up_bus_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_down_bus_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_up_bus_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_down_bus_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__bridge_downRead_to_bridge_down_down_bus_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core_io_ups_0_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_to_bridge_down_down_bus_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core_io_ups_1_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__io_port1_write 
        = vlSelfRef.PulseTableSoc__DOT__robs_ramFibers_0_ramFiber_thread_logic_io_port_write;
    vlSelfRef.PulseTableSoc__DOT__bridge_downRead_to_bridge_down_down_bus_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core_io_ups_0_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_to_bridge_down_down_bus_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core_io_ups_1_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_to_bridge_down_down_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core_io_ups_1_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__bridge_downRead_to_bridge_down_down_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core_io_ups_0_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_up_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_down_bus_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_d_ctx__DOT__write_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__robAdapter_logic_bridge__DOT__upsize_d_ctx__DOT__io_add_payload_id;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_up_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_down_bus_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_flow_payload_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic_io_port_payload_address;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_port_payload_mask 
        = ((((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__mask_3) 
             << 0x0000000cU) | ((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__mask_2) 
                                << 8U)) | (((IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__mask_1) 
                                            << 4U) 
                                           | (IData)(vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__mask_0)));
    vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_to_bridge_down_down_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core_io_ups_1_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__bridge_downRead_to_bridge_down_down_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core_io_ups_0_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core_io_down_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core__DOT__io_down_d_ready;
    vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_to_bridge_down_down_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core_io_ups_1_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__bridge_downRead_to_bridge_down_down_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core_io_ups_0_d_payload_opcode;
    __Vtableidx211 = vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_down_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_down_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx211][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_down_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx211][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_down_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx211][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_down_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx211][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_up_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_down_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__bram_4__DOT__dinb[0U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__io_port1_wdata[0U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__bram_4__DOT__dinb[1U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__io_port1_wdata[1U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__bram_4__DOT__dinb[2U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__io_port1_wdata[2U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__bram_4__DOT__dinb[3U] 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__io_port1_wdata[3U];
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_rams_0__DOT__bram_4__DOT__dinb 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_rams_0__DOT__io_port1_wdata;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_rams_0__DOT__bram_4__DOT__dinb 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_rams_0__DOT__io_port1_wdata;
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4_addrb 
        = vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__io_port1_address;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_rams_0__DOT__io_port1_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_flow_payload_address;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_rams_0__DOT__io_port1_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_ramFibers_0_flow_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_rams_0__DOT__io_port1_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_flow_payload_address;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_rams_0__DOT__io_port1_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_ramFibers_0_flow_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__bridge_downRead_to_bridge_down_up_bus_d_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__bridge_downRead_to_bridge_down_down_bus_d_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__bridge_downRead_to_bridge_down_up_bus_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__bridge_downRead_to_bridge_down_down_bus_d_payload_data;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_4_d_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_up_bus_d_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_4_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_up_bus_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_4_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_up_bus_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__bridge_downRead_to_bridge_down_up_bus_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__bridge_downRead_to_bridge_down_down_bus_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_to_bridge_down_up_bus_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_to_bridge_down_down_bus_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__bram_4_web 
        = ((IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__io_port1_mask) 
           & (- (IData)((IData)(vlSelfRef.PulseTableSoc__DOT__robs_rams_0__DOT__io_port1_write))));
    vlSelfRef.PulseTableSoc__DOT__bridge_downRead_to_bridge_down_up_bus_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__bridge_downRead_to_bridge_down_down_bus_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_to_bridge_down_up_bus_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_to_bridge_down_down_bus_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_to_bridge_down_up_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_to_bridge_down_down_bus_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__bridge_downRead_to_bridge_down_up_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__bridge_downRead_to_bridge_down_down_bus_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_4_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_up_bus_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_4_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_up_bus_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__io_port1_address 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_flow_payload_address;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic_io_port_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic__DOT__io_port_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_to_bridge_down_up_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_to_bridge_down_down_bus_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__bridge_downRead_to_bridge_down_up_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__bridge_downRead_to_bridge_down_down_bus_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_bus_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_arbiter_core_io_down_d_ready;
    __Vtableidx14 = vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_to_bridge_down_down_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_to_bridge_down_down_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx14][0U];
    vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_to_bridge_down_down_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx14][1U];
    vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_to_bridge_down_down_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx14][2U];
    vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_to_bridge_down_down_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx14][3U];
    vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_to_bridge_down_up_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_to_bridge_down_down_bus_d_payload_opcode;
    __Vtableidx12 = vlSelfRef.PulseTableSoc__DOT__bridge_downRead_to_bridge_down_down_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__bridge_downRead_to_bridge_down_down_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx12][0U];
    vlSelfRef.PulseTableSoc__DOT__bridge_downRead_to_bridge_down_down_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx12][1U];
    vlSelfRef.PulseTableSoc__DOT__bridge_downRead_to_bridge_down_down_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx12][2U];
    vlSelfRef.PulseTableSoc__DOT__bridge_downRead_to_bridge_down_down_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx12][3U];
    vlSelfRef.PulseTableSoc__DOT__bridge_downRead_to_bridge_down_up_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__bridge_downRead_to_bridge_down_down_bus_d_payload_opcode;
    __Vtableidx233 = vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_up_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_up_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx233][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_up_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx233][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_up_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx233][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_up_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx233][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_4_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_to_robAdapter_up_up_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_rams_0__DOT__bram_4_addrb 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_rams_0__DOT__io_port1_address;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_rams_0__DOT__bram_4_web 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_rams_0__DOT__io_port1_mask;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_rams_0__DOT__bram_4_addrb 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_rams_0__DOT__io_port1_address;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_rams_0__DOT__bram_4_web 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_rams_0__DOT__io_port1_mask;
    vlSelfRef.PulseTableSoc__DOT__bridge_downRead_noDecoder_toDown_d_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__bridge_downRead_to_bridge_down_up_bus_d_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__bridge_downRead_noDecoder_toDown_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__bridge_downRead_to_bridge_down_up_bus_d_payload_data;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_4_d_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_4_d_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_4_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_4_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_4_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_4_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__bridge_downRead_noDecoder_toDown_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__bridge_downRead_to_bridge_down_up_bus_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_noDecoder_toDown_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_to_bridge_down_up_bus_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__bridge_downRead_noDecoder_toDown_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__bridge_downRead_to_bridge_down_up_bus_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_noDecoder_toDown_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_to_bridge_down_up_bus_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_noDecoder_toDown_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_to_bridge_down_up_bus_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__bridge_downRead_noDecoder_toDown_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__bridge_downRead_to_bridge_down_up_bus_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_4_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_4_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_4_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_4_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__bram_4_addrb 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__io_port1_address;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_flow_payload_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_fiber_thread_logic_io_port_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_noDecoder_toDown_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_to_bridge_down_up_bus_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__bridge_downRead_noDecoder_toDown_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__bridge_downRead_to_bridge_down_up_bus_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_noDecoder_toDown_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_bus_d_ready;
    __Vtableidx24 = vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_to_bridge_down_up_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_to_bridge_down_up_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx24][0U];
    vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_to_bridge_down_up_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx24][1U];
    vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_to_bridge_down_up_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx24][2U];
    vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_to_bridge_down_up_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx24][3U];
    vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_noDecoder_toDown_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_to_bridge_down_up_bus_d_payload_opcode;
    __Vtableidx22 = vlSelfRef.PulseTableSoc__DOT__bridge_downRead_to_bridge_down_up_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__bridge_downRead_to_bridge_down_up_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx22][0U];
    vlSelfRef.PulseTableSoc__DOT__bridge_downRead_to_bridge_down_up_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx22][1U];
    vlSelfRef.PulseTableSoc__DOT__bridge_downRead_to_bridge_down_up_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx22][2U];
    vlSelfRef.PulseTableSoc__DOT__bridge_downRead_to_bridge_down_up_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx22][3U];
    vlSelfRef.PulseTableSoc__DOT__bridge_downRead_noDecoder_toDown_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__bridge_downRead_to_bridge_down_up_bus_d_payload_opcode;
    __Vtableidx477 = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_4_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_4_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx477][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_4_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx477][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_4_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx477][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_4_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx477][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_4_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__io_downs_4_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_rams_0__DOT__bram_4__DOT__addrb 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_rams_0__DOT__bram_4_addrb;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_rams_0__DOT__bram_4__DOT__web 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_demodMemFiber_rams_0__DOT__bram_4_web;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_rams_0__DOT__bram_4__DOT__addrb 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_rams_0__DOT__bram_4_addrb;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_rams_0__DOT__bram_4__DOT__web 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_readoutMemFiber_rams_0__DOT__bram_4_web;
    vlSelfRef.PulseTableSoc__DOT__bridge_downRead_bus_d_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__bridge_downRead_noDecoder_toDown_d_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__bridge_downRead_bus_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__bridge_downRead_noDecoder_toDown_d_payload_data;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_4_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_4_d_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_4_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_4_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_4_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_4_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__bridge_downRead_bus_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__bridge_downRead_noDecoder_toDown_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_bus_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_noDecoder_toDown_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__bridge_downRead_bus_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__bridge_downRead_noDecoder_toDown_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_bus_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_noDecoder_toDown_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_noDecoder_toDown_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__bridge_downRead_bus_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__bridge_downRead_noDecoder_toDown_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_4_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_4_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_4_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_4_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__bram_4__DOT__addrb 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__bram_4_addrb;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__io_port1_mask 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_ramFibers_0_flow_payload_mask;
    vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_noDecoder_toDown_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__bridge_downRead_bus_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__bridge_downRead_noDecoder_toDown_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_to_hostBus_up_bus_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_noDecoder_toDown_d_ready;
    __Vtableidx8 = vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_noDecoder_toDown_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_noDecoder_toDown_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx8][0U];
    vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_noDecoder_toDown_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx8][1U];
    vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_noDecoder_toDown_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx8][2U];
    vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_noDecoder_toDown_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx8][3U];
    vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_noDecoder_toDown_d_payload_opcode;
    __Vtableidx4 = vlSelfRef.PulseTableSoc__DOT__bridge_downRead_noDecoder_toDown_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__bridge_downRead_noDecoder_toDown_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx4][0U];
    vlSelfRef.PulseTableSoc__DOT__bridge_downRead_noDecoder_toDown_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx4][1U];
    vlSelfRef.PulseTableSoc__DOT__bridge_downRead_noDecoder_toDown_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx4][2U];
    vlSelfRef.PulseTableSoc__DOT__bridge_downRead_noDecoder_toDown_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx4][3U];
    vlSelfRef.PulseTableSoc__DOT__bridge_downRead_bus_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__bridge_downRead_noDecoder_toDown_d_payload_opcode;
    __Vtableidx489 = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_4_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_4_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx489][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_4_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx489][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_4_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx489][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_4_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx489][3U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_4_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__downs_4_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__io_down_d_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__bridge_downRead_bus_d_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__io_down_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__bridge_downRead_bus_d_payload_data;
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__io_down_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__bridge_downRead_bus_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__io_down_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_bus_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__io_down_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__bridge_downRead_bus_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__io_down_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_bus_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__io_down_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_bus_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__io_down_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__bridge_downRead_bus_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__bram_4_web 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__io_port1_mask;
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__io_down_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_bus_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__io_down_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__bridge_downRead_bus_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__bridge_down_to_hostBus_down_bus_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_to_hostBus_up_bus_d_ready;
    __Vtableidx6 = vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx6][0U];
    vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx6][1U];
    vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx6][2U];
    vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx6][3U];
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__io_down_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__bridge_downWrite_bus_d_payload_opcode;
    __Vtableidx2 = vlSelfRef.PulseTableSoc__DOT__bridge_downRead_bus_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__bridge_downRead_bus_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx2][0U];
    vlSelfRef.PulseTableSoc__DOT__bridge_downRead_bus_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx2][1U];
    vlSelfRef.PulseTableSoc__DOT__bridge_downRead_bus_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx2][2U];
    vlSelfRef.PulseTableSoc__DOT__bridge_downRead_bus_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx2][3U];
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__io_down_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__bridge_downRead_bus_d_payload_opcode;
    __Vtableidx497 = vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_4_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_4_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx497][0U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_4_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx497][1U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_4_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx497][2U];
    vlSelfRef.PulseTableSoc__DOT__hostBus_decoder_core__DOT__d_arbiter__DOT__io_inputs_4_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx497][3U];
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__toTileink__DOT__io_down_d_payload_corrupt 
        = vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__io_down_d_payload_corrupt;
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__toTileink__DOT__io_down_d_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__io_down_d_payload_data;
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__toTileink__DOT__io_down_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__io_down_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__toTileink__DOT__io_down_d_payload_param 
        = vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__io_down_d_payload_param;
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__toTileink__DOT__io_down_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__io_down_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__toTileink__DOT__io_down_d_payload_denied 
        = vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__io_down_d_payload_denied;
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__toTileink__DOT__io_down_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__io_down_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__toTileink__DOT__io_down_d_payload_size 
        = vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__io_down_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__bram_4__DOT__web 
        = vlSelfRef.PulseTableSoc__DOT__riscqArea_riscqCores_0_pulseMemFiber_rams_0__DOT__bram_4_web;
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__toTileink__DOT__io_down_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__io_down_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__toTileink__DOT__io_down_d_payload_source 
        = vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__io_down_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__hostBus_bus_d_ready 
        = vlSelfRef.PulseTableSoc__DOT__bridge_down_to_hostBus_down_bus_d_ready;
    __Vtableidx411 = vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__io_down_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__io_down_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx411][0U];
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__io_down_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx411][1U];
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__io_down_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx411][2U];
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__io_down_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx411][3U];
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__toTileink__DOT__io_down_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__io_down_d_payload_opcode;
    __Vtableidx408 = vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__io_down_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__io_down_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx408][0U];
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__io_down_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx408][1U];
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__io_down_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx408][2U];
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__io_down_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx408][3U];
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__toTileink__DOT__io_down_d_payload_opcode 
        = vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__io_down_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__toTileink__DOT__io_up_r_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__toTileink__DOT__io_down_d_payload_data;
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__toTileink__DOT__io_up_r_payload_resp = 0U;
    if (vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__toTileink__DOT__io_down_d_payload_denied) {
        vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__toTileink__DOT__io_up_r_payload_resp = 2U;
    }
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__toTileink__DOT__io_up_b_payload_resp = 0U;
    if (vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__toTileink__DOT__io_down_d_payload_denied) {
        vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__toTileink__DOT__io_up_b_payload_resp = 2U;
    }
    __Vtableidx409 = vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__toTileink__DOT__io_down_d_payload_size;
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__toTileink__DOT___zz_io_down_d_tracker_last 
        = Vtop__ConstPool__TABLE_hea0c1b06_0[__Vtableidx409];
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__toTileink__DOT__io_up_b_payload_id 
        = vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__toTileink__DOT__io_down_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__toTileink__DOT__io_up_r_payload_id 
        = vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__toTileink__DOT__io_down_d_payload_source;
    vlSelfRef.PulseTableSoc__DOT__io_up_d_s2mPipe_m2sPipe_ready 
        = vlSelfRef.PulseTableSoc__DOT__hostBus_bus_d_ready;
    __Vtableidx412 = vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__toTileink__DOT__io_down_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__toTileink__DOT__io_down_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx412][0U];
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__toTileink__DOT__io_down_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx412][1U];
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__toTileink__DOT__io_down_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx412][2U];
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__toTileink__DOT__io_down_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx412][3U];
    __Vtableidx410 = vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__toTileink__DOT__io_down_d_payload_opcode;
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__toTileink__DOT__io_down_d_payload_opcode_string[0U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx410][0U];
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__toTileink__DOT__io_down_d_payload_opcode_string[1U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx410][1U];
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__toTileink__DOT__io_down_d_payload_opcode_string[2U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx410][2U];
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__toTileink__DOT__io_down_d_payload_opcode_string[3U] 
        = Vtop__ConstPool__TABLE_hc5d7960e_0[__Vtableidx410][3U];
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__toTileink_io_up_r_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__toTileink__DOT__io_up_r_payload_data;
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__toTileink_io_up_r_payload_resp 
        = vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__toTileink__DOT__io_up_r_payload_resp;
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__toTileink_io_up_b_payload_resp 
        = vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__toTileink__DOT__io_up_b_payload_resp;
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__toTileink_io_up_b_payload_id 
        = vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__toTileink__DOT__io_up_b_payload_id;
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__toTileink_io_up_r_payload_id 
        = vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__toTileink__DOT__io_up_r_payload_id;
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__io_down_r_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__toTileink_io_up_r_payload_data;
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__io_down_r_payload_resp 
        = vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__toTileink_io_up_r_payload_resp;
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__aligner__DOT__io_down_b_payload_resp 
        = vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__toTileink_io_up_b_payload_resp;
    vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__aligner__DOT__io_down_b_payload_id 
        = vlSelfRef.PulseTableSoc__DOT__bridge_write_bridge__DOT__toTileink_io_up_b_payload_id;
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__io_down_r_payload_id 
        = vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__toTileink_io_up_r_payload_id;
    vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__rData_write_payload_data 
        = vlSelfRef.PulseTableSoc__DOT__bridge_read_bridge__DOT__aligner__DOT__io_down_r_payload_data;
}

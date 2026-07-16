// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop_PulseGenerator___ctor_var_reset(Vtop_PulseGenerator* vlSelf);

Vtop_PulseGenerator::Vtop_PulseGenerator() = default;
Vtop_PulseGenerator::~Vtop_PulseGenerator() = default;

void Vtop_PulseGenerator::ctor(Vtop__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtop_PulseGenerator___ctor_var_reset(this);
}

void Vtop_PulseGenerator::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtop_PulseGenerator::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}

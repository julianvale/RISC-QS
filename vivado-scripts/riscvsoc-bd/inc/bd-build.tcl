# ===========================================================================================
# Assemble the block design: platform clocking + Zynq PS + user top IP + proc_sys_resets + RF Data
# Converter + AXI SmartConnect. Cell handles are published at script scope for bd-finalize.tcl.
# ===========================================================================================

create_bd_design -dir $BUILD_DIR/bd $BD_NAME

# ---- ZCU216-only external clock wrapper ----------------------------------------------------
if {$USE_CLOCK_INTERFACE} {
  set CLKIFC [create_bd_cell -type module -reference ClockInterface clkifc]
  create_bd_intf_port -mode Slave -vlnv xilinx.com:interface:diff_clock_rtl:1.0 dspClk
  connect_bd_intf_net [get_bd_intf_ports dspClk] [get_bd_intf_pins $CLKIFC/dspClk_diff]
  create_bd_intf_port -mode Slave -vlnv xilinx.com:interface:diff_clock_rtl:1.0 hostClk
  connect_bd_intf_net [get_bd_intf_ports hostClk] [get_bd_intf_pins $CLKIFC/hostClk_diff]
  create_bd_intf_port -mode Slave -vlnv xilinx.com:interface:diff_clock_rtl:1.0 user_sysref
  connect_bd_intf_net [get_bd_intf_ports user_sysref] [get_bd_intf_pins $CLKIFC/user_sysref_diff]
  set_property -dict [list CONFIG.FREQ_HZ $DSP_FREQ]  [get_bd_intf_ports dspClk]
  set_property -dict [list CONFIG.FREQ_HZ $HOST_FREQ] [get_bd_intf_ports hostClk]
  set_property -dict [list CONFIG.FREQ_HZ $DSP_FREQ]  [get_bd_pins $CLKIFC/dspClk]
  set_property -dict [list CONFIG.FREQ_HZ $HOST_FREQ] [get_bd_pins $CLKIFC/hostClk]
}

# ---- Zynq UltraScale+ PS: supplies pl_clk0 / pl_resetn0 / M_AXI_HPM0_LPD ----
set ZYNQ_PS [create_bd_cell -type ip -vlnv xilinx.com:ip:zynq_ultra_ps_e:3.5 zynq_ps]
apply_bd_automation -rule xilinx.com:bd_rule:zynq_ultra_ps_e -config {apply_board_preset "1"} \
  [get_bd_cells zynq_ps]
if {$PLATFORM eq "rfsoc4x2"} {
  # The board preset enables PL0; make the requested control-domain rate explicit and reproducible.
  set_property -dict [list \
    CONFIG.PSU__USE__M_AXI_GP0 {0} \
    CONFIG.PSU__USE__M_AXI_GP1 {0} \
    CONFIG.PSU__USE__M_AXI_GP2 {1} \
    CONFIG.PSU__USE__S_AXI_GP0 {0} \
    CONFIG.PSU__USE__S_AXI_GP1 {0} \
    CONFIG.PSU__USE__S_AXI_GP2 {0} \
    CONFIG.PSU__USE__IRQ0 {0} \
    CONFIG.PSU__FPGA_PL0_ENABLE {1} \
    CONFIG.PSU__USE__FABRIC__RST {1} \
    CONFIG.PSU__NUM_FABRIC_RESETS {1} \
    CONFIG.PSU__DDRC__ROW_ADDR_COUNT {16} \
    CONFIG.PSU__CRL_APB__PL0_REF_CTRL__FREQMHZ [format %.3f [expr {$HOST_FREQ / 1.0e6}]]] \
    [get_bd_cells zynq_ps]
}
connect_bd_net [get_bd_pins zynq_ps/pl_clk0] [get_bd_pins zynq_ps/maxihpm0_lpd_aclk]

# ---- User top IP ----
set TOP [create_bd_cell -type ip -vlnv user.org:user:${TOP_MODULE}:1.0 top]
if {$USE_CLOCK_INTERFACE} {
  connect_bd_net [get_bd_pins $CLKIFC/hostClk] [get_bd_pins $TOP/hostClk]
  connect_bd_net [get_bd_pins $CLKIFC/dspClk]  [get_bd_pins $TOP/dspClk]
} else {
  connect_bd_net [get_bd_pins zynq_ps/pl_clk0] [get_bd_pins $TOP/hostClk]
}

# ---- proc_sys_reset for each clock domain ----
set PS_RST  [create_bd_cell -type ip -vlnv xilinx.com:ip:proc_sys_reset:5.0 ps_rst]
set DSP_RST [create_bd_cell -type ip -vlnv xilinx.com:ip:proc_sys_reset:5.0 dsp_rst]
# proc_sys_reset's C_EXT_RESET_HIGH is read-only in Vivado 2025.2. Explicitly invert the PS active-low
# fabric reset so both synchronizers receive the active-high external reset their IP pins require.
set PS_RESET_INVERTER [create_bd_cell -type inline_hdl \
  -vlnv xilinx.com:inline_hdl:ilvector_logic:1.0 ps_reset_inverter]
set_property -dict [list CONFIG.C_OPERATION {not} CONFIG.C_SIZE {1}] $PS_RESET_INVERTER
connect_bd_net [get_bd_pins zynq_ps/pl_resetn0] [get_bd_pins $PS_RESET_INVERTER/Op1]
connect_bd_net [get_bd_pins $PS_RESET_INVERTER/Res] \
  [get_bd_pins ps_rst/ext_reset_in] [get_bd_pins dsp_rst/ext_reset_in]
connect_bd_net [get_bd_pins dsp_rst/peripheral_reset] [get_bd_pins $TOP/dspRst]
connect_bd_net [get_bd_pins ps_rst/peripheral_reset]  [get_bd_pins $TOP/hostRst]

# dcm_locked is high because neither source has a separate lock output. proc_sys_reset still holds reset
# until its clock-domain synchronizer observes enough clock edges; without clk_dac0, DSP reset cannot
# deassert. Tie the other optional active-high reset inputs inactive to avoid floating BD inputs.
set RESET_LOCKED [create_bd_cell -type inline_hdl \
  -vlnv xilinx.com:inline_hdl:ilconstant:1.0 reset_locked]
set_property -dict [list CONFIG.CONST_WIDTH {1} CONFIG.CONST_VAL {1}] $RESET_LOCKED
set RESET_INACTIVE [create_bd_cell -type inline_hdl \
  -vlnv xilinx.com:inline_hdl:ilconstant:1.0 reset_inactive]
set_property -dict [list CONFIG.CONST_WIDTH {1} CONFIG.CONST_VAL {0}] $RESET_INACTIVE
connect_bd_net [get_bd_pins $RESET_LOCKED/dout] \
  [get_bd_pins ps_rst/dcm_locked] [get_bd_pins dsp_rst/dcm_locked]
connect_bd_net [get_bd_pins $RESET_INACTIVE/dout] \
  [get_bd_pins ps_rst/aux_reset_in] [get_bd_pins ps_rst/mb_debug_sys_rst] \
  [get_bd_pins dsp_rst/aux_reset_in] [get_bd_pins dsp_rst/mb_debug_sys_rst]
if {$USE_CLOCK_INTERFACE} {
  connect_bd_net [get_bd_pins $CLKIFC/hostClk] [get_bd_pins ps_rst/slowest_sync_clk]
  connect_bd_net [get_bd_pins $CLKIFC/dspClk]  [get_bd_pins dsp_rst/slowest_sync_clk]
} else {
  connect_bd_net [get_bd_pins zynq_ps/pl_clk0] [get_bd_pins ps_rst/slowest_sync_clk]
}

# ---- RF Data Converter: platform-specific tile setup and explicit physical stream mapping ----
set RFDC [create_bd_cell -type ip -vlnv xilinx.com:ip:usp_rf_data_converter:2.6 rf_data_converter]
set RFDC_TARGET [get_bd_cells rf_data_converter]
source $INC/$RFDC_CONFIG_SCRIPT
source $INC/$RFDC_CONNECT_SCRIPT

# ---- AXI SmartConnect: PS HPM0_LPD -> { top S_AXIS, rfdc s_axi } ----
set AXI_CONNECT [create_bd_cell -type ip -vlnv xilinx.com:ip:smartconnect:1.0 smartconnect]
set_property CONFIG.NUM_SI 1 $AXI_CONNECT
set_property CONFIG.NUM_MI 2 $AXI_CONNECT
if {$USE_CLOCK_INTERFACE} {
  set_property CONFIG.NUM_CLKS {2} $AXI_CONNECT
  set_property CONFIG.HAS_ARESETN {0} $AXI_CONNECT
} else {
  set_property CONFIG.NUM_CLKS {1} $AXI_CONNECT
  set_property CONFIG.HAS_ARESETN {1} $AXI_CONNECT
}

connect_bd_intf_net [get_bd_intf_pins $AXI_CONNECT/M00_AXI]      [get_bd_intf_pins $TOP/S_AXIS]
connect_bd_intf_net [get_bd_intf_pins $AXI_CONNECT/M01_AXI]      [get_bd_intf_pins rf_data_converter/s_axi]
connect_bd_intf_net [get_bd_intf_pins zynq_ps/M_AXI_HPM0_LPD]    [get_bd_intf_pins $AXI_CONNECT/S00_AXI]
connect_bd_net      [get_bd_pins zynq_ps/pl_clk0]                [get_bd_pins $AXI_CONNECT/aclk]
if {$USE_CLOCK_INTERFACE} {
  connect_bd_net [get_bd_pins $CLKIFC/hostClk] [get_bd_pins $AXI_CONNECT/aclk1]
} else {
  connect_bd_net [get_bd_pins ps_rst/peripheral_aresetn] [get_bd_pins $AXI_CONNECT/aresetn]
}

assign_bd_address -offset 0x80000000 -range 0x10000000 \
  -target_address_space [get_bd_addr_spaces zynq_ps/Data] [get_bd_addr_segs $TOP/S_AXIS/reg0] -force
assign_bd_address

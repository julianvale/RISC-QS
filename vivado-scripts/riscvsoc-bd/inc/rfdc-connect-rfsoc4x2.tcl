# RFSoC 4x2 explicit physical RFDC mapping. Do not replace this with tile/slice arithmetic: this Gen-3
# device has dual ADC/DAC tiles and its analog/AXIS identifiers are not a generic four-by-four layout.

# Active hard analog ports only. The enabled DAC1/ADC3 dummy converters are internal clock-forwarding
# intermediates; their analog pins are deliberately not exposed by the proof-of-concept wrapper.
create_bd_intf_port -mode Master -vlnv xilinx.com:interface:diff_analog_io_rtl:1.0 vout20
connect_bd_intf_net [get_bd_intf_pins $RFDC/vout20] [get_bd_intf_ports vout20]
create_bd_intf_port -mode Master -vlnv xilinx.com:interface:diff_analog_io_rtl:1.0 vout00
connect_bd_intf_net [get_bd_intf_pins $RFDC/vout00] [get_bd_intf_ports vout00]
create_bd_intf_port -mode Slave -vlnv xilinx.com:interface:diff_analog_io_rtl:1.0 vin2_23
connect_bd_intf_net [get_bd_intf_pins $RFDC/vin2_23] [get_bd_intf_ports vin2_23]

# The sole external RF reference enters DAC tile 0 and is forwarded internally according to
# rfdc-config-rfsoc4x2.tcl. clk_dac0 is the common 491.52 MHz PL DSP/AXIS clock below.
create_bd_intf_port -mode Slave -vlnv xilinx.com:interface:diff_clock_rtl:1.0 dac0_clk
connect_bd_intf_net [get_bd_intf_ports dac0_clk] [get_bd_intf_pins $RFDC/dac0_clk]

# Logical RISC-Q converter numbering is intentionally independent of RFDC tile numbering:
#   DAC0 gate/MW -> physical DAC A (tile 2/block 0) -> s20_axis/vout20
#   DAC1 AOM     -> physical DAC B (tile 0/block 0) -> s00_axis/vout00
#   ADC0 APD     <- physical ADC A (tile 2/upper)   <- m22_axis/vin2_23
connect_bd_intf_net [get_bd_intf_pins $TOP/DAC0_AXIS] [get_bd_intf_pins $RFDC/s20_axis]
connect_bd_intf_net [get_bd_intf_pins $TOP/DAC1_AXIS] [get_bd_intf_pins $RFDC/s00_axis]
connect_bd_intf_net [get_bd_intf_pins $RFDC/m22_axis] [get_bd_intf_pins $TOP/ADC0_AXIS]

# DAC tile 1 is enabled only to keep the internal reference path contiguous. Drive its data to zero;
# PG269 notes that RF-DAC data is not gated by TVALID, but assert TVALID as a conventional safe source.
set RFDC_DUMMY_DAC_DATA [create_bd_cell -type inline_hdl \
  -vlnv xilinx.com:inline_hdl:ilconstant:1.0 rfdc_dummy_dac_data]
set_property -dict [list CONFIG.CONST_WIDTH {256} CONFIG.CONST_VAL {0}] $RFDC_DUMMY_DAC_DATA
set RFDC_DUMMY_AXIS_ONE [create_bd_cell -type inline_hdl \
  -vlnv xilinx.com:inline_hdl:ilconstant:1.0 rfdc_dummy_axis_one]
set_property -dict [list CONFIG.CONST_WIDTH {1} CONFIG.CONST_VAL {1}] $RFDC_DUMMY_AXIS_ONE
connect_bd_net [get_bd_pins $RFDC_DUMMY_DAC_DATA/dout] [get_bd_pins $RFDC/s10_axis_tdata]
connect_bd_net [get_bd_pins $RFDC_DUMMY_AXIS_ONE/dout] [get_bd_pins $RFDC/s10_axis_tvalid]

# ADC tile 3 is the corresponding enabled forwarding intermediate. Its samples are intentionally unused;
# hold TREADY high so its output stream is always consumed.
connect_bd_net [get_bd_pins $RFDC_DUMMY_AXIS_ONE/dout] [get_bd_pins $RFDC/m30_axis_tready]

# Clock/reset ownership is per RFDC tile interface, not per enabled converter block. clk_dac0 clocks
# active DAC0/DAC2 and ADC2 as well as forwarding intermediates DAC1/ADC3. The active-high RISC-Q reset
# and active-low RFDC resets are synchronous outputs from the same DSP-domain proc_sys_reset.
connect_bd_net [get_bd_pins $RFDC/clk_dac0] \
  [get_bd_pins $TOP/dspClk] [get_bd_pins $DSP_RST/slowest_sync_clk] \
  [get_bd_pins $RFDC/s0_axis_aclk] [get_bd_pins $RFDC/s1_axis_aclk] \
  [get_bd_pins $RFDC/s2_axis_aclk] [get_bd_pins $RFDC/m2_axis_aclk] \
  [get_bd_pins $RFDC/m3_axis_aclk]
connect_bd_net [get_bd_pins $DSP_RST/peripheral_aresetn] \
  [get_bd_pins $RFDC/s0_axis_aresetn] [get_bd_pins $RFDC/s1_axis_aresetn] \
  [get_bd_pins $RFDC/s2_axis_aresetn] [get_bd_pins $RFDC/m2_axis_aresetn] \
  [get_bd_pins $RFDC/m3_axis_aresetn]

# RFDC register access shares the PS 100 MHz host/control domain and its synchronized active-low reset.
connect_bd_net [get_bd_pins $ZYNQ_PS/pl_clk0] [get_bd_pins $RFDC/s_axi_aclk]
connect_bd_net [get_bd_pins $PS_RST/peripheral_aresetn] [get_bd_pins $RFDC/s_axi_aresetn]

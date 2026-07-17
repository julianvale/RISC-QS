# RFSoC 4x2 block-design constraints.
#
# The RFDC analog ports and differential dac0_clk reference are hard-IP interfaces selected by the
# RFSoC tile mapping. They intentionally have no ordinary PACKAGE_PIN or IOSTANDARD constraints here.
# RFDC and Zynq PS IP output products supply the generated-clock timing constraints for clk_dac0 and
# pl_clk0 respectively. Platform-independent SoC OOC clocks live only in the packaged-IP OOC XDC.

# PS pl_clk0 and RFDC clk_dac0 have independent physical sources. PulseTableSoc crosses host controls
# into the DSP domain with explicit BufferCC synchronizers, so timing paths between these domains are
# asynchronous; leaving them related creates unsafe partial-false-path analysis and spurious setup/hold
# failures between clk_pl_0 and RFDAC0_CLK.
set_clock_groups -asynchronous \
  -group [get_clocks -include_generated_clocks clk_pl_0] \
  -group [get_clocks -include_generated_clocks RFDAC0_CLK]

# RFDC 2.6 writes its 491.52 MHz fabric period with only three decimal places: 2.035 ns rather than
# 2.034505208 ns. Vivado timing values are quantized to integer picoseconds, so use a conservative
# 0.001 ns setup uncertainty to cover the 0.000495 ns rounding. Same-edge hold analysis is independent
# of this period correction.
set_clock_uncertainty -setup 0.001 [get_clocks -quiet {RFDAC0_CLK RFDAC1_CLK RFDAC2_CLK}]

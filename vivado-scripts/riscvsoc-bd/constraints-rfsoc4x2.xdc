# RFSoC 4x2 block-design constraints.
#
# The RFDC analog ports and differential dac0_clk reference are hard-IP interfaces selected by the
# RFSoC tile mapping. They intentionally have no ordinary PACKAGE_PIN or IOSTANDARD constraints here.
# RFDC and Zynq PS IP output products supply the generated-clock timing constraints for clk_dac0 and
# pl_clk0 respectively. Platform-independent SoC OOC clocks live only in the packaged-IP OOC XDC.

# RFSoC 4x2 RF Data Converter 2.6 setup for the one-core NV proof of concept.
#
# Internal reference forwarding (Gen 3): external dac0_clk -> DAC0 input reference distribution;
# DAC1/DAC2 and ADC2/ADC3 select DAC0. DAC1 and ADC3 are enabled intermediate/dummy tiles, so the
# distribution path never hops over an inactive tile. ADC0/ADC1 and DAC3 remain disabled.
#
# Use the RFSoC4x2 PYNQ image's native LMK/LMX profile: a 491.520 MHz tile reference. Keeping the
# existing 16/4 samples-per-word geometry makes clk_dac0 and every enabled AXIS interface 491.520 MHz;
# the corresponding exact sample rates are 7.86432 GSPS DAC and 3.93216 GSPS ADC. This avoids requiring
# a custom LMX2594 register table while preserving the pulse/demodulator batch representation.

set_property -dict [list \
  CONFIG.Converter_Setup {1} \
  \
  CONFIG.DAC228_En {true} \
  CONFIG.DAC229_En {true} \
  CONFIG.DAC230_En {true} \
  CONFIG.DAC231_En {false} \
  CONFIG.DAC0_Clock_Dist {1} \
  CONFIG.DAC0_PLL_Enable {true} \
  CONFIG.DAC1_Clock_Source {4} \
  CONFIG.DAC1_PLL_Enable {true} \
  CONFIG.DAC2_Clock_Source {4} \
  CONFIG.DAC2_PLL_Enable {true} \
  CONFIG.DAC0_Refclk_Freq {491.520} \
  CONFIG.DAC1_Refclk_Freq {491.520} \
  CONFIG.DAC2_Refclk_Freq {491.520} \
  CONFIG.DAC0_Sampling_Rate {7.86432} \
  CONFIG.DAC1_Sampling_Rate {7.86432} \
  CONFIG.DAC2_Sampling_Rate {7.86432} \
  CONFIG.DAC0_Multi_Tile_Sync {false} \
  CONFIG.DAC1_Multi_Tile_Sync {false} \
  CONFIG.DAC2_Multi_Tile_Sync {false} \
  \
  CONFIG.DAC_Slice00_Enable {true} \
  CONFIG.DAC_Slice01_Enable {false} \
  CONFIG.DAC_Slice02_Enable {false} \
  CONFIG.DAC_Slice03_Enable {false} \
  CONFIG.DAC_Slice10_Enable {true} \
  CONFIG.DAC_Slice11_Enable {false} \
  CONFIG.DAC_Slice12_Enable {false} \
  CONFIG.DAC_Slice13_Enable {false} \
  CONFIG.DAC_Slice20_Enable {true} \
  CONFIG.DAC_Slice21_Enable {false} \
  CONFIG.DAC_Slice22_Enable {false} \
  CONFIG.DAC_Slice23_Enable {false} \
  CONFIG.DAC_Data_Type00 {0} \
  CONFIG.DAC_Data_Type10 {0} \
  CONFIG.DAC_Data_Type20 {0} \
  CONFIG.DAC_Data_Width00 {16} \
  CONFIG.DAC_Data_Width10 {16} \
  CONFIG.DAC_Data_Width20 {16} \
  CONFIG.DAC_Interpolation_Mode00 {1} \
  CONFIG.DAC_Interpolation_Mode10 {1} \
  CONFIG.DAC_Interpolation_Mode20 {1} \
  CONFIG.DAC_Mixer_Type00 {1} \
  CONFIG.DAC_Mixer_Type10 {1} \
  CONFIG.DAC_Mixer_Type20 {1} \
  CONFIG.DAC_Coarse_Mixer_Freq00 {0} \
  CONFIG.DAC_Coarse_Mixer_Freq10 {0} \
  CONFIG.DAC_Coarse_Mixer_Freq20 {0} \
  CONFIG.DAC_Mode00 {3} \
  CONFIG.DAC_Mode10 {3} \
  CONFIG.DAC_Mode20 {3} \
  \
  CONFIG.ADC224_En {false} \
  CONFIG.ADC225_En {false} \
  CONFIG.ADC226_En {true} \
  CONFIG.ADC227_En {true} \
  CONFIG.ADC0_Enable {0} \
  CONFIG.ADC1_Enable {0} \
  CONFIG.ADC2_Clock_Source {4} \
  CONFIG.ADC2_PLL_Enable {true} \
  CONFIG.ADC3_Clock_Source {4} \
  CONFIG.ADC3_PLL_Enable {true} \
  CONFIG.ADC2_Refclk_Freq {491.520} \
  CONFIG.ADC3_Refclk_Freq {491.520} \
  CONFIG.ADC2_Sampling_Rate {3.93216} \
  CONFIG.ADC3_Sampling_Rate {3.93216} \
  CONFIG.ADC2_Multi_Tile_Sync {false} \
  CONFIG.ADC3_Multi_Tile_Sync {false} \
  \
  CONFIG.ADC_Slice00_Enable {false} \
  CONFIG.ADC_Slice01_Enable {false} \
  CONFIG.ADC_Slice02_Enable {false} \
  CONFIG.ADC_Slice03_Enable {false} \
  CONFIG.ADC_Slice10_Enable {false} \
  CONFIG.ADC_Slice11_Enable {false} \
  CONFIG.ADC_Slice12_Enable {false} \
  CONFIG.ADC_Slice13_Enable {false} \
  CONFIG.ADC_Slice20_Enable {false} \
  CONFIG.ADC_Slice21_Enable {false} \
  CONFIG.ADC_Slice22_Enable {true} \
  CONFIG.ADC_Slice23_Enable {false} \
  CONFIG.ADC_Slice30_Enable {true} \
  CONFIG.ADC_Slice31_Enable {false} \
  CONFIG.ADC_Slice32_Enable {false} \
  CONFIG.ADC_Slice33_Enable {false} \
  CONFIG.ADC_Data_Type22 {0} \
  CONFIG.ADC_Data_Type30 {0} \
  CONFIG.ADC_Data_Width22 {4} \
  CONFIG.ADC_Data_Width30 {4} \
  CONFIG.ADC_Decimation_Mode22 {2} \
  CONFIG.ADC_Decimation_Mode30 {2} \
  CONFIG.ADC_Mixer_Type22 {1} \
  CONFIG.ADC_Mixer_Type30 {1} \
  CONFIG.ADC_Coarse_Mixer_Freq22 {0} \
  CONFIG.ADC_Coarse_Mixer_Freq30 {0} \
] $RFDC_TARGET

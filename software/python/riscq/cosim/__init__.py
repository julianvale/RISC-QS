"""cosim — run the production software against the Verilated PulseTableSoc under cocotb (docs/software/06).

The CocotbDriver is one more Driver backend, so the same Soc/program/pulse stack that drives hardware
drives the simulator — only the backend swaps. The user injects ADC stimulus through AdcSource
(open-loop) or a QuantumModel (closed-loop). Heavy deps (cocotb) are imported lazily by submodules.
"""

from .adc import AdcSource, FixedAdc, CallbackAdc, QuantumModel, pack_adc, tone

__all__ = ["AdcSource", "FixedAdc", "CallbackAdc", "QuantumModel", "pack_adc", "tone"]

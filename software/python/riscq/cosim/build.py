"""build.py — emit the cosim DUT Verilog via SpinalHDL elaboration (docs/software/06 §2).

Shells out to mill's CosimGen (the 2-qubit PulseTableSoc matching the Scala sims) so the cocotb harness
drives the same DUT they sign off. The DUT is built once and reused across runs.
"""

import os
import subprocess

REPO = os.path.normpath(os.path.join(os.path.dirname(__file__), "..", "..", "..", ".."))
MILL = os.path.join(REPO, ".metals", "mill")
RTL_DIR = os.path.join(os.path.dirname(__file__), "rtl")
# The examples/ notebooks drive a separate DUT (CosimExampleGen): same 2-qubit PulseTableSoc, but core
# 0 sits on its production converters (DAC 0 / ADC 14) so the notebooks use dac_0 / adc_14 by their real
# names. Its own rtl + Verilator build dir so it never clobbers the VNA golden's (CosimGen) DUT.
EXAMPLE_RTL_DIR = os.path.join(os.path.dirname(__file__), "rtl_examples")
EXAMPLE_BUILD_DIR = os.path.join(os.path.dirname(__file__), "sim_build_examples")


def generate_rtl(force: bool = False) -> str:
    """Run CosimGen → rtl/PulseTableSoc.v (+ ROM .bin files). Returns the Verilog path."""
    out = os.path.join(RTL_DIR, "PulseTableSoc.v")
    if os.path.exists(out) and not force:
        return out
    subprocess.run([MILL, "runMain", "riscq.soc.sim.CosimGen", RTL_DIR], cwd=REPO, check=True)
    return out


def generate_example_rtl(force: bool = False) -> str:
    """Run CosimExampleGen → rtl_examples/PulseTableSoc.v (the dac_0 / adc_14 DUT). Returns its path."""
    out = os.path.join(EXAMPLE_RTL_DIR, "PulseTableSoc.v")
    if os.path.exists(out) and not force:
        return out
    subprocess.run([MILL, "runMain", "riscq.soc.sim.CosimExampleGen", EXAMPLE_RTL_DIR], cwd=REPO, check=True)
    return out


if __name__ == "__main__":
    print("generated", generate_rtl(force=True))

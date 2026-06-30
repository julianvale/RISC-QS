"""vna_open_loop — reproduce PulseTableSocSim's ADC-tone VNA readout in pure Python (docs/software/06).

Generates the cosim DUT, builds the firmware readout point (vna_point.c), and runs the cocotb VNA test
(matched LO ≫ detuned LO) against the Verilated PulseTableSoc — the open-loop golden.

    python -m riscq.cosim.examples.vna_open_loop
"""

import os
import subprocess

from riscq.cosim import build, runner

REPO = build.REPO
FW = os.path.join(REPO, "software/firmware")


def main():
    build.generate_rtl()
    subprocess.run(["make"], cwd=FW, check=True)
    os.environ["RISCQ_COSIM_ELF"] = os.path.join(FW, "build", "vna_point.elf")
    runner.build_and_run("riscq.cosim.cocotb_vna")
    print("VNA open-loop cosim complete — see the cocotb log for matched vs detuned |z|.")


if __name__ == "__main__":
    main()

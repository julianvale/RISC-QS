import os
import subprocess
import numpy as np
import cocotb
from cocotb.triggers import Timer

# Core Framework
from riscq import default_config, Program
from riscq.cosim.driver import CocotbDriver
from riscq.cosim.adc import AdcSource
from riscq.cosim.runner import (
    init_dut, load_program, load_envelope, boot, 
    read_core_ram, adc_service, build_and_run
)

# ------------------------------------------------------------------
# 1. Define the Physics: 80 MHz Carrier + 10 MHz Modulation
# ------------------------------------------------------------------
class FakeFluorescence(AdcSource):
    """Generates an 80 MHz carrier Amplitude-Modulated by a 10 MHz envelope."""
    def __init__(self, carrier=80e6, mod=10e6, fs=500e6, batch=4, amp=10000):
        self.carrier = carrier
        self.mod = mod
        self.fs = fs
        self.batch = batch
        self.amp = amp

    def adc_samples(self, core: int, t_batch: int) -> np.ndarray:
        start_t = t_batch * self.batch / self.fs
        t = start_t + np.arange(self.batch) / self.fs
        # AM Modulation: (1 + 0.5 * sin(envelope)) * sin(carrier)
        envelope = 1 + 0.5 * np.sin(2 * np.pi * self.mod * t)
        carrier = np.sin(2 * np.pi * self.carrier * t)
        wave = self.amp * envelope * carrier
        return wave.astype(np.complex64)


# ------------------------------------------------------------------
# 2. Host Experiment Sequence (Using the Framework DSL)
# ------------------------------------------------------------------
@cocotb.test()
async def run_nv_experiment(dut):
    cfg = default_config(qubit_num=1)

    # --- A. Generate C code and compile via local Makefile ---
    dut._log.info("Generating C code via Program DSL...")
    prog = Program(cfg)
    
    # Demodulate the 80 MHz carrier, integrate for 5 microseconds
    prog.readout(t=0.0, demod_freq=80e6, dur=5e-6)
    prog.read_result()
    prog.sleep_until(6e-6)
    
    # Extract the perfect C code from the DSL
    c_code = prog.emit_c()
    dut._log.info("\n--- GENERATED C CODE ---\n" + c_code + "\n------------------------")
    
    # Save and compile it
    test_dir = os.path.dirname(os.path.abspath(__file__))
    firmware_dir = os.path.abspath(os.path.join(test_dir, "../../firmware"))
    c_path = os.path.join(firmware_dir, "examples", "nv.c")
    
    with open(c_path, "w") as f:
        f.write(c_code)
        
    dut._log.info("Compiling ELF using local firmware Makefile...")
    subprocess.run(["make", "build/nv.elf"], cwd=firmware_dir, check=True)
    elf_path = os.path.join(firmware_dir, "build", "nv.elf")

    # The framework contract writes results to scratchpad memory at 0x400
    offset_result = 0x400

    # --- B. Run the Hardware Simulation ---
    await init_dut(dut)
    drv = CocotbDriver(dut, cfg)

    my_adc = FakeFluorescence(carrier=80e6, mod=10e6, fs=500e6, batch=4)
    cocotb.start_soon(adc_service(dut, cfg, my_adc, adc_phys=0, core=0))

    # Load the perfectly-compiled ELF
    await load_program(drv, cfg, core=0, elf_path=elf_path)
    
    flat_env = np.ones(1024, dtype=np.complex64)
    await load_envelope(drv, cfg, core=0, channel="readout", samples=flat_env)

    dut._log.info("Starting RISC-V execution...")
    await boot(drv, cfg)

    # Our DSL program takes 6 microseconds. Wait 10us to ensure the CPU is completely finished.
    await Timer(10, units="us")
    dut._log.info("Experiment time elapsed. CPU finished!")

    # --- C. Extract Results ---
    # The DSL stores I/Q results in sequence at the fixed offset
    int_i = await read_core_ram(drv, cfg, core=0, offset=offset_result)
    int_q = await read_core_ram(drv, cfg, core=0, offset=offset_result + 4)

    if int_i > 0x7FFFFFFF: int_i -= 0x100000000
    if int_q > 0x7FFFFFFF: int_q -= 0x100000000

    magnitude = np.sqrt(int_i**2 + int_q**2)
    
    dut._log.info("--- EXPERIMENT RESULTS ---")
    dut._log.info(f"Integrated I: {int_i}")
    dut._log.info(f"Integrated Q: {int_q}")
    dut._log.info(f"Magnitude:    {magnitude:.2f}")

# ------------------------------------------------------------------
# 3. Pytest Entry Point
# ------------------------------------------------------------------
def test_nv_standard():
    build_and_run("test_nv", testcase="run_nv_experiment")

if __name__ == "__main__":
    import sys
    import pytest
    sys.exit(pytest.main([__file__, "-s"]))
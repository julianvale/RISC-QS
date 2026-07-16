import numpy as np
from riscq import default_config, Program

# 1. Initialize the framework
cfg = default_config(qubit_num=1)
prog = Program(cfg)

# 2. Define the 10 MHz Modulation Envelope
# We'll create a 5 microsecond envelope
duration = 5e-6
t_arr = np.arange(int(duration * cfg.fs)) / cfg.fs
env_10mhz = np.sin(2 * np.pi * 10e6 * t_arr)

# 3. Define the RF Pulse
# Carrier = 80 MHz (hardware NCO), Amplitude = 1.0, Envelope = 10 MHz sine array
nv_pulse = prog.define_pulse(
    channel="gate", 
    freq=80e6, 
    phase=0.0, 
    amp=1.0, 
    dur=duration, 
    env=env_10mhz
)

# 4. Schedule the Experiment Sequence
# Fire the 80 MHz / 10 MHz modulated pulse at t = 0
prog.play(nv_pulse, t=0.0)

# Simultaneously arm the Digital Down-Converter to listen (readout)
prog.readout(t=0.0, demod_freq=10e6, dur=duration)

# Extract the integrated I/Q results from the hardware
prog.read_result()
prog.sleep_until(duration + 1e-6)

# 5. Generate the C Code
print(prog.emit_c())
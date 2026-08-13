from pathlib import Path
import numpy as np
import matplotlib.pyplot as plt

source = Path("data/esr/nv_pulsed_esr_2026-08-06_13_28.npz")
data = np.load(source)

freq_ghz = data["frequencies_hz"] / 1e9
signal = data["signal"]
mean = signal.mean(axis=1)
sem = signal.std(axis=1, ddof=1) / np.sqrt(signal.shape[1])

fig, ax = plt.subplots(layout="constrained")
ax.plot(freq_ghz, mean)
ax.set(xlabel="MW frequency (GHz)", ylabel="MW-on integrated signal (ADC code)")
ax.grid(True, alpha=0.3)
fig.savefig("data/esr/nv_pulsed_esr_2026-08-06_13_28_signal.png", dpi=160)

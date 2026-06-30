# examples — co-simulation notebooks

Runnable [`docs/software/06`](../docs/software/06-cosim.md) co-simulation examples: the production
control software ([`software/python/riscq`](../software/python/riscq)) driving the **Verilated
`PulseTableSoc`** under cocotb, in pure Python.

| Notebook | What it shows | Plots |
|---|---|---|
| [`01_pulse_train_dac0.ipynb`](01_pulse_train_dac0.ipynb) | ten gate pulses with increasing amplitude on **DAC 0**, scheduled with the `Program` DSL and played by the RISC-V core | the captured `dac_0` waveform (the pulse train + a zoom + peak-vs-amplitude) |
| [`02_readout_demod_adc14.ipynb`](02_readout_demod_adc14.ipynb) | a **readout**: a cosine injected on **ADC 14** demodulated by a frequency-matched LO, integrated, and read back | the `adc_14` input and the demod signal (matched vs detuned integral) |

Both drive the same example DUT — `CosimExampleGen`, the 2-qubit `PulseTableSoc` with core 0 wired to
its production converters (DAC 0 / ADC 14) so the notebooks use those ports by their board names. Each
notebook **builds its pulse program inline** with the `Program` DSL, compiles it, and the harness loads
+ runs it on the Verilated SoC.

## Running (uv)

The `software/python` project carries a uv environment with everything the notebooks need (numpy,
cocotb, matplotlib, jupyterlab — the `examples` dependency group, installed by default). From the repo
root:

```bash
uv sync --project software/python                            # one-time: build the shared .venv + uv.lock
uv run --project software/python jupyter lab examples/       # launch JupyterLab on the examples
```

or execute a notebook headless:

```bash
uv run --project software/python jupyter nbconvert --to notebook --execute examples/01_pulse_train_dac0.ipynb
```

Needs `verilator` and the RV32I `clang` on `PATH` (the co-sim shells out to them). The first run
elaborates + Verilates the DUT (~1–2 min); later runs reuse it. (Plain
`pip install -e "software/python[cosim]"` plus your own jupyter/matplotlib works too.)

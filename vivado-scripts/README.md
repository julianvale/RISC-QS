# vivado-scripts — Vivado flows for `PulseTableSoc` on the ZCU216 (xczu49dr)

Two self-contained Vivado flows for the SpinalHDL [`PulseTableSoc`](../src/riscq/soc/PulseTableSoc.scala)
on the Zynq UltraScale+ RFSoC `xczu49dr-ffvf1760-2-e` (ZCU216, Vivado 2024.2). Each lives in its own
subfolder and is driven by a single `build-*.sh` script.

| | [`riscvsoc/`](riscvsoc/) | [`riscvsoc-bd/`](riscvsoc-bd/) |
|---|---|---|
| what | standalone **OOC place&route bench** — the SoC in isolation | **block-design** build — the SoC in a real ZCU216 image |
| driver | `riscvsoc/build-riscvsoc.sh` | `riscvsoc-bd/build-riscvsoc-bd.sh` |
| RTL | `GenPulseTableSocOoc` — `vivado=false`, plain `dspClk`/`clk` ports | `GenPulseTableSocVivado` — `vivado=true`, `hostClk` + `X_INTERFACE`, `ClockInterface.v` |
| context | SoC alone, OOC | `PulseTableSoc` packaged as a user IP + Zynq PS + RF Data Converter + AXI SmartConnect |
| P&R | non-project `synth → place → route` (pure Tcl) | project `synth_1` (BD wrapper) + SoC as an OOC IP child run, then `impl_1` |
| purpose | reproduce the floorplanned timing number (`dspClk` WNS ≈ −0.156 ns) | measure the block-design / real-device penalty vs that number |

Both bake the same recipe (per-core X0 floorplan + datapath confine + `df`/`1h`/retiming levers); the
RTL-level levers are constructor defaults of `PulseTableSoc`, the floorplan is the per-flow `pblocks-*.tcl`.
See [`docs/soc/ARCH.md`](../docs/soc/ARCH.md) §6 and `docs/soc/floorplan_plan.md` §10–§11.

## Build outputs — one folder per design under `<repo>/build/`

Each flow generates its RTL, runs Vivado, and writes every report + `vivado.log` into a single
git-ignored folder under the **repo root** `build/`:

- `riscvsoc/build-riscvsoc.sh`  → `../../build/riscvsoc/`
- `riscvsoc-bd/build-riscvsoc-bd.sh` → `../../build/riscvsoc-bd/`

Nothing is written under `vivado-scripts/` itself, so the scripts tree stays clean. Set
`RISCQ_PROJ_NAME=<name>` to pick a different folder and **evaluate several designs in parallel** without
clobbering each other:

```bash
RISCQ_PROJ_NAME=riscvsoc-a ./riscvsoc/build-riscvsoc.sh &
RISCQ_PROJ_NAME=riscvsoc-b ./riscvsoc/build-riscvsoc.sh &   # → build/riscvsoc-a, build/riscvsoc-b
```

## Quick start

```bash
cd vivado-scripts/riscvsoc      && ./build-riscvsoc.sh        # OOC bench, 14q  → <repo>/build/riscvsoc
cd vivado-scripts/riscvsoc-bd   && ./build-riscvsoc-bd.sh     # block design, 14q → <repo>/build/riscvsoc-bd
```

`RISCQ_QUBITS=3 ./build-*.sh` runs a smaller config for fast iteration. Each subfolder's `README.md`
documents its full env-knob set, recipe, and the reports it writes.

# Host deployment quickstart

The supported research deployment is one trusted Linux host directly connected to one RFSoC4x2.
Provisioning installs the selected accepted platform, pairing token, boot self-test, and root-owned
RPC service. The token and private-link bind address prevent accidental use of the wrong interface;
they are not a full multi-user security model.

## Install

```bash
python3 -m venv .venv
. .venv/bin/activate
pip install './software[test]'
```

Vivado and live-board work are separate authorized activities; this workflow consumes the accepted
`.rqplatform` artifact.

## Provision the board

```bash
riscq board provision --ssh xilinx@192.168.2.2 \
  --platform software/platforms/rfsoc4x2-nv-1q/1.0.0/rfsoc4x2-nv-1q-1.0.0.rqplatform
```

`--bind` is the board’s direct/private-link IP and defaults to the host portion of `--ssh`; provide
it explicitly for an SSH alias or a board with multiple interfaces. Provisioning refuses existing
platform, self-test, service-configuration, and host-profile files. Use `--replace` only when
deliberately reprovisioning a known-good experimental installation.

## Build and run firmware

An RV32-capable clang, objcopy, and nm must be on `PATH`, or set `RISCQ_CC`, `RISCQ_OBJCOPY`, and
`RISCQ_NM` explicitly.

```bash
riscq firmware build experiment.c --name experiment --version 1.0.0 \
  --params software/configs/rfsoc4x2-nv-1q.json --output experiment.rqfw
riscq firmware inspect experiment.rqfw
riscq firmware run experiment.rqfw --param shots=0x64 --result counts --timeout-s 1.0
```

Parameters and results may be repeated. Parameters use Python base-0 integer syntax. Scalars are
JSON integers; byte/array results are explicit hexadecimal JSON records.

## Python interface

```python
from riscq import Board

board = Board.connect()                 # reads ~/.config/riscq/board.json
status = board.status()
firmware = board.compile_c("experiment.c")
result = board.run(firmware, parameters={"shots": 100},
                   results=["counts"], timeout_s=1.0)
```

There is no raw MMIO, shell, board-side Python, filesystem, or RPC platform replacement method.
ZCU216 remains a separate explicitly documented workflow.

## Python DSL execution

The accepted RFSoC4x2 also exposes the restricted Python DSL lane. It uses the same
`compile_kernel`/`Program` and `run.setup`/`run.rerun` model as the legacy driver, while sending
only authenticated batch requests to the service. The profile supplies the exact raw parameters
used to derive the map; only core 0 is accepted.

```python
import numpy as np
from riscq import ProgramDriver
from riscq.lang import Array, compile_kernel, kernel
from riscq import run

@kernel
def echo(xs: Array, bias: int, out: Array):
    for i in range(4):
        out[i] = xs[i] + bias

drv = ProgramDriver.connect()       # ~/.config/riscq/board.json
prog = compile_kernel(echo, drv.map, xs=Array(4, input=True), out=Array(4))
run.setup(drv, drv.map, {0: prog})
first = run.rerun(drv, drv.map, {0: prog}, params={0: {"bias": 1}},
                  arrays={0: {"xs": np.arange(4)}}, results=["out"], timeout_s=1.0)
again = run.rerun(drv, drv.map, {0: prog}, params={0: {"bias": 7}},
                  arrays={0: {"xs": np.arange(4) + 10}}, results=["out"], timeout_s=1.0)
```

`again[0]["out"]` is a NumPy little-endian int32 array. The service keeps one active Program map;
a later successful `setup` replaces it. This lane is distinct from `riscq firmware run`, which
remains the generic hand-written-C `.rqfw` and self-test path.

## Recovery contract

Firmware compatibility and manifest-declared asset placement are rejected before adapter access. A
run holds reset while loading and writing parameters, uses aligned single-word transfers and
complete image readback, enforces a wall-clock deadline, and reasserts reset after success or any
failure, signal, result read, or copy path.

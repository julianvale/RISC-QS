# ZCU216 setup and legacy remote deployment

This is the supported compatibility path for the existing 14-core ZCU216 implementation. It supports
both direct Python operation inside the ZCU216 PYNQ environment and the established
`riscq-board-server` / `RemoteDriver` workflow from a development host.

This lane is separate from the new RFSoC4x2 deployment. ZCU216 uses its existing XSA bundle layout,
PYNQ driver defaults, and legacy Pyro server; it does not consume an RFSoC4x2 `.rqplatform`, pairing
profile, or `Board.connect()` transport.

This is a code-supported local workflow, not a new live-board acceptance claim. The first program is
digital-only and does not schedule DAC output. Any RF-producing experiment still requires the correct
cabling, attenuation, termination, and an independently reviewed hardware procedure.

## What you need

- A ZCU216 with a working PYNQ image whose Python environment imports `pynq`, `xrfclk`, and `xrfdc`.
- A Linux development host with this repository, Java/Mill, and Vivado 2026.1 on `PATH`.
- An RV32-capable clang, objcopy, and nm for compiling the on-core firmware.
- An existing administrative transfer path between the host and board. Do not put credentials in
  scripts, notebooks, profiles, or logs.

The gateware and software configuration must be the same build. The tracked 14-core configuration is
[`software/configs/zcu216-14q.json`](../../software/configs/zcu216-14q.json).

## 1. Install the host tools

From the repository root:

```bash
python3 -m venv .venv-zcu216
. .venv-zcu216/bin/activate
python -m pip install './software[test]'
```

Confirm the firmware toolchain before building anything:

```bash
clang --version
llvm-objcopy --version
llvm-nm --version
```

If the tools use different names, set `RISCQ_CC`, `RISCQ_OBJCOPY`, and `RISCQ_NM` to their absolute
paths. The compiler must support `--target=riscv32-unknown-elf`.

## 2. Build the ZCU216 hardware platform

The maintained block-design flow is explicit about its platform:

```bash
cd vivado-scripts/riscvsoc-bd
RISCQ_PLATFORM=zcu216 ./build-riscvsoc-bd.sh
cd ../..
```

The full ZCU216 run produces these matching files under `build/riscvsoc-bd/`:

```text
PulseTableSoc.xsa
PulseTableSoc.bit
```

Review the reported timing, DRC, and implementation result before using the output. The complete
build options and output reports are described in
[`vivado-scripts/riscvsoc-bd/README.md`](../../vivado-scripts/riscvsoc-bd/README.md#zcu216-legacy-floorplanned-flow).

Do not combine this XSA with a configuration from another build or platform.

## 3. Build a bounded first firmware image

Build the digital-only board check against the same ZCU216 parameters:

```bash
riscq firmware build software/fw/board_check.c \
  --name zcu216-board-check \
  --version 1.0.0 \
  --params software/configs/zcu216-14q.json \
  --output zcu216-board-check.rqfw

riscq firmware inspect zcu216-board-check.rqfw
```

This command records the source, runtime, compiler, objcopy, nm, parameter, map, and ABI identities in
the firmware manifest. It does not contact the board.

Build a wheel for the board from the same checkout:

```bash
python -m pip wheel --no-deps --wheel-dir dist ./software
```

## 4. Transfer and install on the board

Using your existing administrative transfer method, place these files in one user-owned directory on
the ZCU216:

```text
PulseTableSoc.xsa
zcu216-14q.json
zcu216-board-check.rqfw
riscq-0.1.0-py3-none-any.whl
software/deploy/riscq-rpc.service
```

Use the Python interpreter belonging to the board's PYNQ environment. Verify that environment before
installing the wheel:

```bash
python3 -c 'import pynq, xrfclk, xrfdc; print("PYNQ RFDC environment OK")'
python3 -c 'import numpy, serpent, yaml; print("RISC-Q runtime dependencies OK")'
python3 -m pip install --user --no-deps ./riscq-0.1.0-py3-none-any.whl
```

If the PYNQ image uses a named virtual or conda environment, activate it and use its `python` for both
commands. Do not create an isolated environment that hides the board-provided PYNQ modules. If the
second import check fails, install board-compatible `numpy`, `Pyro5` (which provides `serpent`), and
`PyYAML` packages through the board's existing package-administration workflow before installing the
RISC-Q wheel.

## 5. Run the digital board check locally

Create `zcu216_board_check.py` beside the four transferred files:

```python
import json
from pathlib import Path

from riscq import run as rq
from riscq.board.pynq_driver import PynqDriver
from riscq.build import Image, Program
from riscq.deployment.bundle import load_firmware_bundle
from riscq.deployment.identity import strict_json_loads
from riscq.map import SocMap, SocParams

root = Path(__file__).resolve().parent
params_path = root / "zcu216-14q.json"
firmware = load_firmware_bundle(root / "zcu216-board-check.rqfw")
symbols_doc = strict_json_loads(firmware.files["symbols.json"])
symbols = {name: (int(pair[0]), int(pair[1])) for name, pair in symbols_doc.items()}
image = Image(
    data=firmware.files["firmware.bin"],
    symbols=symbols,
    entry=int(firmware.manifest["image"]["entry"]),
)

params = SocParams.load(params_path)
soc_map = SocMap(params)

# Construction performs the established ZCU216 startup sequence:
# reference clocks -> overlay download -> MMIO -> auto-MTS -> Nyquist zones -> optional DAC current.
driver = PynqDriver(root / "PulseTableSoc.xsa", params_path)

result = rq.run(
    driver,
    soc_map,
    {0: Program.from_image(image)},
    results=["board_check_result"],
    timeout_s=1.0,
)
observed = int(result[0]["board_check_result"][0]) & 0xFFFF_FFFF
if observed != 0xC05C5C01:
    raise RuntimeError(f"board check returned {observed:#010x}")
print(f"ZCU216 digital board check passed: {observed:#010x}")
```

Run it from the same PYNQ environment:

```bash
python3 zcu216_board_check.py
```

`riscq.run` asserts reset before loading, writes aligned words, reads back the complete image, uses a
wall-clock deadline, and reasserts reset after success or failure. The unused cores are parked before
reset release.

## Optional ZCU216 startup overrides

`PynqDriver` preserves the established defaults: LMK 500.25 MHz, automatic MTS targets of DAC 260 and
ADC 60, ADC Nyquist zone 1, DAC Nyquist zone 2, and no DAC-current override. Pass a Python dictionary
as `board=` only when the hardware configuration deliberately differs:

```python
board = json.loads((root / "board.json").read_text())
driver = PynqDriver(root / "PulseTableSoc.xsa", params_path, board=board)
```

For example, `{"mts": null}` skips automatic MTS. This is an explicit opt-out, not an RFSoC4x2
setting. RFSoC4x2 startup values must never be applied to the ZCU216 driver.

## 6. Install the legacy ZCU216 remote service

The ZCU216 service preserves the existing Pyro protocol used by `riscq.driver.remote.RemoteDriver` and
the hardware notebooks. It is intentionally a compatibility service, not the new RFSoC4x2 service.
It has no pairing-token protocol; run it only on the trusted, isolated network used by the legacy
ZCU216 setup and bind it to the board's explicit address.

On the board, create the service's initial bundle directory:

```bash
sudo install -d -m 0755 /opt/riscq/zcu216-bits/default
sudo install -m 0644 PulseTableSoc.xsa /opt/riscq/zcu216-bits/default/top.xsa
sudo install -m 0644 zcu216-14q.json /opt/riscq/zcu216-bits/default/params.json
```

An optional `/opt/riscq/zcu216-bits/default/board.json` overrides the established ZCU216 defaults.
Omit it to use LMK 500.25 MHz, automatic MTS, ADC Nyquist zone 1, DAC Nyquist zone 2, and no
DAC-current override.

The service runs as root using `/usr/bin/python3`, so install the package into that exact PYNQ Python
environment during this one-time administrative setup:

```bash
sudo /usr/bin/python3 -m pip install --no-deps ./riscq-0.1.0-py3-none-any.whl
sudo /usr/bin/python3 -c 'import pynq, xrfclk, xrfdc, Pyro5, riscq; print("ZCU216 service environment OK")'
```

Create `/etc/riscq/zcu216.env` with `sudoedit`:

```text
RISCQ_ZCU216_BIND=192.168.1.122
RISCQ_ZCU216_PORT=9091
RISCQ_ZCU216_BUNDLE=default
```

Use the board's actual trusted-link address, not the example. Then install and start the ZCU216-only
unit:

```bash
sudo install -d -m 0755 /etc/riscq
sudo install -m 0644 riscq-rpc.service /etc/systemd/system/riscq-rpc.service
sudo systemctl daemon-reload
sudo systemctl enable --now riscq-rpc.service
sudo systemctl status riscq-rpc.service
```

Starting the service loads the selected bundle through `PynqDriver`, including the established
ZCU216 reference-clock, overlay, MMIO, MTS, Nyquist, and optional DAC-current sequence.

## 7. Connect from the host

From the host environment installed in step 1:

```python
from riscq.driver.remote import RemoteDriver
from riscq.map import SocMap, SocParams

driver = RemoteDriver("192.168.1.122", 9091)
print(driver.board.info())
soc_map = SocMap(SocParams.from_json(driver.board.get_params()))
print(soc_map.params.name, soc_map.params.qubit_num)
driver.close()
```

Once that succeeds, the ZCU216 hardware notebooks under [`examples/`](../../examples/) can use the
same address. `upload_bundle(...)` may install additional legacy XSA/config bundles through the
existing ZCU216 server API; the initially configured bundle above ensures the service can start
without a remote upload.

## Deployment boundaries

- `riscq-board-server`, `riscq-rpc.service`, `BoardServer`, and `RemoteDriver` are the preserved
  ZCU216 compatibility lane.
- RFSoC4x2 uses deterministic `.rqplatform`/`.rqfw` identity and the bounded `Board` API. Its
  authenticated service, provisioning, and pairing flow remain separate future work.
- Do not point the ZCU216 service at RFSoC4x2 artifacts or present it as the RFSoC4x2 deployment path.

For host-only development, use the co-simulation notebooks in [`examples/`](../../examples/). For
ZCU216 gateware details, use the maintained
[`riscvsoc-bd` guide](../../vivado-scripts/riscvsoc-bd/README.md#zcu216-legacy-floorplanned-flow).

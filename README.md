# RISC-Q quick start

This fork adds RFSoC4x2 support. It keeps the RISC-Q software path:

`RemoteDriver -> BoardServer/Pyro -> Driver -> riscq.run`

Use the RFSoC4x2 release in `software/platforms/rfsoc4x2-nv-1q/1.0.0` for the first hardware run.
The release includes a laser-capable bitstream. FPGA rebuilds are optional. Use a new output name
for each rebuild.

## Clone and set up the host

The tested host uses Ubuntu and Python 3.12. Clone the repository with its submodules. The RISC-V
test sources require `VexiiRiscv`. The active hardware core does not use `VexiiRiscv`.

```bash
git clone --recurse-submodules https://github.com/julianvale/RISC-QS.git RISC-Q
cd RISC-Q
python3.12 -m venv .venv
.venv/bin/python -m pip install pip==24.0
.venv/bin/python -m pip install -r tools/requirements-host.txt
.venv/bin/python -m pip install --no-deps --no-build-isolation -e ./software
.venv/bin/python tools/riscq_preflight.py
```

If you did not clone with `--recurse-submodules`, initialize the submodules:

```bash
git submodule update --init --recursive
```

From the repository root, run the host-only checks:

```bash
.venv/bin/python -m pytest \
  software/tests/test_map.py \
  software/tests/test_board_server.py \
  tools/test_package_rfsoc4x2_bundle.py -q
```

These checks do not validate an FPGA or physical I/O. The full Python suite compiles firmware. Add
`riscv64-unknown-elf-clang` to `PATH` before you run that suite:

```bash
.venv/bin/python tools/riscq_preflight.py --require-firmware
.venv/bin/python -m pytest software/tests -q
```

Build a wheel when you need one. Wheels are generated output. They are not tracked releases:

```bash
.venv/bin/python -m build --no-isolation --wheel --outdir build/wheels software
```

## Repository layout

- `src/`, `build.mill`: SpinalHDL/Scala hardware generator.
- `vivado-scripts/`: Vivado block-design and implementation flows.
- `software/riscq/`: installed Python package, BoardServer, drivers, compiler, and run layer.
- `software/configs/`: RTL elaboration configurations. These are not runtime `params.json` files.
- `software/platforms/`: checked hardware releases and runtime parameters.
- `software/firmware/`, `software/fw/`: RISC-V firmware sources.
- `software/python/`: historical, uninstalled implementation. Do not use it for new work.
- `tools/`: clean-clone preflight and non-overwriting release packaging helpers.
- `docs/`: mixed historical and current design documentation; this file is the setup entry point.

## Use the RFSoC4x2 release

The release directory is `software/platforms/rfsoc4x2-nv-1q/1.0.0`. It contains the laser-capable
bitstream and HWH file. It also contains a runtime parameter file. The runtime file does **not**
contain `with_laser_out`. The file `build-info.json` records the release artifacts.

The directory README contains historical information. Do not use it as the deployment procedure.

Verify the release files. Then create a new local bundle:

```bash
cd software/platforms/rfsoc4x2-nv-1q/1.0.0
sha256sum -c SHA256SUMS
cd ../../../..

.venv/bin/python tools/package_rfsoc4x2_bundle.py \
  --bit software/platforms/rfsoc4x2-nv-1q/1.0.0/PulseTableSoc.bit \
  --hwh software/platforms/rfsoc4x2-nv-1q/1.0.0/PulseTableSoc.hwh \
  --build-config software/configs/rfsoc4x2-nv-1q.json \
  --output build/bundles/rfsoc4x2-nv-laser-1.0.0
```

The command creates `top.bit`, `top.hwh`, normalized `params.json`, `SHA256SUMS`, and
`build-info.json`. The command stops if the output directory already exists.

Use the board installation procedure in this README to install the wheel and the bundle. If
BoardServer is already running, you can upload the three runtime files with
`riscq.driver.remote.upload_rfsoc4x2_bundle`. Use a new name for every new build.

```bash
export RISCQ_BOARD_HOST="board-address-or-ip"
.venv/bin/python - <<'PY'
import os
from pathlib import Path
from riscq.driver.remote import RemoteDriver, upload_rfsoc4x2_bundle

name = "rfsoc4x2-nv-laser-1.0.0"
bundle = Path("build/bundles") / name
driver = RemoteDriver(os.environ["RISCQ_BOARD_HOST"], 9091)
if name in driver.board.bundles():
    raise RuntimeError(f"refusing to overwrite remote bundle {name!r}")
upload_rfsoc4x2_bundle(
    driver, name, bundle / "top.bit", bundle / "top.hwh", bundle / "params.json"
)
driver.close()
PY
```

## Start BoardServer and connect

Use the `xilinx` account and the PYNQ Python interpreter on the RFSoC4x2 board. The board image must
provide PYNQ, XRT, and RFDC. This repository does not install those packages.

On the host, set the board address. Check that the destination does not contain the bundle. Then copy
the wheel, bundle, service file, and environment file:

```bash
export RISCQ_BOARD_HOST="board-address-or-ip"

ssh "xilinx@${RISCQ_BOARD_HOST}" \
  'test ! -e /tmp/rfsoc4x2-nv-laser-1.0.0 && test ! -e /opt/riscq/rfsoc4x2-bits/rfsoc4x2-nv-laser-1.0.0'
scp build/wheels/riscq-0.1.2-py3-none-any.whl \
  "xilinx@${RISCQ_BOARD_HOST}:/tmp/"
scp -r build/bundles/rfsoc4x2-nv-laser-1.0.0 \
  "xilinx@${RISCQ_BOARD_HOST}:/tmp/"
scp software/deploy/riscq-rfsoc4x2-board.service tools/rfsoc4x2.env.example \
  "xilinx@${RISCQ_BOARD_HOST}:/tmp/"
```

Log in to the board. Check the board dependencies before you install the wheel:

```bash
ssh "xilinx@${RISCQ_BOARD_HOST}"

RISCQ_PYTHON=/usr/local/share/pynq-venv/bin/python3
"${RISCQ_PYTHON}" -c 'import numpy, pynq, xrfclk, xrfdc, Pyro5, serpent, yaml; print("board Python dependencies: OK")'
sudo "${RISCQ_PYTHON}" -m pip install --no-deps \
  /tmp/riscq-0.1.2-py3-none-any.whl
sudo "${RISCQ_PYTHON}" -c \
  'import riscq, sys; print(sys.executable, riscq.__file__)'

sudo install -d -m 0755 /opt/riscq/rfsoc4x2-bits /etc/riscq
test ! -e /opt/riscq/rfsoc4x2-bits/rfsoc4x2-nv-laser-1.0.0
sudo cp -a /tmp/rfsoc4x2-nv-laser-1.0.0 \
  /opt/riscq/rfsoc4x2-bits/rfsoc4x2-nv-laser-1.0.0
cd /opt/riscq/rfsoc4x2-bits/rfsoc4x2-nv-laser-1.0.0
sha256sum -c SHA256SUMS

sudo install -m 0644 /tmp/riscq-rfsoc4x2-board.service \
  /etc/systemd/system/riscq-rfsoc4x2-board.service
sudo install -m 0644 /tmp/rfsoc4x2.env.example /etc/riscq/rfsoc4x2.env
sudo systemctl daemon-reload
sudo systemctl enable --now riscq-rfsoc4x2-board.service
sudo systemctl --no-pager --full status riscq-rfsoc4x2-board.service
```

The dependency check must pass before you install the wheel or start the service. If the check fails,
use a compatible RFSoC4x2 PYNQ image. You can also install the missing package in that PYNQ
environment. Do not replace PYNQ, XRT, or RFDC with host packages.

To change the bundle loaded at service startup, verify the new bundle first. Edit the bundle setting.
Then restart the service:

```bash
NEW_BUNDLE="rfsoc4x2-nv-laser-new-name"
test -f "/opt/riscq/rfsoc4x2-bits/${NEW_BUNDLE}/top.bit"
test -f "/opt/riscq/rfsoc4x2-bits/${NEW_BUNDLE}/top.hwh"
test -f "/opt/riscq/rfsoc4x2-bits/${NEW_BUNDLE}/params.json"

sudoedit /etc/riscq/rfsoc4x2.env
# Set: RISCQ_RFSOC4X2_BUNDLE=rfsoc4x2-nv-laser-new-name

sudo systemctl restart riscq-rfsoc4x2-board.service
sudo systemctl --no-pager --full status riscq-rfsoc4x2-board.service
sudo journalctl -u riscq-rfsoc4x2-board.service -n 30 --no-pager
```

The service passes the bundle name to `BoardServer --bundle`. A service restart downloads the
selected overlay. To roll back, restore the previous bundle name in the environment file. Then
restart the service.

From the host, run this read-only connection check. It checks the RPC service, the loaded bundle, and
the runtime-parameter handshake. It does not schedule pulses or access MMIO:

```bash
export RISCQ_BOARD_HOST="board-address-or-ip"
.venv/bin/python - <<'PY'
import os
from riscq.driver.remote import RemoteDriver
from riscq.map import SocParams

host = os.environ["RISCQ_BOARD_HOST"]
board = RemoteDriver(host, 9091)
print(board.board.info())
print(board.board.bundles())
print(SocParams.from_json(board.board.get_params()))
board.close()
PY
```

Loading or downloading an overlay changes hardware state. Use `board.board.load("bundle-name")` only
when you intend to change the loaded overlay.

The programs in `software/quantum_sensing/` use the same connection. The following example needs a
DAC0-to-ADC0 physical loopback. The host firmware preflight must also pass:

```bash
.venv/bin/python tools/riscq_preflight.py --require-firmware
.venv/bin/python software/quantum_sensing/loopback_dsl.py \
  --host "${RISCQ_BOARD_HOST}"
```

The command programs the experiment core. It produces converter output. It is not a read-only
connection check.

## Rebuild and package under a new name

The tested generation and build tools are Mill 1.1.0, Scala 2.12.18, and a Java runtime that Mill
can use. The tested Vivado version is 2025.2. Vivado must include the RFSoC IP and the Real Digital
RFSoC4x2 board files. Set `RISCQ_BOARD_REPO` to the directory that contains
`rfsoc4x2/1.0/board.xml`.

```bash
.venv/bin/python tools/riscq_preflight.py --require-hardware

RISCQ_PLATFORM=rfsoc4x2 \
RISCQ_BOARD_REPO=/path/to/board_files \
RISCQ_PROJ_NAME=rfsoc4x2-nv-laser-new-name \
RISCQ_RUN_BITSTREAM=1 \
vivado-scripts/riscvsoc-bd/build-riscvsoc-bd.sh
```

The build uses `software/configs/rfsoc4x2-nv-1q.json`. Its `with_laser_out` value controls RTL
elaboration. Package the build under a new name:

```bash
.venv/bin/python tools/package_rfsoc4x2_bundle.py \
  --bit build/rfsoc4x2-nv-laser-new-name/PulseTableSoc.bit \
  --hwh build/rfsoc4x2-nv-laser-new-name/PulseTableSoc.hwh \
  --build-config software/configs/rfsoc4x2-nv-1q.json \
  --output build/bundles/rfsoc4x2-nv-laser-new-name
```

The packager checks the laser build flag against the HWH. It removes elaboration-only fields from
the runtime parameters. It checks that Python can parse the deployed parameters.

A successful host package does not prove Vivado timing closure. It does not prove board deployment,
RF output, laser triggering, or optical behavior.

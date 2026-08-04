# RFSoC4x2 deployment

The RFSoC4x2 uses the same board server and remote driver as the ZCU216. The
`Rfsoc4x2Driver` handles the setup that is specific to this board.

## Install the wheel

Build the normal RISC-Q wheel on the host and copy it to the board:

```bash
cd software
python -m build --wheel
scp dist/riscq-<version>-py3-none-any.whl xilinx@<board-address>:/tmp/
```

Install it with the Python interpreter used by the board service. On the standard RFSoC4x2 image:

```bash
RISCQ_PYTHON=/usr/local/share/pynq-venv/bin/python3
sudo "$RISCQ_PYTHON" -m pip install --no-deps /tmp/riscq-<version>-py3-none-any.whl
sudo "$RISCQ_PYTHON" -c 'import riscq, sys; print(sys.executable, riscq.__file__)'
```

The last command shows which copy of RISC-Q the service will use.

## Install the board files

A bundle is a named directory containing the files needed to program the board:

```text
/opt/riscq/rfsoc4x2-bits/<name>/
  top.bit
  top.hwh
  params.json                 # platform name: rfsoc4x2-nv-1q
```

The repository includes a tested set of these files under
`software/platforms/rfsoc4x2-nv-1q/1.0.0/`. Check the files before copying them:

```bash
cd software/platforms/rfsoc4x2-nv-1q/1.0.0
sha256sum -c SHA256SUMS
```

For a new hardware build, keep its `.bit` and `.hwh` files together. Use the
`rfsoc4x2-nv-1q` `params.json`. Copy the three files into a new bundle directory and give them the
names shown above.

You can also upload files through a board server that is already running:

```python
from riscq.driver.remote import RemoteDriver, upload_rfsoc4x2_bundle

drv = RemoteDriver("<board-address>", 9091)
upload_rfsoc4x2_bundle(drv, "laser-test", "top.bit", "top.hwh", "params.json")
drv.board.load("laser-test")
```

An upload replaces files with the same names. Use a new bundle name if you need to keep the old
files.

## Run the board server

Start the server directly with:

```bash
"$RISCQ_PYTHON" -m riscq.board.server \
  --bits /opt/riscq/rfsoc4x2-bits \
  --bundle laser-test \
  --host <private-link-address> \
  --port 9091
```

For the supplied `software/deploy/riscq-rfsoc4x2-board.service`, create
`/etc/riscq/rfsoc4x2.env` with:

```text
RISCQ_PYTHON=/usr/local/share/pynq-venv/bin/python3
RISCQ_RFSOC4X2_BUNDLE=laser-test
RISCQ_RFSOC4X2_BIND=<private-link-address>
RISCQ_RFSOC4X2_PORT=9091
```

Install and start the system service with:

```bash
sudo install -m 0644 software/deploy/riscq-rfsoc4x2-board.service \
  /etc/systemd/system/riscq-rfsoc4x2-board.service
sudo systemctl daemon-reload
sudo systemctl enable --now riscq-rfsoc4x2-board.service
```

Board checks and RF output tests are separate commands. The server does not run them at startup.

## Connect an application

```python
from riscq.driver.remote import RemoteDriver
from riscq.map import SocMap, SocParams

drv = RemoteDriver("<board-address>", 9091)
soc_map = SocMap(SocParams.from_json(drv.board.get_params()))
```

Use this driver with `compile_kernel`, `riscq.run.setup`, and `riscq.run.rerun`. The run layer holds
the processor in reset while it loads a program. It checks the complete program before starting it.
It returns the processor to reset after the run or after an error.

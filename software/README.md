# RISC-Q supported software

`software/riscq`, `software/fw`, and `software/tests` are the only supported implementation. The
retained `software/python/.gitignore` and `software/firmware/.gitignore` protect local generated
state; those directories are not package or runtime inputs.

## RFSoC deployment boundary

The host-only deployment foundation is grouped under `riscq.deployment`:

- `riscq/deployment/identity.py` binds the complete raw configuration plus map and firmware ABI.
- `riscq/deployment/bundle.py` creates and verifies deterministic `.rqplatform` and `.rqfw` files.
- `riscq/deployment/engine.py` provides explicit RFSoC4x2/ZCU216 adapters and reset-safe execution.
- `riscq/api.py` exports the public `Board` facade; it exposes no raw MMIO, shell, board-side Python,
  filesystem, or runtime platform-replacement operations.

RFSoC4x2-specific product assets are easy to identify:

- raw configuration: `configs/rfsoc4x2-nv-1q.json`
- accepted release: `platforms/rfsoc4x2-nv-1q/1.0.0/`
- validation firmware: `fw/rfsoc4x2_*.c` and `fw/board_check.c`
- validation tests: `tests/test_rfsoc4x2_*.py`

The ZCU216 implementation remains explicit in `riscq/board/pynq_driver.py` and
`configs/zcu216-14q.json`; RFSoC4x2 never inherits its MTS, Nyquist, or DAC-current startup behavior.

For the complete existing ZCU216 path—from the Vivado XSA through local PYNQ operation or the
preserved `riscq-board-server`/`RemoteDriver` deployment—follow
[`docs/software/11-zcu216-setup.md`](../docs/software/11-zcu216-setup.md).

## RFSoC4x2 host commands

```bash
python -m venv .venv
. .venv/bin/activate
pip install './software[test]'
riscq firmware inspect experiment.rqfw
riscq platform inspect software/platforms/rfsoc4x2-nv-1q/1.0.0/rfsoc4x2-nv-1q-1.0.0.rqplatform
```

Firmware construction requires an RV32-capable clang plus objcopy and nm:

```bash
riscq firmware build experiment.c --name experiment --version 1.0.0 \
  --params software/configs/rfsoc4x2-nv-1q.json --output experiment.rqfw
```

Platform developers can package already-built bytes with `riscq platform package`; the command
does not run Vivado or program hardware. Existing output files are never overwritten.

The RFSoC4x2 workflow is one trusted host directly connected to one board: provision the accepted
platform, pairing token, configured private-link service, and boot self-test, then use
`Board.connect()` or `riscq firmware run`. The token and bind address protect against accidental use
of the wrong interface, not a full multi-user security model. Existing platform, self-test,
configuration, and profile files are never overwritten unless `--replace` is explicit. This does not
change the separate ZCU216 workflow documented above.

# RISC-Q supported software

`software/riscq`, `software/fw`, and `software/tests` are the only supported implementation. The
retained `software/python/.gitignore` and `software/firmware/.gitignore` protect local generated
state; those directories are not package or runtime inputs.

## Board deployment

Both RFSoC4x2 and ZCU216 use the same `riscq-board-server` and `RemoteDriver` Pyro protocol. The
RFSoC4x2 backend is `riscq.board.rfsoc4x2_driver.Rfsoc4x2Driver`; it is deliberately separate from
the unchanged ZCU216 `PynqDriver` and does not expose its MTS, Nyquist, or DAC-current controls.

For the complete RFSoC4x2 procedure, see
[`docs/software/07-host-deployment.md`](../docs/software/07-host-deployment.md). The separate
ZCU216 workflow is in [`docs/software/09-zcu216-setup.md`](../docs/software/09-zcu216-setup.md).

## Development install

```bash
python -m venv .venv
. .venv/bin/activate
pip install './software[test]'
```

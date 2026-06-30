"""Module 05 acceptance test (docs/software/05 §6): one experiment, run unchanged against a local
Soc(DummyDriver) and a Soc(RemoteDriver) talking to a localhost Pyro5 daemon, must issue the
identical (addr, data) write stream — proving the Driver seam survives the wire before any board.
"""

import os
import threading

import numpy as np
import pytest

from riscq import Soc, DummyDriver, default_config, pulse

Pyro5 = pytest.importorskip("Pyro5.api", reason="Pyro5 not installed")
from riscq.remote import make_server, RemoteDriver  # noqa: E402

REPO = os.path.normpath(os.path.join(os.path.dirname(__file__), "..", "..", ".."))
ELF = os.path.join(REPO, "src/riscq/soc/sim/sw/pulse_sched.elf")


def experiment(soc):
    """Backend-agnostic experiment code — byte-identical across local/remote/sim."""
    soc.reset_hold()
    soc.load_program(0, ELF)
    soc.load_envelope(0, "gate", pulse.gaussian(2 * soc.cfg.batch_size / soc.cfg.fs, soc.cfg.fs),
                      base_line=10)
    soc.set_time_offset(0)
    soc.set_from_host(0x1234)
    soc.reset_release()


@pytest.fixture
def daemon():
    import Pyro5.api
    cfg = default_config(qubit_num=2)
    srv = make_server(DummyDriver(), cfg)
    d = Pyro5.api.Daemon()
    uri = str(d.register(srv))
    th = threading.Thread(target=d.requestLoop, daemon=True)
    th.start()
    yield srv, uri, cfg
    d.shutdown()
    th.join(timeout=2)


def test_local_vs_remote_write_logs(daemon):
    srv, uri, cfg = daemon

    drv_local = DummyDriver()
    experiment(Soc(drv_local, cfg))

    experiment(Soc(RemoteDriver(uri=uri), cfg))

    assert srv._d.writes == drv_local.writes, "remote issued a different write stream than local"
    assert len(drv_local.writes) > 50, "sanity: the program + envelope load should issue many writes"


def test_config_snapshot_roundtrip(daemon):
    from riscq import SocConfig
    srv, uri, cfg = daemon
    client = RemoteDriver(uri=uri)
    snap = SocConfig.from_json(client.get_config())
    assert snap.fs == cfg.fs
    assert snap.contract.qubit_num == cfg.contract.qubit_num
    assert snap.host_control() == cfg.host_control()


def test_remote_readback(daemon):
    srv, uri, cfg = daemon
    soc = Soc(RemoteDriver(uri=uri), cfg)
    soc.drv.write_word(cfg.host_core_ram(1) + 0x40, 0xCAFEBABE)
    assert soc.read_core_ram(1, 0x40) == 0xCAFEBABE


if __name__ == "__main__":
    raise SystemExit(pytest.main([__file__, "-v"]))

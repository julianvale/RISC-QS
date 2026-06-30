"""remote.py — drive the SoC over the network with the same code as locally (docs/software/05).

The client *is* a Driver (RemoteDriver), so a Soc built on it behaves identically to one built on a
DummyDriver/CocotbDriver — experiment code is byte-identical across local, remote, and sim. The
board-side _Server wraps a local Driver and exposes only the Driver ABC + a one-time SocConfig
snapshot, so all unit math runs client-side and only hardware actions cross the wire.
"""

import base64
from typing import Sequence

from .driver.base import Driver
from .socconfig import SocConfig, default_config


# ── numpy-friendly encoding: arrays ship as one compact (b64 bytes, shape, dtype) blob, never pickle.
def _enc(words):
    try:
        import numpy as np
        if isinstance(words, np.ndarray):
            return {"__nd__": base64.b64encode(np.ascontiguousarray(words).tobytes()).decode(),
                    "shape": list(words.shape), "dtype": str(words.dtype)}
    except ImportError:
        pass
    return [int(w) for w in words]


def _dec(ws):
    if isinstance(ws, dict) and "__nd__" in ws:
        import numpy as np
        arr = np.frombuffer(base64.b64decode(ws["__nd__"]), dtype=ws["dtype"])
        return arr.reshape(ws["shape"]).tolist()
    return ws


class RemoteDriver(Driver):
    """A Driver whose words land on a remote board. The Soc facade, ELF loader and envelope packer
    all run locally on the client, decomposing to write_words RPCs (one per array, shipped whole)."""

    def __init__(self, ns_host: str = None, name: str = "riscq", uri: str = None):
        import Pyro5.api
        if uri is None:
            ns = Pyro5.api.locate_ns(host=ns_host)
            uri = ns.lookup(name)
        self._d = Pyro5.api.Proxy(uri)

    def write_word(self, addr: int, data: int) -> None:
        self._d.write_word(int(addr), int(data) & 0xFFFFFFFF)

    def write_words(self, addr: int, words: Sequence[int]) -> None:
        self._d.write_words(int(addr), _enc(words))            # one RPC, whole array

    def read_word(self, addr: int) -> int:
        return self._d.read_word(int(addr))

    def reset_hold(self) -> None:
        self._d.reset_hold()

    def reset_release(self) -> None:
        self._d.reset_release()

    def get_config(self) -> str:
        return self._d.get_config()                            # JSON SocConfig snapshot


def make_server(driver: Driver, cfg: SocConfig):
    """The network face: a @exposed object with exactly the Driver ABC + get_config."""
    import Pyro5.api

    @Pyro5.api.expose
    class Server:                                              # Pyro5 forbids exposing _-prefixed names
        def __init__(self, d, c):
            self._d, self._cfg = d, c
            d.ctrl = lambda off: c.host_control() + off        # mirror what Soc does for the backend

        def write_word(self, a, d):
            self._d.write_word(int(a), int(d) & 0xFFFFFFFF)

        def write_words(self, a, ws):
            self._d.write_words(int(a), _dec(ws))

        def read_word(self, a):
            return int(self._d.read_word(int(a)))

        def reset_hold(self):
            self._d.reset_hold()

        def reset_release(self):
            self._d.reset_release()

        def get_config(self):
            return self._cfg.to_json()

    return Server(driver, cfg)


def serve(ns_host: str = None, bitfile: str = None, name: str = "riscq",
          cfg: SocConfig = None, host: str = None) -> None:
    """Board-side daemon: wrap the real PynqDriver, register, and serve forever (the systemd entry)."""
    import Pyro5.api
    from .driver.pynq import PynqDriver

    srv = make_server(PynqDriver(bitstream=bitfile), cfg or default_config())
    daemon = Pyro5.api.Daemon(host=host)
    uri = daemon.register(srv, objectId=name)
    if ns_host is not None:
        Pyro5.api.locate_ns(host=ns_host).register(name, uri)
    print(f"riscq RPC server ready: {uri}")
    daemon.requestLoop()

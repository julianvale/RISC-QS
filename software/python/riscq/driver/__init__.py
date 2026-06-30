"""Driver backends. CocotbDriver lives in cosim/, RemoteDriver in remote.py (both subclass Driver)."""

from .base import Driver
from .dummy import DummyDriver

__all__ = ["Driver", "DummyDriver"]

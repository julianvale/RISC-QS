"""RFSoC deployment foundation: exact identity, safe bundles, and reset-safe execution."""

from riscq.deployment.bundle import (BundleError, EnvelopeAsset, VerifiedBundle,
                                     create_firmware_bundle, load_firmware_bundle)
from riscq.deployment.context import PlatformContext
from riscq.deployment.engine import (DeploymentEngine, DeploymentError,
                                     Rfsoc4x2Adapter, Zcu216Adapter, adapter_for)
from riscq.deployment.identity import RawConfigIdentity, raw_config_identity
from riscq.deployment.release import (ReleaseError, activate_release, current_release,
                                      require_release_directory, validate_release_name)

__all__ = [
    "BundleError", "EnvelopeAsset", "VerifiedBundle", "create_firmware_bundle",
    "load_firmware_bundle", "PlatformContext", "ReleaseError", "activate_release",
    "current_release", "require_release_directory", "validate_release_name",
    "DeploymentEngine", "DeploymentError",
    "Rfsoc4x2Adapter", "Zcu216Adapter", "adapter_for", "RawConfigIdentity",
    "raw_config_identity",
]

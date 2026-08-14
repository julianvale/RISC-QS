# Quantum-sensing programs

These programs target the `rfsoc4x2-nv-1q` platform. Use the four maintained
experiments for measurements. Use the other programs to verify the setup.

Start with the loopback program with an SMA cable connecting DACA to ADCA directly. Verify that the
reported magnitude is reasonable (should be ~100k or more). A null result can be in the ~1000 range. 

Use `rfsoc4x2_am.py` and `rfsoc4x2_laser_test.py` to verify analog and digital output respectively on a scope.

## Hardware limits

The platform DSP clock is 491.52 MHz. One DSP batch is 2.0345 ns. Express all
kernel times as integer batches.

| Item | Limit or meaning |
| --- | --- |
| DAC batch | 16 samples at 7.86432 GS/s |
| ADC batch | 4 samples at 1.96608 GS/s |
| Pulse duration | 1 to 65,535 batches; maximum 133.33 us |
| Integrated-readout window | 1 to 16,384 batches; maximum 33.33 us |
| Raw-readout buffer | 1,024 batches; 4,096 ADC samples; 2.083 us |
| Envelope memory | 1,024 lines per channel |
| Timed queue | Four pending events per hardware queue |
| DAC frequency step | 120 kHz |

The 1,024-line envelope repeats when a pulse is longer than the envelope. This
is safe for a constant envelope. It repeats a shaped envelope and can create
unwanted modulation.

Use logical channel 0 for the MW output, channel 1 for the AOM/readout output,
and channel 2 for ADC0 demodulation. The platform file maps these logical
channels to the physical RFSoC tiles.

Keep enough schedule lead before the first event. The existing programs use
2,048 batches. Do not put more than four future events in one timed queue.
Drain the queue or refill it as earlier events complete.

The PMODA laser output is a 1.8 V digital signal. The lab laser is triggered by
the rising edge. The `play_laser()` high time makes a reliable trigger. It does
not set the optical pulse length. Set the optical pulse length in the external
laser hardware.

Amplitude is a signed DAC code fraction. It is not power at the device. Cable
loss, amplifier gain, AOM response, and MW delivery require external
calibration. Frequency is also subject to RFDC and analog-path limits.

## Compile time and run time

`@kernel` functions use a restricted, typed Python subset. They compile to a
resident RV32 program. They do not run as normal Python on the board.

| Compile-time item | Run-time item |
| --- | --- |
| Platform and `SocMap` | Unbound kernel `int` parameters |
| Kernel source and control structure | Input-array contents |
| `ParamTable` channel, pulse names, order, and slot count | Frequency, amplitude, duration, and timing codes passed as integers |
| Envelope samples and memory allocation | Output-array contents |
| `Array` length | Pulse-table fields changed with `run.write_slot()` |
| Any integer explicitly bound in `compile_kernel()` | Repeated acquisitions with `run.rerun()` |

`run.setup()` loads the program, envelopes, and pulse tables once. A later
`run.rerun()` writes run-time parameters, releases reset, waits for completion,
reads the result, and asserts reset again. It does not reload the program.

Each `run.rerun()` has a host and RPC gap. A sequence of reruns is not a
periodic hardware pulse train. Put a bounded periodic sequence inside one
kernel and use absolute timestamps when cadence is important.

Convert physical units on the host with `riscq.pulses.units`. Pass the resulting
frequency and amplitude register words directly to `set_freq()` and
`set_amp()`. Pass a duration to `set_dur()` as `duration_batches << 16`.
Validate all converted values before the run.

Use `from typing import no_type_check` and apply `@no_type_check` above
`@kernel` when VS Code or Pylance reports the compiler-provided DSL names such
as `now()`, `play()`, or `read_real()`.

## Readout rules

The raw and integrated readout paths are different.

- Raw `robs` capture requires a valid readout-drive interval. A zero-amplitude
  channel-1 pulse can supply this interval without RF output. Read only the
  written prefix. The rest of the buffer can contain stale data.

- Integrated readout uses a channel-2 demodulation pulse. Wait until the window
  start plus `READOUT_LEAD` before you call `read_res()`, `read_real()`, and
  `read_imag()`.

- Calibrate the RFSoC integration delay and window locally.

## Maintained experiments

### `nv_integrator_window.py`

Scan integration-window offset and duration with interleaved laser-off and
laser-on shots. Use this program to find the detector transient in the
production zero-Hz integrator. Its score measures optical response, not spin
contrast. The offset is relative to the laser-trigger rising edge.

### `nv_pulsed_esr_halfmw.py`

Run the primary half-MW pulsed ESR scan. Each normal cycle has an MW-on signal
half and an MW-off reference half. The resident kernel maintains the hardware
cadence. Use `symmetric-reset` preparation when both acquired shots must receive
the same independent reset sequence.

### `nv_spin_contrast_abba_window.py`

Scan the integration window after independent optical reset and dark MW. The
program uses detuned/resonant/resonant/detuned order to reduce linear drift and
order bias. Use it after you select credible resonant and reference conditions.
It optimizes a spin-sensitive window, not total brightness.

### `nv_pulsed_rabi_abba.py`

Sweep dark-MW duration with independent optical preparation for every shot.
The default ABBA reference is detuned MW. Use the MW-off reference option when
required. By default, MW ends before optical readout, but the MW-overlap option exists as a diagnostic. 
Different requested durations can quantize to the same DSP batch; the program rejects duplicates.

## Setup and path diagnostics

| Program | Purpose and assumption |
| --- | --- |
| `nv_raw_readout.py` | Compare laser-off and laser-on raw ADC traces. Use it to find detector arrival, polarity, and ringing. |
| `readout_buffer_loopback.py` | Verify raw-buffer capture with a physical DACA-to-ADCA loopback. It does not test the integrator. |
| `loopback_dsl.py` | Verify integrated DACA-to-ADCA acquisition with matched, no-DAC, and detuned controls. It requires a physical loopback. |
| `rfsoc4x2_aom.py` | Produce a constant 80 MHz channel-1 carrier for an oscilloscope or AOM-path check on DACB. |
| `rfsoc4x2_aom_am.py` | Produce an 80 MHz carrier with a repeating approximately 10.08 MHz amplitude envelope on DACB. |
| `rfsoc4x2_laser_test.py` | Produce one or two PMODA digital events for an oscilloscope check. It does not measure optical output. Activates Pin AF16 (top right when facing the PMOD port head on) |
| `nv_common.py` | Provide shared host helpers. It is not an experiment. |

## Writing your own program

Use this order:

1. Load `SocParams` and construct `SocMap`.
2. Define one `ParamTable` for each RF or demodulation channel.
3. Define a small `@kernel` with typed positional parameters.
4. Initialize pulse parameters once at kernel start.
5. Schedule events from `now() + SCHEDULE_LEAD` with absolute timestamps.
6. Wait for the last result or event before the kernel returns.
7. Compile with fixed table bindings and fixed array lengths.
8. Connect to the board service, call `run.setup()` once, and use
   `run.rerun()` for validated run-time values.
9. Save the raw signal, reference, timing, codes, and platform identity. Do not
   save only a normalized curve.

Keep the kernel bounded. Check pulse duration, integration length, queue depth,
envelope length, integer range, and output-array size on the host. Start from a
maintained experiment that uses the same readout path.

Pass a nonempty board host with `--host` or the environment variable supported
by the selected program. The board service uses port 9091. Confirm that the
loaded bitstream, HWH file, and platform JSON belong to the same bundle before
you interpret data.

Run `<program>.py --help` for the current arguments and defaults.

## Physical Setup
### Microwave antenna setup
  1. Connect the chosen amplifier output (tested with ZHL-16W-43-S+) to the antenna with a microwave circulator to prevent reflections from the potentially poorly matched antenna. 
  2. Connect DACA to amplifier input via SMA.
  3. Power amplifier
### Digital Laser trigger
  1. Connect the PMOD adapter to the PMOD pins at the bottom right of the board (using the text on the screen as a reference).
     The active pin is the top right when facing the PMOD port directly. The connector should have its plastic protrusion facing up.
  2. Connect the PMOD adapter to the NPL52B trigger input via SMA. Make sure the laser is set to user trigger mode.
### Readout
  1. Connect RFout port of photodiode to ADCA on board via SMA. 
### AOM setup
This one is kind of complicated. Make sure you verify the power you're sending through everything first. The full scale power output of DACB was measured to be ~-2 dBM
  1. Connect the larger amplifier output (ZHL-03-5WF+) to the AOM.
  2. Add 9 dB attenuation to the input of the ZHL-03-5WF+.
  3. Connect the output of the smaller amplifier (ZX60-3018G-S+) to the 9 dB attenuators.
  4. Connect the input of the ZX60-3018G-S+ to DACB, with 1 dB attenuation in between. 
  5. Power amplifiers

## Miscellaneous
### Safety
 - Terminate analog outputs to 50 Ohm before generating pulses or powering amplifiers
 - When attenuating, place one attenuator before the amplifier to reduce reflection to board
 - Measure the power output from amplifiers using suitably high power microwave analyzer.
 - Check maximum input power and 1 dB compression point of amplifiers before connecting.

### Troubleshooting
 - ssh onto the board with `ssh xilinx@192.168.2.99`
 - If ssh is unavailable/timing out, use the USB interface, and start a screen session to communicate over UART: `sudo screen /dev/ttyUSB1 115200`. It might
  be under a different device. This might not be as simple if using WSL. 

### Notes
  - The laser trigger is very sensitive, so every time I tried triggering the laser, it would trigger twice, once on the rising edge, and then again on the recovery from the falling edge.
    Might want to investigate putting a resistor/voltage divider on the PMOD output (would require some soldering). 
  - Email me if you have any questions jvale@berkeley.edu.

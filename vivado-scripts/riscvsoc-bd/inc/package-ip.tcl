# ---- Package the SpinalHDL top as a user IP -------------------------------------------------------
# Vivado infers the AXI / AXI-Stream / clock bus interfaces from the X_INTERFACE_INFO attributes the
# `vivado=true` RTL carries; here we only have to (a) stamp the clock FREQ_HZ and reset POLARITY bus
# parameters and (b) bind each bus interface to its clock — S_AXIS to the 100 MHz hostClk, every
# existing DAC{i}_AXIS / ADC{i}_AXIS to dspClk. Ported from the RISC-Q `plip.tcl`.

# OOC synthesis clocks for the packaged IP. Vivado gives a packaged user IP NO clocks in its
# out-of-context child synth run, so that run maps UNTIMED — measured on the 14q SoC: the DSP
# mapper then leaves the ComplexMul MREG stage empty (108 DSP48s at DRC DPOP-4, mult→ALU→P
# combinational at 500 MHz) and the pg-cordic cone collapses the whole build; the identical
# netlist synthesized WITH these clocks maps MREG correctly (DPOP-4 = 0). The XDC must be a
# project source BEFORE ipx::package_project -import_files, or the packager drops it
# (IP_Flow 19-5109); the `out_of_context` USED_IN tag scopes it to the OOC child run only —
# in-context, the BD's real clocks rule.
set fh [open $SOURCE_PATH/PulseTableSoc_ooc.xdc w]
puts $fh "create_clock -name dspClk -period [format %.3f [expr {1e9 / $DSP_FREQ}]] \[get_ports dspClk\]"
puts $fh "create_clock -name hostClk -period [format %.3f [expr {1e9 / $HOST_FREQ}]] \[get_ports hostClk\]"
close $fh
add_files -fileset constrs_1 $SOURCE_PATH/PulseTableSoc_ooc.xdc
set_property USED_IN {synthesis implementation out_of_context} [get_files $SOURCE_PATH/PulseTableSoc_ooc.xdc]

ipx::package_project -root_dir $IP_REPO -vendor user.org -library user -taxonomy /UserIP \
  -import_files -set_current false -force
ipx::open_ipxact_file $IP_REPO/component.xml

# SpinalHDL memories use relative `$readmemb` paths. Vivado does not import standalone .bin project
# sources through package_project, so copy and register them explicitly in the IP-XACT memory-
# initialization file group. This keeps the packaged IP self-contained and relocatable without putting
# non-HDL files into the synthesis/simulation HDL groups.
set _mif_group [ipx::get_file_groups -quiet xilinx_memoryinitializationfiles \
  -of_objects [ipx::current_core]]
if {[llength $_mif_group] == 0} {
  set _mif_group [ipx::add_file_group -type {mif_files} \
    xilinx_memoryinitializationfiles [ipx::current_core]]
}
foreach _bin [glob -nocomplain $SOURCE_PATH/*.bin] {
  set _dst $IP_REPO/src/[file tail $_bin]
  file copy -force $_bin $_dst
  ipx::add_file $_dst $_mif_group
}

# ensure the packaged copy keeps the OOC scoping, then drop the project-side entry (the IP holds
# its own imported copy; the outer BD project must not carry an IP-port create_clock).
foreach _g [ipx::get_file_groups -of_objects [ipx::current_core]] {
  foreach _f [ipx::get_files -of_objects $_g "*PulseTableSoc_ooc.xdc"] {
    set_property USED_IN {synthesis implementation out_of_context} $_f
  }
}
remove_files [get_files $SOURCE_PATH/PulseTableSoc_ooc.xdc]

# clock frequencies
ipx::add_bus_parameter FREQ_HZ [ipx::get_bus_interfaces hostClk -of_objects [ipx::current_core]]
set_property value $HOST_FREQ [ipx::get_bus_parameters FREQ_HZ \
  -of_objects [ipx::get_bus_interfaces hostClk -of_objects [ipx::current_core]]]
ipx::add_bus_parameter FREQ_HZ [ipx::get_bus_interfaces dspClk -of_objects [ipx::current_core]]
set_property value $DSP_FREQ [ipx::get_bus_parameters FREQ_HZ \
  -of_objects [ipx::get_bus_interfaces dspClk -of_objects [ipx::current_core]]]

# Bus-to-clock associations. Discover the converter interfaces from the packaged component instead of
# assuming the ZCU216 maximum of 16 DACs and 16 ADCs; this also guarantees ASSOCIATED_BUSIF never names
# an interface absent from a smaller platform configuration.
ipx::associate_bus_interfaces -busif S_AXIS -clock hostClk [ipx::current_core]
ipx::associate_bus_interfaces -busif S_AXIS -clock dspClk -remove [ipx::current_core]
set _converter_busifs {}
foreach _busif [ipx::get_bus_interfaces -of_objects [ipx::current_core]] {
  set _name [get_property NAME $_busif]
  if {[regexp {^(DAC|ADC)[0-9]+_AXIS$} $_name]} { lappend _converter_busifs $_name }
}
if {[llength $_converter_busifs] == 0} {
  error "packaged $TOP_MODULE has no DAC*_AXIS or ADC*_AXIS interfaces"
}
foreach _name [lsort -dictionary $_converter_busifs] {
  ipx::associate_bus_interfaces -busif $_name -clock dspClk [ipx::current_core]
  ipx::associate_bus_interfaces -busif $_name -clock hostClk -remove [ipx::current_core]
}
puts "\[package-ip\] dspClk converter interfaces: [join [lsort -dictionary $_converter_busifs] { }]"

# reset polarities
ipx::add_bus_parameter POLARITY [ipx::get_bus_interfaces hostRst -of_objects [ipx::current_core]]
set_property value ACTIVE_HIGH [ipx::get_bus_parameters POLARITY \
  -of_objects [ipx::get_bus_interfaces hostRst -of_objects [ipx::current_core]]]
ipx::add_bus_parameter POLARITY [ipx::get_bus_interfaces dspRst -of_objects [ipx::current_core]]
set_property value ACTIVE_HIGH [ipx::get_bus_parameters POLARITY \
  -of_objects [ipx::get_bus_interfaces dspRst -of_objects [ipx::current_core]]]

# package_project already inferred and imported the RTL ports. Do not merge project sources again here:
# doing so adds absolute SOURCE_PATH entries beside the imported relative RTL in component.xml.
ipx::create_xgui_files [ipx::current_core]
ipx::update_checksums [ipx::current_core]
ipx::check_integrity [ipx::current_core]
ipx::save_core [ipx::current_core]
set_property ip_repo_paths $IP_REPO [current_project]
update_ip_catalog

# ClockInterface is a ZCU216-only plain BD module reference, not part of the user IP. RFSoC4x2 uses
# PS pl_clk0 and RFDC clk_dac0 directly and must neither generate nor add this source.
if {$USE_CLOCK_INTERFACE} {
  if {![file exists $SOURCE_PATH/ClockInterface.v]} {
    error "missing ZCU216 clock wrapper $SOURCE_PATH/ClockInterface.v"
  }
  add_files $SOURCE_PATH/ClockInterface.v
  update_compile_order -fileset sources_1
}

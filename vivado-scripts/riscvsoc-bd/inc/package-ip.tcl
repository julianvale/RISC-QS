# ---- Package the SpinalHDL top as a user IP -------------------------------------------------------
# Vivado infers the AXI / AXI-Stream / clock bus interfaces from the X_INTERFACE_INFO attributes the
# `vivado=true` RTL carries; here we only have to (a) stamp the clock FREQ_HZ and reset POLARITY bus
# parameters and (b) bind each bus interface to its clock — S_AXIS to the 100 MHz hostClk, every
# DAC{i}_AXIS / ADC{i}_AXIS to the 500 MHz dspClk. Ported from the RISC-Q `plip.tcl`.

ipx::package_project -root_dir $IP_REPO -vendor user.org -library user -taxonomy /UserIP \
  -import_files -set_current false -force -quiet
ipx::open_ipxact_file $IP_REPO/component.xml

# clock frequencies
ipx::add_bus_parameter FREQ_HZ [ipx::get_bus_interfaces hostClk -of_objects [ipx::current_core]]
set_property value $HOST_FREQ [ipx::get_bus_parameters FREQ_HZ \
  -of_objects [ipx::get_bus_interfaces hostClk -of_objects [ipx::current_core]]]
ipx::add_bus_parameter FREQ_HZ [ipx::get_bus_interfaces dspClk -of_objects [ipx::current_core]]
set_property value $DSP_FREQ [ipx::get_bus_parameters FREQ_HZ \
  -of_objects [ipx::get_bus_interfaces dspClk -of_objects [ipx::current_core]]]

# bus<->clock associations
ipx::associate_bus_interfaces -busif S_AXIS -clock hostClk [ipx::current_core]
ipx::associate_bus_interfaces -busif S_AXIS -clock dspClk -remove [ipx::current_core]
for {set i 0} {$i < 16} {incr i} {
  ipx::associate_bus_interfaces -busif DAC${i}_AXIS -clock dspClk [ipx::current_core]
  ipx::associate_bus_interfaces -busif DAC${i}_AXIS -clock hostClk -remove [ipx::current_core]
  ipx::associate_bus_interfaces -busif ADC${i}_AXIS -clock dspClk [ipx::current_core]
  ipx::associate_bus_interfaces -busif ADC${i}_AXIS -clock hostClk -remove [ipx::current_core]
}

# reset polarities
ipx::add_bus_parameter POLARITY [ipx::get_bus_interfaces hostRst -of_objects [ipx::current_core]]
set_property value ACTIVE_HIGH [ipx::get_bus_parameters POLARITY \
  -of_objects [ipx::get_bus_interfaces hostRst -of_objects [ipx::current_core]]]
ipx::add_bus_parameter POLARITY [ipx::get_bus_interfaces dspRst -of_objects [ipx::current_core]]
set_property value ACTIVE_HIGH [ipx::get_bus_parameters POLARITY \
  -of_objects [ipx::get_bus_interfaces dspRst -of_objects [ipx::current_core]]]

ipx::merge_project_changes ports [ipx::current_core]
ipx::create_xgui_files [ipx::current_core]
ipx::update_checksums [ipx::current_core]
ipx::check_integrity [ipx::current_core]
ipx::save_core [ipx::current_core]
set_property ip_repo_paths $IP_REPO [current_project]
update_ip_catalog

# ClockInterface is a plain BD module reference (instantiated as `clkifc`), not part of the user IP —
# add it now, after packaging, so it does not get swept into the IP archive.
add_files $SOURCE_PATH/ClockInterface.v
update_compile_order -fileset sources_1

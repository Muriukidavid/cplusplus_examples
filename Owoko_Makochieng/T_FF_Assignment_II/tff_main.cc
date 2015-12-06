/*
 * tff_main.cc
 *
 *  Created on: 6 Dec 2015
 *      Author: makochieng
 */

#include "systemc.h"
#include <systemc>
#include "tff_module.h"
#include "tff_driver.h"
#include "tff_monitor.h"

/**
 * Instantiate the T flipflop
 */
int sc_main (int argv, char * argc[]){
	sc_signal<bool> data, clk, reset, output;

	//Start module instances
	tff_driver tff_d("driver instance");
	tff_module tff_mod("tff_module instance");
	tff_monitor tff_mon("tff_monitor instance");

	tff_d.data(data);
	tff_d.clk(clk);
	tff_d.reset(reset);

	tff_mon.data(data);
	tff_mod.data(data);

	tff_mon.clock(clk);
	tff_mod.clk(clk);

	tff_mon.reset(reset);
	tff_mod.reset(reset);

	tff_mon.output(output);
	tff_mod.q(output);

	/**
	 * Creating a trace file
	 * Trace the signals, and name the various signals
	 */

	sc_trace_file *tf;
	tf = sc_create_vcd_trace_file("timingDiagram"); //sets the filename .vcd file
	tf ->set_time_unit(1, SC_NS);

	sc_trace(tf, data, "data_input");
	sc_trace(tf, clk, "clock_signal");
	sc_trace(tf, reset, "reset_switch");
	sc_trace(tf, output, "Output");

	if (!sc_pending_activity())
		sc_start(75, SC_NS);

	sc_close_vcd_trace_file(tf);

	return 0;
}



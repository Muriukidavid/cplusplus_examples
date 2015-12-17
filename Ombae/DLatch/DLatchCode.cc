/*
 * DLatchCode.cc
 *
 *  Created on: Nov 30, 2015
 *      Author: laz
 */
/**
 * Contains the main file
 */
#include <systemc>
#include <systemc.h>
#include "DLatchMonitor.h"
#include "DLatchCode.h"
#include "DLatchDriver.h"

int sc_main(int argc, char *argv[]){
	//signals at the input and output
	sc_signal <bool> data, clk, q;

	//module instances
	DLatchCode latch("d latch");
	DLatchMonitor mon("monitor instance");
	DLatchDriver dr("driver instance");

	dr.input(data);
	dr.clock(clk);
	mon.m_in(data);
	latch.data(data);

    mon.m_clock(clk);
	latch.enable(clk);

	latch.q(q);
	mon.m_q(q);

	//create a trace file with nanosecond resolution
	sc_trace_file *tf;
	tf = sc_create_vcd_trace_file("timing_diagram");
	tf->set_time_unit(0.5, SC_NS);
	//trace the signals interconnecting modules
	sc_trace(tf, data, "binary_input"); // signals to be traced
	sc_trace(tf, clk, "Enable_signal");
	sc_trace(tf, q, "output");

	//run a simulation for 20 systemc nano-seconds
	if( !sc_pending_activity() )sc_start(30,SC_NS);
	//close the trace file
	sc_close_vcd_trace_file(tf);

	return 0;
}


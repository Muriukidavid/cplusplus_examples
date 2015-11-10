/*
 * main.cc
 *
 *  Created on: Nov 6, 2015
 *      Author: chelmis
 */
//#include"systemc.h"

#include"dff.h"
#include"driver.h"
#include"monitor.h"
#include"systemc.h"

int sc_main(int argc, char** argv)
{
	//signals
	sc_signal<bool> D_s, Q_out, Qn_out;
	sc_clock dclk ("the_clock", 1.3,SC_MS ,0.7,0,SC_MS);
	//module instances
	dff df("dff_instance");
	driver dr("driver");
	monitor mn("monitor");
	//interconnections btn modules
	dr.a(D_s);
	df.D(D_s);
	mn.D_m(D_s);

	df.Q(Q_out);
	mn.Q_m(Q_out);

	df.Qn(Qn_out);
	mn.Qn_m(Qn_out);

	df.dclk(dclk);
	mn.dclk_m(dclk);

	//create a trace file with nanosecond resolution
	sc_trace_file *tf;
	tf = sc_create_vcd_trace_file("trace");
	tf->set_time_unit(1, SC_NS);
	//trace the signals interconnecting modules
	sc_trace(tf, dclk, "clock"); // signals to be traced
	sc_trace(tf, D_s, "D");
	sc_trace(tf, Q_out, "Q");
	sc_trace(tf, Qn_out, "Qn");
	//sc_time_unit(SC_NS);
	//run a simulation for 10 systemc milli-seconds
	sc_start(10,SC_MS);
	//close the trace file
	sc_close_vcd_trace_file(tf);
	return 0;
	
}


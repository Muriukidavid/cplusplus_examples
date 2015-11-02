#include"2by4decoder.h"
#include"2by4driver.h"
#include"2by4monitor.h"
#include<systemc>

int sc_main(int argc, char *argv[])
{
	//signals for interconnections
	sc_signal<bool> in1, in2, out1, out2, out3, out4;
	//module instances
	decoder2to4 dec("decoder instance");
	driver2 dr("driver");
	monitor2to4 h("monitor");
	//interconnections between modules
	dr.d_a(in1);dr.d_b(in2);
	dec.a(in1);dec.b(in2);
	h.monitor_a(in1);h.monitor_b(in2);

	dec.c(out1);
	h.monitor_c(out1);

	dec.d(out2);
	h.monitor_d(out2);

	dec.e(out3);
	h.monitor_e(out3);

	dec.f(out4);
	h.monitor_f(out4);

	//create a trace file with nanosecond resolution
	sc_trace_file *tf;
	tf = sc_create_vcd_trace_file("timing_diagram");
	tf ->set_time_unit(1, SC_NS);
	//trace the signals interconnecting modules
	sc_trace(tf, in1, "first_binary_input");
	sc_trace(tf, in2, "second_binary_input");
	sc_trace(tf, out1, "input_is_zero");
	sc_trace(tf, out2, "input_is_one");
	sc_trace(tf, out3, "input_is_two");
	sc_trace(tf, out4, "input_is_three");

	//run a simulation for 50 systemc nanoseconds
	if (!sc_pending_activity())
		sc_start(55, SC_NS);
	//close the trace file
	sc_close_vcd_trace_file(tf);
	return 0;
}

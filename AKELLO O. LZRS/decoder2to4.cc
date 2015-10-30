#include"decoder2to4.h"
#include"driver2to4.h"
#include"monitor2to4.h"
#include<systemc>

int sc_main(int argc, char *argv[])
{
	//signals for interconnections
	sc_signal<bool> in1, in2, out1, out2, out3, out4;
	//module instances
	decoder2to4 dec("decoder instance");
	driver2 dr("driver");
	monitor2to4 mn("monitor");
	//interconnections between modules
	dr.d_a(in1);dr.d_b(in2);
	dec.a(in1);dec.b(in2);
	mn.m_a(in1);mn.m_b(in2);

	dec.c(out1);
	mn.m_c(out1);

	dec.d(out2);
	mn.m_d(out2);

	dec.e(out3);
	mn.m_e(out3);

	dec.f(out4);
	mn.m_f(out4);

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

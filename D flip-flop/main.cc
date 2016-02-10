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
	sc_signal<bool> D_s, Q_out,Q_out2,Q_out3,Q_out4,Q_out5,Q_out6,Q_out7,Q_out8, Qn_out8; //D_s signal from driver, Q_out signal from dff1 output, Q_out2 signal from dff2 output etc.
	sc_clock dclk ("the_clock", 1.3,SC_MS ,0.7,0,SC_MS);
	//module instances
	dff df("dff_instance");
	dff2 df2("dff2_instance");
	dff3 df3("dff3_instance");
	dff4 df4("dff4_instance");
	dff5 df5("dff5_instance");
	dff6 df6("dff6_instance");
	dff7 df7("dff7_instance");
	dff8 df8("dff7_instance");
	driver dr("driver");
	monitor mn("monitor");
	//interconnections btn modules
	dr.a(D_s);
	df.D(D_s); //input of dff1
	mn.D_m(D_s);
        
        df.Q(Q_out); //Q-out is the output of dff1 and input of dff 2
        df2.Q(Q_out); //and input of dff 2
	df2.Q2(Q_out2); //Q2 here is output of dff2
	
	df3.Q2(Q_out2);
	df3.Q3(Q_out3); //Q2 here is output of dff3
	
	df4.Q3(Q_out3);
	df4.Q4(Q_out4); //Q2 here is output of dff4
	
	df5.Q4(Q_out4);
	df5.Q5(Q_out5); //Q2 here is output of dff5
	
	df6.Q5(Q_out5);
	df6.Q6(Q_out6); //Q2 here is output of dff6
	
	df7.Q6(Q_out6);
	df7.Q7(Q_out7); //Q2 here is output of dff7
	
	df8.Q7(Q_out7);
	df8.Q8(Q_out8); //Q2 here is output of dff8
	mn.Q_m(Q_out8);
	
	df8.Qn8(Qn_out8);
	mn.Qn_m(Qn_out8); 

	df.dclk(dclk);
	df2.dclk2(dclk);
	df3.dclk3(dclk);
	df4.dclk4(dclk);
	df5.dclk5(dclk);
	df6.dclk6(dclk);
	df7.dclk7(dclk);
	df8.dclk8(dclk);
	mn.dclk_m(dclk);
	
	//create a trace file with nanosecond resolution
	sc_trace_file *tf;
	tf = sc_create_vcd_trace_file("trace");
	tf->set_time_unit(1, SC_NS);
	//trace the signals interconnecting modules
	sc_trace(tf, dclk, "clock"); // signals to be traced
	sc_trace(tf, D_s, "D");
	sc_trace(tf, Q_out, "dff1_Output_and_dff2_input");
	sc_trace(tf, Q_out8, "Q8");
	sc_trace(tf, Qn_out8, "Qn8");
	//sc_time_unit(SC_NS);
	//run a simulation for 10 systemc milli-seconds
	sc_start(20,SC_MS);
	//close the trace file
	sc_close_vcd_trace_file(tf);
	return 0;
	
}


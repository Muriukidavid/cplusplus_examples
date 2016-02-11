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
	dff df2("dff_instance2");
	dff df3("dff3_instance3");
	dff df4("dff4_instance4");
	dff df5("dff5_instance5");
	dff df6("dff6_instance6");
	dff df7("dff7_instance7");
	dff df8("dff7_instance8");
	driver dr("driver");
	monitor mn("monitor");
	
	//interconnections btn modules
	dr.a(D_s);
	df.D(D_s); //input of dff1
	mn.D_m(D_s);
        
        df.Q(Q_out); //Q-out is the output of dff1
        df2.D(Q_out); //and input of dff 2
	df2.Q(Q_out2); //Q output of dff2
	
	df3.D(Q_out2);//input dff3
	df3.Q(Q_out3); //Q output of dff3
	
	df4.D(Q_out3);
	df4.Q(Q_out4); //Q output of dff4
	
	df5.D(Q_out4);
	df5.Q(Q_out5); //Q output of dff5
	
	df6.D(Q_out5);
	df6.Q(Q_out6); //Q output of dff6
	
	df7.D(Q_out6);
	df7.Q(Q_out7); //Q output of dff7
	
	df8.D(Q_out7);
	df8.Q(Q_out8); //Q output of dff8
	mn.Q_m(Q_out8);
	
	df.dclk(dclk);
	df2.dclk(dclk);
	df3.dclk(dclk);
	df4.dclk(dclk);
	df5.dclk(dclk);
	df6.dclk(dclk);
	df7.dclk(dclk);
	df8.dclk(dclk);
	mn.dclk_m(dclk);
	
	//create a trace file with nanosecond resolution
	sc_trace_file *tf;
	tf = sc_create_vcd_trace_file("trace");
	tf->set_time_unit(1, SC_NS);
	//trace the signals interconnecting modules
	sc_trace(tf, dclk, "clock"); // signals to be traced
	sc_trace(tf, D_s, "D");
	sc_trace(tf, Q_out, "dff1_Output");
	sc_trace(tf, Q_out8, "Q8");
	
	//run a simulation for 10 systemc milli-seconds
	sc_start(20,SC_MS);
	//close the trace file
	sc_close_vcd_trace_file(tf);
	return 0;
	
}


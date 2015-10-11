/*
 * decoder.cc
 *
 *  Created on: Oct 11, 2015
 *      Author: chelmis
 */

#include"decoder.h"
#include"driver.h"
#include"monitor.h"
#include<systemc>

int sc_main(int argc, char *argv[]){
//some signals for interconnections
sc_signal<bool> s_in1, s_in2, s_out1, s_out2, s_out3, s_out4;
//module instances
decoder dec("decoder_instance");
driver dr("driver");
monitor mn("monitor");
//interconnections b2in modules
dr.d_o1(s_in1);
dec.in1(s_in1);
mn.m_in1(s_in1);

dr.d_o2(s_in2);
dec.in2(s_in2);
mn.m_in2(s_in2);

dec.out1(s_out1);
mn.m_out1(s_out1);

dec.out2(s_out2);
mn.m_out2(s_out2);

dec.out3(s_out3);
mn.m_out3(s_out3);

dec.out4(s_out4);
mn.m_out4(s_out4);

//create a trace file with nanosecond resolution
sc_trace_file *tf;
tf = sc_create_vcd_trace_file("2by4timing_diagram");
tf->set_time_unit(1, SC_NS);

//trace the signals interconnecting modules
sc_trace(tf, s_in1, "binary_input1"); // signals to be traced
sc_trace(tf, s_out1, "in1_is_zero");
sc_trace(tf, s_out2, "in1_is_one2");
sc_trace(tf, s_in2, "binary_input2"); // signals to be traced
sc_trace(tf, s_out3, "in2_is_zero");
sc_trace(tf, s_out4, "in2_is_one");

//run a simulation for 45 systemc nano-seconds
if( !sc_pending_activity() )
sc_start(50,SC_NS);
//close the trace file
sc_close_vcd_trace_file(tf);
return 0;
}


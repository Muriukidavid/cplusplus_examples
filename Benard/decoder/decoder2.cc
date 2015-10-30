#include"decoder2.h"
#include"driver2.h"
#include"monitor2.h"
#include<systemc>

int sc_main(int argc, char *argv[]){
//some signals for interconnections
  sc_signal<bool> in1,in2, out1, out2,out3,out4;
//module instances
decoder dec("decoder_instance");
driver dr("driver");
monitor mn("monitor");
//interconnections b2in modules
dr.d_a0(in1);
dec.a0(in1);
mn.m_a0(in1);

dr.d_a1(in2);
dec.a1(in2);
mn.m_a1(in2);

dec.d0(out1);
mn.m_d0(out1);

dec.d1(out2);
mn.m_d1(out2);

dec.d2(out3);
mn.m_d2(out3);

dec.d3(out4);
mn.m_d3(out4);


//create a trace file with nanosecond resolution
sc_trace_file *tf;
tf = sc_create_vcd_trace_file("timing_diagram");
tf->set_time_unit(1, SC_NS);
//trace the signals interconnecting modules
sc_trace(tf, in1, "binary_input 1"); // signals to be traced
sc_trace(tf, in2, "binary_input 2"); 
sc_trace(tf, out1, "input_is_zero");
sc_trace(tf, out2, "input_is_one");
sc_trace(tf, out3, "input_is_one");
sc_trace(tf, out4, "input_is_one");

//run a simulation for 20 systemc nano-seconds
if( !sc_pending_activity() )
sc_start(25,SC_NS);
//close the trace file
sc_close_vcd_trace_file(tf);
return 0;
}

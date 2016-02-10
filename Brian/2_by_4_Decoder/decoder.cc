#include"decoder.h"
#include"driver.h"
#include"monitor.h"
#include<systemc>

int sc_main(int argc, char *argv[]){
//some signals for interconnections 
sc_signal<bool> in_0,in_1,out0, out1,out2,out3;
//module instances
decoder dec("decoder_instance");
driver dr("driver_instance");
monitor mn("monitor_instance");
//interconnections between modules instance.port()
dr.Sout0(in_0);
dr.Sout1(in_1);
dec.i0(in_0);
dec.i1(in_1);
mn.mn_i0(in_0);
mn.mn_i1(in_1);

dec.d0(out0);
dec.d1(out1);
dec.d2(out2);
dec.d3(out3);
//monitor outputs
mn.mn_d0(out0);
mn.mn_d1(out1);
mn.mn_d2(out2);
mn.mn_d3(out3);
//create a trace file with nanosecond resolution
sc_trace_file *tf;
tf = sc_create_vcd_trace_file("timing_diagram");
tf->set_time_unit(1, SC_NS);
//trace the signals interconnecting modules
sc_trace(tf, in_0, "binary_input1"); // signals to be traced
sc_trace(tf,in_1,  "binary_input2");

sc_trace(tf, out0, "input_is_zero");
sc_trace(tf, out1, "input_is_one");
sc_trace(tf, out2, "input_is_two");
sc_trace(tf, out3, "input_is_three");


//run a simulation for 20 systemc nano-seconds
if( !sc_pending_activity() )
sc_start(50,SC_NS);
//close the trace file
sc_close_vcd_trace_file(tf);
return 0;
}

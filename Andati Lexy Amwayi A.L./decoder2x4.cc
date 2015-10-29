#include "driver2x4.h"
#include "decoder2x4.h"
#include "monitor2x4.h"
#include <systemc.h>

int sc_main(int argc, char *argv[])
{
 sc_signal<bool> in_a, in_b, out_a, out_b, out_c, out_d;  //signals to connect different modules
 
 driver myDriver("driver instance"); 
 monitor myMonitor("monitor instance");
 decoder myDecode("decoder instance");
 
 //inputs format: module instance.port(assign signal 2 port)
 myDriver.dout0(in_a);
 myDriver.dout1(in_b);
 myMonitor.mdi0(in_a);  //monitor for inputs
 myMonitor.mdi1(in_b);
 myDecode.i0(in_a);
 myDecode.i1(in_b);
 
 // outputs format: module instance.portDeclaredInMethod(assign signal 2 port)
 myDecode.d0(out_a);
 myDecode.d1(out_b);
 myDecode.d2(out_c);
 myDecode.d3(out_d);
 myMonitor.mdo0(out_a);  //monitor for outputs
 myMonitor.mdo1(out_b);
 myMonitor.mdo2(out_c);
 myMonitor.mdo3(out_d);

//creating trace file
sc_trace_file *tf;
tf= sc_create_vcd_trace_file("timing_diagram"); //sets the name of the file
tf->set_time_unit(1, SC_NS);

//trace the signals interconnecting modules
sc_trace(tf, in_a, "binary_input1"); // signals to be traced
sc_trace(tf, in_b, "binary_input2");  //those inquotations show the label of the 'axes'
sc_trace(tf, out_d, "input_is_three");
sc_trace(tf, out_c, "input_is_two");
sc_trace(tf, out_b, "input_is_one");
sc_trace(tf, out_a, "input_is_zero"); 
//point to note frm above ^^: while specifying the names of these outputs SPACES are INVALID xters and thus should not be included rather be replaced with an underscore '_' . failure to do this will result in an error that causes the gtkwave to refuse to open.

//run a simulation for 70 systemc nano-seconds
if( !sc_pending_activity() )
sc_start(75,SC_NS);
//close the trace file
sc_close_vcd_trace_file(tf);
 
 return 0;
 }

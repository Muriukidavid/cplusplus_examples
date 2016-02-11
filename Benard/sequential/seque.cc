#include"driver_seq.h"
#include"monitor_seq.h"
#include"seque.h"
#include<systemc>

int sc_main(int argc, char* argv[])
{
 sc_signal<bool>in_s,in_e,in_r,out_q,out_q_not;
//module instance 
driver dr("driver_instance");
 monitor mn("monitor_instance");
 flip fl("flip_flop_instance");
 
 dr.d_s(in_s);
 dr.d_e(in_e);
 dr.d_r(in_r);

 fl.s(in_s);
 fl.e(in_e);
 fl.r(in_r);
 fl.q(out_q);
 fl.q_not(out_q_not);

 mn.m_e(in_e);
 mn.m_s(in_s);
 mn.m_r(in_r);
 mn.m_q(out_q);
 mn.m_q_not(out_q_not);

 //create a trace file with nanosecond resolution
sc_trace_file *tf;
tf = sc_create_vcd_trace_file("timing_diagram");
tf->set_time_unit(1, SC_NS);
//trace the signals interconnecting modules
sc_trace(tf, in_s, "set"); // signals to be traced
sc_trace(tf, in_e, "enable");
sc_trace(tf, in_r, "reset");
sc_trace(tf, out_q, "output_Q");
sc_trace(tf, out_q_not, "output_Q!");

//run a simulation for 20 systemc nano-seconds
if( !sc_pending_activity() )
sc_start(25,SC_NS);
//close the trace file
sc_close_vcd_trace_file(tf);
return 0; 
}

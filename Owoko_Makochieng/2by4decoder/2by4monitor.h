#include<iostream>
#include<systemc>

using namespace std;

SC_MODULE(monitor2to4)
{
sc_in<bool>monitor_a, monitor_b, monitor_c, monitor_d, monitor_e, monitor_f; //m_a and m_b are inputs while the others are ouputs

SC_CTOR(monitor2to4)
{
	SC_METHOD(mchungaji);
	sensitive<<monitor_c<<monitor_d<<monitor_e<<monitor_f;
	dont_initialize();
}

void mchungaji(void)
{
	cout<<"at "<<sc_time_stamp()<<" input is: "<<monitor_a<<" and "<<monitor_b<<" outputs are: "<<monitor_c<<", "<<monitor_d<<", "<<monitor_e<<" and "<<monitor_f<<endl; //shown as outputted from the decoder m_c being the first output but not to look as the truth table
}
};


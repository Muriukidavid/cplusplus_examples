#include<iostream>
#include<systemc>

using namespace std;

SC_MODULE(monitor2to4)
{
sc_in<bool>m_a, m_b, m_c, m_d, m_e, m_f; 

SC_CTOR(monitor2to4)
{
	SC_METHOD(mchungaji);
	sensitive<<m_c<<m_d<<m_e<<m_f;
	dont_initialize();
}

void mchungaji(void)
{
	cout<<"at "<<sc_time_stamp()<<" input is: "<<m_a<<" and "<<m_b<<" outputs are: "<<m_c<<", "<<m_d<<", "<<m_e<<" and "<<m_f<<endl; //shown as outputted from the decoder m_c being the first output but not to look as the truth table
}
};


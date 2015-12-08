#include<iostream>
#include<systemc.h>

using namespace std;
SC_MODULE(display)
{
	sc_in<sc_bit>m_load,m_DIN,m_DOUT,CLOCK;
    SC_CTOR(display)
	{
    	SC_METHOD(monita)
    			sensitive<<m_DIN,m_DOUT;
	}
    void monita(void)
    {
    	cout<<"at"<<sc_time_stamp()<<"DIN is: "<<din<<"DOUT is: "<<dout<<endl;
    }
};





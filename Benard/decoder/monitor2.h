#ifndef MONITOR_H_
#define MONITOR_H_

#include<iostream>
#include<systemc>

using namespace std;

SC_MODULE(monitor){
  sc_in<bool> m_a0,m_a1,m_d0,m_d1,m_d2,m_d3;

SC_CTOR(monitor){
	SC_METHOD(monita);
	sensitive<<m_d0<<m_d1<<m_d2<<m_d3;
	dont_initialize();
}

void monita(void){
cout<<"at "<<sc_time_stamp()<<" inputs are: "<<m_a0<<" and:"<<m_a1<<" outputs are: "<<m_d0<<" and "<<m_d1<<" and "<<m_d2<<" and "<<m_d3<<endl;
}
};

#endif

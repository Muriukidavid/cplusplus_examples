#ifndef MONITOR_H_
#define MONITOR_H_

#include<iostream>
#include<systemc>

using namespace std;

SC_MODULE(monitor){
sc_in<bool> m_a1,m_a2,m_b1,m_b2,m_b3,m_b4;

SC_CTOR(monitor){
	SC_METHOD(monita);
	sensitive<<m_b1<<m_b2<<m_b3<<m_b4;
	dont_initialize();
}

void monita(void){
cout<<"at "<<sc_time_stamp()<<" input is: "<<m_a1<<"and"<<m_a2<<"\n"<<" outputs are: "<<m_b1<<","<<m_b2<<","<<m_b3<<" and "<<m_b4<<endl;
}
};

#endif

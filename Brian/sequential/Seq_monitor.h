#ifndef SEQ_MONITOR_H
#define SEQ_MONITOR_H

#include <systemc>
#include <iostream>
using namespace std;

SC_MODULE(monitor){
sc_in<bool>m_e;
sc_in<bool>m_s;
sc_in<bool>m_r;
sc_in<bool>m_q;
sc_in<bool>m_q!;

SC_CTOR(monitor){
	SC_METHOD(monita);
	sensitive<<m_e<<m_r<<m_s<<m_s<<m_q<<m_q!;
}

void monita(void){
cout<<"at "<<sc_time_stamp()<<"Enable: "<<m_e<<"set:"<<m_s<<"Reset: "<<m_r<<"Q:"<<m_q<<"Q!"<<m_q!<<endl;
} 
};

#endif

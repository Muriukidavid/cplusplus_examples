#ifndef MONITOR_SEQ
#define MONITOR_SEQ
#include<systemc>
#include<iostream>
using namespace std;

SC_MODULE(monitor)
{
 sc_in<bool>m_e;
 sc_in<bool>m_s;
 sc_in<bool>m_r;
 sc_in<bool>m_q;
 sc_in<bool>m_q_not;
 
 SC_CTOR(monitor)
 {
  SC_METHOD(monita)
   {
     sensitive<<m_e<<m_s<<m_r<<m_q<<m_q_not;
	
   }
 }
 void monita()
 {
  cout<<"at"<<sc_time_stamp()<<"\tEnable: "<<m_e<<"\tSet: "<<m_s<<"\tReset: "<<m_r
  <<"\tQ: "<<m_q<<"\tQ!: "<<m_q_not<<endl;
 }
	

};
#endif

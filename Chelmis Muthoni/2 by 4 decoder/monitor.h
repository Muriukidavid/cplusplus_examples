/*
 * monitor.h
 *
 *  Created on: Oct 11, 2015
 *      Author: chelmis
 */

#ifndef MONITOR_H_
#define MONITOR_H_

#include<iostream>
#include<systemc>

using namespace std;

SC_MODULE(monitor){
sc_in<bool> m_in1, m_in2, m_out1, m_out2, m_out3, m_out4;

SC_CTOR(monitor){
	SC_METHOD(monita);
	sensitive<<m_out1<<m_out2<<m_out3<<m_out4;
	dont_initialize();
}

void monita(void){
cout<<"at "<<sc_time_stamp()<<" input is: "<<m_in1<<" outputs are: "<<m_out1<<" and "<<m_out2<<endl;
cout<<"at "<<sc_time_stamp()<<" input is: "<<m_in2<<" outputs are: "<<m_out3<<" and "<<m_out4<<endl;
}

};
#endif /* MONITOR_H_ */


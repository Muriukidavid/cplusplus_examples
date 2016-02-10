/*
 * DlatchMonitor.h
 *
 *  Created on: Nov 30, 2015
 *      Author: laz
 */

#ifndef DLATCHMONITOR_H_
#define DLATCHMONITOR_H_
/**
 * Probes the input, clock and outputs for values
 */
#include <systemc>
#include <systemc.h>

SC_MODULE(DLatchMonitor){
	sc_in <bool> m_in, m_clock,  m_q;

	SC_CTOR(DLatchMonitor){
		SC_METHOD(monitorDLatch);
		sensitive<<m_in<<m_q;
		dont_initialize();
	}

	void monitorDLatch(){
		cout<<sc_time_stamp()<<"	input is "<< m_in <<"	clock edge "<<m_clock<< "	output is"<<m_q<<endl;
    }

};


#endif /* DLATCHMONITOR_H_ */

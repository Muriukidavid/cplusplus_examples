/*
 * tff_monitor.h
 *
 *  Created on: 6 Dec 2015
 *      Author: makochieng
 */

#ifndef TFF_MONITOR_H_
#define TFF_MONITOR_H_

#include "systemc.h"
#include <systemc>

SC_MODULE(tff_monitor){

	sc_in<bool> data, clock, output, reset;

	SC_CTOR(tff_monitor){
		SC_METHOD(trackTff);
		sensitive<<data<<clock<<output<<reset;
	}
	/**
	 * Displays values of the input , clock, reset and the output to the screen
	 */
	void trackTff(){
		cout<<"At "<<sc_time_stamp()<<" Data = "<<data<<"  Clock = "<<clock<<"  Reset = "<<reset<<", Output is "<<output<<endl;

	}

};




#endif /* TFF_MONITOR_H_ */

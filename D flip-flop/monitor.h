/*
 * monitor.h
 *
 *  Created on: Nov 6, 2015
 *      Author: chelmis
 */

#ifndef MONITOR_H_
#define MONITOR_H_

#include<iostream>
#include"systemc.h"

using namespace std;

SC_MODULE(monitor)
{
	sc_in<bool> D_m, dclk_m, Q_m;

	SC_CTOR(monitor)
	{
		SC_METHOD(monita);
		sensitive<<Q_m;
		dont_initialize();
	}

	void monita(void){
	cout<<"at "<<sc_time_stamp()<<" D is: "<<D_m<<" Q8 is: "<<Q_m<<endl;
	}
};

#endif /* MONITOR_H_ */


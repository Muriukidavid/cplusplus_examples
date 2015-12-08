/*
 * tff_driver.h
 *
 *  Created on: 6 Dec 2015
 *      Author: makochieng
 */

#ifndef TFF_DRIVER_H_
#define TFF_DRIVER_H_

#include "systemc.h"
#include <systemc>

SC_MODULE(tff_driver){

	sc_out <bool> data, clk, reset;

	SC_CTOR(tff_driver){
		SC_THREAD(driveData);
		SC_THREAD(driveClock);
		SC_THREAD(driveReset);
	}

	/**
	 * Drives data to input port
	 */
	void driveData(){
        while(1){
        	data.write(0);
			wait(5, SC_NS);
			data.write(1);
			wait(5,SC_NS);
        }
	}
	/**
	 * Drives data to the clock port
	 */
	void driveClock(){
		while(1){
			clk.write(0);
			wait(7,SC_NS);
			clk.write(1);
			wait(7,SC_NS);
		}
	}
	/**
	 * Drives data to the Reset port
	 */
	void driveReset(){
		while(1){
			reset.write(0);
			wait(4,SC_NS);
			reset.write(1);
			wait(4, SC_NS);
		}

	}
};





#endif /* TFF_DRIVER_H_ */

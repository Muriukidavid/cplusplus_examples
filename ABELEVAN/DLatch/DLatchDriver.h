/*
 * DLatchDriver.h
 *
 *  Created on: Nov 30, 2015
 *      Author: laz
 */

#ifndef DLATCHDRIVER_H_
#define DLATCHDRIVER_H_
/**
 * Drives values to input and enable clock of the D latch
 */

#include <systemc>
#include <systemc.h>

SC_MODULE(DLatchDriver){
	sc_out <bool> input, clock;


	SC_CTOR(DLatchDriver){
		SC_THREAD(driveInputPort);
		sensitive<<input;
		SC_THREAD(driveClock);
		sensitive<<clock;
	}

	//drives data to the input port
	void driveInputPort(){
		while(1){
			input = 0;
			wait(5,SC_NS);
			input = 1;
			wait(5,SC_NS);
		}
	}

	//drives clock to the enable port
	void driveClock(){
		while(1){
			clock = 0;
			wait(3,SC_NS);
			clock = 1;
			wait(4,SC_NS);
		}
	}
};


#endif /* DLATCHDRIVER_H_ */

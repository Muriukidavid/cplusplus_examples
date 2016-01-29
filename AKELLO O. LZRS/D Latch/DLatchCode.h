/*
 * DLatchCode.h
 *
 *  Created on: Nov 30, 2015
 *      Author: laz
 */

#ifndef DLATCHCODE_H_
#define DLATCHCODE_H_
/**
 * Performs the actual D latch operation
 * It changes the value of the output to that of the data input otherwise thw output does not change
 */
#include <systemc>
#include <systemc.h>

SC_MODULE(DLatchCode){
	sc_in <bool> data;
	sc_in <bool> enable;
	sc_out <bool> q;

	SC_CTOR(DLatchCode){
		SC_METHOD(theCode);
		sensitive << data << enable;
	}

	void theCode(){
		//output q is equal to data if enable is 1
		if (enable)q = data;
	}
};






#endif /* DLATCHCODE_H_ */

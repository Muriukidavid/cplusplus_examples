/*
 * decoder.h
 *
 *  Created on: Oct 9, 2015
 *      Author: chelmis
 */

#ifndef DECODER_H_
#define DECODER_H_
#include "systemc.h"

SC_MODULE (decoder) {
	sc_in<bool> in1, in2;
	sc_out<bool> out1, out2, out3, out4;

	//constructor: where the processes are bound to simulation kernel
	SC_CTOR(decoder){
		SC_METHOD(decode);
		sensitive<<in1<<in2;
		//dont_initialize();
	}

	~decoder(){
	//delete stuff :P
	}

	void decode(void){
		out1=in1&&in2;
		out2=in1&&!in2;
		out3=!in1&&in2;
		out4=!in1&&!in2;
	}
};

#endif /* DECODER_H_ */


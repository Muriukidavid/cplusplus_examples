/*
 * dff.h
 *
 *  Created on: Nov 6, 2015
 *      Author: chelmis
 */

#ifndef DFF_H_
#define DFF_H_

#include"systemc.h"

SC_MODULE (dff)
{
	sc_in<bool> D, dclk;
	sc_out<bool> Q;

	SC_CTOR (dff)
	{
		SC_METHOD(decode);
		sensitive<<dclk.pos();
		dont_initialize();
	}

	~dff(){}

	void decode(void)
	{
		Q = D.read();
		
	}
};

#endif /* DFF_H_ */


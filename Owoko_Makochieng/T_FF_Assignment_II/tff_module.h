/*
 * tff_module.h
 *
 *  Created on: 6 Dec 2015
 *      Author: makochieng
 */

#ifndef TFF_MODULE_H_
#define TFF_MODULE_H_


#include "systemc.h"
#include <systemc>
SC_MODULE(tff_module)
	{
	sc_in<bool> data, clk, reset;
	sc_out<bool> q;

	bool q_l;

	void tff () {
		if (reset.read()) {
			q_l = 0;
		} else if (~data.read()) {
			q_l =  ! q;
		}else {}
		q.write(q_l);
	}

	SC_CTOR(tff_module) {
		q_l = 0;
		SC_METHOD (tff);
		sensitive << clk.pos();
	}
};



#endif /* TFF_MODULE_H_ */

/*
 * driver.h
 *
 *  Created on: Oct 11, 2015
 *      Author: chelmis
 */

#ifndef DRIVER_H_
#define DRIVER_H_

#include<systemc>

SC_MODULE(driver){
sc_out<bool> d_o1, d_o2;

SC_CTOR(driver){
	SC_THREAD(drive);
}

void drive(void){
	while(1){
		d_o1=0;
		wait(5,SC_NS);
		d_o1=1;
		wait(5,SC_NS);
		d_o2=0;
		wait(5,SC_NS);
		d_o2=1;
		wait(5,SC_NS);
	}
}

};
#endif /* DRIVER_H_ */


/*
 * driver.h
 *
 *  Created on: Nov 6, 2015
 *      Author: chelmis
 */

#ifndef DRIVER_H_
#define DRIVER_H_

#include "systemc.h"

SC_MODULE(driver){
sc_out<bool> a;

SC_CTOR(driver){
	SC_THREAD(drive);
}

void drive(void){
	while(1){
		a=0;
		wait(1.5,SC_MS);
		a=1;
		wait(1.5,SC_MS);
	}
}
};

#endif /* DRIVER_H_ */


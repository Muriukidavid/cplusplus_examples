#ifndef DRIVER_H_
#define DRIVER_H_

#include<systemc>

SC_MODULE(driver){
sc_out<bool> b1,b2;

SC_CTOR(driver){
	SC_THREAD(drive);
}

void drive(void){
	while(1){
		b1=0;
		wait(5,SC_NS);
		b1=1;
		wait(5,SC_NS);
		b2=0;
		wait(5,SC_NS);
		b2=1;
		wait(5,SC_NS);
	}
}
};

#endif

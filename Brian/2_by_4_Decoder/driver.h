#ifndef DRIVER_H_
#define DRIVER_H_

#include<systemc>

SC_MODULE(driver){
sc_out<bool> Sout0,Sout1;

SC_CTOR(driver){
	SC_THREAD(drive);
}

void drive(void){
	while(1){
		Sout0=0;
		Sout1=0;
		wait(5,SC_NS);
		Sout1=1;
		wait(5,SC_NS);
		Sout0=1;
		Sout1=0;
		wait(5,SC_NS);
		Sout1=1;
		wait(5,SC_NS);
	}
}
};

#endif

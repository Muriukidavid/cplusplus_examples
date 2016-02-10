#ifndef DRIVER_H_
#define DRIVER_H_

#include <systemc.h>
using namespace std;

SC_MODULE(driver){
sc_out<bool> d_e;
sc_out<bool> d_s;
sc_out<bool> d_r;

SC_CTOR(driver){
	SC_THREAD(drive);
}

void drive(void){
	while(1){
		d_e=1;
		d_s=0;
		d_r=0;
		wait(5,SC_NS);
		d_r=1;
		wait(5,SC_NS);
		d_s=1;
		d_r=0;
		wait(5,SC_NS);
		d_s=1;
		d_r=1;
		wait(5,SC_NS);
	}
}
};

#endif

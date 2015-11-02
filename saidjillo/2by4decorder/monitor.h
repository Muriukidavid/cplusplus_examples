#ifndef MONITOR_H_
#define MONITOR_H_

#include<iostream>
#include<systemc>

using namespace std;

SC_MODULE(monitor){
sc_in<bool> mn_i0, mn_i1,mn_d0,mn_d1,mn_d2,mn_d3;

SC_CTOR(monitor){
	SC_METHOD(monita);
	sensitive<<mn_d0<<mn_d1<<mn_d2<<mn_d3;
	dont_initialize();
}

void monita(void){
cout<<"at "<<sc_time_stamp()<<" input 0 is: "<<mn_i0<<"input 1 is "<<mn_i1<<" outputs are: "<<mn_d0<<" and "<<mn_d1<<"and"<<mn_d2<<"and"<<mn_d3<<endl;
} 
};

#endif

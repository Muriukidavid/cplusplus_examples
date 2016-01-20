#include<systemc.h>

SC_MODULE(decoder){
//input and output ports
sc_in<bool> d_e,d_s,d_r;
sc_out<bool> d0,d1,d2,d3;
//constructor: where the processes are bound to simulation kernel
SC_CTOR(decoder){
	SC_METHOD(decode);
	sensitive<<d_e<<d_s<<d_r; //sensitive to i0 and i1 which is the input 
	//dont_initialize();
}

~decoder(){
//delete stuff :P
}

void decode(void){
	
}
};

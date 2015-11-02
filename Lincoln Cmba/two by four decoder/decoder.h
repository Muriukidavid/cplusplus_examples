#include<systemc.h>

SC_MODULE(decoder){
//input and output ports
sc_in<bool> a1,a2;
sc_out<bool> b1,b2,b3,b4;
//constructor: where the processes are bound to simulation kernel
SC_CTOR(decoder){
	SC_METHOD(decode);
	sensitive<<a;
	//dont_initialize();
}

~decoder(){
//delete stuff :P
}

void decode(void){
//if a is zero, b is 1 otherwise its 0. vice versa true for c. simple way of impementing if statement
	

if (a1==0 && a2==0){ b1=1; b4=0; }
    else if (a1==0 && a2==1){b2=1;b1=0;}
    else if (a1==1 && a2==0){b3=1;b2=0;}
    else if (a1==1 && a2==1){b4=1;b3=0;}
         
}
};

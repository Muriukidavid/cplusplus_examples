#include<systemc.h>

SC_MODULE(decoder){
//input and output ports
  sc_in<bool> a0,a1;
  sc_out<bool> d0,d1,d2,d3;
//constructor: where the processes are bound to simulation kernel
SC_CTOR(decoder){
	SC_METHOD(decode);
	sensitive<<a0<<a1;
	//dont_initialize();
}

~decoder(){
//delete stuff :P
}

void decode(void){
  //b=(a==0)?1:0;
  //c=(a==1)?1:0;
  if(a0==0 && a1==0)
    {
      d0=1; d1=0; d2=0; d3=0;
    }
   else if(a0==1 && a1==0)
    {
      d0=0; d1=1; d2=0; d3=0;
    }
   else if(a0==0 && a1==1)
    {
      d0=0; d1=0; d2=1; d3=0;
    }
   else if(a0==1 && a1==1)
    {
      d0=0; d1=0; d2=0; d3=1;
    }
  
}
};

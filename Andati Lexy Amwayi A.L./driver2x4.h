//driver module
#include<systemc.h>

SC_MODULE(driver)
{
  sc_out<bool> dout0,dout1;
 // sc_out<bool> dout2;

 SC_CTOR(driver){
   SC_THREAD(startDrive);
     }
     
 void startDrive(void)
{
	while(1)
	{
		dout0=0;
		dout1=0;
		wait(5,SC_NS);
		dout1=1;
		wait(5,SC_NS);
		dout0=1;
		dout1=0;
		wait(5,SC_NS);
		dout1=1;
		wait(5,SC_NS);
	 }

	}
};



#include <systemc.h>

SC_MODULE(decoder2to4)
{
//input and output ports
sc_in<bool> a, b;
sc_out<bool> c, d, e, f;

//constructor: where the processes are bound to simulation kernel

SC_CTOR(decoder2to4)
{
	SC_METHOD(decode2to4);
	sensitive<<a<<b;
	//dont_initialize();
}

~decoder2to4()
{
	//destructor
}

void decode2to4(void)
{
	c = (a == 0 && b == 0)?1:0;
	d = (a == 0 && b == 1)?1:0;
	e = (a == 1 && b == 0)?1:0;
	f = (a == 1 && b == 1)?1:0;
}

};

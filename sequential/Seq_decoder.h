#ifndef DECODER_H_
#define DECODER_H_
#include <systemc>
using namespace std;

SC_MODULE(flip){
//input and output ports
sc_in<bool>s;
sc_in<bool>e;
sc_in<bool>r;
sc_out<bool>q=0; 
sc_out<bool>q!=0;
bool temp1,temp2;

void flip_do()
{
    temp1=!(s.read()&e.read()); //reads the results of NAND gate 3 and allocates to variable temp1
    temp2=!(e.read()&r.read()); //reads the results of NAND gate 4 and allocates to variable temp2
    q=!(temp1&q!.read()); 
    q!=!(temp2&q.read());
}
//constructor: where the processes are bound to simulation kernel
SC_CTOR(flip){
	SC_METHOD(flip_do);
	sensitive<<e<<s<<r; //funtion is senstive to inputs s,e and r.
}

~decoder(){
//delete constuctor
    }
};
#endif

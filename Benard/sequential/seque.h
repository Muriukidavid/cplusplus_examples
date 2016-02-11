#ifndef SEQUE
#define SEQUE
#include<systemc>
SC_MODULE(flip)
{
 sc_in<bool>s;
 sc_in<bool>e;
 sc_in<bool>r;
 sc_out<bool>q;
 sc_out<bool>q_not;
 bool temp1,temp2;
 void flip_do()
 {
  temp1=!(s.read()&e.read());
  temp2=!(e.read()&r.read());
  q=!(temp1&q_not.read());
  q_not=!(temp2&q.read());
 }
 SC_CTOR(flip)
 {
  SC_METHOD(flip_do);
  sensitive<<s<<e<<r;
 }
};
#endif
  

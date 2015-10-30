//monitor module
#include <iostream>
#include<systemc>

using namespace std;

SC_MODULE(monitor)
{
 sc_in<bool> mdi0,mdi1,mdo0,mdo1,mdo2,mdo3;
 
  SC_CTOR(monitor)
   {
     SC_METHOD(monitoring);
     sensitive<< mdo0<< mdo1<< mdo2<< mdo3;  //sets module sensitivity
     dont_initialize();
     
    }
    
     void monitoring(void)
  {
   cout<<"At "<<sc_time_stamp()<<" inputs are "<<mdi0<<" and "<<mdi1<<" the outputs are "<<mdo3<<", "<<mdo2<<", "<<mdo1<<", "<<mdo0<<endl;
   }

};



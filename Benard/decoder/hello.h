#include"systemc.h"

SC_MODULE(test){
//sc_in<uint32_t> a;

SC_CTOR(test){
	SC_METHOD(testing);
//	sensitive<<a;
}
void testing(void){
	SC_REPORT_INFO(1,"Hello SystemC World!");
}
~test(){
//delete stuff
}
};

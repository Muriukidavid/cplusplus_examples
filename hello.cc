#include<iostream>
#include "systemc.h"
#include "hello.h"

using namespace std;

int sc_main(int argc, char* argv[]){

sc_report_handler::set_actions("/IEEE_Std_1666/deprecated", SC_DO_NOTHING);
cout<<"the set time resolution is: "<<sc_get_default_time_unit()<<endl;

test mytest("mytest");
sc_start(50,SC_NS);
return 0;
}

#include "systemc.h"
SC_MODULE(count_stim) {
  sc_out<bool> load;
  sc_out<int> din; // input port
  sc_in<bool> clock; // input port
  sc_in<int> dout;

  void stimgen();

  SC_CTOR(count_stim)
   {
    SC_THREAD(stimgen);
	sensitive_pos (clock);
  }
void count_stim::stimgen() {
  while (true) {
    load = true; // load 0
    din = 0;
    wait(); // count up, value = 1
    load = false;
    wait(); // count up, value = 2
    wait(); // count up, value = 3
    wait(); // count up, value = 4
    wait(); // count up, value = 5
    wait(); // count up, value = 6
    wait(); // count up, value = 7
  }
}

};





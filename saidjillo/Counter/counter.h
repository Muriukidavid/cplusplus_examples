#include "systemc.h"
SC_MODULE(count)
{
	sc_in<bool> load;
	sc_in<int> din;
	sc_in<bool> clock;	// input ports
	sc_out<int> dout;	// output port

	 // internal data st.
    void count_up();

    int count_val;

    SC_CTOR(count)
	{
	 SC_METHOD(count_up); // Method proc.
	    // Sensitive to Rising edge clock
          SC_THREAD(count_val)
        sensitive_pos << clock;
	}


   void count::count_up()
     {
      if (load)
     {
    count_val = din;
  }
  else
  {
    // Read/Write of local storage
    count_val = count_val + 1;
  }
  // Write to Output port
  dout = count_val;
}
};


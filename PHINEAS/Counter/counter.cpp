#include "counter.h"
#include "driver.h"
#include "monitor.h"

int sc_main(int argc, char* argv[])
{
  sc_signal<bool>	LOAD;
  sc_signal<int>	DIN, DOUT;
  // clock
  sc_clock CLOCK("clock", 20);
  int	sim_time = 0;

  if (argc==2)
    sim_time = atoi(argv[1]);
  if (sim_time==0)
    sim_time = 1000;
   count u_count ("count");
  u_count.load(LOAD);
  u_count.din(DIN);
  u_count.dout(DOUT);
  u_count.clock(CLOCK);

  count_stim u_count_stim("count_stim");
  u_count_stim.load(LOAD);
  u_count_stim.din(DIN);
  u_count_stim.dout(DOUT);
  u_count_stim.clock(CLOCK);

  display u_display("display");
  u_display.dout(DOUT);

  sc_initialize();
  sc_start(sim_time);
  return(0);
}


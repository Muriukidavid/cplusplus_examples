CXX = g++

all: tff_module

tff_module: tff_main.cc
	@echo "Building The T-flipflop ....."
	@echo "Compiling $(@F)...."
	$(CXX) -I /usr/local/systemc-2.3.1/include -o tff_main.o -g3 -Wall -std=c++11 -c tff_main.cc
	$(CXX) -L /usr/local/systemc-2.3.1/lib-linux64 -o t_flipflop tff_main.o -l systemc
	@echo "Running ...."
	./t_flipflop
	@echo ""
	@echo "Now plotting the trace file ...."
	gtkwave timingDiagram.vcd
	
clean:
	rm -rf *.o a.out t_flipflop
.PHONY: tff_module
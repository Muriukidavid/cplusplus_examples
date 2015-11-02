
all: decoder

decoder:decoder2x4.cc
	@echo 'building file $(@F)'
	$(CXX) -I/usr/local/systemc-2.3.1/include -O0 -g3 -Wall -c decoder2x4.cc
	$(CXX) -L/usr/local/systemc-2.3.1/lib-linux64 -o "decoder2x4" decoder2x4.o -lsystemc
	./decoder2x4
	gtkwave timing_diagram.vcd
.PHONY: decoder

CXX = g++

all: 2by4decoder

2by4decoder: 2by4decoder.cc
	@echo 'building file $(@F)'
	$(CXX) -I /usr/local/systemc-2.3.1/include -g3 -Wall -c 2by4decoder.cc
	$(CXX) -L /usr/local/systemc-2.3.1/lib-linux64 -o 2by4decoder 2by4decoder.o -l systemc
	./2by4decoder > results.txt
	gtkwave timing_diagram.vcd

clean:
	rm -f *.out *.o 2by4decoder

.PHONY: 2by4decoder

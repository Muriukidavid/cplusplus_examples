CXX = g++

all: decoder2to4

decoder2to4: decoder2to4.cc
	@echo 'building file $(@F)'
	$(CXX) -I /usr/local/systemc-2.3.1/include -g3 -Wall -c decoder2to4.cc
	$(CXX) -L /usr/local/systemc-2.3.1/lib-linux64 -o decoder2to4 decoder2to4.o -l systemc
	./decoder2to4
	gtkwave timing_diagram.vcd

clean:
	rm -f *.out *.o decoder2to4

.PHONY: decoder2to4

CXX = g++

all: decoder2to4

decoder2to4: Abeldecoder24.cc
	@echo 'building file $(@F)'
	$(CXX) -I /usr/local/systemc-2.3.1/include -g3 -Wall -c Abeldecoder24.cc
	$(CXX) -L /usr/local/systemc-2.3.1/lib-linux64 -o Abeldecoder24 Abeldecoder24.o -l systemc
	./Abeldecoder24
	gtkwave timing_diagram.vcd

clean:
	rm -f *.out *.o Abeldecoder24

.PHONY: decoder2to4

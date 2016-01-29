CXX = g++

all: DLatchCode

DLatchCode: DLatchCode.cc
	@echo "Building  $(@F)..."
	$(CXX) -I /usr/local/systemc-2.3.1/include -g3 -Wall -c DLatchCode.cc
	$(CXX) -L /usr/local/systemc-2.3.1/lib-linux64 -o DLatchCode DLatchCode.o -l systemc
	
	./DLatchCode > results.txt
	gtkwave timing_diagram.vcd
	
clean:
	rm -f results.txt *.o *.out DLatchCode
	
.PHONY: DLatchCode
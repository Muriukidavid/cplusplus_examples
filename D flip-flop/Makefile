
all: main

main:main.cc
	@echo 'building file $(@F)'
	$(CXX) -I/usr/local/systemc-2.3.1/include -O0 -g3 -Wall -c main.cc
	$(CXX) -L/usr/local/systemc-2.3.1/lib-linux64 -o "main" main.o -lsystemc
	./main
	gtkwave trace.vcd
	
.PHONY: main

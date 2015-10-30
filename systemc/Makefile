GTKWAVE:=$(which gtkwave)

all: hello decoder
hello:hello.cc
	@echo 'building file: $(@F)'
	$(CXX) -I/usr/local/systemc-2.3.1/include -O0 -g3 -Wall -c hello.cc
	$(CXX) -L/usr/local/systemc-2.3.1/lib-linux64 -o "hello" hello.o -lsystemc
	./hello
decoder:prerequisites decoder.cc
	@echo 'building file $(@F)'
	$(CXX) -I/usr/local/systemc-2.3.1/include -O0 -g3 -Wall -c decoder.cc
	$(CXX) -L/usr/local/systemc-2.3.1/lib-linux64 -o "decoder" decoder.o -lsystemc
	./decoder
	gtkwave -c 4 timing_diagram.vcd

prerequisites: 
ifneq "$(GTKWAVE)" "/usr/bin/gtkwave"
	@echo 'installing gtkwave, please be patient'
	sudo apt-get install -y gtkwave
endif
.PHONY: decoder

seque:seque.cc
	@echo 'building file: $(@F)'
	$(CXX) -I/usr/local/systemc-2.3.1/include -O0 -g3 -Wall -c seque.cc
	$(CXX) -L/usr/local/systemc-2.3.1/lib-linux64 -o "seque" seque.o -lsystemc
	./seque


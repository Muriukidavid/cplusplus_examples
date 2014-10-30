CXX = g++

all:calc tempcalc clock
clock:clock.cc
	@echo 'Building file: $(@F)'
	$(CXX) $< -o $@
calc:calc.cc
	@echo 'Building file: $(@F)'
	$(CXX) $< -o $@
tempcalc:tempcalc.cc
	@echo 'Building file: $(@F)'
	$(CXX) $< -o $@
hello:hello.cc
	@echo 'building file: $(@F)'
	$(CXX) -I/usr/local/systemc-2.3.0/include -O0 -g3 -Wall -c hello.cc
	$(CXX) -L/usr/local/systemc-2.3.0/lib-linux64 -o "hello" hello.o -lsystemc
cleanclock:
	rm -f clock.o clock
clean:
	rm -f *.out *.o calc tempcalc clock

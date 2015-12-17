CXX = g++

all:calc tempcalc clock hello
clock:clock.cc
	@echo 'Building file: $(@F)'
	$(CXX) $< -o $@
calc:calc.cc
	@echo 'Building file: $(@F)'
	$(CXX) $< -o $@
tempcalc:tempcalc.cc
	@echo 'Building file: $(@F)'
	$(CXX) $< -o $@
systemc:
	cd systemc; $(MAKE) 
cleanclock:
	rm -f clock.o clock
clean:
	rm -f *.out *.o calc tempcalc clock
.PHONY: systemc

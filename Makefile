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
cleanclock:
	rm -f clock.o clock
clean:
	rm -f *.out *.o calc tempcalc clock

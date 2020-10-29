PROGRAM   = a.out
CXX       = c++
CXXFLAGS  = -g -std=c++17 -Wall

$(PROGRAM): main.o
	$(CXX) -o $(PROGRAM) main.o

.PHONY: clean

clean:
	-rm *.o $(PROGRAM)

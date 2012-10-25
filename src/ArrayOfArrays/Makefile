CPP = g++
CFLAGS = -Wall -Wextra -Werror
BUILD = ../../build/ArrayOfArrays

main: twodarray_test.cpp TwoDArray.o
	$(CPP) $(CFLAGS) -o $(BUILD)/TwoDArrayTest twodarray_test.cpp TwoDArray.o

TwoDArray.o: TwoDArray.h TwoDArray.cpp
	$(CPP) $(CFLAGS) -c TwoDArray.cpp

clean:
	rm -f *.o;
	rm -f ../../build/ArrayOfArrays/*
	rm -f *~;

CPP = g++
CFLAGS = -Wall -Wextra -Werror
BUILDPATH = ../../build/SparseArray
BUILD = $(BUILDPATH)/SparseArrayTest

main: TwoDArray.o Node.o TwoDArray.o TwoDArray.cpp Node.cpp
	$(CPP) $(CFLAGS) -o $(BUILD) -c twodarray_test.cpp

TwoDArray.o: Node.o TwoDArray.h TwoDArray.cpp
	$(CPP) $(CFLAGS) -c TwoDArray.cpp

Node.o: Node.h Node.cpp
	$(CPP) $(CFLAGS) -c Node.cpp

clean:
	rm -f *.o;
	rm -f *~;
	rm -f $(BUILD)

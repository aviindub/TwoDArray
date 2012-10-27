BUILD = ../build
TEST = ../test
LIB = ../lib
SRC = ../src
VSRC = $(SRC)/VectorOfVectors
ASRC = $(SRC)/ArrayOfArrays
SSRC = $(SRC)/SparseArray
GTEST = $(LIB)/gtest-1.6.0
GTEST_MAINA = $(GTEST)/make/gtest_main.a

GTEST_INCLUDES = -I$(GTEST) -I$(GTEST)/include

CPP = g++
CPPFLAGS = -Wall -Wextra

all: vector_test array_test sparse_array_test

vector_test: TwoDArray.cpp $(VSRC)/TwoDArray.o $(GTEST_MAINA)
	$(CPP) $(CFLAGS) $(GTEST_INCLUDES) -pthread -o vector_test TwoDArray.cpp $(VSRC)/TwoDArray.o $(GTEST_MAINA)

array_test: TwoDArray.cpp $(ASRC)/TwoDArray.o $(GTEST_MAINA)
	$(CPP) $(CFLAGS) $(GTEST_INCLUDES) -pthread -o array_test TwoDArray.cpp $(ASRC)/TwoDArray.o $(GTEST_MAINA)

sparse_array_test: TwoDArray.cpp $(SSRC)/TwoDArray.o $(GTEST_MAINA)
	$(CPP) $(CFLAGS) $(GTEST_INCLUDES) -pthread -o sparse_array_test TwoDArray.cpp $(SSRC)/TwoDArray.o $(SSRC)/Node.o $(GTEST_MAINA)

$(GTEST_MAINA): $(GTEST)/src/*.cc $(GTEST)/src/*.h
	cd $(GTEST)/make; make

$(VSRC)/TwoDArray.o: $(VSRC)/TwoDArray.h $(VSRC)/TwoDArray.cpp
	cd $(VSRC); make

$(ASRC)/TwoDArray.o: $(ASRC)/TwoDArray.h $(ASRC)/TwoDArray.cpp
	cd $(ASRC); make

$(SSRC)/TwoDArray.o: $(SSRC)/TwoDArray.h $(SSRC)/TwoDArray.cpp $(SSRC)/Node.o
	cd $(SSRC); make

clean:
	rm -f *_test
	rm -f $(GTEST_MAINA)
	cd $(GTEST)/make; $(MAKE) clean
	cd $(VSRC); make clean
	cd $(ASRC); make clean
	cd $(SSRC); make clean

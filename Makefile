CPP = g++
CFLAGS = -Wall -Wextra -Werror

ltest: list_test.cpp Node.o LinkedList.o
	$(CPP) $(CFLAGS) -o ltest $^

test: node_test.cpp Node.o LinkedList.o
	$(CPP) $(CFLAGS) -o test $^

LinkedList.o: Node.o LinkedList.h LinkedList.cpp
	$(CPP) $(CFLAGS) -c LinkedList.cpp

Node.o: Node.h Node.cpp
	$(CPP) $(CFLAGS) -c Node.cpp

clean:
	rm -f *.o;
	rm -f test; rm -f ltest;
	rm -f *~;

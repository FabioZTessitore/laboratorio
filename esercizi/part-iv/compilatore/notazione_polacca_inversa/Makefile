CC=gcc
CFLAGS=-Wall -ansi -pedantic

main: main.o queue.o stack.o node.o

main.o: main.c queue.h
stack.o: stack.c stack.h node.h
queue.o: queue.c queue.h node.h
node.o: node.c node.h

.PHONY: clean
clean:
	rm -f *.o main
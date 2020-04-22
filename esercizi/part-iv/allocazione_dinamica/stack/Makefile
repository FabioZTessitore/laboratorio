CC=gcc
CFLAGS=-Wall -ansi -pedantic

main: main.o stack.o

main.o: main.c stack.h
stack.o: stack.c stack.h node.h

.PHONY: clean
clean:
	rm -f *.o main
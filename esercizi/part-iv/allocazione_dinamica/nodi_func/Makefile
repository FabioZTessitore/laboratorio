CC=gcc
CFLAGS=-Wall -ansi -pedantic

main: main.o node.o

main.o: main.c node.h
node.o: node.c node.h

.PHONY: clean
clean:
	rm -f *.o main
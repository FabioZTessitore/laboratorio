CC=gcc
CFLAGS=-Wall -ansi -pedantic

main: main.o list.o

main.o: main.c list.h
list.o: list.c list.h node.h

.PHONY: clean
clean:
	rm -f *.o main
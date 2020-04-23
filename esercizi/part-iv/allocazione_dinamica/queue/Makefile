CC=gcc
CFLAGS=-Wall -ansi -pedantic

main: main.o queue.o

main.o: main.c queue.h
queue.o: queue.c queue.h node.h

.PHONY: clean
clean:
	rm -f *.o main
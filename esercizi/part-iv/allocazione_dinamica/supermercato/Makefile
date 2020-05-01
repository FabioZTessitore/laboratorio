CC=gcc
CFLAGS=-Wall -ansi -pedantic

main: main.o queue.o random.o

main.o: main.c queue.h random.h
queue.o: queue.c queue.h node.h
random.o: random.c random.h

.PHONY: clean
clean:
	rm -f *.o main
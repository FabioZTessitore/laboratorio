CC=gcc
CFLAGS=-Wall -ansi -pedantic
LDLIBS=

main: random.o main.o

main.o: main.c random.h
random.o: random.c random.h

.PHONY: clean
clean:
	rm -f *.o main

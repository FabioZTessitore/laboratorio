CC=gcc
CFLAGS=-Wall -ansi -pedantic
LDLIBS=

main: random.o main.o

random.o: random.c random.h
main.o: main.c random.h

.PHONY: clean
clean:
	rm -f *.o main

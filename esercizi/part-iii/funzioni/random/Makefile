CC=gcc
CFLAGS=-Wall -ansi -pedantic
LDLIBS=

random: random.o main.o

random.o: random.c random.h
main.o: main.c random.h

.PHONY: clean
clean:
	rm -f *.o random

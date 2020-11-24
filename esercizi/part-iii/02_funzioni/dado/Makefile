CC=gcc
CFLAGS=-Wall -ansi -pedantic
LDLIBS=

main: random.o dado.o main.o

main.o: main.c dado.h
dado.o: dado.c dado.h random.h
random.o: random.c random.h

.PHONY: clean
clean:
	rm -f *.o main

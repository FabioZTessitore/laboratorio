CC=gcc
CFLAGS=-Wall -ansi -pedantic
LDLIBS=

main: main.o guess.o random.o

main.o: main.c guess.h
guess.o: guess.c guess.h random.h
random.o: random.c random.h

.PNONY: clean
clean:
	rm -rf *.o main

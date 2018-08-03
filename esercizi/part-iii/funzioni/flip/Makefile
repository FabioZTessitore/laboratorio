CC=gcc
CFLAGS=-Wall -ansi -pedantic
LDLIBS=

coin: random.o coin.o main.o

random.o: random.c random.h
coin.o: coin.c coin.h random.h
main.o: main.c coin.h

.PHONY: clean
clean:
	rm -f *.o coin

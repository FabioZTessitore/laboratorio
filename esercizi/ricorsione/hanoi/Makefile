CC=gcc
CFLAGS=-Wall -ansi -pedantic
LDLIBS=

hanoi: hanoi.o main.o

main.o: main.c hanoi.h
hanoi.o: hanoi.c hanoi.h

.PHONY: clean
clean:
	rm -f *.o hanoi

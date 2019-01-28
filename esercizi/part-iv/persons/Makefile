CC=gcc
CFLAGS=-Wall -ansi -pedantic

main: main.o person.o utils.o

main.o: main.c person.h utils.h
person.o: person.c person.h utils.h
utils.o: utils.c utils.h

.PHONY: clean
clean:
	rm -f *.o main

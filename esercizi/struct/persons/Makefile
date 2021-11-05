CC=gcc
CFLAGS=-Wall -ansi -pedantic

main: main.o person.o safeString.o

main.o: main.c person.h safeString.h
person.o: person.c person.h safeString.h
safeString.o: safeString.c safeString.h

.PHONY: clean
clean:
	rm -f *.o main

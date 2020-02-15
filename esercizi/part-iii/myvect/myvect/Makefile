CC=gcc
LDFLAGS=-Wall -ansi -pedantic
LDLIBS=

main: random.o myvect.o main.o

main.o: main.c myvect.h
myvect.o: myvect.c myvect.h random.h
random.o: random.c random.h

.PHONY: clean
clean:
	rm -f *.o main

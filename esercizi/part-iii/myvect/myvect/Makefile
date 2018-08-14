CC=gcc
LDFLAGS=-Wall -ansi -pedantic
LDLIBS=

main: random.o myvect.o main.o

random.o: random.c random.h
myvect.o: myvect.c myvect.h random.h
main.o: main.c myvect.h

.PHONY: clean
clean:
	rm -f *.o main

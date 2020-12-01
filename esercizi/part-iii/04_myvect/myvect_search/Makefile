CC=gcc
CFLAGS=-Wall -ansi -pedantic
LDLIBS=

main: random.o myvect.o myvect_search.o main.o

main.o: main.c myvect.h myvect_search.h
myvect_search.o: myvect_search.c myvect_search.h
myvect.o: myvect.c myvect.h random.h
random.o: random.c random.h

.PHONY: clean
clean:
	rm -f *.o main

CC=gcc
LDFLAGS=-Wall -ansi -pedantic
LDLIBS=

main: random.o myvect.o myvect_search.o main.o

random.o: random.c random.h
myvect.o: myvect.c myvect.h random.h
myvect_search.o: myvect_search.c myvect_search.h
main.o: main.c myvect.h myvect_search.h

.PHONY: clean
clean:
	rm -f *.o main

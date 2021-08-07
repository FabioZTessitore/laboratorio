CC=gcc
CFLAGS=-Wall -ansi -pedantic
LDLIBS=

main: random.o myvect.o myvect_math.o myvect_search.o myvect_sort.o main.o

main.o: main.c myvect.h myvect_sort.h myvect_search.h
myvect_sort.o: myvect_sort.c myvect_sort.h myvect_math.h
myvect_search.o: myvect_search.c myvect_search.h
myvect_math.o: myvect_math.c myvect_math.h
myvect.o: myvect.c myvect.h random.h
random.o: random.c random.h

.PHONY: clean
clean:
	rm -f *.o main

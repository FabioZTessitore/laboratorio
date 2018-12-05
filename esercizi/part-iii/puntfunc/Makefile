CC=gcc
LDFLAGS=-Wall -ansi -pedantic
LDLIBS=

main: random.o myvect.o myvect_sort.o myvect_math.o myvect_utils.o main.o

main.o: main.c myvect.h myvect_utils.h
myvect_utils.o: myvect_utils.h myvect_utils.c
myvect_math.o: myvect_math.c myvect_math.h
myvect_sort.o: myvect_sort.c myvect_sort.h myvect_math.h
myvect.o: myvect.c myvect.h random.h
random.o: random.c random.h

.PHONY: clean
clean:
	rm -f *.o main

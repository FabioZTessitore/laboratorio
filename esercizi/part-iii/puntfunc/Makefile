CC=gcc
CFLAGS=-Wall -ansi -pedantic
LDLIBS=

main: random.o myvect.o myvect_utils.o main.o

main.o: main.c myvect.h myvect_utils.h
myvect_utils.o: myvect_utils.c myvect_utils.h
myvect.o: myvect.c myvect.h random.h
random.o: random.c random.h

.PHONY: clean
clean:
	rm -f *.o main

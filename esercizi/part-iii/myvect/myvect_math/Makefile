CC=gcc
LDFLAGS=-Wall -ansi -pedantic
LDLIBS=

main: random.o myvect.o myvect_math.o main.o

main.o: main.c myvect.h myvect_math.h
myvect_math.o: myvect_math.c myvect_math.h
myvect.o: myvect.c myvect.h random.h
random.o: random.c random.h

.PHONY: clean
clean:
	rm -f *.o main

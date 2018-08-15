CC=gcc
LDFLAGS=-Wall -ansi -pedantic
LDLIBS=

main: random.o myvect.o myvect_math.o main.o

random.o: random.c random.h
myvect.o: myvect.c myvect.h random.h
myvect_math.o: myvect_math.c myvect_math.h
main.o: main.c myvect.h myvect_math.h

.PHONY: clean
clean:
	rm -f *.o main

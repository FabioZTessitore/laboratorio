CC=gcc
CFLAGS=-Wall -ansi -pedantic
LDLIBS=

main: main.o cai.o random.o

main.o: main.c cai.h
cai.o: cai.c cai.h random.h
random.o: random.c random.h

.PNONY: clean
clean:
	rm -rf *.o main

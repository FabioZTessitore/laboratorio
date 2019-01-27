CC=gcc
CFLAGS=-Wall -ansi -pedantic

simpletron: main.o memory.o cpu.o simpletron.o

main.o: main.c simpletron.h cpu.h memory.h
memory.o: memory.c memory.h
cpu.o: cpu.c cpu.h memory.h
simpletron.o: simpletron.c simpletron.h cpu.h memory.h

.PHONY: clean
clean:
	rm -f *.o simpletron

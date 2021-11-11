CC=gcc
CFLAGS=-Wall -ansi -pedantic

simpletron: main.o memory.o cpu.o simpletron.o safeString.o

main.o: main.c simpletron.h
simpletron.o: simpletron.c simpletron.h cpu.h memory.h safeString.h
cpu.o: cpu.c cpu.h memory.h
memory.o: memory.c memory.h
safeString.o: safeString.c safeString.h

.PHONY: clean
clean:
	rm -f *.o simpletron

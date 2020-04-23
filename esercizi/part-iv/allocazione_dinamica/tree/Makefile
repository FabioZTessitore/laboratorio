CC=gcc
CFLAGS=-Wall -ansi -pedantic

main: main.o tree.o

main.o: main.c tree.h
tree.o: tree.c tree.h node.h

.PHONY: clean
clean:
	rm -f *.o main
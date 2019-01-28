CC=gcc
CFLAGS=-Wall -ansi -pedantic

TEST_LDLIBS=-lcunit

main: main.c aritmetica.o

test: test.o aritmetica.o
	$(CC) $^ -o $@ $(TEST_LDLIBS)

aritmetica.o: aritmetica.c aritmetica.h

test.o: test.c aritmetica.h

.PHONY: clean
clean:
	rm -f *.o test main

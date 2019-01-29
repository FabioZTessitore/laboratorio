CC=gcc
CFLAGS=-Wall -ansi -pedantic
LDLIBS=

TEST_LDLIBS=-lcunit

random: random.o main.o

test: test.o random.o
	$(CC) $^ -o $@ $(TEST_LDLIBS)

random.o: random.c random.h
main.o: main.c random.h

test.o: test.c random.h

.PHONY: clean
clean:
	rm -f *.o test random

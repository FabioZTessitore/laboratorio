CC=gcc
CFLAGS=-Wall -ansi -pedantic
LDLIBS=

TEST_LDLIBS=-lcunit

main: main.o random.o

test: test.o random.o
	$(CC) $^ -o $@ $(TEST_LDLIBS)

main.o: main.c random.h
random.o: random.c random.h
test.o: test.c random.h

.PHONY: clean
clean:
	rm -f *.o test main

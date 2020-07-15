CC=gcc
CFLAGS=-Wall -ansi -pedantic
LDLIBS=

TEST_LDLIBS=-lcunit

main: main.o person.o utils.o

test: test.o person.o utils.o
	$(CC) $^ -o $@ $(TEST_LDLIBS)

main.o: main.c person.h utils.h
person.o: person.c person.h utils.h
utils.o: utils.c utils.h
test.o: test.c person.h

.PHONY: clean
clean:
	rm -f *.o test main

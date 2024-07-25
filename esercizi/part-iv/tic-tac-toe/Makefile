CC=gcc
CFLAGS=-Wall -ansi -pedantic
LDLIBS=

tictactoe: main.o board.o tictactoe.o

tictactoe.o: tictactoe.c tictactoe.h board.h
board.o: board.c board.h
main.o: main.c tictactoe.h

.PHONY: clean
clean:
	rm -f *.o tictactoe

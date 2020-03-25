CC=gcc
CFLAGS=-Wall -ansi -pedantic

main: main.o bankaccount.o utils.o

main.o: main.c bankaccount.h
bankaccount.o: bankaccount.c bankaccount.h utils.h
utils.o: utils.c utils.h

.PHONY: clean
clean:
	rm -f *.o main
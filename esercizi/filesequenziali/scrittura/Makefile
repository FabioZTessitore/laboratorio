CC=gcc
CFLAGS=-Wall -ansi -pedantic

main: main.o bankaccount.o safeString.o

main.o: main.c safeString.h bankaccount.h
bankaccount.o: bankaccount.c bankaccount.h safeString.h
safeString.o: safeString.c safeString.h

.PHONY: clean
clean:
	rm -f *.o main
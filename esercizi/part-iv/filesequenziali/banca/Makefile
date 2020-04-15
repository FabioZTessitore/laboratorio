CC=gcc
CFLAGS=-Wall -ansi -pedantic

main: main.o ui.o bank.o bankaccount.o utils.o

main.o: main.c ui.h bank.h
ui.o: ui.c ui.h bank.h
bank.o: bank.c bank.h bankaccount.h utils.h
bankaccount.o: bankaccount.c bankaccount.h utils.h
utils.o: utils.c utils.h

.PHONY: clean
clean:
	rm -f *.o main
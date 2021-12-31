CC=gcc
CFLAGS=-Wall -ansi -pedantic

main: main.o ui.o bank.o bankaccount.o safeString.o

main.o: main.c ui.h bank.h
bank.o: bank.c bank.h bankaccount.h safeString.h
bankaccount.o: bankaccount.c bankaccount.h safeString.h
safeString.o: safeString.c safeString.h
ui.o: ui.c ui.h

.PHONY: clean
clean:
	rm -f *.o main
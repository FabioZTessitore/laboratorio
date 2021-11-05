CC=gcc
CFLAGS=-Wall -ansi -pedantic

chicago: safeString.o random.o dado.o player.o chicago.o main.o

main.o: main.c chicago.h player.h safeString.h
chicago.o: chicago.c chicago.h dado.h player.h
dado.o: dado.c dado.h random.h
random.o: random.c random.h
player.o: player.c player.h safeString.h
safeString.o: safeString.c safeString.h

.PHONY: clean
clean:
	rm -f *.o chicago

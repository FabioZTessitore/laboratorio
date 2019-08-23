CC=gcc
CFLAGS=-Wall -ansi -pedantic
LDLIBS=

chicago: utils.o random.o dado.o player.o chicago.o main.o

utils.o: utils.c utils.h
random.o: random.c random.h
dado.o: dado.c dado.h random.h
player.o: player.c player.h utils.h
chicago.o: chicago.c chicago.h dado.h player.h
main.o: main.c chicago.h player.h utils.h

.PHONY: clean
clean:
	rm -f *.o chicago

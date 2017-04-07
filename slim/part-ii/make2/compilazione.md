Regole di compilazione

#### Regole di compilazione

Finora nel Makefile abbiamo inserito solo i valori delle opzioni di compilazione:

```
CC=gcc                          # indica quale compilatore utilizzare
CFLAGS=-Wall -ansi -pedantic    # opzioni di compilazione
```

&Egrave; possibile, però, inserire anche delle *regole di compilazione*.
In altre parole specificare come devono essere effettuati i vari passaggi
di compilazione e link.

Immagina di avere un programma, `hello.c`, che fa uso delle librerie `ncurses`.

Da terminale dovresti scrivere:

> Compilazione

```
$ gcc -Wall -ansi -pedantic -c hello.c -o hello.o
```

> Link

```
$ gcc -lncurses hello.o -o hello
```

Utilizzando make creiamo un Makefile fatto così:

```
CC=gcc
CFLAGS=-Wall -ansi -pedantic
LDFLAGS=-lncurses

# regola per la creazione dell'eseguibile hello
#
# hello "dipende da" hello.o
hello: hello.o
  $(CC) $(LDFLAGS) hello.o -o hello


# regola per la creazione di hello.o
#
# hello.o "dipende da" hello.c
hello.o: hello.c
  $(CC) $(CFLAGS) -c hello.c -o hello.o
```

A questo punto da terminale basterà lanciare `make` senza altri argomenti
e verrà lanciata la prima regola incontrata nel Makefile.
Siccome hello dipende da hello.o, verrà controllata la relativa regola e se
il file hello.c è stato modificato viene ricostruito hello.o e quindi hello.

##### Regole implicite

Le regole di compilazione che abbiamo visto sono praticamente sempre le stesse
e per questo l'utility make le usa anche se non vengono scritte esplicitamente.

Il Makefile si semplifica:

```
CC=gcc
CFLAGS=-Wall -ansi -pedantic
LDFLAGS=-lncurses

hello: hello.o

hello.o: hello.c
```

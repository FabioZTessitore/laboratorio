Regole di compilazione

#### Regole di compilazione

Finora nel `Makefile` abbiamo inserito solo i valori delle opzioni di compilazione:

```make
CC=gcc                          # indica quale compilatore utilizzare
CFLAGS=-Wall -ansi -pedantic    # opzioni di compilazione
LDLIBS=                         # librerie
```

&Egrave; possibile, però, inserire anche delle *regole di compilazione*.
In altre parole specificare come devono essere effettuati i vari passaggi
di compilazione e link.

Per programmi composti da un singolo file
potrebbe non essere interessante, ma le cose cambiano quando ci sono tanti file.

Per iniziare, immagina di avere un programma composto da due file, `hello.c`
e `main.c`. Il primo passaggio da effettuare è la compilazione *di entrambi* per ottenere `hello.o` e `main.o`:

> Compilazione

```
$ gcc -Wall -ansi -pedantic -c hello.c -o hello.o
$ gcc -Wall -ansi -pedantic -c main.c -o main.o
```

A seguire colleghiamo i file e le librerie ottenendo l'eseguibile `hello`:

> Link

```
$ gcc hello.o main.o -o hello
```

Invece di scrivere questi comandi a mano possiamo istruire make. Dobbiamo dirgli
da *chi dipende* ogni file che vogliamo ottenere. Nel nostro caso, il file
`hello.o` *dipende* da `hello.c` nel senso che è necessario quest'ultimo per
ottenere il risultato. Allo stesso modo `main.o` *dipende* da `main.c`.
Possiamo anche scrivere esplicitamente come deve essere effettuata la compilazione:

```make
# regola per la creazione di hello.o
#
# hello.o "dipende da" hello.c
hello.o: hello.c
  $(CC) $(CFLAGS) -c hello.c -o hello.o

# regola per la creazione di main.o
#
# main.o "dipende da" main.c
main.o: main.c
  $(CC) $(CFLAGS) -c main.c -o main.o
```

In realtà `make` sa già come compilare i file `.c` in `.o` quindi non è necessario
indicare le regole di compilazione in maniera esplicita. Possiamo semplificare:

```make
# regole per la creazione di hello.o e main.o
hello.o: hello.c
main.o: main.c
```

Resta da scrivere come creare l'eseguibile e anche in questo caso `make` sa
come fare, bisogna solo indicare da chi dipende `hello`:

```make
hello: hello.o main.o
```

#### Creazione di un Makefile

Il Makefile per il nostro programma di esempio è fatto così:

```make
CC=gcc
CFLAGS=-Wall -ansi -pedantic
LDLIBS=

# regola per la creazione dell'eseguibile hello
hello: hello.o main.o

# regola per la creazione di hello.o e main.o
hello.o: hello.c
main.o: main.c
```

La regola per la creazione dell'eseguibile è posta come prima. Infatti
se da terminale si lancia `make` senza altri argomenti verrà lanciata
proprio la prima regola incontrata semplificando ancora un pochino il lavoro.


C'è, però, un altro aspetto interessante. `make` permette di evitare compilazioni
inutili andando a controllare data e ora di modifica dei file. Se, ad esempio,
il file `hello.c` è più vecchio del corrispondente `hello.o`,
esso non verrà ricompilato facendoci risparmiare tempo.

#### Pulizia

`make` e il `Makefile` permettono come vedi di semplificare di molto il lavoro,
ma non è finita. Possiamo fargli compiere qualsiasi azione ed in particolare
può essere utile la pulizia della cartella dai file `.o` ed eseguibili.

Per farlo basta aggiungere una nuova regola al `Makefile`:

```make
clean:
  rm -f *.o nomeeseguibile
```

Siccome `clean` non è un nome di file, è buona abitudine marcare questa regola
come *falsa*, `PHONY`:

```make
.PHONY: clean
clean:
  rm -f *.o nomeeseguibile
```

Quando abbiamo necessità di fare pulizia basterà un:

```
$ make clean
```

<a href="/activities/3">Torna alla Parte III</a>

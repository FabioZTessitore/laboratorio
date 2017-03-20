L'utility make


#### L'utility make

Finora hai dovuto effettuare manualmente le operazioni di compilazione e di link.
L'utility *make* permette di automatizzare il tutto.

Sempre immaginando di avere un file C `hello.c`:

```
$ make hello
cc hello.c -o hello
```

Nota che viene usato il compilatore `cc` invece di `gcc` e che il tutto
si svolge in una sola operazione.

##### Le opzioni di compilazione con make

Così facendo, però, la compilazione avverrà secondo delle regole predefinite.

Per modificare tale comportamento si possono usare delle variabili di ambiente.
`CC` indica quale compilatore usare, `CFLAGS` quali opzioni di compilazione,
`LDFLAGS` le librerie.

```
$ CC=gcc CFLAGS="-ansi -Wall -pedantic" make hello
gcc -Wall -ansi -pedantic    hello.c   -o hello
```

<a href="/activities/2">Torna alla Parte II</a>

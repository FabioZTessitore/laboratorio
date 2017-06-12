Creazione di un Makefile


#### Creazione di un Makefile

Quanto visto sull'utility make modifica il modo di scrivere i comandi
di compilazione, ma la cosa risulta ancora lunga, noiosa e soggetta ad errori.

Per semplificare il lavoro puoi, allora, scrivere un file `Makefile` in
cui definire quelle variabili di ambiente che modificano il comportamento
di make.

> Makefile

```
CC=gcc
CFLAGS=-ansi -Wall -pedantic
LDLIBS=
```

`LDLIBS` al momento non è utilizzata, ma sarà un comodo segnaposto per
quando bisognerà aggiungere qualche libreria.

La compilazione segue con una semplice chiamata a make:

```
$ make hello
gcc -Wall -ansi -pedantic    hello.c   -o hello
```

<a href="/activities/2">Torna alla Parte II</a>

Opzioni di compilazione


#### Opzioni di compilazione

Finora, immaginando di avere un file C `hello.c`, hai effettuato le operazioni
di compilazione e di link in questo modo:

```
$ gcc -c hello.c -o hello.o
$ gcc hello.o -o hello
```

Il compilatore `gcc` accetta, però, tante altre opzioni.

In particolare:

- `-ansi` impone di utilizzare lo standard `c90` del linguaggio C;
- `-Wall` abilita tutta una serie di avvertimenti;
- `-pedantic` segnala tutte le possibili criticità riportate dallo standard.

Di conseguenza i passaggi di prima diventano:

```
$ gcc -ansi -Wall -pedantic -c hello.c -o hello.o
$ gcc hello.o -o hello
```

<a href="/activities/2">Torna alla Parte II</a>

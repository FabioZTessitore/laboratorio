Il ciclo while


#### Il ciclo while

Nelle esercitazioni che hai fatto finora ti sarà capitato di dover eseguire
sempre la stessa sequenza di istruzioni per un certo numero di volte.

In questi casi non è conveniente riscrivere sempre le stesse righe. Molto meglio
indicare quante volte (oppure fino a quando) eseguire il codice da ripetere.

Uno dei costrutti che permette la ripetizione di istruzioni è il ciclo *while*.
Si presenta nella forma:

```
while (condizione) {
  lista di istruzioni da ripetere;
}
```

La *lista di istruzioni da ripetere* verrà eseguita fin quando la *condizione*
risulterà soddisfatta. Ad esempio, il prossimo ciclo stampa tre volte un saluto:

> saluta.c

```
/* contatore, parte da zero */
int i = 0;

/* esegue finche' i minore di 3 */
while (i < 3) {
  /* stampa un saluto */
  puts("Hello");

  /* aggiorna il contatore! */
  i++;
  /*
    i++ e' equivalente a:

    i = i + 1;

    oppure a:

    i += 1;
  */
}
```

Non dimenticare di creare il `Makefile`

> Makefile

```
CC=gcc
CFLAGS=-Wall -ansi -pedantic
LDFLAGS=
```

Infine compila ed esegui:

```
$ make saluta
gcc -Wall -ansi -pedantic   saluta.c   -o saluta

$ ./saluta
Hello
Hello
Hello
```

<a href="/activities/2">Torna alla Parte II</a>

Espansione delle variabili, delle espressioni aritmetiche, dei comandi


#### Espansione delle variabili, delle espressioni aritmetiche, dei comandi

##### Espansione delle variabili

Linux mette a disposizione dell'utente
una serie di variabili contenenti svariate informazioni.
Per accedere a queste variabili si usa il carattere `$`

Ad esempio, la variabile `BASH` contiene il percorso dell'eseguibile
della shell in uso. Per visualizzarne il contenuto:

```
$ echo $BASH
/bin/bash
```

Controlla:

```
$ ls -l $BASH
-rwxr-xr-x 1 root root 1099016 nov 15 19:49 /bin/bash
```

Memorizzando il percorso della shell in una variabile, tutti i file di configurazione,
e l'utente stesso, possono far riferimento a `$BASH` senza preoccuparsi di sapere
qual è il file attualmente in uso.

Ci siano molte altre variabili. Visualizza il contenuto di
`HOME` e `USER`. La shell sa un sacco di cose!

##### Espansione delle espressioni aritmetiche

La shell di Linux è uno strumento estremamente
versatile. Permette anche di fare operazioni aritmetiche.

```
$ echo "I am $[2016-1979] years old!"
I am 37 years old!
```

##### Espansione dei comandi

Il comando precedente sarebbe più utile
se l'anno 2016 non fosse scritto, bensì calcolato.

Dovresti già conoscere un comando in grado
di dire qual è l'anno in corso, `date`.

```
$ date +%Y
```

A questo punto non resta altro da fare che inserire un comando
all'interno di un altro comando. A tal proposito esistono gli operatori `$()`
oppure `` (apici inversi).

```
$ echo "I am $[$(date +'%Y')-1979] years old!"
...  # il risultato dipende dall'anno in corso!
```

Un altro esempio:

```
$ echo "There are $(ls | wc -w) files in this directory."
There are 15 files in this directory.
```

Viene prima eseguito il comando `ls`,
poi la pipe con `wc` (word count) che conta le parole (opzione `-w`).
Infine avviene la stampa con echo del numero di file nella directory
(il numero di parole contato da `wc -w`).

<a href="/activities/2">Torna alla Parte II</a>

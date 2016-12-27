# Espansione delle variabili, delle espressioni aritmetiche, dei comandi

![](../../images/people/tess.png): Sig. Tazza, la shell di Linux sa
un sacco di cose ...

![](../../images/people/tazza.png): Su di me?

![](../../images/people/tess.png): Oggi è un po' paranoico?

## Espansione delle variabili

![](../../images/people/tess.png): Linux mette a disposizione dell'utente
una serie di variabili contenenti svariate informazioni.
Per accedere a queste variabili si usa il carattere `$`

Ad esempio, la variabile `BASH` contiene il percorso dell'eseguibile
della shell in uso. Per visualizzarne il contenuto:

```
$ echo $BASH
/bin/bash
```

Controlli pure:

```
$ ls -l $BASH
-rwxr-xr-x 1 root root 1099016 nov 15 19:49 /bin/bash
```

![](../../images/people/tazza.png): Che motivo c'è di memorizzare il percorso
dell'eseguibile della shell? Non è sempre lo stesso?

![](../../images/people/tess.png): Evidentemente no. Esistono vari tipi di shell
e `/bin/bash` e solo una di queste.

Memorizzando il percorso della shell in una variabile tutti i file di configurazione,
e l'utente stesso, possono far riferimento a `$BASH` senza preoccuparsi di sapere
qual è il file attualmente in uso.

![](../../images/people/tazza.png): E immagino ci siano molte altre variabili.

![](../../images/people/tess.png): Esatto. Visualizzi il contenuto delle variabili
`HOME` e `USER`. La shell sa!

## Espansione delle espressioni aritmetiche

![](../../images/people/tess.png): La shell di Linux è uno strumento estremamente
versatile. Lo sa che permette anche di fare operazioni aritmetiche?

```
$ echo "I am $[2016-1979] years old!"
I am 37 years old!
```

## Espansione dei comandi

![](../../images/people/tess.png): Il comando precedente sarebbe più utile
se l'anno 2016 non fosse scritto, bensì calcolato.

![](../../images/people/tazza.png): D'altra parte il 2016 sta finendo.

![](../../images/people/tess.png): E non conosce nessun comando in grado
di dire qual è l'anno in corso?

![](../../images/people/tazza.png): Certo, `date`

```
$ date +%Y
```

Se potessi inserire un comando all'interno di un altro comando ...

![](../../images/people/tess.png): Esistono gli operatori `$()` oppure `` (apici inversi)
proprio per questo.

```
$ echo "I am $[$(date +'%Y')-1979] years old!"
...  # il risultato dipende dall'anno in corso!
```

Le faccio un altro esempio:

```
$ echo "There are $(ls | wc -w) files in this directory."
There are 15 files in this directory.
```

Qui viene prima eseguito il comando `ls`,
poi la pipe con `wc` (word count) che conta le parole (`-w`).
Infine avviene la stampa con echo del numero di file nella directory (il numero di parole contato da `wc`).

Torna a [La shell](../summary.md)

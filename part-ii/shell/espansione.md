# Espansione delle variabili, delle espressioni aritmetiche, dei comandi

![](../../images/people/tess.png): Sig. Tazza, la shell di Linux sa
un sacco di cose ...

![](../../images/people/tazza.png): Su di me?

![](../../images/people/tess.png): Oggi è un po' paranoico?

## Espansione delle variabili

![](../../images/people/tess.png): Linux mette a disposizione dell'utente
una serie di variabili contenenti svariate informazioni.
Per accedere a queste variabili si usa il carattere `$`

Ad esempio se vuole visualizzare il contenuto della variabile `BASH`

```
$ echo $BASH
/bin/bash
```

![](../../images/people/tazza.png): Che significa questo output?

![](../../images/people/tess.png): La variabile `BASH` vale `/bin/bash`,
in altre parole fa riferimento al file ... boh

Controlli pure:

```
$ ls -l $BASH
...
```

## Espansione delle espressioni aritmetiche

A volte è necessario fare calcoli all'interno
di comandi più lunghi per ottenere altre informazioni.
Per fare operazioni aritmetiche si usa l'operatore $[]
es.
$ echo "I am $[2016-1979] years old!"
[stampa la mia età, calcolando prima
l'espressione contenuta in $[]]



Espansione dei comandi

Altre volte è necessario o utile eseguire
un comando all'interno di un altro comando
mediante gli operatori $() oppure `` (backtick)
es.
$ echo "There are $(ls | wc -w) files in this directory."
[viene prima eseguito ls,
quindi la pipe con wc (word count) che conta le parole (-w)
restituisce il numero di file nella directory
che può essere stampato da echo]

Utilizzando l'espansione dei comandi si
può modificare il comando della volta precedente
in modo da renderlo indipendente dall'anno corrente.

$ echo "I am $[$(date +'%Y')-1979] years old."
[prima viene eseguito il comando più interno, date
poi l'espressione aritmetica,
infine echo]


Torna a [La shell](../summary.md)

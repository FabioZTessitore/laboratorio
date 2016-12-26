# Connettere i comandi

![](../../images/people/tess.png): Bentornato, Sig. Tazza.

Oggi continuerò a parlarle dei comandi della shell di Linux. Uno dei principi
alla base della progettazione di tali comandi è "fai una sola cosa, ma falla bene".

Come può facilmente intuire, se ogni comando fa una sola cosa ci vorrebbero
tantissimi comandi per venire incontro a tutte le esigenze di gestione ed
amministrazione di un sistema Linux.

![](../../images/people/tazza.png): Voglio proprio sperare che si sia trovata
un'alternativa.

![](../../images/people/tess.png): Non dubiti. I comandi possono essere combinati
tra loro in modo da ottenere tutte le funzionalità di cui si ha bisogno.

## Comandi sequenziali

![](../../images/people/tess.png): Il modo più semplice per combinare comandi
è quello di mandarli in esecuzione uno dopo l'altro in sequenza. In questo
caso bisogna usare l'operatore `;`

Le faccio subito un esempio. Immagini di voler stampare la data e la directory
corrente. Può eseguire i comandi `date` e `pwd` in sequenza in questo modo:

```
$ date; pwd
lun 26 dic 2016, 19.57.32, CET
/home/fabio/Documenti/laboratorio
```

## Pipe

![](../../images/people/tess.png): Un altro strumento per connettere comandi,
molto più potente del primo, è la *pipe*.

Una pipe (operatore `|`) permette di redirigere l'output di un comando
verso l'input di un altro.

![](../../images/people/tazza.png): Sig. Tessitore, si stanno mischiando
input e output dei comandi.

![](../../images/people/tess.png): Sig. Tazza, non faccia lo spiritoso!

Ricorda quando abbiamo parlato di redirigere l'output di un comando verso
un file invece che verso il terminale? Qui stiamo facendo una cosa simile,
solo che l'output viene rediretto verso un altro comando.

![](../../images/people/tazza.png): E perché dovrei mai fare una cosa del genere?

![](../../images/people/tess.png): Perché il comando successivo può fare
delle operazioni sull'output del comando precedente in modo da ottenere
nuove funzionalità.

Le mostro un esempio:

```
$ cat /etc/passwd | sort
```

Il comando `cat /etc/passwd` non mostra il contenuto del file `/etc/passwd`
perché c'è una pipe con il comando `sort`. &Egrave; quest'ultimo a ricevere
il contenuto di `/etc/passwd`, lo riordina e solo dopo avviene la stampa.

Un altro esempio, in ordine inverso:

```
$ cat /etc/passwd | sort -r
```

Provi questi comandi come esecitazione:

> du (disk usage), mostra la dimensione dei file in /bin

```
$ du /bin/*
```

> come prima, ma stavolta riordina (numericamente, non alfabeticamente)

```
$ du /bin/* | sort -nr
```

> come prima, ma mostra solo i primi dieci elementi
(in altre parole i dieci file più grandi di /bin)

```
$ du /bin/* | sort -nr | head
```

Torna a [La shell](../summary.md)

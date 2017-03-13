Connettere i comandi


#### Connettere i comandi

Parliamo ancora dei comandi della shell di Linux.

Uno dei principi alla base della progettazione di tali comandi è "fai una sola cosa, ma falla bene".

Come puoi facilmente intuire, se ogni comando fa una sola cosa ci vorrebbero
tantissimi comandi per venire incontro a tutte le esigenze di gestione ed
amministrazione di un sistema Linux.

I comandi possono essere combinati tra loro in modo da ottenere tutte
le funzionalità di cui si ha bisogno.

##### Comandi sequenziali

Il modo più semplice per combinare comandi è quello di mandarli in
esecuzione uno dopo l'altro in sequenza.
In questo caso bisogna usare l'operatore `;`.

Immagina di voler stampare la data e la directory
corrente. Puoi eseguire i comandi `date` e `pwd` in sequenza in questo modo:

```
$ date; pwd
lun 26 dic 2016, 19.57.32, CET
/home/fabio/Documenti/laboratorio
```

##### Pipe

Un altro strumento per connettere comandi, molto più potente del primo, è la *pipe*.

Una pipe (operatore `|`) permette di redirigere l'output di un comando
verso l'input di un altro.

Ricordi quando abbiamo parlato di redirigere l'output di un comando verso
un file invece che verso il terminale? Qui stiamo facendo una cosa simile,
solo che l'output di un comando viene rediretto verso un altro comando.

Il comando successivo può fare delle operazioni sull'output del
comando precedente in modo da ottenere nuove funzionalità.

```
$ cat /etc/passwd | sort
```

Il comando `cat /etc/passwd` non mostra il contenuto del file `/etc/passwd`
perché c'è una pipe con il comando `sort`. &Egrave; quest'ultimo a ricevere
il contenuto di `/etc/passwd`, lo riordina e solo dopo avviene la stampa.

Lo stesso esempio, ma stampa in ordine inverso:

```
$ cat /etc/passwd | sort -r
```

Prova questi comandi come esecitazione:

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

<a href="/activities/2">Torna alla Parte II</a>

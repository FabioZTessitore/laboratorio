Alias


#### Alias

Quando crei comandi personalizzati, ad
esempio mediante pipe, oppure includendo un comando all'interno di un altro
comando, puoi "salvare" il comando ottenuto in modo da poterlo usare
in seguito senza riscrivere tutto da capo.

In altre parole puoi creare un *alias*.

La shell mette a disposizione la possibilità
di creare sinonimi (alias, appunto) per comandi singoli o in gruppo.

Inizia visualizzando gli alias già impostati sulla tua macchina:

```
$ alias
alias ls='ls --color=auto'
```

In questo caso il comando `ls` viene interpretato come `ls --color=auto`
e questo permette di vedere file e directory colorate.

Prova ad impostare un nuovo alias:

```
$ alias rm='rm -i'
```

D'ora in avanti il comando `rm` sarà interpretato come `rm -i`
Sulle pagine del manuale puoi scoprire cosa significa `-i`.

Proviamo con un gruppo di comandi.
Ricorderai che per lanciare comandi in sequenza si usa il `;`

```
$ alias p='pwd; ls -CF'
```

`pwd` mostra la directory corrente. `ls` il suo contenuto.
E le pagine del manuale ti diranno cosa significano `-C` e `-F`.

Se ha creato degli alias solo per prova e vuoi rimuoverli puoi farlo con `unalias`:

```
$ unalias p
```

<a href="/activities/2">Torna alla Parte II</a>

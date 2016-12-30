# Alias

![](../../images/people/tess.png): Caro Sig. Tazza, ormai ha imparato varie
tecniche per lavorare con i comandi. In particolare adesso sa come combinarli
per ottenere nuovi comandi e soddisfare tutte le sue esigenze.

![](../../images/people/tazza.png): Tutto vero, Sig. Tessitore. Devo, però, farle una
domanda.

Quando ho iniziato a lavorare con la shell, mi ha insegnato come semplificare
il lavoro, ad esempio accedendo allo storico dei comandi.

![](../../images/people/tess.png): Giusto.

![](../../images/people/tazza.png): Quando creo comandi personalizzati, ad
esempio mediante pipe, oppure includendo un comando all'interno di un altro
comando, vorrei poter "salvare" il comando ottenuto in modo da poterlo usare
in seguito senza riscrivere tutto da capo.

![](../../images/people/tess.png): Giusto. Le propongo di creare un *alias*.

La shell di Linux mette a disposizione la possibilità
di creare sinonimi (alias, appunto) per comandi singoli o in gruppo.

Inizi visualizzando gli alias già impostati sulla sua macchina:

```
$ alias
alias ls='ls --color=auto'
```

In questo caso il comando `ls` viene interpretato come `ls --color=auto`
e questo permette di vedere file e directory colorate.

Provi ad impostare un nuovo alias:

```
$ alias rm='rm -i'
```

![](../../images/people/tazza.png): Se ho capito bene, d'ora in avanti il comando
`rm` sarà interpretato come `rm -i`

![](../../images/people/tess.png): Esatto.

![](../../images/people/tazza.png): Immagino debba andare sulle pagine del manuale
per scoprire cosa significa `-i`

![](../../images/people/tess.png): Esatto ancora una volta.

![](../../images/people/tazza.png): `-i` "prompt before every removal"

![](../../images/people/tess.png): D'ora in avanti, `rm` chiederà conferma prima
di qualunque elimininazione.

![](../../images/people/tess.png): Proviamo con un gruppo di comandi.
Ricorderà che per lanciare comandi in sequenza si usa il `;`

```
$ alias p='pwd; ls -CF'
```

![](../../images/people/tazza.png): `pwd` mostra la directory corrente. `ls`
il suo contenuto. E devo andare a cercare nel manuale cosa significano `-C` e `-F`

![](../../images/people/tess.png): Sig. Tazza, è inarrestabile oggi.

![](../../images/people/tess.png): Tenga presente che se ha creato degli alias
solo per prova e vuole rimuoverli può farlo con `unalias`:

```
$ unalias p
```

Torna a [La shell](../summary.md)

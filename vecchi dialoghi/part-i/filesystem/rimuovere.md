# Rimuovere file e directory

![](../../images/people/tazza.png): Prima, nella nota, mi ha chiesto di cancellare
file e directory attraverso l'interfaccia grafica. Come si poteva fare da shell?

![](../../images/people/tess.png): &Egrave; proprio ciò di cui volevo parlarle.

Per iniziare crei un file di nome `primo.c` nella sua home. Ricorda come si fa, vero?

![](../../images/people/tazza.png): Ehm ... si, c'è il comando ... `touch`

![](../../images/people/tess.png): Molto bene!

```
$ cd
$ touch primo.c
$ ls
... primo.c
```

## Rimuovere un file

Per rimuoverlo, il comando è `rm`:

```
$ rm primo.c
$ ls
...
```

## Rimuovere una directory *vuota*

![](../../images/people/tazza.png): E per le directory?

![](../../images/people/tess.png): Per le directory bisogna fare più attenzione.<br>
Se la directory è vuota può usare `rmdir`:

```
$ mkdir test_dir
$ ls
$ rmdir test_dir
$ ls
```

Se, invece, c'è anche solo un file all'interno, `rmdir` fallirà.

![](../../images/people/tazza.png): E quindi come si può procedere? Non mi dirà che
devo cancellare prima i file presenti dentro la directory da eliminare?

![](../../images/people/tess.png): Temo di sì ... se vuole per forza usare `rmdir`.

## Rimuovere una directory

![](../../images/people/tess.png): Se, però, immagina una situazione in cui all'interno
della sua directory ci sono non solo file, ma anche altre directory,
ognuna delle quali potrebbe contenere file e directory a sua volta ...
insomma non le consiglio di proseguire su questa strada.

![](../../images/people/tess.png): Per fortuna il comando `rm` (proprio quello usato per
rimuovere file) possiede l'opzione `-r` che permette di eliminare *ricorsivamente*
tutto ciò che si trova all'interno di una directory attraversando le sottodirectory
per noi:

```
$ cd
$ mkdir -p progetti/python/helloworld
$ touch progetti/python/helloworld/hello.py   # <TAB> <TAB> <TAB> ...
$ rm -r progetti
```

Torna a [Il filesystem](../summary.md)

Oppure [continua a leggere](cpmv.md)

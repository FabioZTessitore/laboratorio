Metacaratteri


#### Metacaratteri

La shell di Linux accetta vari caratteri speciali.
Quando si opera sui file, ad esempio, questi caratteri possono aiutarti
a lavorare con maggiore efficienza.

I *metacaratteri*, in particolare, permettono di selezionare più file
contemporaneamente senza doverne scrivere il nome per esteso.

`*` significa qualunque sequenza di caratteri (anche nessuno);

`?` significa un carattere qualsiasi (però almeno uno);

`[abcxyz]` significa un carattere qualsiasi tra quelli elencati nelle parentesi;

Ecco qualche esempio di utilizzo:

> Crea alcuni file

```
$ touch ape bici grappolo ghepardo garage
```

Ora supponiamo che stai cercando un file, ma ricordi solo che il nome inizia per 'a'.
Puoi chiedere alla shell di mostrare solo i file che hanno questa caratteristica:

```
$ ls a*
ape
```

Oppure solo quelli che iniziano per 'g':

```
$ ls g*
grappolo ghepardo garage
```

Oppure quelli che iniziano per 'g' ma terminano in 'e':

```
$ ls g*e
garage
```

Un eventuale file di nome `ge` sarebbe stato mostrato perché `*` significa
**zero o più** caratteri.

Allo stesso modo puoi chiedere la lista dei file che hanno una 'e' nel nome, in
posizione qualsiasi:

```
$ ls *e*
ape ghepardo garage
```

Il `?` significa, invece, *almeno* un carattere.
Quindi `?p*` significa che la 'p' è la seconda lettera seguita da qualunque cosa,
mentre `???p*` significa che la 'p' è la quarta lettera.

```
$ ls ?p*
ape

$ ls ???p*
grappolo ghepardo
```

Riguardo alle parentesi quadre `[...]`, esse sono utilissime.
Immagina di non essere sicuro che il file che stai cercando inizia per 'a',
ma hai il dubbio che possa iniziare con la lettera 'b'.

Con `[ab]*` chiedi proprio questo, un file che inizia per 'a' **oppure** per 'b'.
In altre parole il primo carattere può essere uno qualsiasi tra quelli elencati.

```
$ ls [ab]*
ape bici

$ ls [ag]*[ei]
ape garage
```

Le parentesi `[]` diventano ancora più utili quando viene specificato un intervallo:

```
$ ls [a-g]*    # la lettera iniziale e' compresa tra 'a' e 'g'
ape bici grappolo ghepardo garage
```

<a href="/activities/1">Torna alla Parte I</a>

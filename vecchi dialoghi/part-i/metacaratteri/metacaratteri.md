# Metacaratteri

![](../../images/people/tazza.png): Caro Sig. Tessitore, quando faccio ricerche su Internet
spesso trovo comandi in cui sono presenti vari caratteri
*&lt;imbarazzo&gt;strani&lt;/imbarazzo&gt;* e non ne capisco il significato.

![](../../images/people/tess.png): La shell di Linux accetta vari caratteri speciali.
Quando si opera sui file, questi caratteri possono aiutarla a lavorare con maggiore efficienza.

I *metacaratteri*, in particolare, permettono di selezionare più file
contemporaneamente senza doverne scrivere il nome per esteso.

Eccone alcuni:

`*` significa qualunque sequenza di caratteri (anche nessuno);

`?` significa uno ed un solo carattere, qualsiasi;

`[...]` significa un carattere qualsiasi tra quelli elencati nelle parentesi;

![](../../images/people/tazza.png): La cosa non è per nulla chiara.

![](../../images/people/tess.png): Le faccio un esempio. Per iniziare creiamo alcuni
file:

```
$ touch ape bici grappolo ghepardo garage
```

Ora supponiamo che stia cercando un file, ma ricorda solo che il nome inizia per 'a'.
Può chiedere alla shell di mostrarle solo i file che hanno questa caratteristica:

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

![](../../images/people/tazza.png): E se ci fosse stato un file di nome `ge`?

![](../../images/people/tess.png): La shell lo avrebbe mostrato perché `*` significa
**zero o più** caratteri.

Allo stesso modo può chiedere la lista dei file che hanno una 'e' nel nome, in
posizione qualsiasi:

```
$ ls *e*
ape ghepardo garage
```

![](../../images/people/tazza.png): OK, chiaro. Invece il `?` significa *almeno* un carattere?

![](../../images/people/tess.png): Esatto, ma può ripeterlo se necessario. Quindi
`?p*` significa che la 'p' è la seconda lettera seguita da qualunque cosa,
mentre `???p*` significa che la 'p' è la quarta lettera.

```
$ ls ?p*
ape

$ ls ???p*
grappolo ghepardo
```

![](../../images/people/tazza.png): Perfetto, in questo modo posso fare ricerche mirate.
Ora resta il dubbio più grande, quelle parentesi quadre ...

![](../../images/people/tess.png): Sono utilissime. Immagini di non essere sicuro
che il file che sta cercando inizia per 'a', ma ha il dubbio che possa
iniziare con la lettera 'b'.

Con `[ab]*` lei chiede proprio questo, un file che inizia per 'a' **oppure** per 'b'.
In altre parole il primo carattere può essere uno qualsiasi tra quelli elencati.

```
$ ls [ab]*
ape bici

$ ls [ag]*[ei]
ape garage
```

Le parentesi `[]` diventano ancora più utili quando specifica un intervallo:

```
$ ls [b-g]*        # la lettera iniziale e' compresa tra 'b' e 'g'
bici grappolo ghepardo garage
```

Torna a [I metacaratteri](../summary.md)

Oppure [continua a leggere](redirezione.md)

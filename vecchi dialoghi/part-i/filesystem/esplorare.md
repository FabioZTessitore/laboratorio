# Esplorare il filesystem

![](../../images/people/tess.png): Caro Sig. Tazza, possiamo iniziare ad
esplorare il filesystem. Le ricordo che per chiedere la lista degli
oggetti presenti nella directory corrente c'è il comando `ls`.

Inoltre, per sapere in quale directory si trova, può usare il comando `pwd`.
In questo modo non potrà perdersi mentre prosegue la sua esplorazione!

Per spostarsi tra le directory può usare il comando `cd`. Ad esempio, provi
a spostarsi nella directory root `/`.

```
$ cd /
```

![](../../images/people/tazza.png): Qui dovrebbero esserci tutte quelle directory
di cui mi ha parlato prima.

![](../../images/people/tess.png): Esatto. Chieda la lista:

```
$ ls
bin  boot  dev  etc  home  lib  lib64  root  sbin  tmp  usr  ...
```

E chieda anche conferma della directory corrente:

```
$ pwd
/
```

![](../../images/people/tess.png): Provi un altro spostamento, questa volta
nella directory `/etc`:

```
$ cd /etc
$ pwd
/etc
$ ls
...
```

![](../../images/people/tess.png): Combinando i comandi `cd`, `pwd` e `ls` può
esplorare tutto il filesystem di Linux senza timori.

## La directory home

![](../../images/people/tess.png): Ad un certo punto immagino vorrà tornare nella
sua directory personale. Può farlo in vari modi e quindi andiamo per gradi.

La sua directory personale avrà nome pari al suo nome utente (`fabio` nel mio caso)
e si trova all'interno della directory `/home`

```
$ cd /home
$ ls
... fabio ...
$ cd fabio
```

Faccia attenzione all'ultimo comando `cd fabio` perché non c'è il simbolo `/`
prima  del nome della directory. Infatti la directory `fabio` non si trova
all'interno della root `/`, ma all'interno della `/home` (in cui già ci troviamo).

In altre parole, il percorso `/home/fabio` è un *percorso assoluto* (parte da `/`),
mentre `fabio` è un *percorso relativo* (relativo alla directory `home` in cui ci troviamo).

![](../../images/people/tess.png): Siccome tornare alla propria home è un'operazione
piuttosto comune esistono delle scorciatoie. Può riferirsi alla propria directory personale
mediante il simbolo `~` (tilde).

```
$ cd ~
$ pwd
/home/fabio
```

La tilde è comodissima per riferirsi a directory presenti nella propria home
senza dover scrivere percorsi assoluti. Ad esempio, per spostarsi nella propria
directory Documenti:

```
$ cd ~/Documenti
$ pwd
/home/fabio/Documenti
```

![](../../images/people/tess.png): Sig. Tazza, ricordi anche che può lanciare
il comando `cd` senza argomenti ottenendo lo stesso effetto di `cd ~`

```
$ cd
$ pwd
/home/fabio
```

## Directory speciali

![](../../images/people/tess.png): Caro Sig. Tazza, quando esegue il comando `ls -a`
vengono mostrati due simboli speciali, `.` e `..`

Pensavo mi avrebbe chiesto di che si tratta.

![](../../images/people/tazza.png): Sig. Tessitore, nei suoi esempi non c'era mai
l'opzione `-a` e quindi non ho provato.

![](../../images/people/tess.png): Molto male, Sig. Tazza. Se vuole imparare deve
sperimentare, essere curioso, tentare e capire cosa ottiene o non ottiene.

![](../../images/people/tazza.png): Ha ragione, provo subito:

```
$ cd
$ pwd
/home/claudio
$ ls -a
. .. .bashrc Documenti  Immagini  Modelli  Scaricati  Scrivania ...
```

Eccoli, ci sono. Il `.` e il `..` Cosa rappresentano?

![](../../images/people/tess.png): Adesso va meglio Sig. Tazza.

`.` rappresenta la directory corrente<br>
`..` rappresenta la directory genitore

Ad esempio, se ci troviamo in `/etc`

`.` rappresenta `/etc` stesso<br>
`..` rappresenta `/` (la directory che contiene `etc`)

```
$ cd /etc
$ pwd
/etc
$ cd ..
$ pwd
/
```

Torna a [Il filesystem](../summary.md)

Oppure [continua a leggere](creare.md)

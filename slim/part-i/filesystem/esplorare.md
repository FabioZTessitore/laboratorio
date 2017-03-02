Esplorare il filesystem



#### Esplorare il filesystem

Possiamo iniziare ad esplorare il filesystem. Ti ricordo che per chiedere
la lista degli oggetti presenti nella directory corrente c'è il comando `ls`.

Inoltre, per sapere in quale directory ti trovi, puoi usare il comando `pwd`.

Per spostarti tra le directory puoi usare il comando `cd`. 

> Si sposta nella directory root `/`

```
$ cd /
```

> E ne mostra il contenuto

```
$ ls
bin  boot  dev  etc  home  lib  lib64  root  sbin  tmp  usr  ...
```

Chiede conferma della directory corrente:

```
$ pwd
/
```

Proviamo un altro spostamento, questa volta nella directory `/etc`:

```
$ cd /etc
$ pwd
/etc
$ ls
...
```

Combinando i comandi `cd`, `pwd` e `ls` puoi esplorare tutto il filesystem di Linux senza timori.

###### La directory home

Per tornare alla propria directory personale esistono vari modi, quindi andiamo per gradi.

La directory personale ha nome pari al suo nome utente (`fabio` nel mio caso)
e si trova all'interno della directory `/home`

```
$ cd /home
$ ls
... fabio ...
$ cd fabio
```

Nell'ultimo comando `cd fabio` non c'è il simbolo `/`
prima  del nome della directory. Infatti la directory `fabio` non si trova
all'interno della root `/`, ma all'interno della `/home` (in cui già ci troviamo).

In altre parole, il percorso `/home/fabio` è un *percorso assoluto* (parte da `/`),
mentre `fabio` è un *percorso relativo* (relativo alla directory `home` in cui ci troviamo).

Siccome tornare alla propria home è un'operazione
piuttosto comune esistono delle scorciatoie.

Innanzitutto puoi fare riferimento alla directory personale
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

Si può anche lanciare il comando `cd` senza argomenti ottenendo lo stesso effetto di `cd ~`

```
$ cd
$ pwd
/home/fabio
```

###### Directory speciali

Quando si esegue il comando `ls -a` vengono mostrati due simboli speciali, `.` e `..`

```
$ cd
$ pwd
/home/fabio
$ ls -a
. .. .bashrc Documenti  Immagini  Modelli  Scaricati  Scrivania ...
```

`.` rappresenta la directory corrente<br>
`..` rappresenta la directory genitore

Ad esempio, se ci troviamo in `/etc`

`.` rappresenta `/etc` stesso<br>
`..` rappresenta `/` (la directory che contiene `etc`)


Di conseguenza, `..` può essere utilizzato per uscire dalla directory corrente:

```
$ cd /etc
$ pwd
/etc
$ cd ..
$ pwd
/
```

<a href="/activities/1">Torna alla Parte I</a>

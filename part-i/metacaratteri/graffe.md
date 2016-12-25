# Espansione delle parentesi graffe

![](../../images/people/tazza.png): Mi è capitato di vedere dei comandi all'apparenza
semplici, ma che permettevano di ottenere risultati sorprendenti con poco sforzo.
Ricordo che erano coinvolte delle parentesi graffe.

![](../../images/people/tess.png): Si, Sig. Tazza. Le faccio vedere:

```
$ cd
$ touch test{1,2,3,4,5}
$ ls test*
test1 test2 test3 test4 test5
```

E' stato semplice, no? Ma è solo una parte di quello che possono fare le parentesi graffe.

Immagini di voler creare delle directory per i progetti in `C`, in `Python` e in
`JavaScript`, sia per l'utente `fabio` che per l'utente `claudio`.

Potrebbe creare le directory una alla volta:

```
$ mkdir fabio_c fabio_python ...    # ma che noia!
```

Oppure potrebbe sfruttare le parentesi graffe:

```
$ mkdir {fabio,claudio}_{c,python,js}
$ ls
fabio_c fabio_python fabio_js claudio_c claudio_python claudio_js
```

Ovviamente se non servono tutte queste directory può cancellarle allo stesso modo:

```
$ rmdir {fabio,claudio}_{c,python,js}
```

![](../../images/people/tazza.png): *&lt;meraviglia&gt;Ma è bellissimo!&lt;/meraviglia&gt;*

![](../../images/people/tess.png): E non dimentichi il doppio punto `..` per
specificare intervalli:

```
$ touch {a..f}-{1..5}
$ ls
a1 a2 a3 a4 a5 b1 b2 b3 ... f4 f5
```

![](../../images/people/tazza.png): Sig. Tessitore, finirà mai di sorprendermi?

![](../../images/people/tess.png): Sig. Tazza, vada ad esercitarsi!

Torna a [I metacaratteri](../summary.md)

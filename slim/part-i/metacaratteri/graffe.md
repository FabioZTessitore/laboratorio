Espansione delle parentesi graffe


#### Espansione delle parentesi graffe

Grazie alle parentesi graffe si possono ottenere risultati sorprendenti con poco sforzo.

```
$ cd
$ touch test{1,2,3,4,5}
$ ls test*
test1 test2 test3 test4 test5
```

Ora immagina di voler creare delle directory per i progetti in `C`, in `Python`
e in `JavaScript`, sia per l'utente `fabio` che per l'utente `claudio`.

Potresti creare le directory una alla volta:

```
$ mkdir fabio_c fabio_python ...    # ma che noia!
```

Oppure potresti sfruttare le parentesi graffe:

```
$ mkdir {fabio,claudio}_{c,python,js}
$ ls
fabio_c fabio_python fabio_js claudio_c claudio_python claudio_js
```

Ovviamente puoi cancellarle allo stesso modo:

```
$ rmdir {fabio,claudio}_{c,python,js}
```

Un'ultima cosa. Il doppio punto `..` serve per specificare intervalli:

```
$ touch {a..f}-{1..5}
$ ls
a1 a2 a3 a4 a5 b1 b2 b3 ... f4 f5
```

<a href="/activities/1">Torna alla Parte I</a>

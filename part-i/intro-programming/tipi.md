# I tipi elementari in Python

![](../../images/people/tess.png): Sig. Tazza, prenda un terminale.

```
$ python
```

![](../../images/people/tazza.png): Cos'è? Parliamo di *&lt;tono-ambizioso&gt;erpetologia&lt;/tono-ambizioso&gt;*

![](../../images/people/tess.png): No, Sig. Tazza, iniziamo a programmare con il linguaggio Python
(il cui logo è effettivamente un pitone, ma si tratta di un riferimento ai Monty Python).
Il comando che le ho fatto vedere apre l'interprete del linguaggio.

![](../../images/people/tazza.png): Piano, piano. Serpenti, interpreti ...

![](../../images/people/tess.png): Ma insomma, lasci stare i serpenti!

Il linguaggio Python è un linguaggio interpretato. In altre parole esiste
un programma, chiamato *interprete*, che legge le sue istruzioni e cerca di
eseguirle. Mi segua:

>Proviamo a scrivere un numero:

```py
>>> 3
3
```

L'interprete legge il carattere 3 che ha scritto, lo interpreta e risponde
con il *valore* `3`.

> Di che tipo è?

```py
>>> type(3)
<type 'int'>
```

L'interprete ci dice di che *tipo* è il valore 3. Risponde che si tratta di un `int`,
un valore intero.

```py
>>> type(3.2)
<type 'float'>
```

`3.2` invece viene considerato `float`, un valore in virgola mobile.

![](../../images/people/tazza.png): Perché `float`?

![](../../images/people/tess.png): &Egrave; l'abbreviazione di *floating point*,
termine con il quale gli anglosassoni chiamano i valori in virgola mobile.
Sul motivo per cui si chiamano in virgola mobile ci sarebbe da approfondire,
ma non è questo il momento.

```py
>>> type(3.0)
<type 'float'>
```

Come può vedere `3` e `3.0` sono diversi!

![](../../images/people/tess.png): Le mostro qualche altro tipo messo a disposizione
dal linguaggio Python.

> Il tipo booleano (Vero o Falso)

```py
>>> type(True)
<type 'bool'>

>>> type(False)
<type 'bool'>
```

> Il tipo stringa

```py
>>> type('a')
<type 'str'>

>>> type('123')
<type 'str'>
```

> Il tipo nullo

```py
>>> type(None)
<type 'NoneType'>
```

![](../../images/people/tazza.png): Non ha nulla da dire sul fatto che esista
un tipo nullo?

![](../../images/people/tess.png): *&lt;tono-maestro-jedi&gt;Il nulla non esiste!&lt;/tono-maestro-jedi&gt;*

## Conversioni di tipo (*cast*)

![](../../images/people/tess.png): Molto più spesso di quanto possa immaginare
sarà necessario convertire valori da un tipo ad un altro.

> converte il numero intero 3 in una stringa

```py
>>> str(3)
'3'
```

> converte la stringa '3' nel numero intero 3

```py
>>> int('3')
3
```

![](../../images/people/tess.png): Ma non tutto è possibile:

> non sa come fare

```py
>>> int('2.1')
ValueError
```

> ora si!

```py
>>> float('2.1')
2.1
```

Torna a [Introduzione alla programmazione](../summary.md)

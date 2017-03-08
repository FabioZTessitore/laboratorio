I tipi elementari in Python


#### I tipi elementari in Python

Iniziamo a programmare con il linguaggio Python.
Da terminale lancia il comando:

> Apre l'interprete dei comandi del Python

```
$ python
```

Il linguaggio Python è un linguaggio interpretato. In altre parole esiste
un programma, chiamato *interprete*, che legge le istruzioni e cerca di
eseguirle.

> Prova a scrivere un numero:

```py
>>> 3
3
```

L'interprete legge il carattere 3 che hai digitato, lo interpreta e risponde
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

`float` &egrave; l'abbreviazione di *floating point*,
termine con il quale gli anglosassoni chiamano i valori in virgola mobile.

```py
>>> type(3.0)
<type 'float'>
```

Come puoi vedere `3` e `3.0` sono diversi!

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

##### Conversioni di tipo (*cast*)

Molto più spesso di quanto immagini è necessario convertire valori da un tipo ad un altro.

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

Ma non tutto è possibile:

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

<a href="/activities/1">Torna alla Parte I</a>

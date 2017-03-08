Le espressioni


#### Le espressioni

Proviamo a creare delle espressioni in Python.

```
$ python
```

```py
>>> 3 + 2
5
```

C'è una risposta, quindi l'interprete è riuscito a capire ciò che gli è stato chiesto.
Proviamo con un'altra operazione:

```py
>>> 3 / 2
1
```

Ricorda: i valori `3` e `2` sono interi, quindi l'operazione sarà una divisione tra interi
e il risultato un intero a sua volta, cioè `1`.

Se vuoi ottenere il risultato come float:

```py
>>> 3.0 / 2.0
1.5
```

Nota come il simbolo della divisione è sempre lo stesso, sia quando si
opera su valori interi, sia quando si opera su valori in virgola mobile.
In altre parole il significato del simbolo `/` dipende dal tipo degli operandi.

Un altro esempio, una somma tra stringhe:

```py
>>> 'a' + 'b'
'ab'
```

##### Errori

Vedere come reagisce l'interprete quando si commettono degli errori:

> Errore di sintassi, manca l'operatore

```py
>>> 3 2
Syntax Error: invalid syntax
```

> Errore di grammatica

```py
>>> 'a' + 3
TypeError: cannot concatenate 'str' and 'int'
```

<a href="/activities/1">Torna alla Parte I</a>

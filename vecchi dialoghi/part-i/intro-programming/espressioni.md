# Le espressioni

![](../../images/people/tess.png): Ricorda quando si parlava di regole dei linguaggi?

Proviamo a creare delle espressioni in Python.

```
$ python
```

```py
>>> 3 + 2
5
```

![](../../images/people/tazza.png): Abbiamo una risposta, quindi l'interprete è riuscito
a capire ciò che gli abbiamo chiesto.

![](../../images/people/tess.png): Esatto, proviamo ancora:

```py
>>> 3 / 2
1
```

![](../../images/people/tazza.png): &Egrave; cambiata la matematica nel frattempo?

![](../../images/people/tess.png): *&lt;tono-sarcastico&gt;Si, Sig. Tazza. Deve ricominciare a studiare dalle elementari ...&lt;/tono-sarcastico&gt;*

I valori `3` e `2` sono interi, quindi l'operazione sarà una divisione tra interi
e il risultato un intero a sua volta, cioè `1`

![](../../images/people/tazza.png): E per vedere il risultato `1.5` devo convertire gli interi
in float?

![](../../images/people/tess.png): Se vuole, ma visto che sono numeri può scriverli
direttamente come float.

```py
>>> 3.0 / 2.0
1.5
```

![](../../images/people/tess.png): Sig. Tazza, vorrei che notasse come il simbolo
della divisione sia sempre lo stesso, sia quando si opera su valori interi, sia quando
si opera su valori in virgola mobile. In altre parole il significato del simbolo
`/` dipende dal tipo degli operandi.

Le faccio un altro esempio, una somma tra stringhe:

```py
>>> 'a' + 'b'
'ab'
```

## Errori

![](../../images/people/tess.png): Per concludere, le faccio vedere come reagisce
l'interprete quando commettiamo degli errori:

> Errore di sintassi, manca l'operatore

```py
>>> 3 2
Syntax Error: invalid syntax
```

> Errore di semantica statica

```py
>>> 'a' + 3
TypeError: cannot concatenate 'str' and 'int'
```

Torna a [Introduzione alla programmazione](../summary.md)

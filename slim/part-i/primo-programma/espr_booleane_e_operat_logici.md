Espressioni booleane e operatori logici


#### Espressioni booleane e operatori logici

##### Espressioni booleane

Le espressioni booleane sono quelle espressioni
che restituiscono valore Vero (`True`) o Falso (`False`).

Si ottengono mediante l'uso degli operatori:

`==`    uguale

`<`     minore

`>`     maggiore

`<=`    minore o uguale

`>=`    maggiore o uguale

`!=`    diverso

Prova a lanciare l'interprete Python e ad eseguire queste istruzioni:

```py
>>> 3 == 3
True

>>> 3 < 1
False

>>> 5 != 7
True

>>> 5 <= 7
True
```

##### Operatori logici

Gli operatori logici (`and`, `or`, `not`) permettono di combinare espressioni booleane:

In particolare, l'operatore `and` restituirà `True` solo quando entrambi gli operandi
sono espressioni `True`. L'operatore `or` restituirà `True` anche quando un solo
operando è `True`. `not` inverte il valore dell'espressione booleana.

```py
>>> 3 <= 3 and 7 > 9
False   # solo la prima e' Vera

>>> 3 <= 3 or 7 > 9
True    # almeno la prima e' Vera

>>> not 10 < 7
True    # 10 < 7 e' False
```

<a href="/activities/1">Torna alla Parte I</a>

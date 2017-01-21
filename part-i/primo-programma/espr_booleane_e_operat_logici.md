# Espressioni booleane e operatori logici

## Espressioni booleane

![](../../images/people/tess.png): Chissà quante volte avrà sentito parlare di espressioni
booleane ...

![](../../images/people/tazza.png): Forse non ho mai sentito questo termine prima d'ora.

![](../../images/people/tess.png): Forse, ma sicuramente le ha incontrate senza saperlo.

Le espressioni booleane sono quelle espressioni
che restituiscono valore Vero (`True`) o Falso (`False`).

Si ottengono mediante l'uso degli operatori:

`==`    uguale

`<`     minore

`>`     maggiore

`<=`    minore o uguale

`>=`    maggiore o uguale

`!=`    diverso

Provi a lanciare l'interprete Python e ad eseguire queste istruzioni:

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

## Operatori logici

![](../../images/people/tess.png): Quindi non avrà mai sentito parlare di *operatori logici*?

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

![](../../images/people/tazza.png): Perché è necessario imparare queste cose?

![](../../images/people/tess.png): Imparare è sempre importante ... comunque se
vuole che i suoi programmi siano in grado di effettuare delle scelte, avrà
bisogno di scrivere le condizioni in base alle quali tali scelte saranno effettuate.

Torna a [Il primo programma](../summary.md)

Oppure [continua a leggere](scelte.mb)

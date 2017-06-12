Le liste in Python



#### Le liste in Python

Introduciamo le liste in Python.

Una lista è una sequenza di valori. Come per le tuple possono essere valori
di tipo diverso, ma al contrario delle tuple, una lista è *modificabile*.

```py
una_lista = ['ciao', 3, 2.1, 'bye']
```

Come ti dicevo una lista è modificabile e per accedere ai suoi elementi si
usa una notazione che conosci bene.

```py
una_lista = ['ciao', 3, 2.1, 'bye']
una_lista[0] = 'hello'
# una_lista ora e' ['hello', 3, 2.1, 'bye']
```

Dire che una lista è modificabile non significa solo che puoi
cambiare il valore dei suoi elementi, ma puoi anche aggiungerne.

Una lista in Python è un oggetto;
ti ho accennato qualcosa a proposito degli oggetti in precedenza.

In particolare ti ho detto che un oggetto oltre a contenere variabili può
anche eseguire operazioni. Una delle operazioni possibili con una lista
è proprio quella di aggiungere un elemento. Tale operazione si chiama `append()`.

```py
una_lista = []  # una lista vuota
una_lista.append(1)
una_lista.append('hello')
# una lista ora e' [1, 'hello']
```

<a href="/activities/2">Torna alla Parte II</a>

# Le liste in Python

![](../../images/people/tess.png): Sig. Tazza, ricorda quando abbiamo parlato di tuple?
Ebbene, facciamo un passo avanti e parliamo di liste in Python.

Una lista è una sequenza di valori. Come per le tuple possono essere valori
di tipo diverso, ma al contrario delle tuple, una lista è modificabile.

```py
una_lista = ['ciao', 3, 2.1, 'bye']
```

![](../../images/people/tazza.png): Questa volta ci sono le parentesi quadre.

![](../../images/people/tess.png): Esatto.

Come le dicevo una lista è modificabile e per accedere agli elementi si
usa una notazione che già conosce bene.

```py
una_lista = ['ciao', 3, 2.1, 'bye']
una_lista[0] = 'hello'
# una_lista ora e' ['hello', 3, 2.1, 'bye']
```

![](../../images/people/tess.png): Per il momento devo darle un'altra
informazione. Dire che una lista è modificabile non significa solo che può
cambiare il valore dei suoi elementi, ma può anche aggiungere elementi.

![](../../images/people/tazza.png): Si spieghi meglio.

![](../../images/people/tess.png): Una lista in Python è un oggetto;
le ho accennato qualcosa a proposito degli oggetti nel nostro precedente incontro.

In particolare le ho detto che un oggetto oltre a contenere variabili può
anche eseguire operazioni. Una delle operazioni possibili con una lista
è proprio quella di aggiungere un elemento. Tale operazione si chiama `append()`.

```py
una_lista = []  # una lista vuota
una_lista.append(1)
una_lista.append('hello')
# una lista ora e' [1, 'hello']
```

Torna a [I tipi avanzati del Python](../summary.md)

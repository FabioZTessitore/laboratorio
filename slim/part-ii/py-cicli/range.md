La funzione range()


#### La funzione range()

La funzione `range()` restituisce una lista contenente interi in un intervallo
prestabilito.

Prova ad eseguire queste istruzioni utilizzando l'interprete:

```py
>>> range(1, 5, 1)
[1, 2, 3, 4]
```

Nell'esempio `range()` prende tre parametri. Il primo è
il valore iniziale dell'intervallo. Il secondo quello finale (escluso!).
Il terzo rappresenta, invece, il passo.

Proviamo un altro esempio, crea l'intervallo di interi compresi tra 1
e 10, con passo 3:

```py
>>> range(1, 10, 3)
[1, 4, 7]
```

La maggior parte delle volte si vuole come passo il valore 1. In questi casi
si può omettere:

```py
>>> range(4, 8)
[4, 5, 6, 7]
```

Un'altra semplificazione si può ottenere quando il punto di partenza è zero.
Anche in questo caso può essere omesso ottenendo:

```py
>>> range(5)
[0, 1, 2, 3, 4]
```

Da notare che in questo caso il *numero* degli elementi generati è proprio
pari al valore passato come argomento alla funzione (5 nell'esempio).

<a href="/activities/2">Torna alla Parte II</a>

Generazione di numeri pseudocasuali in Python

#### Generazione di numeri pseudocasuali in Python

Come spesso succede, è più semplice estrarre numeri pseudocasuali in Python
rispetto al C.

Innanzitutto bisogna importare il modulo `random`:

```py
import random
```

Al suo interno varie funzioni ci consentono di estrarre numeri con criteri diversi.
Quella che forse useremo di più è `randrange()` che permette di indicare
l'intervallo all'interno del quale vogliamo estrarre.

```py
# num e' compreso tra 7 e 17 (escluso)
num = random.randrange(7, 17)
```

Se mandi in esecuzione più volte questo programma ti renderai conto
che in Python non c'è il problema della scelta del seme. Viene gestito
automaticamente.

`randrange()` ha un'altra caratteristica interessante. Oltre ai valori iniziale
e finale permette di indicare il passo. Ad esempio, volendo estrarre solo numeri
dispari nell'intervallo `[7, 17[` possiamo scrivere:

```py
num = random.randrange(7, 17, 2)
```

<a href="/activities/3">Torna alla Parte III</a>

Le tuple


#### Le tuple

Anche il linguaggio Python è in grado di gestire tipi avanzati, però ci
sono delle differenze con il C.

Innanzitutto le stringhe in Python sono considerate un tipo elementare.
Di puntatori neanche a parlarne. Le struct non esistono.

Cosa rimane? Le *tuple* ad esempio.

Una tupla è una sequenza di valori intervallati dalla virgola. Una cosa del
tipo: `"ciao", "buongiorno", "buonanotte"`.

Normalmente si usano anche le parentesi tonde:

```py
una_tupla = ("ciao", "buongiorno", "buonanotte")
```

Una volta creata una tupla non può essere modificata (si dice che è *immutabile*).
Inoltre una tupla può contenere valori di tipo diverso anche contemporaneamente:

```py
t = (1, 5.8, "hello")
```

Un altro paio di cose.

Se devi creare una tupla con un solo elemento ricorda di mettere la virgola
(altrimenti non sarebbe una tupla!):

```py
t = ('hello',)
```

Inoltre per recuperare i valori presenti in una tupla si usano gli indici
come con i vettori:

```py
t = ('hello', 'bye')
saluto1 = t[0]
saluto2 = t[1]
```

Ma puoi anche fare un'assegnazione multipla:

```py
t = ('hello', 'bye')
saluto1, saluto2 = t
```

<a href="/activities/2">Torna alla Parte II</a>

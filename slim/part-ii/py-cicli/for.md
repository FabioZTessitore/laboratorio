Il ciclo for

#### Il ciclo for

Il ciclo `for` in Python assume una forma diversa da quella che conosciamo in C.

In C viene utilizzato per gestire un indice tra un valore
iniziale e un valore finale e con un certo passo.
In Python di trovare questo intervallo si occupa la funzione `range()`,
quindi il ciclo assume un altro significato.

```py
for i in range(10):
  ...
```

Inizialmente la funzione `range()` genera un intervallo (in questo caso
gli interi compresi tra 0 e 9). Poi la variabile `i` del ciclo assume
(uno alla volta) tutti i valori dell'intervallo.

Questo concetto può essere ulteriormente esteso perché il ciclo for non
richiede per forza un intervallo generato con range(). Si può usare una
qualunque lista!

```py
animali = [ "cane", "gatto", "topo" ]

for animale in animali:
  print animale
```

Mandiamo in esecuzione:

```py
cane
gatto
topo
```

Come già detto, la variabile di ciclo (`animale`) assume i valori (uno alla
volta!) degli elementi della lista.

Anche una stringa può essere considerata una lista:

```py
saluto = "Hello, World"
for carattere in saluto:
  print carattere
```

<a href="/activities/2">Torna alla Parte II</a>

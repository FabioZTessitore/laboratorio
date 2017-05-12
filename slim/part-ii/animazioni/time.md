Il modulo time in Python


#### Il modulo time in Python

La gestione del tempo in Python è demandata al modulo `time`.

Per ottenere l'istante di tempo attuale (sotto forma di floating point)
si può usare la funzione `time()`:

```py
$ python
...
>>> import time
>>> dir(time)
>>> time.time()
...
```

Siccome il valore restituito da `time.time()` è un floating point risulta
ovvio calcolare il tempo passato tra due istanti.

```py
start = time.time()

...

end = time.time()

trascorso = end - start
```

<a href="/activities/2">Torna alla Parte II</a>

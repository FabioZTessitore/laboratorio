Forza bruta


#### Forza bruta

A volte per trovare la soluzione ad un problema, invece di cercare un algoritmo
più o meno complicato, è più semplice *tentarle tutte*. In questi casi si
dice che si utilizza un metodo a **forza bruta**.

Immagina, ad esempio, di voler trovare l'eventuale soluzione intera al problema
`x^3 = 27`. Utilizzando il metodo a forza bruta proviamo tutti i numeri interi
a partire da `1`:

```py
for x in range(1, 10):
  if x*x*x == 27:
    break

if x*x*x == 27:
  print "Soluzione:", x
else:
  print "Nessuna soluzione trovata"
```

<a href="/activities/2">Torna alla Parte II</a>

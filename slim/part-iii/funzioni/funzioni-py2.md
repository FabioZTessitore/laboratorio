Parametri e ritorno


#### Parametri

Il linguaggio Python non prevede che si indichi il tipo delle variabili e questo
vale anche per i parametri delle funzioni. Considera una funzione molto semplice
che stampa due volte ciò che le viene passato come parametro:

```py
def stampa_due_volte(valore):
  print valore, valore
```

La funzione farà il suo lavoro a prescindere dal tipo di `valore`:

```py
stampa_due_volte("hello") # stringa
stampa_due_volte(2.1)     # floating point
stampa_due_volte( (42, 'hello') )   # tupla!
```

Questo permette la scrittura di funzioni generiche, cosa che in C non è possibile.

#### Ritorno

Una funzione può ritornare un solo valore, ma nulla vieta che questo valore
sia una tupla! In questo modo una funzione può ritornare più valori contemporaneamente:

```py
def quadrato_e_cubo(num):
  # ritorna sia il quadrato che il cubo di num
  # in un'unica tupla!
  return (num*num, num*num*num)
```

<a href="/activities/3">Torna alla Parte III</a>

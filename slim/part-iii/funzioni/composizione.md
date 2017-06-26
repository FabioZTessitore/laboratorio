Composizione di funzioni

#### Composizione di funzioni

Consideriamo il caso della stampa di un quadrato di asterischi di lato `5`.
Il codice di base è:

```c
/* contatori di riga e colonna */
int r, c;

for (r = 0; r < 5; r++) {
  for (c = 0; c < 5; c++) {
    putchar('*');
  }
  putchar('\n');
}
```

All'interno del ciclo esterno si trova il codice per la stampa di una riga
di asterischi, che ovviamente si ripete per ogni riga. Possiamo mettere
quelle righe in una funzione che chiameremo `cinque_asterischi()`.

```c
void cinque_asterischi()
{
  int c;

  for (c = 0; c < 5; c++) {
    putchar('*');
  }
  putchar('\n');
}
```

Il nostro codice diventa allora:

```c
int r;

for (r = 0; r < 5; r++) {
  cinque_asterischi();
}
```

A questo punto è logico creare una nuova funzione che incapsula questo codice:

```c
void stampa_quadrato()
{
  int r;

  for (r = 0; r < 5; r++) {
    cinque_asterischi();
  }
}
```

La funzione `stampa_quadrato()` invoca `cinque_asterischi()` per portare
a termine il proprio lavoro.

<a href="/activities/3">Torna alla Parte III</a>

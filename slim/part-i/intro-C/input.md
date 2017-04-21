Input da tastiera


#### Input da tastiera

Per ottenere input da tastiera puoi utilizzare la funzione `scanf()`:

```c
/* input di variabili intere */

#include <stdio.h>

int main()
{
  int age;

  /* input di una variabile intera */
  printf("Quanti anni hai? ");
  scanf("%d", &age);    /* attenzione alla & */

  printf("Dici di avere %d anni\n", age);

  return 0;
}
```

Potrebbe sembrarti strano che per avere input da tastiera
chiamando la funzione `scanf()` le devi passare una stringa
con una specifica di stampa.

In effetti, se ci pensi bene, stai dicendo cosa ti aspetti in input.
Mettendo `%d` dici che ti aspetti un intero.

L'input è leggermente più complesso dell'output, quindi non è finita qui:
c'è anche la variabile `age`, e soprattutto c'è l'operatore `&`.

`&` serve ad ottenere l'indirizzo di una variabile.
Negli esempi con `printf()` abbiamo effettuato delle stampe di questi valori;
qui, invece, l'indirizzo di `age` viene passato alla funzione `scanf()` in modo
che questa possa sapere dove mettere il valore letto in input.

<a href="/activities/1">Torna alla Parte I</a>

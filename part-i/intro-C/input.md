# Input da tastiera

![](../../images/people/tess.png): Siamo pronti per ottenere input da tastiera.

![](../../images/people/tazza.png): Non mi dica che bisogna fare qualcosa di super complicato ...

![](../../images/people/tess.png): Come può pensare una cosa del genere? Le basterà chiamare
la funzione `scanf()`

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

![](../../images/people/tazza.png): Aspetti, aspetti. Chiamo la funzione `scanf()`
per avere input da tastiera e le passo una stringa con una specifica di stampa?

![](../../images/people/tess.png): Si. Se ci pensa bene sta dicendo cosa si aspetta in input.

![](../../images/people/tazza.png): Quindi mettendo `%d` dico che mi aspetto un intero?

![](../../images/people/tess.png): Visto che non era difficile?

![](../../images/people/tazza.png): Ma non è finita! C'è anche la variabile `age`,
e c'è l'operatore `&`. Credevo servisse a stampare l'indirizzo di una variabile.

![](../../images/people/tess.png): Non si confonda. L'operatore `&` serve ad ottenere
l'indirizzo di una variabile. Negli esempi della volta scorsa lo stampavamo.
Qui, invece, l'indirizzo di `age` viene passato alla funzione `scanf()` in modo
che questa possa sapere dove mettere il valore letto in input.

Torna a [Introduzione al C](../summary.md)

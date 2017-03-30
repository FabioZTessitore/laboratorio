Il ciclo do-while


#### Il ciclo do-while

Abbiamo visto che un ciclo while si presenta nella forma:

```
while (condizione) {
  lista di istruzioni da ripetere;
}
```

Questo significa che *prima* viene valutata la condizione e *dopo* vengono
eventualmente eseguite le istruzioni.

A volte, però, è necessario eseguire almeno una volta le istruzioni e solo
dopo valutare la condizione. Un esempio concreto è il controllo di un valore
inserito in input. Prima facciamo l'input e solo dopo controlliamo se
è compreso in un certo intervallo.

```c
#include <stdio.h>

int main()
{
  /* utilizzo del ciclo do-while
    per ottenere un input controllato */

  int num;

  /* chiede all'utente di inserire
   * un numero compreso da 0 e 9,
   * richiede se non valido
   */
  do {
    printf("Inserisci un numero compreso tra 0 e 9: ");
    scanf("%d", &num);
  } while (num < 0 || num > 9);

  printf("Hai inserito il numero %d\n", num);

  return 0;
}
```

<a href="/activities/2">Torna alla Parte II</a>

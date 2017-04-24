Generazione di numeri pseudocasuali

#### Generazione di numeri pseudocasuali

Un computer è una macchina deterministica, quindi la generazione di numeri
casuali non è un problema semplice.

Esistono, però, delle strategie che permettono di generare numeri che
a tutti gli effetti possono essere considerati casuali. Li chiamiamo *pseudocasuali*.

In C, la funzione `rand()` genera un numero intero compreso tra `0` e `RAND_MAX`
(`RAND_MAX` coincide con in massimo intero rappresentabile).

```c
/* generazione di numeri pseudocasuali */

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int counter;
  int num;

  printf("Generazione di 10 numeri pseudocasuali\n");

  for (counter = 0; counter < 10; counter++) {
    num = rand();
    printf("%2d# ... %d\n", counter+1, num);
  }

  return 0;
}
```

Se provi ad eseguire questo programma ti renderai conto di un problema. Quale?

##### Scegliere il seme

La generazione di numeri pseudocasuali avviene mediante un algoritmo che dipende
da un valore iniziale detto *seme*. Prima di usare `rand()` bisogna allora impostare
il seme con `srand()`.

A questo punto, però, nasce il problema della scelta del seme. Un modo per
utilizzare un seme che sia sempre diverso è quello di utilizzare il valore
(non prevedibile) restituito da `time()`.

```c
/* esempio di generazione di numeri pseudocasuali */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int counter;
  int num;

  /* imposta il seme ad un valore non prevedibile */
  srand(time(NULL));

  printf("Generazione di 10 numeri pseudocasuali\n");

  for (counter = 0; counter < 10; counter++) {
    num = rand();
    printf("%2d# ... %d\n", counter+1, num);
  }

  return 0;
}
```

##### Scegliere valori in un intervallo

La funzione `rand()` estrae numeri compresi tra `0` e `RAND_MAX`, mentre
normalmente si vogliono valori compresi in un certo intervallo.
Immaginiamo, ad esempio, di volere valori compresi tra 7 e 16.

La prima cosa da fare è stabilire quanti valori diversi sono richiesti.
Da 7 a 16 sono 10 valori. Possiamo ottenere un numero compreso tra 0 e 9 (10 valori)
in maniera molto semplice effettuando una operazione di *resto* per 10.

```c
/* num è compreso tra 0 e 9 */
int num = rand() % 10;
```

A questo punto non resta altro da fare che traslare di 7:

```c
/* num è compreso tra 7 e 16 */
int num = 7 + rand() % 10;
```

<a href="/activities/3">Torna alla Parte III</a>

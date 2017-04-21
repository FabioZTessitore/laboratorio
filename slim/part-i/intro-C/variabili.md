Le variabili



#### Le variabili

Abbiamo già visto cosa sono e come si usano le variabili in Python.
In C, prima di poter utilizzare una variabile, devi *dichiararla*.

Una dichiarazione di variabile è una riga del tipo:

```c
int numero;
```

Come vedi è necessario specificare il tipo e il nome della variabile nella dichiarazione.

Da questo momento in poi puoi utilizzare la variabile `numero`:

```c
numero = 42;
```

Una buona abitudine è quella di dichiarare e contemporaneamente
inizializzare una variabile:

```c
int numero = 42;
```

##### I tipi fondamentali

Oltre alle variabili intere ci sono quelle in virgola mobile (floating point).
In C ne esistono due tipi: `float` (singola precisione) e
`double` (doppia precisione).

Per il momento consiglio di usare variabili `double`.

##### Stampare una variabile

Per stampare il valore di una variabile devi usare `printf()`,
ma la cosa non è intuitiva.
Bisogna, infatti, utilizzare la *specifica di stampa*, un codice che dipende
dal tipo di variabile da stampare.

Ad esempio, per stampare variabili intere la specifica di stampa è `%d`
e la `printf()` si usa in questo modo:

```c
printf("La variabile numero vale %d\n", numero);
```

##### Esempio completo:

```c
/* uso e stampa di variabili intere */

#include <stdio.h>

int main()
{
  /* in C prima di poter usare una variabile
   * bisogna dichiararla specificandone il tipo
   */
  int age = 25;

  /* una variabile double */
  double num = 0.3;

  /* per la stampa di variabili bisogna
   * utilizzare la "specifica di stampa".
   * Nel caso di variabili intere %d
   */
  printf("Ho %d anni\n", age);

  /* stampa di variabili double,
   * la specifica di stampa è %f
   */
  printf("num vale %f\n", num);

  return 0;
}
```

##### Dimensione di una variabile (operatore `sizeof`)

Il linguaggio C è certamente più complesso del Python, ma permette un punto di vista
"più vicino alla macchina".

L'operatore `sizeof` dice la dimensione, in *byte*, di una
variabile o tipo:

```c
#include <stdio.h>

int main()
{
  printf("Su questa macchina un intero e' composto da %d byte\n", sizeof(int));

  printf("Un float da %d byte\n", sizeof(float));

  printf("Un double da %d byte\n", sizeof(double));

  return 0;
}
```

Oogni macchina (insieme di hardware, sistema operativo e compilatore)
ha le sue caratteristiche. Per questa ragione devi fare attenzione.
Se sulla tua macchina gli interi sono formati di 4 byte,
non puoi pretendere che il tuo programma funzioni correttamente
su una macchina con interi a 2 byte.

Nel file di intestazione `limits.h` trovi i valori minimo e massimo ammissibili.

```c
#include <stdio.h>
#include <limits.h>

int main()
{
  printf("Su questa macchina gli interi sono\n");
  printf("formati da %d byte.\n", sizeof(int));

  /* Le costanti INT_MIN e INT_MAX sono definite in limits.h */
  printf("Il minimo numero rappresentabile è %d\n", INT_MIN);
  printf("Il massimo numero rappresentabile è %d\n", INT_MAX);

  return 0;
}
```

##### Indirizzo di una variabile (operatore `&`)

Il C permette di ottenere l'indirizzo in memoria di una variabile.
Non bisogna fare altro che far precedere il nome della variabile stessa dal simbolo `&`.
Poi nella stampa si usa la specifica di stampa `%p`

```c
#include <stdio.h>

int main()
{
  int num = 10;

  printf("La variabile num si trova all'indirizzo %p\n", &num);

  return 0;
}
```

<a href="/activities/1">Torna alla Parte I</a>

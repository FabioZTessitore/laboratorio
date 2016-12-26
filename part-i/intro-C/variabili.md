# Le variabili

![](../../images/people/tess.png): Caro Sig. Tazza, le ho già mostrato cosa sono
e come si usano le variabili in Python. Ricordi, però, che in C
prima di poter utilizzare una variabile deve *dichiararla*.

Una dichiarazione di variabile è una riga del tipo:

```c
int numero;
```

Come vede è necessario specificare il tipo e il nome della variabile nella dichiarazione.

Da questo momento in poi potrà utilizzare la variabile `numero`:

```c
numero = 42;
```

Una buona abitudine è quella di dichiarare e contemporaneamente
inizializzare una variabile:

```c
int numero = 42;
```

![](../../images/people/tazza.png): Capito, e se dovessi dimenticare
di dichiarare una variabile prima di utilizzarla?

![](../../images/people/tess.png): Il compilatore potrebbe dirle tante brutte cose ...

## I tipi fondamentali

![](../../images/people/tess.png): Oltre alle variabili intere ci sono quelle
in virgola mobile (floating point). In C ne esistono due tipi: `float` (singola precisione) e
`double` (doppia precisione).

Per il momento le consiglio di usare variabili `double`.
Tra poco le mostrerò qualche differenza tre i due tipi.

## Stampare una variabile

![](../../images/people/tess.png): Per stampare una variabile deve sempre usare `printf()`,
ma la cosa non è intuitiva, come ormai ha iniziato a capire.
Bisogna, infatti, utilizzare la *specifica di stampa*, un codice che dipende dal tipo di variabile da stampare.

Ad esempio, per stampare variabili intere la specifica di stampa è `%d` e la `printf()` si usa in questo modo:

```c
printf("La variabile numero vale %d", numero);
```

## Esempio completo:

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

## Dimensione di una variabile (operatore `sizeof`)

![](../../images/people/tess.png): Il linguaggio C è certamente
più complesso del Python, ma le permette un punto di vista
"più vicino alla macchina". Chissà quante volte avrà sentito
una frase del genere.

![](../../images/people/tazza.png): Si. Non mi dica che già possiamo
vedere qualcosa.

![](../../images/people/tess.png): Più di quello che pensa.
Innanzitutto voglio presentarle l'operatore `sizeof`.

L'operatore `sizeof` le dice la dimensione, in byte, di una
variabile o tipo. Guardi l'esempio seguente:

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

![](../../images/people/tess.png): Lo esegua, non è curioso di sapere cosa succede
nella sua macchina?

![](../../images/people/tazza.png): Perché scrive "su questa macchina"? Le dimensioni non sono fisse?

![](../../images/people/tess.png): No, ogni macchina (insieme di hardware, sistema operativo e compilatore)
ha le sue caratteristiche. Per questa ragione deve fare attenzione. Se sulla sua macchina gli interi
sono formati di 4 byte, non può pretendere che il suo programma funzioni correttamente
su una macchina con interi a 2 byte.

![](../../images/people/tazza.png): E come faccio a capire quali numeri vanno bene e quali no?

![](../../images/people/tess.png): Nel file di intestazione `limits.h` trova questi valori.

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

![](../../images/people/tess.png): Mi raccomando, compili ed esegua il programma.

## Indirizzo di una variabile (operatore `&`)

![](../../images/people/tess.png): Se la sente di vedere una cosa ancora più interessante?

![](../../images/people/tazza.png): Ancora di più? Cos'altro si può fare solo
definendo variabili e stampando?

![](../../images/people/tess.png): Le piacerebbe vedere l'indirizzo di una variabile?

![](../../images/people/tazza.png): *&lt;tono-stupito&gt;L'indirizzo? Ma si può?&lt;/tono-stupito&gt;*

![](../../images/people/tess.png): Se mi promette di non andare a casa sua a vedere i suoi bit ...

La cosa è più semplice di quello che può immaginare. Per ottenere l'indirizzo di
una variabile bisogna far precedere il nome della stessa dal simbolo `&`.
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

![](../../images/people/tazza.png): *&lt;meraviglia&gt;Ma è incredibile!&lt;/meraviglia&gt;*

Torna a [Introduzione al C](../summary.md)

# Raggruppare variabili, le struct

![](../../images/people/tess.png): Bentornato Sig. Tazza, oggi le presenterò
in maniera molto superficiale una *struct*.

![](../../images/people/tazza.png): Perché in maniera superficiale?
E soprattutto, che cos'è una struct?

![](../../images/people/tess.png): Il linguaggio C usa le struct per raggruppare
variabili. Un esempio, che svilupperemo in seguito, riguarda le coordinate di un punto del piano.

![](../../images/people/tazza.png): `x` e `y`

![](../../images/people/tess.png): *&lt;sarcasmo&gt;Vedo che ha delle ottime basi di geometria ...&lt;/sarcasmo&gt;*

In ogni caso sono due valori, quindi servono due variabili. Una scelta potrebbe
essere:

```c
int x;
int y;
```

Però può ben immaginare che avrebbe più senso legarle in qualche modo
visto che si riferiscono allo *stesso punto* del piano.

## La `struct timespec`

![](../../images/people/tess.png): Ora, però, lasciamo stare la geometria.
Voglio presentarle una struct in particolare. Si chiama `timespec` ed è definita
in `time.h`.

```c
#include <time.h>

/* ora posso usare la struct timespec */
```

![](../../images/people/tazza.png): Va bene, ma a cosa serve, come si usa?

![](../../images/people/tess.png): La `struct timespec` serve a memorizzare
un intervallo di tempo, espresso in secondi e nanosecondi.

In particolare i secondi sono memorizzati nella variabile `tv_sec` e i nanosecondi
nella variabile `tv_nsec`. Non si lasci spaventare o confondere dai nomi un po'
strani, sono variabili come quelle che ha sempre usato.

![](../../images/people/tazza.png): Se queste variabili, `tv_sec` e `tv_nsec`
sono dentro la `struct timespec`, come faccio a memorizzare dei valori?

![](../../images/people/tess.png): Per prima cosa deve dichiarare le variabili,
o meglio, deve dichiarare la struct che le contiene:

```c
#include <time.h>

struct timespec intervallo;
```

A questo punto può accedere a `tv_sec` e `tv_nsec`, presenti all'interno
di `intervallo` (che è di tipo `struct timespec`), mediante l'operatore `.` (il punto).

```c
#include <time.h>

struct timespec intervallo;
intervallo.tv_sec = 0;  /* zero secondi */
intervallo.tv_nsec = 500 * 1000 * 1000;   /* 500 millisecondi =
                                             500 * 1000 microsecondi =
                                             500 * 1000 * 1000 nanosecondi */
```

![](../../images/people/tess.png): Questa struct le sarà molto utile più in là per
creare qualche piccola animazione. Per il momento le mostro un programma
che stampa dei saluti aspettando 1.5 secondi tra l'uno e l'altro.

Per riuscire dobbiamo utilizzare la funzione `nanosleep()` che aspetta
per un certo tempo, quello che impostiamo mediante una struct timespec.
Noti che la funzione `nanosleep()` richiede l'indirizzo della nostra struct!

```c
#include <stdio.h>
#include <time.h>

int main()
{
  struct timespec intervallo;
  intervallo.tv_sec = 1;                  /* 1 secondo e */
  intervallo.tv_nsec = 500 * 1000 * 1000; /* 500 millisecondi */

  printf("Benvenuto\n");
  nanosleep(&intervallo, NULL);

  printf("Buongiorno\n");
  nanosleep(&intervallo, NULL);

  printf("Grazie per averci scelto, arrivederci\n");
  nanosleep(&intervallo, NULL);

  return 0;
}
```
Torna a [I tipi avanzati del C](../summary.md)

Oppure [continua a leggere](esercizi.md)

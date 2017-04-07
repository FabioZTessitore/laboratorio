Raggruppare variabili, le struct


#### Raggruppare variabili, le struct

Il linguaggio C usa le struct per raggruppare
variabili. Un esempio, che svilupperemo in seguito,
riguarda le coordinate di un punto del piano.

In ogni caso si tratta di due valori, quindi servono due variabili.
Una scelta potrebbe essere:

```c
int x;
int y;
```

Però puoi ben immaginare che avrebbe più senso legarle in qualche modo
visto che si riferiscono allo *stesso punto* del piano.

#### La `struct timespec`

Ora, però, lasciamo stare la geometria.
Parliamo di una struct in particolare. Si chiama `timespec` ed è definita
in `time.h`.

```c
#include <time.h>

/* ora posso usare la struct timespec */
```

La `struct timespec` serve a memorizzare
un intervallo di tempo, espresso in secondi e nanosecondi.

In particolare i secondi sono memorizzati nella variabile `tv_sec`
e i nanosecondi nella variabile `tv_nsec`.
Non lasciarti spaventare o confondere dai nomi un po'
strani, sono variabili come quelle che hai sempre usato.

Siccome queste variabili, `tv_sec` e `tv_nsec`
sono dentro la `struct timespec` per prima cosa devi
dichiarare la struct che le contiene:

```c
#include <time.h>

struct timespec intervallo;
```

A questo punto puoi accedere a `tv_sec` e `tv_nsec`, presenti all'interno
di `intervallo` (che è di tipo `struct timespec`), mediante l'operatore `.` (il punto).

```c
#include <time.h>

struct timespec intervallo;
intervallo.tv_sec = 0;  /* zero secondi */
intervallo.tv_nsec = 500 * 1000 * 1000;   /* 500 millisecondi =
                                             500 * 1000 microsecondi =
                                             500 * 1000 * 1000 nanosecondi */
```

Questa struct ti sarà molto utile più in là per
creare qualche piccola animazione. Per il momento ti mostro un programma
che stampa dei saluti aspettando 1.5 secondi tra l'uno e l'altro.

Per riuscire dobbiamo utilizzare la funzione `nanosleep()` che aspetta
per un certo tempo, quello che impostiamo mediante una struct timespec.
Nota che la funzione `nanosleep()` richiede l'indirizzo della nostra struct!

```c
#include <stdio.h>
#include <time.h>

int main()
{
  struct timespec intervallo;
  intervallo.tv_sec = 1;                  /* 1 secondo e */
  intervallo.tv_nsec = 500 * 1000 * 1000; /* 500 millisecondi */

  puts("Benvenuto");
  nanosleep(&intervallo, NULL);

  puts("Buongiorno");
  nanosleep(&intervallo, NULL);

  puts("Grazie per averci scelto, arrivederci");
  nanosleep(&intervallo, NULL);

  return 0;
}
```

<a href="/activities/2">Torna alla Parte II</a>

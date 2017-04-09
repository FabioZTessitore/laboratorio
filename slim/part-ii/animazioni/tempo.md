Calcolare il tempo trascorso


#### Calcolare il tempo trascorso

La `struct timespec`, in congiunzione con la funzione `clock_gettime()`,
viene usata per calcolare il tempo (segnato dall'orologio al muro)
trascorso tra due eventi.

Lo schema base è il seguente:

```c
struct timespec start;
struct timespec end;

/* istante iniziale */
clock_gettime(CLOCK_MONOTONIC, &start);

/* operazioni */

/* istante finale */
clock_gettime(CLOCK_MONOTONIC, &end);
```

Siccome `start` e `end` sono di tipo `struct timespec` abbiamo gli istanti
iniziale e finale in termini di secondi e nanosecondi trascorsi.

La prima cosa da fare è convertire in un unico valore, ad esempio in millisecondi:

```c
/* in millisecondi */
double start_f = start.tv_sec * 1000. + start.tv_nsec / 1.e6;
double end_f = end.tv_sec * 1000. + end.tv_nsec / 1.e6;
```

E poi possiamo confrontare:

```c
printf("tempo trascorso: %.3f (msec)\n", end_f - start_f);
```

##### Esempio completo

Nell'esempio che segue viene utilizzata una terza `struct timespec` per
specificare un intervallo di attesa.

> tempo.c

```c
#include <stdio.h>
#include <time.h>

int main()
{
  struct timespec start, end;

  /* attesa di 700 millisecondi */
  struct timespec attesa;
  attesa.tv_sec = 0;
  attesa.tv_nsec = 700 * 1000 * 1000;

  /* istante iniziale */
  clock_gettime(CLOCK_MONOTONIC, &start);

  /* attende 700 msec */
  nanosleep(&attesa, NULL);

  /* istante finale */
  clock_gettime(CLOCK_MONOTONIC, &end);

  printf("start sec:  %ld\n", start.tv_sec);
  printf("start nsec: %ld\n", start.tv_nsec);
  printf("end sec:    %ld\n", end.tv_sec);
  printf("end nsec:   %ld\n", end.tv_nsec);

  /* conversione in millisecondi */
  double start_f = start.tv_sec * 1000. + start.tv_nsec / 1.e6;
  double end_f = end.tv_sec * 1000. + end.tv_nsec / 1.e6;

  printf("tempo trascorso: %.3f (msec)\n", end_f - start_f);

  return 0;
}
```

> Makefile

```
CC=gcc
CFLAGS=-Wall -pedantic  # (no -ansi)
```

<a href="/activities/2">Torna alla Parte II</a>

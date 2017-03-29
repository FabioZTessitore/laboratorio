Esempio di ciclo con contatore


#### Esempio di ciclo con contatore

Un esempio di ciclo con contatore che calcola la media dei voti.

```c
/* calcola la media dei voti inseriti
 * (ipotizza 5 voti)
 */

#include <stdio.h>

int main()
{
  /* bisogna inserire cinque voti!!! */
  int numero_voti = 5;

  int contatore = 0;

  /* voto attualmente inserito */
  int voto;

  int somma_voti = 0;
  double media_voti = 0.;

  printf("Calcola la media di %d voti\n\n", numero_voti);

  while (contatore < numero_voti) {
    /* input del voto */
    printf("Inserisci voto #%d: ", contatore+1);
    scanf("%d", &voto);

    /* aggiornamento della somma */
    somma_voti += voto;

    /* aggiornamento del contatore */
    contatore++;
  }

  media_voti = (double) somma_voti / (double) numero_voti;

  /* stampa la media con una sola cifra dopo il punto */
  printf("La media dei voti e': %.1f\n", media_voti);

  return 0;
}
```

<a href="/activities/2">Torna alla Parte II</a>

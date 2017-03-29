Esempio di ciclo con valore sentinella


#### Esempio di ciclo con valore sentinella

Nell'esempio del calcolo dei voti con contatore sei costretto ad inserire
cinque voti. Ovviamente sarebbe meglio se il programma accettasse un numero
indefinito di valori.

Nasce allora il problema: come facciamo a fargli capire che non vogliamo inserire
più voti? Il problema si risolve utilizzando un valore sentinella, cioè un
valore che non può essere un voto e che quindi segnala la fine dei dati.

```c
/* calcola la media dei voti inseriti
 * (si ferma quando incontra il valore sentinella -1)
 */

#include <stdio.h>

int main()
{
  int contatore = 0;
  int voto;
  int somma_voti = 0;
  double media_voti = 0.;
  int sentinella = -1;

  printf("Calcola la media dei voti inseriti\n");
  printf("%d per terminare l'inserimento dei dati\n", sentinella);

  /* chiede almeno un inserimento */
  printf("Inserisci voto #%d: ", contatore+1);
  scanf("%d", &voto);
  while (voto != sentinella) {
    /* se non e' stato inserito il valore sentinella
      aggiorna la somma dei voti e il contatore */
    somma_voti += voto;

    contatore++;

    /* prima della fine del ciclo
    richiede un nuovo dato */
    printf("Inserisci voto #%d: ", contatore+1);
    scanf("%d", &voto);
  }

  /* calcola la media solo se e' stato inserito almeno un voto */
  if (contatore > 0) {
    media_voti = (double) somma_voti / (double) contatore;
    printf("La media dei voti e': %.1f\n", media_voti);
  } else {
    printf("Nessun voto inserito\n");
  }

  return 0;
}
```

<a href="/activities/2">Torna alla Parte II</a>

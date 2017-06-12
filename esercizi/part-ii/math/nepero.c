/* nepero.c */

/* Approssima il valore di e = 1 + 1/1! + 1/2! + 1/3! + ... */

#include <stdio.h>

int main()
{
  /* numero di termini della serie */
  int n = 10;

  /* fattoriale, aggiornato per ogni termine della serie */
  int fatt = 1;

  int counter;

  double e = 1.;
  double e_old;

  printf("Numero di Nepero e\n\n");

  /* calcola 'e' con n termini */
  for (counter = 1; counter < n; counter++) {
    fatt *= counter;
    e += 1. / (double)fatt;
  }
  printf("e (con %d termini) = %f\n\n", n, e);

  /* calcola fino a variazione terza cifra decimale */
  fatt = 1;
  e = 1.;
  counter = 1;
  do {
    /* valore precendente */
    e_old = e;

    /* valore nuovo */
    fatt *= counter;
    e += 1. / (double)fatt;

    counter++;
  } while (e - e_old > 0.001);
  printf("e (fino a variazione terza cifra decimale) = %f\n"
  "n. di termini utilizzati = %d\n\n", e, counter);

  return 0;
}

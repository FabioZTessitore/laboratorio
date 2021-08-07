/* myvect_sort.c */

#include "myvect_math.h"
#include "myvect_sort.h"

void myvect_bubble_sort(int v[], const int size)
{
  int pass;           /* passaggi */
  int i = 0;
  int temp;
  int scambio = 1;    /* 1: e' stato effettuato almeno uno scambio, continua;
                       * 0: nessuno scambio, il vettore e' ordinato.
                       */

  /* esegue un passaggio solo se c'e' stato uno scambio */
  for (pass = 1; pass < size && scambio; pass++) {

    /* ipotizza vettore ordinato */
    scambio = 0;

    /* ad ogni passaggio effettua un confronto in meno */
    for (i = 0; i < size-pass; i++) {
      if (v[i] > v[i+1]) {
        scambio = 1;    /* avvisa */

        temp = v[i];
        v[i] = v[i+1];
        v[i+1] = temp;
      }
    }
  }
}

void myvect_selection_sort(int v[], const int size)
{
  int temp;
  int min_index;

  if (size <= 1) return;

  min_index = myvect_min_index(v, size);

  temp = v[0];
  v[0] = v[min_index];
  v[min_index] = temp;

  myvect_selection_sort(&v[1], size-1);
}

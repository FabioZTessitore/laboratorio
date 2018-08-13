/* raddoppia1.c */

/* Il passaggio di vettori */

/* Istruzioni per la compilazione ed esecuzione:
 *
 * $ make raddoppia1
 * $ ./raddoppia1
 */

#include <stdio.h>

/* raddoppia: raddoppia ogni elemento del vettore */
void raddoppia(int v[], int n);

int main()
{
  int vett[10];
  int i;

  /* imposta i valori iniziali */
  for (i = 0; i < 10; i++) {
    vett[i] = i+1;
  }

  printf("Raddoppia Vett 1\n\n");

  printf("Valori iniziali\n");
  for (i = 0; i < 10; i++) {
    printf("%d ", vett[i]);
  }

  raddoppia(vett, 10);

  printf("\n\nValori finali\n");
  for (i = 0; i < 10; i++) {
    printf("%d ", vett[i]);
  }
  putchar('\n');

  return 0;
}

void raddoppia(int v[], int n)
{
  int i;

  for (i = 0; i < n; i++) {
    v[i] *= 2;
  }
}

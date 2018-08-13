/* raddoppia2.c */

/* Il passaggio di vettori */

/* Istruzioni per la compilazione ed esecuzione:
 *
 * $ make raddoppia2
 * $ ./raddoppia2
 */

#include <stdio.h>

/* raddoppia_vettore: raddoppia ogni elemento del vettore */
void raddoppia_vettore(int v[], int n);

/* raddoppia_intero: raddoppia l'argomento */
void raddoppia_intero(int *pn);

int main()
{
  int vett[10];
  int i;

  /* imposta i valori iniziali */
  for (i = 0; i < 10; i++) {
    vett[i] = i+1;
  }

  printf("Raddoppia Vett 2\n\n");

  printf("Valori iniziali\n");
  for (i = 0; i < 10; i++) {
    printf("%d ", vett[i]);
  }

  raddoppia_vettore(vett, 10);

  printf("\n\nValori finali\n");
  for (i = 0; i < 10; i++) {
    printf("%d ", vett[i]);
  }
  putchar('\n');

  return 0;
}

void raddoppia_vettore(int v[], int n)
{
  int i;

  for (i = 0; i < n; i++) {
    raddoppia_intero(&v[i]);
  }
}

void raddoppia_intero(int *pn)
{
  *pn *= 2;
}

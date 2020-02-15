/* vettops.c */

/* Vettori e puntatori */

/* Istruzioni per la compilazione ed esecuzione:
 *
 * $ make vettops
 * $ ./vettops
 */

#include <stdio.h>

void vett_init(int *pv, int size);
void vett_raddoppia(int *pv, int size);
void vett_stampa(int *pv, int size);

int main(void)
{
  int vett[10];

  vett_init(vett, 10);

  printf("Vettori e Puntatori\n\n");

  printf("Valori iniziali\n");
  vett_stampa(vett, 10);

  vett_raddoppia(vett, 10);

  printf("\n\nValori finali\n");
  vett_stampa(vett, 10);
  putchar('\n');

  return 0;
}

void vett_init(int *pv, int size)
{
  int i;

  for (i = 0; i < size; i++) {
    *(pv+i) = i+1;
  }
}

void vett_raddoppia(int *pv, int size)
{
  int i;

  for (i = 0; i < size; i++) {
    *(pv+i) *= 2;
  }
}

void vett_stampa(int *pv, int size)
{
  int i;

  for (i = 0; i < size; i++) {
    printf("%d ", *(pv+i));
  }
}

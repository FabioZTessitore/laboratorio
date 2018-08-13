/* vettops.c */

/* Vettori e puntatori */

/* Istruzioni per la compilazione ed esecuzione:
 *
 * $ make vettops
 * $ ./vettops
 */

#include <stdio.h>

void vett_init(int *pv, int n);
void vett_raddoppia(int *pv, int n);
void vett_stampa(int *pv, int n);

int main()
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

void vett_init(int *pv, int n)
{
  int i;

  for (i = 0; i < 10; i++) {
    *(pv+i) = i+1;
  }
}

void vett_raddoppia(int *pv, int n)
{
  int i;

  for (i = 0; i < n; i++) {
    *(pv+i) *= 2;
  }
}

void vett_stampa(int *pv, int n)
{
  int i;

  for (i = 0; i < 10; i++) {
    printf("%d ", *(pv+i));
  }
}

/* swap.c */

/* Il passaggio per riferimento */

/* Istruzioni per la compilazione ed esecuzione:
 *
 * $ make swap
 * $ ./swap
 */

#include <stdio.h>

/* swap: scambia i valori */
void swap(int *pa, int *pb);

int main(void)
{
  int a = 3;
  int b = 1;

  printf("Swap\n\n");

  printf("Valori iniziali\n");
  printf("a: %d\n", a);
  printf("b: %d\n", b);

  swap(&a, &b);

  printf("\nDopo lo scambio\n");
  printf("a: %d\n", a);
  printf("b: %d\n", b);

  return 0;
}

void swap(int *pa, int *pb)
{
  int temp;

  temp = *pa;
  *pa = *pb;
  *pb = temp;
}

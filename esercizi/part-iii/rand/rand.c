/* rand.c */

/* Estrae 5 numeri compresi nei seguenti gruppi:
 *
 * a) 50, 51, 52, 53, 54, 55
 * b) 2, 4, 6, 8, 10
 * c) 3, 5, 7, 9, 11
 * d) 6, 10, 14, 18, 22
 */

 /* istruzioni per la compilazione e l'esecuzione:
 $ make rand
 $ ./rand
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int i;

  /* inizializza generatore numeri pseudocasuali */
  srand( time(NULL) );

  /* gruppo a) */
  printf("Estrae 5 numeri dal gruppo\n"
        "a) 50, 51, 52, 53, 54, 55\n");
  for (i = 0; i < 5; i++) {
    printf("%d\t", 50 + rand() % 6);
  }

  /* gruppo b) */
  printf("\n\nEstrae 5 numeri dal gruppo\n"
        "b) 2, 4, 6, 8, 10\n");
  for (i = 0; i < 5; i++) {
    printf("%d\t", (1 + rand() % 5) * 2);
  }

  /* gruppo c) */
  printf("\n\nEstrae 5 numeri dal gruppo\n"
        "c) 3, 5, 7, 9, 11\n");
  for (i = 0; i < 5; i++) {
    printf("%d\t", (1 + (1 + rand() % 5) * 2));
  }

  /* gruppo d) */
  printf("\n\nEstrae 5 numeri dal gruppo\n"
        "d) 6, 10, 14, 18, 22\n");
  for (i = 0; i < 5; i++) {
    printf("%d\t", 2 * (1 + (1 + rand() % 5) * 2));
  }

  printf("\n\n");

  return 0;
}

/* rand.c */

/* Estrae 5 numeri compresi nei seguenti intervalli:
 *
 * a) 2, 4, 6, 8, 10
 * b) 3, 5, 7, 9, 11
 * c) 6, 10, 14, 18, 22
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int i;

  srand(time(NULL));

  /* gruppo a) */
  printf("Estrae 5 numeri dal gruppo\n"
        "a) 2, 4, 6, 8, 10\n");
  for (i = 0; i < 5; i++) {
    printf("%d\t", (1 + rand() % 5) * 2);
  }

  /* gruppo b) */
  printf("\n\nEstrae 5 numeri dal gruppo\n"
        "b) 3, 5, 7, 9, 11\n");
  for (i = 0; i < 5; i++) {
    printf("%d\t", (1 + (1 + rand() % 5) * 2));
  }

  /* gruppo c) */
  printf("\n\nEstrae 5 numeri dal gruppo\n"
        "c) 6, 10, 14, 18, 22\n");
  for (i = 0; i < 5; i++) {
    printf("%d\t", 2 * (1 + (1 + rand() % 5) * 2));
  }

  printf("\n\n");

  return 0;
}

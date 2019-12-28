/* sequenze.c */

/* Stampa sequenze di numeri */

/* Istruzioni per la compilazione e l'esecuzione:
$ make sequenze
$ ./sequenze
*/

#include <stdio.h>

int main(void)
{
  int i;

  /* sequenza 1, 2, 3, 4, 5, 6, 7, 8 */
  printf("a) ");
  for (i = 1; i <= 8; i++) {
    printf("%d ", i);
  }
  putchar('\n');

  /* sequenza 3, 8, 13, 18, 23 */
  printf("b) ");
  for (i = 3; i <= 23; i += 5) {
    printf("%d ", i);
  }
  putchar('\n');

  /* sequenza 20, 14, 8, 2, -4, -10 */
  printf("c) ");
  for (i = 20; i >= -10; i -= 6) {
    printf("%d ", i);
  }
  putchar('\n');

  /* sequenza 19, 27, 35, 43, 51 */
  printf("d) ");
  for (i = 19; i <= 51; i += 8) {
    printf("%d ", i);
  }
  putchar('\n');

  return 0;
}

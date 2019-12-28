/* pigreco.c */

/* Approssimazione di pi greco mediante la serie
 * 4 - 4/3 + 4/5 - 4/7 + 4/9 - 4/11 + ...
 */

/* Istruzioni per la compilazione e l'esecuzione:
$ make pigreco
$ ./pigreco
*/

#include <stdio.h>

int main(void)
{
  double pi = 0.;

  /* segno dei termini della serie */
  int sign = +1;

  /* numero di termini della serie da utilizzare */
  int n_term = 0;

  int counter;

  printf("Approssimazione di Pi Greco\n");
  printf("mediante la serie:\n\n");
  printf("4 - 4/3 + 4/5 - 4/7 + 4/9 - 4/11 + ...\n\n");

  do {
    printf("Quanti termini vuoi utilizzare? ");
    scanf("%d", &n_term);
  } while (n_term < 1);

  printf("PI: ");
  for (counter = 0; counter < n_term; counter++) {
    pi += sign * 4./(2.*counter+1);
    sign = -sign;
  }
  printf("%f\n", pi);

  return 0;
}

/* pigreco.c */

/* Approssimazione di pi greco */

#include <stdio.h>

int main()
{
  double pi = 0.;

  /* segno dei termini della serie */
  int sign = +1;

  /* numero di termini della serie da utilizzare */
  int n_term;

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

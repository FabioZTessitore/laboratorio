/* main.c */

/* Guess: Indovina il numero */

#include <stdio.h>
#include "guess.h"

int main()
{
  int numero;
  int guess;
  int ans = 'y';
  int temp;
  int min = 1;
  int max = 1000;

  guess_init();

  do {
    guess_header(min, max);

    guess = 0;

    numero = guess_number(min, max);

    do {
      printf("? ");
      scanf("%d", &guess);

      while ((temp=getchar()) != '\n')
        ;
    } while (guess_check(numero, guess) != 0);

    /* read the answer */
    do {
      printf("\n? ");
      ans = getchar();

      if (ans != 'y' && ans != 'n' && ans != '\n') {
        /* clear the buffer */
        while ((temp=getchar()) != '\n')
          ;
      }
    } while (ans != 'y' && ans != 'n');

  } while (ans=='y');

  return 0;
}

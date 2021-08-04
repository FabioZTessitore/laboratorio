/* main.c */

/* Guess: Indovina il numero */

/* Istruzioni di compilazione ed esecuzione:
 *
 * $ make
 * $ ./main
 */

#include <stdio.h>
#include "guess.h"

int main(void)
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
    } while (guess_check(numero, guess) != 0);

    /* clean the buffer before getchar() */
    while ((temp=getchar()) != '\n')
      ;

    /* play again? */
    do {
      printf("\n? ");
      ans = getchar();

      if (ans != 'y' && ans != 'n' && ans != '\n') {
        /* clear the buffer */
        while ((temp=getchar()) != '\n')
          ;
        printf("Would you like to play again (y or n)? ");
      }
    } while (ans != 'y' && ans != 'n');

  } while (ans == 'y');

  return 0;
}

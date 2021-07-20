/* cast.c */

/* Esempio di casting */

/* Istruzioni per la compilazione e l'esecuzione:
 *
 * Compilazione:
 * $ gcc -c cast.c -o cast.o
 *
 * Link:
 * $ gcc cast.o -o cast
 *
 * Esecuzione:
 * $ ./cast
 */

#include <stdio.h>

int main(void)
{
  int num_int;
  double num_fp;

  /* input di un floating point */
  printf("Please insert a floating point number\n");
  printf("? ");
  scanf("%lf", &num_fp);

  /* casting */
  num_int = (int)num_fp;

  /* output */
  printf("Your floating point number is: %f\n", num_fp);
  printf("After casting to int: %d\n", num_int);

  return 0;
}

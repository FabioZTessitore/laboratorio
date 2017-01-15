/* cast.c */

/* Esempio di casting */

/* Istruzioni per la compilazione e l'esecuzione:
 *
 * Compilare:
 * $ gcc -c cast.c -o cast.o
 *
 * Link:
 * $ gcc cast.o -o cast
 *
 * Eseguire:
 * $ ./cast
 */

#include <stdio.h>

int main()
{
  int num_int;
  double num_floating_point;

  /* input di un floating point */
  printf("Please insert a floating point number\n");
  printf("? ");
  scanf("%lf", &num_floating_point);

  /* casting */
  num_int = (int)num_floating_point;

  /* output */
  printf("Your floating point number is: %f\n", num_floating_point);
  printf("After casting to int: %d\n", num_int);

  return 0;
}

/* figure.c */

/* Stampa alcune figure mediante utilizzo di cicli for */

/* Istruzioni per la compilazione e l'esecuzione:
$ make figure
$ ./figure
*/

#include <stdio.h>

int main()
{
  int row, col;

  /*
  a)
  *
  **
  ***
  ****
  *****
  ******
  *******
  ********
  *********
  **********
  */
  printf("a)\n");
  for (row = 1; row <= 10; row++) {
    for (col = 1; col <= row; col++) {
      putchar('*');
    }
    putchar('\n');
  }
  putchar('\n');


  /*
  b)
  **********
  *********
  ********
  *******
  ******
  *****
  ****
  ***
  **
  *
  */
  printf("b)\n");
  for (row = 1; row <= 10; row++) {
    for (col = 1; col <= 10-(row-1); col++) {
      putchar('*');
    }
    putchar('\n');
  }
  putchar('\n');



  /*
  c)
  **********
   *********
    ********
     *******
      ******
       *****
        ****
         ***
          **
           *
  */
  printf("c)\n");
  for (row = 1; row <= 10; row++) {
    for (col = 1; col < row; col++) {
      putchar(' ');
    }
    for (col = row; col <= 10; col++) {
      putchar('*');
    }
    putchar('\n');
  }
  putchar('\n');



  /*
  d)
           *
          **
         ***
        ****
       *****
      ******
     *******
    ********
   *********
  **********
  */
  printf("d)\n");
  for (row = 1; row <= 10; row++) {
    for (col = 1; col <= 10-row; col++) {
      putchar(' ');
    }
    for (col = 10-(row-1); col <= 10; col++) {
      putchar('*');
    }
    putchar('\n');
  }
  putchar('\n');

  return 0;
}

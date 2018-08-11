/* fibonacci.c */

/* La serie di Fibonacci mediante funzione ricorsiva */

/* istruzioni per la compilazione e l'esecuzione:
$ make fibonacci
$ ./fibonacci
*/

#include <stdio.h>

int fibonacci(int n);

int main()
{
  int i;

  printf("La serie di Fibonacci\n\n");

  for (i = 0; i < 10; i++) {
    printf("%d  ", fibonacci(i));
  }
  putchar('\n');

  return 0;
}

/* fibonacci():
 *
 * fibonacci(0) -> 0
 * fibonacci(1) -> 1
 * fibonacci(n) -> fibonacci(n-1) + fibonacci(n-2)
 */
int fibonacci(int n)
{
  if (n == 0 || n == 1) return n;

  return fibonacci(n-1) + fibonacci(n-2);
}

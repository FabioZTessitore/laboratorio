/* fibonacci.c */

/* La serie di Fibonacci mediante funzione ricorsiva e memoizzazione */

/* istruzioni per la compilazione e l'esecuzione:
$ make fibonacci
$ ./fibonacci
*/

#include <stdio.h>

int fibonacci_helper(int n, int cache[]);
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

int fibonacci_helper(int n, int cache[])
{
  if (n == 0 || n == 1) return n;

  if (cache[n] != 0) return cache[n];

  cache[n] = fibonacci_helper(n-1, cache) + fibonacci_helper(n-2, cache);

  return cache[n];
}

int fibonacci(int n)
{
    static int cache[30];  /* azzerato automaticamente */
    cache[1] = 1;

    if (n >= 30) {
      printf("Posso calcolare fino a fibonacci(29)\n");
      return -1;
    }

    return fibonacci_helper(n, cache);
}

/* memoizzazione.c */

/* La serie di Fibonacci mediante funzione ricorsiva e memoizzazione */

/* istruzioni per la compilazione e l'esecuzione:
$ make memoizzazione
$ ./memoizzazione
*/

#include <stdio.h>

int fibonacci(int n);
int fibonacci_helper(int n, int cache[], int cache_size);

int main(void)
{
  int i;

  printf("La serie di Fibonacci\n\n");

  for (i = 0; i < 10; i++) {
    printf("%d  ", fibonacci(i));
  }
  putchar('\n');

  return 0;
}

int fibonacci(int n)
{
  #define CACHE_SIZE 30
  static int cache[CACHE_SIZE];  /* azzerato automaticamente */
  cache[0] = 0;
  cache[1] = 1;

  if (n >= 30) {
    printf("fibonacci(): Posso calcolare fino a fibonacci(%d)\n", CACHE_SIZE-1);
    return -1;
  }

  return fibonacci_helper(n, cache, CACHE_SIZE);
}

int fibonacci_helper(int n, int cache[], int cache_size)
{
  if (n == 0 || n == 1) return n;

  if (n >= cache_size) {
    printf("fibonacci_helper(): Posso calcolare fino a fibonacci(%d)\n", cache_size-1);
    return -1;
  }

  if (cache[n] != 0) return cache[n];

  cache[n] = fibonacci_helper(n-1, cache, cache_size) + fibonacci_helper(n-2, cache, cache_size);

  return cache[n];
}

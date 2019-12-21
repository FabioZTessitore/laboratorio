/* asterischi.c */

/* Stampe a tempo */

/* Istruzioni per la compilazione e l'esecuzione:
 *
 * Compilazione:
 * $ gcc -c asterischi.c -o asterischi.o
 *
 * Link:
 * $ gcc asterischi.o -o asterischi
 *
 * Esecuzione:
 * $ ./asterischi
 */

#include <stdio.h>
#include <time.h>

int main(void)
{
  struct timespec intervallo;
  intervallo.tv_sec = 0;                  /* 0 secondi e */
  intervallo.tv_nsec = 700 * 1000 * 1000; /* 700 millisecondi */

  puts("*");
  nanosleep(&intervallo, NULL);

  puts("*");
  nanosleep(&intervallo, NULL);

  puts("*");
  nanosleep(&intervallo, NULL);

  return 0;
}

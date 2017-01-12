/* asterischi.c */

/* Stampe intervallate */

/* Istruzioni per la compilazione e l'esecuzione:
 *
 * Compilare:
 * $ gcc -c asterischi.c -o asterischi.o
 *
 * Link:
 * $ gcc asterischi.o -o asterischi
 *
 * Eseguire:
 * $ ./asterischi
 */

 #include <stdio.h>
 #include <time.h>

 int main()
 {
   struct timespec intervallo;
   intervallo.tv_sec = 0;                  /* 0 secondi e */
   intervallo.tv_nsec = 700 * 1000 * 1000; /* 700 millisecondi */

   printf("*\n");
   nanosleep(&intervallo, NULL);

   printf("*\n");
   nanosleep(&intervallo, NULL);

   printf("*\n");
   nanosleep(&intervallo, NULL);

   return 0;
 }

/* concat.c */

/* Concatenazione di stringhe */

#include <stdio.h>
#include <string.h>

int main(void)
{
  char str1[] = "Hello";
  char str2[] = " World!";
  char msg[13];

  puts("Concatenazione di stringhe\n");

  printf("Stringhe iniziali: \"%s\" \"%s\"\n\n", str1, str2);

  strncpy(msg, str1, 6);  /* Attenzione, deve copiare anche il terminatore! */
  strncat(msg, str2, 8);  /* Sovrascrive il terminatore e copia la seconda stringa
                             piu' il nuovo terminatore */

  printf("Risultato: \"%s\"\n", msg);

  return 0;
}

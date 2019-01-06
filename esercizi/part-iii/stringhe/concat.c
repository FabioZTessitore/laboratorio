/* concat.c */

/* Concatenazione di stringhe */

#include <stdio.h>
#include <string.h>

int main()
{
  char str1[] = "Hello";
  char str2[] = " World!";
  char msg[13];

  puts("Concatenazione di stringhe\n");

  printf("Stringhe iniziali: \"%s\" \"%s\"\n\n", str1, str2);

  strncpy(msg, str1, 6);  /* Attenzione: anche il terminatore deve essere copiato! */
  strcat(msg, str2);

  printf("Risultato: \"%s\"\n", msg);

  return 0;
}

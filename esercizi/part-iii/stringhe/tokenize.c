/* tokenize.c */

/* Estrarre token da una stringa */

#include <stdio.h>
#include <string.h>

int main()
{
  char msg[] = "Nel mezzo del cammin";
  char* token;

  puts("Tokenize\n");

  printf("Testo: \"%s\"\n\n", msg);

  puts("Tokens:");

  token = strtok(msg, " ");
  while (token) {
    puts(token);
    token = strtok(NULL, " ");
  }

  return 0;
}

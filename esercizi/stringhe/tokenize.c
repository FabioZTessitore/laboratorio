/* tokenize.c */

/* Estrarre token da una stringa */

#include <stdio.h>
#include <string.h>

int main(void)
{
  char msg[] = "Nel mezzo del cammin";
  char delim[] = " ";
  char* token;

  puts("Tokenize\n");

  printf("Testo: \"%s\"\n\n", msg);

  puts("I token:");

  token = strtok(msg, delim);
  while (token) {
    puts(token);
    token = strtok(NULL, delim);
  }

  return 0;
}

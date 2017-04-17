/* commenti.c */

/* elimina i commenti da un file C */

#include <stdio.h>

int main()
{
  enum Stato {  C,      /* CODICE */
                SLASH,  /* INCONTRATO / IN CODICE */
                AST,    /* INCONTRATO * IN COMMENTO */
                COMM,   /* COMMENTO */
                STR     /* STRINGA */
  };
  int stato = C;
  int c;

  "Questa stringa contiene un commento\n"
  "/* non sono un vero commento ... */\n"
  "solo a scopo dimostrativo.\n\n";

  while ( (c = getchar()) != EOF ) {
    if (stato==C) {
      if (c == '/')
        stato = SLASH;
      else if (c == '\"') {
        putchar(c);
        stato = STR;
      } else
        putchar(c);
    } else if (stato == STR) {
      putchar(c);
      if (c == '\"') stato = C;
    } else if (stato == SLASH) {
      if (c != '*') {
        stato = C;
        putchar('/');
        putchar(c);
      } else {
        stato = COMM;
      }
    } else if (stato == COMM) {
      if (c == '*') stato = AST;
    } else if (stato == AST) {
      if (c != '/') stato = COMM;
      else stato = C;
    }
  }

  return 0;
}

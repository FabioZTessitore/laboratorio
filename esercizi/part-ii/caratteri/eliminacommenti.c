/* eliminacommenti.c */

/* elimina i commenti da un file C */

/* Nel codice sono presenti vari commenti a scopo di test
 * cosi' da usare il codice stesso per i test */

#include <stdio.h>

int main()
{
  enum Stato {  C,      /* CODICE */
                SLASH,  /* INCONTRATO '/' IN CODICE */
                AST,    /* INCONTRATO '*' IN COMMENTO */
                COMM,   /* COMMENTO */
                STR,    /* STRINGA */
                APICE,  /* INCONTRATO apice in CODICE */
                INVSLASH,
  };
  int stato = C;
  int c;

  /* Questo commento contiene "una stringa" */

  /* Questo commento contiene un carattere 'c' */

  "Questa stringa contiene un commento\n"
  "/* non sono un vero commento ... */\n"
  "solo a scopo dimostrativo.\n\n"
  "E anche un carattere 'c'!!!";

  while ( (c = getchar()) != EOF ) {
    /* nello stato C controlla se incontra:
     '/'  che potrebbe significare inizio di un commento;
     '\"' che significa inizio di una stringa
    */
    if (stato==C) {
      if (c == '/')
        stato = SLASH;
      else if (c == '\"') {
        putchar(c);
        stato = STR;
      } else if (c == '\'') {
        putchar(c);
        stato = APICE;
      } else
        putchar(c);
    } else if (stato == STR) {
      /* all'interno di una "stringa" bisogna sempre
      stampare fino al carattere \" di chiusura stringa */
      putchar(c);
      if (c == '\"') stato = C;
    } else if (stato == SLASH) {
      /* nello stato SLASH controlla se incontra '*'
      nel qual caso inizia un commento */
      if (c != '*') {
        stato = C;
        putchar('/');
        putchar(c);
      } else {
        stato = COMM;
      }
    } else if (stato == COMM) {
      /* nello stato COMM deve solo attendere
      il carattere '*' che potrebbe significare
      la fine del commento */
      if (c == '*') stato = AST;
    } else if (stato == AST) {
      /* nello stato AST controlla se arriva il carattere '/'
      che determina la fine del commento */
      if (c != '/') stato = COMM;
      else stato = C;
    } else if (stato == APICE) {
      if (c == '\\') {
        putchar(c);
        stato = INVSLASH;
      } else {
        putchar(c);
        if (c == '\'') {
          stato = C;
        }
      }
    } else if (stato = INVSLASH) {
      putchar(c);
      stato = APICE;
    }
  }

  return 0;
}

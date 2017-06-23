/* eliminacommenti.c */

/* elimina i commenti da un file C */

/* Sono presenti vari commenti cosi' da usare il codice stesso per i test */

/* I commenti in C iniziano quando si incontra il carattere '/' seguito da '*',
quindi per determinare se e' iniziato un commento non basta l'arrivo di uno '/'.

Per iniziare, definiamo i seguenti stati:

1) C        codice C
2) SLASH    incontrato uno '/' all'interno del codice
3) COMM     incontrato un '*' dopo uno '/', inizia il commento

Allo stesso modo, per determinare la fine di un commento dobbiamo incontrare
un '*' seguito da uno '/'. Aggiungiamo allora lo stato:

4) AST      incontrato un '*' all'interno di un commento
            (se il prossimo carattere e' uno '/' si torna nello stato C)

Una prima tabella degli stati potrebbe essere:

Stato       Input     Output      Nuovo Stato
    C       c=='/'       -          SLASH
    C       c!='/'       c            -

SLASH       c=='*'       -          COMM
SLASH       c!='*'   '/' + c          C

 COMM       c=='*'       -           AST
 COMM       c!='*'       -            -

  AST       c=='/'       -            C
  AST       c!='/'       -          COMM

Che succede se un commento viene inserito all'interno di una stringa?
In base alla tabella degli stati che abbiamo creato finora il commento
verrebbe eliminato, ma sarebbe un errore. Aggiungiamo allora un nuovo stato:

5) STR      incontrate virgolette doppie all'interno del codice, inizia una stringa

Determinare quando inizia una stringa a questo punto e' banale. Un problema
piu' grande si ha quando vogliamo determinare la fine di una stringa
perche' all'interno di essa potrebbe essere presente la sequenza \".
In questo caso le virgolette non significano la chiusura della stringa!
Aggiungiamo (temporaneamente) un altro stato:

6*) INVSLASHSTR   incontrato '\' all'interno di una stringa

La tabella degli stati si modifica:

Stato       Input     Output      Nuovo Stato
      C       c=='"'       c           STR            * inizia una stringa *
      C       c=='/'       -          SLASH
      C       c!='/'       c            -

    STR       c=='\'       c         INVSLASH         * trovato '\' *
    STR       c=='"'       c            C             * chiusura stringa *
    STR       else         c            -

INVSLASHSTR  qualunque     c           STR

  SLASH       c=='*'       -          COMM
  SLASH       c!='*'   '/' + c          C

   COMM       c=='*'       -           AST
   COMM       c!='*'       -            -

    AST       c=='/'       -            C
    AST       c!='/'       -          COMM

In realta' quando siamo nello stato INVSLASHSTR dobbiamo sempre stampare
il carattere che segue e poi tornare allo stato STR. Quindi possiamo eliminare
questo stato andando a modificare il comportamento del programma quando
incontra lo '\'.

Stato       Input     Output      Nuovo Stato
      C       c=='"'       c           STR            * inizia una stringa *
      C       c=='/'       -          SLASH
      C       else         c            -

    STR       c=='\'       c            -             * trovato '\', legge e stampa il carattere successivo, resta in STR *
    STR       c=='"'       c            C             * chiusura stringa *
    STR       else         c            -

  SLASH       c=='*'       -          COMM
  SLASH       c!='*'   '/' + c          C

   COMM       c=='*'       -           AST
   COMM       c!='*'       -            -

    AST       c=='/'       -            C
    AST       c!='/'       -          COMM

Ci siamo quasi, bisogna considerare ancora il caso dei singoli apici.
La gestione sara' simile a quella delle stringhe.

6) APICE         incontrato apice

Stato       Input     Output      Nuovo Stato
      C    c=='"'       c           STR            * inizia una stringa *
      C    c=='''       c          APICE           * un carattere *
      C    c=='/'       -          SLASH
      C    else         c            -

    STR    c=='\'       c            -             * trovato '\', legge e stampa il carattere successivo, resta in STR *
    STR    c=='"'       c            C             * chiusura stringa *
    STR    else         c            -

  APICE    c=='\'       c            -             * trovato '\', legge e stampa il carattere successivo, resta in APICE *
  APICE    c=='''       c            C             * chiusura apici *

  SLASH    c=='*'       -          COMM
  SLASH    c!='*'   '/' + c          C

   COMM    c=='*'       -           AST
   COMM    c!='*'       -            -

    AST    c=='/'       -            C
    AST    c!='/'       -          COMM
*/

#include <stdio.h>

int main()
{
  enum Stato {  C,      /* CODICE */
                SLASH,  /* INCONTRATO '/' IN CODICE */
                AST,    /* INCONTRATO '*' IN COMMENTO */
                COMM,   /* COMMENTO */
                STR,    /* STRINGA */
                APICE   /* APICI */
  };
  int stato = C;
  int c;

  /* Questo commento contiene "una stringa" */

  /* Questo commento contiene un carattere 'c' */

  "Questa stringa contiene un commento\n"
  "/* non sono un vero commento ... */\n"
  "solo a scopo dimostrativo.\n\n"
  "E anche un carattere 'c'!!!"
  "E una \"stringa\"";

  while ( (c = getchar()) != EOF ) {
    /* nello stato C controlla se incontra:
    '\"' significa inizio di una stringa
    '\'' significa inizio di apici
    '/'  potrebbe significare inizio di un commento
    */
    if (stato == C) {
      if (c == '\"') {
        putchar(c);
        stato = STR;
      } else if (c == '\'') {
        putchar(c);
        stato = APICE;
      } else if (c == '/') {
        stato = SLASH;
      } else {
        putchar(c);
      }
    } else if (stato == STR) {
      /* all'interno di una "stringa" bisogna sempre
      stampare fino al carattere \" di chiusura stringa */
      putchar(c);
      if (c == '\\') {
        c = getchar();
        putchar(c);
      } else if (c == '\"') {
        stato = C;
      }
    } else if (stato == APICE) {
        putchar(c);
        if (c == '\\') {
          c = getchar();
          putchar(c);
        } else if (c == '\'') {
          stato = C;
        }
    } else if (stato == SLASH) {
      /* nello stato SLASH controlla se incontra '*'
      nel qual caso inizia un commento */
      if (c != '*') {
        putchar('/');
        putchar(c);
        stato = C;
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
      if (c != '/') {
        stato = COMM;
      } else {
        stato = C;
      }
    }
  }

  return 0;
}

#include <stdio.h>
#include <ctype.h>
#include "latitudine.h"

Latitudine latitudine_make(int gradi, int primi, int secondi, int segno)
{
  Latitudine l;

  l.gradi = gradi >= 0 ? gradi : 0;
  l.primi = primi >= 0 ? primi : 0;
  l.secondi = secondi >= 0 ? secondi : 0;
  l.segno = segno > 0 ? 1 : -1;

  return l;
}

int latitudine_parse(Latitudine * const l, const char *input)
{
  enum Stato { START, DEG, PRIMI, SEC, END };
  int stato = START;

  int gradi = 0;
  int primi = 0;
  int secondi = 0;
  int segno = 0;

  /* primo carattere */
  int c = *input;

  while ( c ) {
    if (stato == START) {
      if (isspace(c)) {
        /* nothing to do */
      } else if (c == '\n' || c == '\0' || !isdigit(c)) {
        return -1;
      } else if (isdigit(c)) {
        gradi = c-'0';
        stato = DEG;
      }
    } else if (stato == DEG) {
      if (isdigit(c)) {
        gradi = gradi*10 + c-'0';
      } else if (isspace(c)) {
        stato = PRIMI;
      } else if (c == 'n' || c == 'N') {
        segno = 1;
        stato = END;
      } else if (c == 's' || c == 'S') {
        segno = -1;
        stato = END;
      } else {
        return -1;
      }
    } else if (stato == PRIMI) {
      if (isspace(c)) {
        stato = SEC;
      } else if (isdigit(c)) {
        primi = primi*10 + c-'0';
      } else if (c == 'n' || c == 'N') {
        segno = 1;
        stato = END;
      } else if (c == 's' || c == 'S') {
        segno = -1;
        stato = END;
      } else {
        return -1;
      }
    } else if (stato == SEC) {
      if (isspace(c)) {
        /* nothing to do */
      } else if (isdigit(c)) {
        secondi = secondi*10 + c-'0';
      } else if (c == 'n' || c == 'N') {
        segno = 1;
        stato = END;
      } else if (c == 's' || c == 'S') {
        segno = -1;
        stato = END;
      } else {
        return -1;
      }
    }

    c = *(++input);
  }

  if (stato == END) {
    l->gradi = gradi;
    l->primi = primi;
    l->secondi = secondi;
    l->segno = segno;

    return 0;
  }

  return -1;
}

void latitudine_print(const Latitudine * const l)
{
  printf("%02d %02d %02d", l->gradi, l->primi, l->secondi);
  printf(l->segno > 0 ? "N" : "S");
  putchar('\n');
}

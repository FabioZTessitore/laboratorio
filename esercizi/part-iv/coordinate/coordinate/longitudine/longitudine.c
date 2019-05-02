/* longitudine.c */

#include <stdio.h>
#include <ctype.h>
#include "longitudine.h"

int longitudine_check_dati(int gradi, int primi, int secondi, int segno);

Longitudine longitudine_make(int gradi, int primi, int secondi, int segno)
{
  Longitudine l;

  l.gradi = gradi >= 0 ? gradi : 0;
  l.primi = primi >= 0 ? primi : 0;
  l.secondi = secondi >= 0 ? secondi : 0;
  l.segno = segno > 0 ? 1 : -1;

  return l;
}

int longitudine_parse(Longitudine * const l, const char *input)
{
  int gradi = 0, primi = 0, secondi = 0, segno = 0;

  /* sono stati inseriti tutti i valori, gradi, primi, secondi e segno */
  int letti = sscanf(input, "%d %d %d %c", &gradi, &primi, &secondi, &segno);
  if (letti == 4 && longitudine_check_dati(gradi, primi, secondi, segno)) {
    if (segno == 'e' || segno == 'E') segno = 1;
    else if (segno == 'w' || segno == 'W') segno = -1;
    l->gradi = gradi;
    l->primi = primi;
    l->secondi = secondi;
    l->segno = segno;

    return 0;
  }

  /* solo gradi, primi e segno */
  secondi = 0;
  letti = sscanf(input, "%d %d %c", &gradi, &primi, &segno);
  if (letti == 3 && longitudine_check_dati(gradi, primi, secondi, segno)) {
    if (segno == 'e' || segno == 'E') segno = 1;
    else if (segno == 'w' || segno == 'W') segno = -1;
    l->gradi = gradi;
    l->primi = primi;
    l->secondi = secondi;
    l->segno = segno;

    return 0;
  }

  /* solo gradi e segno */
  secondi = 0;
  primi = 0;
  letti = sscanf(input, "%d %c", &gradi, &segno);
  if (letti == 2 && longitudine_check_dati(gradi, primi, secondi, segno)) {
    if (segno == 'e' || segno == 'E') segno = 1;
    else if (segno == 'w' || segno == 'W') segno = -1;
    l->gradi = gradi;
    l->primi = primi;
    l->secondi = secondi;
    l->segno = segno;

    return 0;
  }

  /* in ogni altro caso l'input non e' valido */
  return -1;
}

int longitudine_check_dati(int gradi, int primi, int secondi, int segno)
{
  return (gradi >= -179 && gradi <= 180) &&
    (primi >= 0 && primi <= 59) &&
    (secondi >= 0 && secondi <= 59) &&
    (segno == 'e' || segno == 'E' || segno == 'w' || segno =='W');
}

void longitudine_print(const Longitudine * const l)
{
  printf("%02d %02d %02d", l->gradi, l->primi, l->secondi);
  printf(l->segno > 0 ? "E" : "W");
  putchar('\n');
}

/* latitudine.c */

#include <stdio.h>
#include <ctype.h>
#include "latitudine.h"

static int check_dati(int gradi, int primi, int secondi, int segno);

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
  int gradi = 0, primi = 0, secondi = 0, segno = 0;

  /* sono stati inseriti tutti i valori, gradi, primi, secondi e segno */
  int letti = sscanf(input, "%d %d %d %c", &gradi, &primi, &secondi, &segno);
  if (letti == 4 && check_dati(gradi, primi, secondi, segno)) {
    if (segno == 'n' || segno == 'N') segno = 1;
    else if (segno == 's' || segno == 'S') segno = -1;
    l->gradi = gradi;
    l->primi = primi;
    l->secondi = secondi;
    l->segno = segno;

    return 0;
  }

  /* solo gradi, primi e segno */
  secondi = 0;
  letti = sscanf(input, "%d %d %c", &gradi, &primi, &segno);
  if (letti == 3 && check_dati(gradi, primi, secondi, segno)) {
    if (segno == 'n' || segno == 'N') segno = 1;
    else if (segno == 's' || segno == 'S') segno = -1;
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
  if (letti == 2 && check_dati(gradi, primi, secondi, segno)) {
    if (segno == 'n' || segno == 'N') segno = 1;
    else if (segno == 's' || segno == 'S') segno = -1;
    l->gradi = gradi;
    l->primi = primi;
    l->secondi = secondi;
    l->segno = segno;

    return 0;
  }

  /* in ogni altro caso l'input non e' valido */
  return -1;
}

int check_dati(int gradi, int primi, int secondi, int segno)
{
  return (gradi >= 0 && gradi <= 90) &&
    (primi >= 0 && primi <= 59) &&
    (secondi >= 0 && secondi <= 59) &&
    (segno == 's' || segno == 'S' || segno == 'n' || segno =='N');
}

void latitudine_print(const Latitudine * const l)
{
  printf("%02d %02d %02d", l->gradi, l->primi, l->secondi);
  printf(l->segno > 0 ? "N" : "S");
  putchar('\n');
}

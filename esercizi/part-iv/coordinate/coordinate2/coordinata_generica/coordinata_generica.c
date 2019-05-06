/* coordinata_generica.c */

#include <stdio.h>
#include <ctype.h>
#include "coordinata_generica.h"

CoordinataGenerica coordinata_generica_make(int gradi, int primi, int secondi, int segno, int max_gradi)
{
  CoordinataGenerica cg = { 0, 0, 0, 0 };

  if (gradi < 0 || gradi > max_gradi || primi < 0 || primi > 59 ||
    secondi < 0 || secondi > 59) {
      return cg;
    }

  if (gradi == max_gradi && (primi > 0 || secondi > 0)) {
    return cg;
  }

  cg.gradi = gradi >= 0 ? gradi : 0;
  cg.primi = primi >= 0 ? primi : 0;
  cg.secondi = secondi >= 0 ? secondi : 0;
  cg.segno = segno > 0 ? 1 : -1;

  return cg;
}

int coordinata_generica_parse(CoordinataGenerica * const cg, const char *input, int max_gradi, int (*check_dati)(int, int, int, int), int (*segno_val)(int))
{
  int gradi = 0, primi = 0, secondi = 0, segno = 0;

  /* sono stati inseriti tutti i valori, gradi, primi, secondi e segno */
  int letti = sscanf(input, "%d %d %d %c", &gradi, &primi, &secondi, &segno);
  if (letti == 4 && (*check_dati)(gradi, primi, secondi, segno)) {
    segno = (*segno_val)(segno);
    *cg = coordinata_generica_make(gradi, primi, secondi, segno, max_gradi);

    return 0;
  }

  /* solo gradi, primi e segno */
  secondi = 0;
  letti = sscanf(input, "%d %d %c", &gradi, &primi, &segno);
  if (letti == 3 && (*check_dati)(gradi, primi, secondi, segno)) {
    segno = (*segno_val)(segno);
    *cg = coordinata_generica_make(gradi, primi, secondi, segno, max_gradi);

    return 0;
  }

  /* solo gradi e segno */
  secondi = 0;
  primi = 0;
  letti = sscanf(input, "%d %c", &gradi, &segno);
  if (letti == 2 && (*check_dati)(gradi, primi, secondi, segno)) {
    segno = (*segno_val)(segno);
    *cg = coordinata_generica_make(gradi, primi, secondi, segno, max_gradi);

    return 0;
  }

  /* in ogni altro caso l'input non e' valido */
  return -1;
}

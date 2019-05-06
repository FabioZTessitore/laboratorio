/* longitudine.c */

#include <stdio.h>
#include <ctype.h>
#include "longitudine.h"
#include "coordinata_generica.h"

int longitudine_check_dati(int gradi, int primi, int secondi, int segno);
int longitudine_segno_val(int segno);

Longitudine longitudine_make(int gradi, int primi, int secondi, int segno)
{
  CoordinataGenerica cg = coordinata_generica_make(gradi, primi, secondi, segno, 180);

  Longitudine l = {cg.gradi, cg.primi, cg.secondi, cg.segno };

  return l;
}

int longitudine_parse(Longitudine * const l, const char *input)
{
  CoordinataGenerica cg;

  int status = coordinata_generica_parse(&cg, input, 180, longitudine_check_dati, longitudine_segno_val);

  *l = longitudine_make(cg.gradi, cg.primi, cg.secondi, cg.segno);

  return status;
}

int longitudine_check_dati(int gradi, int primi, int secondi, int segno)
{
  return (gradi >= 0 && gradi <= 180) &&
    (primi >= 0 && primi <= 59) &&
    (secondi >= 0 && secondi <= 59) &&
    (segno == 'e' || segno == 'E' || segno == 'w' || segno =='W');
}

int longitudine_segno_val(int segno)
{
  if (segno == 'e' || segno == 'E') return 1;
  else if (segno == 'w' || segno == 'W') return -1;
}

void longitudine_print(const Longitudine * const l)
{
  printf("%02d %02d %02d ", l->gradi, l->primi, l->secondi);
  printf(l->segno > 0 ? "E" : "W");
  putchar('\n');
}

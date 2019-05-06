/* latitudine.c */

#include <stdio.h>
#include <ctype.h>
#include "latitudine.h"
#include "coordinata_generica.h"

int latitudine_check_dati(int gradi, int primi, int secondi, int segno);
int latitudine_segno_val(int segno);

Latitudine latitudine_make(int gradi, int primi, int secondi, int segno)
{
  CoordinataGenerica cg = coordinata_generica_make(gradi, primi, secondi, segno, 90);

  Latitudine l = {cg.gradi, cg.primi, cg.secondi, cg.segno };

  return l;
}

int latitudine_parse(Latitudine * const l, const char *input)
{
  CoordinataGenerica cg;

  int status = coordinata_generica_parse(&cg, input, 90, latitudine_check_dati, latitudine_segno_val);

  *l = latitudine_make(cg.gradi, cg.primi, cg.secondi, cg.segno);

  return status;
}

int latitudine_check_dati(int gradi, int primi, int secondi, int segno)
{
  return (gradi >= 0 && gradi <= 90) &&
    (primi >= 0 && primi <= 59) &&
    (secondi >= 0 && secondi <= 59) &&
    (segno == 's' || segno == 'S' || segno == 'n' || segno =='N');
}

int latitudine_segno_val(int segno)
{
  if (segno == 'n' || segno == 'N') return 1;
  else if (segno == 's' || segno == 'S') return -1;
}

void latitudine_print(const Latitudine * const l)
{
  printf("%02d %02d %02d ", l->gradi, l->primi, l->secondi);
  printf(l->segno > 0 ? "N" : "S");
  putchar('\n');
}

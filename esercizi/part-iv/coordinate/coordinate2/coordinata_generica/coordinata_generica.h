/* coordinata_generica.h */

#ifndef COORDINATA_GENERICA_H
#define COORDINATA_GENERICA_H

struct coordinata_generica {
  int gradi;
  int primi;
  int secondi;
  int segno;
};

typedef struct coordinata_generica CoordinataGenerica;

CoordinataGenerica coordinata_generica_make(int gradi, int primi, int secondi, int segno, int max_gradi);
int coordinata_generica_parse(CoordinataGenerica * const l, const char *input, int max_gradi, int (*check_dati)(int, int, int, int), int (*segno)(int));

#endif

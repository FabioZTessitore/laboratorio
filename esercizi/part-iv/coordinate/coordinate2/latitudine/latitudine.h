/* latitudine.h */

#ifndef LATITUDINE_H
#define LATITUDINE_H

#include "coordinata_generica.h"

typedef CoordinataGenerica Latitudine;

Latitudine latitudine_make(int gradi, int primi, int secondi, int segno);
int latitudine_parse(Latitudine * const l, const char *input);
void latitudine_print(const Latitudine * const l);

#endif

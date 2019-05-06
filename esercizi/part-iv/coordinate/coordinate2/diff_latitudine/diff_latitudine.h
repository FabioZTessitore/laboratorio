/* diff_latitudine.h */

#ifndef DIFF_LATITUDINE_H
#define DIFF_LATITUDINE_H

#include "latitudine.h"
#include "coordinata_generica.h"

typedef CoordinataGenerica DiffLatitudine;

DiffLatitudine diff_latitudine(const Latitudine * const l1, const Latitudine * const l2);
void diff_latitudine_print(const DiffLatitudine * const dl);

#endif

/* coordinate.h */

#ifndef COORDINATE_H
#define COORDINATE_H

#include "latitudine.h"
#include "longitudine.h"

struct coordinate {
  Latitudine phi;
  Longitudine lambda;
};

typedef struct coordinate Coordinate;

Coordinate coordinate_make(const Latitudine * const phi, const Longitudine * const lambda);

#endif

/* coordinate.c */

#include "coordinate.h"
#include "latitudine.h"
#include "longitudine.h"

Coordinate coordinate_make(const Latitudine * const phi, const Longitudine * const lambda)
{
  Coordinate coords;

  coords.phi = latitudine_make(phi->gradi, phi->primi, phi->secondi, phi->segno);
  coords.lambda = longitudine_make(lambda->gradi, lambda->primi, lambda->secondi, lambda->segno);

  return coords;
}

/* hanoi.c */

#include <stdio.h>
#include "hanoi.h"

void hanoi(int numero_dischi, int from, int to, int temp)
{
  if (numero_dischi == 1) {
    printf("%d -> %d\n", from, to);
    return;
  }

  /* deposita n-1 dischi da from a temp,
   * poi sposta l'ultimo disco da from a to,
   * infine sposta gli n-1 dischi da temp a to
   */
  hanoi(numero_dischi-1, from, temp, to);
  hanoi(1, from, to, temp);
  hanoi(numero_dischi-1, temp, to, from);
}

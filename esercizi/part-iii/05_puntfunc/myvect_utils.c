/* myvect_utils.c */

#include "myvect_utils.h"

void myvect_apply(int v[], const int size, void (*f)(int *))
{
  int i;

  for (i = 0; i < size; i++) {
    (*f)(&v[i]);
  }
}
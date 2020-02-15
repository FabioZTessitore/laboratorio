/* myvect.c */

#include <stdio.h>
#include "myvect.h"
#include "random.h"

void myvect_init(void)
{
  random_init();
}

void myvect_zeroes(int v[], const int size)
{
  int i;
  for (i = 0; i < size; i++)  v[i] = 0;
}

void myvect_ones(int v[], const int size)
{
  int i;
  for (i = 0; i < size; i++)  v[i] = 1;
}

void myvect_sequence(int v[], const int size, const int start, const int step)
{
  int i;
  int k;
  for (i = 0, k = start; i < size; i++, k+=step)  v[i] = k;
}

void myvect_random(int v[], const int size, const int min, const int max)
{
  int i;
  for (i = 0; i < size; i++)  v[i] = random_between(min, max);
}

void myvect_reverse(int v[], const int size)
{
  int i;
  int temp;

  for (i = 0; i < size/2; i++) {
    temp = v[i];
    v[i] = v[size-i-1];
    v[size-i-1] = temp;
  }
}

void myvect_print(const int v[], const int size)
{
  int i;

  for (i = 0; i < size; i++) {
    printf("%d ", v[i]);
  }
  putchar('\n');
}

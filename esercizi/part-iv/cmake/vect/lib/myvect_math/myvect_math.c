/* myvect_math.c */
#include "myvect_math.h"

int myvect_sum(const int v[], const int size)
{
  int i;
  int sum = 0;

  for (i = 0; i < size; i++) {
    sum += v[i];
  }

  return sum;
}

double myvect_mean(const int v[], const int size)
{
  return (double)myvect_sum(v, size) / (double)size;
}

int myvect_min(const int v[], const int size)
{
  int min = v[0];
  int i;

  for (i = 1; i < size; i++) {
    if (v[i] < min) min = v[i];
  }

  return min;
}

int myvect_max(const int v[], const int size)
{
  int max = v[0];
  int i;

  for (i = 1; i < size; i++) {
    if (v[i] > max) max = v[i];
  }

  return max;
}

int myvect_min_index(const int v[], const int size)
{
  int min_index = 0;
  int min = v[0];
  int i;

  for (i = 1; i < size; i++) {
    if (v[i] < min) {
      min = v[i];
      min_index = i;
    }
  }

  return min_index;
}

int myvect_max_index(const int v[], const int size)
{
  int max_index = 0;
  int max = v[0];
  int i;

  for (i = 1; i < size; i++) {
    if (v[i] > max) {
      max = v[i];
      max_index = i;
    }
  }

  return max;
}

int myvect_dot_product(const int v1[], const int v2[], const int size)
{
  int result = 0;
  int i;

  for (i = 0; i < size; i++) {
    result += v1[i] * v2[i];
  }

  return result;
}

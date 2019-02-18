/* myvect_search.c */

#include "myvect_search.h"

/* funzioni private */
int myvect_binary_search_helper(const int v[], const int size, const int key, const int low, const int high);


int myvect_linear_search(const int v[], const int size, const int key)
{
  int i;

  for (i = 0; i < size; i++) {
    if (v[i] == key) return i;
  }

  return -1;
}

int myvect_binary_search(const int v[], const int size, const int key)
{
  return myvect_binary_search_helper(v, size, key, 0, size-1);
}

int myvect_binary_search_helper(const int v[], const int size, const int key, const int low, const int high)
{
  int middle;

  if (low > high) return -1;

  middle = (low + high) / 2;
  if (v[middle] == key) return middle;
  else if (key < v[middle]) return myvect_binary_search_helper(v, size, key, low, middle-1);
  else return myvect_binary_search_helper(v, size, key, middle+1, high);
}

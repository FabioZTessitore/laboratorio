/* memory.c */

#include <stdio.h>
#include "memory.h"

int memory_get(const int memory[], const int memory_size, const int index)
{
  if (index >= 0 && index < memory_size) return memory[index];

  return 0;
}

void memory_set(int memory[], const int memory_size, const int index, const int value)
{
  if (index >= 0 && index < memory_size) memory[index] = value;
}

void memory_dump(const int memory[], const int memory_size)
{
  int row, col;

  printf("MEMORY:\n");

  printf("    ");
  for (col = 0; col < 10; col++) {
    printf(" %5d", col);
  }
  putchar('\n');

  for (row = 0; row < memory_size/10; row++) {
    printf("%04d", row*10);
    for (col = 0; col < 10; col++) {
      printf(" %+05d", memory[row*10+col]);
    }
    putchar('\n');
  }
}

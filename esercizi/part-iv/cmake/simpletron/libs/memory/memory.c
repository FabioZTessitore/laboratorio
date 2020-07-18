/* memory.c */

#include <stdio.h>
#include <string.h>
#include "memory.h"

Memory memory_make(void)
{
  Memory aMemory;

  memset(aMemory.memory_cells, 0, sizeof(int)*MEMORY_SIZE);

  return aMemory;
}

int memory_get(const Memory * const pMemory, const int index)
{
  if (index < MEMORY_SIZE) return pMemory->memory_cells[index];

  return 0;
}

void memory_set(Memory * const pMemory, const int index, const int value)
{
  if (index < MEMORY_SIZE) pMemory->memory_cells[index] = value;
}

void memory_dump(const Memory * const pMemory)
{
  int row, col;

  printf("MEMORY:\n");

  printf("    ");
  for (col = 0; col < 10; col++) {
    printf(" %5d", col);
  }
  putchar('\n');

  for (row = 0; row < MEMORY_SIZE/10; row++) {
    printf("%04d", row*10);
    for (col = 0; col < 10; col++) {
      printf(" %+05d", pMemory->memory_cells[row*10+col]);
    }
    putchar('\n');
  }
}

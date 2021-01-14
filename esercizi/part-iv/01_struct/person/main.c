/* main.c */

/* Utilizzo di struct */

#include <stdio.h>
#include "person.h"
#include "utils.h"

int main(void)
{
  #define BUFFER_SIZE 80

  char firstName[BUFFER_SIZE];
  char lastName[BUFFER_SIZE];
  Person p;

  printf("Name: ");
  strSafeInput(firstName, BUFFER_SIZE);

  printf("Lastname: ");
  strSafeInput(lastName, BUFFER_SIZE);

  p = person_make(firstName, lastName);

  printf("\nA person:\n");
  person_print(&p);

  return 0;
}

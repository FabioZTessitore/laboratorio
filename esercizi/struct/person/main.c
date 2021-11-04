/* main.c */

/* Utilizzo di struct */

#include <stdio.h>
#include "person.h"
#include "safeString.h"

int main(void)
{
  #define BUFFER_SIZE 80

  char firstname[BUFFER_SIZE];
  char lastname[BUFFER_SIZE];
  Person p;

  printf("Name: ");
  safeString_input(firstname, BUFFER_SIZE);

  printf("Lastname: ");
  safeString_input(lastname, BUFFER_SIZE);

  p = person_make(firstname, lastname);

  printf("\nA person:\n");
  person_print(&p);

  return 0;
}

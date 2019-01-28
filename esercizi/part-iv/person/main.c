/* main.c */

#include <stdio.h>
#include "person.h"
#include "utils.h"

int main()
{
  char firstName[80];
  char lastName[80];
  Person p;

  printf("Name: ");
  strSafeInput(firstName, 80);

  printf("Lastname: ");
  strSafeInput(lastName, 80);

  p = person_make(firstName, lastName);

  printf("\nA person:\n");
  person_print(&p);

  return 0;
}

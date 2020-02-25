/* person.c */

#include <stdio.h>
#include "person.h"
#include "utils.h"

Person person_make(const char * const firstName, const char * const lastName)
{
  Person p;

  strSafeCopy(p.firstName, firstName, PERSON_FIRSTNAME_MAX_LEN);
  strSafeCopy(p.lastName, lastName, PERSON_LASTNAME_MAX_LEN);

  return p;
}

void person_print(const Person * const p)
{
  printf("%s, %s\n", p->lastName, p->firstName);
}

/* person.c */

#include <stdio.h>
#include "person.h"
#include "safeString.h"

Person person_make(const char * const firstname, const char * const lastname)
{
  Person p;

  safeString_copy(p.firstname, firstname, PERSON_FIRSTNAME_MAX_LEN);
  safeString_copy(p.lastname, lastname, PERSON_LASTNAME_MAX_LEN);

  return p;
}

void person_print(const Person * const p)
{
  printf("%s, %s\n", p->lastname, p->firstname);
}

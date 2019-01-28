/* person.h */

#ifndef PERSON_H
#define PERSON_H

#define PERSON_FIRSTNAME_MAX_LEN 24
#define PERSON_LASTNAME_MAX_LEN 40

struct person {
  char firstName[PERSON_FIRSTNAME_MAX_LEN];
  char lastName[PERSON_LASTNAME_MAX_LEN];
};

typedef struct person Person;

Person person_make(const char *firstName, const char *lastName);
void person_print(const Person * const p);

#endif

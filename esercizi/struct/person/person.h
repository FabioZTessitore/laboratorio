/* person.h */

#ifndef PERSON_H
#define PERSON_H

#define PERSON_FIRSTNAME_MAX_LEN 24
#define PERSON_LASTNAME_MAX_LEN 40

struct person {
  char firstname[PERSON_FIRSTNAME_MAX_LEN];
  char lastname[PERSON_LASTNAME_MAX_LEN];
};
typedef struct person Person;

Person person_make(const char * const firstname, const char * const lastname);
void person_print(const Person * const p);

#endif

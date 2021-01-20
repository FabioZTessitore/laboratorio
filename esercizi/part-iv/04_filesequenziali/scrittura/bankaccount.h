/* bankaccount.h */

/* Un semplice conto corrente bancario */

#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <stdio.h>

#define BANKACCOUNT_NAME_MAX_LEN 20

struct bankaccount {
    int id;
    char firstname[BANKACCOUNT_NAME_MAX_LEN];
    char lastname[BANKACCOUNT_NAME_MAX_LEN];
    double balance;
};
typedef struct bankaccount Bankaccount;

Bankaccount bankaccount_parse(const char * const buffer);
Bankaccount bankaccount_make(const int id, const char * const firstname, const char * const lastname, const double balance);
void bankaccount_write(FILE *f, const Bankaccount * const account);
void bankaccount_print(const Bankaccount * const account);

#endif

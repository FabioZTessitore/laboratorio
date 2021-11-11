/* bankaccount.h */

/* Un semplice conto corrente bancario */

#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#define BANKACCOUNT_NAME_MAX_LEN 20

struct bankaccount {
    int id;
    char firstname[BANKACCOUNT_NAME_MAX_LEN];
    char lastname[BANKACCOUNT_NAME_MAX_LEN];
    double balance;
};
typedef struct bankaccount Bankaccount;

Bankaccount bankaccount_parse(const char * const buffer);
void bankaccount_print(const Bankaccount * const account);

#endif

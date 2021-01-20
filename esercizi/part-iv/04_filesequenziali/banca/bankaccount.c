/* bankaccount.c */

#include <stdio.h>
#include "bankaccount.h"
#include "utils.h"

#define INPUT_BUFFER_SIZE 80

Bankaccount bankaccount_parse(const char * const buffer)
{
    int id;
    char firstname[INPUT_BUFFER_SIZE];
    char lastname[INPUT_BUFFER_SIZE];
    double balance;

    sscanf(buffer, "%d %s %s %lf", &id, firstname, lastname, &balance);

    return bankaccount_make(id, firstname, lastname, balance);
}

Bankaccount bankaccount_make(const int id, const char * const firstname, const char * const lastname, const double balance)
{
    Bankaccount account;

    account.id = id;
    strSafeCopy(account.firstname, firstname, BANKACCOUNT_NAME_MAX_LEN);
    strSafeCopy(account.lastname, lastname, BANKACCOUNT_NAME_MAX_LEN);
    account.balance = balance;

    return account;
}

void bankaccount_write(FILE *f, const Bankaccount * const account)
{
    fprintf(f, "%6d%25s%25s%15.2f", account->id, account->firstname, account->lastname, account->balance);
}

void bankaccount_print(const Bankaccount * const account) {
    bankaccount_write(stdout, account);
}

double bankaccount_getBalance(const Bankaccount * const account)
{
    return account->balance;
}

void bankaccount_setBalance(Bankaccount * const account, const double balance)
{
    account->balance = balance;
}

double bankaccount_getID(const Bankaccount * const account)
{
    return account->id;
}
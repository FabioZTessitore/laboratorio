/* bankaccount.c */

#include <stdio.h>
#include "bankaccount.h"
#include "safeString.h"

Bankaccount bankaccount_make(const int id, const char * const firstname, const char * const lastname, const double balance)
{
    Bankaccount account;

    account.id = id;
    safeString_copy(account.firstname, firstname, BANKACCOUNT_NAME_MAX_LEN);
    safeString_copy(account.lastname, lastname, BANKACCOUNT_NAME_MAX_LEN);
    account.balance = balance;

    return account;
}

void bankaccount_write(FILE *f, const Bankaccount * const account)
{
    fseek(f, (account->id-1) * sizeof(Bankaccount), SEEK_SET);
    fwrite(account, sizeof(Bankaccount), 1, f);
}

void bankaccount_read(FILE *f, int id, Bankaccount * const account)
{
    fseek(f, (id-1) * sizeof(Bankaccount), SEEK_SET);
    fread(account, sizeof(Bankaccount), 1, f);
}

void bankaccount_print(const Bankaccount * const account)
{
    printf("%6d%25s%25s%15.2f", account->id, account->firstname, account->lastname, account->balance);
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
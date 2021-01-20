/* bankaccount.c */

#include <stdio.h>
#include "bankaccount.h"
#include "utils.h"

#define INPUT_BUFFER_SIZE 80

Bankaccount bankaccount_parse(const char * const buffer)
{
    Bankaccount account;

    int id;
    char firstname[INPUT_BUFFER_SIZE];
    char lastname[INPUT_BUFFER_SIZE];
    double balance;

    sscanf(buffer, "%d %s %s %lf", &id, firstname, lastname, &balance);

    account.id = id;
    strSafeCopy(account.firstname, firstname, BANKACCOUNT_NAME_MAX_LEN);
    strSafeCopy(account.lastname, lastname, BANKACCOUNT_NAME_MAX_LEN);
    account.balance = balance;

    return account;
}

void bankaccount_print(const Bankaccount * const account)
{
    printf("%6d%25s%25s%15.2f\n", account->id, account->firstname, account->lastname, account->balance);
}
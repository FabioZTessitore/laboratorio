/* bank.c */

#include <stdio.h>
#include <stdlib.h>
#include "bank.h"
#include "bankaccount.h"
#include "utils.h"

#define BUFFER_SIZE 80

void bank_init(Bank * const bank, const char * const filename)
{
    bank->filename = filename;

    bank->f_clients = fopen(filename, "r+");
    if (!bank->f_clients) {
        fprintf(stderr, "Impossibile aprire il file\n");
        exit(-1);
    }
}

void bank_close(const Bank * const bank)
{
    fclose(bank->f_clients);
}

void bank_showAll(const Bank * const bank)
{
    char buffer[BUFFER_SIZE];
    Bankaccount account;

    rewind(bank->f_clients);

    printf("%6s%25s%25s%15s\n", "Codice", "Nome", "Cognome", "Saldo");
    while(!feof(bank->f_clients)) {
        fgets(buffer, BUFFER_SIZE, bank->f_clients);
        buffer[BUFFER_SIZE-1] = '\0';

        account = bankaccount_parse(buffer);

        bankaccount_write(stdout, &account);
        putchar('\n');
    }
}

void bank_showZero(const Bank * const bank)
{
    char buffer[BUFFER_SIZE];
    Bankaccount account;

    rewind(bank->f_clients);

    printf("%6s%25s%25s%15s\n", "Codice", "Nome", "Cognome", "Saldo");
    while(!feof(bank->f_clients)) {
        fgets(buffer, BUFFER_SIZE, bank->f_clients);
        buffer[BUFFER_SIZE-1] = '\0';

        account = bankaccount_parse(buffer);

        if (bankaccount_getBalance(&account) == 0.) {
            bankaccount_write(stdout, &account);
            putchar('\n');
        }
    }
}

void bank_showNegative(const Bank * const bank)
{
    char buffer[BUFFER_SIZE];
    Bankaccount account;

    rewind(bank->f_clients);

    printf("%6s%25s%25s%15s\n", "Codice", "Nome", "Cognome", "Saldo");
    while(!feof(bank->f_clients)) {
        fgets(buffer, BUFFER_SIZE, bank->f_clients);
        buffer[BUFFER_SIZE-1] = '\0';

        account = bankaccount_parse(buffer);

        if (bankaccount_getBalance(&account) < 0.) {
            bankaccount_write(stdout, &account);
            putchar('\n');
        }
    }
}

void bank_showPositive(const Bank * const bank)
{
    char buffer[BUFFER_SIZE];
    Bankaccount account;

    rewind(bank->f_clients);

    printf("%6s%25s%25s%15s\n", "Codice", "Nome", "Cognome", "Saldo");
    while(!feof(bank->f_clients)) {
        fgets(buffer, BUFFER_SIZE, bank->f_clients);
        buffer[BUFFER_SIZE-1] = '\0';

        account = bankaccount_parse(buffer);

        if (bankaccount_getBalance(&account) > 0.) {
            bankaccount_write(stdout, &account);
            putchar('\n');
        }
    }
}

void bank_insertClient(const Bank * const bank)
{
    int id = -1;
    char firstname[BUFFER_SIZE] = "";
    char lastname[BUFFER_SIZE] = "";
    double balance = 0.;
    char buffer[BUFFER_SIZE];
    Bankaccount account;
    int currentId;

    printf("Nome: ");
    strSafeInput(firstname, BUFFER_SIZE);

    printf("Cognome: ");
    strSafeInput(lastname, BUFFER_SIZE);

    printf("Saldo Iniziale: ");
    scanf("%lf", &balance);

    /* scorre il file e cerca l'id massimo */
    rewind(bank->f_clients);
    while(!feof(bank->f_clients)) {
        fgets(buffer, BUFFER_SIZE, bank->f_clients);
        buffer[BUFFER_SIZE-1] = '\0';

        account = bankaccount_parse(buffer);
        currentId = bankaccount_getID(&account);
        if (currentId > id) {
            id = currentId;
        }
    }
    id++;
    account = bankaccount_make(id, firstname, lastname, balance);
    
    fputc('\n', bank->f_clients);
    bankaccount_write(bank->f_clients, &account);
}

void bank_update(Bank * const bank)
{
    int id = -1;
    double value = 0.;
    double balance = 0.;
    char buffer[BUFFER_SIZE];
    Bankaccount account;
    int currentId;
    FILE *f = tmpfile();
    int firstRecord = 1;

    printf("ID: ");
    scanf("%d", &id);

    printf("+/- Value: ");
    scanf("%lf", &value);

    rewind(bank->f_clients);
    while(!feof(bank->f_clients)) {
        fgets(buffer, BUFFER_SIZE, bank->f_clients);
        buffer[BUFFER_SIZE-1] = '\0';

        account = bankaccount_parse(buffer);
        currentId = bankaccount_getID(&account);
        if (currentId == id) {
            balance = bankaccount_getBalance(&account);
            balance += value;
            bankaccount_setBalance(&account, balance);
        }
        if (firstRecord != 1) fputc('\n', f);
        bankaccount_write(f, &account);
        
        firstRecord = 0;
    }

    fclose(bank->f_clients);
    
    rewind(f);
    firstRecord = 1;
    bank->f_clients = fopen(bank->filename, "w");
    while(!feof(f)) {
        fgets(buffer, BUFFER_SIZE, f);
        buffer[BUFFER_SIZE-1] = '\0';

        account = bankaccount_parse(buffer);
        if (firstRecord != 1) fputc('\n', bank->f_clients);
        bankaccount_write(bank->f_clients, &account);
        
        firstRecord = 0;
    }
    fclose(bank->f_clients);
    fclose(f);

    bank->f_clients = fopen(bank->filename, "r+");
}
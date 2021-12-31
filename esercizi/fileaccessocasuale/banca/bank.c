/* bank.c */

#include <stdio.h>
#include <stdlib.h>
#include "bank.h"
#include "bankaccount.h"
#include "safeString.h"

#define BUFFER_SIZE 80

int filterAll(const Bankaccount * const unused) {
    return 1;
}

int filterZero(const Bankaccount * const account) {
    return (bankaccount_getBalance(account) == 0.);
}

int filterNegative(const Bankaccount * const account) {
    return (bankaccount_getBalance(account) < 0.);
}

int filterPositive(const Bankaccount * const account) {
    return (bankaccount_getBalance(account) > 0.);
}

void bank_showFiltered(const Bank * const bank, int (*filter)(const Bankaccount * const account))
{
    Bankaccount account;

    rewind(bank->f_clients);

    printf("%6s%25s%25s%15s\n", "Codice", "Nome", "Cognome", "Saldo");
    while(!feof(bank->f_clients)) {
        fread(&account, sizeof(Bankaccount), 1, bank->f_clients);

        if (account.id > 0 && filter(&account)) {
            bankaccount_print(&account);
            putchar('\n');
        }
    }
}


void bank_init(Bank * const bank, char * const filename)
{
    int i;
    Bankaccount account;

    bank->filename = filename;

    bank->f_clients = fopen(filename, "r+");
    if (!bank->f_clients) {
        printf("Il file clienti non esiste ... creazione in corso\n");
        bank->f_clients = fopen(filename, "w");
        if (!bank->f_clients) {
            fprintf(stderr, "Impossibile creare il file\n");
            exit(-1);
        }
        account = bankaccount_make(0, "", "", 0.);
        for (i = 0; i < BANK_CLIENTS_MAX; i++) {
            fseek(bank->f_clients, i*sizeof(Bankaccount), SEEK_SET);
            fwrite(&account, sizeof(Bankaccount), 1, bank->f_clients);
        }
        fclose(bank->f_clients);
        bank->f_clients = fopen(filename, "r+");
    }
}

void bank_close(const Bank * const bank)
{
    fclose(bank->f_clients);
}

void bank_showAll(const Bank * const bank)
{
    bank_showFiltered(bank, filterAll);
}

void bank_showZero(const Bank * const bank)
{
    bank_showFiltered(bank, filterZero);
}

void bank_showNegative(const Bank * const bank)
{
    bank_showFiltered(bank, filterNegative);
}

void bank_showPositive(const Bank * const bank)
{
    bank_showFiltered(bank, filterPositive);
}

void bank_updateClient(const Bank * const bank)
{
    int id = -1;
    char firstname[BUFFER_SIZE] = "";
    char lastname[BUFFER_SIZE] = "";
    double balance = 0.;
    Bankaccount account;
    int c;

    printf("ID: ");
    scanf("%d", &id);

    while ( (c=getchar()) != '\n' )
        ;
    
    if (id <= 0 || id >= BANK_CLIENTS_MAX) return;

    printf("Nome: ");
    safeString_input(firstname, BUFFER_SIZE);

    printf("Cognome: ");
    safeString_input(lastname, BUFFER_SIZE);

    printf("Saldo Iniziale: ");
    scanf("%lf", &balance);

    account = bankaccount_make(id, firstname, lastname, balance);
    bankaccount_write(bank->f_clients, &account);
}

void bank_update(Bank * const bank)
{
    int id = -1;
    double value = 0.;
    double balance = 0.;
    Bankaccount account;

    printf("ID: ");
    scanf("%d", &id);

    printf("+/- Value: ");
    scanf("%lf", &value);

    bankaccount_read(bank->f_clients, id, &account);
    balance = bankaccount_getBalance(&account);
    balance += value;
    bankaccount_setBalance(&account, balance);
        
    bankaccount_write(bank->f_clients, &account);
}
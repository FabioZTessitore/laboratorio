/* bank.c */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bank.h"
#include "bankaccount.h"
#include "utils.h"

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
    char buffer[BUFFER_SIZE] = "";
    Bankaccount account;

    rewind(bank->f_clients);

    printf("%6s%25s%25s%15s\n", "Codice", "Nome", "Cognome", "Saldo");
    while(!feof(bank->f_clients)) {
        fgets(buffer, BUFFER_SIZE, bank->f_clients);
        buffer[BUFFER_SIZE-1] = '\0';
        
        if (strlen(buffer) >  0) {
            account = bankaccount_parse(buffer);

            if (filter(&account)) {
                bankaccount_print(&account);
                putchar('\n');
            }
        }
    }
}


void bank_init(Bank * const bank, char * const filename)
{
    bank->filename = filename;

    bank->f_clients = fopen(filename, "r+");
    if (!bank->f_clients) {
        printf("Il file clienti non esiste ... creazione in corso\n");
        bank->f_clients = fopen(filename, "w");
        if (!bank->f_clients) {
            fprintf(stderr, "Impossibile creare il file\n");
            exit(-1);
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

void bank_insertClient(const Bank * const bank)
{
    int id = 0;
    char firstname[BUFFER_SIZE] = "";
    char lastname[BUFFER_SIZE] = "";
    double balance = 0.;
    char buffer[BUFFER_SIZE] = "";
    Bankaccount account;
    int currentId;
    int firstRecord = 1;

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

        if (strlen(buffer) >  0) {
            account = bankaccount_parse(buffer);
            currentId = bankaccount_getID(&account);
            if (currentId > id) {
                id = currentId;
            }

            firstRecord = 0;
        }
    }
    id++;
    account = bankaccount_make(id, firstname, lastname, balance);
    
    if (firstRecord != 1) fputc('\n', bank->f_clients);
    bankaccount_write(bank->f_clients, &account);
}

void bank_update(Bank * const bank)
{
    int id = 0;
    double value = 0.;
    double balance = 0.;
    char buffer[BUFFER_SIZE] = "";
    Bankaccount account;
    int currentId;
    FILE *f = tmpfile();
    int firstRecord = 1;

    printf("ID: ");
    scanf("%d", &id);

    printf("+/- Value: ");
    scanf("%lf", &value);

    /* copia tutti i dati in un file temporaneo
     * sostituendo quello in corso di modifica
     * con il dato aggiornato
     */
    rewind(bank->f_clients);
    while(!feof(bank->f_clients)) {
        fgets(buffer, BUFFER_SIZE, bank->f_clients);
        buffer[BUFFER_SIZE-1] = '\0';

        if (strlen(buffer) > 0) {
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
    }
    fclose(bank->f_clients);
    
    /* ricopia i dati dal file termporaneo al file dati */
    rewind(f);
    firstRecord = 1;
    bank->f_clients = fopen(bank->filename, "w");
    while(!feof(f)) {
        fgets(buffer, BUFFER_SIZE, f);
        buffer[BUFFER_SIZE-1] = '\0';

        if (strlen(buffer) > 0) {
            account = bankaccount_parse(buffer);
            if (firstRecord != 1) fputc('\n', bank->f_clients);
            bankaccount_write(bank->f_clients, &account);
        
            firstRecord = 0;
        }
    }
    fclose(bank->f_clients);
    fclose(f);

    bank->f_clients = fopen(bank->filename, "r+");
}
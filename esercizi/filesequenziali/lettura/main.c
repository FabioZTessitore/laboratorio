/* main.c */

/* Lettura di record da un file sequenziale */

#include <stdio.h>
#include "bankaccount.h"

#define BUFFER_SIZE 80

int main(void)
{
    Bankaccount account;
    FILE *f;
    char buffer[BUFFER_SIZE];

    printf("Lettura da un file sequenziale\n");

    f = fopen("clienti.dat", "r");
    if (!f) {
        fprintf(stderr, "Impossibile aprire il file\n");
        return -1;
    }

    printf("%6s%25s%25s%15s\n", "Codice", "Nome", "Cognome", "Saldo");
    while(!feof(f)) {
        fgets(buffer, BUFFER_SIZE, f);
        buffer[BUFFER_SIZE-1] = '\0';

        account = bankaccount_parse(buffer);
        bankaccount_print(&account);
    }

    fclose(f);
    
    return 0;
}
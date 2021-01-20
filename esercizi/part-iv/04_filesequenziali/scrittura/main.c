/* main.c */

/* Scrittura di record in file sequenziale */

#include <stdio.h>
#include "bankaccount.h"
#include "utils.h"

#define BUFFER_SIZE 80

int main(void)
{
    int id = 0;
    char firstname[BUFFER_SIZE] = "";
    char lastname[BUFFER_SIZE] = "";
    double balance = 0.;
    Bankaccount account;
    FILE *f;
    char buffer[BUFFER_SIZE];
    int temp;

    printf("Scrittura in file sequenziali\n");

    /* input dati nuovo conto */
    printf("Codice conto: ");
    scanf("%d", &id);
    while ( (temp = getchar()) != '\n')
        ;

    printf("Nome: ");
    strSafeInput(firstname, BUFFER_SIZE);

    printf("Cognome: ");
    strSafeInput(lastname, BUFFER_SIZE);

    printf("Saldo Iniziale: ");
    scanf("%lf", &balance);

    /* creazione del conto */
    account = bankaccount_make(id, firstname, lastname, balance);

    f = fopen("clienti.dat", "r+");
    if (!f) {
        fprintf(stderr, "Impossibile aprire il file\n");
        return -1;
    }

    /* si sposta alla fine del file */
    fseek(f, 0L, SEEK_END);
    /* equivalente a:
     *
     * while(!feof(f)) {
     *   fgets(buffer, BUFFER_SIZE, f);
     * }
     */
    
    /* aggiunge il nuovo conto al file */
    printf("Scrittura file in corso ...\n");
    fputc('\n', f);
    bankaccount_write(f, &account);

    /* torna all'inizio del file e legge tutti i dati */
    rewind(f);
    printf("%6s%25s%25s%15s\n", "Codice", "Nome", "Cognome", "Saldo");
    while(!feof(f)) {
        fgets(buffer, BUFFER_SIZE, f);
        buffer[BUFFER_SIZE-1] = '\0';

        account = bankaccount_parse(buffer);

        bankaccount_print(&account);
        putchar('\n');
    }

    fclose(f);
    
    return 0;
}
/* main.c */

/* Scrittura di record in file sequenziale */

#include <stdio.h>
#include "ui.h"
#include "bank.h"

#define BUFFER_SIZE 80

int main(void)
{
    int choice;
    int done = 0;
    Bank bank;

    bank_init(&bank, "clienti.dat");

    while (!done) {
        choice = menu();

        switch (choice) {
            case 1:
                bank_showAll(&bank);
                break;
            case 2:
                bank_showZero(&bank);
                break;
            case 3:
                bank_showNegative(&bank);
                break;
            case 4:
                bank_showPositive(&bank);
                break;
            case 5:
                bank_insertClient(&bank);
                break;
            case 6:
                bank_update(&bank);
                break;
            case 7:
                done = 1;
                break;
            default:
                puts("Scelta non valida!");
                break;
        }
    }

    bank_close(&bank);

    return 0;
}
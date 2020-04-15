/* ui.c */

#include <stdio.h>
#include "ui.h"
#include "bank.h"

int ui_menu(void);

void ui_init(UI * const ui, Bank * const bank)
{
    ui->bank = bank;
}

void ui_run(const UI * const ui)
{
    int choice;
    int done = 0;

    while (!done) {
        choice = ui_menu();

        switch (choice) {
            case 1:
                bank_showAll(ui->bank);
                break;
            case 2:
                bank_showZero(ui->bank);
                break;
            case 3:
                bank_showNegative(ui->bank);
                break;
            case 4:
                bank_showPositive(ui->bank);
                break;
            case 5:
                bank_updateClient(ui->bank);
                break;
            case 6:
                bank_update(ui->bank);
                break;
            case 7:
                done = 1;
                break;
            default:
                puts("Scelta non valida!");
                break;
        }
    }

    bank_close(ui->bank);
}

int ui_menu(void)
{
    int choice = -1;
    int choiceNotValid = 0;
    int temp;
    
    do {
        puts("Scegli:");
        puts("1 - Mostra tutti i clienti");
        puts("2 - Mostra i conti zero");
        puts("3 - Mostra i conti in rosso");
        puts("4 - Mostra i conti in attivo");
        puts("5 - Modifica dati cliente");
        puts("6 - Prelievo/Deposito");
        puts("7 - Esci");
        printf("? ");
        scanf("%d", &choice);

        choiceNotValid = choice < 1 || choice > 7;

        if (choiceNotValid) {
            puts("Scelta non valida!");
        }
    } while (choiceNotValid);

    while ( (temp=getchar()) != '\n' )
        ;

    return choice;
}
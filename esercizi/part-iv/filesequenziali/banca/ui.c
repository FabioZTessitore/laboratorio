/* ui.c */

#include <stdio.h>
#include "ui.h"

int menu(void)
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
        puts("5 - Inserisci un nuovo cliente");
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
/* main.c */

/* Scrittura di record in file sequenziale */

#include "ui.h"
#include "bank.h"

int main(void)
{
    Bank bank;
    UI ui;

    /* La Bank viene creata nel main e passata alla UI
     * perche' allo stato attuale del corso la UI non
     * puo' creare una Bank dinamicamente
     */
    bank_init(&bank, "clienti.dat");
    ui_init(&ui, &bank);

    ui_run(&ui);
    
    return 0;
}
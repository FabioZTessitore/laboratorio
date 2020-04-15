/* main.c */

/* Scrittura di record in file sequenziale */

#include <stdio.h>
#include "ui.h"
#include "bank.h"

#define BUFFER_SIZE 80

int main(void)
{
    Bank bank;
    UI ui;

    bank_init(&bank, "clienti.dat");
    ui_init(&ui, &bank);

    ui_run(&ui);
    
    return 0;
}
/* somma.c */

/* somma di numeri interi (NCurses) */

#include <ncurses.h>

int main()
{
    /* variabili di input, due interi */
    int num1;
    int num2;

    /* variabile di output, le somma degli interi */
    int somma;

    /* inizializza il terminale per l'utilizzo con NCurses */
    initscr();
    curs_set(1);  /* rende visibile il cursore */
    echo();       /* rende visibili i caratteri digitati dall'utente */

    mvprintw(3, 5, "Somma di due interi");
    refresh();

    /* input */
    mvprintw(7, 5, "Primo addendo: ");
    refresh();
    scanw("%d", &num1);
    mvprintw(9, 5, "Secondo addendo: ");
    refresh();
    scanw("%d", &num2);

    somma = num1 + num2;

    /* output */
    mvprintw(12, 5, "Somma: ");
    attron(A_STANDOUT);
    printw("%d", somma);
    attroff(A_STANDOUT);
    refresh();

    mvprintw(18, 5, "Premi un tasto per uscire");
    refresh();

    getch();

    endwin();

    return 0;
}
/* hello.c */

/* Stampa utilizzando la libreria NCurses */

/* Istruzioni per la compilazione e l'esecuzione:
 *
 * Compilazione:
 * $ gcc -c hello.c -o hello.o
 *
 * Link:
 * $ gcc hello.o -o hello -lncurses
 *
 * Esecuzione:
 * $ ./hello
 */

#include <ncurses.h>

int main()
{	
    /* inizializza il terminale per l'utilizzo con NCurses */
    initscr();

    /* controlla se il terminale gestisce i colori */
    if (has_colors() == FALSE) {
        endwin();
        printf("Il terminale non gestisce i colori. Bye\n");
        return 1;
    }

    /* inizializza il sistema dei colori */
    start_color();

    /* crea una coppia di colori, testo nero su sfondo giallo */
    init_pair(1, COLOR_BLACK, COLOR_YELLOW);

    /* attiva i colori */
    attron(COLOR_PAIR(1));
    /* stampa sullo schermo virtuale */
    mvprintw(4, 4, "Hello, World! (a colori)");
    /* disattiva i colori */
    attroff(COLOR_PAIR(1));

    /* sottolineato */
    attron(A_UNDERLINE);
    /* stampa sullo schermo virtuale */
    mvprintw(9, 4, "Hello, World! (sottolineato)");
    /* disattiva sottolineato */
    attroff(A_UNDERLINE);

    /* grassetto */
    attron(A_BOLD);
    /* stampa sullo schermo virtuale */
    mvprintw(14, 4, "Hello, World! (grassetto)");
    /* disattiva grassetto */
    attroff(A_BOLD);

    /* in evidenza al meglio che puo' fare il terminale in uso */
    attron(A_STANDOUT);
    mvprintw(19, 4, "In evidenza!!!");
    attroff(A_STANDOUT);

    /* attende un input prima di chiudere.
     * Questa e' l'ultima stampa, quindi effettua anche il refresh
     */
    mvprintw(22, 4, "Premi un tasto per uscire");
    refresh();
    getch();

    /* pulisce */
    endwin();

    return 0;
}
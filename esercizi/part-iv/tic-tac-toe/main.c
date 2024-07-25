/* main.c */

/* Tic Tac Toe */

/* Istruzioni di compilazione ed esecuzione:
 *
 * $ make
 * $ ./tictactoe
 */

#include "tictactoe.h"

int main()
{
    TTTGame game;

    ttt_init(&game);

    ttt_instructions();

    ttt_configure(&game);

    ttt_play(&game);

    return 0;
}
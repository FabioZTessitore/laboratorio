/* board.c */

#include <stdio.h>
#include "board.h"

Board board_make()
{
    Board b;
    int i;

    for (i = 0; i < 9; i++) {
        b.cells[i] = ' ';
    }

    return b;
}

void board_print(const Board * const board)
{
    int i;

    for (i = 0; i < 9; i++) {
        putchar(board->cells[i]);
        if ((i+1)%3 == 0) putchar('\n');
    }
}

int board_update(Board * const board, int piece, int move)
{
    if (board->cells[move] != ' ')  return -1;

    board->cells[move] = piece;
    return 0;
}
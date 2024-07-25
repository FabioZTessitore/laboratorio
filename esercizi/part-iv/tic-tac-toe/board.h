/* board.h */

#ifndef BOARD_H
#define BOARD_H

struct board {
    int cells[9];
};

typedef struct board Board;

Board board_make();
void board_print(const Board * const board);
int board_update(Board * const board, int piece, int move);

#endif
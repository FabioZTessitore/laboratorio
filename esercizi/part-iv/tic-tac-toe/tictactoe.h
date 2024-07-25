/* tictactoe.h */

#ifndef TICTACTOE_H
#define TICTACTOE_H

#include "board.h"

struct ttt_game {
    Board board;
    int turn;
    int human;
    int computer;
    int is_running;
};
typedef struct ttt_game TTTGame;

void ttt_init(TTTGame * const game);
void ttt_configure(const TTTGame * const game);

void ttt_instructions();

int ttt_first_player();

int ttt_get_human_move();
int ttt_get_computer_move(const Board * const board);

int ttt_check(const Board * const board);

void ttt_play(const TTTGame * const game);

#endif
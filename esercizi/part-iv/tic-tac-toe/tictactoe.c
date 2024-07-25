/* tictactoe.c */

#include <stdio.h>
#include "tictactoe.h"
#include "board.h"

void ttt_init(TTTGame * const game)
{
    game->board = board_make();

    game->turn = 0;
    game->human = 'X';
    game->computer = 'O';

    game->is_running = true;
}

void ttt_instructions()
{
    puts("Tic Tac Toe\n");
}

void ttt_configure(const TTTGame * const game)
{
    /* turn:
        0: Player has X and start the game
        1: Computer has X and start the game
    */
    game->turn = ttt_first_player();
    if (game->turn == 0) {
        game->human = 'X';
        game->computer = 'O';
    } else {
        game->human = 'O';
        game->computer = 'X';
    }
}

int ttt_first_player()
{
    int turn = 0;

    puts("\nPlease Choice:\n");
    puts("1 - X");
    puts("2 - O");
    puts("X start");

    do {
        printf("? ");
        scanf("%d", &turn);
    } while (turn != 1 && turn != 2);

    return turn-1;
}

int ttt_get_human_move()
{
    int move;

    printf("move: ");
    scanf("%d", &move);

    return move;
}

int ttt_get_computer_move()
{
    /* per ogni cella, cerca la prima che permette la vittoria */

    /* per ogni cella, cerca la prima che blocca la vittoria dell'umano */

    /* scegli la prima cella tra quelle preferite */
    
    return 1;
}

int ttt_check(const Board * const board)
{
    return 1;
}

void ttt_play(const TTTGame * const game)
{
    int move;
    int valid;

    board_print(&(game->board));

    while (game->is_running) {
        if (game->turn == 0) {
            do {
                move = ttt_get_human_move();
                valid = board_update(&(game->board), game->human, move);
            } while (valid != 0);
        } else {
            move = ttt_get_computer_move(&(game->board));
            board_update(&(game->board), game->computer, move);
        }
    
        board_print(&(game->board));
        game->turn = 1 - game->turn;

        game->is_running = ttt_check(&(game->board));
    }
}
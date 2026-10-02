#ifndef GAME_H
#define GAME_H

#define ROWS 4 
#define COLS 8
#define USER_SYMBOL 'P'

enum Move { LEFT, RIGHT, UP, DOWN, INVALID };

void run();
void start();
Move chartToMove(char);
bool validMove(Move);
void makeMove(Move);

#endif // GAME_H
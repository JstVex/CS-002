#ifndef GAME_FUNCTIONS_H
#define GAME_FUNCTIONS_H
#include "ConsoleManager.h"
void run_game();

void ask_player(std::string player, char board[][3], int &x, int &y,
                int &round);

// Check game state functions
bool game_is_not_complete(int round);
bool coordinate_is_empty(char array_coordiantes);
bool is_won(char board[][3], int size, int x_coordinate, int y_coordinate,
            std::string player);
bool row_matches(int x_coordinate, int y_coordintae, char board[][3], int size);
bool column_matches(int x_coordinate, int y_coordinate, char board[][3],
                    int size);
bool diagonal_matches(int x_coordinate, int y_coordinate, char board[][3],
                      int size);
bool is_in_range(int x, int y);

#endif
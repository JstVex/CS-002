#include "GameFunctions.h"

void run_game() {
    // board[y][x]
    // y flies x walks
    char board[3][3] = {
            {'\0', '\0', '\0'},
            {'\0', '\0', '\0'},
            {'\0', '\0', '\0'},
    };
    int round = 0;

    while (game_is_not_complete(round)) {
        int x, y;
        print_board(board, 3);

        ask_player("Player 1", board, x, y, round);
        if (is_won(board, 3, x, y, "Player 1"))
            break;

        if (round == 9)
            break;

        print_board(board, 3);
        ask_player("Player 2", board, x, y, round);
        if (is_won(board, 3, x, y, "Player 2"))
            break;
        console_output(round);
    }

    if (is_equal(round, 9)) {
        print_board(board, 3);
        console_output("Unfortunately, the game ends in a tie :(");
        new_line();
    }
}

// Ask player to input a coordinate of a non-empty board
void ask_player(std::string player, char board[][3], int &x, int &y,
                int &round) {
    console_output(player +
                   ": Please enter an x and y coordinate (top left = 1,1)");
    new_line();
    get_coordinates(x, y);

    while (!is_in_range(x, y)) {
        console_output("Please enter a value from 1-3, for x and 1-3 for y");
        get_coordinates(x, y);
    }

    while (!coordinate_is_empty(board[y - 1][x - 1])) {
        console_output("Please choose a coordinate that is not taken. ");
        new_line();
        get_coordinates(x, y);
    }

    if (player == "Player 1") {
        board[y - 1][x - 1] = 'x';
    } else {
        board[y - 1][x - 1] = 'o';
    }

    round++;
}

// Check game state functions
bool game_is_not_complete(int round) { return round != 9; }

bool coordinate_is_empty(char array_coordinates) {
    return array_coordinates == '\0';
}

// this function will check the boards and print a win statement + print the
// board if someone won.
bool is_won(char board[][3], int size, int x_coordinate, int y_coordinate,
            std::string player) {
    if (row_matches(x_coordinate, y_coordinate, board, size)) {
        print_board(board, size);
        new_line();
        console_output(player + " Won! ");
        new_line();
        return true;
    }
    if (column_matches(x_coordinate, y_coordinate, board, size)) {
        print_board(board, size);
        new_line();
        console_output(player + " Won! ");
        new_line();
        return true;
    }

    if (diagonal_matches(x_coordinate, y_coordinate, board, size)) {
        print_board(board, size);
        new_line();
        console_output(player + " Won! ");
        new_line();
        return true;
    }

    return false;
}

bool row_matches(int x_coordinate, int y_coordinate, char board[][3],
                 int size) {
    const char to_match = board[y_coordinate - 1][x_coordinate - 1];
    bool matches = false;

    if (board[y_coordinate - 1][0] == to_match &&
        board[y_coordinate - 1][1] == to_match &&
        board[y_coordinate - 1][2] == to_match) {
        matches = true;
    }
    return matches;
}

bool column_matches(int x_coordinate, int y_coordinate, char board[][3],
                    int size) {
    const char to_match = board[y_coordinate - 1][x_coordinate - 1];
    bool matches = false;

    if (board[0][x_coordinate - 1] == to_match &&
        board[1][x_coordinate - 1] == to_match &&
        board[2][x_coordinate - 1] == to_match) {
        matches = true;
    }

    return matches;
}

bool diagonal_matches(int x_coordinate, int y_coordinate, char board[][3],
                      int size) {
    const char to_match = board[y_coordinate - 1][x_coordinate - 1];
    bool matches = false;

    if (board[2][2] == to_match && board[0][0] == to_match &&
        board[1][1] == to_match) {
        matches = true;
    } else if (board[2][0] == to_match && board[0][2] == to_match &&
               board[1][1] == to_match) {
        matches = true;
    } else {
        matches = false;
    }
    return matches;
}

bool is_in_range(int x, int y) { return x >= 1 && x <= 3 && y >= 1 && y <= 3; }

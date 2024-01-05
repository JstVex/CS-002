#include "ConsoleManager.h"

void console_output(const std::string &message) { std::cout << message; }

void console_output(char character) { std::cout << character; }

void console_output(int integer) { std::cout << integer; }

void print_board(char board[][3], int size) {
    print_line(13, "-");
    new_line();
    for (int y = 0; y < size; y++) {
        console_output("| ");
        for (int x = 0; x < 3; x++) {
            if (board[y][x] == '\0')
                console_output(' ');
            else
                console_output(board[y][x]);
            console_output(" | ");
        }
        new_line();
        print_line(13, "-");
        new_line();
    }
}

void print_line(int line_size, std::string desired_line_character) {
    std::string line = "";
    for (int i = 0; i < line_size; i++)
        line += desired_line_character;
    console_output(line);
}

// get input from user
void get_coordinates(int &x, int &y) {
    char temp = '\0';
    std::cin >> x >> temp >> y;
}

void get_input(char &character) { std::cin >> character; }

void new_line() { std::cout << "\n"; }

// check functions
bool is_equal(int test_case, int desired_output) {
    return test_case == desired_output;
}

bool is_equal(char character, char desired_character) {
    return std::tolower(character) == desired_character;
}
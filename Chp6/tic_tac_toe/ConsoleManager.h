#ifndef CONSOLE_MANAGER_H
#define CONSOLE_MANAGER_H
#include <iostream>

// print functions
void console_output(const std::string &message);
void console_output(char character);
void console_output(int integer);
void print_board(char board[][3], int size);
void print_line(int line_size, std::string desired_line_character);

// Get input functions
void get_coordinates(int &x, int &y);
void get_input(char &character);

// endline or \n
void new_line();

// check functions
bool is_equal(int test_case, int desired_output);
bool is_equal(char character, char desired_character);

#endif
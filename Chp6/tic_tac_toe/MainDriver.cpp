#include "MainDriver.h"

void run_tic_tac_toe ()
{
    char to_continue = 'n';

    do
    {
        console_output("Group tic-tac-toe :D "); new_line();
        print_line(40,"=");new_line();
        run_game();
        console_output("Would you like to play again? "); new_line();
        get_input(to_continue);
    }
    while (is_equal(to_continue, 'y'));

    console_output("Deuces!");

}
#include <iostream>

char board[3][3] = {{'1', '2', '3'},
                    {'4', '5', '6'},
                    {'7', '8', '9'}};

char currentPlayer = 'X';

void displayBoard()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << board[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

bool checkWin()
{
    for (int i = 0; i < 3; i++) {
        if ((board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] == currentPlayer) ||
            (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] == currentPlayer)) {
            return true;
        }
    }

    if ((board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] == currentPlayer) ||
        (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] == currentPlayer)) {
        return true;
    }

    return false;
}

bool checkTie() {
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] != 'X' && board[i][j] != 'O') {
                return false;
            }
        }
    }
    return true;
}

void makeMove(int position)
{
    int row = (position - 1) / 3;
    int col = (position - 1) % 3;

    if (board[row][col] == 'X' || board[row][col] == 'O')
    {
        std::cout << "Invalid move. Cell already taken. Try again.\n";
    } else
    {
        board[row][col] = currentPlayer;
        if (currentPlayer == 'X')
        {
            currentPlayer = 'O';
        } else {
            currentPlayer = 'X';
        }
    }
}

int main() {
    int move;

    do {
        displayBoard();

        std::cout << "Player " << currentPlayer << ", enter your move (1-9): ";
        std::cin >> move;

        makeMove(move);

        if (checkWin()) {
            displayBoard();
            std::cout << "Player " << currentPlayer << " wins!\n";
            break;
        } else if (checkTie())
        {
            displayBoard();
            std::cout << "It's a tie!\n";
            break;
        }
    } while (true);

    return 0;
}

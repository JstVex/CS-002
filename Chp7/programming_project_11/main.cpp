#include <iostream>

const int rows = 7;
const int cols = 4;

void displaySeats(char seats[][cols]) {
    std::cout << "  A B C D" << std::endl;
    for (int i = 0; i < rows; i++) {
        std::cout << i + 1 << " ";
        for (int j = 0; j < cols; j++) {
            std::cout << seats[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

bool isSeatAvailable(char seats[][cols], int row, char col) {
    return seats[row - 1][col - 'A'] != 'X';
}

// Function to mark a seat as occupied
void occupySeat(char seats[][cols], int row, char col) {
    seats[row - 1][col - 'A'] = 'X';
}

bool areAllSeatsFilled(char seats[][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (seats[i][j] != 'X') {
                return false;
            }
        }
    }
    return true;
}

int main() {
    char seats[rows][cols];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            seats[i][j] = ' ';
        }
    }

    char choice;
    do {
        displaySeats(seats);

        if (areAllSeatsFilled(seats)) {
            std::cout << "All seats are filled" << std::endl;
            break;
        }

        int row;
        char col;
        std::cout << "Enter the row and seat (eg. 1A): ";
        std::cin >> row >> col;

        if (isSeatAvailable(seats, row, col)) {
            occupySeat(seats, row, col);
            std::cout << "Seat " << row << col << " assigned successfully." << std::endl;
        } else {
            std::cout << "Seat " << row << col << " is already occupied. Please choose another seat." << std::endl;
        }

        std::cout << "Do you want to assign another seat? (y/n): ";
        std::cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}

#include <iostream>
#include <cstdlib>

const int rows = 22;
const int cols = 80;

void display(char world[][cols]) {
    system("clear");  // Clear the console (for Unix-like systems)
    // system("cls"); // Use this for Windows

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << world[i][j];
        }
        std::cout << std::endl;
    }
}

int countNeighbors(char world[][cols], int row, int col) {
    int count = 0;
    for (int i = -1; i <= 1; ++i) {
        for (int j = -1; j <= 1; ++j) {
            if (i == 0 && j == 0) continue;  // Skip the current cell
            int newRow = row + i;
            int newCol = col + j;

            // Check boundaries
            if (newRow >= 0 && newRow < rows && newCol >= 0 && newCol < cols) {
                if (world[newRow][newCol] == '*') {
                    ++count;
                }
            }
        }
    }
    return count;
}

void generation(char world[][cols]) {
    char newWorld[rows][cols];

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            int neighbors = countNeighbors(world, i, j);

            if (world[i][j] == '*' && (neighbors <= 1 || neighbors > 3)) {
                newWorld[i][j] = ' ';  // Cell dies
            } else if (world[i][j] == ' ' && neighbors == 3) {
                newWorld[i][j] = '*';  // Cell is born
            } else {
                newWorld[i][j] = world[i][j];  // Cell stays the same
            }
        }
    }

    // Copy the new generation to the original array
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            world[i][j] = newWorld[i][j];
        }
    }
}

// Simple delay function using iterations
void simpleDelay(int iterations) {
    for (volatile int i = 0; i < iterations; ++i) {
        // Do nothing (busy-waiting)
    }
}

int main() {
    char world[rows][cols] = { ' ' }; // Initialize all cells as empty

    // Set an initial configuration (example)
    world[10][40] = '*';
    world[11][41] = '*';
    world[12][39] = '*';
    world[12][40] = '*';
    world[12][41] = '*';

    char input;
    do {
        display(world);
        generation(world);

        // Add a delay before the next generation (for visibility)
        simpleDelay(1000000); // Adjust the number of iterations as needed

        std::cout << "Press Enter to continue (or 'q' to quit): ";
        std::cin.get(input);

    } while (input != 'q' && input != 'Q');

    return 0;
}

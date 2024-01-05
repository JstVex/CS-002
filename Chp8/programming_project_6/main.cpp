#include <iostream>
#include <cctype>

void replaceDigitsWithX(std::string& line) {
    bool inWord = false, changed = false;

    for (int i = 0; i < line.size(); ++i) {
        char ch = line[i];

        if (!changed)
        {
            if (std::isdigit(ch) && (std::isalpha(line[i-1]) || std::isalpha(line[i+1])))
            {
                inWord = true;
            }
        } else
        {
            if (std::isdigit(ch) && std::isalpha(line[i+1]))
            {
                inWord = true;
            }
        }

        if(inWord)
        {
            if(std::isspace(ch))
                inWord = false;
        }

        if (!inWord && std::isdigit(ch)) {
            line[i] = 'x';
            changed = true;
        }
    }
}

int main() {
    std::string line;
    char repeat;

    do {
        std::cout << "Enter a line of text: ";
        std::getline(std::cin, line);

        replaceDigitsWithX(line);

        std::cout << "Output:\n" << line << std::endl;

        std::cout << "Do you want to repeat? (y/n): ";
        std::cin >> repeat;

        // Clear the input buffer
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    } while (std::tolower(repeat) == 'y');

    return 0;
}

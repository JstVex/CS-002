#include <iostream>
#include <cctype>

void processSentence(char sentence[]) {
    bool capitalizeNextWord = true;

    for (int i = 0; sentence[i] != '\0'; ++i) {
        if (std::isalpha(sentence[i])) {
            if (capitalizeNextWord) {
                sentence[i] = std::toupper(sentence[i]);
                capitalizeNextWord = false;
            } else {
                sentence[i] = std::tolower(sentence[i]);
            }
        } else if (std::isspace(sentence[i]) || sentence[i] == '\n') {
            while (std::isspace(sentence[i + 1]) || sentence[i + 1] == '\n') {
                for (int j = i + 1; sentence[j] != '\0'; j++) {
                    sentence[j] = sentence[j + 1];
                }
            }
        }
    }
}

int main() {
    int maxLength = 100;
    char sentence[maxLength];

    std::cout << "Enter a sentence up to 100 characters: ";
    std::cin.getline(sentence, maxLength);

    processSentence(sentence);

    std::cout << "The corrected sentence is: " << sentence << std::endl;

    return 0;
}

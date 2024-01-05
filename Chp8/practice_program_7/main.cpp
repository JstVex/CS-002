#include <iostream>
#include <string>

// Function to convert a name to Pig Latin
std::string convertToPigLatin(const std::string &name)
{
    char firstLetter = name[0];

    if (firstLetter == 'a' || firstLetter == 'e' || firstLetter == 'i' || firstLetter == 'o' || firstLetter == 'u')
    {
        return name + "way";
    } else {
        return name.substr(1) + firstLetter + "ay";
    }
}

int main() {
    std::string first, last;

    std::cout << "Enter your first name: ";
    std::cin >> first;

    std::cout << "Enter your last name: ";
    std::cin >> last;

    // Convert entire names to lowercase
    std::transform(first.begin(), first.end(), first.begin(), ::tolower);
    std::transform(last.begin(), last.end(), last.begin(), ::tolower);

    std::string pigLatinFirst = convertToPigLatin(first);
    std::string pigLatinLast = convertToPigLatin(last);

    // capitalize the first letter of each Pig Latin name
    pigLatinFirst[0] = toupper(pigLatinFirst[0]);
    pigLatinLast[0] = toupper(pigLatinLast[0]);

    // Print the Pig Latin full name
    std::cout << "Pig Latin name is " << pigLatinFirst << " " << pigLatinLast << std::endl;

    return 0;
}

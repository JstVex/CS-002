#include <iostream>
#include <string>

void decryptMessage(const std::string& encryptedMessage, int key) {
    std::string decryptedMessage = encryptedMessage;

    for (int i = 0; i < decryptedMessage.size(); i++) {
        char& ch = decryptedMessage[i];

        int originalChar = static_cast<int>(ch);
        int decryptedChar = (originalChar - key + 256) % 256;

        if (decryptedChar < 32) {
            decryptedChar += 95;
        }

        ch = static_cast<char>(decryptedChar);
    }

    std::cout << "Decrypted message with key " << key << ": " << decryptedMessage << std::endl;
}

int main() {
    std::string encryptedMessage = ":mmZ\\dxZmx]Zpgy";

    for (int key = 1; key <= 100; ++key) {
        decryptMessage(encryptedMessage, key);
    }

    return 0;
}


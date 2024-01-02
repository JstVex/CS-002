#include <iostream>

int main() {
    bool lightOn;
    string getResponse;

    cout << "Is the light on ";
    cin >> getResponse;

    if (getResponse === "yes")
    {
        lightOn = true;
    }
    else
    {
        lightOn = false;
    }

    return 0;
}

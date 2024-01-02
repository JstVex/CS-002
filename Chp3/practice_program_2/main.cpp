#include <iostream>

int main() {
    char repeat;

    do {
        double accountBalance, interestDue, totalAmountDue, minimumPayment;

        std::cout << "Enter the account balance: ";
        std::cin >> accountBalance;

        if (accountBalance <= 1000) {
            interestDue = accountBalance * 0.015;
        } else {
            interestDue = 1000 * 0.015 + (accountBalance - 1000) * 0.01;
        }

        totalAmountDue = accountBalance + interestDue;

        if (totalAmountDue <= 10) {
            minimumPayment = totalAmountDue;
        } else if (totalAmountDue * 0.1 >= 10) {
            minimumPayment = totalAmountDue * 0.1;
        } else {
            minimumPayment = 10;
        }

        std::cout << "Interest Due: "  << interestDue << std::endl;
        std::cout << "Total Amount Due: " << totalAmountDue << std::endl;
        std::cout << "Minimum Payment: " << minimumPayment << std::endl;

        std::cout << "Do you want to calculate again?: ";
        std::cin >> repeat;

    } while (repeat == 'y' || repeat == 'Y');

    return 0;
}

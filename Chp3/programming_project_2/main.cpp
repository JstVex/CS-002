#include <iostream>
#include <cmath>

int main() {
    char repeat;

    do {
        double a, b, c;
        double discriminant;
        double root1, root2;

        std::cout << "Enter a, b and c of the quadratic equation: ";
        std::cin >> a >> b >> c;

        discriminant = (b * b) - (4 * a * c);

        if (discriminant > 0) {
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);

            std::cout << "Root 1: " << root1 << std::endl;
            std::cout << "Root 2: " << root2 << std::endl;
        } else if (discriminant == 0) {
            root1 = -b / (2 * a);

            std::cout << "Single real root: " << root1 << std::endl;
        } else {

        }

        std::cout << "Do you want to calculate again?: ";
        std::cin >> repeat;

    } while (repeat == 'y' || repeat == 'Y');

    return 0;
}

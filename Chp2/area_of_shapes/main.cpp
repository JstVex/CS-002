#include <iostream>
#include <cmath>

int main() {
    double length = 0.0;
    double height = 0.0;
    double base = 0.0;
    double radius = 0.0;
    double rectangleArea;
    double triangleArea;
    double circleArea;

    std::cout << "Enter the length: ";
    std::cin >> length;

    std::cout << "Enter the height: ";
    std::cin >> height;

    std::cout << "Enter the base: ";
    std::cin >> base;

    std::cout << "Enter the radius: ";
    std::cin >> radius;

    rectangleArea = length * height;
    std::cout << "The area of the rectangle is " << rectangleArea << std::endl;

    triangleArea = (0.5 * base ) * height;
    std::cout << "The area of the triangle is " << triangleArea << std::endl;

    circleArea = M_PI * pow(radius, 2);
    std::cout << "The area of the circle is " << circleArea << std::endl;

    return 0;
}

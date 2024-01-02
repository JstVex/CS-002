#include <iostream>
#include <cmath>

int main() {
    const double weightOfWater = 62.4;

    double sphereWeight, radius, volume, buoyantForce;

    std::cout << "Enter the weight of the sphere: ";
    std::cin >> sphereWeight;

    std::cout << "Enter the radius of the sphere: ";
    std::cin >> radius;

    volume = (4.0 / 3.0) * M_PI * std::pow(radius, 3);

    buoyantForce = weightOfWater * volume;

    if (buoyantForce >= sphereWeight) {
        std::cout << "The sphere will float in water" << std::endl;
    } else {
        std::cout << "The sphere will sink in water" << std::endl;
    }

    return 0;
}
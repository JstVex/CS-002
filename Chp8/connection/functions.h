//
// Created by Hein Htet Lu Lu on 30/11/2023.
//

#ifndef CONNECTION_FUNCTIONS_H
#define CONNECTION_FUNCTIONS_H
#include <SFML/Graphics.hpp>

namespace Connection
{
    void bounce(sf::Shape &shape, sf::Vector2u winSize, sf::Vector2f &velocity);
}
#endif //CONNECTION_FUNCTIONS_H

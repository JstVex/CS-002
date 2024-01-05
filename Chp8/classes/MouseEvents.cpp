//
// Created by Hein Htet Lu Lu on 30/11/2023.
//

#include "MouseEvents.h"

bool MouseEvents::isClicked(sf::Shape &shape, sf::RenderWindow &window)
{
    sf::Vector2f mpos = (sf::Vector2f) sf::Mouse::getPosition(window);

    // return true if mouse is hover on the shape and is clicked
    return shape.getGlobalBounds().contains(mpos) &&
        sf::Mouse::isButtonPressed(sf::Mouse::Left);
}


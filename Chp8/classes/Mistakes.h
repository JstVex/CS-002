//
// Created by Hein Htet Lu Lu on 06/12/2023.
//

#ifndef CLASSES_MISTAKES_H
#define CLASSES_MISTAKES_H

#include <SFML/Graphics.hpp>
#include <vector>
#include "Position.h"

class Mistakes : public sf::Drawable
{
private:
    sf::Text text;
    std::vector<sf::CircleShape> circles; // need 4 circle
    sf::Clock clock; // make circle smaller until it disappear
    bool shrinking = false;
    sf::Font font;

public:
    Mistakes();

    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;
    void markDown(); // mark down is basically remove one of the circle if user submits wrong
    void update();
    void setPosition(sf::Vector2f position);
    int getRemainingCircles();
};

#endif //CLASSES_MISTAKES_H

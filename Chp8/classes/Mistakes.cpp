//
// Created by Hein Htet Lu Lu on 06/12/2023.
//

#include "Mistakes.h"

Mistakes::Mistakes()
: circles(4, sf::CircleShape(5.f))
{
    if (!font.loadFromFile("OpenSans-Regular.ttf"))
    {
        exit(3);
    }
    text.setFont(font);
    text.setString("Mistakes Remaining");
    text.setCharacterSize(20);

//    Position::right(text, circles[0]);
    circles[0].setPosition(text.getPosition());
    circles[0].move(text.getGlobalBounds().width + 10.f, 0);

    for (int i = 1; i < circles.size(); i++)
    {
        Position::right(circles[i-1], circles[i], 10.f);
    }
}

void Mistakes::draw(sf::RenderTarget& window, sf::RenderStates states) const
{
    states.transform = text.getTransform();
    window.draw(text);
    for (int i = 0; i < circles.size(); i++)
        window.draw(circles[i], states);
}

void Mistakes::markDown()
{
    shrinking = true;
}

void Mistakes::update()
{
    if (shrinking)
    {
        // every few milliseconds, change the radius of the last circle
        if(clock.getElapsedTime().asMilliseconds() > 150)
        {
            circles.back().setRadius(circles.back().getRadius() - 1);
            clock.restart();
        }

        // if the last circle has a radius <= 0
        // shrinking is false and pop the back of the vector
        if (circles.back().getRadius() <= 0)
        {
            shrinking = false;
            circles.pop_back();
        }
    }
}

void Mistakes::setPosition(sf::Vector2f position)
{
    text.setPosition(position);
}

int Mistakes::getRemainingCircles()
{
    return circles.size();
}
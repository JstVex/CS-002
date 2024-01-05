//
// Created by Hein Htet Lu Lu on 30/11/2023.
//

#ifndef CLASSES_SQUARE_H
#define CLASSES_SQUARE_H

#include <SFML/Graphics.hpp>
#include "MouseEvents.h"
#include "Position.h"

class Square : public sf::RectangleShape // I am a rectangle shape
{
private:
    sf::Text text;
    bool clicked = false;
    bool isCorrect = false;

public:
    Square(); // we have to implement a default constructor if we have an overloaded constructor
    Square(sf::Font &font, std::string word);

    // event handler, what do we do when an event occurs
    void eventHandler(sf::RenderWindow &window, sf::Event event);
    // how do I update myself to be in my current state
    void update();

    virtual void draw(sf::RenderTarget &window, sf::RenderStates states) const;

    void setPosition(sf::Vector2f position);

    void setClicked(bool option);
    bool getClicked();
    void setCorrect(bool option);
    bool getCorrect();
    std::string getString();
    void deSelect(sf::RenderWindow &window, sf::Event event);
};

#endif //CLASSES_SQUARE_H

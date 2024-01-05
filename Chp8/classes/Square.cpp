//
// Created by Hein Htet Lu Lu on 30/11/2023.
//

#include "Square.h"
#include "Position.h"

Square::Square(sf::Font& font, std::string word)
{
    text.setFont(font);
    text.setString(word);
    text.setCharacterSize(24);
    Position::centerText(*this, text);
}

Square::Square(){}

void Square::eventHandler(sf::RenderWindow &window, sf::Event event)
{
    // if the square is left-clicked by the mouse
    // then change the squares state to clicked
    if(MouseEvents::isClicked(*this, window))
    {
        clicked = !clicked;
    }
}

void Square::deSelect(sf::RenderWindow &window, sf::Event event)
{
    if(MouseEvents::isClicked(*this, window))
    {
        clicked = false;
    }
}


void Square::update()
{
    if(clicked)
    {
        setFillColor(sf::Color(90, 89, 78, 255));
        text.setFillColor(sf::Color::White);
    } else
    {
        setFillColor(sf::Color(239, 239, 230));
        text.setFillColor(sf::Color::Black);
    }

    if (isCorrect)
    {
        setFillColor(sf::Color::Green);
        text.setFillColor(sf::Color::Black);
    }
}

void Square::draw(sf::RenderTarget &window, sf::RenderStates states) const
{
    sf::RectangleShape parent = *this;

    window.draw(parent);
    window.draw(text);
}

void Square::setPosition(sf::Vector2f position)
{
    sf::RectangleShape::setPosition(position);
    Position::centerText(*this, text);
}

void Square::setClicked(bool option)
{
    clicked = option;
}

bool Square::getClicked()
{
    return clicked;
}

void Square::setCorrect(bool option)
{
    isCorrect = option;
}

bool Square::getCorrect()
{
    return isCorrect;
}

std::string Square::getString()
{
    return text.getString();
}
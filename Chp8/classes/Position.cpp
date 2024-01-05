//
// Created by Hein Htet Lu Lu on 30/11/2023.
//

#include "Position.h"

void Position::centerText(const sf::Shape &obj, sf::Text &text)
{
    sf::FloatRect textRect = text.getGlobalBounds();
    sf::FloatRect tRect = obj.getGlobalBounds();
    sf::Vector2f center = {textRect.width/2.0f, textRect.height/2.f};
    sf::Vector2f localBounds = {center.x + text.getLocalBounds().left, center.y + text.getLocalBounds().top};
    sf::Vector2f rounded = {std::round(localBounds.x), std::round(localBounds.y)};
    text.setOrigin(rounded);
    text.setPosition({tRect.left + tRect.width/2, tRect.top + tRect.height/2});
}

sf::Vector2f Position::rightTopCorner (sf::FloatRect floatRect) {
    sf::Vector2f result;
    result.x = floatRect.left + floatRect.width;
    result.y = floatRect.top;

    return result;
}

sf::Vector2f Position::bottomRightCorner (sf::FloatRect floatRect) {
    sf::Vector2f result;
    result.x = floatRect.left + floatRect.width;
    result.y = floatRect.top + floatRect.height;

    return result;
}

sf::Vector2f Position::centerXY (sf::FloatRect floatRect) {
    sf::Vector2f result;
    result.x = floatRect.left + floatRect.width / 2;
    result.y = floatRect.top + floatRect.height / 2;

    return result;
}

void Position::left (const sf::Shape& constObj, sf::Shape & obj, float spacing) {
    sf::FloatRect cb = constObj.getGlobalBounds();
    sf::FloatRect ob = obj.getGlobalBounds();
    sf::Vector2f position = {cb.left - ob.width - spacing, cb.top};

    obj.setPosition(position);
}

void Position::right (const sf::Shape& constObj, sf::Shape &obj, float spacing) {
    sf::FloatRect cb = constObj.getGlobalBounds();
    sf::Vector2f position = {cb.left + cb.width + spacing, cb.top};

    obj.setPosition(position);
}

void Position::top (const sf::Shape& constObj, sf::Shape & obj, float spacing) {
    sf::FloatRect cb = constObj.getGlobalBounds();
    sf::FloatRect ob = obj.getGlobalBounds();
    sf::Vector2f position = {cb.left, cb.top - ob.height - spacing};

    obj.setPosition(position);
}

void Position::bottom (const sf::Shape& constObj, sf::Shape & obj, float spacing) {
    sf::FloatRect cb = constObj.getGlobalBounds();
    sf::Vector2f position = {cb.left, cb.top + cb.height + spacing};

    obj.setPosition(position);
}

void Position::center (const sf::Shape& constObj, sf::Shape & obj) {
    sf::FloatRect cb = constObj.getGlobalBounds();
    sf::FloatRect ob = obj.getGlobalBounds();
    sf::Vector2f position = {centerXY(cb).x - ob.width / 2, centerXY(cb).y - ob.height / 2};

    obj.setPosition(position);
}

//
// Created by Hein Htet Lu Lu on 07/12/2023.
//

#ifndef CLASSES_CONNECTION_H
#define CLASSES_CONNECTION_H

#include "Grid.h"
#include "Mistakes.h"

class Connection : public sf::Drawable
{
private:
    sf::Font font;
    sf::Text text;
    Grid grid;
    Mistakes mistakes;
    Square shuffle, submit, deselect;

public:
    Connection();

    void eventHandler(sf::RenderWindow &window, sf::Event event);
    void update();
    virtual void draw(sf::RenderTarget &window, sf::RenderStates states) const;
};

#endif //CLASSES_CONNECTION_H

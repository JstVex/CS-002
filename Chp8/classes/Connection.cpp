//
// Created by Hein Htet Lu Lu on 07/12/2023.
//

#include "Connection.h"

Connection::Connection()
: grid(), mistakes(), shuffle(Grid::font, "Shuffle"), deselect(Grid::font, "Deselect"), submit(Grid::font, "Submit")
{
    if (!font.loadFromFile("OpenSans-Regular.ttf"))
    {
        exit(4);
    }

    text.setFont(font);
    text.setCharacterSize(30);

    grid.setPosition({150, 50});
    mistakes.setPosition({225, 500});
    shuffle.setSize({100, 50});
    deselect.setSize({100, 50});
    submit.setSize({100, 50});
    shuffle.setPosition({200, 550});

    Position::right(shuffle, deselect, 10.f);
    Position::right(deselect, submit, 10.f);

    submit.setPosition(submit.getPosition());
    deselect.setPosition(deselect.getPosition());

    text.setPosition({225, 650});
}

void Connection::eventHandler(sf::RenderWindow &window, sf::Event event)
{
    // add category at the end of each vector to compare
    std::vector<std::vector<std::string>> categories = {
            {"apple", "banana", "cherry", "grape", "fruits"},
            {"dog", "cat", "fish", "bird", "animals"},
            {"red", "blue", "yellow", "green", "colors"},
            {"book", "pen", "paper", "ruler", "stationary"},
    };


    grid.eventHandler(window, event);
    shuffle.eventHandler(window, event);
    deselect.eventHandler(window, event);
    submit.eventHandler(window, event);

    if(MouseEvents::isClicked(shuffle, window))
    {
        grid.shuffle();
    } else if (MouseEvents::isClicked(submit, window))
    {
        // Only run the analyze function if user has selected 4 squares
        if (grid.clickedSquares() == 4)
        {
            grid.analyze(categories);
        } else if (grid.clickedSquares() != 0)
        {
            text.setString("You have to select 4 squares.");
        }

        if (grid.getWrong() && grid.clickedSquares() == 4)
        {
            mistakes.markDown();
        }

    } else if (MouseEvents::isClicked(deselect, window))
    {
        grid.deselectAll();
    }
}

void Connection::update()
{
    grid.update();
    mistakes.update();
    shuffle.update();
    submit.update();
    deselect.update();

    if (mistakes.getRemainingCircles() <= 0)
    {
        text.setString("You lost!");
    }
    else if (grid.hasPlayerWon())
    {
        text.setString("You won!");
    }
}

void Connection::draw(sf::RenderTarget &window, sf::RenderStates states) const
{
    window.draw(grid);
    window.draw(mistakes);
    window.draw(shuffle);
    window.draw(submit);
    window.draw(deselect);
    window.draw(text);
}

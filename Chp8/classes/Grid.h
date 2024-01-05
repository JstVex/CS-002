//
// Created by Hein Htet Lu Lu on 05/12/2023.
//

#ifndef CLASSES_GRID_H
#define CLASSES_GRID_H

#include <SFML/Graphics.hpp>
#include "Square.h"
#include "Mistakes.h"
#include <cmath>
#include <ctime>
#include <fstream>
#include <iostream>

class Grid : public sf::Drawable
{
private:
    std::vector<std::vector<Square>> squares;
    void createGrid(std::vector<std::vector<Square>> &squares, const std::string &filename);
    bool isWrong = false;

public:
    // load the font
    static sf::Font font;
    // set positions of each square
    Grid();

    // loop through 2D grid and draw each square
    virtual void draw(sf::RenderTarget &window, sf::RenderStates states) const;
    // loop through 2D vector and call the eventHandler on each square
    void eventHandler(sf::RenderWindow &window, sf::Event event);

    void update();
    void deselectAll();
    void shuffle();
    void analyze(const std::vector<std::vector<std::string>> &categories);
    void setPosition(sf::Vector2f position);
    bool correctChoice(const std::vector<std::string> &words, const std::vector<std::vector<std::string>> &categories);
    std::string getCategory(const std::string &word, const std::vector<std::vector<std::string>> &categories);
    void setWrong(bool option);
    bool getWrong();
    bool hasPlayerWon();
    int clickedSquares();
};

#endif //CLASSES_GRID_H

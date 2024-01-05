//
// Created by Hein Htet Lu Lu on 05/12/2023.
//

#include "Grid.h"
#include "Position.h"

sf::Font Grid::font;

Grid::Grid()
: squares(4, std::vector<Square>(4, Square()))
{
    if (!font.loadFromFile("OpenSans-Regular.ttf"))
    {
        exit(2);
    }

    createGrid(squares, "words.txt");
}

void Grid::createGrid(std::vector<std::vector<Square>> &squares, const std::string &filename)
{
    std::ifstream fin;
    fin.open(filename);

    if (fin.fail())
    {
        exit(3);
    }

    // set each word to each square and set the square position
    for (int i = 0; i < squares.size(); i++)
    {
        for (int j = 0; j < squares[i].size(); j++)
        {
            std::string word;
            fin >> word;

            squares[i][j] = Square(font, word);
            squares[i][j].setSize({100.f, 100.f});

            if (j == 0)
            {
                if (i == 0)
                    squares[i][j].setPosition({0, 0});
                else
                    Position::bottom(squares[i - 1][0], squares[i][j], 10.f);
            }
            else
            {
                Position::right(squares[i][j - 1], squares[i][j], 10.f);
            }
        }
    }
}

void Grid::draw(sf::RenderTarget &window, sf::RenderStates states) const
{
    for (int i = 0; i < squares.size(); i++)
    {
        for (int j = 0; j < squares[i].size(); j++)
        {
            window.draw(squares[i][j]);
        }
    }
}

void Grid::eventHandler(sf::RenderWindow &window, sf::Event event)
{
    for (int i = 0; i < squares.size(); i++)
    {
        for (int j = 0; j < squares[i].size(); j++)
        {
            if(clickedSquares() < 4)
            {
                squares[i][j].eventHandler(window, event);
            } else
            {
                // Only let players deselect if they have already selected 4 squares
                squares[i][j].deSelect(window, event);
            }
        }
    }
}

void Grid::update()
{
    for (int i = 0; i < squares.size(); i++)
    {
        for (int j = 0; j < squares[i].size(); j++)
        {
            squares[i][j].update();
        }
    }
}

void Grid::deselectAll()
{
    for (int i = 0; i < squares.size(); i++)
    {
        for (int j = 0; j < squares[i].size(); j++)
        {
            squares[i][j].setClicked(false);
        }
    }
}

void Grid::shuffle()
{
    sf::Vector2f temp;
    int row, col;

    // int row = random num between 0 and rows - 1
    // int col = random num betweeen 0 and cols - 1
    for (int i = 0; i < squares.size(); i++)
    {
        srand(time(0));
        for (int j = 0; j < squares[i].size(); j++)
        {
            row = rand() % squares.size();
            col = rand() % squares[i].size();

            temp = squares[i][j].getPosition();
            squares[i][j].setPosition(squares[row][col].getPosition());
            squares[row][col].setPosition(temp);
        }
    }
    // set temp = the current square.getPosition();
    // set the current square position to the position (row, col);
    // set the square's position at (row, col) to temp
}

std::string Grid::getCategory(const std::string &word, const std::vector<std::vector<std::string>> &categories)
{
    for (int i = 0; i < categories.size(); i++)
    {
        for (int j = 0; j < categories[i].size() - 1; j++)
        {
            std::cout << "categories i j: " << categories[i][j] << std::endl;
            if (word == categories[i][j])
            {
                return categories[i].back(); // Return the last element which is category
            }
        }
    }

    return "";
}

bool Grid::correctChoice(const std::vector<std::string> &words, const std::vector<std::vector<std::string>> &categories)
{
    if (words.size() != 4)
    {
        return false;
    }

    // Get the category of the first word
    std::string firstWordCategory = getCategory(words[0], categories);
    std::cout << "First word category is : " << firstWordCategory << std::endl;

    // Check if all other words have the same category
    for (int i = 1; i < words.size(); i++)
    {
        std::string othersCategory = getCategory(words[i], categories);
        if (getCategory(words[i], categories) != firstWordCategory)
        {
            std::cout << "Other words' category: " << othersCategory << std::endl;
            return false;
        }
    }

    return true;
}

void Grid::analyze(const std::vector<std::vector<std::string>> &categories)
{
    std::vector<std::string> choice;

    for (int i = 0; i < squares.size(); i++)
    {
        for (int j = 0; j < squares[i].size(); j++)
        {
            if(squares[i][j].getClicked())
            {
                choice.push_back(squares[i][j].getString());
            }
        }
    }

    std::cout << "Choice: ";
    for (const auto& word : choice)
    {
        std::cout << word << " ";
    }

    bool correct = correctChoice(choice, categories);
    std::cout << "Correct: " << correct << std::endl;
    if(correct)
    {
        // Set isWrong to false to stop losing hearts
        isWrong = false;
        for (int i = 0; i < squares.size(); i++)
        {
            for (int j = 0; j < squares[i].size(); j++)
            {
                if (squares[i][j].getClicked())
                {
                    // Set the clicked squares to correct and then unclicked to change the color to green
                    squares[i][j].setCorrect(true);
                    squares[i][j].setClicked(false);
                }
            }
        }
    } else
    {
        isWrong = true;
    }
}

void Grid::setPosition(sf::Vector2f position)
{
    for(int i = 0; i < squares.size(); i++)
    {
        if(i == 0)
            squares[i][0].setPosition(position);
        else
        {
            Position::bottom(squares[i-1][0], squares[i][0], 10.f);
            squares[i][0].setPosition(squares[i][0].getPosition());
        }

        for(int j = 1; j < squares[i].size(); j++)
        {
            Position::right(squares[i][j-1], squares[i][j], 10.f);
            squares[i][j].setPosition(squares[i][j].getPosition());
        }
    }
}

void Grid::setWrong(bool option)
{
    isWrong = option;
}

bool Grid::getWrong()
{
    return isWrong;
}

bool Grid::hasPlayerWon()
{
    for (int i = 0; i < squares.size(); i++)
    {
        for (int j = 0; j < squares[i].size(); j++)
        {
            if (!squares[i][j].getCorrect())
            {
                return false; // If at least one square is incorrect, player hasn't won yet
            }
        }
    }

    return true; // If all squares are correct, player has won
}

int Grid::clickedSquares()
{
    int count = 0;
    for (int i = 0; i < squares.size(); i++)
    {
        for (int j = 0; j < squares[i].size(); j++)
        {
            if (squares[i][j].getClicked())
            {
                count++;
            }
        }
    }

    return count;
}
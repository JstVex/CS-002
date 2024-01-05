//#include <SFML/Graphics.hpp>
#include <cstdlib>
#include <ctime>
#include "functions.h"

int main() {
    sf::VideoMode videoMode(720, 420, 32);
    sf::RenderWindow window(videoMode, "Connection");

    // set frame rate ( 60 is enough for animation )
    window.setFramerateLimit(60);

    // create shapes with width and height / radius
    sf::RectangleShape square({50.f, 50.f});
    sf::CircleShape circle(25.f);

    // set initial directions
    sf::Vector2f squareDirection(1, 0);
    sf::Vector2f circleDirection(0, 1);

    std::srand(std::time(0));

    while(window.isOpen())
    {
        sf::Event event;
        // event listener
        while(window.pollEvent(event))
        {
            if(event.type == sf::Event::Closed)
                window.close();
        }

//        float randomNumber = static_cast<float>(std::rand()) / RAND_MAX;
//
//        if (square.getPosition().x < 0 || square.getPosition().x + square.getSize().x >= videoMode.width)
//        {
//            squareDirection.x = -squareDirection.x; // reverse direction on x axis
//            squareDirection.y = -(randomNumber); // randomly change the y direction
//
//        }
//
//        if (square.getPosition().y < 0 || square.getPosition().y + square.getSize().y >= videoMode.height) {
//            squareDirection.y = -squareDirection.y; // reverse direction on y axis
//            squareDirection.x = -(randomNumber); // randomly change the x direction
//
//        }
//
//        if (circle.getPosition().x < 0 || circle.getPosition().x + 2 * circle.getRadius() >= videoMode.width) {
//            circleDirection.x = -circleDirection.x;
//            circleDirection.y = -(randomNumber);
//        }
//
//        if (circle.getPosition().y < 0 || circle.getPosition().y + 2 * circle.getRadius() >= videoMode.height) {
//            circleDirection.y = -circleDirection.y;
//            circleDirection.x = -(randomNumber);
//        }
        Connection::bounce(square, window.getSize(), squareDirection);
        Connection::bounce(circle, window.getSize(), circleDirection);


        // set color to shapes
        square.setFillColor(sf::Color::Blue);
        circle.setFillColor(sf::Color(119, 0, 200));

        // make the shapes move
        square.move(squareDirection);
        circle.move(circleDirection);

        window.clear();
        window.draw(circle);
        window.draw(square);
        window.display();
    }
    return 0;
}

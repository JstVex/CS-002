#include <SFML/Graphics.hpp>
#include "Square.h"
#include "Grid.h"
#include "Mistakes.h"
#include "Connection.h"

int main() {
    sf::VideoMode videoMode(720, 1000, 32);
    sf::RenderWindow window(videoMode, "Connections");
    window.setFramerateLimit(60);

//    Grid grid;
//    Mistakes mistakes;
    Connection connections;

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
            connections.eventHandler(window, event);
        }

//        grid.update();
//        mistakes.update();
        connections.update();
        window.clear();
//        window.draw(grid);
//        window.draw(mistakes);
        window.draw(connections);
        window.display();
    }

    return 0;
}
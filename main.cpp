#include <SFML/Graphics.hpp>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <regex>
#include <sstream>
#include "Point.h"
#include "Triangle.h"
#include "Circle.h"
#include "Rectangle.h"
#include "ShapeLoader.h"
#include "ShapeWriter.h"

int main()
{
    ShapeLoader loader("input.txt");
    auto shapes = loader.loadShapes();

    //переделать в класс отрисовку
    sf::RenderWindow window(sf::VideoMode(1000, 600), "Poject by Ruslan Sokolov");
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear();
        for (int i = 0; i < shapes.size(); i++)
        {
            shapes[i]->draw(window);
        }
        window.display();
    }

    ShapeWriter writer("output.txt");
    writer.writeShapes(shapes);
    return 0;
}
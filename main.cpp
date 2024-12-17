#include <SFML/Graphics.hpp>
#include "Lib.h"
#include "Point.h"
#include "/Shape/Shapes/Triangle.h"
#include "/Shape/Shapes/Circle.h"
#include "Shape/Shapes/Rectangle.h"
#include "/IO/Reader.h"
#include "/IO/Writer.h"

int main()
{
    Reader loader("input.txt");
    auto shapes = loader.readShapes();

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

    Writer writer("output.txt");
    writer.writeShapes(shapes);
    return 0;
}
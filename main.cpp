#include "Lib.h"
#include "Point.h"
#include "Shape/Shapes/Triangle.h"
#include "Shape/Shapes/Circle.h"
#include "Shape/Shapes/Rectangle.h"
#include "IO/Reader.h"
#include "IO/Writer.h"

const std::string INPUT_FILE = "input.txt";
const std::string OUTPUT_FILE = "output.txt";
const std::string WINDOW_TITLE = "Project by Ruslan Sokolov";
const int WINDOW_WIDTH = 1000;
const int WINDOW_HEIGHT = 600;

int main()
{
    Reader loader(INPUT_FILE);
    auto shapes = loader.readShapes();

    sf::RenderWindow window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), WINDOW_TITLE);
    while (window.isOpen())
    {
        sf::Event event{};
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear();
        for (const auto& shape : shapes)
        {
            shape->draw(window);
        }
        window.display();
    }

    Writer writer(OUTPUT_FILE);
    writer.writeShapes(shapes);

    return 0;
}
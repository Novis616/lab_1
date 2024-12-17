//
// Created by rlkos on 16.12.2024.
//

#include "Rectangle.h"

Rectangle::Rectangle(sf::Vector2f point1, sf::Vector2f point2)
        :IShape(SHAPE_NAME)
{
    points.push_back(point1);
    points.push_back(point2);
    sf::Vector2f position = sf::Vector2f(point1.x, point1.y);
    sf::Vector2f size = sf::Vector2f(point2.x - point1.x, point2.y - point1.y);

    shape.setPosition(position);
    shape.setSize(size);
}

sf::Vector2f Rectangle::GetSize() const
{
    return shape.getSize();
}

void Rectangle::setFillColor(const sf::Color& color)
{
    shape.setFillColor(color);
}

void Rectangle::draw(sf::RenderWindow& window) const
{
    window.draw(shape);
}

//
// Created by rlkos on 16.12.2024.
//

#include "Circle.h"

Circle::Circle(sf::Vector2f point1, float mRadius)
        :IShape(SHAPE_NAME)
{
    shape.setRadius(mRadius);
    shape.setPosition(point1);
}


float Circle::GetRadius() const
{
    return shape.getRadius();
}

void Circle::draw(sf::RenderWindow& window) const
{
    window.draw(shape);
}

void Circle::setFillColor(const sf::Color& color)
{
    shape.setFillColor(color);
}
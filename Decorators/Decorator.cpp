//
// Created by rlkos on 16.12.2024.
//

#include "Decorator.h"

Decorator::Decorator(const std::shared_ptr<IShape>& shape)
        :IShape(shape->GetName()),
         shape(shape)
{
}

float Decorator::GetArea() const
{
    return area;
}

float Decorator::GetPerimeter() const
{
    return perimeter;
}

void Decorator::SetPerimeter(float value)
{
    perimeter = value;
}

void Decorator::SetArea(float value)
{
    area = value;
}

void Decorator::draw(sf::RenderWindow& window) const
{
    return shape->draw(window);
}

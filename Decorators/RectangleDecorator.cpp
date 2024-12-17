//
// Created by rlkos on 16.12.2024.
//

#include "RectangleDecorator.h"


RectangleDecorator::RectangleDecorator(const std::shared_ptr<Rectangle>& rectangle)
        :Decorator(std::dynamic_pointer_cast<IShape>(rectangle))
{
    Compute();
}

void RectangleDecorator::ComputeArea()
{
    sf::Vector2f size = std::dynamic_pointer_cast<Rectangle>(shape)->GetSize();

    SetArea(size.x * size.y);
}

void RectangleDecorator::ComputePerimeter()
{
    SetPerimeter(2 * GetArea());
}

void RectangleDecorator::Compute() {
    ComputeArea();
    ComputePerimeter();
}

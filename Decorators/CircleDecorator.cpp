//
// Created by rlkos on 16.12.2024.
//

#include "CircleDecorator.h"

CircleDecorator::CircleDecorator(const std::shared_ptr<Circle>& circle)
        :Decorator(std::dynamic_pointer_cast<IShape>(circle))
{
    Compute();
}

void CircleDecorator::ComputeArea()
{
    float radius = std::dynamic_pointer_cast<Circle>(shape)->GetRadius();
    SetArea(M_PI * radius * radius);
}

void CircleDecorator::ComputePerimeter()
{
    float radius = std::dynamic_pointer_cast<Circle>(shape)->GetRadius();
    SetPerimeter(2 * M_PI * radius);
}

void CircleDecorator::Compute() {
    ComputeArea();
    ComputePerimeter();
}

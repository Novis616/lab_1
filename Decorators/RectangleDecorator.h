//
// Created by rlkos on 16.12.2024.
//

#ifndef LAB_1_RECTANGLEDECORATOR_H
#define LAB_1_RECTANGLEDECORATOR_H


#include "Decorator.h"
#include "../Shape/Shapes/Rectangle.h"
#include <cmath>

class RectangleDecorator : public Decorator
{
public:
    RectangleDecorator(std::shared_ptr<Rectangle>rectangle);
protected:
    void ComputeArea() override;
    void ComputePerimeter() override;
};


#endif //LAB_1_RECTANGLEDECORATOR_H

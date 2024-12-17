//
// Created by rlkos on 16.12.2024.
//

#ifndef LAB_1_CIRCLEDECORATOR_H
#define LAB_1_CIRCLEDECORATOR_H

#include <cmath>
#include "Decorator.h"
#include "../Shape/Shapes/Circle.h"

class CircleDecorator : public Decorator {
public:
    explicit CircleDecorator(const std::shared_ptr<Circle>&circle);
protected:
    void Compute();
    void ComputeArea() override;
    void ComputePerimeter() override;
};


#endif //LAB_1_CIRCLEDECORATOR_H

//
// Created by rlkos on 16.12.2024.
//

#ifndef LAB_1_TRIANGLEDECORATOR_H
#define LAB_1_TRIANGLEDECORATOR_H


#include "Decorator.h"
#include "../Shape/Shapes/Triangle.h"
#include <valarray>

class TriangleDecorator : public Decorator {
public:
    explicit TriangleDecorator(const std::shared_ptr<Triangle>&triangle);
protected:
    void Compute();
    void ComputeArea() override;
    void ComputePerimeter() override;
};


#endif //LAB_1_TRIANGLEDECORATOR_H

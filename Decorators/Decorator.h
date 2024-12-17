//
// Created by rlkos on 16.12.2024.
//

#ifndef LAB_1_DECORATOR_H
#define LAB_1_DECORATOR_H

#include "../Shape/IShape.h"

class Decorator :public IShape
{
protected:
    std::shared_ptr<IShape> shape;
    virtual void ComputeArea() = 0;
    virtual void ComputePerimeter() = 0;
    void SetPerimeter(float value);
    void SetArea(float value);
public:
    explicit Decorator(const std::shared_ptr<IShape>& shape);
    void draw(sf::RenderWindow& window) const override;
    [[nodiscard]] float GetArea() const;
    [[nodiscard]] float GetPerimeter() const ;
private:
    float perimeter = 0.0;
    float area = 0.0;
};


#endif //LAB_1_DECORATOR_H

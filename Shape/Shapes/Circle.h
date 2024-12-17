//
// Created by rlkos on 16.12.2024.
//

#ifndef LAB_1_CIRCLE_H
#define LAB_1_CIRCLE_H


#include "../../Lib.h"
#include "../../Point.h"
#include "../IShape.h"


class Circle : public IShape
{
public:
    Circle(sf::Vector2f point1, float mRadius);

    [[nodiscard]] float GetRadius() const;
    void draw(sf::RenderWindow& window) const override;
    void setFillColor(const sf::Color& color);
private:
    sf::Vector2f center{};
    sf::CircleShape shape{};
};


#endif //LAB_1_CIRCLE_H

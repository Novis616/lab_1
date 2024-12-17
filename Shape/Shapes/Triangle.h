//
// Created by rlkos on 16.12.2024.
//

#ifndef LAB_1_TRIANGLE_H
#define LAB_1_TRIANGLE_H


#include "../../Lib.h"
#include "../../Point.h"
#include "../IShape.h"

class Triangle : public IShape
{
public:
    Triangle(sf::Vector2f point1, sf::Vector2f point2, sf::Vector2f point3);

    sf::Vector2f GetPoint(int index);

    void draw(sf::RenderWindow& window) const override;
    void setFillColor(const sf::Color& color);
private:
    std::vector<sf::Vector2f> points{};
    sf::ConvexShape shape{};
};


#endif //LAB_1_TRIANGLE_H

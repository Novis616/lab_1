//
// Created by rlkos on 16.12.2024.
//

#ifndef LAB_1_RECTANGLE_H
#define LAB_1_RECTANGLE_H

#include "../../Lib.h"
#include "../../Point.h"
#include "../IShape.h"

class Rectangle : public IShape
{
public:
    Rectangle(sf::Vector2f point1, sf::Vector2f point2);

    [[nodiscard]] sf::Vector2f GetSize() const;

    void draw(sf::RenderWindow& window) const override;
    void setFillColor(const sf::Color& color);
private:

    std::vector<sf::Vector2f> points;
    sf::RectangleShape shape;
};


#endif //LAB_1_RECTANGLE_H

//
// Created by rlkos on 12.11.2024.
//

#ifndef LAB_1_ISHAPE_H
#define LAB_1_ISHAPE_H

#include "format"
#include "../Lib.h"

class IShape
{
public:
    explicit IShape(std::string  name);
    virtual void draw(sf::RenderWindow& window) const = 0;
    virtual ~IShape() = default;
    std::string GetName();
protected:
    std::string shapeName;
};


#endif //LAB_1_ISHAPE_H

//
// Created by rlkos on 12.11.2024.
//

#include "IShape.h"

IShape::IShape(std::string  name)
        :shapeName(std::move(name))
{
}

std::string IShape::GetName()
{
    return shapeName;
}

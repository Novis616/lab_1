//
// Created by rlkos on 10.12.2024.
//

#ifndef LAB_1_READER_H
#define LAB_1_READER_H


#include "../Lib.h"
#include "../Shape/IShape.h"
#include "../Point.h"
#include "../Shape/Shapes/Triangle.h"
#include "../Shape/Shapes/Circle.h"
#include "../Shape/Shapes/Rectangle.h"
#include "../Decorators/Decorator.h"
#include "../Decorators/TriangleDecorator.h"
#include "../Decorators/RectangleDecorator.h"
#include "../Decorators/CircleDecorator.h"

class Reader {
public:
    Reader(const std::string& filename);
    std::vector<std::unique_ptr<Decorator>> readShapes();
private:
    std::string filename;
    std::vector<Point> extractPoints(const std::string& points);
};


#endif //LAB_1_READER_H

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
    explicit Reader(std::string  filename);
    std::vector<std::unique_ptr<Decorator>> readShapes();

    const std::string ERROR_FILE_OPEN = "Не удалось открыть файл: ";
    const std::string SHAPE_TYPE_TRIANGLE = "TRIANGLE";
    const std::string SHAPE_TYPE_RECTANGLE = "RECTANGLE";
    const std::string SHAPE_TYPE_CIRCLE = "CIRCLE";
    const sf::Color TRIANGLE_COLOR = sf::Color(255, 0, 0);
    const sf::Color RECTANGLE_COLOR = sf::Color(255, 117, 20);
    const sf::Color CIRCLE_COLOR = sf::Color(237, 118, 14);

    const std::string SHAPE_REGEX_PATTERN = R"((TRIANGLE|RECTANGLE|CIRCLE):\s*((?:P\d=\d+,\d+;\s*)*(?:P\d=\d+,\d+)?(?:C=\d+,\d+;\s*R=\d+)?)?)";

private:
    std::string filename;
    static std::vector<Point> extractPoints(const std::string& points);
};


#endif //LAB_1_READER_H

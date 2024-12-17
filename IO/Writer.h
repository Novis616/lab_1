//
// Created by rlkos on 16.12.2024.
//

#ifndef LAB_1_WRITER_H
#define LAB_1_WRITER_H


#include "../Lib.h"
#include "../Shape/Shapes/Triangle.h"
#include "../Shape/Shapes/Circle.h"
#include "../Shape/Shapes/Rectangle.h"
#include "../Decorators/Decorator.h"

class Writer
{
public:
    explicit Writer(std::string  filename);
    void writeShapes(const std::vector<std::unique_ptr<Decorator>>& shapes);

    const std::string ERR_OPEN_FILE = "Не удалось открыть файл: ";
    const std::string SHAPE_OUTPUT_TEMPLATE = ": P=";
    const std::string AREA_OUTPUT_TEMPLATE = "; S=";
private:
    std::string filename;
};


#endif //LAB_1_WRITER_H

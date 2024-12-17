//
// Created by rlkos on 16.12.2024.
//

#include "Writer.h"

#include <utility>

Writer::Writer(std::string  filename)
        :filename(std::move(filename))
{}

void Writer::writeShapes(const std::vector<std::unique_ptr<Decorator>>& shapes)
{
    std::fstream out(filename, std::ios::out);
    if (!out.is_open()) {
        std::cerr << ERR_OPEN_FILE << filename << std::endl;
        return;
    }

    for (const auto& shape : shapes) {
        out << shape->GetName() << SHAPE_OUTPUT_TEMPLATE << static_cast<int>(shape->GetPerimeter()) << AREA_OUTPUT_TEMPLATE << static_cast<int>(shape->GetArea()) << "\n";
    }

    out.close();
}
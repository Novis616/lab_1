//
// Created by rlkos on 16.12.2024.
//

#include "Writer.h"

Writer::Writer(const std::string& filename)
        :filename(filename)
{}

void Writer::writeShapes(const std::vector<std::unique_ptr<Decorator>>& shapes)
{
    std::fstream out(filename, std::ios::out);
    if (!out.is_open()) {
        std::cerr << "Не удалось открыть файл: " << filename << std::endl;
        return;
    }

    for (const auto& shape : shapes) {
        out << shape->GetName() << ": P=" << static_cast<int>(shape->GetPerimeter()) << "; S=" << static_cast<int>(shape->GetArea()) << "\n";
    }

    out.close();
}
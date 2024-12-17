cmake_minimum_required(VERSION 3.29)
project(lab_1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_PREFIX_PATH "D:/Study/OOD/SFML-2.6.2")
find_package(SFML 2.5 COMPONENTS system window graphics REQUIRED)

find_package(SFML 2.5 COMPONENTS graphics REQUIRED)

add_executable(lab_1 main.cpp
        Shape/IShape.cpp
        Shape/IShape.h
        Point.h
        IO/Reader.cpp
        IO/Reader.h
        Decorators/CircleDecorator.cpp
        Decorators/CircleDecorator.h
        Decorators/Decorator.cpp
        Decorators/Decorator.h
        Lib.h
        Shape/Shapes/Circle.cpp
        Shape/Shapes/Circle.h
        Shape/Shapes/Rectangle.cpp
        Shape/Shapes/Rectangle.h
        Shape/Shapes/Triangle.cpp
        Shape/Shapes/Triangle.h
        Decorators/RectangleDecorator.cpp
        Decorators/RectangleDecorator.h
        Decorators/TriangleDecorator.cpp
        Decorators/TriangleDecorator.h
        IO/Writer.cpp
        IO/Writer.h
)

target_link_libraries(lab_1 sfml-graphics sfml-window sfml-system)
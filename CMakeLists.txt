cmake_minimum_required(VERSION 3.29)
project(lab_1)

set(CMAKE_CXX_STANDARD 20)

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

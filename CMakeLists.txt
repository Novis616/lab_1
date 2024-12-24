cmake_minimum_required(VERSION 3.29)
project(lab_1)

set(CMAKE_CXX_STANDARD 17)
set(SFML_DIR "C:/SFML/lib/cmake/SFML")

find_package(SFML 2.5 COMPONENTS system window graphics REQUIRED)

add_executable(lab_1 main.cpp
        Shape/IShape.cpp
        IO/Reader.cpp
        Decorators/CircleDecorator.cpp
        Decorators/Decorator.cpp
        Shape/Shapes/Circle.cpp
        Shape/Shapes/Rectangle.cpp
        Shape/Shapes/Triangle.cpp
        Decorators/RectangleDecorator.cpp
        Decorators/TriangleDecorator.cpp
        IO/Writer.cpp
)

target_link_libraries(lab_1 sfml-system sfml-window sfml-graphics)
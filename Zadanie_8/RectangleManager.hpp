#pragma once
#include "Rectangle.hpp"
#include "RectangleGenerator.hpp"
#include <vector>
#include <algorithm>


class RectangleManager
{

public:
    RectangleManager(int howMany);
    void printRectangle(Rectangle r);
    void printAllRectangles();
    size_t countRectangleBiggerThen(int area);
    std::vector <Rectangle> copyRectangles();
    void sortAreaDescending();
    void deleteInvalid();

private:
    std::vector <Rectangle> recVec;

};

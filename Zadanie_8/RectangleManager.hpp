#pragma once
#include "Rectangle.hpp"
#include "RectangleGenerator.hpp"
#include <vector>
#include <algorithm>


class RectangleManager
{
private:
    std::vector <Rectangle> recVec;
public:
    RectangleManager();
    void printRectangles(Rectangle);
    size_t countRectangleBiggerThen(int area);
    std::vector <int> copyRectangles();
    void sortAreaDescending();
    void deleteInvalid();

};

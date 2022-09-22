#include "Rectangle.hpp"

Rectangle::Rectangle (int a, int b) : _a(a), _b(b) {}

int Rectangle::countArea()
{
    return _a * _b;
}

int Rectangle::getA() 
{
    return _a;
}

int Rectangle::getB()
{
    return _b;
}

bool Rectangle::isSquare()
{
    return _a == _b;
}

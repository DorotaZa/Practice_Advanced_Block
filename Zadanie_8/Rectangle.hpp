#pragma once
#include <vector>

class Rectangle
{
private:
    int _a;
    int _b;
public:
    Rectangle(int a, int b);
    int area();
    int getA();
    int getB(); 
    bool isSquare();
};




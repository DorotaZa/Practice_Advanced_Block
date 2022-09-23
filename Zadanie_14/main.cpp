// Zadanie_14

//Napisz program, który wypisze najbardziej optymalny schemat wydawania reszty dla podanej kwoty.
//(nominały: 200, 100, 50, 20, 10, 5, 2, 1, 0.50, 0.20, 0.10, 0.05, 0.02, 0.01) //w zl

#include <iostream>
#include "Change.hpp"

int main()
{
    Change change;
    double cash = 123.456;
    change.optimalChange(cash);
    std::cout << "Optimal change for " << cash << " zl:" << std::endl;
    change.print();

}


// Zadanie_8

// + //Klasy: Rectangle (przechowuje długości boków, wylicza pole, isSquare()), RectangleGenerator(Klasa generująca losowy prostokąt o boku z podanego przedziału),
// + //RectangleManger(tutaj faktycznie implementujemy zadania)
// + //Utwórz wektor 100 prostokątów o losowych długościach boków z przedziału 0, 10 (użyj liczb całkowitych)
//a) void printRectangles() - Wypisz wszystkie prostokąty(for_each + unary function) - funkcja void printRectangle (Rectangle)
//b) size_t countRectangleBiggerThen(int area) - Wypisz ile jest prostokątów o polu większym niż 50 (count_if)
//c) std::vector copyRectangles() - Przekopiuj wszystkie prostkąty, które są kwadratami do drugiego vectora(copy_if) i go wypisz(for_each)
//d) void sortAreaDescending() - Posortuj vector prostokątów malejaco według pola powierzchni
//e) void deleteInvalid() Usuń wszystkie prostokąty, które mają przynajmniej jeden bok równy 0

#include <iostream>
#include "Rectangle.hpp"
#include "RectangleGenerator.hpp"
#include "RectangleManager.hpp"

int main()
{
    //a) void printRectangles() - Wypisz wszystkie prostokąty(for_each + unary function) - funkcja void printRectangle (Rectangle)
    std::cout << "Vector of 100 rectangles:" << std::endl;
    RectangleManager rec(100);
    rec.printAllRectangles();
    std::cout << std::endl;

    //b) size_t countRectangleBiggerThen(int area) - Wypisz ile jest prostokątów o polu większym niż 50 (count_if)
    int amount = rec.countRectangleBiggerThen(50);
    std::cout << amount << " rectangles have area bigger than 50." << std::endl;
    std::cout << std::endl;

    //c) std::vector copyRectangles() - Przekopiuj wszystkie prostkąty, które są kwadratami do drugiego vectora(copy_if) i go wypisz(for_each)
    std::cout << "Squares:" << std::endl;
    rec.copyRectangles();
    std::cout << std::endl;


    //d) void sortAreaDescending() - Posortuj vector prostokątów malejaco według pola powierzchni
    rec.sortAreaDescending();
    std::cout << std::endl;

    //e) void deleteInvalid() Usuń wszystkie prostokąty, które mają przynajmniej jeden bok równy 0
    std::cout << "Vector of rectangles after deleting invalid: " << std::endl;
    rec.deleteInvalid();
    std::cout << std::endl;

}

#include "RectangleManager.hpp"
#include "Rectangle.hpp"
#include "RectangleGenerator.hpp"

#include <iostream>
#include <algorithm>
#include <vector>

RectangleManager::RectangleManager(int howMany)
{
	RectangleGenerator rec;
	//const int size = 100;

	for (int i = 0; i < howMany; ++i)
	{
		recVec.push_back(rec.generateRectangle());
	}
}

void RectangleManager::printRectangle(Rectangle r)
{
	std::cout << "Side a = " << r.getA() << ", " << "Side b = " << r.getB() << std::endl;
}


//a) void printRectangles() - Wypisz wszystkie prostokąty(for_each + unary function) - funkcja void printRectangle (Rectangle)
void RectangleManager::printAllRectangles()
{
	auto print = [](Rectangle r) {std::cout << "Side a = " << r.getA() << ", " << "Side b = " << r.getB() << std::endl;};
	std::for_each(recVec.begin(), recVec.end(), print);
	//std::for_each(recVec.begin(), recVec.end(), [](Rectangle r){std::cout << "Side a = " << r.getA() << ", " << "Side b = " << r.getB() << std::endl; });
}

//b) size_t countRectangleBiggerThen(int area) - Wypisz ile jest prostokątów o polu większym niż 50 (count_if)
size_t RectangleManager::countRectangleBiggerThen(int area)
{
	size_t count = std::count_if(recVec.begin(), recVec.end(), [&area](Rectangle r) {return r.countArea() > area; });
	return count;
}

//c) std::vector copyRectangles() - Przekopiuj wszystkie prostkąty, które są kwadratami do drugiego vectora(copy_if) i go wypisz(for_each)
std::vector<Rectangle> RectangleManager::copyRectangles()
{

	std::vector <Rectangle> temp;
	auto lambda = [](Rectangle r) {return r.isSquare(); };
	std::copy_if(recVec.begin(), recVec.end(), std::back_inserter(temp), lambda);
	//std::for_each(temp.begin(), temp.end(), printRectangle);
	auto print = [](Rectangle r) {std::cout << "Side a = " << r.getA() << ", " << "Side b = " << r.getB() << std::endl; };
	std::for_each(temp.begin(), temp.end(), print);


	return temp;
}

//d) void sortAreaDescending() - Posortuj vector prostokątów malejaco według pola powierzchni
void RectangleManager::sortAreaDescending()
{
	auto lambda = [](Rectangle r1, Rectangle r2) {return r1.countArea() < r2.countArea(); };
	std::sort(recVec.rbegin(), recVec.rend(), lambda);
	//std::sort(recVec.begin(), recVec.end(), std::greater<>());
	auto print = [](Rectangle r) {std::cout << "Area = " << r.countArea() <<std::endl; };
	std::for_each(recVec.begin(), recVec.end(), print);
}


//e) void deleteInvalid() Usuń wszystkie prostokąty, które mają przynajmniej jeden bok równy 0
void RectangleManager::deleteInvalid()
{
	//std::vector <Rectangle> temp;

	auto lambda = [](Rectangle r) {return (r.getA() == 0 || r.getB() == 0); };
	recVec.erase(std::remove_if(recVec.begin(), recVec.end(), lambda), recVec.end());
	auto print = [](Rectangle r) {std::cout << "Side a = " << r.getA() << ", " << "Side b = " << r.getB() << std::endl; };
	std::for_each(recVec.begin(), recVec.end(), print);

}







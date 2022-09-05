// Zadanie_5

//Klasa: StringCensor
//Napisz klasę która będzie cenzurować podane stringi (zamieniać wymagane litery na gwiazdkę), operacje która ma wspierać ta klasa :
//-addCensoredLetter(char c)
//- std::string censor(std::string)

#include <iostream>
#include "StringCensor.hpp"

int main()
{
	StringCensor str;
	str.addCensoredLetter('t');
	str.addCensoredLetter('l');
	str.addCensoredLetter('c');
	std::cout << str.censor("talerzc");

}

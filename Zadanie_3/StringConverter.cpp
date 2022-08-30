#include "StringConverter.hpp"
#include <string>
#include <vector>

//StringConverter::StringConverter(std::string s) :_s(s) {}



std::string StringConverter::toCamelCase (std::string s) //delete _ + change to capital letter
{
    std::vector <char> vec(s.begin(), s.end()); //wypelnienie vectora znakow stringiem z argumentu
    std::string temp;

    for (auto it = vec.begin(); it != vec.end(); ++it)
    {
        if ((*it) == '_') // ASCII 95
        {
            it++; //pomija _ i kontynuuje na pozycji litery do zmiany na Camel case
            temp.push_back((*it) -=32); //zmienia mala na wilka litere
            continue; //zeby sie upewnic, ze przeiteruje po malych literach i dalej bedzie kontynuowac petle dodajac nizej niezmienione litery
        }
        temp.push_back(*it); //pushuje male litery 
    }
    return temp;
}

std::string StringConverter::toSnakeCase (std::string s)
{
    std::vector <char> vec(s.begin(), s.end());
    std::string temp;

    for (auto it = vec.begin(); it != vec.end(); ++it)
    {
        if ((*it) >= 65 && (*it) <= 90)
        {
            temp.push_back('_');
            temp.push_back((*it) += 32);
            continue;
        }
        temp.push_back((*it));
    }
    return temp;
}

// Zadanie_3

//Napisz klasę StringConverter, która bedzie miała dwie metody(statyczne) :
//std::string toCamelCase(std::string)
//std::string toSnakeCase(std::string)

//camelCase: snake_case
//helloSDA : hello_s_d_a
//getColour : get_colour
//isThisFirstEntry : is_this_first_entry

#include <iostream>
#include <string>
#include "StringConverter.hpp"

int main()
{
    std::cout << "To CamelCase: " << std::endl;
    StringConverter word1;
    std::string str1 = "snake_case";
    std::cout << str1 << " : " << word1.toCamelCase(str1) << std::endl;

    StringConverter word2;
    std::string str2 = "hello_s_d_a";
    std::cout << str2 << " : " << word2.toCamelCase(str2) << std::endl;

    StringConverter word3;
    std::string str3 = "get_colour";
    std::cout << str3 << " : " << word3.toCamelCase(str3) << std::endl;

    StringConverter word4;
    std::string str4 = "is_this_first_entry";
    std::cout << str4 << " : " << word4.toCamelCase(str4) << std::endl;
    std::cout << std::endl;

    std::cout << "To snake_case: " << std::endl;
    StringConverter word5;
    std::string str5 = "camelCase";
    std::cout << str5 << " : " << word5.toSnakeCase(str5) << std::endl;

    StringConverter word6;
    std::string str6 = "helloSDA";
    std::cout << str6 << " : " << word6.toSnakeCase(str6) << std::endl;

    StringConverter word7;
    std::string str7 = "getColour";
    std::cout << str7 << " : " << word7.toSnakeCase(str7) << std::endl;

    StringConverter word8;
    std::string str8 = "isThisFirstEntry";
    std::cout << str8 << " : " << word8.toSnakeCase(str8) << std::endl;
    std::cout << std::endl;

}

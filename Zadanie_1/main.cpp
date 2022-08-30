// Zadanie_1

//Napisz funkcję, która odwróci podanego stringa.


#include <iostream>
#include <string>
#include <algorithm>

void reverseString (std::string str)
{
    for (int i = str.length() - 1; i >= 0; --i)
    {
        std::cout << str.at(i);
    }
}


int main()
{
    std::cout << "Hello World!" << std::endl;
    std::string str = "Hello World!";
    reverseString(str);
}

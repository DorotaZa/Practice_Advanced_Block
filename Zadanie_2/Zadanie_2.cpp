// Zadanie_2

//Napisz funkcję, która przyjmie dwa stringi i zwróci ile liter mają wspólnych.

#include <iostream>
#include <string>
#include <vector>

std::vector <char> mutualLetters (std::string first, std::string second)
{
    std::vector <char> vec;
    for (auto i = 0; i < first.length(); ++i)
    {
        if (first.at(i) == second.at(i))

        {
            vec.push_back(first.at(i));
        }
    }
    return vec;
}

int main()
{
    std::string a = "Barbara";
    std::string b = "Rabarbar";
    std::vector<char> vec = mutualLetters(a, b);

    auto print = mutualLetters(a, b);

    for (const auto p : print)
    {
        std::cout << p;
    }
   
}

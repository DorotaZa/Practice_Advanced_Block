// Zadanie_2

//Napisz funkcję, która przyjmie dwa stringi i zwróci ile liter mają wspólnych.

#include <iostream>
#include <string>
#include <vector>

//USING VECTOR
std::vector <char> mutualLetters(std::string first, std::string second)
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

//USING UNORDERED SORT -> TODO

int main()
{
    std::string a = "Barbara";
    std::string b = "Rabarbar";
    std::vector<char> vec = mutualLetters(a, b);

    auto print = mutualLetters(a, b);

    std::cout << vec.size() << std::endl;

}
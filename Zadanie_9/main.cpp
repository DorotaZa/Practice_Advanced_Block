// Zadanie_9

//Szyfr Cezara - zwany szyfrem przesuwnym.
//+ std::string cypher(std::string text, int secretValue)
//+ std::string decepher(std::string text, int secretValue)
//https://pl.wikipedia.org/wiki/Szyfr_Cezara

#include <iostream>
#include <string>
#include <algorithm>


std::string cipher (std::string text, int secretValue)
{
        auto lambda = [&](char& c)
        {
            if (c >= 97 && c <= 122)
            {
                if (c + secretValue <= 122)
                {
                    c += secretValue;
                }
                else
                {
                    c = 96 + (secretValue - (122 - c));
                }
            }
        };
       
    std::for_each(text.begin(), text.end(), lambda);
    return text;
}

std::string decipher(std::string text, int secretValue)
{
    auto lambda = [&](char& c)
    {
        if (c <= 97 && c >= 122)
        {
            if (c - secretValue >= 97)
            {
                c -= secretValue;
            }
            else
            {
                c = 121 - (secretValue + (97 + c));
            }
        }
    };
    std::for_each(text.begin(), text.end(), lambda);
    return text;
}

int main()
{
    std::string word = "abcd";
    std::cout << cipher(word, 3) << std::endl;;
    std::cout << decipher(word, 3) << std::endl;

}

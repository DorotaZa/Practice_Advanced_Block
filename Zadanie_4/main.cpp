// Zadanie_4

//Napisz klasę, która umożliwi kodowanie i dekodowanie stringa na alfabet Morse'a. Ignorujemy znaki specjalne
//KlasaMorseCodeTranslator
//toMorseCode
//fromMorseCode
//https ://morsecode.world/international/translator.html

#include <iostream>
#include "MorseCodeTranslator.hpp"

int main()
{
    MorseCodeTranslator code;
    std::string word = "ABCDEFGH";
    std::cout << "String of chars " << "'" << word << "'"<< " translates to " << "'" << code.toMorseCode(word) << "'" << " Morse code." << std::endl;
    std::string morse = ".- -... -.-.";
    std::cout << morse << " to " << code.fromMorseCode(morse) << std::endl;
    
}

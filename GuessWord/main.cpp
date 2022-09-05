// GuessWord

//Napisz gre w zgadywanie numeru. Program losuje liczbe z przedziału 1 - 100, a uzytkownik probuje zgadnąć.
//Po kazdej próbie program podpowiada czy liczba jest większa czy mniejsza od podanej przez gracza. Gdy, gracz jest
//blisko(np + -3) to program powinien dodatkowo powiadomić gracza o tym, że jest blisko.
//Zadanie można rozwiązac za pomocą jednej klasy GuessTheNumber

#include <iostream>
#include <cwctype>
#include "GuessTheNumber.hpp"

int main()

{
    char again;
    do
    {
        std::cout << "Welcome to Guess The Word Game! Lets start!" << std::endl;
        std::cout << std::endl;
        GuessTheNumber game;
        game.playGame();
        std::cout << "Do you want to play this game again? Choose y/n" << std::endl;
        std::cin >> again;
    } while (std::towlower(again) == 'y');
    

}


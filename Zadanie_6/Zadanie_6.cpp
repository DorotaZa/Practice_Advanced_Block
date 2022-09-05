// Zadanie_6

//Stwórz listę liczb od 1 do 1000. Rozdziel te liczby na dwie osobne listy : liczby pierwsze i nie liczby pierwsze.


#include <iostream>
#include <list>
#include "PrimeNumber.hpp"

int main()
{
    PrimeNumber list;
    list.generateList1To1000();
    list.splitOnPrimeAndNonPrimeNums();
}

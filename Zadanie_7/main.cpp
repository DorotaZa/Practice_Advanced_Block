// Zadanie_7

//Stworz listę 50 liczb całkowitych dodatnich i wypełnij ją losowymi wartościami. Wypisz ją.
//Następnie posortuj i wypisz listę tak, by na początku znalazły się wartości parzyste uporządkowane rosnąco, a za nimi wartości nieparzyste uporządkowane malejąco.
//Podpowiedz: Podziel listę na dwie osobne, odpowiednio posortuj, a następnie ja połącz w jedną.

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>


//LIST GENERATOR
std::vector <int> randomNumberListGenerator()
{
	std::random_device r;
	std::default_random_engine e(r());
	std::uniform_int_distribution<int> dist(1, 100); //zakres dopiero jako size

	std::vector <int> list;
	const int size = 50;

	for (int i = 0; i <size; ++i)
	{
		list.push_back(dist(e));
	}

	for (const auto &i : list)
	{
		std::cout << i << " ";
	}
	return list;
}



//SORTED LIST CREATOR 

std::vector <int> sortedListCreator(std::vector<int> l)
{
	std::vector <int> oddNumbersList;
	std::vector <int> evenNumbersList;
	std::vector <int> sortedList;


	for (auto it = l.begin(); it != l.end(); ++it)
	{
		if ((*it) % 2 == 0)
		{
			evenNumbersList.push_back(*it);
		}
		else
		{
			oddNumbersList.push_back(*it);
		}
	}

	std::sort(evenNumbersList.begin(), evenNumbersList.end());
	std::sort(oddNumbersList.begin(), oddNumbersList.end(), std::greater<int>());

	std::copy(evenNumbersList.begin(), evenNumbersList.end(), std::back_inserter(sortedList));
	std::copy(oddNumbersList.begin(), oddNumbersList.end(), std::back_inserter(sortedList));

	return sortedList;
}


//DISPLAY FUNCTION
void print(std::vector<int> l)
{
	for (const auto i : l)
	{
		std::cout << i << " ";
	}
}



int main()
{
	std::cout << "Unsorted random number list:" << std::endl;
	std::vector <int> numbersList;
	std::vector<int> sortedList;
	numbersList = randomNumberListGenerator();
	print(numbersList);
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Sorted random number list:" << std::endl;
	sortedList = sortedListCreator(numbersList);
	print(sortedList);
	

	
}

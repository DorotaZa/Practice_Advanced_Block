// Zadanie_6.2


#include <iostream>
#include <list>
#include <algorithm>

bool isPrimeNumber(int n)
{
	if (n < 2)
	{
		return false;
	}
	for (int i = 2; i <= n; ++i)
	{
		if (n % i != 0)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
}

int main()
{
	const int size = 1000;
	std::list <int> list;
	for (int i = 1; i <= size; ++i)
	{
		list.push_back(i);
	}

	/*for (auto i : list)
	{
		std::cout << i;
	}*/

	std::list<int> primeNums = list;
	std::list <int> nonPrimeNums = list;

	//PRIME NUMBERS GENERATOR 
	auto checkIfPrimeNumber = [](int n) {return isPrimeNumber(n); }; //warunek 

	primeNums.erase(std::remove_if(primeNums.begin(), primeNums.end(), checkIfPrimeNumber), primeNums.end());

	for (const auto& i : primeNums)
	{
		std::cout << i  << " ";
	}

	//NON-PRIME NUMBERS GENERATOR

	auto checkIfNonPrimeNumber = [&primeNums](int i) {return primeNums.end() != std::find(primeNums.begin(), primeNums.end(), i); }; //warun = przeszukaj prime liste i zwroc te, ktore sa od i rozne

	nonPrimeNums.erase(std::remove_if(nonPrimeNums.begin(), nonPrimeNums.end(), checkIfNonPrimeNumber), nonPrimeNums.end());

	for (const auto& i : nonPrimeNums)
	{
		std::cout << i << "*";
	}


}

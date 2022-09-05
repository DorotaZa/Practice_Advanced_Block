#include "PrimeNumber.hpp"
#include <list>
#include <algorithm>

void PrimeNumber::generateList1To1000()
{
	std::list <int> list;
	for (int i = 0; i <= 1000; ++i)
	{
		list.push_back(i);
	}
}

void PrimeNumber::printList(std::list<int> list)
{
	for (auto i : list)
	{
		std::cout << i << " ";
	}
}

bool PrimeNumber::isPrimeNumber(int n)
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

std::list<int> PrimeNumber::splitOnPrimeAndNonPrimeNums()
{
	std::list <int> nonPrimeNums;
	std::list<int> primeNums;
	

	auto splitOnPrimeAndNonPrime = [&](int n)
	{
		if (isPrimeNumber(n) == true)
		{
			primeNums.push_back(n);
		}
		else
		{
			nonPrimeNums.push_back(n);
		}
	};

	std::for_each(list.begin(), list.end(), splitOnPrimeAndNonPrime)
	return list;

}


#include "Change.hpp"
#include <iostream>
#include <vector>
#include <algorithm>

void Change::optimalChange(double amount)
{
	int nominal;
	amount *= 100; // zabezpieczenie sie przed zaokraglaniem do zlej kwoty (odnosi sie do float i double)

	for (auto it = denominations.begin(); it != denominations.end(); ++it)
	{
		nominal = amount / (*it);
		amount -= nominal * (*it);
		change.push_back(nominal);
	}

}

void Change::print()
{
	
	for (int i = 0; i < change.size(); ++i)
	{
		std::cout << denominations.at(i) << " zl" << " : " << i << std::endl;
	}
}

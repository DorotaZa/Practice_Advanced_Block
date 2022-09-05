#pragma once
#include <list>
#include <iostream>

class PrimeNumber
{
public:
	void generateList1To1000();
	void printList(std::list <int> list);
	bool isPrimeNumber(int n);
	std::list <int> splitOnPrimeAndNonPrimeNums();
};

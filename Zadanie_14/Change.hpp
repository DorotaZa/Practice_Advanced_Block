#pragma once
#include <vector>

class Change
{
private:
	std::vector <double> denominations = { 200,100,50,20,10,5,2,1,0.50,0.20,0.10,0.05,0.02,0.01 };

public:
	void change(double amount);

};

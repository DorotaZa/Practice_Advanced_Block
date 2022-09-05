#pragma once
#include <string>
#include <vector>

class StringCensor
{
public:
	void addCensoredLetter(char c);
	std::string censor(std::string s);
	bool checkIfCensored(char c);
private:
	std::vector <char> _codedLetters;
};

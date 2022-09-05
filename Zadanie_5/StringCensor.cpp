#include "StringCensor.hpp"
#include <vector>
#include <algorithm>

void StringCensor::addCensoredLetter (char c)
{
	_codedLetters.push_back(c);
}

std::string StringCensor::censor (std::string s)
{
	std::string codedString;

	auto lambda = [&](char& c)
	{
		if (checkIfCensored(c) == true)
		{
			c = '*';
		}
		codedString += c;
	};

	std::for_each(s.begin(), s.end(), lambda);

	return codedString;
}

bool StringCensor::checkIfCensored(char c)
{
	for (auto it = _codedLetters.begin(); it != _codedLetters.end(); ++it)
	{
		if (c == (*it))
		{
			return true;
		}
	}
	return false;
}

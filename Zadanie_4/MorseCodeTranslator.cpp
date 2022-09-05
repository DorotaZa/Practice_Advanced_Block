#include "MorseCodeTranslator.hpp"
#include <string>
#include <sstream> //for stringstrea


std::string MorseCodeTranslator::toMorseCode (std::string s)
{
	std::string result = {};
	
	for (const auto i : s)
	{
		result += _mapToMorseCode.at(i) + ' ';
	}

	return result;
}

std::string MorseCodeTranslator::fromMorseCode (std::string s)
{

	std::string result;
	std::string temp;
	std::stringstream sstream(s);

	while (std::getline(sstream, temp, ' '))
	{
		result += _mapFromMorseCode.at(temp);
	}

	return result;
}

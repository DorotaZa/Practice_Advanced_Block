#pragma once
#include <string>
#include <map>


class MorseCodeTranslator
{
public:
	std::string toMorseCode(std::string s);
	std::string fromMorseCode(std::string s);
private:
	std::map <char, std::string> _mapToMorseCode{ {'A', ".-"}, {'B', "-..."}, {'C', "-.-."}, {'D', "-.."}, {'E', "."}, {'F', "..-."}, {'G', "--."}, {'H', "...."} };
	std::map <std::string, char> _mapFromMorseCode{ {".-", 'A'}, {"-...", 'B'}, {"-.-.", 'C'}, {"-..", 'D'}, {".", 'E'}, {"..-.", 'F'}, {"--.", 'G'}, {"....", 'H'} };
};
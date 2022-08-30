#pragma once
#include <string>

class StringConverter
{
//private:
//	std::string _s;
public:
	//StringConverter (std::string s);
	static std::string toCamelCase (std::string s);
	static std::string toSnakeCase (std::string s);
};

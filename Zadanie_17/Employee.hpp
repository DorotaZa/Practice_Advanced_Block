#pragma once
#include <string>

enum class Gender
{
	FEMALE, MALE
};

class Employee
{
private:
	std::string _first_name;
	std::string _last_name;
	std::string _e_mail;
	std::string _login;
	std::string _password;
	int _salary = 0;
};

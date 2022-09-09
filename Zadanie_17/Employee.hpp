#pragma once
#include <string>
#include <iostream>



class Employee
{
public:

	enum class Gender
	{
		FEMALE,
		MALE,
		UNKNOWN
	};

	static Gender getGender(std::string s)
	{
		if (s == "Female")
		{
			return Gender::FEMALE;
		}
		else if (s == "Male")
		{
			return Gender::MALE;
		}
		else
		{
			return Gender::UNKNOWN;
		}
	}

	Employee();
	std::string getName() const;
	std::string getLastName() const;
	std::string getEmail() const;
	double getSalary() const;
	std::string getLogin() const;
	//std::string getPassword();

	void setName(const std::string name);
	void setLastName(const std::string lastName);
	void setEmail(const std::string email);
	void setSalary(const int salary);
	void setGender(const Gender gender);
	void setLogin(std::string login);
	//void setPassword(std::string password);


private:

	Gender _gender;
	std::string _firstName;
	std::string _lastName;
	std::string _eMail;
	double _salary;

	std::string _login;
	std::string _password;
	
};

std::ostream& operator<<(std::ostream& os, const Employee& e);


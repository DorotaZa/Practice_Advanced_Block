#include "Employee.hpp"

std::ostream& operator <<(std::ostream& os, const Employee& e)
{
os << e.getName() << ", ";
os << e.getLastName() << ", ";
os << e.getEmail() << ", ";
os << e.getSalary() << ", ";
os << e.getLogin() << "\n";

//e.getGender()
return os;
}

Employee::Employee()
{
}


//GETTERY
std::string Employee::getName() const
{
	return _firstName;
}

std::string Employee::getLastName() const
{
	return _lastName;
}

std::string Employee::getEmail() const
{
	return _eMail;
}

double Employee::getSalary() const
{
	return _salary;
}


//SETTERY
void Employee::setName(std::string name)
{
	_firstName = name;
}

void Employee::setLastName(std::string lastName)
{
	_lastName = lastName;
}

void Employee::setEmail(std::string email)
{
	_eMail = email;
}

void Employee::setSalary(int salary)
{
	_salary = salary;
}

void Employee::setGender(const Gender gender)
{
	_gender = gender;
}

void Employee::setLogin(std::string login)
{
	_login = login;
}

std::string Employee::getLogin() const
{
	return _login;
}

//
//std::string Employee::getPassword()
//{
//	return _password;
//}

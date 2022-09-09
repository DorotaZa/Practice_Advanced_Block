#pragma once
#include "Employee.hpp"

#include <vector>
#include <string>

class IEmployeeFileReader
{
public:
	virtual std::vector <Employee> readEmployees(std::string filePath) = 0;
	//virtual Employee readEmployee() = 0;  //metoda, ktora wczytuje pojedynczego uzytkownika
};

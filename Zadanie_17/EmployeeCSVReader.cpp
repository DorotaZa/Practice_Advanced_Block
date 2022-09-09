#include "EmployeeCSVReader.hpp"
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
#include <exception>

std::vector<Employee> EmployeeCSVReader::readEmployees (std::string filePath)
{
	//tutaj otworzyc plik, wczytac i sparsowac dane

	std::vector <Employee> employees;
	//filePath = { "employee_input.csv" };
	std::ifstream file(filePath);
	char delimiter = ',';
	std::string line;

	if (!file.is_open())
	{
		std::cout << "Sorry, I cannot find the file " << filePath << "." << std::endl;
		return employees;
	}

	if (std::getline(file, line)) //ignore first line; change for your own cout 
	{
		std::cout << filePath << " successfully open. You can access the data." << std::endl;
	}

	//first_name, last_name, email, gender, salary

	while (std::getline(file, line))
	{
		std::stringstream sstring(line);
		std::string data;
		Employee emp;

		if (std::getline(sstring, data, delimiter))
		{
			emp.setName(data);
		}
		else
		{
			continue; // continue zamiast wyjatku
		}
		if (std::getline(sstring, data, delimiter))
		{
			emp.setLastName(data);
		}
		else
		{
			continue;
		}
		if (std::getline(sstring, data, delimiter))
		{
			emp.setEmail(data);
		}
		else
		{
			continue;
		}
		if (std::getline(sstring, data, delimiter))
		{
			emp.setGender(Employee::getGender(data));
		}
		else
		{
			continue;
		}

		if (std::getline(sstring, data, delimiter))
		{
			emp.setSalary(std::stod(data));
		}
		else
		{
			continue;
		}

		if (std::getline(sstring, data, delimiter))
			try
			{
			emp.setSalary(std::stod(data));
			}
			catch(std::exception& error)  //std::invalid_argument i std::out_of_range
			{
				continue;
			}

		employees.push_back(emp);


	}

	return employees;
}

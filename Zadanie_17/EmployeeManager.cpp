#include "EmployeeManager.hpp"
#include "Employee.hpp"
#include <memory>
#include <random>
#include <string>
#include <iostream>
#include <algorithm>

EmployeeManager::EmployeeManager(std::shared_ptr<IEmployeeFileReader> fileReader, std::shared_ptr<IEmployeeFileWriter> fileWriter)
	:_fileReader(fileReader)
	,_fileWriter(fileWriter)
{};

void EmployeeManager::readDataFromFile(std::string filePath)
{
	_employees = _fileReader->readEmployees(filePath);
}

void EmployeeManager::generateLogins()
{
	
	std::string login;
	//std::tolower(login);
	std::vector <std::string> vectorOfLogins;

	//std::tolower(login);

	auto lambda = [&](Employee& e)
	{
		login += e.getName().substr(0, 2);
		login += e.getLastName().substr(0, 2);

		e.setLogin(login);
		vectorOfLogins.push_back(login);
		login.clear();

		////czesc z powtarzajacym sie loginem
		//auto checkIfDuplicate = std::find(vectorOfLogins.begin(), vectorOfLogins.end(), login);

		//while (checkIfDuplicate == std::end(vectorOfLogins)
		//{
		//	for (int i = 2; i < e.getName().size(); ++i)
		//	{

		//	}
		//}
		
	};

	
	//vectorOfLogins.push_back(login);

	std::for_each(_employees.begin(), _employees.end(), lambda);

	for (const auto& i : _employees)
	{
		std::cout << i << " "; 
	}

}

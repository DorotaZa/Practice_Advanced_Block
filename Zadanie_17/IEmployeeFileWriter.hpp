#pragma once
#include "Employee.hpp"

#include <vector>
#include <string>

class IEmployeeFileWriter
{
public:
	virtual void writeEmployees(std::vector <Employee> employees, std::string filePath) = 0;
};
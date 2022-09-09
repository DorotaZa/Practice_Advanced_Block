#pragma once

#include "IEmployeeFileReader.hpp"

class EmployeeCSVReader : public IEmployeeFileReader
{
public:
	std::vector <Employee> readEmployees(std::string filePath) override;  //wewnatrz tej funkcji mozemy sobie tez od razu tymczasowo utworzyc wszystkie zmienne do oblsugi plikow
private:
	//pola potrzebne do obslugi plik�w
};

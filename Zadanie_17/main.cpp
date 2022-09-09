// Zadanie_17

//Utwórz klasę Employee(first_name, last_name, email, gender(enum!), salary, login, password).
//Do obsługi pliku stwórz sobie klasy EmployeeFileReader, EmployeeFileWriter. Sprobuj samemu je zaprojektować.
//Dane wczytaj z pliku employee_input.csv.
//Jego struktura jest następująca :
//first_name, last_name, email, gender, salary
//
//a) Dla każdego pracownika wygeneruj unikalny login
//login powinien byc wygenerowany jako dwie pierwsze litery nazwiska i imienia,
//a jeżeli już taki jest zajęty to dodajmy kolejne litery nazwiska, aż do uzyskania wolnego loginu,
//np: Roby Helian->rohe
//Robert Hello->rohel
//Rose Helian->roheli
//Robert Helian->rohelian1
//b) Wygeneruj dla każdego pracownika losowe hasło składające się z :
//-od 8 - 12 znaków(losowo)
//- przynajmniej 1 litery(mełe i duze), 1 cyfry i 1 znaku specjalnego(ze zbioru : !? @#$ % &+= -)
//A następnie zapisz do pliku passwords.csv loginy, adresy email i hasła w formacie :
//login, mail, password
//c)Wylicz statystyki :
//-Ilość osób o imieniu na każdą z liter alfabetu
//- Ilość unikalnych imion, oraz najczęściej występujące imię(lub imiona jeśli mają taką samą częstotliwość)
//- Średnie zarobki wszystkich pracowników, średnie zarobki kobiet i mężczyzn
//d) Do pliku top10_salary.csv wypisz imiona, nazwiska i zarobki 10 najlepiej opłacanych osób
//a do pliku least10_salary.csv wypisz imiona, nazwiska i zarobki 10 najgorzej zarabiających osób

#include <iostream>
#include "EmployeeManager.hpp"
#include "EmployeeCSVReader.hpp"
#include "EmployeeCSVWriter.hpp"

int main()
{
    EmployeeManager manager (std::make_shared<EmployeeCSVReader>(), std::make_shared<EmployeeCSVWriter>());
    //EmployeeManager empManager2(std::make_shared<EmployeeJSONReader>(), std::make_shared<EmployeeJSONWriter>());
    manager.readDataFromFile("employee_input.csv");
    manager.generateLogins();

}

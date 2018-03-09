// Sálario com aumento.

#include <iostream>
#include "salario-com-aumento.h"

double getSalary()
{
    std::cout << "Insira seu salario > R$ ";
    double salary;
    std::cin >> salary;

    if (isValidInput())
        return salary;
    else
        getSalary();
}

double getPercentageIncrease()
{
    std::cout << "Insira o percentual de aumento > %";
    double percentage;
    std::cin >> percentage;

    if (isValidInput())
        return percentage;
    else
        getPercentageIncrease();
}

bool isValidInput()
{
    if (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(32767, '\n');
        std::cerr << "isValidInput(): valor invalido.\n";
        return false;
    }
    else
    {
        std::cin.ignore(323767, '\n');
        return true;
    }
}

double calculateSalaryIncrease(double salary, double percentage)
{
    return salary + (salary * (percentage / 100));
}

void printIncreasedSalary(double final_salary)
{
    std::cout << "\nSalario Final: " << final_salary;
}
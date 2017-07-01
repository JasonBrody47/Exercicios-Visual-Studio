// Salario com aumento.

#include "stdafx.h"
#include <iostream>
#include "salario-com-aumento.h"

double getSalary()
{
    std::cout << "Insira seu salario > ";
    double salary{};
    std::cin >> salary;

    return salary;
}

double getPercentageIncrease()
{
    std::cout << "\nInsira o percentual de aumento > ";
    double percentage{};
    std::cin >> percentage;

    return percentage;
}

double calculateSalaryIncrease(double salary, double percentage)
{
    // Converte a porcentagem para decimal.
    percentage /= 100;

    double increase{ salary * percentage };
    salary += increase;

    return salary;
}

void printIncreasedSalary(double final_salary)
{
    std::cout << "\nSalario Final: " << final_salary;
}
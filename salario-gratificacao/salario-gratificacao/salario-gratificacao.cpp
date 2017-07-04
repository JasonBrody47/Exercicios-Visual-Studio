// Salario com Gratificacao 1.

#include "stdafx.h"
#include <iostream>
#include "salario-gratificacao.h"

Salary getInitialSalary()
{
    std::cout << "Insira seu salario base > ";
    Salary salary;
    std::cin >> salary.initial_salary;

    if (isValidInput())
        return salary;
    else
        getInitialSalary();
}

bool isValidInput()
{
    if (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(32767, '\n');
        std::cout << "isValidInput(): valor invalido!\n";
        return false;
    }
    else
    {
        std::cin.ignore(32767, '\n');
        return true;
    }
}

Salary calculateSalaryGratification(Salary salary)
{
    salary.gratification = salary.initial_salary + (salary.initial_salary *
        gratification);
    salary.tax = salary.initial_salary - (salary.gratification * tax);
    return salary;
}

void printSalary(Salary salary)
{
    std::cout << "Salario base: " << salary.initial_salary;
    std::cout << "\nSalario base com gratificacao: " << salary.gratification;
    std::cout << "\nSalario gratificado com imposto: " << salary.tax;
}

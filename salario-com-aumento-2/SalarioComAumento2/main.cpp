// Salario com aumento.

#include "stdafx.h"
#include <iostream>
#include "salario-com-aumento.h"

int main()
{
    double salary{ getSalary() };
    double percentage{ getPercentageIncrease() };

    double increased_salary{ calculateSalaryIncrease(salary, percentage) };

    printIncreasedSalary(increased_salary);

    std::cin.get();
    return 0;
}
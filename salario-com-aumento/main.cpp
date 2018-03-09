// Sálario com aumento.

#include <iostream>
#include "salario-com-aumento.h"

int main()
{
    double salary{ getSalary() };
    double percentage{ getPercentageIncrease() };

    double final_salary{ calculateSalaryIncrease(salary, percentage) };
    printIncreasedSalary(final_salary);

    std::cin.get();
    return 0;
}
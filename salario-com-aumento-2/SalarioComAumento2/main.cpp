// Copyright (C) 2017 Luan Eduardo.
//
// Este arquivo é parte do programa SalarioComAumento2.

#include "stdafx.h"
#include <iostream>
#include "salario_com_aumento2.h"

int main()
{
    double salary{ getSalary() };
    double percentage{ getPercentageIncrease() };

    double increased_salary{ calculateSalaryIncrease(salary, percentage) };

    printIncreasedSalary(increased_salary);

    std::cin.get();
    return 0;
}
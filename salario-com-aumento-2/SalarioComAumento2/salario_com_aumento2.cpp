// Copyright (C) 2017 Luan Eduardo.
//
// Este arquivo é parte do programa SalarioComAumento2.

#include "stdafx.h"
#include <iostream>
#include "salario_com_aumento2.h"

double getSalary()
{
    std::cout << "Insira seu salario > ";
    double salary{};
    std::cin >> salary;
    clearInputBuffer();

    return salary;
}

double getPercentageIncrease()
{
    std::cout << "\nInsira o percentual de aumento > ";
    double percentage{};
    std::cin >> percentage;
    clearInputBuffer();

    return percentage;
}

void clearInputBuffer()
{
    std::cin.clear();
    std::cin.ignore();
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
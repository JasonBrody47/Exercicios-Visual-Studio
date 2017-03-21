// Copyright (C) 2017 Luan Eduardo.
//
// Este arquivo é parte do programa SalarioComAumento1.

#include "stdafx.h"
#include <iostream>

void getSalary();
void calculateSalaryIncrease(const double increased_salary);
void printIncreasedSalary(const double final_salary);

int main()
{
    getSalary();
    std::cin.get();
    return 0;
}

void getSalary()
{
    std::cout << "Insira seu salario > ";
    double salary{};
    std::cin >> salary;

    // Limpa erros e caracteres no buffer de entrada.
    std::cin.clear();
    std::cin.ignore();

    calculateSalaryIncrease(salary);
}

void calculateSalaryIncrease(double increased_salary)
{
    // 0.25 => 25%
    double increase = increased_salary * 0.25;
    increased_salary += increase;

    printIncreasedSalary(increased_salary);
}

void printIncreasedSalary(const double final_salary)
{
    std::cout << "\nSalario final (com aumento): R$ " << final_salary;
}
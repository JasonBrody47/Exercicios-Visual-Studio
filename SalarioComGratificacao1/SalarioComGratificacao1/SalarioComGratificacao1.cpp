// Copyright (C) 2017 Luan Eduardo.
//
// Este arquivo é parte do programa SalarioComGratificacao1.

#include "stdafx.h"
#include <iostream>
#include "constants.h"

void getInitialSalary();
void calculateSalaryGratification(const double initial_salary);
void printSalaryGratificationAndTax(const double original_salary,
    const double salary_with_gratification, const double salary_with_tax);

int main()
{
    getInitialSalary();

    std::cin.get();

    return 0;
}

void getInitialSalary()
{
    std::cout << "Insira seu salario base > ";
    double initial_salary{};
    std::cin >> initial_salary;

    // Limpa erros e caracteres no buffer de entrada.
    std::cin.clear();
    std::cin.ignore();

    calculateSalaryGratification(initial_salary);
}

void calculateSalaryGratification(const double initial_salary)
{
    double salary_with_gratification{ initial_salary +
        (initial_salary * constants::gratification) };

    double salary_with_tax{ salary_with_gratification -
        (salary_with_gratification * constants::tax) };

    printSalaryGratificationAndTax(initial_salary, salary_with_gratification, salary_with_tax);
}

// TODO: reduzir o numero de argumentos.
void printSalaryGratificationAndTax(const double original_salary,
    const double salary_with_gratification, const double salary_with_tax)
{
    std::cout << "Salario base: " << original_salary;
    std::cout << "\nSalario base com gratificacao: " << salary_with_gratification;
    std::cout << "\nSalario final com imposto: " << salary_with_tax;
}

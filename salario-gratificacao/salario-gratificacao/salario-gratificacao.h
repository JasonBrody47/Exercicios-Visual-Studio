// Salario com Gratificacao 1.

#pragma once
#ifndef SALARIO_GRATIFICACAO_H
#define SALARIO_GRATIFICACAO_H

const double gratification{ 0.05 };
const double tax{ 0.07 };

struct Salary
{
    double initial_salary;
    double tax;
    double gratification;
};

Salary getInitialSalary();
bool isValidInput();
Salary calculateSalaryGratification(Salary salary);
void printSalary(Salary salary);

#endif // !SALARIO_GRATIFICACAO_H

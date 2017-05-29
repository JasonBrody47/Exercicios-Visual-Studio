// Copyright (C) 2017 Luan Eduardo.
//
// Este arquivo é parte do programa SalarioComAumento2.

#pragma once
#ifndef SALARIO_COM_AUMENTO_H
#define SALARIO_COM_AUMENTO_H

double getSalary();

double getPercentageIncrease();

void clearInputBuffer();

double calculateSalaryIncrease(double salary, double percentage);

void printIncreasedSalary(double final_salary);

#endif // !SALARIO_COM_AUMENTO_H
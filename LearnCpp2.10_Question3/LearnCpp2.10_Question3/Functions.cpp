// Copyright (C) 2017 Luan Eduardo.
//
// Este arquivo é parte do programa LearnCpp2.10_Question3.

#include "stdafx.h"
#include <iostream>
#include "Functions.h"

double getDoubleNumber()
{
    std::cout << "Insira um numero com decimais > ";
    double number{};
    std::cin >> number;
    clearInputBuffer();

    return number;
}

void clearInputBuffer()
{
    std::cin.clear();
    std::cin.ignore();
}

char getValidOperator()
{
    std::cout << "Insira um operador matematico (+, -, * ou /) sem espacos > ";
    char user_operator{};
    std::cin >> user_operator;
    clearInputBuffer();

    if (isValidOperator(user_operator))
    {
        return user_operator;
    }
    else
    {
        getValidOperator();
    }
}

bool isValidOperator(char check_operator)
{
    if ((check_operator == '+') || (check_operator == '-') ||
        (check_operator == '*') || (check_operator == '/'))
    {
        return true;
    }
    std::cout << "\nOperador invalido!\n";
    return false;
}

double calculateDoubleOperation(const double calc_number_1,
    const char calc_operator, const double calc_number_2)
{
    double calc_result{};

    if (calc_operator == '+')
    {
        calc_result = calc_number_1 + calc_number_2;
        return calc_result;
    }
    else if (calc_operator == '-')
    {
        calc_result = calc_number_1 - calc_number_2;
        return calc_result;
    }
    else if (calc_operator == '*')
    {
        calc_result = calc_number_1 * calc_number_2;
        return calc_result;
    }
    else if (calc_operator == '/')
    {
        calc_result = calc_number_1 / calc_number_2;
        return calc_result;
    }
    else
    {
        std::cout << "Algo de errado esta acontecendo no operador...\n";
    }
}

void printCalculatedResult(const double print_number_1, const char print_operator,
    const double print_number_2, const double print_result)
{
    std::cout << "\n" << "Operacao: " << print_number_1 << " " << print_operator <<
        " " << print_number_2 << " = " << print_result << "\n";
}
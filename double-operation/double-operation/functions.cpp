// LearnCpp2.10_Question3.

#include "stdafx.h"
#include <iostream>
#include "Functions.h"

double getDoubleNumber()
{
    while (true)
    {
        std::cout << "Insira um numero com decimais > ";
        double number{};
        std::cin >> number;

        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "getDoubleNumber(): valor invalido!\n";
        }
        else
        {
            std::cin.ignore(32767, '\n');
            return number;
        }
    }
}

operator_t getOperator()
{
    std::cout << "Insira um operador matematico (+, -, * ou /) sem espacos > ";
    operator_t user_operator;
    std::cin >> user_operator;

    if (isValidOperator(user_operator))
        return user_operator;
    else
        getOperator();
}

bool isValidOperator(operator_t check_op)
{
    if ((check_op == '+') || (check_op == '-') ||
        (check_op == '*') || (check_op == '/'))
    {
        std::cin.ignore(32767, '\n');
        return true;
    }
    std::cin.ignore(32767, '\n');
    std::cout << "isValidOperator(): operador invalido!\n";
    return false;
}

double calculateOperation(cdouble_t num_1, coperator_t calc_op, cdouble_t num_2)
{
    switch (calc_op)
    {
    case '+':
        return num_1 + num_2;
    case '-':
        return num_1 - num_2;
    case '*':
        return num_1 * num_2;
    case '/':
        return num_1 / num_2;
    default:
        std::cout << "calculateOperation(): invalid operator!\n";
        break;
    }
}

void printResult(cdouble_t num_1, coperator_t op, cdouble_t num_2, cdouble_t result)
{
    std::cout << "\n" << "Operacao: " << num_1 << " " << op << " " << num_2 <<
        " = " << result << "\n";
}
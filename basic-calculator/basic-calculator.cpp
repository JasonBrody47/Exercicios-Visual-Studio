
#include "stdafx.h"
#include "basic-calculator.h"
#include <iostream>
#include <array>

int32_t getUserInteger()
{
    static int32_t number;
    while (true)
    {
        std::cout << "Insira um numero inteiro > ";
        std::cin >> number;

        if (isValidInteger())
            break;
    }
    return number;
}

inline bool isValidInteger()
{
    if (std::cin.fail())
    {
        std::cerr << "isValidInteger(): Inteiro Invalido!\n";
        std::cin.clear();
        std::cin.ignore(32767, '\n');
        return false;
    }
    std::cin.ignore(32767, '\n');
    return true;
}

char getUserOperator()
{
    char user_operator;
    while (true)
    {
        std::cout << "Insira um operador matematico (+, -, *, /) > ";
        std::cin >> user_operator;

        if (isValidOperator(user_operator))
            break;
        std::cin.ignore(32767, '\n');
    }
    return user_operator;
}

inline bool isValidOperator(char user_operator)
{
    switch (user_operator)
    {
    case '+':
    case '-':
    case '*':
    case '/':
        return true;
    default:
        std::cerr << "isValidOperator(): Operador invalido!\n";
        return false;
    }
}

inline int32_t add(int32_t number_1, int32_t number_2)
{
    return number_1 + number_2;
}

inline int32_t subtract(int32_t number_1, int32_t number_2)
{
    return number_1 - number_2;
}

inline int32_t multiply(int32_t number_1, int32_t number_2)
{
    return number_1 * number_2;
}

inline int32_t divide(int32_t number_1, int32_t number_2)
{
    return number_1 / number_2;
}

arithmeticFcn getArithmeticFunction(char user_operator)
{
    for (auto &arith : arithmeticArray)
    {
        if (arith.math_operator == user_operator)
            return arith.fcn;
    }
    return add;
}

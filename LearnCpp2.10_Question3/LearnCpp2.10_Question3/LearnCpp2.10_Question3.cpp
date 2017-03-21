// Copyright (C) 2017 Luan Eduardo.
//
// Este arquivo é parte do programa LearnCpp2.10_Question3.

#include "stdafx.h"
#include <iostream>
#include "Functions.h"

int main()
{
    const double number_1{ getDoubleNumber() };
    const double number_2{ getDoubleNumber() };
    const char math_operator{ getValidOperator() };

    const double result{ calculateDoubleOperation(number_1, math_operator, number_2) };

    printCalculatedResult(number_1, math_operator, number_2, result);

    std::cin.get();

    return 0;
}

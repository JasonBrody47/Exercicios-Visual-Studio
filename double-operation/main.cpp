// LearnCpp2.10_Question3.

#include "stdafx.h"
#include <iostream>
#include "Functions.h"

int main()
{
    cdouble_t num_1{ getDoubleNumber() };
    coperator_t op{ getOperator() };
    cdouble_t num_2{ getDoubleNumber() };

    cdouble_t result{ calculateOperation(num_1, op, num_2) };
    printResult(num_1, op, num_2, result);

    std::cin.get();
    return 0;
}

// Salario com Gratificacao 1.

#include "stdafx.h"
#include <iostream>
#include "salario-gratificacao.h"

int main()
{
    printSalary(calculateSalaryGratification(getInitialSalary()));

    std::cin.get();
    return 0;
}
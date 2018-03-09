#include "basic-calculator.h"
#include <iostream>

int main()
{
    int32_t number_1{ getUserInteger() };
    char user_operator{ getUserOperator() };
    int32_t number_2{ getUserInteger() };

    arithmeticFcn arithmeticFunction{ getArithmeticFunction(user_operator) };

    std::cout << number_1 << " " << user_operator << " " << number_2 <<
        " = " << arithmeticFunction(number_1, number_2) << "\n";

    std::cin.get();
    return 0;
}
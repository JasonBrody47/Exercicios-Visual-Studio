
#include "stdafx.h"
#include <iostream>
#include <utility>

void swapTwoIntegers(int &num_1, int &num_2);

int main()
{
    int number_1{ 10 };
    int number_2{ 23 };

    std::cout << number_1 << " " << number_2 << "\n";
    swapTwoIntegers(number_1, number_2);
    std::cout << number_1 << " " << number_2 << "\n";

    std::cin.get();
    return 0;
}

void swapTwoIntegers(int &num_1, int &num_2)
{
    std::swap(num_1, num_2);
}


// LearnCpp1.12_Question3.

#include "stdafx.h"
#include <iostream>

std::int64_t getIntegerNumber()
{
    while (true)
    {
        std::cout << "Insira um numero inteiro > ";
        std::int64_t number;
        std::cin >> number;

        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "getIntegerNumber(): numero invalido!\n";
        }
        else
        {
            std::cin.ignore(32767, '\n');
            return number;
        }
    }
}

void printSumOfNumbers(std::int64_t result)
{
    std::cout << "A soma e: " << result << "\n";
}
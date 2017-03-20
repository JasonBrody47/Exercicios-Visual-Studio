// Copyright (C) 2017 Luan Eduardo.
//
// Este arquivo faz parte do programa LearnCpp1.12_Question1.

#include "stdafx.h"
#include <cstdint>
#include <iostream>

int getNumber();
void printSumOfNumbers(std::int32_t print_result);

int main()
{
    std::int32_t number_1{ getNumber() };
    std::int32_t number_2{ getNumber() };

    printSumOfNumbers(number_1 + number_2);

    std::cin.get();

    return 0;
}

int getNumber()
{
    std::cout << "Insira um numero inteiro > ";
    std::int32_t number;
    std::cin >> number;
    std::cin.clear();
    std::cin.ignore();

    return number;
}

void printSumOfNumbers(std::int32_t print_result)
{
    std::cout << "A soma e: " << print_result << "\n";
}

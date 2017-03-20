// Copyright (C) 2017 Luan Eduardo.
//
// LearnCpp1.12_Question.cpp faz parte do programa LearnCpp1.12_Question.cpp.

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


// Copyright (C) 2017 Luan Eduardo.
//
// Este arquivo � parte do programa LearnCpp1.12_Question3.

#include "stdafx.h"
#include "io.h"
#include <cstdint>
#include <iostream>

int main()
{
    std::int32_t number_1{ getIntegerNumber() };
    std::int32_t number_2{ getIntegerNumber() };

    printSumOfNumbers(number_1 + number_2);

    std::cin.get();

    return 0;
}


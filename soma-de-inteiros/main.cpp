// LearnCpp1.12_Question3.

#include "stdafx.h"
#include "io.h"
#include <cstdint>
#include <iostream>

int main()
{
    // Ainda pode ocorrer overflow da soma dos inteiros.
    printSumOfNumbers(getIntegerNumber() + getIntegerNumber());

    std::cin.get();
    return 0;
}


// Copyright (C) 2017 Luan Eduardo.
//
// Este arquivo é parte do programa LearnCpp1.12_Question2.

#include "stdafx.h"
#include <cstdint>
#include <iostream>

int getIntegerNumber()
{
    std::cout << "Insira um numero inteiro > ";
    std::int32_t number{};
    std::cin >> number;

    // Limpa erros e caracteres do buffer de entrada.
    std::cin.clear();
    std::cin.ignore();

    return number;
}

void printSumOfNumbers(std::int32_t print_result)
{
    std::cout << "A soma e: " << print_result << "\n";
}
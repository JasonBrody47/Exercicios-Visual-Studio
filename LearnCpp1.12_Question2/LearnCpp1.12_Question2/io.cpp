// Copyright (C) 2017 Luan Eduardo.
//
// io.cpp faz parte do programa LearnCpp1.12_Question.cpp.

#include "stdafx.h"
#include <cstdint>
#include <iostream>

int getNumber()
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
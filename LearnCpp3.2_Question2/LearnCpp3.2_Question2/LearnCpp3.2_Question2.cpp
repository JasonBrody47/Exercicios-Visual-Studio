// Copyright (C) 2017 Luan Eduardo
//
// Este arquivo e parte do programa LearnCpp3.2_Question2.

#include "stdafx.h"
#include <iostream>
#include <cstdint>

void getIntegerNumber();
void isEven(std::int32_t number);

int main()
{
    getIntegerNumber();

    std::cin.get();

    return 0;
}

void getIntegerNumber()
{
    std::int32_t number{ 0 };
    std::cout << "Insira um numero inteiro > ";
    std::cin >> number;

    // Limpa erros e caracteres no buffer de entrada.
    std::cin.clear();
    std::cin.ignore();

    isEven(number);
}

void isEven(std::int32_t number)
{
    if (number % 2 == 0)
    {
        std::cout << "O numero e par" << "\n";
    }
    else
    {
        std::cout << "O numero e impar" << "\n";
    }
}

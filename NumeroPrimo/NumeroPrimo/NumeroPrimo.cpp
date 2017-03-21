// Copyright (C) 2017 Luan Eduardo.
//
// Este arquivo é parte do programa NumerosPrimo.

#include "stdafx.h"
#include <cstdint>
#include <iostream>

std::int16_t getUserDigit();
void isPrime(std::int16_t prime);

int main()
{
    std::int16_t prime_number{ getUserDigit() };
    isPrime(prime_number);

    std::cin.get();

    return 0;
}

std::int16_t getUserDigit()
{
    std::cout << "Insira um numero com 1 digito > ";
    std::int16_t number;
    std::cin >> number;

    // Limpa erros e caracteres do buffer de entrada.
    std::cin.clear();
    std::cin.ignore();

    return number;
}

void isPrime(std::int16_t prime)
{
    if ((prime == 2) || (prime == 3) || (prime == 5) || (prime == 7))
    {
        std::cout << prime << " is a prime number!\n";
    }
    else
    {
        std::cout << prime << " is not a prime number.\n";
    }
}
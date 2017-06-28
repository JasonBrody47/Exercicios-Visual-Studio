// Métodos para gerar números pseudo-aleatórios em C++.

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>

uint32_t userSeed();
void printRandomNumbers(uint32_t seed);
void testTimeFunction();
uint32_t seedByTime();

int main()
{
    uint32_t seed{ userSeed() };
    printRandomNumbers(seed);
    printRandomNumbers(seedByTime());
    
    testTimeFunction();

    std::cin.get();
    return 0;
}

uint32_t userSeed()
{
    std::cout << "Insira uma seed inicial > ";
    uint32_t seed;
    std::cin >> seed;
    std::cin.ignore();
    std::cin.clear();
    std::cout << "Numeros aleatorios a partir da seed do usuario:\n\n";

    return seed;
}

void printRandomNumbers(uint32_t seed)
{
    srand(seed);
    for (int32_t i = 0; i < 50; ++i)
    {
        std::cout << rand() << "\t";
        if ((i + 1) % 5 == 0)
            std::cout << "\n";
    }
}

uint32_t seedByTime()
{
    std::cout << "\nNumeros aleatorios a partir do relogio do sistema:\n\n";
    return static_cast<unsigned int>(std::time(nullptr));
}

void testTimeFunction()
{
    std::cout << "\nTempo em segundos desde a meia-noite de 01/01/1970: " << time(0) << "\n";
}
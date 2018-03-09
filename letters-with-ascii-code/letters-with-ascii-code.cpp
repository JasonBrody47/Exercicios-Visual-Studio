// LearnCpp: 55 while statements, exercício 2.

#include "stdafx.h"
#include <iostream>
#include <cstdint>

void printLetters();

int main()
{
    std::cout << "Letras de A a Z com seus codigos ASCII\n\n";
    printLetters();

    std::cin.get();

    return 0;
}

void printLetters()
{
    char ascii{ 'a' };
    while (ascii <= 'z')
    {
        std::cout << ascii << " = " << static_cast<int>(ascii) << "\n";
        ++ascii;
    }
}

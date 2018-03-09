// LearnCpp: 5.7 — For statements, exercício 1.

#include "stdafx.h"
#include <iostream>
#include <cstdint>

int main()
{
    int32_t limite{ 20 };
    for (int32_t par = 0; par <= limite; par++)
    {
        if ((par % 2) == 0)
            std::cout << par << " ";
    }

    std::cin.get();

    return 0;
}
// Sequência de números em cascata.

#include "stdafx.h"
#include <iostream>
#include <cstdint>
#include "functions.h"

int32_t getNumberLimit()
{
    std::cout << "Insira um valor entre 1 e 50 > ";
    int32_t limit;
    std::cin >> limit;

    if (isValidInput(limit))
        return limit;
    else
        getNumberLimit();
}

bool isValidInput(int32_t input)
{
    if (std::cin.fail() || (input <= 0 || input > 50))
    {
        std::cin.clear();
        std::cin.ignore(32767, '\n');
        std::cerr << "getNumberLimit(): valor invalido!\n";
        return false;
    }
    else
    {
        std::cin.ignore(32767, '\n');
        return true;
    }
}

void printNumbersInRight(int32_t limit)
{
    /*
    5 4 3 2 1
    4 3 2 1
    3 2 1
    2 1
    1
    */

    for (int32_t line = limit; line >= 1; --line)
    {
        for (int32_t column = line; column >= 1; --column)
        {
            if (column < 10)
                std::cout << "0";
            std::cout << column << " ";
        }
        std::cout << "\n";
    }
}

void printNumbersInLeft(int32_t limit)
{
    /*
            1
          2 1
        3 2 1
      4 3 2 1
    5 4 3 2 1
    */

    for (int32_t line = 1; line <= limit; ++line)
    {
        for (int32_t column = limit; column >= 1; --column)
        {
            if (column > line)
                std::cout << "   ";
            else
            {
                if (column < 10)
                    std::cout << "0";
                std::cout << column << " ";
            }
        }
        std::cout << "\n";
    }
}
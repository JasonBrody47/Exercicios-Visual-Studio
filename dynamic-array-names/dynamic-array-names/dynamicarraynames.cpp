#include "stdafx.h"
#include <cstdint>
#include <iostream>
#include <string>
#include <utility> // For swap();
#include "dynamicarraynames.h"

int16_t getNumberOfNames()
{
    int16_t names_number;
    while (true)
    {
        std::cout << "Quantos nomes voce quer inserir? (Max = " <<
            names_limit::max << ") ";
        std::cin >> names_number;

        if (isValidInput(names_number))
            break;
    }
    return names_number;
}

bool isValidInput(int16_t input)
{
    if (std::cin.fail() || input < names_limit::min || input > names_limit::max)
    {
        std::cout << "isValidInput(): invalid input.\n";
        std::cin.clear();
        std::cin.ignore(32767, '\n');
        return false;
    }
    std::cin.ignore(32767, '\n');
    return true;
}

std::string* getNames(int16_t length)
{
    // Aloca um array de strings dinamicamente.
    std::string *names{ new std::string[length] };

    for (int16_t i = 0; i < length; ++i)
    {
        std::cout << "Insira um nome #" << i + 1 << ": ";
        std::getline(std::cin, names[i]);
    }
    return names;
}

std::string* sortNames(std::string *names, int16_t length)
{
    for (int16_t startIndex = 0; startIndex < length - 1; ++startIndex)
    {
        int16_t smallIndex{ startIndex };
        for (int16_t currentIndex = startIndex + 1; currentIndex < length;
            ++currentIndex)
        {
            if (names[currentIndex] < names[smallIndex])
                std::swap(names[currentIndex], names[smallIndex]);
        }
    }
    return names;
}

void printSortedNames(std::string *names, int16_t length)
{
    std::cout << "\nAqui esta sua lista ordenada:\n";
    for (int16_t i = 0; i < length; i++)
    {
        std::cout << "Nome #" << i + 1 << ": " << names[i] << "\n";
    }
}



#include "stdafx.h"
#include <cstdint>
#include <iostream>
#include <string>
#include <utility>
#include "dynamicarraynames.h"

int32_t getNumberOfNames()
{
    int32_t names_number;
    while (true)
    {
        std::cout << "Quantos nomes voce quer inserir? ";
        std::cin >> names_number;

        if (isValidInput() && !(names_number < 1 || names_number > 30))
            break;
    }
    return names_number;
}

bool isValidInput()
{
    if (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(32767, '\n');
        return false;
    }
    std::cin.ignore(32767, '\n');
    return true;
}

std::string* getNames(int32_t length)
{
    // Aloca um array de strings dinamicamente.
    std::string *names{ new std::string[length] };

    for (int32_t i = 0; i < length; ++i)
    {
        std::cout << "Insira um nome #" << i + 1 << ": ";
        std::cin >> names[i];
    }
    std::cin.ignore(32767, '\n');
    return names;
}

std::string* sortNames(std::string *names, int32_t length)
{
    for (int32_t startIndex = 0; startIndex < length - 1; ++startIndex)
    {
        int32_t smallIndex{ startIndex };
        for (int32_t currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
        {
            if (names[currentIndex] < names[smallIndex])
                std::swap(names[currentIndex], names[smallIndex]);
        }
    }
    return names;
}

void printSortedNames(std::string * names, int32_t length)
{
    std::cout << "\nAqui esta sua lista ordenada:\n";
    for (int32_t i = 0; i < length; i++)
    {
        std::cout << "Nome #" << i + 1 << ": " << names[i] << "\n";
    }
}



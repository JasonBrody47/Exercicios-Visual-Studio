//

#include "stdafx.h"
#include <iostream>
#include <cstdint>

void printNumbersInRight(int32_t limit);
void printNumbersInLeft(int32_t limit);

int main()
{
    std::cout << "Insira o valor limite da lista > ";
    int32_t user_limit;
    std::cin >> user_limit;

    // Limpa o buffer de entrada.
    std::cin.ignore();
    std::cin.clear();

    printNumbersInRight(user_limit);
    printNumbersInLeft(user_limit);

    std::cin.get();
    return 0;
}

void printNumbersInRight(int32_t limit)
{
    while (limit >= 1)
    {
        int32_t line{ limit };
        while (line >= 1)
        {
            if (line < 10)
            {
                std::cout << "0";
            }
            std::cout << line << " ";
            --line;
        }
        std::cout << "\n";
        --limit;
    }
}

void printNumbersInLeft(int32_t limit)
{
    int32_t linhas{ limit };
    int32_t contador{ 1 };

    while (linhas >= 1)
    {
        int32_t colunas{ limit };
        while (colunas >= 1)
        {
            if (colunas > contador)
            {
                std::cout << "   ";
            }
            else
            {
                if (colunas < 10)
                {
                    std::cout << "0";
                }
                std::cout << colunas << " ";
            }
            --colunas;
        }
        std::cout << "\n";
        --linhas;
        ++contador;
    }
}

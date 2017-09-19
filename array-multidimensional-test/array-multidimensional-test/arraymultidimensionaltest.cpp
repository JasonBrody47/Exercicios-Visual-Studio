// arraymultidimensionaltest.cpp: Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
#include <cstdint>

void multiplicationTable();
void charTable();

int main()
{
    multiplicationTable();
    std::cout << "\n";
    charTable();

    std::cin.get();
    return 0;
}

void multiplicationTable()
{
    const int32_t rowLength{ 10 };
    const int32_t colLength{ 10 };

    int32_t matriz[rowLength][colLength]{ 0 };

    // Calcula a tabela de multiplicacao.
    for (int32_t row = 0; row < rowLength; ++row)
    {
        for (int32_t col = 0; col < colLength; ++col)
            matriz[row][col] = row * col;
    }


    // Imprime a tabela inteira.
    for (int32_t row = 1; row < rowLength; ++row)
    {
        for (int32_t col = 1; col < colLength; ++col)
        {
            if (matriz[row][col] < 10)
                std::cout << "0";
            std::cout << matriz[row][col] << " ";
        }
        std::cout << "\n";
    }
}

void charTable()
{
    const int32_t rowLength{ 5 };
    const int32_t colLength{ 5 };

    char matriz[rowLength][colLength]
    {
        { '#', '*', '*', '*', '*' },
        { '*', '#', '*', '*', '*' },
        { '*', '*', '#', '*', '*' },
        { '*', '*', '*', '#', '*' },
        { '*', '*', '*', '*', '#' }
    };

    for (int32_t row = 0; row < rowLength; ++row)
    {
        for (int32_t col = 0; col < colLength; ++col)
            std::cout << matriz[row][col] << " ";
        std::cout << "\n";
    }
}

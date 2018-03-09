// Teste de métodos simples de ordenação de arrays.

#include "stdafx.h"
#include <iostream>
#include <cstdint>
#include <utility>

void selectionSort();
void bubbleSort();
void printArray(int32_t matriz[], int32_t length);

int main()
{
    selectionSort();
    bubbleSort();

    std::cin.get();
    return 0;
}

void selectionSort()
{
    std::cout << "Ordenacao por selecao:\n\n";

    int32_t selection[]{ 30, 60, 20, 50, 40, 10 };

    // Obtem o comprimento do array.
    int32_t length = sizeof(selection) / sizeof(selection[0]);

    printArray(selection, length);

    for (int32_t startIndex = 0; startIndex < length; ++startIndex)
    {
        bool hasSwap{ false };

        // Encontra o indice maior que o indice inicial.
        int32_t highestIndex{ startIndex };
        for (int32_t currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
        {
            if (selection[currentIndex] > selection[highestIndex])
            {
                highestIndex = currentIndex;
                hasSwap = true;
            }
        }
        // Troca o valor do indice mais alto pelo indice inicial.
        std::swap(selection[highestIndex], selection[startIndex]);

        if (hasSwap == true)
            printArray(selection, length);
        else
            break;
    }
}

void bubbleSort()
{
    std::cout << "\nOrdenacao por flutuacao:\n\n";

    int32_t bubble[] = { 6, 3, 2, 9, 7, 1, 5, 4, 8 };

    // Obtem o comprimento do array.
    int32_t length = sizeof(bubble) / sizeof(bubble[0]);

    
    // Repete ate todo o array estar ordenado.
    for (int32_t out = 0; out < length; ++out)
    {
        int32_t iteration{ out + 1 };
        bool hasSwap{ false };

        // Verifica a ordem dos elementos 2 a 2, e os troca se necessario.
        for (int32_t in = 0; in < (length - iteration); ++in)
        {
            if (bubble[in] > bubble[in + 1])
            {
                std::swap(bubble[in], bubble[in + 1]);
                hasSwap = true;
            }
        }

        if (hasSwap == true)
            printArray(bubble, length);
        else
            break;
    }
}

void printArray(int32_t matriz[], int32_t length)
{
    // Imprime o array completo ordenado.
    for (int32_t i = 0; i < length; ++i)
    {
        std::cout << matriz[i] << " ";
    }
    std::cout << "\n";
}

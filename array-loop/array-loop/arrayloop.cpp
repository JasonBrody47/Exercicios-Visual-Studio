// arrayloop.cpp: Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>


int main()
{
    // Imprimir todos os elementos da matriz.

    int matriz[]{ 4, 6, 7, 3, 8, 2, 1, 9, 5 };
    int matriz_lenght = sizeof(matriz) / sizeof(matriz[0]);

    for (int i = 0; i < matriz_lenght; ++i)
    {
        std::cout << matriz[i] << " ";
    }

    // Imprime o indice do elemento igual ao input do usuario.

    int indice;
    while (true)
    {
        std::cout << "\nInsira um numero entre 1 e 9 > ";

        std::cin >> indice;

        if (!(std::cin.fail() || indice < 1 || indice > 9))
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            break;
        }
        std::cin.clear();
        std::cin.ignore(32767, '\n');
    }

    for (int i = 0; i < matriz_lenght; ++i)
    {
        if (matriz[i] == indice)
        {
            std::cout << "Indice " << i << " contem " << matriz[i] << "\n";
            break;
        }
    }

    // Imprime o indice que armazena o maior valor.

    int max_index{ 0 };
    for (int i = 0; i < matriz_lenght; ++i)
    {
        if (matriz[i] > matriz[max_index])
            max_index = i;
    }
    std::cout << "O indice com o valor e " << max_index << "\n";

    std::cin.get();
    return 0;
}


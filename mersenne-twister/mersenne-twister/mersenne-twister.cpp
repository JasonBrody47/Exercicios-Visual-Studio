// C�gido de exemplo, ainda n�o sei aplicar nada disto.

#include "stdafx.h"
#include <iostream>
#include <random> // Para std::random_device e std::mt19937
// #include <ctime> // Descomente se usando Code::Blocks

int main()
{
    // Use uma fonte de entropia de hardware se dispon�vel, caso contr�rio use PRNG.
    std::random_device rd;
    // Inicializa o Mercenne Twister com uma seed aleat�ria.
    std::mt19937 mersenne(rd());

    // Imprime v�rios n�meros aleat�rios.
    for (int count = 0; count < 48; ++count)
    {
        std::cout << mersenne() << "\t";

        // Se imprimir 4 n�meros, comece uma nova linha.
        if ((count + 1) % 4 == 0)
            std::cout << "\n";
    }

    std::cin.get();
    return 0;
}
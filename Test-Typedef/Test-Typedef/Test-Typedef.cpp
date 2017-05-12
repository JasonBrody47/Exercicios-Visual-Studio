// Test-Typedef.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <cstdint>
#include <iostream>

// Definicao de tipo padrao.
typedef int error_t;

// Definicao de tipo C++11 (preferir este metodo).
using error_t2 = int;

// Funcao que usa typedef error_t2
error_t2 printData();

int main()
{
    std::cout << printData();

    std::cin.get();

    return 0;
}

error_t2 printData()
{
    return error_t2(2);
}

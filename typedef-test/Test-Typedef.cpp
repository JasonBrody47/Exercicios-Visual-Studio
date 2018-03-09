#include "stdafx.h"
#include <cstdint>
#include <iostream>

// Definição de tipo padrão.
typedef int error_t;

// Definição de tipo C++11 (preferir este método).
using error_t2 = int;

// Função que usa typedef error_t2
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

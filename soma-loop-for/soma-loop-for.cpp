#include "stdafx.h"
#include <iostream>
#include <cstdint>

int32_t sumTo(int32_t limit);

int main()
{
    std::cout << "Digite um valor de soma limite > ";
    int32_t limit;
    std::cin >> limit;

    std::cout << "Soma de todos os numeros entre 1 e " << limit << ": " << sumTo(limit) << "\n";

    std::cin.get();
    return 0;
}

int32_t sumTo(int32_t limit)
{
    int32_t sum{ 0 };
    for (int32_t i = 0; i <= limit; ++i)
    {
        sum += i;
    }
    return sum;
}

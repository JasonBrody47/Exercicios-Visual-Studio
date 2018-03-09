// Sequência de números em cascata.

#include <iostream>
#include "functions.h"


int main()
{
    int32_t limit{ getNumberLimit() };

    printNumbersInRight(limit);
    printNumbersInLeft(limit);

    std::cin.get();
    return 0;
}

// LearnCpp2.10_Question4.

#include <iostream>
#include "functions.h"

int main()
{
    height_t height{ getInitialHeight() };
    calculateHeightFall(height);

    std::cin.get();
    return 0;
}
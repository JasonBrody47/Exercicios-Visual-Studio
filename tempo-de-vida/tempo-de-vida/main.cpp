// LearnCpp4.4b_Question1.

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstdint>
#include "functions.h"

int main()
{
    name_t name{ getUserName() };
    age_t age{ getUserAge() };

    printCalculatedAge(calculateAgeForEachLetter(name, age));

    std::cin.get();
    return 0;
}



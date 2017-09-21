#include "stdafx.h"
#include <iostream>
#include "dynamicarraynames.h"

int main()
{
    int32_t length{ getNumberOfNames() };
    std::string *names{ getNames(length) };

    if (length > 1)
        names = sortNames(names, length);

    printSortedNames(names, length);

    delete[] names;
    names = nullptr;

    std::cin.get();
    return 0;
}
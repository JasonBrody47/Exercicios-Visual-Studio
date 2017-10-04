
#include "stdafx.h"
#include <iostream>

void printCString(char *c_style_string);

int main()
{
    printCString("Hello World");

    std::cin.get();
    return 0;
}

void printCString(char *c_style_string)
{
    while (*c_style_string != '\0')
    {
        std::cout << *c_style_string;
        ++c_style_string;
    }
}


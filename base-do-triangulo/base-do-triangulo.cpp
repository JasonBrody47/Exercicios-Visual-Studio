#include "stdafx.h"
#include "base-do-triangulo.h"
#include <iostream>

double getBase()
{
    std::cout << "Insira a base do triangulo > ";
    double base;
    std::cin >> base;

    if (validateImput())
        getBase();
    else
        return base;
}

double getHeight()
{
    std::cout << "Insira a altura do triangulo > ";
    double height;
    std::cin >> height;

    if (validateImput())
        getHeight();
    else
        return height;
}

measure_t calculateTriangleArea(measure_t base, measure_t height)
{
    return (base * height) / 2;
}

void printTriangleArea(measure_t area)
{
    std::cout << "\nArea do triangulo: " << area;
}

bool validateImput()
{
    if (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(32767, '\n');
        std::cerr << "validadeImput(): Entrada invalida, tente novamente.\n";
        return true;
    }
    else
    {
        std::cin.ignore(32767, '\n');
        return false;
    }
}
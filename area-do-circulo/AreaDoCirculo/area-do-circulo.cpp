// Copyright (C) 2017 Luan Eduardo.
//
// Este arquivo é parte do programa AreaDocirculo.

#include "stdafx.h"
#include "area-do-circulo.h"
#include <iostream>

double getCircleRadius()
{
    // Repete até a entrada ser válida.
    while (true) {
        std::cout << "Insira o raio do circulo > ";
        double circle_radius;
        std::cin >> circle_radius;

        // Validação de Entrada.
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cerr << "Entrada invalida: tente novamente.\n";
        }
        else
        {
            std::cin.ignore(32767, '\n');
            return circle_radius;
        }
    }
}

double calculateCircleArea(const double radius)
{
    return (radius * radius) * 3.14;
}

void printCircleArea(const double print_area)
{
    std::cout << "\nArea do circulo: " << print_area;
}
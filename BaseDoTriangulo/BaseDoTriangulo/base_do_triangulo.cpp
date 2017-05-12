// Copyright (C) 2017 Luan Eduardo.
//
// Este arquivo é parte do programa BaseDoTriangulo.

#include "stdafx.h"
#include "base_do_triangulo.h"
#include <iostream>

void getTriangleMeasures()
{
    std::cout << "Insira a base do triangulo > ";
    double triangle_base;
    std::cin >> triangle_base;
    clearImputBuffer();

    std::cout << "\nInsira a altura do triangulo > ";
    double triangle_height;
    std::cin >> triangle_height;
    clearImputBuffer();

    calculateTriangleArea(triangle_base, triangle_height);
}

void clearImputBuffer()
{
    std::cin.clear();
    std::cin.ignore();
}

void calculateTriangleArea(measure_t base, measure_t height)
{
    double triangle_area = (base * height) / 2;
    printTriangleArea(triangle_area);
}

void printTriangleArea(measure_t print_area)
{
    std::cout << "\nArea do triangulo: " << print_area;
}
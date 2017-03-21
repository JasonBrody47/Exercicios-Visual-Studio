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

void calculateTriangleArea(const double calculate_base, const double calculate_height)
{
    double triangle_area = (calculate_base * calculate_height) / 2;
    printTriangleArea(triangle_area);
}

void printTriangleArea(double print_triangle_area)
{
    std::cout << "\nArea do triangulo: " << print_triangle_area;
}
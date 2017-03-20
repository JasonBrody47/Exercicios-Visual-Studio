// Copyright (C) 2017 Luan Eduardo.
//
// base_do_triangulo.cpp faz parte do programa AreaDoTriangulo.

#include "stdafx.h"
#include "base_do_triangulo.h"

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

void printTriangleArea(double triangle_area)
{
    std::cout << "\nArea do triangulo: " << triangle_area;
}
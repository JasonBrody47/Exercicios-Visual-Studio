// Copyright (C) 2017 Luan Eduardo.
//
// Este arquivo é parte do programa BaseDoTriangulo.

#include "stdafx.h"
#include "base-do-triangulo.h"
#include <iostream>

int main()
{
    measure_t base{ getBase() };
    measure_t height{ getHeight() };
    printTriangleArea(calculateTriangleArea(base, height));

    std::cin.get();
    return 0;
}
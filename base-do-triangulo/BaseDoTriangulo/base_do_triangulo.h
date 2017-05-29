// Copyright (C) 2017 Luan Eduardo.
//
// Este arquivo é parte do programa BaseDoTriangulo.

#pragma once
#ifndef BASE_DO_TRIANGULO_H
#define BASE_DO_TRIANGULO_H

// Tipo definido para const double
using measure_t = const double;


void getTriangleMeasures();

void clearImputBuffer();

void calculateTriangleArea(measure_t base, measure_t height);

void printTriangleArea(measure_t print_area);


#endif // !BASE_DO_TRIANGULO_H


#pragma once
#ifndef BASE_DO_TRIANGULO_H
#define BASE_DO_TRIANGULO_H

// Tipo definido para const double.
using measure_t = const double;

// Funções.

double getBase();
double getHeight();
measure_t calculateTriangleArea(measure_t base, measure_t height);
void printTriangleArea(measure_t area);
bool validateImput();

#endif // !BASE_DO_TRIANGULO_H


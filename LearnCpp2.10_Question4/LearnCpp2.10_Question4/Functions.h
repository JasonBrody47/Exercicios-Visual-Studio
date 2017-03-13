#pragma once
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <cstdint>

// Obtem a altura da torre em metros do usuario.
double getTowerHeight();

// Calcula a altura da bola a cada segundo passado.
void calculateBallHeight(double initial_height);

// Imprime os segundos e altura em que a bola se encontra.
void printBallHeight(double print_height, std::int16_t print_seconds);

#endif // !FUNCTIONS_H

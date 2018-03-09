// Média Ponderada.

#pragma once
#ifndef MEDIAPONDERADA_H
#define MEDIAPONDERADA_H

// Notas.
struct Grades
{
    double grade_1;
    double grade_2;
    double grade_3;
};

// Peso das Notas.
struct Weight
{
    double weight_1;
    double weight_2;
    double weight_3;
};

// Typedef para Const Double.
using average_t = const double;

// Funções.

Grades getGrades();
Weight getWeight();
bool isValidInput();
average_t calculateWeightedAverage(Grades grades, Weight weight);
void printWeightedAverage(average_t average);

#endif // !MEDIAPONDERADA_H
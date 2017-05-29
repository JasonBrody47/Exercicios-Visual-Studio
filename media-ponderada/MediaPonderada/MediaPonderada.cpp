// Copyright (C) 2017 Luan Eduardo.
//
// Este arquivo é parte do programa MediaPonderada.

#include "stdafx.h"
#include <iostream>
#include "MediaPonderada.h"

int main()
{
    getWeightedGrades();

    std::cin.get();

    return 0;
}

void getWeightedGrades()
{
    WeightedAverage weightedAverage;

    std::cout << "Nota 1 > ";
    std::cin >> weightedAverage.grade_1;
    clearInputBuffer();

    std::cout << "Peso da Nota 1 > ";
    std::cin >> weightedAverage.grade_2;
    clearInputBuffer();

    std::cout << "\nNota 2 > ";
    std::cin >> weightedAverage.grade_3;
    clearInputBuffer();

    std::cout << "Peso da Nota 2 > ";
    std::cin >> weightedAverage.weight_of_grade_1;
    clearInputBuffer();

    std::cout << "\nNota 3 > ";
    std::cin >> weightedAverage.weight_of_grade_2;
    clearInputBuffer();

    std::cout << "Peso da Nota 3 > ";
    std::cin >> weightedAverage.weight_of_grade_3;
    clearInputBuffer();

    calculateWeightedAverage(weightedAverage);
}

void clearInputBuffer()
{
    std::cin.clear();
    std::cin.ignore();
}

void calculateWeightedAverage(WeightedAverage weightedAverage)
{
    double average = ((weightedAverage.grade_1 * weightedAverage.weight_of_grade_1) +
        (weightedAverage.grade_2 * weightedAverage.weight_of_grade_2) +
        (weightedAverage.grade_3 * weightedAverage.weight_of_grade_3) / 3);

    printWeightedAverage(average);
}

void printWeightedAverage(const double average)
{
    std::cout << "\nMedia Ponderada: " << average << "\n";
}

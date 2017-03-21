// Copyright (C) 2017 Luan Eduardo.
//
// Este arquivo é parte do programa MediaPonderada.

#include "stdafx.h"
#include <iostream>

void getWeightedGrades();
void calculateWeightedAverage(double grade_1, double grade_2, double grade_3,
    double weight_of_grade_1, double weight_of_grade_2, double weight_of_grade_3);
void printWeightedAverage(const double print_average);
void clearInputBuffer();

int main()
{
    getWeightedGrades();
    std::cin.get();
    return 0;
}

// TODO: refatorar a funcao em partes menores.
void getWeightedGrades()
{
    std::cout << "Nota 1 > ";
    double grade_1;
    std::cin >> grade_1;
    clearInputBuffer();

    std::cout << "\nPeso da Nota 1 > ";
    double weight_of_grade_1;
    std::cin >> weight_of_grade_1;
    clearInputBuffer();

    std::cout << "Nota 2 > ";
    double grade_2;
    std::cin >> grade_2;
    clearInputBuffer();

    std::cout << "\nPeso da Nota 2 > ";
    double weight_of_grade_2;
    std::cin >> weight_of_grade_2;
    clearInputBuffer();

    std::cout << "Nota 3 > ";
    double grade_3;
    std::cin >> grade_3;
    clearInputBuffer();

    std::cout << "\nPeso da Nota 3 > ";
    double weight_of_grade_3;
    std::cin >> weight_of_grade_3;
    clearInputBuffer();

    calculateWeightedAverage(grade_1, grade_2, grade_3, weight_of_grade_1,
        weight_of_grade_2, weight_of_grade_3);
}

void clearInputBuffer()
{
    std::cin.clear();
    std::cin.ignore();
}

// TODO: usar uma estrutura de dados para diminuir os parametros.
void calculateWeightedAverage(double grade_1, double grade_2, double grade_3,
    double weight_of_grade_1, double weight_of_grade_2, double weight_of_grade_3)
{
    double average = ((grade_1 * weight_of_grade_1) + (grade_2 * weight_of_grade_2) +
        (grade_3 * weight_of_grade_3)) / 3;

    printWeightedAverage(average);
}

void printWeightedAverage(const double print_average)
{
    std::cout << "\nMedia Ponderada: " << print_average << "\n";
}

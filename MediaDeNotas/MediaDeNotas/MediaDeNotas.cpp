// Copyright (C) 2017 Luan Eduardo.
//
// Este arquivo é parte do programa MediaDeNotas.

#include "stdafx.h"
#include <iostream>

void getGrades();
void calculateGradeAverage(double grade_1, double grade_2, double grade_3);
void printGradeAverage(const double average);
void clearInputBuffer();

int main()
{
    getGrades();
    std::cin.get();
    return 0;
}

void getGrades()
{
    std::cout << "Insira a primeira nota > ";
    double grade_1{};
    std::cin >> grade_1;
    clearInputBuffer();

    std::cout << "\nInsira a segunda nota > ";
    double grade_2{};
    std::cin >> grade_2;
    clearInputBuffer();

    std::cout << "\nInsira a terceira nota > ";
    double grade_3{};
    std::cin >> grade_3;
    clearInputBuffer();

    calculateGradeAverage(grade_1, grade_2, grade_3);
}

void clearInputBuffer()
{
    std::cin.clear();
    std::cin.ignore();
}

void calculateGradeAverage(double grade_1, double grade_2, double grade_3)
{
    printGradeAverage((grade_1 + grade_2 + grade_3) / 3);
}

void printGradeAverage(double average)
{
    std::cout << "\nMedia das notas: " << average;
}


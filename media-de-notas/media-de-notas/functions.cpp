// Media de Notas.

#include "stdafx.h"
#include <iostream>
#include "functions.h"

Student getGrades()
{
    Student average;

    // Foi usado um loop em cada input pois não achei outra forma no momento.
    while (true)
    {
        std::cout << "Insira a primeira nota > ";
        std::cin >> average.grade_1;
        if (isValidInput())
            break;
    }
    while (true)
    {
        std::cout << "\nInsira a segunda nota > ";
        std::cin >> average.grade_2;
        if (isValidInput())
            break;
    }
    while (true)
    {
        std::cout << "\nInsira a terceira nota > ";
        std::cin >> average.grade_3;
        if (isValidInput())
            break;
    }
    return average;
}

bool isValidInput()
{
    if (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(32767, '\n');
        std::cerr << "isValidInput(): valor invalido.\n";
        return false;
    }
    else
    {
        std::cin.ignore(32767, '\n');
        return true;
    }
}

const double calculateGradeAverage(Student average)
{
    return (average.grade_1 + average.grade_2 + average.grade_3) / 3;
}

void printGradeAverage(const double average)
{
    std::cout << "\nMedia das notas: " << average;
}


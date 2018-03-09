// Media Ponderada.

#include "stdafx.h"
#include <iostream>
#include "media-ponderada.h"

Grades getGrades()
{
    Grades grades;
    while (true)
    {
        std::cout << "Insira a primeira nota > ";
        std::cin >> grades.grade_1;
        if (isValidInput())
            break;
    }
    while (true)
    {
        std::cout << "Insira a segunda nota > ";
        std::cin >> grades.grade_2;
        if (isValidInput())
            break;
    }
    while (true)
    {
        std::cout << "Insira a terceira nota > ";
        std::cin >> grades.grade_3;
        if (isValidInput())
            break;
    }
    return grades;
}

Weight getWeight()
{
    Weight weight;
    while (true)
    {
        std::cout << "Insira o peso da primeira nota > ";
        std::cin >> weight.weight_1;
        if (isValidInput())
            break;
    }
    while (true)
    {
        std::cout << "Insira o peso da segunda nota > ";
        std::cin >> weight.weight_2;
        if (isValidInput())
            break;
    }
    while (true)
    {
        std::cout << "Insira o peso da terceira nota > ";
        std::cin >> weight.weight_3;
        if (isValidInput())
            break;
    }
    return weight;
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

average_t calculateWeightedAverage(Grades grades, Weight weight)
{
    average_t average{ (grades.grade_1 * weight.weight_1) + (grades.grade_2 *
        weight.weight_2) + (grades.grade_3 * weight.weight_3) / 3 };

    return average;
}

void printWeightedAverage(average_t average)
{
    std::cout << "\nMedia Ponderada: " << average << "\n";
}

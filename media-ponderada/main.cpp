// Média Ponderada.

#include "stdafx.h"
#include <iostream>
#include "media-ponderada.h"

int main()
{
    Grades grades{ getGrades() };
    Weight weight{ getWeight() };

    printWeightedAverage(calculateWeightedAverage(grades, weight));

    std::cin.get();
    return 0;
}
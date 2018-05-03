#include <iostream>
#include "media-de-notas-vetor.h"

int main()
{
    int16_t limit{ getGradesLimit() };
    std::vector<float> grades;
    grades.resize(limit);

    getGrades(grades);
    float average{ calculateAverage(grades) };
    printAverage(average);

    std::cin.get();
    return 0;
}
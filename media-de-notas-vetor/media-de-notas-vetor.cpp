#include <iostream>
#include "media-de-notas-vetor.h"
#include <utility>

int16_t getGradesLimit()
{
    int16_t limit;
    do
    {
        std::cout << "Defina o limite de notas (1 a 10) > ";
        std::cin >> limit;
    } while (!isValidInput(limit));

    return limit;
}

void getGrades(std::vector<float> &grades)
{
    for (int16_t i = 0; i < grades.size(); ++i)
    {
        do
        {
            std::cout << "Insira a nota [" << (i + 1) << "] > ";
            std::cin >> grades[i];
        } while (!isValidInput(grades[i]));
    }
}

bool isValidInput(int16_t input)
{
    if (std::cin.fail() || input < 0 || input > 10)
    {
        std::cout << "Valor invalido!\n";
        std::cin.clear();
        std::cin.ignore(32767, '\n');
        return false;
    }
    std::cin.ignore();
    return true;
}

bool isValidInput(float input)
{
    if (std::cin.fail() || input < 0.f || input > 10.f)
    {
        std::cout << "Valor invalido!\n";
        std::cin.clear();
        std::cin.ignore(32767, '\n');
        return false;
    }
    std::cin.ignore();
    return true;
}

float calculateAverage(const std::vector<float> &grades)
{
    float average{};
    for (int16_t i = 0; i < grades.size(); ++i)
        average += grades[i];

    average /= grades.size();
    return average;
}

void printAverage(float average)
{
    std::cout << "Media das notas inseridas: " << average << "\n";
}

void printGrades(const std::vector<float> &grades)
{
    for (int16_t i = 0; i < grades.size(); ++i)
        std::cout << "Nota [" << i << "]: " << grades[i] << "\n";
}
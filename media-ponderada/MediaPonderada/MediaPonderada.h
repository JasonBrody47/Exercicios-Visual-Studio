#pragma once
#ifndef MEDIAPONDERADA_H
#define MEDIAPONDERADA_H

struct WeightedAverage
{
    double grade_1{};
    double grade_2{};
    double grade_3{};
    double weight_of_grade_1{};
    double weight_of_grade_2{};
    double weight_of_grade_3{};
};

void getWeightedGrades();

void calculateWeightedAverage(WeightedAverage weightedAverage);

void printWeightedAverage(const double average);

void clearInputBuffer();

#endif // !MEDIAPONDERADA_H
#ifndef MEDIANOTASVETOR_H
#define MEDIANOTASVETOR_H

#include <cstdint>
#include <vector>

int16_t getGradesLimit();
void getGrades(std::vector<float> &grades);
bool isValidInput(int16_t input);
bool isValidInput(float input);
float calculateAverage(const std::vector<float> &grades);
void printAverage(float average);
void printGrades(const std::vector<float> &grades);

#endif // MEDIANOTASVETOR_H
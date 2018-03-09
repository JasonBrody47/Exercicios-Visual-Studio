// Média de Notas.

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

// Typedef para Double.
using grades_t = double;

struct Student
{
    grades_t grade_1, grade_2, grade_3;
};

// Protótipos das funções.

Student getGrades();
bool isValidInput();
const double calculateGradeAverage(Student average);
void printGradeAverage(const double average);

#endif // !FUNCTIONS_H

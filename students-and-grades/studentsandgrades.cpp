
#include "stdafx.h"
#include <iostream>
#include <cstdint>
#include <string>
#include <utility>
#include "studentsandgrades.h"

int16_t getNumberOfStudents()
{
    static int16_t students;
    do
    {
        std::cout << "Insira a quantidade de alunos (Max = " <<
            students_limit::students_max << ") > ";
        std::cin >> students;
    } while (!isValidNumberOfStudents(students));

    return students;
}

bool isValidNumberOfStudents(const int16_t &students)
{
    if (std::cin.fail() || students < students_limit::students_min ||
        students > students_limit::students_max)
    {
        std::cout << "isValidNumberOfStudents(): Input invalido!\n";
        std::cin.clear();
        std::cin.ignore(32767, '\n');
        return false;
    }
    std::cin.ignore(32767, '\n');
    return true;
}

std::string getStudentName()
{
    static std::string name;
    do
    {
        std::cout << "Insira o nome do aluno(a) > ";
        std::getline(std::cin, name);
    } while (!isValidStudentName(name));

    return name;
}

bool isValidStudentName(const std::string &name)
{
    if (name.empty())
    {
        std::cout << "isValidStudentName(): O nome nao pode estar vazio!\n";
        return false;
    }
    return true;;
}

int16_t getStudentGrade()
{
    static int16_t grade;
    do
    {
        std::cout << "Insira a nota do aluno(a) (Entre " <<
            students_limit::grade_min << " e " <<
            students_limit::grade_max << ") > ";
        std::cin >> grade;
    } while (!isValidStudentGrade(grade));

    return grade;
}

bool isValidStudentGrade(const int16_t &grade)
{
    if (std::cin.fail() || grade < students_limit::grade_min ||
        grade > students_limit::grade_max)
    {
        std::cout << "isValidStudentGrade(): Input invalido!\n";
        std::cin.clear();
        std::cin.ignore(32767, '\n');
        return false;
    }
    std::cin.ignore(32767, '\n');
    return true;
}

Student* sortArrayByGrade(Student *students, const int16_t number_of_students)
{
    for (int16_t startGrade = 0; startGrade < number_of_students - 1;
        ++startGrade)
    {
        int16_t highestGrade{ startGrade };
        for (int16_t currentGrade = startGrade + 1; currentGrade <
            number_of_students; ++currentGrade)
        {
            if (students[currentGrade].grade > students[highestGrade].grade)
                highestGrade = currentGrade;
        }
        std::swap(students[startGrade], students[highestGrade]);
    }
    return students;
}

void printStudentsArray(Student *students, const int16_t number_of_students)
{
    std::cout << "\nLista de alunos e suas notas:\n";
    for (int16_t i = 0; i < number_of_students; ++i)
    {
        std::cout << students[i].name << " obteu a nota " <<
            students[i].grade << "\n";
    }
}

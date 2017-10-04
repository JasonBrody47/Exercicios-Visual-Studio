#pragma once
#ifndef STUDENTS_AND_GRADES
#define sTUDENTS_AND_GRADES

namespace students_limit
{
    const int16_t students_max{ 40 };
    const int16_t students_min{ 1 };
    const int16_t grade_max{ 100 };
    const int16_t grade_min{ 0 };
}

struct Student
{
    std::string name;
    int16_t grade;
};

int16_t getNumberOfStudents();
bool isValidNumberOfStudents(const int16_t &students);

std::string getStudentName();
bool isValidStudentName(const std::string &name);

int16_t getStudentGrade();
bool isValidStudentGrade(const int16_t &grade);

Student* sortArrayByGrade(Student *students, const int16_t number_of_students);
void printStudentsArray(Student *students, const int16_t number_of_students);

#endif // !STUDENTS_AND_GRADES

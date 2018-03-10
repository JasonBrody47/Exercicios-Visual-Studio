#include <iostream>
#include <string>
#include "studentsandgrades.h"

int main()
{
    const int16_t number_of_students{ getNumberOfStudents() };

    Student *students = new Student[number_of_students];

    for (int16_t i = 0; i < number_of_students; ++i)
    {
        students[i].name = getStudentName();
        students[i].grade = getStudentGrade();
        std::cout << "=================================================\n";
    }

    students = sortArrayByGrade(students, number_of_students);
    printStudentsArray(students, number_of_students);

    std::cin.get();
    return 0;
}

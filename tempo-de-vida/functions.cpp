// LearnCpp4.4b_Question1.

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstdint>
#include "functions.h"

name_t getUserName()
{
    std::cout << "Insira seu nome completo > ";
    name_t name;
    std::getline(std::cin, name);

    return name;
}

age_t getUserAge()
{
    while (true)
    {
        std::cout << "Insira sua idade > ";
        age_t age;
        std::cin >> age;

        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "getUserAge(): idade invalida.\n";
        }
        else
        {
            std::cin.ignore(32767, '\n');
            return age;
        }
    }
}

double calculateAgeForEachLetter(name_t name, age_t age)
{
    return (static_cast<double>(age) / name.length());
}

void printCalculatedAge(double life_time)
{
    std::cout << "Voce viveu " << life_time << " anos para cada letra do seu nome.\n";
}
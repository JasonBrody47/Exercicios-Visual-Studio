// LearnCpp4.4b_Question1.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstdint>

using name_t = std::string;
using age_t = std::int16_t;

name_t getUserName();
age_t getUserAge();
double calculateAgeForEachLetter(name_t name, age_t age);
void printCalculatedAge(double final_age);

int main()
{
    name_t user_name{ getUserName() };
    age_t user_age{ getUserAge() };
    printCalculatedAge(calculateAgeForEachLetter(user_name, user_age));

    std::cin.get();

    return 0;
}

name_t getUserName()
{
    std::cout << "Insira seu nome completo > ";
    name_t name;
    std::getline(std::cin, name);

    return name;
}

age_t getUserAge()
{
    std::cout << "Insira sua idade > ";
    age_t age;
    std::cin >> age;

    // Limpa erros e caracteres no buffer de entrada.
    std::cin.clear();
    std::cin.ignore();

    return age;
}

double calculateAgeForEachLetter(name_t name, age_t age)
{
    return (static_cast<double>(age) / name.length());
}

void printCalculatedAge(double final_age)
{
    std::cout << "Voce viveu " << final_age << " anos para cada letra do seu nome.\n";
}

// LearnCpp4.4b_Question1.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstdint>

std::string getUserName();
std::int16_t getUserAge();
double calculateAgeForEachLetter(std::string name, std::int16_t age);
void printCalculatedAge(double final_age);

int main()
{
    std::string user_name{ getUserName() };
    std::int16_t user_age{ getUserAge() };
    printCalculatedAge(calculateAgeForEachLetter(user_name, user_age));

    std::cin.get();

    return 0;
}

std::string getUserName()
{
    std::cout << "Insira seu nome completo > ";
    std::string name;
    std::getline(std::cin, name);

    return name;
}

std::int16_t getUserAge()
{
    std::cout << "Insira sua idade > ";
    std::int16_t age;
    std::cin >> age;

    // Limpa erros e caracteres no buffer de entrada.
    std::cin.clear();
    std::cin.ignore();

    return age;
}

double calculateAgeForEachLetter(std::string name, std::int16_t age)
{
    return (static_cast<double>(age) / name.length());
}

void printCalculatedAge(double final_age)
{
    std::cout << "Voce viveu " << final_age << " anos para cada letra do seu nome.\n";
}

// LearnCpp: 5.3 — Switch statements, exercício 2.

#include "stdafx.h"
#include <iostream>
#include <string>

enum class Animal
{
    PIG,
    CHICKEN,
    GOAT,
    CAT,
    DOG,
    OSTRICH,
    NO_ANIMAL
};

std::string getAnimalName(Animal animal);
void printNumberOfLegs(Animal legs);

int main()
{
    printNumberOfLegs(Animal::CAT);
    printNumberOfLegs(Animal::CHICKEN);

    // Teste de erro no Switch.
    printNumberOfLegs(Animal::NO_ANIMAL);

    std::cin.get();

    return 0;
}

std::string getAnimalName(Animal animal)
{
    switch (animal)
    {
    case Animal::CAT:
        return "Cat";
    case Animal::CHICKEN:
        return "Chicken";
    case Animal::DOG:
        return "Dog";
    case Animal::GOAT:
        return "Goat";
    case Animal::OSTRICH:
        return "Ostrich";
    case Animal::PIG:
        return "Pig";
    // Captura de erro.
    default:
        return "getAnimalName(): Invalid Enum item.\n";
        break;
    }
}

void printNumberOfLegs(Animal name)
{
    // Os 'case' foram unificados, já que possuem o mesmo resultado.
    switch (name)
    {
    // Estes animais possuem 4 pernas.
    case Animal::PIG:
    case Animal::GOAT:
    case Animal::CAT:
    case Animal::DOG:
        std::cout << "A " << getAnimalName(name) << " has 4 legs\n";
        break;
    // Estes animais possuem 2 pernas.
    case Animal::OSTRICH:
    case Animal::CHICKEN:
        std::cout << "A " << getAnimalName(name) << " has 2 legs.\n";
        break;
    // Captura de erro.
    default:
        std::cout << "printNumberOfLegs(): Invalid Enum item.\n";
        break;
    }
}

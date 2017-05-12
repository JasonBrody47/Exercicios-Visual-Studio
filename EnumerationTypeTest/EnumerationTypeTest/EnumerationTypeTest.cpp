// EnumerationTypeTest.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
#include <string>

int main()
{
    enum class Monsters
    {
        MONSTERS_ORCS,
        MONSTERS_GLOBINS,
        MONSTERS_TROLLS,
        MONSTERS_OGRES,
        MONSTERS_SKELETONS
    };

    Monsters monster{ Monsters::MONSTERS_TROLLS };

    switch (monster)
    {
    case Monsters::MONSTERS_ORCS:
        std::cout << "Orcs";
        break;
    case Monsters::MONSTERS_GLOBINS:
        std::cout << "Globins";
        break;
    case Monsters::MONSTERS_TROLLS:
        std::cout << "Trolls";
        break;
    case Monsters::MONSTERS_OGRES:
        std::cout << "Ogres";
        break;
    case Monsters::MONSTERS_SKELETONS:
        std::cout << "Skeletons";
        break;
    default:
        break;
    }

    std::cin.get();

    return 0;
}


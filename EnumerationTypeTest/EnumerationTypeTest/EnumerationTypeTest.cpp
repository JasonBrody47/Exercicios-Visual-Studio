// EnumerationTypeTest.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
#include <string>

int main()
{
    enum Monsters
    {
        MONSTERS_ORCS,
        MONSTERS_GLOBINS,
        MONSTERS_TROLLS,
        MONSTERS_OGRES,
        MONSTERS_SKELETONS
    };

    Monsters monster{ MONSTERS_TROLLS };

    switch (monster)
    {
    case MONSTERS_ORCS:
        std::cout << "Orcs";
        break;
    case MONSTERS_GLOBINS:
        std::cout << "Globins";
        break;
    case MONSTERS_TROLLS:
        std::cout << "Trolls";
        break;
    case MONSTERS_OGRES:
        std::cout << "Ogres";
        break;
    case MONSTERS_SKELETONS:
        std::cout << "Skeletons";
        break;
    default:
        break;
    }

    std::cin.get();

    return 0;
}


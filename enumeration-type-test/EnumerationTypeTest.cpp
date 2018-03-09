#include <iostream>
#include <string>

int main()
{
    enum class Monsters
    {
        ORCS,
        GLOBINS,
        TROLLS,
        OGRES,
        SKELETONS
    };

    Monsters monster{ Monsters::TROLLS };

    switch (monster)
    {
    case Monsters::ORCS:
        std::cout << "Orcs";
        break;
    case Monsters::GLOBINS:
        std::cout << "Globins";
        break;
    case Monsters::TROLLS:
        std::cout << "Trolls";
        break;
    case Monsters::OGRES:
        std::cout << "Ogres";
        break;
    case Monsters::SKELETONS:
        std::cout << "Skeletons";
        break;
    default:
        break;
    }

    std::cin.get();

    return 0;
}


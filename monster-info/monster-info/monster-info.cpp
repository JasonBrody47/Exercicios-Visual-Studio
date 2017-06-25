// monster-info.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstdint>
#include <cstdlib>

using namespace std;

enum class MonsterType
{
    OGRE,
    DRAGON,
    ORC,
    GIANT_SPIDER,
    SLIME
};

struct Monster
{
    MonsterType type;
    string name;
    int32_t health;
};

void printMonster(Monster monster);
string getNameType(Monster type);

int main()
{
    Monster ogre{ MonsterType::OGRE, "Zezinho", 200 };
    Monster slime{ MonsterType::SLIME, "Meleca", 45 };

    printMonster(ogre);
    printMonster(slime);


    cin.get();

    return 0;
}

void printMonster(Monster monster)
{
    cout << "Esse " << getNameType(monster) << " e chamado " << monster.name <<
        " e tem " << monster.health << " de vida.\n";
}

string getNameType(Monster type)
{
    /*
    if (type.type == MonsterType::DRAGON)
    {
        return string("Dragao");
    }
    else if (type.type == MonsterType::GIANT_SPIDER)
    {
        return string("Aranha Gigante");
    }
    else if (type.type == MonsterType::OGRE)
    {
        return string("Ogro");
    }
    else if (type.type == MonsterType::ORC)
    {
        return string("Orc");
    }
    else if (type.type == MonsterType::SLIME)
    {
        return string("Slime");
    }
    return string("Error");
    */

    switch (type.type)
    {
    case MonsterType::DRAGON:
        return string("Dragao");
        break;
    case MonsterType::GIANT_SPIDER:
        return string("Aranha Gigante");
        break;
    case MonsterType::OGRE:
        return string("Ogro");
        break;
    case MonsterType::ORC:
        return string("Orc");
        break;
    case MonsterType::SLIME:
        return string("Slime");
        break;
    default:
        return string("Invalid");
        break;
    }
}



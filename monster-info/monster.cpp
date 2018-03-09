// Monster Info.

#include "stdafx.h"
#include <iostream>
#include <string>
#include "monster.h"

string getNameType(Monster type)
{
    switch (type.type)
    {
    case MonsterType::DRAGON:
        return "Dragao";
    case MonsterType::GIANT_SPIDER:
        return "Aranha Gigante";
    case MonsterType::OGRE:
        return "Ogro";
    case MonsterType::ORC:
        return "Orc";
    case MonsterType::SLIME:
        return "Slime";
    default:
        return "getNameType(): invalid type.";
    }
}

void printMonster(Monster monster)
{
    cout << "Esse " << getNameType(monster) << " e chamado " << monster.name <<
        " e tem " << monster.health << " de vida.\n";
}
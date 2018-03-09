// Monster Info.

#pragma once
#ifndef MONSTER_H
#define MONSTER_H

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

// Fun��es.

string getNameType(Monster type);
void printMonster(Monster monster);

#endif // !MONSTER_H

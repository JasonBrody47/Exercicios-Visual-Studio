// Monster Info.

#include <iostream>
#include "monster.h"

int main()
{
    Monster ogre{ MonsterType::OGRE, "Zezinho", 200 };
    Monster slime{ MonsterType::SLIME, "Meleca", 45 };

    printMonster(ogre);
    printMonster(slime);

    cin.get();
    return 0;
}





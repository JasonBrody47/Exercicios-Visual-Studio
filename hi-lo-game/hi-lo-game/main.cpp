// Jogo High-Low.

#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include "game.h"

int main()
{
    // Cria uma seed inicial com base no tempo do sistema.
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    playGame();

    std::cin.get();
    return 0;
}


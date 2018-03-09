// Jogo High-Low.

#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include "game.h"

// TODO: Usar a biblioteca rlutil para personalizar o console.
int main()
{
    // Cria uma seed inicial com base no tempo do sistema.
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    playGame();

    std::cin.get();
    return 0;
}


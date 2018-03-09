// Jogo High-Low.

#pragma once
#ifndef GAME_H
#define GAME_H

#include <cstdint>

namespace random_limit
{
    const int16_t max{ 100 };
    const int16_t min{ 1 };
}

struct Game
{
    int16_t guess;
    int16_t random;
    int16_t chances{ 1 };
};

void playGame();
int16_t getRandomNumber(int16_t min, int16_t max);
int16_t getUserInput();
bool isValidInput(int16_t input);
bool checkGuess(const Game check);
bool playAgain();

#endif // !GAME_H
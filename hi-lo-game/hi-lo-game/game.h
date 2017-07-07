// Jogo High-Low.

#pragma once
#ifndef GAME_H
#define GAME_H

#include <cstdint>

const int16_t max{ 100 };
const int16_t min{ 1 };

struct Var
{
    int16_t guess;
    int16_t random;
    int16_t chances{ 1 };
    bool win_lose;
};

enum class HUD
{
    TITLE,
    GUESS,
    LOW,
    HIGH,
    WIN,
    LOSE,
    PLAY_AGAIN,
    INPUT_ERROR,
    THANKS
};

void playGame();
int16_t getRandomNumber(int32_t min, int32_t max);
void printHUD(HUD hud, Var value = {});
int16_t getUserInput();
bool isValidInput(int16_t input);
bool checkGuess(Var check);
bool playAgain();

#endif // !GAME_H
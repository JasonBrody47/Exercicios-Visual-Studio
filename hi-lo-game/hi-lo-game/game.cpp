// Jogo High-Low.

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include "game.h"

void playGame()
{
    Var value;
    value.random = getRandomNumber(min, max);

    printHUD(HUD::TITLE);
    do
    {
        printHUD(HUD::GUESS, value);
        value.guess = getUserInput();
        if (checkGuess(value))
            break;
    } while (++value.chances <= 7);

    if (value.chances > 7)
        printHUD(HUD::LOSE, value);

    if (playAgain())
        playGame();
}

int16_t getRandomNumber(int32_t min, int32_t max)
{
    // Descarta o primeiro valor de rand().
    std::rand();

    return rand() % (max - min + 1) + min;
}

void printHUD(HUD hud, Var value)
{
    switch (hud)
    {
    case HUD::TITLE:
        std::cout << "\nJogo do High-Low!\nVoce tem 7 chances para " <<
            "adivinhar qual e o numero entre 1 e 100. Vamos jogar!\n\n";
        break;
    case HUD::GUESS:
        std::cout << "Tentativa #" << value.chances << " > ";
        break;
    case HUD::HIGH:
        std::cout << "Seu palpite e muito alto.\n";
        break;
    case HUD::LOW:
        std::cout << "Seu palpite e muito baixo.\n";
        break;
    case HUD::WIN:
        std::cout << "\nVoce ganhou! Parabens!\n";
        break;
    case HUD::LOSE:
        std::cout << "\nVoce perdeu ;( | O numero correto e: " <<
            value.random << "\n";
        break;
    case HUD::PLAY_AGAIN:
        std::cout << "\nVoce quer jogar novamente? (y, n) > ";
        break;
    case HUD::THANKS:
        std::cout << "\nObrigado por jogar!";
        break;
    case HUD::INPUT_ERROR:
        std::cout << "Valor invalido!\n";
        break;
    default:
        std::cout << "printHUD(): enum invalido.\n";
        break;
    }
}

int16_t getUserInput()
{
    while (true)
    {
        static int16_t guess;
        std::cin >> guess;

        if (isValidInput(guess))
            return guess;
    }
}

bool isValidInput(int16_t input)
{
    if (std::cin.fail() || input < min || input > max)
    {
        std::cin.clear();
        std::cin.ignore(32767, '\n');
        printHUD(HUD::INPUT_ERROR);
        return false;
    }
    else
    {
        std::cin.ignore(32767, '\n');
        return true;
    }
}

bool checkGuess(Var check)
{
    if (check.guess < check.random)
    {
        printHUD(HUD::LOW);
        return false;
    }
    else if (check.guess > check.random)
    {
        printHUD(HUD::HIGH);
        return false;
    }
    else if (check.guess == check.random)
    {
        printHUD(HUD::WIN);
        return true;
    }
}

bool playAgain()
{
    printHUD(HUD::PLAY_AGAIN);
    static char choise;
    std::cin >> choise;
    std::cin.ignore(32767, '\n');

    switch (choise)
    {
    case 'y':
    case 'Y':
        return true;
    case 'n':
    case 'N':
        printHUD(HUD::THANKS);
        return false;
    default:
        printHUD(HUD::INPUT_ERROR);
        playAgain();
    }
}
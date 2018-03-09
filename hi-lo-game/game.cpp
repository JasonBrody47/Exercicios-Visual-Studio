// Jogo High-Low.

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include "game.h"

void playGame()
{
    Game game;
    game.random = getRandomNumber(random_limit::min, random_limit::max);

    std::cout << "\nJogo do High-Low!\nVoce tem 7 chances para " <<
        "adivinhar qual e o numero entre 1 e 100. Vamos jogar!\n\n";
    do
    {
        std::cout << "Tentativa #" << game.chances << " > ";
        game.guess = getUserInput();

        if (checkGuess(game))
            break;
    } while (++game.chances <= 7);

    if (game.chances > 7)
        std::cout << "\nVoce perdeu ;( | O numero correto e: " <<
        game.random << "\n";
    else
        std::cout << "\nVoce ganhou! Parabens! O numero correto e: " <<
        game.random << "\n";

    if (playAgain())
        playGame();
}

int16_t getRandomNumber(int16_t min, int16_t max)
{
    // Descarta o primeiro valor de rand().
    std::rand();

    return rand() % (max - min + 1) + min;
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
    if (std::cin.fail() || input < random_limit::min || input > random_limit::max)
    {
        std::cin.clear();
        std::cin.ignore(32767, '\n');
        std::cerr << "isValidInput(): Valor invalido!\n";
        return false;
    }
    std::cin.ignore(32767, '\n');
    return true;
}

bool checkGuess(const Game check)
{
    if (check.guess < check.random)
    {
        std::cout << "Seu palpite e muito baixo.\n";
        return false;
    }
    else if (check.guess > check.random)
    {
        std::cout << "Seu palpite e muito alto.\n";
        return false;
    }
    else if (check.guess == check.random)
    {
        std::cout << "Valor correto!\n";
        return true;
    }
}

bool playAgain()
{
    std::cout << "\nVoce quer jogar novamente? (y, n) > ";
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
        std::cout << "\nObrigado por jogar!";
        return false;
    default:
        std::cerr << "playAgain(): Valor invalido!\n";
        playAgain();
    }
}
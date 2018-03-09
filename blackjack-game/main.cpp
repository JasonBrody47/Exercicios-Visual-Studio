#include <iostream>
#include "blackjackgame.h"
#include <ctime>

int main()
{
    std::srand(static_cast<unsigned int>(time(nullptr)));

    deck_t deck;
    initializeDeck(deck);

    do
    {
        shuffleDeck(deck);
        printResult(playBlackjack(deck));
    } while (playAgain());

    std::cin.get();
    return 0;
}
#pragma once
#ifndef BLACKJACK_GAME_H
#define BLACKJACK_GAME_H

namespace deck_limits
{
    const int16_t suits_max{ 4 };
    const int16_t ranks_max{ 13 };
    const int16_t deck_max{ 52 };
}

// Tipos de cartas
enum class CardRanks
{
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    JACK,  // Valete
    QUEEN, // Rainha
    KING,  // Rei
    ACE,   // Ás
    MAX_RANKS
};

// Naipes: 4 grupos
enum class CardSuits
{
    CLUBS,    // Paus
    DIAMONDS, // Ouros
    HEARTS,   // Copas
    SPADES,   // Espadas
    MAX_SUITS
};

enum class BlackjackResult
{
    WIN,
    LOSE,
    TIE
};

struct Card
{
    CardRanks rank;
    CardSuits suit;
};

using deck_t = std::array<Card, 52>;

void initializeDeck(deck_t &deck);
void printCard(const Card &card);
void printDeck(const deck_t &deck);
void swapCard(Card &card_1, Card &card_2);
void shuffleDeck(deck_t &deck);
int16_t getRandomNumber(int16_t min, int16_t max);
int16_t getCardValue(const Card &card);
BlackjackResult playBlackjack(deck_t &deck);
char getPlayerDrawChoice();
bool checkPlayerInput(char choice);
void printResult(BlackjackResult result);
bool playAgain();

#endif // !BLACKJACK_GAME_H



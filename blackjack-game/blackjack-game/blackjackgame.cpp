
#include "stdafx.h"
#include <iostream>
#include "blackjackgame.h"
#include <array>

void initializeDeck(deck_t &deck)
{
    int16_t card{ 0 };
    for (int16_t suits = 0; suits < deck_limits::suits_max; ++suits)
        for (int16_t ranks = 0; ranks < deck_limits::ranks_max; ++ranks)
        {
            deck[card].suit = static_cast<CardSuits>(suits);
            deck[card].rank = static_cast<CardRanks>(ranks);
            ++card;
        }
}

void printCard(const Card &card)
{
    switch (card.rank)
    {
    case CardRanks::TWO:      std::cout << "2"; break;
    case CardRanks::THREE:    std::cout << "3"; break;
    case CardRanks::FOUR:     std::cout << "4"; break;
    case CardRanks::FIVE:     std::cout << "5"; break;
    case CardRanks::SIX:      std::cout << "6"; break;
    case CardRanks::SEVEN:    std::cout << "7"; break;
    case CardRanks::EIGHT:    std::cout << "8"; break;
    case CardRanks::NINE:     std::cout << "9"; break;
    case CardRanks::TEN:      std::cout << "T"; break;
    case CardRanks::JACK:     std::cout << "J"; break;
    case CardRanks::QUEEN:    std::cout << "Q"; break;
    case CardRanks::KING:     std::cout << "K"; break;
    case CardRanks::ACE:      std::cout << "A"; break;
    default:
        break;
    }

    switch (card.suit)
    {
    case CardSuits::CLUBS:    std::cout << "C"; break;
    case CardSuits::DIAMONDS: std::cout << "D"; break;
    case CardSuits::HEARTS:   std::cout << "H"; break;
    case CardSuits::SPADES:   std::cout << "S"; break;
    default:
        break;
    }
}

void printDeck(const deck_t &deck)
{
    for (const auto &card : deck)
    {
        printCard(card);
        std::cout << " ";
    }
    std::cout << "\n";
}

void swapCard(Card &card_1, Card &card_2)
{
    Card temp{ card_1 };
    card_1 = card_2;
    card_2 = temp;
}

void shuffleDeck(deck_t &deck)
{
    for (int16_t current_card = 0; current_card < 52; ++current_card)
    {
        int16_t random_card{ getRandomNumber(0, 51) };
        swapCard(deck[current_card], deck[random_card]);
    }
}

int16_t getRandomNumber(int16_t min, int16_t max)
{
    std::rand();
    return std::rand() % (max - min + 1) + min;
}

int16_t getCardValue(const Card &card)
{
    switch (card.rank)
    {
    case CardRanks::TWO:   return 2;
    case CardRanks::THREE: return 3;
    case CardRanks::FOUR:  return 4;
    case CardRanks::FIVE:  return 5;
    case CardRanks::SIX:   return 6;
    case CardRanks::SEVEN: return 7;
    case CardRanks::EIGHT: return 8;
    case CardRanks::NINE:  return 9;
    case CardRanks::TEN:   return 10;
    case CardRanks::JACK:  return 10;
    case CardRanks::QUEEN: return 10;
    case CardRanks::KING:  return 10;
    case CardRanks::ACE:   return 11;
    default:
        return -1;
    }
}

// TODO: refatorar este codigo.
BlackjackResult playBlackjack(deck_t &deck)
{
    Card *top_card{ &deck[0] };
    int16_t player_score{ 0 };
    int16_t dealer_score{ 0 };

    // Puxa 1 carta para o dealer pela primeira vez.
    dealer_score = getCardValue(*top_card++);
    std::cout << "Pontuacao atual do Dealer: " << dealer_score << "\n";

    // Puxa 2 cartas para o jogar pela primeira vez.
    player_score = getCardValue(*top_card++);
    player_score += getCardValue(*top_card++);

    while (true)
    {
        std::cout << "Sua pontuacao atual: " << player_score << "\n";

        if (player_score > 21)
        {
            std::cout << "Sua pontuacao passou de 21!\n";
            return BlackjackResult::LOSE;
        }

        if (player_score == 21)
        {
            std::cout << "Blackjack do Jogador!\n";
            return BlackjackResult::WIN;
        }

        char choice = getPlayerDrawChoice();
        if (choice == 'N' || choice == 'n')
            break;

        player_score += getCardValue(*top_card++);
    }

    while (dealer_score < 17)
    {
        dealer_score += getCardValue(*top_card++);
        std::cout << "Pontuacao atual do Dealer: " << dealer_score << "\n";
    }

    if (dealer_score > 21)
    {
        std::cout << "Pontuacao do Dealer passou de 21!\n";
        return BlackjackResult::WIN;
    }
    if (dealer_score == 21 && dealer_score > player_score)
    {
        std::cout << "Blackjack do Dealer!\n";
        return BlackjackResult::LOSE;
    }

    if (dealer_score > player_score)
        return BlackjackResult::LOSE;
    else if (dealer_score < player_score)
        return BlackjackResult::WIN;
    if (dealer_score == player_score)
        return BlackjackResult::TIE;
}

char getPlayerDrawChoice()
{
    static char choice;
    while (true)
    {
        std::cout << "Pegar carta(Y) ou Parar(N)? ";
        std::cin >> choice;
        std::cin.ignore(32767, '\n');

        if (checkPlayerInput(choice))
            break;
    }
    return choice;
}

bool checkPlayerInput(char choice)
{
    if (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n')
    {
        std::cout << "Entrada invalida!\n";
        return false;
    }
    else
        return true;
}

void printResult(BlackjackResult result)
{
    if (result == BlackjackResult::WIN)
        std::cout << "Voce ganhou!\n";
    if (result == BlackjackResult::LOSE)
        std::cout << "Voce perdeu ;(\n";
    if (result == BlackjackResult::TIE)
        std::cout << "Empate!\n";
}

bool playAgain()
{
    static char choice;
    while (true)
    {
        std::cout << "Voce quer jogar novamente? Sim(Y) ou Nao(N) > ";
        std::cin >> choice;
        std::cin.ignore(32767, '\n');

        if (choice == 'Y' || choice == 'y')
            return true;
        else if (choice == 'N' || choice == 'n')
            return false;
        else
            std::cout << "Entrada invalida!\n";
    }
}
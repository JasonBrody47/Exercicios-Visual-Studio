#include "stdafx.h"
#include <iostream>
#include "Functions.h"
#include "constants.h"

// Obtem a altura da torre em metros do usuario.
double getTowerHeight()
{
    std::cout << "Insira a altura inicial da torre em metros > ";
    double tower_height{};
    // Nao ha validacao de entrada de dados,
    // o programa pode quebrar com um valor invalido.
    // Isso sera corrigido com o tempo.
    std::cin >> tower_height;

    // Limpa erros e caracteres no buffer de entrada.
    std::cin.clear();
    std::cin.ignore();

    return tower_height;
}

// Calcula a altura da bola a cada segundo passado.
void calculateBallHeight(double initial_height)
{
    // A velocidade inicial e nula (0 m/s).
    double ball_velocity{ 0.0 };
    std::int16_t seconds{ 0 };

    while (initial_height > myConstants::ground)
    {
        /* Formula queda livre: d = g * (t ^ 2) / 2
           d = distancia percorrida pelo corpo;
           t = tempo de aceleracao;
           g = aceleracao da gravidade;
           v = velocidade.
        */
        ball_velocity = myConstants::earth_gravity * (seconds * seconds) / 2;

        // A altura pode ficar negativa, mais nao sera mais aceita pelo loop.
        initial_height -= ball_velocity;

        printBallHeight(initial_height, seconds);

        // A velocidade fica maior a cada segundo.
        seconds++;
    }
}

// Imprime os segundos e altura em que a bola se encontra.
void printBallHeight(double print_height, std::int16_t print_seconds)
{
    // TRUE: exibe os segundos e a altura.
    if (print_height > myConstants::ground)
    {
        std::cout << "\nEm " << print_seconds << " segundos, a altura da bola esta em " << print_height << " metros.\n";
    }
    // FALSE: exibe somente os segundos; a bola ja esta no chao.
    else
    {
        std::cout << "\nEm " << print_seconds << " segundos, a bola ja caiu no chao.\n";
    }
}

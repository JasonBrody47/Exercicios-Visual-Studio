// Copyright (C) 2017 Luan Eduardo.
//
// Este arquivo é parte do programa LearnCpp2.10_Question4.

#include "stdafx.h"
#include <iostream>
#include "Functions.h"
#include "constants.h"

double getInitialTowerHeight()
{
    std::cout << "Insira a altura inicial da torre em metros > ";
    double tower_height{};
    std::cin >> tower_height;

    // Limpa erros e caracteres no buffer de entrada.
    std::cin.clear();
    std::cin.ignore();

    return tower_height;
}

void calculateBallHeight(double current_height)
{
    double ball_velocity{ 0.0 };
    for (size_t seconds = 0; current_height > constants::ground; seconds++)
    {
        ball_velocity = constants::earth_gravity * (seconds * seconds) / 2;
        current_height -= ball_velocity;
        printBallHeightAndSeconds(current_height, seconds);
    }

}

void printBallHeightAndSeconds(double print_height, size_t print_seconds)
{
    if (print_height > constants::ground)
    {
        std::cout << "\nEm " << print_seconds << " segundos, a altura da bola esta em " <<
            print_height << " metros.\n";
    }
    else
    {
        std::cout << "\nEm " << print_seconds << " segundos, a bola ja caiu no chao.\n";
    }
}

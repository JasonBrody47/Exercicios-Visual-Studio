// LearnCpp2.10_Question4.

#include <iostream>
#include "functions.h"
#include "physics.h"

height_t getInitialHeight()
{
    height_t height;
    while (true)
    {
        std::cout << "Insira a altura inicial da torre em metros > ";
        std::cin >> height;

        if (isValidInput(height))
            break;
    }
    return height;
}

bool isValidInput(height_t input)
{
    if (std::cin.fail() || input <= 0)
    {
        std::cin.clear();
        std::cin.ignore(32767, '\n');
        std::cerr << "isValidInput(): valor invalida.\n";
        return false;
    }
    std::cin.ignore(32767, '\n');
    return true;
}

void calculateHeightFall(height_t height)
{
    using namespace physics;

    double velocity{ 0.0 };
    for (size_t seconds = 0; height > ground; ++seconds)
    {
        // Fórmula: v = g * t² / 2
        velocity = earth_gravity * (seconds * seconds) / 2;
        height -= velocity;
        printHeightAndSeconds(height, seconds);
    }

}

void printHeightAndSeconds(height_t height, size_t seconds)
{
    if (height > physics::ground)
        std::cout << "\nEm " << seconds << " segundos, o objeto esta em " <<
        height << " metros.\n";
    else
        std::cout << "\nEm " << seconds << " segundos, o objeto ja caiu no chao.\n";
}

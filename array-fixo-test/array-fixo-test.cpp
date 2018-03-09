// Teste com matriz (array) de tamanho fixo.

#include <iostream>

namespace animals {
    enum Animals
    {
        CHICKEN,
        DOG,
        CAT,
        ELEPHANT,
        DUCK,
        SNAKE,
        MAX_ANIMALS
    };
}

int main()
{
    double temperature[365]{ 0.0 };
    std::cout << "Temperatura no dia 30: " << temperature[29] << "\n";

    int animals[animals::MAX_ANIMALS]{2, 4, 4, 4, 2, 0};
    std::cout << "Um elefante tem " << animals[animals::ELEPHANT] << " patas\n";

    std::cin.get();
    return 0;
}


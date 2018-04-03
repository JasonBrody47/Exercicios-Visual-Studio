// LearnCpp3.2_Question2.

#include <iostream>
#include <cstdint>

int32_t getNumber();
void isEven(std::int32_t number);

int main()
{
    isEven(getNumber());

    std::cin.get();
    return 0;
}

int32_t getNumber()
{
    while (true)
    {
        std::cout << "Insira um numero inteiro > ";
        std::int32_t number;
        std::cin >> number;

        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cerr << "getNumber(): valor invalido!\n";
        }
        else
        {
            std::cin.ignore(32767, '\n');
            return number;
        }
    }
}

void isEven(std::int32_t number)
{
    // Método comum por comparação de resto da divisão.
    //if (number % 2 == 0)
    //    std::cout << "O numero e par" << "\n";
    //else
    //    std::cout << "O numero e impar" << "\n";

    // Método de comparação bit a bit.
    if (number & 0b1)
        std::cout << "O numero e impar" << "\n";
    else
        std::cout << "O numero e impar" << "\n";
}
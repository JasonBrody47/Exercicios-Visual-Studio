#include <iostream>

inline int factorial(int input);
inline int sumNumbersInInteger(int input);
inline void decimalToBinary(int input);
inline void printBinary(unsigned int input);

int main()
{
    int factorialProduct{ 7 };
    std::cout << "Fatorial de " << factorialProduct << " e " <<
        factorial(factorialProduct) << "\n";

    int integer{ 93427 };
    std::cout << "A soma de todos os numeros de " << integer << " e " <<
        sumNumbersInInteger(integer) << "\n";

    // Funciona somante com números negativos.
    decimalToBinary(15);

    std::cin.get();
    return 0;
}

inline int factorial(int input)
{
    return (input < 1) ? 1 : input * factorial(input - 1);
}

inline int sumNumbersInInteger(int input)
{
    return (input < 10) ? input : (sumNumbersInInteger(input / 10) + input % 10);
}

inline void decimalToBinary(int input)
{
    if (input == 0)
        std::cout << "0";
    else
        printBinary(static_cast<unsigned int>(input));
}

inline void printBinary(unsigned int input)
{
    if (input == 0)
        return;

    printBinary(input / 2);

    std::cout << input % 2 << " ";
}


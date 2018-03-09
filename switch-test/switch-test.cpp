#include "stdafx.h"
#include <iostream>

int calculate(int x, int y, char op);
void limparBuffer();

int main()
{
    std::cout << "Insira um numero inteiro > ";
    int x;
    std::cin >> x;
    limparBuffer();
    std::cout << "Insira outro numero inteiro > ";
    int y;
    std::cin >> y;
    limparBuffer();

    std::cout << "Insira um operador matematico > ";
    char op;
    std::cin >> op;
    limparBuffer();

    std::cout << calculate(x, y, op) << "\n";

    std::cin.get();
    return 0;
}

int calculate(int x, int y, char op)
{
    switch (op)
    {
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    case '/':
        return x / y;
    default:
        std::cout << "Calculate(): Invalid Operator\n";
        return -1;
        break;
    }
}

void limparBuffer()
{
    std::cin.ignore();
    std::cin.clear();
}

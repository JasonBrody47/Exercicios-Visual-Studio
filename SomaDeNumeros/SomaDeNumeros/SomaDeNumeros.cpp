// Copyright (C) 2017 Luan Eduardo.
//
// Este arquivo é parte do programa SomaDeNumeros.

#include "stdafx.h"
#include <cstdint>
#include <iostream>

void getNumbers();
void addNumbers(std::int32_t number_1, std::int32_t number_2,
    std::int32_t number_3, std::int32_t number_4);
void printSumOfNumbers(std::int32_t sum);
void clearInputBuffer();

/* Funcao principal.
*/
int main()
{
    getNumbers();

    std::cin.get();

    return 0;
}

void getNumbers()
{
    std::cout << "Insira o primeiro numero > ";
    std::int32_t number_1{};
    std::cin >> number_1;
    clearInputBuffer();

    std::cout << "Insira o segundo numero > ";
    std::int32_t number_2{};
    std::cin >> number_2;
    clearInputBuffer();

    std::cout << "Insira o terceiro numero > ";
    std::int32_t number_3{};
    std::cin >> number_3;
    clearInputBuffer();

    std::cout << "Insira o quarto numero > ";
    std::int32_t number_4{};
    std::cin >> number_4;
    clearInputBuffer();

    addNumbers(number_1, number_2, number_3, number_4);
}

void clearInputBuffer()
{
    std::cin.clear();
    std::cin.ignore();
}

void addNumbers(std::int32_t number_1, std::int32_t number_2,
    std::int32_t number_3, std::int32_t number_4)
{
    printSumOfNumbers(number_1 + number_2 + number_3 + number_4);
}

/* Essa funcao recebe a soma pelo argumento passado
 * e exibe o resultado na tela.
*/
void printSumOfNumbers(std::int32_t sum)
{
    std::cout << "Resultado da soma: " << sum;
}
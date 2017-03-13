// Este programa obtem 2 numeros inteiro do usuario,
// soma e exibe o resultado dos 2.
// Criado por Luan Eduardo.
// Perfil GitHub: https://github.com/LuanEduardo47

#include "stdafx.h"
#include <iostream>
#include <cstdint>

// Prototipo de funcoes
int readNumber();
void writeAnswer(std::int32_t result);

/* Funcao principal: Guarda o valor de 2 numeros por meio de readNumber(),
 * chama a funcao para imprimir o resultado na tela com a soma dos numeros.
*/
int main()
{
    //int number_1 = readNumber();
    //int number_2 = readNumber();

    // Inicialização uniforme (C++11).
    std::int32_t number_1{ readNumber() };
    std::int32_t number_2{ readNumber() };
    // int sum = number_1 + number_2;
    writeAnswer(number_1 + number_2);

    std::cin.get();

    return 0;
}

/* Essa funcao recebe um numero inteiro do usuario e retorna ao chamador.
*/
int readNumber()
{
    std::cout << "Insira um numero inteiro > ";
    std::int32_t number;
    std::cin >> number;
    std::cin.clear();
    std::cin.ignore();

    return number;
}

/* Essa funcao exibe o resultado da soma na tela.
*/
void writeAnswer(std::int32_t result)
{
    std::cout << "A soma e: " << result << "\n";
}

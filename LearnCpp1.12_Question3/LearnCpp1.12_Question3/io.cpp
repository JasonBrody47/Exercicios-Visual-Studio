#include "stdafx.h"
#include <iostream>
#include <cstdint>

/* Le a entrada do usuario e retorna o numero inteiro ao chamador.
*/
std::int32_t readNumber()
{
	std::cout << "Insira um numero inteiro > ";
	std::int32_t number{};
	std::cin >> number;
	std::cin.clear();
	std::cin.ignore();

	return number;
}

/* Exibe a soma dos numeros na tela.
*/
void writeAnswer(std::int32_t result)
{
	std::cout << "A soma e: " << result << "\n";
}
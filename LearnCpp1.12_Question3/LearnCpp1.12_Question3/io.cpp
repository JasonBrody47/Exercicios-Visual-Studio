#include "stdafx.h"
#include <iostream>

/* Le a entrada do usuario e retorna o numero inteiro ao chamador.
*/
int readNumber()
{
	std::cout << "Insira um numero inteiro > ";
	int number(1);
	std::cin >> number;
	std::cin.clear();
	std::cin.ignore();

	return number;
}

/* Exibe a soma dos numeros na tela.
*/
void writeAnswer(int result)
{
	std::cout << "A soma e: " << result << "\n";
}
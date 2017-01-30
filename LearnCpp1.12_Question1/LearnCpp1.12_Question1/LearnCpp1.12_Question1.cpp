// Este programa obtem 2 numeros inteiro do usuario,
// soma e exibe o resultado dos 2.
// Criado por Luan Eduardo.
// Perfil GitHub: https://github.com/JasonBrody47

#include "stdafx.h"
#include <iostream>

// Prototipo de funcoes
int readNumber();
void writeAnswer(int result);

int main()
{
	int number_1 = readNumber();
	int number_2 = readNumber();
	// int sum = number_1 + number_2;
	writeAnswer(number_1 + number_2);

	std::cin.get();

    return 0;
}

int readNumber()
{
	std::cout << "Insira um numero inteiro > ";
	int number(1);
	std::cin >> number;
	std::cin.clear();
	std::cin.ignore();

	return number;
}

void writeAnswer(int result)
{
	std::cout << "A soma e: " << result << "\n";
}

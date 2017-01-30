#include "stdafx.h"
#include <iostream>

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
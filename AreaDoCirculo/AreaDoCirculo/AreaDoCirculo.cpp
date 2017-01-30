// Esse programa recebe o raio de um circulo, calcula e mostra sua area.
// Criado por Luan Eduardo.
// Perfil GitHub: https://github.com/JasonBrody47

#include "stdafx.h"
#include <iostream>

void getRaio();
void calcArea(float raio);
void printArea(float area);

int main()
{
	getRaio();
	std::cin.get();
    return 0;
}

void getRaio()
{
	float raio;

	std::cout << "Insira o raio do circulo > ";
	std::cin >> raio;
	std::cin.clear();
	std::cin.ignore();

	calcArea(raio);
}

void calcArea(float raio)
{
	float area = 3.14 * (raio * raio);
	printArea(area);
}

void printArea(float area)
{
	std::cout << "\nArea do circulo: " << area;
}
// Esse programa recebe a base e altura de um triangul, calcula e mostra o resultado da area.
// Criado por Luan Eduardo.
// Perfil GitHub: https://github.com/JasonBrody47

#include "stdafx.h"
#include <iostream>

void getMedidas();
void calcArea(float base, float altura);
void printArea(float area);
void limpaBuffer();

int main()
{
	getMedidas();
	std::cin.get();
    return 0;
}

void getMedidas()
{
	float base, altura;

	std::cout << "Insira a base do triangulo > ";
	std::cin >> base;
	limpaBuffer();

	std::cout << "\nInsira a altura do triangulo > ";
	std::cin >> altura;
	limpaBuffer();

	calcArea(base, altura);
}

void calcArea(float base, float altura)
{
	float area = (base * altura) / 2;
	printArea(area);
}

void printArea(float area)
{
	std::cout << "\nArea do triangulo: " << area;
}

void limpaBuffer()
{
	std::cin.clear();
	std::cin.ignore();
}